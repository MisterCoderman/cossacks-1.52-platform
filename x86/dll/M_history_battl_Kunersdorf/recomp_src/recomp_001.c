#include "recomp.h"

/* FUN_10006a10 @ 0x12946a10 (10 bytes, 5 insns) */
void f_12946a10(void) {
  FTRACE(0x12946a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12946a11 mov ebp, esp */
  EBP = (ESP);
  /* 12946a13 mov eax, 1 */
  EAX = (0x1u);
  /* 12946a18 pop ebp */
  EBP = (pop32());
  /* 12946a19 ret  */
  ESPCHK(0x12946a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x12946a20 (173 bytes, 59 insns) */
void f_12946a20(void) {
  FTRACE(0x12946a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12946a21 mov ebp, esp */
  EBP = (ESP);
  /* 12946a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946a26 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946a2a jbe 0x12946a33 */
  if ((C.cf||C.zf)) goto L_12946a33;
  /* 12946a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946a2e jmp 0x12946ac9 */
  goto L_12946ac9;
L_12946a33:;
  /* 12946a33 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946a35 call 0x12946550 */
  push32(0x12946a3au); f_12946550();
  /* 12946a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946a40 push eax */
  push32((uint32_t)(EAX));
  /* 12946a41 call 0x12946e50 */
  push32(0x12946a46u); f_12946e50();
  /* 12946a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946a49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12946a4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946a50 je 0x12946a91 */
  if (C.zf) goto L_12946a91;
  /* 12946a52 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12946a59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946a5c cmp ecx, dword ptr [0x1296cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946a62 ja 0x12946a82 */
  if ((!C.cf&&!C.zf)) goto L_12946a82;
  /* 12946a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946a67 push edx */
  push32((uint32_t)(EDX));
  /* 12946a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946a6b push eax */
  push32((uint32_t)(EAX));
  /* 12946a6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946a6f push ecx */
  push32((uint32_t)(ECX));
  /* 12946a70 call 0x12947d20 */
  push32(0x12946a75u); f_12947d20();
  /* 12946a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12946a7a je 0x12946a82 */
  if (C.zf) goto L_12946a82;
  /* 12946a7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946a7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12946a82:;
  /* 12946a82 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946a84 call 0x129465f0 */
  push32(0x12946a89u); f_129465f0();
  /* 12946a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946a8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946a8f jmp 0x12946ac9 */
  goto L_12946ac9;
L_12946a91:;
  /* 12946a91 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946a93 call 0x129465f0 */
  push32(0x12946a98u); f_129465f0();
  /* 12946a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946a9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946a9f jne 0x12946aa8 */
  if (!C.zf) goto L_12946aa8;
  /* 12946aa1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12946aa8:;
  /* 12946aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946aab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946aae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12946ab0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12946ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12946ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946aba push edx */
  push32((uint32_t)(EDX));
  /* 12946abb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12946abd mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946ac2 push eax */
  push32((uint32_t)(EAX));
  /* 12946ac3 call dword ptr [0x129702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702cc))), 0x12946ac9u);
L_12946ac9:;
  /* 12946ac9 mov esp, ebp */
  ESP = (EBP);
  /* 12946acb pop ebp */
  EBP = (pop32());
  /* 12946acc ret  */
  ESPCHK(0x12946a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x12946ad0 (490 bytes, 165 insns) */
void f_12946ad0(void) {
  FTRACE(0x12946ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12946ad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946ad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946ada jne 0x12946aed */
  if (!C.zf) goto L_12946aed;
  /* 12946adc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946adf push eax */
  push32((uint32_t)(EAX));
  /* 12946ae0 call 0x12946920 */
  push32(0x12946ae5u); f_12946920();
  /* 12946ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946ae8 jmp 0x12946cb6 */
  goto L_12946cb6;
L_12946aed:;
  /* 12946aed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946af1 jne 0x12946b06 */
  if (!C.zf) goto L_12946b06;
  /* 12946af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946af6 push ecx */
  push32((uint32_t)(ECX));
  /* 12946af7 call 0x12946cc0 */
  push32(0x12946afcu); f_12946cc0();
  /* 12946afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946b01 jmp 0x12946cb6 */
  goto L_12946cb6;
L_12946b06:;
  /* 12946b06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12946b0d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946b11 ja 0x12946c89 */
  if ((!C.cf&&!C.zf)) goto L_12946c89;
  /* 12946b17 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946b19 call 0x12946550 */
  push32(0x12946b1eu); f_12946550();
  /* 12946b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946b24 push edx */
  push32((uint32_t)(EDX));
  /* 12946b25 call 0x12946e50 */
  push32(0x12946b2au); f_12946e50();
  /* 12946b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946b2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12946b30 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946b34 je 0x12946c4c */
  if (C.zf) goto L_12946c4c;
  /* 12946b3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946b3d cmp eax, dword ptr [0x1296cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946b43 ja 0x12946bc0 */
  if ((!C.cf&&!C.zf)) goto L_12946bc0;
  /* 12946b45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946b48 push ecx */
  push32((uint32_t)(ECX));
  /* 12946b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946b4c push edx */
  push32((uint32_t)(EDX));
  /* 12946b4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12946b50 push eax */
  push32((uint32_t)(EAX));
  /* 12946b51 call 0x12947d20 */
  push32(0x12946b56u); f_12947d20();
  /* 12946b56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12946b5b je 0x12946b65 */
  if (C.zf) goto L_12946b65;
  /* 12946b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946b60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12946b63 jmp 0x12946bc0 */
  goto L_12946bc0;
L_12946b65:;
  /* 12946b65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946b68 push edx */
  push32((uint32_t)(EDX));
  /* 12946b69 call 0x129474e0 */
  push32(0x12946b6eu); f_129474e0();
  /* 12946b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12946b74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946b78 je 0x12946bc0 */
  if (C.zf) goto L_12946bc0;
  /* 12946b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946b7d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12946b80 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946b83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12946b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946b89 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946b8c jae 0x12946b96 */
  if (!C.cf) goto L_12946b96;
  /* 12946b8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946b91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12946b94 jmp 0x12946b9c */
  goto L_12946b9c;
L_12946b96:;
  /* 12946b96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946b99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12946b9c:;
  /* 12946b9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946b9f push edx */
  push32((uint32_t)(EDX));
  /* 12946ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12946ba4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12946ba8 call 0x12949430 */
  push32(0x12946badu); f_12949430();
  /* 12946bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946bb3 push edx */
  push32((uint32_t)(EDX));
  /* 12946bb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12946bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12946bb8 call 0x12946f10 */
  push32(0x12946bbdu); f_12946f10();
  /* 12946bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12946bc0:;
  /* 12946bc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946bc4 jne 0x12946c40 */
  if (!C.zf) goto L_12946c40;
  /* 12946bc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946bca jne 0x12946bd3 */
  if (!C.zf) goto L_12946bd3;
  /* 12946bcc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12946bd3:;
  /* 12946bd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946bd6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946bd9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12946bdc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12946bdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946be2 push edx */
  push32((uint32_t)(EDX));
  /* 12946be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12946be5 mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946bea push eax */
  push32((uint32_t)(EAX));
  /* 12946beb call dword ptr [0x12970304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970304))), 0x12946bf1u);
  /* 12946bf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12946bf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946bf8 je 0x12946c40 */
  if (C.zf) goto L_12946c40;
  /* 12946bfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946bfd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12946c00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946c03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12946c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946c09 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946c0c jae 0x12946c16 */
  if (!C.cf) goto L_12946c16;
  /* 12946c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946c11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12946c14 jmp 0x12946c1c */
  goto L_12946c1c;
L_12946c16:;
  /* 12946c16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946c19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12946c1c:;
  /* 12946c1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12946c1f push eax */
  push32((uint32_t)(EAX));
  /* 12946c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12946c24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946c27 push edx */
  push32((uint32_t)(EDX));
  /* 12946c28 call 0x12949430 */
  push32(0x12946c2du); f_12949430();
  /* 12946c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946c33 push eax */
  push32((uint32_t)(EAX));
  /* 12946c34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12946c37 push ecx */
  push32((uint32_t)(ECX));
  /* 12946c38 call 0x12946f10 */
  push32(0x12946c3du); f_12946f10();
  /* 12946c3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12946c40:;
  /* 12946c40 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946c42 call 0x129465f0 */
  push32(0x12946c47u); f_129465f0();
  /* 12946c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946c4a jmp 0x12946c89 */
  goto L_12946c89;
L_12946c4c:;
  /* 12946c4c push 9 */
  push32((uint32_t)(0x9u));
  /* 12946c4e call 0x129465f0 */
  push32(0x12946c53u); f_129465f0();
  /* 12946c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946c56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946c5a jne 0x12946c63 */
  if (!C.zf) goto L_12946c63;
  /* 12946c5c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12946c63:;
  /* 12946c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946c66 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946c69 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12946c6c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12946c6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946c72 push eax */
  push32((uint32_t)(EAX));
  /* 12946c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946c76 push ecx */
  push32((uint32_t)(ECX));
  /* 12946c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12946c79 mov edx, dword ptr [0x1296fe2c] */
  EDX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946c7f push edx */
  push32((uint32_t)(EDX));
  /* 12946c80 call dword ptr [0x129702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702cc))), 0x12946c86u);
  /* 12946c86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12946c89:;
  /* 12946c89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946c8d jne 0x12946c98 */
  if (!C.zf) goto L_12946c98;
  /* 12946c8f cmp dword ptr [0x1296e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946c96 jne 0x12946c9d */
  if (!C.zf) goto L_12946c9d;
L_12946c98:;
  /* 12946c98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946c9b jmp 0x12946cb6 */
  goto L_12946cb6;
L_12946c9d:;
  /* 12946c9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946ca0 push eax */
  push32((uint32_t)(EAX));
  /* 12946ca1 call 0x12946890 */
  push32(0x12946ca6u); f_12946890();
  /* 12946ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12946cab jne 0x12946cb1 */
  if (!C.zf) goto L_12946cb1;
  /* 12946cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946caf jmp 0x12946cb6 */
  goto L_12946cb6;
L_12946cb1:;
  /* 12946cb1 jmp 0x12946b06 */
  goto L_12946b06;
L_12946cb6:;
  /* 12946cb6 mov esp, ebp */
  ESP = (EBP);
  /* 12946cb8 pop ebp */
  EBP = (pop32());
  /* 12946cb9 ret  */
  ESPCHK(0x12946ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x12946cc0 (104 bytes, 38 insns) */
void f_12946cc0(void) {
  FTRACE(0x12946cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12946cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12946cc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946cc8 jne 0x12946ccc */
  if (!C.zf) goto L_12946ccc;
  /* 12946cca jmp 0x12946d24 */
  goto L_12946d24;
L_12946ccc:;
  /* 12946ccc push 9 */
  push32((uint32_t)(0x9u));
  /* 12946cce call 0x12946550 */
  push32(0x12946cd3u); f_12946550();
  /* 12946cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946cd9 push eax */
  push32((uint32_t)(EAX));
  /* 12946cda call 0x12946e50 */
  push32(0x12946cdfu); f_12946e50();
  /* 12946cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946ce2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12946ce5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946ce9 je 0x12946d07 */
  if (C.zf) goto L_12946d07;
  /* 12946ceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946cee push ecx */
  push32((uint32_t)(ECX));
  /* 12946cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946cf2 push edx */
  push32((uint32_t)(EDX));
  /* 12946cf3 call 0x12946f10 */
  push32(0x12946cf8u); f_12946f10();
  /* 12946cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946cfb push 9 */
  push32((uint32_t)(0x9u));
  /* 12946cfd call 0x129465f0 */
  push32(0x12946d02u); f_129465f0();
  /* 12946d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946d05 jmp 0x12946d24 */
  goto L_12946d24;
L_12946d07:;
  /* 12946d07 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946d09 call 0x129465f0 */
  push32(0x12946d0eu); f_129465f0();
  /* 12946d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946d14 push eax */
  push32((uint32_t)(EAX));
  /* 12946d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12946d17 mov ecx, dword ptr [0x1296fe2c] */
  ECX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946d1d push ecx */
  push32((uint32_t)(ECX));
  /* 12946d1e call dword ptr [0x129702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e4))), 0x12946d24u);
L_12946d24:;
  /* 12946d24 mov esp, ebp */
  ESP = (EBP);
  /* 12946d26 pop ebp */
  EBP = (pop32());
  /* 12946d27 ret  */
  ESPCHK(0x12946cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x12946d30 (116 bytes, 34 insns) */
void f_12946d30(void) {
  FTRACE(0x12946d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12946d31 mov ebp, esp */
  EBP = (ESP);
  /* 12946d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12946d34 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12946d3b push 9 */
  push32((uint32_t)(0x9u));
  /* 12946d3d call 0x12946550 */
  push32(0x12946d42u); f_12946550();
  /* 12946d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946d45 call 0x12948440 */
  push32(0x12946d4au); f_12948440();
  /* 12946d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12946d4c jge 0x12946d55 */
  if ((C.sf==C.of)) goto L_12946d55;
  /* 12946d4e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12946d55:;
  /* 12946d55 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946d57 call 0x129465f0 */
  push32(0x12946d5cu); f_129465f0();
  /* 12946d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12946d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12946d63 mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946d68 push eax */
  push32((uint32_t)(EAX));
  /* 12946d69 call dword ptr [0x129702c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702c4))), 0x12946d6fu);
  /* 12946d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12946d71 jne 0x12946d9d */
  if (!C.zf) goto L_12946d9d;
  /* 12946d73 call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x12946d79u);
  /* 12946d79 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946d7c jne 0x12946d96 */
  if (!C.zf) goto L_12946d96;
  /* 12946d7e call 0x1294aa30 */
  push32(0x12946d83u); f_1294aa30();
  /* 12946d83 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12946d89 call 0x1294aa20 */
  push32(0x12946d8eu); f_1294aa20();
  /* 12946d8e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12946d94 jmp 0x12946d9d */
  goto L_12946d9d;
L_12946d96:;
  /* 12946d96 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12946d9d:;
  /* 12946d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946da0 mov esp, ebp */
  ESP = (EBP);
  /* 12946da2 pop ebp */
  EBP = (pop32());
  /* 12946da3 ret  */
  ESPCHK(0x12946d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x12946db0 (10 bytes, 5 insns) */
void f_12946db0(void) {
  FTRACE(0x12946db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946db1 mov ebp, esp */
  EBP = (ESP);
  /* 12946db3 call 0x12946d30 */
  push32(0x12946db8u); f_12946d30();
  /* 12946db8 pop ebp */
  EBP = (pop32());
  /* 12946db9 ret  */
  ESPCHK(0x12946db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x12946dc0 (10 bytes, 5 insns) */
void f_12946dc0(void) {
  FTRACE(0x12946dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12946dc3 mov eax, dword ptr [0x1296cc94] */
  EAX = (r32((uint32_t)(0x1296cc94)));
  /* 12946dc8 pop ebp */
  EBP = (pop32());
  /* 12946dc9 ret  */
  ESPCHK(0x12946dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x12946dd0 (31 bytes, 11 insns) */
void f_12946dd0(void) {
  FTRACE(0x12946dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12946dd3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946dda jbe 0x12946de0 */
  if ((C.cf||C.zf)) goto L_12946de0;
  /* 12946ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946dde jmp 0x12946ded */
  goto L_12946ded;
L_12946de0:;
  /* 12946de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946de3 mov dword ptr [0x1296cc94], eax */
  w32((uint32_t)(0x1296cc94), (EAX));
  /* 12946de8 mov eax, 1 */
  EAX = (0x1u);
L_12946ded:;
  /* 12946ded pop ebp */
  EBP = (pop32());
  /* 12946dee ret  */
  ESPCHK(0x12946dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x12946df0 (89 bytes, 20 insns) */
void f_12946df0(void) {
  FTRACE(0x12946df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946df1 mov ebp, esp */
  EBP = (ESP);
  /* 12946df3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12946df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12946dfa mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946dff push eax */
  push32((uint32_t)(EAX));
  /* 12946e00 call dword ptr [0x12970304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970304))), 0x12946e06u);
  /* 12946e06 mov dword ptr [0x1296fe28], eax */
  w32((uint32_t)(0x1296fe28), (EAX));
  /* 12946e0b cmp dword ptr [0x1296fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946e12 jne 0x12946e18 */
  if (!C.zf) goto L_12946e18;
  /* 12946e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946e16 jmp 0x12946e47 */
  goto L_12946e47;
L_12946e18:;
  /* 12946e18 mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 12946e1e mov dword ptr [0x1296fe1c], ecx */
  w32((uint32_t)(0x1296fe1c), (ECX));
  /* 12946e24 mov dword ptr [0x1296fe20], 0 */
  w32((uint32_t)(0x1296fe20), (0x0u));
  /* 12946e2e mov dword ptr [0x1296fe24], 0 */
  w32((uint32_t)(0x1296fe24), (0x0u));
  /* 12946e38 mov dword ptr [0x1296fe08], 0x10 */
  w32((uint32_t)(0x1296fe08), (0x10u));
  /* 12946e42 mov eax, 1 */
  EAX = (0x1u);
L_12946e47:;
  /* 12946e47 pop ebp */
  EBP = (pop32());
  /* 12946e48 ret  */
  ESPCHK(0x12946df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e50 @ 0x12946e50 (85 bytes, 29 insns) */
void f_12946e50(void) {
  FTRACE(0x12946e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12946e51 mov ebp, esp */
  EBP = (ESP);
  /* 12946e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946e56 mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 12946e5b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12946e5e mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 12946e64 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946e66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12946e69 mov edx, dword ptr [0x1296fe28] */
  EDX = (r32((uint32_t)(0x1296fe28)));
  /* 12946e6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12946e72:;
  /* 12946e72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946e75 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946e78 jae 0x12946e9f */
  if (!C.cf) goto L_12946e9f;
  /* 12946e7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946e7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946e80 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946e83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12946e86 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946e8d jae 0x12946e94 */
  if (!C.cf) goto L_12946e94;
  /* 12946e8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946e92 jmp 0x12946ea1 */
  goto L_12946ea1;
L_12946e94:;
  /* 12946e94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946e97 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946e9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12946e9d jmp 0x12946e72 */
  goto L_12946e72;
L_12946e9f:;
  /* 12946e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12946ea1:;
  /* 12946ea1 mov esp, ebp */
  ESP = (EBP);
  /* 12946ea3 pop ebp */
  EBP = (pop32());
  /* 12946ea4 ret  */
  ESPCHK(0x12946e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x12946eb0 (95 bytes, 33 insns) */
void f_12946eb0(void) {
  FTRACE(0x12946eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12946eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12946eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946eb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946ebc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946ebf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12946ec2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946ec5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12946ec8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12946ecb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12946ed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946ed3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12946ed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946ed8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12946edb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12946edd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12946edf jne 0x12946f01 */
  if (!C.zf) goto L_12946f01;
  /* 12946ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946ee4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12946ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12946ee9 jne 0x12946f01 */
  if (!C.zf) goto L_12946f01;
  /* 12946eeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946eee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12946ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12946ef6 je 0x12946f01 */
  if (C.zf) goto L_12946f01;
  /* 12946ef8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12946eff jmp 0x12946f08 */
  goto L_12946f08;
L_12946f01:;
  /* 12946f01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12946f08:;
  /* 12946f08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12946f0b mov esp, ebp */
  ESP = (EBP);
  /* 12946f0d pop ebp */
  EBP = (pop32());
  /* 12946f0e ret  */
  ESPCHK(0x12946eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x12946f10 (1485 bytes, 453 insns) */
void f_12946f10(void) {
  FTRACE(0x12946f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12946f11 mov ebp, esp */
  EBP = (ESP);
  /* 12946f13 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946f19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12946f1c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12946f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946f22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946f25 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946f28 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12946f2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946f2e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12946f31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12946f34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946f37 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12946f3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12946f40 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12946f47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12946f4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946f4d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946f50 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12946f53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12946f56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12946f58 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946f5b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12946f5e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12946f61 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946f64 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12946f67 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12946f6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12946f6c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12946f6f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12946f72 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12946f75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12946f78 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12946f7b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12946f7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12946f80 jne 0x129470a8 */
  if (!C.zf) goto L_129470a8;
  /* 12946f86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12946f89 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12946f8c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946f8f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12946f92 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946f96 jbe 0x12946f9f */
  if ((C.cf||C.zf)) goto L_12946f9f;
  /* 12946f98 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12946f9f:;
  /* 12946f9f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12946fa2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12946fa5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12946fa8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946fab jne 0x12947081 */
  if (!C.zf) goto L_12947081;
  /* 12946fb1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946fb5 jae 0x12947016 */
  if (!C.cf) goto L_12947016;
  /* 12946fb7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12946fbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12946fbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12946fc1 not eax */
  EAX = (~(EAX));
  /* 12946fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946fc6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12946fc9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12946fcd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12946fcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946fd2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12946fd5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12946fd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12946fdc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946fdf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12946fe2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12946fe5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12946fe8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946feb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12946fee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12946ff1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946ff4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12946ff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12946ffa jne 0x12947014 */
  if (!C.zf) goto L_12947014;
  /* 12946ffc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947001 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12947004 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12947006 not eax */
  EAX = (~(EAX));
  /* 12947008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294700b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294700d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1294700f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947012 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12947014:;
  /* 12947014 jmp 0x12947081 */
  goto L_12947081;
L_12947016:;
  /* 12947016 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12947019 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294701c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947021 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947023 not edx */
  EDX = (~(EDX));
  /* 12947025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947028 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1294702b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12947032 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12947034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947037 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1294703a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12947041 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947044 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947047 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1294704a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1294704d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947050 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947053 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12947056 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947059 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294705c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12947060 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12947062 jne 0x12947081 */
  if (!C.zf) goto L_12947081;
  /* 12947064 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12947067 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294706a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1294706f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947071 not edx */
  EDX = (~(EDX));
  /* 12947073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947076 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12947079 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1294707b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294707e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12947081:;
  /* 12947081 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947084 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12947087 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1294708a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1294708d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12947090 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947093 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947096 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947099 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294709c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1294709f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129470a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129470a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_129470a8:;
  /* 129470a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129470ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129470ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129470b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129470b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129470b8 jbe 0x129470c1 */
  if ((C.cf||C.zf)) goto L_129470c1;
  /* 129470ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_129470c1:;
  /* 129470c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129470c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129470c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129470c9 jne 0x12947225 */
  if (!C.zf) goto L_12947225;
  /* 129470cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129470d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129470d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 129470d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129470db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129470de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129470e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 129470e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129470e8 jbe 0x129470f1 */
  if ((C.cf||C.zf)) goto L_129470f1;
  /* 129470ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_129470f1:;
  /* 129470f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129470f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129470f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 129470fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129470fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12947100 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947103 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12947106 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294710a jbe 0x12947113 */
  if ((C.cf||C.zf)) goto L_12947113;
  /* 1294710c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12947113:;
  /* 12947113 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947116 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947119 je 0x1294721f */
  if (C.zf) goto L_1294721f;
  /* 1294711f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947122 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947125 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947128 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294712b jne 0x12947201 */
  if (!C.zf) goto L_12947201;
  /* 12947131 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947135 jae 0x12947196 */
  if (!C.cf) goto L_12947196;
  /* 12947137 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1294713c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294713f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947141 not edx */
  EDX = (~(EDX));
  /* 12947143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947146 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947149 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1294714d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294714f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947152 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947155 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12947159 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1294715c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294715f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12947162 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12947165 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947168 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294716b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1294716e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947171 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947174 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12947178 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294717a jne 0x12947194 */
  if (!C.zf) goto L_12947194;
  /* 1294717c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947181 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947184 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947186 not edx */
  EDX = (~(EDX));
  /* 12947188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294718b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294718d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1294718f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947192 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12947194:;
  /* 12947194 jmp 0x12947201 */
  goto L_12947201;
L_12947196:;
  /* 12947196 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947199 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294719c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129471a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129471a3 not eax */
  EAX = (~(EAX));
  /* 129471a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129471a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129471ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129471b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129471b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129471b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129471ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 129471c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129471c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129471c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129471ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129471cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129471d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129471d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129471d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129471d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129471dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129471e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129471e2 jne 0x12947201 */
  if (!C.zf) goto L_12947201;
  /* 129471e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129471e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129471ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129471ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129471f1 not eax */
  EAX = (~(EAX));
  /* 129471f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129471f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129471f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129471fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129471fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12947201:;
  /* 12947201 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947204 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12947207 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1294720a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294720d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12947210 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947213 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12947216 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947219 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1294721c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1294721f:;
  /* 1294721f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947222 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12947225:;
  /* 12947225 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12947228 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294722b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294722d jne 0x1294723b */
  if (!C.zf) goto L_1294723b;
  /* 1294722f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947232 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947235 je 0x1294734b */
  if (C.zf) goto L_1294734b;
L_1294723b:;
  /* 1294723b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294723e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12947241 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12947244 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12947247 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294724a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294724d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947250 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12947253 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947256 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947259 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1294725c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294725f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947262 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12947265 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947268 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294726b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294726e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12947271 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947274 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947277 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294727a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294727d jne 0x1294734b */
  if (!C.zf) goto L_1294734b;
  /* 12947283 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947287 jae 0x129472e4 */
  if (!C.cf) goto L_129472e4;
  /* 12947289 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1294728c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294728f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12947293 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947296 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947299 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1294729c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294729f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129472a2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129472a5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 129472a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129472aa jne 0x129472c2 */
  if (!C.zf) goto L_129472c2;
  /* 129472ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129472b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129472b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129472b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129472b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129472bb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129472bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129472c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129472c2:;
  /* 129472c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129472c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129472ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129472cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129472cf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129472d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129472d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129472d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129472db mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129472de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129472e2 jmp 0x1294734b */
  goto L_1294734b;
L_129472e4:;
  /* 129472e4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129472e7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129472ea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129472ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129472f1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129472f4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129472f7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129472fa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129472fd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947300 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12947303 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12947305 jne 0x12947322 */
  if (!C.zf) goto L_12947322;
  /* 12947307 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294730a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294730d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947312 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947317 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294731a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1294731c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294731f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12947322:;
  /* 12947322 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947325 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947328 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1294732d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1294732f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947332 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947335 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1294733c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294733e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947341 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12947344 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1294734b:;
  /* 1294734b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294734e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947351 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12947353 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947356 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947359 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294735c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1294735f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12947362 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12947364 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294736a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1294736c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294736f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947372 jne 0x129474d9 */
  if (!C.zf) goto L_129474d9;
  /* 12947378 cmp dword ptr [0x1296fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294737f je 0x129474c8 */
  if (C.zf) goto L_129474c8;
  /* 12947385 mov eax, dword ptr [0x1296fe18] */
  EAX = (r32((uint32_t)(0x1296fe18)));
  /* 1294738a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1294738d mov ecx, dword ptr [0x1296fe20] */
  ECX = (r32((uint32_t)(0x1296fe20)));
  /* 12947393 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12947396 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947398 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1294739b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 129473a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129473a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129473a8 push eax */
  push32((uint32_t)(EAX));
  /* 129473a9 call dword ptr [0x129702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e8))), 0x129473afu);
  /* 129473af mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129473b4 mov ecx, dword ptr [0x1296fe18] */
  ECX = (r32((uint32_t)(0x1296fe18)));
  /* 129473ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129473bc mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 129473c1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129473c4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129473c6 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 129473cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129473cf mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 129473d4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129473d7 mov edx, dword ptr [0x1296fe18] */
  EDX = (r32((uint32_t)(0x1296fe18)));
  /* 129473dd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 129473e8 mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 129473ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129473f0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 129473f3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129473f6 mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 129473fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129473fe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12947401 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 12947407 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1294740a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1294740e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12947410 jne 0x12947426 */
  if (!C.zf) goto L_12947426;
  /* 12947412 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 12947418 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1294741b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1294741d mov ecx, dword ptr [0x1296fe20] */
  ECX = (r32((uint32_t)(0x1296fe20)));
  /* 12947423 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12947426:;
  /* 12947426 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 1294742c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947430 jne 0x129474c8 */
  if (!C.zf) goto L_129474c8;
  /* 12947436 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1294743b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294743d mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 12947442 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12947445 push ecx */
  push32((uint32_t)(ECX));
  /* 12947446 call dword ptr [0x129702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e8))), 0x1294744cu);
  /* 1294744c mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 12947452 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12947455 push eax */
  push32((uint32_t)(EAX));
  /* 12947456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12947458 mov ecx, dword ptr [0x1296fe2c] */
  ECX = (r32((uint32_t)(0x1296fe2c)));
  /* 1294745e push ecx */
  push32((uint32_t)(ECX));
  /* 1294745f call dword ptr [0x129702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e4))), 0x12947465u);
  /* 12947465 mov edx, dword ptr [0x1296fe24] */
  EDX = (r32((uint32_t)(0x1296fe24)));
  /* 1294746b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294746e mov eax, dword ptr [0x1296fe28] */
  EAX = (r32((uint32_t)(0x1296fe28)));
  /* 12947473 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947475 mov ecx, dword ptr [0x1296fe20] */
  ECX = (r32((uint32_t)(0x1296fe20)));
  /* 1294747b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294747e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947480 push eax */
  push32((uint32_t)(EAX));
  /* 12947481 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 12947487 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294748a push edx */
  push32((uint32_t)(EDX));
  /* 1294748b mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 12947490 push eax */
  push32((uint32_t)(EAX));
  /* 12947491 call 0x1294aa40 */
  push32(0x12947496u); f_1294aa40();
  /* 12947496 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12947499 mov ecx, dword ptr [0x1296fe24] */
  ECX = (r32((uint32_t)(0x1296fe24)));
  /* 1294749f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129474a2 mov dword ptr [0x1296fe24], ecx */
  w32((uint32_t)(0x1296fe24), (ECX));
  /* 129474a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129474ab cmp edx, dword ptr [0x1296fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129474b1 jbe 0x129474bc */
  if ((C.cf||C.zf)) goto L_129474bc;
  /* 129474b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129474b6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129474b9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129474bc:;
  /* 129474bc mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 129474c2 mov dword ptr [0x1296fe1c], ecx */
  w32((uint32_t)(0x1296fe1c), (ECX));
L_129474c8:;
  /* 129474c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129474cb mov dword ptr [0x1296fe20], edx */
  w32((uint32_t)(0x1296fe20), (EDX));
  /* 129474d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129474d4 mov dword ptr [0x1296fe18], eax */
  w32((uint32_t)(0x1296fe18), (EAX));
L_129474d9:;
  /* 129474d9 mov esp, ebp */
  ESP = (EBP);
  /* 129474db pop ebp */
  EBP = (pop32());
  /* 129474dc ret  */
  ESPCHK(0x12946f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100074e0 @ 0x129474e0 (1334 bytes, 427 insns) */
void f_129474e0(void) {
  FTRACE(0x129474e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129474e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129474e1 mov ebp, esp */
  EBP = (ESP);
  /* 129474e3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129474e6 push esi */
  push32((uint32_t)(ESI));
  /* 129474e7 mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 129474ec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129474ef mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 129474f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129474f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129474fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129474fd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947500 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12947503 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12947506 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947509 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1294750c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294750f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12947512 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947516 jge 0x1294752c */
  if ((C.sf==C.of)) goto L_1294752c;
  /* 12947518 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294751b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294751e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947520 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12947523 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1294752a jmp 0x12947541 */
  goto L_12947541;
L_1294752c:;
  /* 1294752c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12947533 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947536 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947539 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294753c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1294753e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12947541:;
  /* 12947541 mov ecx, dword ptr [0x1296fe1c] */
  ECX = (r32((uint32_t)(0x1296fe1c)));
  /* 12947547 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1294754a:;
  /* 1294754a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294754d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947550 jae 0x12947576 */
  if (!C.cf) goto L_12947576;
  /* 12947552 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947555 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12947558 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1294755a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294755d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947560 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12947563 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12947565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12947567 je 0x1294756b */
  if (C.zf) goto L_1294756b;
  /* 12947569 jmp 0x12947576 */
  goto L_12947576;
L_1294756b:;
  /* 1294756b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294756e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947571 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12947574 jmp 0x1294754a */
  goto L_1294754a;
L_12947576:;
  /* 12947576 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947579 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294757c jne 0x1294765d */
  if (!C.zf) goto L_1294765d;
  /* 12947582 mov eax, dword ptr [0x1296fe28] */
  EAX = (r32((uint32_t)(0x1296fe28)));
  /* 12947587 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1294758a:;
  /* 1294758a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294758d cmp ecx, dword ptr [0x1296fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947593 jae 0x129475b9 */
  if (!C.cf) goto L_129475b9;
  /* 12947595 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947598 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294759b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1294759d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 129475a3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 129475a6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129475a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129475aa je 0x129475ae */
  if (C.zf) goto L_129475ae;
  /* 129475ac jmp 0x129475b9 */
  goto L_129475b9;
L_129475ae:;
  /* 129475ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475b1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129475b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129475b7 jmp 0x1294758a */
  goto L_1294758a;
L_129475b9:;
  /* 129475b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475bc cmp ecx, dword ptr [0x1296fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129475c2 jne 0x1294765d */
  if (!C.zf) goto L_1294765d;
L_129475c8:;
  /* 129475c8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475cb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129475ce jae 0x129475e6 */
  if (!C.cf) goto L_129475e6;
  /* 129475d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129475d7 je 0x129475db */
  if (C.zf) goto L_129475db;
  /* 129475d9 jmp 0x129475e6 */
  goto L_129475e6;
L_129475db:;
  /* 129475db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129475e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129475e4 jmp 0x129475c8 */
  goto L_129475c8;
L_129475e6:;
  /* 129475e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129475ec jne 0x12947637 */
  if (!C.zf) goto L_12947637;
  /* 129475ee mov eax, dword ptr [0x1296fe28] */
  EAX = (r32((uint32_t)(0x1296fe28)));
  /* 129475f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_129475f6:;
  /* 129475f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129475f9 cmp ecx, dword ptr [0x1296fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129475ff jae 0x12947617 */
  if (!C.cf) goto L_12947617;
  /* 12947601 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947604 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947608 je 0x1294760c */
  if (C.zf) goto L_1294760c;
  /* 1294760a jmp 0x12947617 */
  goto L_12947617;
L_1294760c:;
  /* 1294760c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294760f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947612 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12947615 jmp 0x129475f6 */
  goto L_129475f6;
L_12947617:;
  /* 12947617 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294761a cmp ecx, dword ptr [0x1296fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947620 jne 0x12947637 */
  if (!C.zf) goto L_12947637;
  /* 12947622 call 0x12947a20 */
  push32(0x12947627u); f_12947a20();
  /* 12947627 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1294762a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294762e jne 0x12947637 */
  if (!C.zf) goto L_12947637;
  /* 12947630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12947632 jmp 0x12947a11 */
  goto L_12947a11;
L_12947637:;
  /* 12947637 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294763a push edx */
  push32((uint32_t)(EDX));
  /* 1294763b call 0x12947b30 */
  push32(0x12947640u); f_12947b30();
  /* 12947640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12947643 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947646 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12947649 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1294764b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294764e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12947651 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947654 jne 0x1294765d */
  if (!C.zf) goto L_1294765d;
  /* 12947656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12947658 jmp 0x12947a11 */
  goto L_12947a11;
L_1294765d:;
  /* 1294765d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947660 mov dword ptr [0x1296fe1c], edx */
  w32((uint32_t)(0x1296fe1c), (EDX));
  /* 12947666 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947669 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294766c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1294766f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947672 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12947674 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12947677 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294767b je 0x129476a0 */
  if (C.zf) goto L_129476a0;
  /* 1294767d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947680 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947683 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12947686 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1294768a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294768d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947690 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12947693 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1294769a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1294769c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294769e jne 0x129476d5 */
  if (!C.zf) goto L_129476d5;
L_129476a0:;
  /* 129476a0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_129476a7:;
  /* 129476a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129476aa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129476ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129476b0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 129476b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129476b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129476ba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 129476bd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 129476c4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 129476c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129476c8 jne 0x129476d5 */
  if (!C.zf) goto L_129476d5;
  /* 129476ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129476cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129476d0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 129476d3 jmp 0x129476a7 */
  goto L_129476a7;
L_129476d5:;
  /* 129476d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129476d8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129476de mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129476e1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 129476e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129476eb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129476f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129476f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129476f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129476fb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 129476ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12947702 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947706 jne 0x12947722 */
  if (!C.zf) goto L_12947722;
  /* 12947708 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1294770f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947712 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947715 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12947718 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1294771f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12947722:;
  /* 12947722 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947726 jl 0x1294773b */
  if ((C.sf!=C.of)) goto L_1294773b;
  /* 12947728 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294772b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294772d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12947730 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947733 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947736 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12947739 jmp 0x12947722 */
  goto L_12947722;
L_1294773b:;
  /* 1294773b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294773e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947741 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12947745 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12947748 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294774b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1294774d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947750 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12947753 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12947756 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12947759 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294775c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294775f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947763 jle 0x1294776c */
  if ((C.zf||C.sf!=C.of)) goto L_1294776c;
  /* 12947765 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1294776c:;
  /* 1294776c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294776f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947772 je 0x12947990 */
  if (C.zf) goto L_12947990;
  /* 12947778 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294777b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294777e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12947781 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947784 jne 0x1294785a */
  if (!C.zf) goto L_1294785a;
  /* 1294778a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294778e jge 0x129477ef */
  if ((C.sf==C.of)) goto L_129477ef;
  /* 12947790 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947795 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947798 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1294779a not eax */
  EAX = (~(EAX));
  /* 1294779c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294779f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129477a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129477a6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129477a8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129477ab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129477ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129477b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129477b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129477b8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129477bb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129477be mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129477c1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129477c4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129477c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129477ca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129477cd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129477d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129477d3 jne 0x129477ed */
  if (!C.zf) goto L_129477ed;
  /* 129477d5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129477da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129477dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129477df not eax */
  EAX = (~(EAX));
  /* 129477e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129477e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129477e6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129477e8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129477eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129477ed:;
  /* 129477ed jmp 0x1294785a */
  goto L_1294785a;
L_129477ef:;
  /* 129477ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129477f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129477f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129477fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129477fc not edx */
  EDX = (~(EDX));
  /* 129477fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947801 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947804 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1294780b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294780d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947810 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947813 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1294781a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1294781d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947820 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12947823 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12947826 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947829 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294782c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1294782f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947832 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947835 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12947839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294783b jne 0x1294785a */
  if (!C.zf) goto L_1294785a;
  /* 1294783d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947840 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947843 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947848 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1294784a not edx */
  EDX = (~(EDX));
  /* 1294784c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294784f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12947852 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12947854 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947857 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1294785a:;
  /* 1294785a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294785d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12947860 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947863 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12947866 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12947869 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294786c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294786f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947872 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12947875 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12947878 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294787c je 0x12947990 */
  if (C.zf) goto L_12947990;
  /* 12947882 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947888 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1294788b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294788e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12947894 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12947897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1294789a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294789d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129478a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129478a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129478a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129478a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129478ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129478af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129478b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129478b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129478b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129478bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129478be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129478c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129478c4 jne 0x12947990 */
  if (!C.zf) goto L_12947990;
  /* 129478ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129478ce jge 0x1294792a */
  if ((C.sf==C.of)) goto L_1294792a;
  /* 129478d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129478d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129478d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129478da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129478dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129478e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129478e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129478e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129478e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129478eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129478ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129478f0 jne 0x12947908 */
  if (!C.zf) goto L_12947908;
  /* 129478f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129478f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129478fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129478fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129478ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12947901 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12947903 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947906 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12947908:;
  /* 12947908 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1294790d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947910 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947912 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947915 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947918 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1294791c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294791e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947921 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947924 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12947928 jmp 0x12947990 */
  goto L_12947990;
L_1294792a:;
  /* 1294792a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1294792d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947930 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12947934 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947937 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294793a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1294793d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294793f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947942 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947945 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12947948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294794a jne 0x12947967 */
  if (!C.zf) goto L_12947967;
  /* 1294794c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294794f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947952 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947957 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12947959 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294795c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294795f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12947961 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947964 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12947967:;
  /* 12947967 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294796a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294796d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947972 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947974 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947977 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1294797a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12947981 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12947983 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947986 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947989 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12947990:;
  /* 12947990 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947994 je 0x129479aa */
  if (C.zf) goto L_129479aa;
  /* 12947996 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294799c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1294799e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129479a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129479a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129479a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_129479aa:;
  /* 129479aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129479ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129479b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129479b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129479b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129479b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129479bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129479be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129479c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129479c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129479c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129479ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 129479cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129479d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129479d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129479d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129479d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129479da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129479dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129479df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129479e1 jne 0x12947a03 */
  if (!C.zf) goto L_12947a03;
  /* 129479e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129479e6 cmp eax, dword ptr [0x1296fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129479ec jne 0x12947a03 */
  if (!C.zf) goto L_12947a03;
  /* 129479ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129479f1 cmp ecx, dword ptr [0x1296fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129479f7 jne 0x12947a03 */
  if (!C.zf) goto L_12947a03;
  /* 129479f9 mov dword ptr [0x1296fe20], 0 */
  w32((uint32_t)(0x1296fe20), (0x0u));
L_12947a03:;
  /* 12947a03 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12947a06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947a09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12947a0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947a0e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12947a11:;
  /* 12947a11 pop esi */
  ESI = (pop32());
  /* 12947a12 mov esp, ebp */
  ESP = (EBP);
  /* 12947a14 pop ebp */
  EBP = (pop32());
  /* 12947a15 ret  */
  ESPCHK(0x129474e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x12947a20 (271 bytes, 78 insns) */
void f_12947a20(void) {
  FTRACE(0x12947a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12947a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12947a21 mov ebp, esp */
  EBP = (ESP);
  /* 12947a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12947a24 mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 12947a29 cmp eax, dword ptr [0x1296fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947a2f jne 0x12947a7b */
  if (!C.zf) goto L_12947a7b;
  /* 12947a31 mov ecx, dword ptr [0x1296fe08] */
  ECX = (r32((uint32_t)(0x1296fe08)));
  /* 12947a37 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947a3a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12947a3d push ecx */
  push32((uint32_t)(ECX));
  /* 12947a3e mov edx, dword ptr [0x1296fe28] */
  EDX = (r32((uint32_t)(0x1296fe28)));
  /* 12947a44 push edx */
  push32((uint32_t)(EDX));
  /* 12947a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12947a47 mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 12947a4c push eax */
  push32((uint32_t)(EAX));
  /* 12947a4d call dword ptr [0x129702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702cc))), 0x12947a53u);
  /* 12947a53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12947a56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947a5a jne 0x12947a63 */
  if (!C.zf) goto L_12947a63;
  /* 12947a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12947a5e jmp 0x12947b2b */
  goto L_12947b2b;
L_12947a63:;
  /* 12947a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947a66 mov dword ptr [0x1296fe28], ecx */
  w32((uint32_t)(0x1296fe28), (ECX));
  /* 12947a6c mov edx, dword ptr [0x1296fe08] */
  EDX = (r32((uint32_t)(0x1296fe08)));
  /* 12947a72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947a75 mov dword ptr [0x1296fe08], edx */
  w32((uint32_t)(0x1296fe08), (EDX));
L_12947a7b:;
  /* 12947a7b mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 12947a80 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12947a83 mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 12947a89 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947a8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12947a8e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12947a93 push 8 */
  push32((uint32_t)(0x8u));
  /* 12947a95 mov edx, dword ptr [0x1296fe2c] */
  EDX = (r32((uint32_t)(0x1296fe2c)));
  /* 12947a9b push edx */
  push32((uint32_t)(EDX));
  /* 12947a9c call dword ptr [0x12970304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970304))), 0x12947aa2u);
  /* 12947aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947aa5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12947aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947aab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947aaf jne 0x12947ab5 */
  if (!C.zf) goto L_12947ab5;
  /* 12947ab1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12947ab3 jmp 0x12947b2b */
  goto L_12947b2b;
L_12947ab5:;
  /* 12947ab5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12947ab7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12947abc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12947ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12947ac3 call dword ptr [0x1297030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297030c))), 0x12947ac9u);
  /* 12947ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947acc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12947acf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947ad2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947ad6 jne 0x12947af2 */
  if (!C.zf) goto L_12947af2;
  /* 12947ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947adb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12947ade push ecx */
  push32((uint32_t)(ECX));
  /* 12947adf push 0 */
  push32((uint32_t)(0x0u));
  /* 12947ae1 mov edx, dword ptr [0x1296fe2c] */
  EDX = (r32((uint32_t)(0x1296fe2c)));
  /* 12947ae7 push edx */
  push32((uint32_t)(EDX));
  /* 12947ae8 call dword ptr [0x129702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e4))), 0x12947aeeu);
  /* 12947aee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12947af0 jmp 0x12947b2b */
  goto L_12947b2b;
L_12947af2:;
  /* 12947af2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947af5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12947afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947afe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12947b05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947b08 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12947b0f mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 12947b14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947b17 mov dword ptr [0x1296fe24], eax */
  w32((uint32_t)(0x1296fe24), (EAX));
  /* 12947b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947b1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12947b22 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12947b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12947b2b:;
  /* 12947b2b mov esp, ebp */
  ESP = (EBP);
  /* 12947b2d pop ebp */
  EBP = (pop32());
  /* 12947b2e ret  */
  ESPCHK(0x12947a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x12947b30 (494 bytes, 149 insns) */
void f_12947b30(void) {
  FTRACE(0x12947b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12947b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12947b31 mov ebp, esp */
  EBP = (ESP);
  /* 12947b33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947b39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12947b3c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12947b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947b42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12947b45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12947b48 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12947b4f:;
  /* 12947b4f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947b53 jl 0x12947b68 */
  if ((C.sf!=C.of)) goto L_12947b68;
  /* 12947b55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12947b58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12947b5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12947b5d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947b60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947b63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12947b66 jmp 0x12947b4f */
  goto L_12947b4f;
L_12947b68:;
  /* 12947b68 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947b6b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12947b71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947b74 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12947b7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12947b7e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12947b85 jmp 0x12947b90 */
  goto L_12947b90;
L_12947b87:;
  /* 12947b87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947b8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947b8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12947b90:;
  /* 12947b90 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947b94 jge 0x12947bb6 */
  if ((C.sf==C.of)) goto L_12947bb6;
  /* 12947b96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12947b9c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12947b9f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12947ba2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947ba5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947ba8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12947bab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947bae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947bb1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12947bb4 jmp 0x12947b87 */
  goto L_12947b87;
L_12947bb6:;
  /* 12947bb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947bb9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12947bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947bbf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12947bc2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947bc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12947bc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12947bc9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12947bce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12947bd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947bd6 push edx */
  push32((uint32_t)(EDX));
  /* 12947bd7 call dword ptr [0x1297030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297030c))), 0x12947bddu);
  /* 12947bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12947bdf jne 0x12947be9 */
  if (!C.zf) goto L_12947be9;
  /* 12947be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12947be4 jmp 0x12947d1a */
  goto L_12947d1a;
L_12947be9:;
  /* 12947be9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947bec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947bf1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12947bf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947bf7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12947bfa jmp 0x12947c08 */
  goto L_12947c08;
L_12947bfc:;
  /* 12947bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947bff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12947c08:;
  /* 12947c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947c0b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947c0e ja 0x12947c6d */
  if ((!C.cf&&!C.zf)) goto L_12947c6d;
  /* 12947c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947c13 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12947c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947c1d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12947c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947c2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c2d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12947c30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c33 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12947c39 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c3c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c45 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12947c48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c4b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947c51 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12947c57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c5a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c5f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12947c62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12947c65 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12947c6b jmp 0x12947bfc */
  goto L_12947bfc;
L_12947c6d:;
  /* 12947c6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12947c70 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c76 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12947c79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947c7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c7f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947c82 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12947c85 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947c88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12947c8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12947c8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947c91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947c94 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12947c97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947c9a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947c9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947ca0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12947ca3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947ca6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12947ca9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12947cac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947caf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947cb2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12947cb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947cb8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947cbb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12947cc3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947cc6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947cc9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12947cd4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947cd7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12947cdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947cde mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12947ce1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12947ce4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947ce7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12947cea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12947cec jne 0x12947cfd */
  if (!C.zf) goto L_12947cfd;
  /* 12947cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947cf1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947cf4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12947cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947cfa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12947cfd:;
  /* 12947cfd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947d02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947d05 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947d07 not edx */
  EDX = (~(EDX));
  /* 12947d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947d0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12947d0f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12947d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947d14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12947d17 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12947d1a:;
  /* 12947d1a mov esp, ebp */
  ESP = (EBP);
  /* 12947d1c pop ebp */
  EBP = (pop32());
  /* 12947d1d ret  */
  ESPCHK(0x12947b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x12947d20 (1515 bytes, 489 insns) */
void f_12947d20(void) {
  FTRACE(0x12947d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12947d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12947d21 mov ebp, esp */
  EBP = (ESP);
  /* 12947d23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947d26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12947d29 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947d2c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12947d2e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12947d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947d34 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12947d37 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12947d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12947d40 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947d43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12947d46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12947d49 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12947d4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12947d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947d52 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12947d58 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947d5b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12947d62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12947d65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12947d68 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947d6b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12947d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947d71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12947d73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947d76 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12947d79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947d7c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947d7f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12947d82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947d85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12947d87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12947d8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12947d8d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947d90 jle 0x12948046 */
  if ((C.zf||C.sf!=C.of)) goto L_12948046;
  /* 12947d96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947d99 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12947d9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12947d9e jne 0x12947dab */
  if (!C.zf) goto L_12947dab;
  /* 12947da0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947da3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947da6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947da9 jle 0x12947db2 */
  if ((C.zf||C.sf!=C.of)) goto L_12947db2;
L_12947dab:;
  /* 12947dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12947dad jmp 0x12948307 */
  goto L_12948307;
L_12947db2:;
  /* 12947db2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947db5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12947db8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947dbb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12947dbe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947dc2 jbe 0x12947dcb */
  if ((C.cf||C.zf)) goto L_12947dcb;
  /* 12947dc4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12947dcb:;
  /* 12947dcb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947dce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947dd1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947dd4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947dd7 jne 0x12947ead */
  if (!C.zf) goto L_12947ead;
  /* 12947ddd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947de1 jae 0x12947e42 */
  if (!C.cf) goto L_12947e42;
  /* 12947de3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947de8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947deb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947ded not edx */
  EDX = (~(EDX));
  /* 12947def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947df2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947df5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12947df9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12947dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947dfe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e01 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12947e05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e08 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947e0b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12947e0e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12947e11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e14 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947e17 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12947e1a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e1d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947e20 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12947e24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12947e26 jne 0x12947e40 */
  if (!C.zf) goto L_12947e40;
  /* 12947e28 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947e2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947e30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947e32 not edx */
  EDX = (~(EDX));
  /* 12947e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947e37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12947e39 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12947e3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947e3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12947e40:;
  /* 12947e40 jmp 0x12947ead */
  goto L_12947ead;
L_12947e42:;
  /* 12947e42 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947e45 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947e48 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947e4d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12947e4f not eax */
  EAX = (~(EAX));
  /* 12947e51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947e54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e57 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12947e5e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12947e60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947e63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e66 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12947e6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e70 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947e73 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12947e76 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12947e79 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e7c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947e7f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12947e82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947e85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947e88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12947e8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12947e8e jne 0x12947ead */
  if (!C.zf) goto L_12947ead;
  /* 12947e90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947e93 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947e96 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947e9b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12947e9d not eax */
  EAX = (~(EAX));
  /* 12947e9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947ea2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947ea5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12947ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947eaa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12947ead:;
  /* 12947ead mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947eb0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12947eb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947eb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12947eb9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12947ebc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947ebf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12947ec2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947ec5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12947ec8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12947ecb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12947ece add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947ed1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947ed4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12947ed7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947edb jle 0x12948027 */
  if ((C.zf||C.sf!=C.of)) goto L_12948027;
  /* 12947ee1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12947ee4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947ee7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12947eea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12947eed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12947ef0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947ef3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12947ef6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947efa jbe 0x12947f03 */
  if ((C.cf||C.zf)) goto L_12947f03;
  /* 12947efc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12947f03:;
  /* 12947f03 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947f06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12947f09 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12947f0c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12947f0f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f12 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947f15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947f18 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12947f1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947f21 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12947f24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12947f27 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f2a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12947f2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f30 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947f33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f36 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12947f39 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12947f3f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12947f42 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947f45 jne 0x12948013 */
  if (!C.zf) goto L_12948013;
  /* 12947f4b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12947f4f jae 0x12947fac */
  if (!C.cf) goto L_12947fac;
  /* 12947f51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947f54 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947f57 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12947f5b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947f5e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947f61 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12947f64 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12947f67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947f6a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947f6d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12947f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12947f72 jne 0x12947f8a */
  if (!C.zf) goto L_12947f8a;
  /* 12947f74 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947f79 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947f7c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947f7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947f81 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12947f83 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12947f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947f88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12947f8a:;
  /* 12947f8a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947f8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947f92 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12947f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947f97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947f9a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12947f9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12947fa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947fa3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947fa6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12947faa jmp 0x12948013 */
  goto L_12948013;
L_12947fac:;
  /* 12947fac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947faf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947fb2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12947fb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947fb9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947fbc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12947fbf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12947fc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947fc5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12947fc8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12947fcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12947fcd jne 0x12947fea */
  if (!C.zf) goto L_12947fea;
  /* 12947fcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947fd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947fd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12947fda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12947fdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947fdf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12947fe2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12947fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12947fe7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12947fea:;
  /* 12947fea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12947fed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12947ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12947ff5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12947ff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12947ffa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12947ffd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12948004 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12948006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948009 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294800c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12948013:;
  /* 12948013 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12948016 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948019 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1294801b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294801e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948021 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948024 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12948027:;
  /* 12948027 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294802a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294802d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948030 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12948032 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12948035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948038 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294803b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294803e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12948041 jmp 0x12948302 */
  goto L_12948302;
L_12948046:;
  /* 12948046 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12948049 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294804c jge 0x12948302 */
  if ((C.sf==C.of)) goto L_12948302;
  /* 12948052 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12948055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948058 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294805b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1294805d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12948060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948063 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948066 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948069 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1294806c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294806f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948072 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12948075 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948078 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294807b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1294807e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948081 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12948084 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948087 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1294808a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294808e jbe 0x12948097 */
  if ((C.cf||C.zf)) goto L_12948097;
  /* 12948090 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12948097:;
  /* 12948097 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294809a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1294809d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294809f jne 0x129481e0 */
  if (!C.zf) goto L_129481e0;
  /* 129480a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129480a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129480ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129480ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129480b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129480b5 jbe 0x129480be */
  if ((C.cf||C.zf)) goto L_129480be;
  /* 129480b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_129480be:;
  /* 129480be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129480c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129480c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129480c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129480ca jne 0x129481a0 */
  if (!C.zf) goto L_129481a0;
  /* 129480d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129480d4 jae 0x12948135 */
  if (!C.cf) goto L_12948135;
  /* 129480d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129480db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129480de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129480e0 not edx */
  EDX = (~(EDX));
  /* 129480e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129480e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129480e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129480ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129480ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129480f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129480f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129480f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129480fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129480fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12948101 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12948104 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948107 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294810a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1294810d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948110 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948113 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12948117 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12948119 jne 0x12948133 */
  if (!C.zf) goto L_12948133;
  /* 1294811b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12948120 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12948123 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12948125 not edx */
  EDX = (~(EDX));
  /* 12948127 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294812a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294812c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1294812e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948131 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12948133:;
  /* 12948133 jmp 0x129481a0 */
  goto L_129481a0;
L_12948135:;
  /* 12948135 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12948138 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294813b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12948140 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12948142 not eax */
  EAX = (~(EAX));
  /* 12948144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948147 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294814a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12948151 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12948153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948156 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948159 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12948160 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948163 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948166 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12948169 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1294816c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294816f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948172 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12948175 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948178 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294817b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1294817f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12948181 jne 0x129481a0 */
  if (!C.zf) goto L_129481a0;
  /* 12948183 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12948186 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948189 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1294818e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12948190 not eax */
  EAX = (~(EAX));
  /* 12948192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948195 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12948198 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1294819a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294819d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129481a0:;
  /* 129481a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129481a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129481a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129481a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129481ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129481af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129481b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129481b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129481b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129481bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 129481be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129481c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129481c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129481c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129481ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129481cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129481d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129481d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129481d7 jbe 0x129481e0 */
  if ((C.cf||C.zf)) goto L_129481e0;
  /* 129481d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_129481e0:;
  /* 129481e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129481e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129481e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 129481e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129481ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129481ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129481f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129481f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129481f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129481fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129481fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12948201 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12948204 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948207 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1294820a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294820d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12948210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948213 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12948216 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948219 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294821c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294821f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948222 jne 0x129482ee */
  if (!C.zf) goto L_129482ee;
  /* 12948228 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294822c jae 0x12948288 */
  if (!C.cf) goto L_12948288;
  /* 1294822e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948231 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948234 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12948238 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294823b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294823e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12948241 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12948243 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948246 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948249 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1294824c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294824e jne 0x12948266 */
  if (!C.zf) goto L_12948266;
  /* 12948250 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12948255 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948258 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1294825a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294825d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294825f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12948261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948264 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12948266:;
  /* 12948266 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1294826b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294826e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12948270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948273 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948276 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1294827a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294827c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294827f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948282 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12948286 jmp 0x129482ee */
  goto L_129482ee;
L_12948288:;
  /* 12948288 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294828b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294828e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12948292 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12948295 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948298 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1294829b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294829d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129482a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129482a3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129482a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129482a8 jne 0x129482c5 */
  if (!C.zf) goto L_129482c5;
  /* 129482aa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129482ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129482b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129482b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129482b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129482ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129482bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129482bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129482c2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129482c5:;
  /* 129482c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129482c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129482cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129482d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129482d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129482d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129482d8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129482df or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129482e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129482e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129482e7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_129482ee:;
  /* 129482ee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129482f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129482f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129482f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129482f9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129482fc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129482ff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12948302:;
  /* 12948302 mov eax, 1 */
  EAX = (0x1u);
L_12948307:;
  /* 12948307 mov esp, ebp */
  ESP = (EBP);
  /* 12948309 pop ebp */
  EBP = (pop32());
  /* 1294830a ret  */
  ESPCHK(0x12947d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x12948310 (304 bytes, 79 insns) */
void f_12948310(void) {
  FTRACE(0x12948310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948310 push ebp */
  push32((uint32_t)(EBP));
  /* 12948311 mov ebp, esp */
  EBP = (ESP);
  /* 12948313 push ecx */
  push32((uint32_t)(ECX));
  /* 12948314 cmp dword ptr [0x1296fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294831b je 0x1294843c */
  if (C.zf) goto L_1294843c;
  /* 12948321 mov eax, dword ptr [0x1296fe18] */
  EAX = (r32((uint32_t)(0x1296fe18)));
  /* 12948326 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12948329 mov ecx, dword ptr [0x1296fe20] */
  ECX = (r32((uint32_t)(0x1296fe20)));
  /* 1294832f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12948332 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948334 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12948337 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1294833c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12948341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948344 push eax */
  push32((uint32_t)(EAX));
  /* 12948345 call dword ptr [0x129702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e8))), 0x1294834bu);
  /* 1294834b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12948350 mov ecx, dword ptr [0x1296fe18] */
  ECX = (r32((uint32_t)(0x1296fe18)));
  /* 12948356 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12948358 mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 1294835d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12948360 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12948362 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 12948368 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1294836b mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 12948370 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12948373 mov edx, dword ptr [0x1296fe18] */
  EDX = (r32((uint32_t)(0x1296fe18)));
  /* 12948379 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12948384 mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 12948389 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294838c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1294838f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12948392 mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 12948397 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294839a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1294839d mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 129483a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129483a6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 129483aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129483ac jne 0x129483c2 */
  if (!C.zf) goto L_129483c2;
  /* 129483ae mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 129483b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129483b7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 129483b9 mov ecx, dword ptr [0x1296fe20] */
  ECX = (r32((uint32_t)(0x1296fe20)));
  /* 129483bf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_129483c2:;
  /* 129483c2 mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 129483c8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129483cc jne 0x12948432 */
  if (!C.zf) goto L_12948432;
  /* 129483ce cmp dword ptr [0x1296fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129483d5 jle 0x12948432 */
  if ((C.zf||C.sf!=C.of)) goto L_12948432;
  /* 129483d7 mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 129483dc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129483df push ecx */
  push32((uint32_t)(ECX));
  /* 129483e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129483e2 mov edx, dword ptr [0x1296fe2c] */
  EDX = (r32((uint32_t)(0x1296fe2c)));
  /* 129483e8 push edx */
  push32((uint32_t)(EDX));
  /* 129483e9 call dword ptr [0x129702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e4))), 0x129483efu);
  /* 129483ef mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 129483f4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129483f7 mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 129483fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129483ff mov edx, dword ptr [0x1296fe20] */
  EDX = (r32((uint32_t)(0x1296fe20)));
  /* 12948405 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948408 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294840a push ecx */
  push32((uint32_t)(ECX));
  /* 1294840b mov eax, dword ptr [0x1296fe20] */
  EAX = (r32((uint32_t)(0x1296fe20)));
  /* 12948410 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948413 push eax */
  push32((uint32_t)(EAX));
  /* 12948414 mov ecx, dword ptr [0x1296fe20] */
  ECX = (r32((uint32_t)(0x1296fe20)));
  /* 1294841a push ecx */
  push32((uint32_t)(ECX));
  /* 1294841b call 0x1294aa40 */
  push32(0x12948420u); f_1294aa40();
  /* 12948420 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948423 mov edx, dword ptr [0x1296fe24] */
  EDX = (r32((uint32_t)(0x1296fe24)));
  /* 12948429 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294842c mov dword ptr [0x1296fe24], edx */
  w32((uint32_t)(0x1296fe24), (EDX));
L_12948432:;
  /* 12948432 mov dword ptr [0x1296fe20], 0 */
  w32((uint32_t)(0x1296fe20), (0x0u));
L_1294843c:;
  /* 1294843c mov esp, ebp */
  ESP = (EBP);
  /* 1294843e pop ebp */
  EBP = (pop32());
  /* 1294843f ret  */
  ESPCHK(0x12948310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008440 @ 0x12948440 (1565 bytes, 343 insns) */
void f_12948440(void) {
  FTRACE(0x12948440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948440 push ebp */
  push32((uint32_t)(EBP));
  /* 12948441 mov ebp, esp */
  EBP = (ESP);
  /* 12948443 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948449 mov eax, dword ptr [0x1296fe24] */
  EAX = (r32((uint32_t)(0x1296fe24)));
  /* 1294844e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12948451 push eax */
  push32((uint32_t)(EAX));
  /* 12948452 mov ecx, dword ptr [0x1296fe28] */
  ECX = (r32((uint32_t)(0x1296fe28)));
  /* 12948458 push ecx */
  push32((uint32_t)(ECX));
  /* 12948459 call dword ptr [0x129702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702bc))), 0x1294845fu);
  /* 1294845f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12948461 je 0x1294846b */
  if (C.zf) goto L_1294846b;
  /* 12948463 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12948466 jmp 0x12948a59 */
  goto L_12948a59;
L_1294846b:;
  /* 1294846b mov edx, dword ptr [0x1296fe28] */
  EDX = (r32((uint32_t)(0x1296fe28)));
  /* 12948471 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12948477 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12948481 jmp 0x12948492 */
  goto L_12948492;
L_12948483:;
  /* 12948483 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12948489 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294848c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12948492:;
  /* 12948492 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12948498 cmp ecx, dword ptr [0x1296fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294849e jge 0x12948a57 */
  if ((C.sf==C.of)) goto L_12948a57;
  /* 129484a4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129484aa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129484ad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 129484b3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 129484b8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 129484be push ecx */
  push32((uint32_t)(ECX));
  /* 129484bf call dword ptr [0x129702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702bc))), 0x129484c5u);
  /* 129484c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129484c7 je 0x129484d3 */
  if (C.zf) goto L_129484d3;
  /* 129484c9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 129484ce jmp 0x12948a59 */
  goto L_12948a59;
L_129484d3:;
  /* 129484d3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129484d9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129484dc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 129484e2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 129484e8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129484ee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129484f1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129484f7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129484fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129484fd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12948507 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12948511 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12948518 jmp 0x12948523 */
  goto L_12948523;
L_1294851a:;
  /* 1294851a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294851d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12948523:;
  /* 12948523 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948527 jge 0x12948a1b */
  if ((C.sf==C.of)) goto L_12948a1b;
  /* 1294852d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12948537 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12948541 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1294854b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12948555 jmp 0x12948566 */
  goto L_12948566;
L_12948557:;
  /* 12948557 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1294855d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948560 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12948566:;
  /* 12948566 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294856d jge 0x12948582 */
  if ((C.sf==C.of)) goto L_12948582;
  /* 1294856f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12948575 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12948580 jmp 0x12948557 */
  goto L_12948557;
L_12948582:;
  /* 12948582 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948586 jl 0x129489bd */
  if ((C.sf!=C.of)) goto L_129489bd;
  /* 1294858c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12948591 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12948597 push ecx */
  push32((uint32_t)(ECX));
  /* 12948598 call dword ptr [0x129702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702bc))), 0x1294859eu);
  /* 1294859e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129485a0 je 0x129485ac */
  if (C.zf) goto L_129485ac;
  /* 129485a2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 129485a7 jmp 0x12948a59 */
  goto L_12948a59;
L_129485ac:;
  /* 129485ac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 129485b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129485b5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 129485bf jmp 0x129485d0 */
  goto L_129485d0;
L_129485c1:;
  /* 129485c1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 129485c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129485ca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_129485d0:;
  /* 129485d0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129485d7 jge 0x12948754 */
  if ((C.sf==C.of)) goto L_12948754;
  /* 129485dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129485e0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129485e3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 129485e9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 129485ef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129485f5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 129485fb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12948601 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948605 jne 0x12948612 */
  if (!C.zf) goto L_12948612;
  /* 12948607 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1294860d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948610 je 0x1294861c */
  if (C.zf) goto L_1294861c;
L_12948612:;
  /* 12948612 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12948617 jmp 0x12948a59 */
  goto L_12948a59;
L_1294861c:;
  /* 1294861c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12948622 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12948624 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1294862a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12948630 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12948636 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1294863c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1294863f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12948641 je 0x12948679 */
  if (C.zf) goto L_12948679;
  /* 12948643 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12948649 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294864c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12948652 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294865c jle 0x12948668 */
  if ((C.zf||C.sf!=C.of)) goto L_12948668;
  /* 1294865e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12948663 jmp 0x12948a59 */
  goto L_12948a59;
L_12948668:;
  /* 12948668 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1294866e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948671 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12948677 jmp 0x129486bb */
  goto L_129486bb;
L_12948679:;
  /* 12948679 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1294867f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12948682 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948685 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1294868b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948692 jle 0x1294869e */
  if ((C.zf||C.sf!=C.of)) goto L_1294869e;
  /* 12948694 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1294869e:;
  /* 1294869e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129486a4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 129486ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129486ae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129486b4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_129486bb:;
  /* 129486bb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129486c2 jl 0x129486dd */
  if ((C.sf!=C.of)) goto L_129486dd;
  /* 129486c4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 129486ca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 129486cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129486cf jne 0x129486dd */
  if (!C.zf) goto L_129486dd;
  /* 129486d1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129486db jle 0x129486e7 */
  if ((C.zf||C.sf!=C.of)) goto L_129486e7;
L_129486dd:;
  /* 129486dd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 129486e2 jmp 0x12948a59 */
  goto L_12948a59;
L_129486e7:;
  /* 129486e7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 129486ed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129486f3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 129486f6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129486fc je 0x12948708 */
  if (C.zf) goto L_12948708;
  /* 129486fe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12948703 jmp 0x12948a59 */
  goto L_12948a59;
L_12948708:;
  /* 12948708 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1294870e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948714 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1294871a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12948720 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948726 jb 0x1294861c */
  if (C.cf) goto L_1294861c;
  /* 1294872c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12948732 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948738 je 0x12948744 */
  if (C.zf) goto L_12948744;
  /* 1294873a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1294873f jmp 0x12948a59 */
  goto L_12948a59;
L_12948744:;
  /* 12948744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948747 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294874c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294874f jmp 0x129485c1 */
  goto L_129485c1;
L_12948754:;
  /* 12948754 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12948757 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12948759 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294875f je 0x1294876b */
  if (C.zf) goto L_1294876b;
  /* 12948761 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12948766 jmp 0x12948a59 */
  goto L_12948a59;
L_1294876b:;
  /* 1294876b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294876e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12948774 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1294877b jmp 0x12948786 */
  goto L_12948786;
L_1294877d:;
  /* 1294877d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948780 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948783 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12948786:;
  /* 12948786 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294878a jge 0x129489bd */
  if ((C.sf==C.of)) goto L_129489bd;
  /* 12948790 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1294879a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 129487a0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_129487a6:;
  /* 129487a6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 129487ac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129487af mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 129487b5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129487bb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129487c1 je 0x129488ea */
  if (C.zf) goto L_129488ea;
  /* 129487c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129487ca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129487d0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129487d7 je 0x129488ea */
  if (C.zf) goto L_129488ea;
  /* 129487dd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129487e3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129487e9 jb 0x129487fe */
  if (C.cf) goto L_129487fe;
  /* 129487eb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 129487f1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129487f6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129487fc jb 0x12948808 */
  if (C.cf) goto L_12948808;
L_129487fe:;
  /* 129487fe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12948803 jmp 0x12948a59 */
  goto L_12948a59;
L_12948808:;
  /* 12948808 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1294880e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12948814 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1294881a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12948820 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948823 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12948826 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948829 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294882e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12948834:;
  /* 12948834 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948837 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294883d je 0x1294885e */
  if (C.zf) goto L_1294885e;
  /* 1294883f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948842 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948848 jne 0x1294884c */
  if (!C.zf) goto L_1294884c;
  /* 1294884a jmp 0x1294885e */
  goto L_1294885e;
L_1294884c:;
  /* 1294884c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294884f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12948851 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12948854 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948857 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948859 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1294885c jmp 0x12948834 */
  goto L_12948834;
L_1294885e:;
  /* 1294885e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12948861 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948867 jne 0x12948873 */
  if (!C.zf) goto L_12948873;
  /* 12948869 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1294886e jmp 0x12948a59 */
  goto L_12948a59;
L_12948873:;
  /* 12948873 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12948879 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294887b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1294887e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948881 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12948887 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294888e jle 0x1294889a */
  if ((C.zf||C.sf!=C.of)) goto L_1294889a;
  /* 12948890 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1294889a:;
  /* 1294889a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129488a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129488a3 je 0x129488af */
  if (C.zf) goto L_129488af;
  /* 129488a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 129488aa jmp 0x12948a59 */
  goto L_12948a59;
L_129488af:;
  /* 129488af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129488b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129488b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129488be je 0x129488ca */
  if (C.zf) goto L_129488ca;
  /* 129488c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 129488c5 jmp 0x12948a59 */
  goto L_12948a59;
L_129488ca:;
  /* 129488ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129488d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 129488d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129488dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129488df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 129488e5 jmp 0x129487a6 */
  goto L_129487a6;
L_129488ea:;
  /* 129488ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129488f1 je 0x12948961 */
  if (C.zf) goto L_12948961;
  /* 129488f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129488f7 jge 0x1294892b */
  if ((C.sf==C.of)) goto L_1294892b;
  /* 129488f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129488fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12948903 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12948909 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294890b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12948911 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12948916 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948919 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1294891b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12948921 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12948923 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12948929 jmp 0x12948961 */
  goto L_12948961;
L_1294892b:;
  /* 1294892b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294892e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948931 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12948936 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12948938 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1294893e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12948940 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12948946 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948949 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294894c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12948951 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12948953 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12948959 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294895b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12948961:;
  /* 12948961 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12948967 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294896a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948970 jne 0x12948984 */
  if (!C.zf) goto L_12948984;
  /* 12948972 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12948975 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1294897b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948982 je 0x1294898e */
  if (C.zf) goto L_1294898e;
L_12948984:;
  /* 12948984 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12948989 jmp 0x12948a59 */
  goto L_12948a59;
L_1294898e:;
  /* 1294898e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12948994 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12948997 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294899d je 0x129489a9 */
  if (C.zf) goto L_129489a9;
  /* 1294899f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 129489a4 jmp 0x12948a59 */
  goto L_12948a59;
L_129489a9:;
  /* 129489a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 129489af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129489b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 129489b8 jmp 0x1294877d */
  goto L_1294877d;
L_129489bd:;
  /* 129489bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129489c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 129489c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 129489cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129489d0 jne 0x129489ea */
  if (!C.zf) goto L_129489ea;
  /* 129489d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129489d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 129489db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 129489e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129489e8 je 0x129489f1 */
  if (C.zf) goto L_129489f1;
L_129489ea:;
  /* 129489ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 129489ef jmp 0x12948a59 */
  goto L_12948a59;
L_129489f1:;
  /* 129489f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 129489f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129489fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12948a03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12948a06 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948a0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12948a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948a11 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12948a13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12948a16 jmp 0x1294851a */
  goto L_1294851a;
L_12948a1b:;
  /* 12948a1b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12948a21 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12948a27 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948a29 jne 0x12948a3c */
  if (!C.zf) goto L_12948a3c;
  /* 12948a2b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12948a31 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12948a37 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948a3a je 0x12948a43 */
  if (C.zf) goto L_12948a43;
L_12948a3c:;
  /* 12948a3c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12948a41 jmp 0x12948a59 */
  goto L_12948a59;
L_12948a43:;
  /* 12948a43 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12948a49 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948a4c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12948a52 jmp 0x12948483 */
  goto L_12948483;
L_12948a57:;
  /* 12948a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12948a59:;
  /* 12948a59 mov esp, ebp */
  ESP = (EBP);
  /* 12948a5b pop ebp */
  EBP = (pop32());
  /* 12948a5c ret  */
  ESPCHK(0x12948440u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a60 @ 0x12948a60 (250 bytes, 92 insns) */
void f_12948a60(void) {
  FTRACE(0x12948a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12948a61 mov ebp, esp */
  EBP = (ESP);
  /* 12948a63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948a66 push ebx */
  push32((uint32_t)(EBX));
  /* 12948a67 push esi */
  push32((uint32_t)(ESI));
  /* 12948a68 push edi */
  push32((uint32_t)(EDI));
  /* 12948a69 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12948a6c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12948a6f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12948a72 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12948a75:;
  /* 12948a75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948a79 jne 0x12948a99 */
  if (!C.zf) goto L_12948a99;
  /* 12948a7b push 0x12969dd8 */
  push32((uint32_t)(0x12969dd8u));
  /* 12948a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12948a82 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12948a84 push 0x12969dcc */
  push32((uint32_t)(0x12969dccu));
  /* 12948a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12948a8b call 0x12941c10 */
  push32(0x12948a90u); f_12941c10();
  /* 12948a90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948a93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948a96 jne 0x12948a99 */
  if (!C.zf) goto L_12948a99;
  /* 12948a98 int3  */
  x86_unimpl("int3 @ 0x12948a98");
L_12948a99:;
  /* 12948a99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12948a9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12948a9d jne 0x12948a75 */
  if (!C.zf) goto L_12948a75;
L_12948a9f:;
  /* 12948a9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948aa3 jne 0x12948ac3 */
  if (!C.zf) goto L_12948ac3;
  /* 12948aa5 push 0x12969dbc */
  push32((uint32_t)(0x12969dbcu));
  /* 12948aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12948aac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12948aae push 0x12969dcc */
  push32((uint32_t)(0x12969dccu));
  /* 12948ab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12948ab5 call 0x12941c10 */
  push32(0x12948abau); f_12941c10();
  /* 12948aba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948abd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948ac0 jne 0x12948ac3 */
  if (!C.zf) goto L_12948ac3;
  /* 12948ac2 int3  */
  x86_unimpl("int3 @ 0x12948ac2");
L_12948ac3:;
  /* 12948ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12948ac7 jne 0x12948a9f */
  if (!C.zf) goto L_12948a9f;
  /* 12948ac9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948acc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12948ad3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948ad9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12948adc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948adf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948ae2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12948ae4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948ae7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12948aee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12948af1 push ecx */
  push32((uint32_t)(ECX));
  /* 12948af2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12948af5 push edx */
  push32((uint32_t)(EDX));
  /* 12948af6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948af9 push eax */
  push32((uint32_t)(EAX));
  /* 12948afa call 0x12949ae0 */
  push32(0x12948affu); f_12949ae0();
  /* 12948aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948b02 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12948b05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12948b0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948b0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12948b14 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b17 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948b1b jl 0x12948b3f */
  if ((C.sf!=C.of)) goto L_12948b3f;
  /* 12948b1d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12948b22 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12948b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12948b27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12948b2d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12948b30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12948b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948b38 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b3b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12948b3d jmp 0x12948b50 */
  goto L_12948b50;
L_12948b3f:;
  /* 12948b3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948b42 push edx */
  push32((uint32_t)(EDX));
  /* 12948b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12948b45 call 0x12949860 */
  push32(0x12948b4au); f_12949860();
  /* 12948b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948b4d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12948b50:;
  /* 12948b50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948b53 pop edi */
  EDI = (pop32());
  /* 12948b54 pop esi */
  ESI = (pop32());
  /* 12948b55 pop ebx */
  EBX = (pop32());
  /* 12948b56 mov esp, ebp */
  ESP = (EBP);
  /* 12948b58 pop ebp */
  EBP = (pop32());
  /* 12948b59 ret  */
  ESPCHK(0x12948a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x12948b60 (183 bytes, 58 insns) */
void f_12948b60(void) {
  FTRACE(0x12948b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12948b61 mov ebp, esp */
  EBP = (ESP);
  /* 12948b63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948b6c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948b71 ja 0x12948b8a */
  if ((!C.cf&&!C.zf)) goto L_12948b8a;
  /* 12948b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948b76 mov edx, dword ptr [0x1296cc98] */
  EDX = (r32((uint32_t)(0x1296cc98)));
  /* 12948b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948b7e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12948b82 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12948b85 jmp 0x12948c13 */
  goto L_12948c13;
L_12948b8a:;
  /* 12948b8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948b8d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12948b90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12948b96 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12948b9c mov edx, dword ptr [0x1296cc98] */
  EDX = (r32((uint32_t)(0x1296cc98)));
  /* 12948ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948ba4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12948ba8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12948bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12948baf je 0x12948bd3 */
  if (C.zf) goto L_12948bd3;
  /* 12948bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948bb4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12948bb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12948bbd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12948bc0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12948bc3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12948bc6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12948bca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12948bd1 jmp 0x12948be4 */
  goto L_12948be4;
L_12948bd3:;
  /* 12948bd3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12948bd6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12948bd9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12948bdd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12948be4:;
  /* 12948be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12948be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12948be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12948bea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12948bed push ecx */
  push32((uint32_t)(ECX));
  /* 12948bee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948bf1 push edx */
  push32((uint32_t)(EDX));
  /* 12948bf2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12948bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12948bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12948bf8 call 0x1294ad80 */
  push32(0x12948bfdu); f_1294ad80();
  /* 12948bfd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948c00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12948c02 jne 0x12948c08 */
  if (!C.zf) goto L_12948c08;
  /* 12948c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948c06 jmp 0x12948c13 */
  goto L_12948c13;
L_12948c08:;
  /* 12948c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948c0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12948c10 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12948c13:;
  /* 12948c13 mov esp, ebp */
  ESP = (EBP);
  /* 12948c15 pop ebp */
  EBP = (pop32());
  /* 12948c16 ret  */
  ESPCHK(0x12948b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x12948c20 (836 bytes, 238 insns) */
void f_12948c20(void) {
  FTRACE(0x12948c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12948c21 mov ebp, esp */
  EBP = (ESP);
  /* 12948c23 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948c26 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948c28 call 0x12946550 */
  push32(0x12948c2du); f_12946550();
  /* 12948c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948c33 push eax */
  push32((uint32_t)(EAX));
  /* 12948c34 call 0x12948f70 */
  push32(0x12948c39u); f_12948f70();
  /* 12948c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948c3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12948c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948c42 cmp ecx, dword ptr [0x1296fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948c48 jne 0x12948c5b */
  if (!C.zf) goto L_12948c5b;
  /* 12948c4a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948c4c call 0x129465f0 */
  push32(0x12948c51u); f_129465f0();
  /* 12948c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948c56 jmp 0x12948f60 */
  goto L_12948f60;
L_12948c5b:;
  /* 12948c5b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948c5f jne 0x12948c7c */
  if (!C.zf) goto L_12948c7c;
  /* 12948c61 call 0x12949050 */
  push32(0x12948c66u); f_12949050();
  /* 12948c66 call 0x129490d0 */
  push32(0x12948c6bu); f_129490d0();
  /* 12948c6b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948c6d call 0x129465f0 */
  push32(0x12948c72u); f_129465f0();
  /* 12948c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948c77 jmp 0x12948f60 */
  goto L_12948f60;
L_12948c7c:;
  /* 12948c7c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12948c83 jmp 0x12948c8e */
  goto L_12948c8e;
L_12948c85:;
  /* 12948c85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948c8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12948c8e:;
  /* 12948c8e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948c92 jae 0x12948ddf */
  if (!C.cf) goto L_12948ddf;
  /* 12948c98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948c9b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12948c9e mov ecx, dword ptr [eax + 0x1296ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x1296ceb8)));
  /* 12948ca4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948ca7 jne 0x12948dda */
  if (!C.zf) goto L_12948dda;
  /* 12948cad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12948cb4 jmp 0x12948cbf */
  goto L_12948cbf;
L_12948cb6:;
  /* 12948cb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948cb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948cbc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12948cbf:;
  /* 12948cbf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948cc6 jae 0x12948cd4 */
  if (!C.cf) goto L_12948cd4;
  /* 12948cc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948ccb mov byte ptr [eax + 0x1296fd00], 0 */
  w8((uint32_t)(EAX + 0x1296fd00), (0x0u));
  /* 12948cd2 jmp 0x12948cb6 */
  goto L_12948cb6;
L_12948cd4:;
  /* 12948cd4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12948cdb jmp 0x12948ce6 */
  goto L_12948ce6;
L_12948cdd:;
  /* 12948cdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948ce0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948ce3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12948ce6:;
  /* 12948ce6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948cea jae 0x12948d67 */
  if (!C.cf) goto L_12948d67;
  /* 12948cec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948cef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12948cf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948cf5 lea ecx, [edx + eax*8 + 0x1296cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1296cec8));
  /* 12948cfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12948cff jmp 0x12948d0a */
  goto L_12948d0a;
L_12948d01:;
  /* 12948d01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948d04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948d07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12948d0a:;
  /* 12948d0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948d0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12948d0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12948d11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12948d13 je 0x12948d62 */
  if (C.zf) goto L_12948d62;
  /* 12948d15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948d18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948d1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12948d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12948d1f je 0x12948d62 */
  if (C.zf) goto L_12948d62;
  /* 12948d21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948d24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12948d26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12948d28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12948d2b jmp 0x12948d36 */
  goto L_12948d36;
L_12948d2d:;
  /* 12948d2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948d30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948d33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12948d36:;
  /* 12948d36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12948d39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12948d3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12948d3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948d41 ja 0x12948d60 */
  if ((!C.cf&&!C.zf)) goto L_12948d60;
  /* 12948d43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948d46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948d49 mov dl, byte ptr [eax + 0x1296fd01] */
  DL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 12948d4f or dl, byte ptr [ecx + 0x1296ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1296ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12948d55 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948d58 mov byte ptr [eax + 0x1296fd01], dl */
  w8((uint32_t)(EAX + 0x1296fd01), (DL));
  /* 12948d5e jmp 0x12948d2d */
  goto L_12948d2d;
L_12948d60:;
  /* 12948d60 jmp 0x12948d01 */
  goto L_12948d01;
L_12948d62:;
  /* 12948d62 jmp 0x12948cdd */
  goto L_12948cdd;
L_12948d67:;
  /* 12948d67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948d6a mov dword ptr [0x1296fb64], ecx */
  w32((uint32_t)(0x1296fb64), (ECX));
  /* 12948d70 mov dword ptr [0x1296fbec], 1 */
  w32((uint32_t)(0x1296fbec), (0x1u));
  /* 12948d7a mov edx, dword ptr [0x1296fb64] */
  EDX = (r32((uint32_t)(0x1296fb64)));
  /* 12948d80 push edx */
  push32((uint32_t)(EDX));
  /* 12948d81 call 0x12948fd0 */
  push32(0x12948d86u); f_12948fd0();
  /* 12948d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948d89 mov dword ptr [0x1296fe04], eax */
  w32((uint32_t)(0x1296fe04), (EAX));
  /* 12948d8e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12948d95 jmp 0x12948da0 */
  goto L_12948da0;
L_12948d97:;
  /* 12948d97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948d9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948d9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12948da0:;
  /* 12948da0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948da4 jae 0x12948dc4 */
  if (!C.cf) goto L_12948dc4;
  /* 12948da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948da9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12948dac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948daf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948db2 mov cx, word ptr [ecx + eax*2 + 0x1296cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1296cebc)));
  /* 12948dba mov word ptr [edx*2 + 0x1296fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x1296fbe0), (CX));
  /* 12948dc2 jmp 0x12948d97 */
  goto L_12948d97;
L_12948dc4:;
  /* 12948dc4 call 0x129490d0 */
  push32(0x12948dc9u); f_129490d0();
  /* 12948dc9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948dcb call 0x129465f0 */
  push32(0x12948dd0u); f_129465f0();
  /* 12948dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948dd5 jmp 0x12948f60 */
  goto L_12948f60;
L_12948dda:;
  /* 12948dda jmp 0x12948c85 */
  goto L_12948c85;
L_12948ddf:;
  /* 12948ddf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12948de2 push edx */
  push32((uint32_t)(EDX));
  /* 12948de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948de6 push eax */
  push32((uint32_t)(EAX));
  /* 12948de7 call dword ptr [0x12970310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970310))), 0x12948dedu);
  /* 12948ded cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948df0 jne 0x12948f32 */
  if (!C.zf) goto L_12948f32;
  /* 12948df6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12948dfd jmp 0x12948e08 */
  goto L_12948e08;
L_12948dff:;
  /* 12948dff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948e05 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12948e08:;
  /* 12948e08 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948e0f jae 0x12948e1d */
  if (!C.cf) goto L_12948e1d;
  /* 12948e11 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948e14 mov byte ptr [edx + 0x1296fd00], 0 */
  w8((uint32_t)(EDX + 0x1296fd00), (0x0u));
  /* 12948e1b jmp 0x12948dff */
  goto L_12948dff;
L_12948e1d:;
  /* 12948e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948e20 mov dword ptr [0x1296fb64], eax */
  w32((uint32_t)(0x1296fb64), (EAX));
  /* 12948e25 mov dword ptr [0x1296fe04], 0 */
  w32((uint32_t)(0x1296fe04), (0x0u));
  /* 12948e2f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948e33 jbe 0x12948eee */
  if ((C.cf||C.zf)) goto L_12948eee;
  /* 12948e39 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12948e3c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12948e3f jmp 0x12948e4a */
  goto L_12948e4a;
L_12948e41:;
  /* 12948e41 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948e44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948e47 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12948e4a:;
  /* 12948e4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12948e4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12948e51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12948e53 je 0x12948e9c */
  if (C.zf) goto L_12948e9c;
  /* 12948e55 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948e58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948e5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12948e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12948e5f je 0x12948e9c */
  if (C.zf) goto L_12948e9c;
  /* 12948e61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948e64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12948e66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12948e68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12948e6b jmp 0x12948e76 */
  goto L_12948e76;
L_12948e6d:;
  /* 12948e6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948e70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948e73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12948e76:;
  /* 12948e76 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12948e79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12948e7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12948e7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948e81 ja 0x12948e9a */
  if ((!C.cf&&!C.zf)) goto L_12948e9a;
  /* 12948e83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948e86 mov cl, byte ptr [eax + 0x1296fd01] */
  CL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 12948e8c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12948e8f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948e92 mov byte ptr [edx + 0x1296fd01], cl */
  w8((uint32_t)(EDX + 0x1296fd01), (CL));
  /* 12948e98 jmp 0x12948e6d */
  goto L_12948e6d;
L_12948e9a:;
  /* 12948e9a jmp 0x12948e41 */
  goto L_12948e41;
L_12948e9c:;
  /* 12948e9c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12948ea3 jmp 0x12948eae */
  goto L_12948eae;
L_12948ea5:;
  /* 12948ea5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948ea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948eab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12948eae:;
  /* 12948eae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948eb5 jae 0x12948ece */
  if (!C.cf) goto L_12948ece;
  /* 12948eb7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948eba mov dl, byte ptr [ecx + 0x1296fd01] */
  DL = (r8((uint32_t)(ECX + 0x1296fd01)));
  /* 12948ec0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12948ec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12948ec6 mov byte ptr [eax + 0x1296fd01], dl */
  w8((uint32_t)(EAX + 0x1296fd01), (DL));
  /* 12948ecc jmp 0x12948ea5 */
  goto L_12948ea5;
L_12948ece:;
  /* 12948ece mov ecx, dword ptr [0x1296fb64] */
  ECX = (r32((uint32_t)(0x1296fb64)));
  /* 12948ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 12948ed5 call 0x12948fd0 */
  push32(0x12948edau); f_12948fd0();
  /* 12948eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948edd mov dword ptr [0x1296fe04], eax */
  w32((uint32_t)(0x1296fe04), (EAX));
  /* 12948ee2 mov dword ptr [0x1296fbec], 1 */
  w32((uint32_t)(0x1296fbec), (0x1u));
  /* 12948eec jmp 0x12948ef8 */
  goto L_12948ef8;
L_12948eee:;
  /* 12948eee mov dword ptr [0x1296fbec], 0 */
  w32((uint32_t)(0x1296fbec), (0x0u));
L_12948ef8:;
  /* 12948ef8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12948eff jmp 0x12948f0a */
  goto L_12948f0a;
L_12948f01:;
  /* 12948f01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948f04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12948f07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12948f0a:;
  /* 12948f0a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948f0e jae 0x12948f1f */
  if (!C.cf) goto L_12948f1f;
  /* 12948f10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12948f13 mov word ptr [eax*2 + 0x1296fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1296fbe0), (0x0u));
  /* 12948f1d jmp 0x12948f01 */
  goto L_12948f01;
L_12948f1f:;
  /* 12948f1f call 0x129490d0 */
  push32(0x12948f24u); f_129490d0();
  /* 12948f24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948f26 call 0x129465f0 */
  push32(0x12948f2bu); f_129465f0();
  /* 12948f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948f2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948f30 jmp 0x12948f60 */
  goto L_12948f60;
L_12948f32:;
  /* 12948f32 cmp dword ptr [0x1296e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948f39 je 0x12948f53 */
  if (C.zf) goto L_12948f53;
  /* 12948f3b call 0x12949050 */
  push32(0x12948f40u); f_12949050();
  /* 12948f40 call 0x129490d0 */
  push32(0x12948f45u); f_129490d0();
  /* 12948f45 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948f47 call 0x129465f0 */
  push32(0x12948f4cu); f_129465f0();
  /* 12948f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12948f51 jmp 0x12948f60 */
  goto L_12948f60;
L_12948f53:;
  /* 12948f53 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12948f55 call 0x129465f0 */
  push32(0x12948f5au); f_129465f0();
  /* 12948f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12948f5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12948f60:;
  /* 12948f60 mov esp, ebp */
  ESP = (EBP);
  /* 12948f62 pop ebp */
  EBP = (pop32());
  /* 12948f63 ret  */
  ESPCHK(0x12948c20u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12948f70 (89 bytes, 21 insns) */
void f_12948f70(void) {
  FTRACE(0x12948f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12948f71 mov ebp, esp */
  EBP = (ESP);
  /* 12948f73 mov dword ptr [0x1296e678], 0 */
  w32((uint32_t)(0x1296e678), (0x0u));
  /* 12948f7d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948f81 jne 0x12948f95 */
  if (!C.zf) goto L_12948f95;
  /* 12948f83 mov dword ptr [0x1296e678], 1 */
  w32((uint32_t)(0x1296e678), (0x1u));
  /* 12948f8d call dword ptr [0x12970318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970318))), 0x12948f93u);
  /* 12948f93 jmp 0x12948fc7 */
  goto L_12948fc7;
L_12948f95:;
  /* 12948f95 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948f99 jne 0x12948fad */
  if (!C.zf) goto L_12948fad;
  /* 12948f9b mov dword ptr [0x1296e678], 1 */
  w32((uint32_t)(0x1296e678), (0x1u));
  /* 12948fa5 call dword ptr [0x12970314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970314))), 0x12948fabu);
  /* 12948fab jmp 0x12948fc7 */
  goto L_12948fc7;
L_12948fad:;
  /* 12948fad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948fb1 jne 0x12948fc4 */
  if (!C.zf) goto L_12948fc4;
  /* 12948fb3 mov dword ptr [0x1296e678], 1 */
  w32((uint32_t)(0x1296e678), (0x1u));
  /* 12948fbd mov eax, dword ptr [0x1296e698] */
  EAX = (r32((uint32_t)(0x1296e698)));
  /* 12948fc2 jmp 0x12948fc7 */
  goto L_12948fc7;
L_12948fc4:;
  /* 12948fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12948fc7:;
  /* 12948fc7 pop ebp */
  EBP = (pop32());
  /* 12948fc8 ret  */
  ESPCHK(0x12948f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fd0 @ 0x12948fd0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12948fd0(void) {
  FTRACE(0x12948fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12948fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12948fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12948fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12948fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12948fd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12948fda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948fdd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12948fe3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12948fe6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12948fea ja 0x1294901a */
  if ((!C.cf&&!C.zf)) goto L_1294901a;
  /* 12948fec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12948fef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12948ff1 mov dl, byte ptr [eax + 0x12949034] */
  DL = (r8((uint32_t)(EAX + 0x12949034)));
  /* 12948ff7 jmp dword ptr [edx*4 + 0x12949020] */
  switch (EDX) {
    case 0: goto L_12948ffe;
    case 1: goto L_12949005;
    case 2: goto L_1294900c;
    case 3: goto L_12949013;
    case 4: goto L_1294901a;
    default: x86_unimpl("switch@0x12948ff7 out of table"); return;
  }
L_12948ffe:;
  /* 12948ffe mov eax, 0x411 */
  EAX = (0x411u);
  /* 12949003 jmp 0x1294901c */
  goto L_1294901c;
L_12949005:;
  /* 12949005 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1294900a jmp 0x1294901c */
  goto L_1294901c;
L_1294900c:;
  /* 1294900c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12949011 jmp 0x1294901c */
  goto L_1294901c;
L_12949013:;
  /* 12949013 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12949018 jmp 0x1294901c */
  goto L_1294901c;
L_1294901a:;
  /* 1294901a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294901c:;
  /* 1294901c mov esp, ebp */
  ESP = (EBP);
  /* 1294901e pop ebp */
  EBP = (pop32());
  /* 1294901f ret  */
  ESPCHK(0x12948fd0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12949050 (116 bytes, 29 insns) */
void f_12949050(void) {
  FTRACE(0x12949050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12949050 push ebp */
  push32((uint32_t)(EBP));
  /* 12949051 mov ebp, esp */
  EBP = (ESP);
  /* 12949053 push ecx */
  push32((uint32_t)(ECX));
  /* 12949054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294905b jmp 0x12949066 */
  goto L_12949066;
L_1294905d:;
  /* 1294905d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12949066:;
  /* 12949066 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294906d jge 0x1294907b */
  if ((C.sf==C.of)) goto L_1294907b;
  /* 1294906f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949072 mov byte ptr [ecx + 0x1296fd00], 0 */
  w8((uint32_t)(ECX + 0x1296fd00), (0x0u));
  /* 12949079 jmp 0x1294905d */
  goto L_1294905d;
L_1294907b:;
  /* 1294907b mov dword ptr [0x1296fb64], 0 */
  w32((uint32_t)(0x1296fb64), (0x0u));
  /* 12949085 mov dword ptr [0x1296fbec], 0 */
  w32((uint32_t)(0x1296fbec), (0x0u));
  /* 1294908f mov dword ptr [0x1296fe04], 0 */
  w32((uint32_t)(0x1296fe04), (0x0u));
  /* 12949099 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129490a0 jmp 0x129490ab */
  goto L_129490ab;
L_129490a2:;
  /* 129490a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129490a5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129490a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129490ab:;
  /* 129490ab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129490af jge 0x129490c0 */
  if ((C.sf==C.of)) goto L_129490c0;
  /* 129490b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129490b4 mov word ptr [eax*2 + 0x1296fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1296fbe0), (0x0u));
  /* 129490be jmp 0x129490a2 */
  goto L_129490a2;
L_129490c0:;
  /* 129490c0 mov esp, ebp */
  ESP = (EBP);
  /* 129490c2 pop ebp */
  EBP = (pop32());
  /* 129490c3 ret  */
  ESPCHK(0x12949050u, _esp0);
  ESP += 4; return;
}

/* FUN_100090d0 @ 0x129490d0 (770 bytes, 175 insns) */
void f_129490d0(void) {
  FTRACE(0x129490d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129490d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129490d1 mov ebp, esp */
  EBP = (ESP);
  /* 129490d3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129490d9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 129490df push eax */
  push32((uint32_t)(EAX));
  /* 129490e0 mov ecx, dword ptr [0x1296fb64] */
  ECX = (r32((uint32_t)(0x1296fb64)));
  /* 129490e6 push ecx */
  push32((uint32_t)(ECX));
  /* 129490e7 call dword ptr [0x12970310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970310))), 0x129490edu);
  /* 129490ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129490f0 jne 0x12949309 */
  if (!C.zf) goto L_12949309;
  /* 129490f6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12949100 jmp 0x12949111 */
  goto L_12949111;
L_12949102:;
  /* 12949102 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949108 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294910b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12949111:;
  /* 12949111 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294911b jae 0x12949132 */
  if (!C.cf) goto L_12949132;
  /* 1294911d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949123 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12949129 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12949130 jmp 0x12949102 */
  goto L_12949102;
L_12949132:;
  /* 12949132 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12949139 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1294913f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12949142 jmp 0x1294914d */
  goto L_1294914d;
L_12949144:;
  /* 12949144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949147 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294914a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294914d:;
  /* 1294914d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949150 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12949152 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12949154 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12949156 je 0x12949198 */
  if (C.zf) goto L_12949198;
  /* 12949158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294915b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294915d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1294915f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12949165 jmp 0x12949176 */
  goto L_12949176;
L_12949167:;
  /* 12949167 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294916d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949170 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12949176:;
  /* 12949176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949179 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294917b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1294917e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949184 ja 0x12949196 */
  if ((!C.cf&&!C.zf)) goto L_12949196;
  /* 12949186 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294918c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12949194 jmp 0x12949167 */
  goto L_12949167;
L_12949196:;
  /* 12949196 jmp 0x12949144 */
  goto L_12949144;
L_12949198:;
  /* 12949198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294919a mov eax, dword ptr [0x1296fe04] */
  EAX = (r32((uint32_t)(0x1296fe04)));
  /* 1294919f push eax */
  push32((uint32_t)(EAX));
  /* 129491a0 mov ecx, dword ptr [0x1296fb64] */
  ECX = (r32((uint32_t)(0x1296fb64)));
  /* 129491a6 push ecx */
  push32((uint32_t)(ECX));
  /* 129491a7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 129491ad push edx */
  push32((uint32_t)(EDX));
  /* 129491ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129491b3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 129491b9 push eax */
  push32((uint32_t)(EAX));
  /* 129491ba push 1 */
  push32((uint32_t)(0x1u));
  /* 129491bc call 0x1294ad80 */
  push32(0x129491c1u); f_1294ad80();
  /* 129491c1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129491c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129491c6 mov ecx, dword ptr [0x1296fb64] */
  ECX = (r32((uint32_t)(0x1296fb64)));
  /* 129491cc push ecx */
  push32((uint32_t)(ECX));
  /* 129491cd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129491d2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 129491d8 push edx */
  push32((uint32_t)(EDX));
  /* 129491d9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129491de lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 129491e4 push eax */
  push32((uint32_t)(EAX));
  /* 129491e5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129491ea mov ecx, dword ptr [0x1296fe04] */
  ECX = (r32((uint32_t)(0x1296fe04)));
  /* 129491f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129491f1 call 0x1294af40 */
  push32(0x129491f6u); f_1294af40();
  /* 129491f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129491f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129491fb mov edx, dword ptr [0x1296fb64] */
  EDX = (r32((uint32_t)(0x1296fb64)));
  /* 12949201 push edx */
  push32((uint32_t)(EDX));
  /* 12949202 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12949207 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1294920d push eax */
  push32((uint32_t)(EAX));
  /* 1294920e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12949213 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12949219 push ecx */
  push32((uint32_t)(ECX));
  /* 1294921a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1294921f mov edx, dword ptr [0x1296fe04] */
  EDX = (r32((uint32_t)(0x1296fe04)));
  /* 12949225 push edx */
  push32((uint32_t)(EDX));
  /* 12949226 call 0x1294af40 */
  push32(0x1294922bu); f_1294af40();
  /* 1294922b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294922e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12949238 jmp 0x12949249 */
  goto L_12949249;
L_1294923a:;
  /* 1294923a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949243 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12949249:;
  /* 12949249 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949253 jae 0x12949304 */
  if (!C.cf) goto L_12949304;
  /* 12949259 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294925f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12949261 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12949269 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1294926c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294926e je 0x129492a6 */
  if (C.zf) goto L_129492a6;
  /* 12949270 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949276 mov cl, byte ptr [eax + 0x1296fd01] */
  CL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 1294927c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1294927f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949285 mov byte ptr [edx + 0x1296fd01], cl */
  w8((uint32_t)(EDX + 0x1296fd01), (CL));
  /* 1294928b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949291 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949297 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1294929e mov byte ptr [eax + 0x1296fc00], dl */
  w8((uint32_t)(EAX + 0x1296fc00), (DL));
  /* 129492a4 jmp 0x129492ff */
  goto L_129492ff;
L_129492a6:;
  /* 129492a6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129492ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129492ae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 129492b6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129492b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129492bb je 0x129492f2 */
  if (C.zf) goto L_129492f2;
  /* 129492bd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129492c3 mov al, byte ptr [edx + 0x1296fd01] */
  AL = (r8((uint32_t)(EDX + 0x1296fd01)));
  /* 129492c9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129492cb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129492d1 mov byte ptr [ecx + 0x1296fd01], al */
  w8((uint32_t)(ECX + 0x1296fd01), (AL));
  /* 129492d7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129492dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129492e3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 129492ea mov byte ptr [edx + 0x1296fc00], cl */
  w8((uint32_t)(EDX + 0x1296fc00), (CL));
  /* 129492f0 jmp 0x129492ff */
  goto L_129492ff;
L_129492f2:;
  /* 129492f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129492f8 mov byte ptr [edx + 0x1296fc00], 0 */
  w8((uint32_t)(EDX + 0x1296fc00), (0x0u));
L_129492ff:;
  /* 129492ff jmp 0x1294923a */
  goto L_1294923a;
L_12949304:;
  /* 12949304 jmp 0x129493ce */
  goto L_129493ce;
L_12949309:;
  /* 12949309 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12949313 jmp 0x12949324 */
  goto L_12949324;
L_12949315:;
  /* 12949315 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294931b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294931e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12949324:;
  /* 12949324 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294932e jae 0x129493ce */
  if (!C.cf) goto L_129493ce;
  /* 12949334 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294933b jb 0x12949378 */
  if (C.cf) goto L_12949378;
  /* 1294933d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949344 ja 0x12949378 */
  if ((!C.cf&&!C.zf)) goto L_12949378;
  /* 12949346 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294934c mov dl, byte ptr [ecx + 0x1296fd01] */
  DL = (r8((uint32_t)(ECX + 0x1296fd01)));
  /* 12949352 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12949355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294935b mov byte ptr [eax + 0x1296fd01], dl */
  w8((uint32_t)(EAX + 0x1296fd01), (DL));
  /* 12949361 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949367 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294936a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949370 mov byte ptr [edx + 0x1296fc00], cl */
  w8((uint32_t)(EDX + 0x1296fc00), (CL));
  /* 12949376 jmp 0x129493c9 */
  goto L_129493c9;
L_12949378:;
  /* 12949378 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294937f jb 0x129493bc */
  if (C.cf) goto L_129493bc;
  /* 12949381 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949388 ja 0x129493bc */
  if ((!C.cf&&!C.zf)) goto L_129493bc;
  /* 1294938a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12949390 mov cl, byte ptr [eax + 0x1296fd01] */
  CL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 12949396 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12949399 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1294939f mov byte ptr [edx + 0x1296fd01], cl */
  w8((uint32_t)(EDX + 0x1296fd01), (CL));
  /* 129493a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129493ab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129493ae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129493b4 mov byte ptr [ecx + 0x1296fc00], al */
  w8((uint32_t)(ECX + 0x1296fc00), (AL));
  /* 129493ba jmp 0x129493c9 */
  goto L_129493c9;
L_129493bc:;
  /* 129493bc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129493c2 mov byte ptr [edx + 0x1296fc00], 0 */
  w8((uint32_t)(EDX + 0x1296fc00), (0x0u));
L_129493c9:;
  /* 129493c9 jmp 0x12949315 */
  goto L_12949315;
L_129493ce:;
  /* 129493ce mov esp, ebp */
  ESP = (EBP);
  /* 129493d0 pop ebp */
  EBP = (pop32());
  /* 129493d1 ret  */
  ESPCHK(0x129490d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x129493e0 (23 bytes, 9 insns) */
void f_129493e0(void) {
  FTRACE(0x129493e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129493e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129493e1 mov ebp, esp */
  EBP = (ESP);
  /* 129493e3 cmp dword ptr [0x1296fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129493ea je 0x129493f3 */
  if (C.zf) goto L_129493f3;
  /* 129493ec mov eax, dword ptr [0x1296fb64] */
  EAX = (r32((uint32_t)(0x1296fb64)));
  /* 129493f1 jmp 0x129493f5 */
  goto L_129493f5;
L_129493f3:;
  /* 129493f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129493f5:;
  /* 129493f5 pop ebp */
  EBP = (pop32());
  /* 129493f6 ret  */
  ESPCHK(0x129493e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009400 @ 0x12949400 (34 bytes, 10 insns) */
void f_12949400(void) {
  FTRACE(0x12949400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12949400 push ebp */
  push32((uint32_t)(EBP));
  /* 12949401 mov ebp, esp */
  EBP = (ESP);
  /* 12949403 cmp dword ptr [0x1296ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294940a jne 0x12949420 */
  if (!C.zf) goto L_12949420;
  /* 1294940c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1294940e call 0x12948c20 */
  push32(0x12949413u); f_12948c20();
  /* 12949413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949416 mov dword ptr [0x1296ffb0], 1 */
  w32((uint32_t)(0x1296ffb0), (0x1u));
L_12949420:;
  /* 12949420 pop ebp */
  EBP = (pop32());
  /* 12949421 ret  */
  ESPCHK(0x12949400u, _esp0);
  ESP += 4; return;
}

/* FUN_10009430 @ 0x12949430 (664 bytes, 268 insns) [15 switch table(s)] */
void f_12949430(void) {
  FTRACE(0x12949430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12949430 push ebp */
  push32((uint32_t)(EBP));
  /* 12949431 mov ebp, esp */
  EBP = (ESP);
  /* 12949433 push edi */
  push32((uint32_t)(EDI));
  /* 12949434 push esi */
  push32((uint32_t)(ESI));
  /* 12949435 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12949438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294943b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1294943e mov eax, ecx */
  EAX = (ECX);
  /* 12949440 mov edx, ecx */
  EDX = (ECX);
  /* 12949442 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949444 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949446 jbe 0x12949450 */
  if ((C.cf||C.zf)) goto L_12949450;
  /* 12949448 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294944a jb 0x129495c8 */
  if (C.cf) goto L_129495c8;
L_12949450:;
  /* 12949450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12949456 jne 0x1294946c */
  if (!C.zf) goto L_1294946c;
  /* 12949458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294945b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1294945e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949461 jb 0x1294948c */
  if (C.cf) goto L_1294948c;
  /* 12949463 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12949465 jmp dword ptr [edx*4 + 0x12949578] */
  switch (EDX) {
    case 0: goto L_12949588;
    case 1: goto L_12949590;
    case 2: goto L_1294959c;
    case 3: goto L_129495b0;
    default: x86_unimpl("switch@0x12949465 out of table"); return;
  }
L_1294946c:;
  /* 1294946c mov eax, edi */
  EAX = (EDI);
  /* 1294946e mov edx, 3 */
  EDX = (0x3u);
  /* 12949473 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949476 jb 0x12949484 */
  if (C.cf) goto L_12949484;
  /* 12949478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1294947b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294947d jmp dword ptr [eax*4 + 0x12949490] */
  switch (EAX) {
    case 1: goto L_129494a0;
    case 2: goto L_129494cc;
    case 3: goto L_129494f0;
    default: x86_unimpl("switch@0x1294947d out of table"); return;
  }
L_12949484:;
  /* 12949484 jmp dword ptr [ecx*4 + 0x12949588] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12949588)))); return;
  /* 1294948b nop  */
  /* nop */
L_1294948c:;
  /* 1294948c jmp dword ptr [ecx*4 + 0x1294950c] */
  switch (ECX) {
    case 0: goto L_1294956f;
    case 1: goto L_1294955c;
    case 2: goto L_12949554;
    case 3: goto L_1294954c;
    case 4: goto L_12949544;
    case 5: goto L_1294953c;
    case 6: goto L_12949534;
    case 7: goto L_1294952c;
    default: x86_unimpl("switch@0x1294948c out of table"); return;
  }
  /* 12949493 nop  */
  /* nop */
L_129494a0:;
  /* 129494a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129494a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129494a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129494a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129494a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129494ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129494af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129494b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129494b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129494b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129494bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129494be jb 0x1294948c */
  if (C.cf) goto L_1294948c;
  /* 129494c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129494c2 jmp dword ptr [edx*4 + 0x12949578] */
  switch (EDX) {
    case 0: goto L_12949588;
    case 1: goto L_12949590;
    case 2: goto L_1294959c;
    case 3: goto L_129495b0;
    default: x86_unimpl("switch@0x129494c2 out of table"); return;
  }
  /* 129494c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129494cc:;
  /* 129494cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129494ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129494d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129494d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129494d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129494d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129494db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129494de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129494e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129494e4 jb 0x1294948c */
  if (C.cf) goto L_1294948c;
  /* 129494e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129494e8 jmp dword ptr [edx*4 + 0x12949578] */
  switch (EDX) {
    case 0: goto L_12949588;
    case 1: goto L_12949590;
    case 2: goto L_1294959c;
    case 3: goto L_129495b0;
    default: x86_unimpl("switch@0x129494e8 out of table"); return;
  }
  /* 129494ef nop  */
  /* nop */
L_129494f0:;
  /* 129494f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129494f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129494f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129494f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129494f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129494fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129494fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129494fe jb 0x1294948c */
  if (C.cf) goto L_1294948c;
  /* 12949500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12949502 jmp dword ptr [edx*4 + 0x12949578] */
  switch (EDX) {
    case 0: goto L_12949588;
    case 1: goto L_12949590;
    case 2: goto L_1294959c;
    case 3: goto L_129495b0;
    default: x86_unimpl("switch@0x12949502 out of table"); return;
  }
  /* 12949509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294952c:;
  /* 1294952c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12949530 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12949534:;
  /* 12949534 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12949538 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1294953c:;
  /* 1294953c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12949540 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12949544:;
  /* 12949544 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12949548 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1294954c:;
  /* 1294954c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12949550 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12949554:;
  /* 12949554 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12949558 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1294955c:;
  /* 1294955c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12949560 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12949564 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1294956b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294956d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1294956f:;
  /* 1294956f jmp dword ptr [edx*4 + 0x12949578] */
  switch (EDX) {
    case 0: goto L_12949588;
    case 1: goto L_12949590;
    case 2: goto L_1294959c;
    case 3: goto L_129495b0;
    default: x86_unimpl("switch@0x1294956f out of table"); return;
  }
  /* 12949576 mov edi, edi */
  EDI = (EDI);
L_12949588:;
  /* 12949588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294958b pop esi */
  ESI = (pop32());
  /* 1294958c pop edi */
  EDI = (pop32());
  /* 1294958d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294958e ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 1294958f nop  */
  /* nop */
L_12949590:;
  /* 12949590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12949592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12949594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949597 pop esi */
  ESI = (pop32());
  /* 12949598 pop edi */
  EDI = (pop32());
  /* 12949599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294959a ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 1294959b nop  */
  /* nop */
L_1294959c:;
  /* 1294959c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294959e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129495a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129495a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129495a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129495a9 pop esi */
  ESI = (pop32());
  /* 129495aa pop edi */
  EDI = (pop32());
  /* 129495ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129495ac ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 129495ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129495b0:;
  /* 129495b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129495b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129495b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129495b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129495ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129495bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129495c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129495c3 pop esi */
  ESI = (pop32());
  /* 129495c4 pop edi */
  EDI = (pop32());
  /* 129495c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129495c6 ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 129495c7 nop  */
  /* nop */
L_129495c8:;
  /* 129495c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 129495cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 129495d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129495d6 jne 0x129495fc */
  if (!C.zf) goto L_129495fc;
  /* 129495d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129495db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129495de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129495e1 jb 0x129495f0 */
  if (C.cf) goto L_129495f0;
  /* 129495e3 std  */
  C.df=1;
  /* 129495e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129495e6 cld  */
  C.df=0;
  /* 129495e7 jmp dword ptr [edx*4 + 0x12949710] */
  switch (EDX) {
    case 0: goto L_12949720;
    case 1: goto L_12949728;
    case 2: goto L_12949738;
    case 3: goto L_1294974c;
    default: x86_unimpl("switch@0x129495e7 out of table"); return;
  }
  /* 129495ee mov edi, edi */
  EDI = (EDI);
L_129495f0:;
  /* 129495f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129495f2 jmp dword ptr [ecx*4 + 0x129496c0] */
  switch (ECX) {
    case 0: goto L_12949707;
    default: x86_unimpl("switch@0x129495f2 out of table"); return;
  }
  /* 129495f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129495fc:;
  /* 129495fc mov eax, edi */
  EAX = (EDI);
  /* 129495fe mov edx, 3 */
  EDX = (0x3u);
  /* 12949603 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949606 jb 0x12949614 */
  if (C.cf) goto L_12949614;
  /* 12949608 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1294960b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294960d jmp dword ptr [eax*4 + 0x12949618] */
  switch (EAX) {
    case 1: goto L_12949628;
    case 2: goto L_12949648;
    case 3: goto L_12949670;
    default: x86_unimpl("switch@0x1294960d out of table"); return;
  }
L_12949614:;
  /* 12949614 jmp dword ptr [ecx*4 + 0x12949710] */
  switch (ECX) {
    case 0: goto L_12949720;
    case 1: goto L_12949728;
    case 2: goto L_12949738;
    case 3: goto L_1294974c;
    default: x86_unimpl("switch@0x12949614 out of table"); return;
  }
  /* 1294961b nop  */
  /* nop */
L_12949628:;
  /* 12949628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294962b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294962d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12949630 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12949631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12949634 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12949635 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949638 jb 0x129495f0 */
  if (C.cf) goto L_129495f0;
  /* 1294963a std  */
  C.df=1;
  /* 1294963b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294963d cld  */
  C.df=0;
  /* 1294963e jmp dword ptr [edx*4 + 0x12949710] */
  switch (EDX) {
    case 0: goto L_12949720;
    case 1: goto L_12949728;
    case 2: goto L_12949738;
    case 3: goto L_1294974c;
    default: x86_unimpl("switch@0x1294963e out of table"); return;
  }
  /* 12949645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12949648:;
  /* 12949648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294964b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294964d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12949650 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12949653 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12949656 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12949659 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294965c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294965f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949662 jb 0x129495f0 */
  if (C.cf) goto L_129495f0;
  /* 12949664 std  */
  C.df=1;
  /* 12949665 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12949667 cld  */
  C.df=0;
  /* 12949668 jmp dword ptr [edx*4 + 0x12949710] */
  switch (EDX) {
    case 0: goto L_12949720;
    case 1: goto L_12949728;
    case 2: goto L_12949738;
    case 3: goto L_1294974c;
    default: x86_unimpl("switch@0x12949668 out of table"); return;
  }
  /* 1294966f nop  */
  /* nop */
L_12949670:;
  /* 12949670 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12949673 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12949675 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12949678 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294967b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294967e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12949681 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12949684 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12949687 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294968a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294968d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949690 jb 0x129495f0 */
  if (C.cf) goto L_129495f0;
  /* 12949696 std  */
  C.df=1;
  /* 12949697 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12949699 cld  */
  C.df=0;
  /* 1294969a jmp dword ptr [edx*4 + 0x12949710] */
  switch (EDX) {
    case 0: goto L_12949720;
    case 1: goto L_12949728;
    case 2: goto L_12949738;
    case 3: goto L_1294974c;
    default: x86_unimpl("switch@0x1294969a out of table"); return;
  }
  /* 129496a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 129496a4 les edx, ptr [esi - 0x6933ed6c] */
  x86_unimpl("les @ 0x129496a4");
  /* 129496aa xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129496ab adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 129496ad xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129496ae xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129496af adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 129496b1 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129496b2 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129496b3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 129496b5 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129496b6 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129496b7 adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 129496b9 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129496ba xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129496bb adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 129496bd xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129496be xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 129496c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 129496c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 129496cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 129496d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 129496d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 129496d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 129496dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 129496e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 129496e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 129496e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 129496ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 129496f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 129496f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 129496f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 129496fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12949703 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12949705 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12949707:;
  /* 12949707 jmp dword ptr [edx*4 + 0x12949710] */
  switch (EDX) {
    case 0: goto L_12949720;
    case 1: goto L_12949728;
    case 2: goto L_12949738;
    case 3: goto L_1294974c;
    default: x86_unimpl("switch@0x12949707 out of table"); return;
  }
  /* 1294970e mov edi, edi */
  EDI = (EDI);
L_12949720:;
  /* 12949720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949723 pop esi */
  ESI = (pop32());
  /* 12949724 pop edi */
  EDI = (pop32());
  /* 12949725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12949726 ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 12949727 nop  */
  /* nop */
L_12949728:;
  /* 12949728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294972b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294972e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949731 pop esi */
  ESI = (pop32());
  /* 12949732 pop edi */
  EDI = (pop32());
  /* 12949733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12949734 ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 12949735 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12949738:;
  /* 12949738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294973b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294973e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12949741 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12949744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949747 pop esi */
  ESI = (pop32());
  /* 12949748 pop edi */
  EDI = (pop32());
  /* 12949749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294974a ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
  /* 1294974b nop  */
  /* nop */
L_1294974c:;
  /* 1294974c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294974f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12949752 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12949755 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12949758 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294975b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294975e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949761 pop esi */
  ESI = (pop32());
  /* 12949762 pop edi */
  EDI = (pop32());
  /* 12949763 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12949764 ret  */
  ESPCHK(0x12949430u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12949770 (104 bytes, 43 insns) */
void f_12949770(void) {
  FTRACE(0x12949770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12949770 push ebx */
  push32((uint32_t)(EBX));
  /* 12949771 push esi */
  push32((uint32_t)(ESI));
  /* 12949772 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12949776 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12949778 jne 0x12949792 */
  if (!C.zf) goto L_12949792;
  /* 1294977a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1294977e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12949782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12949784 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12949786 mov ebx, eax */
  EBX = (EAX);
  /* 12949788 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1294978c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1294978e mov edx, ebx */
  EDX = (EBX);
  /* 12949790 jmp 0x129497d3 */
  goto L_129497d3;
L_12949792:;
  /* 12949792 mov ecx, eax */
  ECX = (EAX);
  /* 12949794 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12949798 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1294979c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_129497a0:;
  /* 129497a0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129497a2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 129497a4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 129497a6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 129497a8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129497aa jne 0x129497a0 */
  if (!C.zf) goto L_129497a0;
  /* 129497ac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129497ae mov esi, eax */
  ESI = (EAX);
  /* 129497b0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129497b4 mov ecx, eax */
  ECX = (EAX);
  /* 129497b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 129497ba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129497bc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129497be jb 0x129497ce */
  if (C.cf) goto L_129497ce;
  /* 129497c0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129497c4 ja 0x129497ce */
  if ((!C.cf&&!C.zf)) goto L_129497ce;
  /* 129497c6 jb 0x129497cf */
  if (C.cf) goto L_129497cf;
  /* 129497c8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129497cc jbe 0x129497cf */
  if ((C.cf||C.zf)) goto L_129497cf;
L_129497ce:;
  /* 129497ce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_129497cf:;
  /* 129497cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129497d1 mov eax, esi */
  EAX = (ESI);
L_129497d3:;
  /* 129497d3 pop esi */
  ESI = (pop32());
  /* 129497d4 pop ebx */
  EBX = (pop32());
  /* 129497d5 ret 0x10 */
  ESPCHK(0x12949770u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x129497e0 (117 bytes, 44 insns) */
void f_129497e0(void) {
  FTRACE(0x129497e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129497e0 push ebx */
  push32((uint32_t)(EBX));
  /* 129497e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 129497e5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129497e7 jne 0x12949801 */
  if (!C.zf) goto L_12949801;
  /* 129497e9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 129497ed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 129497f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129497f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129497f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129497f9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129497fb mov eax, edx */
  EAX = (EDX);
  /* 129497fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129497ff jmp 0x12949851 */
  goto L_12949851;
L_12949801:;
  /* 12949801 mov ecx, eax */
  ECX = (EAX);
  /* 12949803 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12949807 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1294980b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1294980f:;
  /* 1294980f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12949811 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12949813 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12949815 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12949817 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12949819 jne 0x1294980f */
  if (!C.zf) goto L_1294980f;
  /* 1294981b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1294981d mov ecx, eax */
  ECX = (EAX);
  /* 1294981f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12949823 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12949824 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12949828 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294982a jb 0x1294983a */
  if (C.cf) goto L_1294983a;
  /* 1294982c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949830 ja 0x1294983a */
  if ((!C.cf&&!C.zf)) goto L_1294983a;
  /* 12949832 jb 0x12949842 */
  if (C.cf) goto L_12949842;
  /* 12949834 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949838 jbe 0x12949842 */
  if ((C.cf||C.zf)) goto L_12949842;
L_1294983a:;
  /* 1294983a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294983e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12949842:;
  /* 12949842 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949846 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294984a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294984c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294984e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12949851:;
  /* 12949851 pop ebx */
  EBX = (pop32());
  /* 12949852 ret 0x10 */
  ESPCHK(0x129497e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009860 @ 0x12949860 (628 bytes, 214 insns) */
void f_12949860(void) {
  FTRACE(0x12949860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12949860 push ebp */
  push32((uint32_t)(EBP));
  /* 12949861 mov ebp, esp */
  EBP = (ESP);
  /* 12949863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949866 push ebx */
  push32((uint32_t)(EBX));
  /* 12949867 push esi */
  push32((uint32_t)(ESI));
  /* 12949868 push edi */
  push32((uint32_t)(EDI));
L_12949869:;
  /* 12949869 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294986d jne 0x1294988d */
  if (!C.zf) goto L_1294988d;
  /* 1294986f push 0x12969e84 */
  push32((uint32_t)(0x12969e84u));
  /* 12949874 push 0 */
  push32((uint32_t)(0x0u));
  /* 12949876 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12949878 push 0x12969e78 */
  push32((uint32_t)(0x12969e78u));
  /* 1294987d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294987f call 0x12941c10 */
  push32(0x12949884u); f_12941c10();
  /* 12949884 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949887 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294988a jne 0x1294988d */
  if (!C.zf) goto L_1294988d;
  /* 1294988c int3  */
  x86_unimpl("int3 @ 0x1294988c");
L_1294988d:;
  /* 1294988d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294988f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12949891 jne 0x12949869 */
  if (!C.zf) goto L_12949869;
  /* 12949893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949896 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12949899 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294989c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1294989f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129498a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129498a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 129498ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129498b0 je 0x129498bf */
  if (C.zf) goto L_129498bf;
  /* 129498b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129498b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 129498bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129498bd je 0x129498d5 */
  if (C.zf) goto L_129498d5;
L_129498bf:;
  /* 129498bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129498c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129498c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 129498cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129498d0 jmp 0x12949acd */
  goto L_12949acd;
L_129498d5:;
  /* 129498d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129498db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129498de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129498e0 je 0x1294992c */
  if (C.zf) goto L_1294992c;
  /* 129498e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129498ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129498f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 129498f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129498f7 je 0x12949915 */
  if (C.zf) goto L_12949915;
  /* 129498f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129498ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12949902 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12949904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949907 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294990a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1294990d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949910 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12949913 jmp 0x1294992c */
  goto L_1294992c;
L_12949915:;
  /* 12949915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949918 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294991b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1294991e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949921 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12949924 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12949927 jmp 0x12949acd */
  goto L_12949acd;
L_1294992c:;
  /* 1294992c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294992f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12949932 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12949935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949938 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1294993b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294993e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12949941 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12949944 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949947 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1294994a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294994d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12949954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294995b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294995e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12949961 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949964 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12949967 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1294996d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294996f jne 0x1294999f */
  if (!C.zf) goto L_1294999f;
  /* 12949971 cmp dword ptr [ebp - 8], 0x1296d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1296d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949978 je 0x12949983 */
  if (C.zf) goto L_12949983;
  /* 1294997a cmp dword ptr [ebp - 8], 0x1296d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1296d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949981 jne 0x12949993 */
  if (!C.zf) goto L_12949993;
L_12949983:;
  /* 12949983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12949986 push edx */
  push32((uint32_t)(EDX));
  /* 12949987 call 0x1294b7d0 */
  push32(0x1294998cu); f_1294b7d0();
  /* 1294998c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294998f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12949991 jne 0x1294999f */
  if (!C.zf) goto L_1294999f;
L_12949993:;
  /* 12949993 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949996 push eax */
  push32((uint32_t)(EAX));
  /* 12949997 call 0x1294b700 */
  push32(0x1294999cu); f_1294b700();
  /* 1294999c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294999f:;
  /* 1294999f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129499a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129499a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 129499ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129499ad je 0x12949a8b */
  if (C.zf) goto L_12949a8b;
L_129499b3:;
  /* 129499b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129499b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129499b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 129499bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129499be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129499c0 jge 0x129499e3 */
  if ((C.sf==C.of)) goto L_129499e3;
  /* 129499c2 push 0x12969e38 */
  push32((uint32_t)(0x12969e38u));
  /* 129499c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129499c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 129499ce push 0x12969e78 */
  push32((uint32_t)(0x12969e78u));
  /* 129499d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129499d5 call 0x12941c10 */
  push32(0x129499dau); f_12941c10();
  /* 129499da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129499dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129499e0 jne 0x129499e3 */
  if (!C.zf) goto L_129499e3;
  /* 129499e2 int3  */
  x86_unimpl("int3 @ 0x129499e2");
L_129499e3:;
  /* 129499e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129499e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129499e7 jne 0x129499b3 */
  if (!C.zf) goto L_129499b3;
  /* 129499e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129499ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129499ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129499f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129499f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129499f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129499fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129499fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949a00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949a03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12949a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949a08 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12949a0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949a0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949a11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12949a14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949a18 jle 0x12949a36 */
  if ((C.zf||C.sf!=C.of)) goto L_12949a36;
  /* 12949a1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949a1d push ecx */
  push32((uint32_t)(ECX));
  /* 12949a1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949a21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12949a24 push eax */
  push32((uint32_t)(EAX));
  /* 12949a25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12949a28 push ecx */
  push32((uint32_t)(ECX));
  /* 12949a29 call 0x1294b3f0 */
  push32(0x12949a2eu); f_1294b3f0();
  /* 12949a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949a31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12949a34 jmp 0x12949a7e */
  goto L_12949a7e;
L_12949a36:;
  /* 12949a36 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949a3a je 0x12949a59 */
  if (C.zf) goto L_12949a59;
  /* 12949a3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12949a3f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12949a42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12949a45 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12949a48 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12949a4b mov ecx, dword ptr [edx*4 + 0x1296fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 12949a52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949a54 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12949a57 jmp 0x12949a60 */
  goto L_12949a60;
L_12949a59:;
  /* 12949a59 mov dword ptr [ebp - 0x14], 0x1296ca60 */
  w32((uint32_t)(EBP + -0x14), (0x1296ca60u));
L_12949a60:;
  /* 12949a60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12949a63 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12949a67 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12949a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12949a6c je 0x12949a7e */
  if (C.zf) goto L_12949a7e;
  /* 12949a6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12949a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12949a72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12949a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12949a76 call 0x1294b2a0 */
  push32(0x12949a7bu); f_1294b2a0();
  /* 12949a7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12949a7e:;
  /* 12949a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949a81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12949a84 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12949a87 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12949a89 jmp 0x12949aa9 */
  goto L_12949aa9;
L_12949a8b:;
  /* 12949a8b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12949a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949a95 push edx */
  push32((uint32_t)(EDX));
  /* 12949a96 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12949a99 push eax */
  push32((uint32_t)(EAX));
  /* 12949a9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12949a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12949a9e call 0x1294b3f0 */
  push32(0x12949aa3u); f_1294b3f0();
  /* 12949aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949aa6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12949aa9:;
  /* 12949aa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12949aac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949aaf je 0x12949ac5 */
  if (C.zf) goto L_12949ac5;
  /* 12949ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949ab4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12949ab7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12949aba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949abd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12949ac0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12949ac3 jmp 0x12949acd */
  goto L_12949acd;
L_12949ac5:;
  /* 12949ac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949ac8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12949acd:;
  /* 12949acd pop edi */
  EDI = (pop32());
  /* 12949ace pop esi */
  ESI = (pop32());
  /* 12949acf pop ebx */
  EBX = (pop32());
  /* 12949ad0 mov esp, ebp */
  ESP = (EBP);
  /* 12949ad2 pop ebp */
  EBP = (pop32());
  /* 12949ad3 ret  */
  ESPCHK(0x12949860u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ae0 @ 0x12949ae0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12949ae0(void) {
  FTRACE(0x12949ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12949ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12949ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12949ae3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949ae9 push ebx */
  push32((uint32_t)(EBX));
  /* 12949aea push esi */
  push32((uint32_t)(ESI));
  /* 12949aeb push edi */
  push32((uint32_t)(EDI));
  /* 12949aec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12949af3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12949afd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12949b04:;
  /* 12949b04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949b07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12949b09 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12949b0c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949b10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949b13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949b16 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12949b19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12949b1b je 0x1294a6f7 */
  if (C.zf) goto L_1294a6f7;
  /* 12949b21 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949b28 jl 0x1294a6f7 */
  if ((C.sf!=C.of)) goto L_1294a6f7;
  /* 12949b2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949b32 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949b35 jl 0x12949b56 */
  if ((C.sf!=C.of)) goto L_12949b56;
  /* 12949b37 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949b3b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949b3e jg 0x12949b56 */
  if ((!C.zf&&C.sf==C.of)) goto L_12949b56;
  /* 12949b40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949b44 movsx ecx, byte ptr [eax + 0x12969e70] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12969e70))));
  /* 12949b4b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12949b4e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12949b54 jmp 0x12949b60 */
  goto L_12949b60;
L_12949b56:;
  /* 12949b56 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12949b60:;
  /* 12949b60 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12949b66 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12949b69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12949b6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12949b6f movsx edx, byte ptr [ecx + eax*8 + 0x12969e90] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12969e90))));
  /* 12949b77 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12949b7a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12949b7d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12949b80 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12949b86 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949b8d ja 0x1294a6f2 */
  if ((!C.cf&&!C.zf)) goto L_1294a6f2;
  /* 12949b93 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12949b99 jmp dword ptr [ecx*4 + 0x1294a704] */
  switch (ECX) {
    case 0: goto L_12949ba0;
    case 1: goto L_12949c3a;
    case 2: goto L_12949c7c;
    case 3: goto L_12949ceb;
    case 4: goto L_12949d43;
    case 5: goto L_12949d52;
    case 6: goto L_12949d9e;
    case 7: goto L_12949e31;
    case 8: goto L_12949cc8;
    case 9: goto L_12949cd3;
    case 10: goto L_12949cbe;
    case 11: goto L_12949cb3;
    case 12: goto L_12949cde;
    case 13: goto L_12949ce6;
    default: x86_unimpl("switch@0x12949b99 out of table"); return;
  }
L_12949ba0:;
  /* 12949ba0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12949ba7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12949baa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12949bb0 mov eax, dword ptr [0x1296cc98] */
  EAX = (r32((uint32_t)(0x1296cc98)));
  /* 12949bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12949bb7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12949bbb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12949bc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12949bc3 je 0x12949c1d */
  if (C.zf) goto L_12949c1d;
  /* 12949bc5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12949bcb push edx */
  push32((uint32_t)(EDX));
  /* 12949bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949bcf push eax */
  push32((uint32_t)(EAX));
  /* 12949bd0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12949bd5 call 0x1294a810 */
  push32(0x12949bdau); f_1294a810();
  /* 12949bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949bdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949be0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12949be2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12949be5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949be8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949beb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12949bee:;
  /* 12949bee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949bf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12949bf4 jne 0x12949c17 */
  if (!C.zf) goto L_12949c17;
  /* 12949bf6 push 0x12969f10 */
  push32((uint32_t)(0x12969f10u));
  /* 12949bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12949bfd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12949c02 push 0x12969f04 */
  push32((uint32_t)(0x12969f04u));
  /* 12949c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12949c09 call 0x12941c10 */
  push32(0x12949c0eu); f_12941c10();
  /* 12949c0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949c11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949c14 jne 0x12949c17 */
  if (!C.zf) goto L_12949c17;
  /* 12949c16 int3  */
  x86_unimpl("int3 @ 0x12949c16");
L_12949c17:;
  /* 12949c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12949c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12949c1b jne 0x12949bee */
  if (!C.zf) goto L_12949bee;
L_12949c1d:;
  /* 12949c1d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12949c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12949c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12949c27 push edx */
  push32((uint32_t)(EDX));
  /* 12949c28 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949c2c push eax */
  push32((uint32_t)(EAX));
  /* 12949c2d call 0x1294a810 */
  push32(0x12949c32u); f_1294a810();
  /* 12949c32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949c35 jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949c3a:;
  /* 12949c3a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12949c41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12949c44 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12949c4a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12949c50 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12949c56 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12949c5c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12949c5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12949c66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12949c70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12949c77 jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949c7c:;
  /* 12949c7c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949c80 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12949c86 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12949c8c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949c8f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12949c95 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949c9c ja 0x12949ce6 */
  if ((!C.cf&&!C.zf)) goto L_12949ce6;
  /* 12949c9e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12949ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12949ca6 mov al, byte ptr [ecx + 0x1294a73c] */
  AL = (r8((uint32_t)(ECX + 0x1294a73c)));
  /* 12949cac jmp dword ptr [eax*4 + 0x1294a724] */
  switch (EAX) {
    case 0: goto L_12949cc8;
    case 1: goto L_12949cd3;
    case 2: goto L_12949cbe;
    case 3: goto L_12949cb3;
    case 4: goto L_12949cde;
    case 5: goto L_12949ce6;
    default: x86_unimpl("switch@0x12949cac out of table"); return;
  }
L_12949cb3:;
  /* 12949cb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949cb6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12949cb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12949cbc jmp 0x12949ce6 */
  goto L_12949ce6;
L_12949cbe:;
  /* 12949cbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949cc1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12949cc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12949cc6 jmp 0x12949ce6 */
  goto L_12949ce6;
L_12949cc8:;
  /* 12949cc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949ccb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12949cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12949cd1 jmp 0x12949ce6 */
  goto L_12949ce6;
L_12949cd3:;
  /* 12949cd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949cd6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12949cd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12949cdc jmp 0x12949ce6 */
  goto L_12949ce6;
L_12949cde:;
  /* 12949cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949ce1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12949ce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12949ce6:;
  /* 12949ce6 jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949ceb:;
  /* 12949ceb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949cef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949cf2 jne 0x12949d27 */
  if (!C.zf) goto L_12949d27;
  /* 12949cf4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12949cf7 push edx */
  push32((uint32_t)(EDX));
  /* 12949cf8 call 0x1294a920 */
  push32(0x12949cfdu); f_1294a920();
  /* 12949cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949d00 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12949d06 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949d0d jge 0x12949d25 */
  if ((C.sf==C.of)) goto L_12949d25;
  /* 12949d0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949d12 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12949d14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12949d17 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12949d1d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12949d1f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12949d25:;
  /* 12949d25 jmp 0x12949d3e */
  goto L_12949d3e;
L_12949d27:;
  /* 12949d27 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12949d2d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12949d30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949d34 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12949d38 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12949d3e:;
  /* 12949d3e jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949d43:;
  /* 12949d43 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12949d4d jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949d52:;
  /* 12949d52 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949d56 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949d59 jne 0x12949d82 */
  if (!C.zf) goto L_12949d82;
  /* 12949d5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12949d5e push eax */
  push32((uint32_t)(EAX));
  /* 12949d5f call 0x1294a920 */
  push32(0x12949d64u); f_1294a920();
  /* 12949d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949d67 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12949d6d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949d74 jge 0x12949d80 */
  if ((C.sf==C.of)) goto L_12949d80;
  /* 12949d76 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12949d80:;
  /* 12949d80 jmp 0x12949d99 */
  goto L_12949d99;
L_12949d82:;
  /* 12949d82 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12949d88 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12949d8b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949d8f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12949d93 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12949d99:;
  /* 12949d99 jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949d9e:;
  /* 12949d9e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949da2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12949da8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12949dae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949db1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12949db7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949dbe ja 0x12949e2c */
  if ((!C.cf&&!C.zf)) goto L_12949e2c;
  /* 12949dc0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12949dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12949dc8 mov al, byte ptr [ecx + 0x1294a761] */
  AL = (r8((uint32_t)(ECX + 0x1294a761)));
  /* 12949dce jmp dword ptr [eax*4 + 0x1294a74d] */
  switch (EAX) {
    case 0: goto L_12949de0;
    case 1: goto L_12949e19;
    case 2: goto L_12949dd5;
    case 3: goto L_12949e23;
    case 4: goto L_12949e2c;
    default: x86_unimpl("switch@0x12949dce out of table"); return;
  }
L_12949dd5:;
  /* 12949dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949dd8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12949ddb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12949dde jmp 0x12949e2c */
  goto L_12949e2c;
L_12949de0:;
  /* 12949de0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12949de6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949de9 jne 0x12949e0b */
  if (!C.zf) goto L_12949e0b;
  /* 12949deb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949dee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12949df2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949df5 jne 0x12949e0b */
  if (!C.zf) goto L_12949e0b;
  /* 12949df7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12949dfa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12949dfd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12949e00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949e03 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12949e06 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12949e09 jmp 0x12949e17 */
  goto L_12949e17;
L_12949e0b:;
  /* 12949e0b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12949e12 jmp 0x12949ba0 */
  goto L_12949ba0;
L_12949e17:;
  /* 12949e17 jmp 0x12949e2c */
  goto L_12949e2c;
L_12949e19:;
  /* 12949e19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949e1c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12949e1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12949e21 jmp 0x12949e2c */
  goto L_12949e2c;
L_12949e23:;
  /* 12949e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949e26 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12949e29 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12949e2c:;
  /* 12949e2c jmp 0x1294a6f2 */
  goto L_1294a6f2;
L_12949e31:;
  /* 12949e31 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12949e35 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12949e3b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12949e41 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12949e44 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12949e4a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949e51 ja 0x1294a517 */
  if ((!C.cf&&!C.zf)) goto L_1294a517;
  /* 12949e57 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12949e5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12949e5f mov cl, byte ptr [edx + 0x1294a7cc] */
  CL = (r8((uint32_t)(EDX + 0x1294a7cc)));
  /* 12949e65 jmp dword ptr [ecx*4 + 0x1294a790] */
  switch (ECX) {
    case 0: goto L_12949e6c;
    case 1: goto L_1294a100;
    case 2: goto L_12949f90;
    case 3: goto L_1294a239;
    case 4: goto L_12949efb;
    case 5: goto L_12949e81;
    case 6: goto L_1294a20b;
    case 7: goto L_1294a110;
    case 8: goto L_1294a0b5;
    case 9: goto L_1294a285;
    case 10: goto L_1294a22f;
    case 11: goto L_12949fa6;
    case 12: goto L_1294a223;
    case 13: goto L_1294a245;
    case 14: goto L_1294a517;
    default: x86_unimpl("switch@0x12949e65 out of table"); return;
  }
L_12949e6c:;
  /* 12949e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949e6f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12949e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12949e76 jne 0x12949e81 */
  if (!C.zf) goto L_12949e81;
  /* 12949e78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949e7b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12949e7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12949e81:;
  /* 12949e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949e84 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12949e8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12949e8c je 0x12949ec7 */
  if (C.zf) goto L_12949ec7;
  /* 12949e8e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12949e91 push eax */
  push32((uint32_t)(EAX));
  /* 12949e92 call 0x1294a960 */
  push32(0x12949e97u); f_1294a960();
  /* 12949e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949e9a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12949e9e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12949ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12949ea3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12949ea9 push edx */
  push32((uint32_t)(EDX));
  /* 12949eaa call 0x1294ba40 */
  push32(0x12949eafu); f_1294ba40();
  /* 12949eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949eb2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12949eb5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949eb9 jge 0x12949ec5 */
  if ((C.sf==C.of)) goto L_12949ec5;
  /* 12949ebb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12949ec5:;
  /* 12949ec5 jmp 0x12949eed */
  goto L_12949eed;
L_12949ec7:;
  /* 12949ec7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12949eca push eax */
  push32((uint32_t)(EAX));
  /* 12949ecb call 0x1294a920 */
  push32(0x12949ed0u); f_1294a920();
  /* 12949ed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949ed3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12949eda mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12949ee0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12949ee6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12949eed:;
  /* 12949eed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12949ef3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12949ef6 jmp 0x1294a517 */
  goto L_1294a517;
L_12949efb:;
  /* 12949efb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12949efe push eax */
  push32((uint32_t)(EAX));
  /* 12949eff call 0x1294a920 */
  push32(0x12949f04u); f_1294a920();
  /* 12949f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949f07 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12949f0d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949f14 je 0x12949f22 */
  if (C.zf) goto L_12949f22;
  /* 12949f16 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12949f1c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949f20 jne 0x12949f3c */
  if (!C.zf) goto L_12949f3c;
L_12949f22:;
  /* 12949f22 mov edx, dword ptr [0x1296cfb0] */
  EDX = (r32((uint32_t)(0x1296cfb0)));
  /* 12949f28 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12949f2b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12949f2e push eax */
  push32((uint32_t)(EAX));
  /* 12949f2f call 0x12945980 */
  push32(0x12949f34u); f_12945980();
  /* 12949f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949f37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12949f3a jmp 0x12949f8b */
  goto L_12949f8b;
L_12949f3c:;
  /* 12949f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949f3f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12949f45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12949f47 je 0x12949f6c */
  if (C.zf) goto L_12949f6c;
  /* 12949f49 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12949f4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12949f52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12949f55 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12949f5b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12949f5e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12949f60 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12949f63 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12949f6a jmp 0x12949f8b */
  goto L_12949f8b;
L_12949f6c:;
  /* 12949f6c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12949f73 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12949f79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12949f7c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12949f7f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12949f85 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12949f88 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12949f8b:;
  /* 12949f8b jmp 0x1294a517 */
  goto L_1294a517;
L_12949f90:;
  /* 12949f90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949f93 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12949f99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12949f9b jne 0x12949fa6 */
  if (!C.zf) goto L_12949fa6;
  /* 12949f9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949fa0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12949fa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12949fa6:;
  /* 12949fa6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949fad jne 0x12949fbb */
  if (!C.zf) goto L_12949fbb;
  /* 12949faf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12949fb9 jmp 0x12949fc7 */
  goto L_12949fc7;
L_12949fbb:;
  /* 12949fbb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12949fc1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12949fc7:;
  /* 12949fc7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12949fcd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12949fd3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12949fd6 push edx */
  push32((uint32_t)(EDX));
  /* 12949fd7 call 0x1294a920 */
  push32(0x12949fdcu); f_1294a920();
  /* 12949fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12949fdf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12949fe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12949fe5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12949fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12949fec je 0x1294a056 */
  if (C.zf) goto L_1294a056;
  /* 12949fee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12949ff2 jne 0x12949ffd */
  if (!C.zf) goto L_12949ffd;
  /* 12949ff4 mov ecx, dword ptr [0x1296cfb4] */
  ECX = (r32((uint32_t)(0x1296cfb4)));
  /* 12949ffa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12949ffd:;
  /* 12949ffd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1294a004 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a007 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1294a00d:;
  /* 1294a00d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1294a013 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1294a019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a01c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1294a022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a024 je 0x1294a046 */
  if (C.zf) goto L_1294a046;
  /* 1294a026 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1294a02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294a02e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1294a031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a033 je 0x1294a046 */
  if (C.zf) goto L_1294a046;
  /* 1294a035 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1294a03b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a03e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1294a044 jmp 0x1294a00d */
  goto L_1294a00d;
L_1294a046:;
  /* 1294a046 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1294a04c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a04f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1294a051 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1294a054 jmp 0x1294a0b0 */
  goto L_1294a0b0;
L_1294a056:;
  /* 1294a056 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a05a jne 0x1294a064 */
  if (!C.zf) goto L_1294a064;
  /* 1294a05c mov eax, dword ptr [0x1296cfb0] */
  EAX = (r32((uint32_t)(0x1296cfb0)));
  /* 1294a061 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1294a064:;
  /* 1294a064 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a067 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1294a06d:;
  /* 1294a06d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1294a073 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1294a079 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a07c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1294a082 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a084 je 0x1294a0a4 */
  if (C.zf) goto L_1294a0a4;
  /* 1294a086 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1294a08c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294a08f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a091 je 0x1294a0a4 */
  if (C.zf) goto L_1294a0a4;
  /* 1294a093 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1294a099 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a09c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1294a0a2 jmp 0x1294a06d */
  goto L_1294a06d;
L_1294a0a4:;
  /* 1294a0a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1294a0aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a0ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1294a0b0:;
  /* 1294a0b0 jmp 0x1294a517 */
  goto L_1294a517;
L_1294a0b5:;
  /* 1294a0b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1294a0b8 push edx */
  push32((uint32_t)(EDX));
  /* 1294a0b9 call 0x1294a920 */
  push32(0x1294a0beu); f_1294a920();
  /* 1294a0be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a0c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1294a0c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a0ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a0cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a0cf je 0x1294a0e3 */
  if (C.zf) goto L_1294a0e3;
  /* 1294a0d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1294a0d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1294a0de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1294a0e1 jmp 0x1294a0f1 */
  goto L_1294a0f1;
L_1294a0e3:;
  /* 1294a0e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1294a0e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1294a0ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1294a0f1:;
  /* 1294a0f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1294a0fb jmp 0x1294a517 */
  goto L_1294a517;
L_1294a100:;
  /* 1294a100 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1294a107 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1294a10a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294a10d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1294a110:;
  /* 1294a110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a113 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1294a115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294a118 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1294a11e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1294a121 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a128 jge 0x1294a136 */
  if ((C.sf==C.of)) goto L_1294a136;
  /* 1294a12a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1294a134 jmp 0x1294a152 */
  goto L_1294a152;
L_1294a136:;
  /* 1294a136 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a13d jne 0x1294a152 */
  if (!C.zf) goto L_1294a152;
  /* 1294a13f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1294a143 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a146 jne 0x1294a152 */
  if (!C.zf) goto L_1294a152;
  /* 1294a148 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1294a152:;
  /* 1294a152 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a155 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a158 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1294a15b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a15e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a161 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294a163 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294a166 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1294a16c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1294a172 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294a175 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a176 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1294a17c push edx */
  push32((uint32_t)(EDX));
  /* 1294a17d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1294a181 push eax */
  push32((uint32_t)(EAX));
  /* 1294a182 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a185 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a186 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1294a18c push edx */
  push32((uint32_t)(EDX));
  /* 1294a18d call dword ptr [0x1296d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296d3a0))), 0x1294a193u);
  /* 1294a193 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a199 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a19e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a1a0 je 0x1294a1b8 */
  if (C.zf) goto L_1294a1b8;
  /* 1294a1a2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a1a9 jne 0x1294a1b8 */
  if (!C.zf) goto L_1294a1b8;
  /* 1294a1ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a1ae push ecx */
  push32((uint32_t)(ECX));
  /* 1294a1af call dword ptr [0x1296d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296d3ac))), 0x1294a1b5u);
  /* 1294a1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294a1b8:;
  /* 1294a1b8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1294a1bc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a1bf jne 0x1294a1da */
  if (!C.zf) goto L_1294a1da;
  /* 1294a1c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a1c4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a1c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a1cb jne 0x1294a1da */
  if (!C.zf) goto L_1294a1da;
  /* 1294a1cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a1d1 call dword ptr [0x1296d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296d3a4))), 0x1294a1d7u);
  /* 1294a1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294a1da:;
  /* 1294a1da mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a1dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294a1e0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a1e3 jne 0x1294a1f7 */
  if (!C.zf) goto L_1294a1f7;
  /* 1294a1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a1e8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1294a1eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294a1ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a1f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a1f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1294a1f7:;
  /* 1294a1f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a1fa push eax */
  push32((uint32_t)(EAX));
  /* 1294a1fb call 0x12945980 */
  push32(0x1294a200u); f_12945980();
  /* 1294a200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a203 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1294a206 jmp 0x1294a517 */
  goto L_1294a517;
L_1294a20b:;
  /* 1294a20b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a20e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1294a211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294a214 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1294a21e jmp 0x1294a2a5 */
  goto L_1294a2a5;
L_1294a223:;
  /* 1294a223 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1294a22d jmp 0x1294a2a5 */
  goto L_1294a2a5;
L_1294a22f:;
  /* 1294a22f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1294a239:;
  /* 1294a239 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1294a243 jmp 0x1294a24f */
  goto L_1294a24f;
L_1294a245:;
  /* 1294a245 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1294a24f:;
  /* 1294a24f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1294a259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a25c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a264 je 0x1294a283 */
  if (C.zf) goto L_1294a283;
  /* 1294a266 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1294a26d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1294a273 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a276 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1294a27c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1294a283:;
  /* 1294a283 jmp 0x1294a2a5 */
  goto L_1294a2a5;
L_1294a285:;
  /* 1294a285 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1294a28f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a292 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1294a298 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294a29a je 0x1294a2a5 */
  if (C.zf) goto L_1294a2a5;
  /* 1294a29c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a29f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1294a2a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1294a2a5:;
  /* 1294a2a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a2a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a2ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a2af je 0x1294a2ce */
  if (C.zf) goto L_1294a2ce;
  /* 1294a2b1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1294a2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a2b5 call 0x1294a940 */
  push32(0x1294a2bau); f_1294a940();
  /* 1294a2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a2bd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1294a2c3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1294a2c9 jmp 0x1294a35f */
  goto L_1294a35f;
L_1294a2ce:;
  /* 1294a2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a2d1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a2d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a2d6 je 0x1294a320 */
  if (C.zf) goto L_1294a320;
  /* 1294a2d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a2db and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a2de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a2e0 je 0x1294a300 */
  if (C.zf) goto L_1294a300;
  /* 1294a2e2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1294a2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a2e6 call 0x1294a920 */
  push32(0x1294a2ebu); f_1294a920();
  /* 1294a2eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a2ee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1294a2f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294a2f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1294a2f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1294a2fe jmp 0x1294a31e */
  goto L_1294a31e;
L_1294a300:;
  /* 1294a300 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1294a303 push edx */
  push32((uint32_t)(EDX));
  /* 1294a304 call 0x1294a920 */
  push32(0x1294a309u); f_1294a920();
  /* 1294a309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a30c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294a311 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294a312 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1294a318 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1294a31e:;
  /* 1294a31e jmp 0x1294a35f */
  goto L_1294a35f;
L_1294a320:;
  /* 1294a320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a323 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a328 je 0x1294a345 */
  if (C.zf) goto L_1294a345;
  /* 1294a32a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1294a32d push ecx */
  push32((uint32_t)(ECX));
  /* 1294a32e call 0x1294a920 */
  push32(0x1294a333u); f_1294a920();
  /* 1294a333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a336 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294a337 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1294a33d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1294a343 jmp 0x1294a35f */
  goto L_1294a35f;
L_1294a345:;
  /* 1294a345 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1294a348 push edx */
  push32((uint32_t)(EDX));
  /* 1294a349 call 0x1294a920 */
  push32(0x1294a34eu); f_1294a920();
  /* 1294a34e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a351 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294a353 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1294a359 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1294a35f:;
  /* 1294a35f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a362 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a367 je 0x1294a3a7 */
  if (C.zf) goto L_1294a3a7;
  /* 1294a369 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a370 jg 0x1294a3a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294a3a7;
  /* 1294a372 jl 0x1294a37d */
  if ((C.sf!=C.of)) goto L_1294a37d;
  /* 1294a374 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a37b jae 0x1294a3a7 */
  if (!C.cf) goto L_1294a3a7;
L_1294a37d:;
  /* 1294a37d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1294a383 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294a385 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1294a38b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a38e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294a390 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1294a396 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1294a39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a39f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1294a3a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294a3a5 jmp 0x1294a3bf */
  goto L_1294a3bf;
L_1294a3a7:;
  /* 1294a3a7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1294a3ad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1294a3b3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1294a3b9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1294a3bf:;
  /* 1294a3bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a3c2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a3c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a3ca jne 0x1294a3e7 */
  if (!C.zf) goto L_1294a3e7;
  /* 1294a3cc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1294a3d2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1294a3d8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1294a3db mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1294a3e1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1294a3e7:;
  /* 1294a3e7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a3ee jge 0x1294a3fc */
  if ((C.sf==C.of)) goto L_1294a3fc;
  /* 1294a3f0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1294a3fa jmp 0x1294a405 */
  goto L_1294a405;
L_1294a3fc:;
  /* 1294a3fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a3ff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a402 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1294a405:;
  /* 1294a405 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1294a40b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1294a411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a413 jne 0x1294a41c */
  if (!C.zf) goto L_1294a41c;
  /* 1294a415 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1294a41c:;
  /* 1294a41c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1294a41f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1294a422:;
  /* 1294a422 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1294a428 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1294a42e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a431 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1294a437 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a439 jg 0x1294a44f */
  if ((!C.zf&&C.sf==C.of)) goto L_1294a44f;
  /* 1294a43b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1294a441 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1294a447 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294a449 je 0x1294a4d0 */
  if (C.zf) goto L_1294a4d0;
L_1294a44f:;
  /* 1294a44f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1294a455 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294a456 push edx */
  push32((uint32_t)(EDX));
  /* 1294a457 push eax */
  push32((uint32_t)(EAX));
  /* 1294a458 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1294a45e push edx */
  push32((uint32_t)(EDX));
  /* 1294a45f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1294a465 push eax */
  push32((uint32_t)(EAX));
  /* 1294a466 call 0x129497e0 */
  push32(0x1294a46bu); f_129497e0();
  /* 1294a46b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a46e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1294a474 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1294a47a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294a47b push edx */
  push32((uint32_t)(EDX));
  /* 1294a47c push eax */
  push32((uint32_t)(EAX));
  /* 1294a47d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1294a483 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a484 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1294a48a push edx */
  push32((uint32_t)(EDX));
  /* 1294a48b call 0x12949770 */
  push32(0x1294a490u); f_12949770();
  /* 1294a490 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1294a496 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1294a49c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a4a3 jle 0x1294a4b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1294a4b7;
  /* 1294a4a5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1294a4ab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a4b1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1294a4b7:;
  /* 1294a4b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a4ba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1294a4c0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1294a4c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a4c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a4c8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1294a4cb jmp 0x1294a422 */
  goto L_1294a422;
L_1294a4d0:;
  /* 1294a4d0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1294a4d3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a4d6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1294a4d9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a4dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a4df mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1294a4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a4e5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a4ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a4ec je 0x1294a517 */
  if (C.zf) goto L_1294a517;
  /* 1294a4ee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a4f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294a4f4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a4f7 jne 0x1294a4ff */
  if (!C.zf) goto L_1294a4ff;
  /* 1294a4f9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a4fd jne 0x1294a517 */
  if (!C.zf) goto L_1294a517;
L_1294a4ff:;
  /* 1294a4ff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a502 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a505 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1294a508 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a50b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1294a50e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294a511 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a514 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1294a517:;
  /* 1294a517 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a51e jne 0x1294a6f2 */
  if (!C.zf) goto L_1294a6f2;
  /* 1294a524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a527 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a52c je 0x1294a57d */
  if (C.zf) goto L_1294a57d;
  /* 1294a52e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a531 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1294a537 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294a539 je 0x1294a54b */
  if (C.zf) goto L_1294a54b;
  /* 1294a53b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1294a542 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1294a549 jmp 0x1294a57d */
  goto L_1294a57d;
L_1294a54b:;
  /* 1294a54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a54e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a551 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a553 je 0x1294a565 */
  if (C.zf) goto L_1294a565;
  /* 1294a555 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1294a55c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1294a563 jmp 0x1294a57d */
  goto L_1294a57d;
L_1294a565:;
  /* 1294a565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a568 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1294a56b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a56d je 0x1294a57d */
  if (C.zf) goto L_1294a57d;
  /* 1294a56f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1294a576 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1294a57d:;
  /* 1294a57d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1294a583 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a586 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a589 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1294a58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a592 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1294a595 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a597 jne 0x1294a5b5 */
  if (!C.zf) goto L_1294a5b5;
  /* 1294a599 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1294a59f push eax */
  push32((uint32_t)(EAX));
  /* 1294a5a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a5a4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1294a5aa push edx */
  push32((uint32_t)(EDX));
  /* 1294a5ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1294a5ad call 0x1294a890 */
  push32(0x1294a5b2u); f_1294a890();
  /* 1294a5b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294a5b5:;
  /* 1294a5b5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1294a5bb push eax */
  push32((uint32_t)(EAX));
  /* 1294a5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1294a5c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294a5c3 push edx */
  push32((uint32_t)(EDX));
  /* 1294a5c4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1294a5ca push eax */
  push32((uint32_t)(EAX));
  /* 1294a5cb call 0x1294a8d0 */
  push32(0x1294a5d0u); f_1294a8d0();
  /* 1294a5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a5d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a5d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1294a5d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294a5db je 0x1294a603 */
  if (C.zf) goto L_1294a603;
  /* 1294a5dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a5e0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a5e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a5e5 jne 0x1294a603 */
  if (!C.zf) goto L_1294a603;
  /* 1294a5e7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1294a5ed push eax */
  push32((uint32_t)(EAX));
  /* 1294a5ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a5f2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1294a5f8 push edx */
  push32((uint32_t)(EDX));
  /* 1294a5f9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1294a5fb call 0x1294a890 */
  push32(0x1294a600u); f_1294a890();
  /* 1294a600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294a603:;
  /* 1294a603 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a607 je 0x1294a6b1 */
  if (C.zf) goto L_1294a6b1;
  /* 1294a60d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a611 jle 0x1294a6b1 */
  if ((C.zf||C.sf!=C.of)) goto L_1294a6b1;
  /* 1294a617 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a61a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1294a620 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294a623 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1294a629:;
  /* 1294a629 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1294a62f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1294a635 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a638 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1294a63e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a640 je 0x1294a6af */
  if (C.zf) goto L_1294a6af;
  /* 1294a642 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1294a648 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1294a64b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1294a652 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1294a659 push eax */
  push32((uint32_t)(EAX));
  /* 1294a65a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1294a660 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a661 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1294a667 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a66a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1294a670 call 0x1294ba40 */
  push32(0x1294a675u); f_1294ba40();
  /* 1294a675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a678 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1294a67e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a685 jg 0x1294a689 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294a689;
  /* 1294a687 jmp 0x1294a6af */
  goto L_1294a6af;
L_1294a689:;
  /* 1294a689 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1294a68f push eax */
  push32((uint32_t)(EAX));
  /* 1294a690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a693 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a694 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1294a69a push edx */
  push32((uint32_t)(EDX));
  /* 1294a69b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1294a6a1 push eax */
  push32((uint32_t)(EAX));
  /* 1294a6a2 call 0x1294a8d0 */
  push32(0x1294a6a7u); f_1294a8d0();
  /* 1294a6a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a6aa jmp 0x1294a629 */
  goto L_1294a629;
L_1294a6af:;
  /* 1294a6af jmp 0x1294a6cc */
  goto L_1294a6cc;
L_1294a6b1:;
  /* 1294a6b1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1294a6b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a6b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a6bb push edx */
  push32((uint32_t)(EDX));
  /* 1294a6bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294a6bf push eax */
  push32((uint32_t)(EAX));
  /* 1294a6c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294a6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a6c4 call 0x1294a8d0 */
  push32(0x1294a6c9u); f_1294a8d0();
  /* 1294a6c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294a6cc:;
  /* 1294a6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a6cf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1294a6d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294a6d4 je 0x1294a6f2 */
  if (C.zf) goto L_1294a6f2;
  /* 1294a6d6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1294a6dc push eax */
  push32((uint32_t)(EAX));
  /* 1294a6dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a6e1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1294a6e7 push edx */
  push32((uint32_t)(EDX));
  /* 1294a6e8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1294a6ea call 0x1294a890 */
  push32(0x1294a6efu); f_1294a890();
  /* 1294a6ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294a6f2:;
  /* 1294a6f2 jmp 0x12949b04 */
  goto L_12949b04;
L_1294a6f7:;
  /* 1294a6f7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1294a6fd pop edi */
  EDI = (pop32());
  /* 1294a6fe pop esi */
  ESI = (pop32());
  /* 1294a6ff pop ebx */
  EBX = (pop32());
  /* 1294a700 mov esp, ebp */
  ESP = (EBP);
  /* 1294a702 pop ebp */
  EBP = (pop32());
  /* 1294a703 ret  */
  ESPCHK(0x12949ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x1294a810 (119 bytes, 44 insns) */
void f_1294a810(void) {
  FTRACE(0x1294a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a811 mov ebp, esp */
  EBP = (ESP);
  /* 1294a813 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a817 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294a81a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a81d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a820 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1294a823 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a826 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a82a jl 0x1294a852 */
  if ((C.sf!=C.of)) goto L_1294a852;
  /* 1294a82c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a82f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294a831 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1294a834 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1294a836 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1294a83a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1294a840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294a843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a846 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1294a848 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a84b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a84e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1294a850 jmp 0x1294a865 */
  goto L_1294a865;
L_1294a852:;
  /* 1294a852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a855 push edx */
  push32((uint32_t)(EDX));
  /* 1294a856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a859 push eax */
  push32((uint32_t)(EAX));
  /* 1294a85a call 0x12949860 */
  push32(0x1294a85fu); f_12949860();
  /* 1294a85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294a865:;
  /* 1294a865 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a869 jne 0x1294a876 */
  if (!C.zf) goto L_1294a876;
  /* 1294a86b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a86e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1294a874 jmp 0x1294a883 */
  goto L_1294a883;
L_1294a876:;
  /* 1294a876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a879 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1294a87b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a87e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a881 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1294a883:;
  /* 1294a883 mov esp, ebp */
  ESP = (EBP);
  /* 1294a885 pop ebp */
  EBP = (pop32());
  /* 1294a886 ret  */
  ESPCHK(0x1294a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a890 @ 0x1294a890 (53 bytes, 23 insns) */
void f_1294a890(void) {
  FTRACE(0x1294a890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a890 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a891 mov ebp, esp */
  EBP = (ESP);
L_1294a893:;
  /* 1294a893 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a896 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a899 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a89c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1294a89f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a8a1 jle 0x1294a8c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1294a8c3;
  /* 1294a8a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294a8a6 push edx */
  push32((uint32_t)(EDX));
  /* 1294a8a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a8aa push eax */
  push32((uint32_t)(EAX));
  /* 1294a8ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a8ae push ecx */
  push32((uint32_t)(ECX));
  /* 1294a8af call 0x1294a810 */
  push32(0x1294a8b4u); f_1294a810();
  /* 1294a8b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a8b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294a8ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a8bd jne 0x1294a8c1 */
  if (!C.zf) goto L_1294a8c1;
  /* 1294a8bf jmp 0x1294a8c3 */
  goto L_1294a8c3;
L_1294a8c1:;
  /* 1294a8c1 jmp 0x1294a893 */
  goto L_1294a893;
L_1294a8c3:;
  /* 1294a8c3 pop ebp */
  EBP = (pop32());
  /* 1294a8c4 ret  */
  ESPCHK(0x1294a890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x1294a8d0 (74 bytes, 31 insns) */
void f_1294a8d0(void) {
  FTRACE(0x1294a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294a8d3 push ecx */
  push32((uint32_t)(ECX));
L_1294a8d4:;
  /* 1294a8d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a8d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294a8da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a8dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1294a8e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294a8e2 jle 0x1294a916 */
  if ((C.zf||C.sf!=C.of)) goto L_1294a916;
  /* 1294a8e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294a8e7 push edx */
  push32((uint32_t)(EDX));
  /* 1294a8e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294a8eb push eax */
  push32((uint32_t)(EAX));
  /* 1294a8ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a8ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294a8f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294a8f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1294a8f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a8fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a8ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1294a902 call 0x1294a810 */
  push32(0x1294a907u); f_1294a810();
  /* 1294a907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a90a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294a90d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a910 jne 0x1294a914 */
  if (!C.zf) goto L_1294a914;
  /* 1294a912 jmp 0x1294a916 */
  goto L_1294a916;
L_1294a914:;
  /* 1294a914 jmp 0x1294a8d4 */
  goto L_1294a8d4;
L_1294a916:;
  /* 1294a916 mov esp, ebp */
  ESP = (EBP);
  /* 1294a918 pop ebp */
  EBP = (pop32());
  /* 1294a919 ret  */
  ESPCHK(0x1294a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a920 @ 0x1294a920 (26 bytes, 12 insns) */
void f_1294a920(void) {
  FTRACE(0x1294a920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a920 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a921 mov ebp, esp */
  EBP = (ESP);
  /* 1294a923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294a928 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a92e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1294a930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a933 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294a935 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1294a938 pop ebp */
  EBP = (pop32());
  /* 1294a939 ret  */
  ESPCHK(0x1294a920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a940 @ 0x1294a940 (31 bytes, 14 insns) */
void f_1294a940(void) {
  FTRACE(0x1294a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a940 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a941 mov ebp, esp */
  EBP = (ESP);
  /* 1294a943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a946 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294a948 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a94b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a94e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1294a950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a953 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294a955 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294a958 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1294a95a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294a95d pop ebp */
  EBP = (pop32());
  /* 1294a95e ret  */
  ESPCHK(0x1294a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x1294a960 (27 bytes, 12 insns) */
void f_1294a960(void) {
  FTRACE(0x1294a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a960 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a961 mov ebp, esp */
  EBP = (ESP);
  /* 1294a963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a966 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294a968 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a96e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1294a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a973 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294a975 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1294a979 pop ebp */
  EBP = (pop32());
  /* 1294a97a ret  */
  ESPCHK(0x1294a960u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1294a980 (145 bytes, 42 insns) */
void f_1294a980(void) {
  FTRACE(0x1294a980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294a980 push ebp */
  push32((uint32_t)(EBP));
  /* 1294a981 mov ebp, esp */
  EBP = (ESP);
  /* 1294a983 push ecx */
  push32((uint32_t)(ECX));
  /* 1294a984 call 0x1294aa30 */
  push32(0x1294a989u); f_1294aa30();
  /* 1294a989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a98c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1294a98e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294a995 jmp 0x1294a9a0 */
  goto L_1294a9a0;
L_1294a997:;
  /* 1294a997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a99a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294a99d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1294a9a0:;
  /* 1294a9a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a9a4 jae 0x1294a9ca */
  if (!C.cf) goto L_1294a9ca;
  /* 1294a9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a9a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294a9ac cmp ecx, dword ptr [eax*8 + 0x1296cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1296cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a9b3 jne 0x1294a9c8 */
  if (!C.zf) goto L_1294a9c8;
  /* 1294a9b5 call 0x1294aa20 */
  push32(0x1294a9bau); f_1294aa20();
  /* 1294a9ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294a9bd mov ecx, dword ptr [edx*8 + 0x1296cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1296cfbc)));
  /* 1294a9c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1294a9c6 jmp 0x1294aa0d */
  goto L_1294aa0d;
L_1294a9c8:;
  /* 1294a9c8 jmp 0x1294a997 */
  goto L_1294a997;
L_1294a9ca:;
  /* 1294a9ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a9ce jb 0x1294a9e3 */
  if (C.cf) goto L_1294a9e3;
  /* 1294a9d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a9d4 ja 0x1294a9e3 */
  if ((!C.cf&&!C.zf)) goto L_1294a9e3;
  /* 1294a9d6 call 0x1294aa20 */
  push32(0x1294a9dbu); f_1294aa20();
  /* 1294a9db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1294a9e1 jmp 0x1294aa0d */
  goto L_1294aa0d;
L_1294a9e3:;
  /* 1294a9e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a9ea jb 0x1294aa02 */
  if (C.cf) goto L_1294aa02;
  /* 1294a9ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294a9f3 ja 0x1294aa02 */
  if ((!C.cf&&!C.zf)) goto L_1294aa02;
  /* 1294a9f5 call 0x1294aa20 */
  push32(0x1294a9fau); f_1294aa20();
  /* 1294a9fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1294aa00 jmp 0x1294aa0d */
  goto L_1294aa0d;
L_1294aa02:;
  /* 1294aa02 call 0x1294aa20 */
  push32(0x1294aa07u); f_1294aa20();
  /* 1294aa07 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1294aa0d:;
  /* 1294aa0d mov esp, ebp */
  ESP = (EBP);
  /* 1294aa0f pop ebp */
  EBP = (pop32());
  /* 1294aa10 ret  */
  ESPCHK(0x1294a980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1294aa20 (13 bytes, 6 insns) */
void f_1294aa20(void) {
  FTRACE(0x1294aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1294aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1294aa23 call 0x12942590 */
  push32(0x1294aa28u); f_12942590();
  /* 1294aa28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aa2b pop ebp */
  EBP = (pop32());
  /* 1294aa2c ret  */
  ESPCHK(0x1294aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa30 @ 0x1294aa30 (13 bytes, 6 insns) */
void f_1294aa30(void) {
  FTRACE(0x1294aa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294aa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1294aa31 mov ebp, esp */
  EBP = (ESP);
  /* 1294aa33 call 0x12942590 */
  push32(0x1294aa38u); f_12942590();
  /* 1294aa38 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aa3b pop ebp */
  EBP = (pop32());
  /* 1294aa3c ret  */
  ESPCHK(0x1294aa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x1294aa40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_1294aa40(void) {
  FTRACE(0x1294aa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294aa40 push ebp */
  push32((uint32_t)(EBP));
  /* 1294aa41 mov ebp, esp */
  EBP = (ESP);
  /* 1294aa43 push edi */
  push32((uint32_t)(EDI));
  /* 1294aa44 push esi */
  push32((uint32_t)(ESI));
  /* 1294aa45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1294aa48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294aa4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1294aa4e mov eax, ecx */
  EAX = (ECX);
  /* 1294aa50 mov edx, ecx */
  EDX = (ECX);
  /* 1294aa52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aa54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aa56 jbe 0x1294aa60 */
  if ((C.cf||C.zf)) goto L_1294aa60;
  /* 1294aa58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aa5a jb 0x1294abd8 */
  if (C.cf) goto L_1294abd8;
L_1294aa60:;
  /* 1294aa60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1294aa66 jne 0x1294aa7c */
  if (!C.zf) goto L_1294aa7c;
  /* 1294aa68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294aa6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1294aa6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aa71 jb 0x1294aa9c */
  if (C.cf) goto L_1294aa9c;
  /* 1294aa73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294aa75 jmp dword ptr [edx*4 + 0x1294ab88] */
  switch (EDX) {
    case 0: goto L_1294ab98;
    case 1: goto L_1294aba0;
    case 2: goto L_1294abac;
    case 3: goto L_1294abc0;
    default: x86_unimpl("switch@0x1294aa75 out of table"); return;
  }
L_1294aa7c:;
  /* 1294aa7c mov eax, edi */
  EAX = (EDI);
  /* 1294aa7e mov edx, 3 */
  EDX = (0x3u);
  /* 1294aa83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294aa86 jb 0x1294aa94 */
  if (C.cf) goto L_1294aa94;
  /* 1294aa88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1294aa8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aa8d jmp dword ptr [eax*4 + 0x1294aaa0] */
  switch (EAX) {
    case 1: goto L_1294aab0;
    case 2: goto L_1294aadc;
    case 3: goto L_1294ab00;
    default: x86_unimpl("switch@0x1294aa8d out of table"); return;
  }
L_1294aa94:;
  /* 1294aa94 jmp dword ptr [ecx*4 + 0x1294ab98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1294ab98)))); return;
  /* 1294aa9b nop  */
  /* nop */
L_1294aa9c:;
  /* 1294aa9c jmp dword ptr [ecx*4 + 0x1294ab1c] */
  switch (ECX) {
    case 0: goto L_1294ab7f;
    case 1: goto L_1294ab6c;
    case 2: goto L_1294ab64;
    case 3: goto L_1294ab5c;
    case 4: goto L_1294ab54;
    case 5: goto L_1294ab4c;
    case 6: goto L_1294ab44;
    case 7: goto L_1294ab3c;
    default: x86_unimpl("switch@0x1294aa9c out of table"); return;
  }
  /* 1294aaa3 nop  */
  /* nop */
L_1294aab0:;
  /* 1294aab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294aab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294aab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1294aab6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294aab9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294aabc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294aabf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294aac2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294aac5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aac8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aacb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aace jb 0x1294aa9c */
  if (C.cf) goto L_1294aa9c;
  /* 1294aad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294aad2 jmp dword ptr [edx*4 + 0x1294ab88] */
  switch (EDX) {
    case 0: goto L_1294ab98;
    case 1: goto L_1294aba0;
    case 2: goto L_1294abac;
    case 3: goto L_1294abc0;
    default: x86_unimpl("switch@0x1294aad2 out of table"); return;
  }
  /* 1294aad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294aadc:;
  /* 1294aadc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294aade mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294aae0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1294aae2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294aae5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294aae8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294aaeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aaee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aaf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aaf4 jb 0x1294aa9c */
  if (C.cf) goto L_1294aa9c;
  /* 1294aaf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294aaf8 jmp dword ptr [edx*4 + 0x1294ab88] */
  switch (EDX) {
    case 0: goto L_1294ab98;
    case 1: goto L_1294aba0;
    case 2: goto L_1294abac;
    case 3: goto L_1294abc0;
    default: x86_unimpl("switch@0x1294aaf8 out of table"); return;
  }
  /* 1294aaff nop  */
  /* nop */
L_1294ab00:;
  /* 1294ab00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294ab02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294ab04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1294ab06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1294ab07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294ab0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1294ab0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ab0e jb 0x1294aa9c */
  if (C.cf) goto L_1294aa9c;
  /* 1294ab10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294ab12 jmp dword ptr [edx*4 + 0x1294ab88] */
  switch (EDX) {
    case 0: goto L_1294ab98;
    case 1: goto L_1294aba0;
    case 2: goto L_1294abac;
    case 3: goto L_1294abc0;
    default: x86_unimpl("switch@0x1294ab12 out of table"); return;
  }
  /* 1294ab19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294ab3c:;
  /* 1294ab3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1294ab40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1294ab44:;
  /* 1294ab44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1294ab48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1294ab4c:;
  /* 1294ab4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1294ab50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1294ab54:;
  /* 1294ab54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1294ab58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1294ab5c:;
  /* 1294ab5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1294ab60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1294ab64:;
  /* 1294ab64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1294ab68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1294ab6c:;
  /* 1294ab6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1294ab70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1294ab74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1294ab7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ab7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1294ab7f:;
  /* 1294ab7f jmp dword ptr [edx*4 + 0x1294ab88] */
  switch (EDX) {
    case 0: goto L_1294ab98;
    case 1: goto L_1294aba0;
    case 2: goto L_1294abac;
    case 3: goto L_1294abc0;
    default: x86_unimpl("switch@0x1294ab7f out of table"); return;
  }
  /* 1294ab86 mov edi, edi */
  EDI = (EDI);
L_1294ab98:;
  /* 1294ab98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ab9b pop esi */
  ESI = (pop32());
  /* 1294ab9c pop edi */
  EDI = (pop32());
  /* 1294ab9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294ab9e ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294ab9f nop  */
  /* nop */
L_1294aba0:;
  /* 1294aba0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294aba2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1294aba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294aba7 pop esi */
  ESI = (pop32());
  /* 1294aba8 pop edi */
  EDI = (pop32());
  /* 1294aba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294abaa ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294abab nop  */
  /* nop */
L_1294abac:;
  /* 1294abac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294abae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1294abb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294abb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294abb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294abb9 pop esi */
  ESI = (pop32());
  /* 1294abba pop edi */
  EDI = (pop32());
  /* 1294abbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294abbc ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294abbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294abc0:;
  /* 1294abc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294abc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1294abc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294abc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294abca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294abcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294abd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294abd3 pop esi */
  ESI = (pop32());
  /* 1294abd4 pop edi */
  EDI = (pop32());
  /* 1294abd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294abd6 ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294abd7 nop  */
  /* nop */
L_1294abd8:;
  /* 1294abd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1294abdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1294abe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1294abe6 jne 0x1294ac0c */
  if (!C.zf) goto L_1294ac0c;
  /* 1294abe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294abeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1294abee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294abf1 jb 0x1294ac00 */
  if (C.cf) goto L_1294ac00;
  /* 1294abf3 std  */
  C.df=1;
  /* 1294abf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294abf6 cld  */
  C.df=0;
  /* 1294abf7 jmp dword ptr [edx*4 + 0x1294ad20] */
  switch (EDX) {
    case 0: goto L_1294ad30;
    case 1: goto L_1294ad38;
    case 2: goto L_1294ad48;
    case 3: goto L_1294ad5c;
    default: x86_unimpl("switch@0x1294abf7 out of table"); return;
  }
  /* 1294abfe mov edi, edi */
  EDI = (EDI);
L_1294ac00:;
  /* 1294ac00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294ac02 jmp dword ptr [ecx*4 + 0x1294acd0] */
  switch (ECX) {
    case 0: goto L_1294ad17;
    default: x86_unimpl("switch@0x1294ac02 out of table"); return;
  }
  /* 1294ac09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294ac0c:;
  /* 1294ac0c mov eax, edi */
  EAX = (EDI);
  /* 1294ac0e mov edx, 3 */
  EDX = (0x3u);
  /* 1294ac13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ac16 jb 0x1294ac24 */
  if (C.cf) goto L_1294ac24;
  /* 1294ac18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1294ac1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ac1d jmp dword ptr [eax*4 + 0x1294ac28] */
  switch (EAX) {
    case 1: goto L_1294ac38;
    case 2: goto L_1294ac58;
    case 3: goto L_1294ac80;
    default: x86_unimpl("switch@0x1294ac1d out of table"); return;
  }
L_1294ac24:;
  /* 1294ac24 jmp dword ptr [ecx*4 + 0x1294ad20] */
  switch (ECX) {
    case 0: goto L_1294ad30;
    case 1: goto L_1294ad38;
    case 2: goto L_1294ad48;
    case 3: goto L_1294ad5c;
    default: x86_unimpl("switch@0x1294ac24 out of table"); return;
  }
  /* 1294ac2b nop  */
  /* nop */
L_1294ac38:;
  /* 1294ac38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294ac3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294ac3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294ac40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1294ac41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294ac44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1294ac45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ac48 jb 0x1294ac00 */
  if (C.cf) goto L_1294ac00;
  /* 1294ac4a std  */
  C.df=1;
  /* 1294ac4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294ac4d cld  */
  C.df=0;
  /* 1294ac4e jmp dword ptr [edx*4 + 0x1294ad20] */
  switch (EDX) {
    case 0: goto L_1294ad30;
    case 1: goto L_1294ad38;
    case 2: goto L_1294ad48;
    case 3: goto L_1294ad5c;
    default: x86_unimpl("switch@0x1294ac4e out of table"); return;
  }
  /* 1294ac55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294ac58:;
  /* 1294ac58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294ac5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294ac5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294ac60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294ac63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294ac66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294ac69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ac6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ac6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ac72 jb 0x1294ac00 */
  if (C.cf) goto L_1294ac00;
  /* 1294ac74 std  */
  C.df=1;
  /* 1294ac75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294ac77 cld  */
  C.df=0;
  /* 1294ac78 jmp dword ptr [edx*4 + 0x1294ad20] */
  switch (EDX) {
    case 0: goto L_1294ad30;
    case 1: goto L_1294ad38;
    case 2: goto L_1294ad48;
    case 3: goto L_1294ad5c;
    default: x86_unimpl("switch@0x1294ac78 out of table"); return;
  }
  /* 1294ac7f nop  */
  /* nop */
L_1294ac80:;
  /* 1294ac80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294ac83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1294ac85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294ac88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294ac8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294ac8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294ac91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1294ac94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294ac97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ac9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ac9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aca0 jb 0x1294ac00 */
  if (C.cf) goto L_1294ac00;
  /* 1294aca6 std  */
  C.df=1;
  /* 1294aca7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1294aca9 cld  */
  C.df=0;
  /* 1294acaa jmp dword ptr [edx*4 + 0x1294ad20] */
  switch (EDX) {
    case 0: goto L_1294ad30;
    case 1: goto L_1294ad38;
    case 2: goto L_1294ad48;
    case 3: goto L_1294ad5c;
    default: x86_unimpl("switch@0x1294acaa out of table"); return;
  }
  /* 1294acb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1294acb4 aam 0xac */
  x86_unimpl("aam @ 0x1294acb4");
  /* 1294acb6 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294acb7 adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294acb9 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1294acba xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294acbb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1294acbd lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1294acbe xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294acbf adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1294acc1 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1294acc2 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294acc3 adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1294acc5 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1294acc6 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294acc7 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1294acc9 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1294acca xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294accc add al, 0xad */
  { uint32_t _a=(AL),_b=(0xadu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294acce xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1294acd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1294acd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1294acdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1294ace0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1294ace4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1294ace8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1294acec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1294acf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1294acf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1294acf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1294acfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1294ad00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1294ad04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1294ad08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1294ad0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1294ad13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ad15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1294ad17:;
  /* 1294ad17 jmp dword ptr [edx*4 + 0x1294ad20] */
  switch (EDX) {
    case 0: goto L_1294ad30;
    case 1: goto L_1294ad38;
    case 2: goto L_1294ad48;
    case 3: goto L_1294ad5c;
    default: x86_unimpl("switch@0x1294ad17 out of table"); return;
  }
  /* 1294ad1e mov edi, edi */
  EDI = (EDI);
L_1294ad30:;
  /* 1294ad30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ad33 pop esi */
  ESI = (pop32());
  /* 1294ad34 pop edi */
  EDI = (pop32());
  /* 1294ad35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294ad36 ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294ad37 nop  */
  /* nop */
L_1294ad38:;
  /* 1294ad38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294ad3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294ad3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ad41 pop esi */
  ESI = (pop32());
  /* 1294ad42 pop edi */
  EDI = (pop32());
  /* 1294ad43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294ad44 ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294ad45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294ad48:;
  /* 1294ad48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294ad4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294ad4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294ad51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294ad54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ad57 pop esi */
  ESI = (pop32());
  /* 1294ad58 pop edi */
  EDI = (pop32());
  /* 1294ad59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294ad5a ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
  /* 1294ad5b nop  */
  /* nop */
L_1294ad5c:;
  /* 1294ad5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1294ad5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1294ad62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1294ad65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1294ad68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1294ad6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1294ad6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ad71 pop esi */
  ESI = (pop32());
  /* 1294ad72 pop edi */
  EDI = (pop32());
  /* 1294ad73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294ad74 ret  */
  ESPCHK(0x1294aa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad80 @ 0x1294ad80 (421 bytes, 148 insns) */
void f_1294ad80(void) {
  FTRACE(0x1294ad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ad80 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ad81 mov ebp, esp */
  EBP = (ESP);
  /* 1294ad83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1294ad85 push 0x12969f28 */
  push32((uint32_t)(0x12969f28u));
  /* 1294ad8a push 0x1294bc58 */
  push32((uint32_t)(0x1294bc58u));
  /* 1294ad8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1294ad95 push eax */
  push32((uint32_t)(EAX));
  /* 1294ad96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1294ad9d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ada0 push ebx */
  push32((uint32_t)(EBX));
  /* 1294ada1 push esi */
  push32((uint32_t)(ESI));
  /* 1294ada2 push edi */
  push32((uint32_t)(EDI));
  /* 1294ada3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1294ada6 cmp dword ptr [0x1296e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294adad jne 0x1294adfe */
  if (!C.zf) goto L_1294adfe;
  /* 1294adaf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1294adb2 push eax */
  push32((uint32_t)(EAX));
  /* 1294adb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294adb5 push 0x12969f24 */
  push32((uint32_t)(0x12969f24u));
  /* 1294adba push 1 */
  push32((uint32_t)(0x1u));
  /* 1294adbc call dword ptr [0x12970324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970324))), 0x1294adc2u);
  /* 1294adc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294adc4 je 0x1294add2 */
  if (C.zf) goto L_1294add2;
  /* 1294adc6 mov dword ptr [0x1296e67c], 1 */
  w32((uint32_t)(0x1296e67c), (0x1u));
  /* 1294add0 jmp 0x1294adfe */
  goto L_1294adfe;
L_1294add2:;
  /* 1294add2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1294add5 push ecx */
  push32((uint32_t)(ECX));
  /* 1294add6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294add8 push 0x12969f20 */
  push32((uint32_t)(0x12969f20u));
  /* 1294addd push 1 */
  push32((uint32_t)(0x1u));
  /* 1294addf push 0 */
  push32((uint32_t)(0x0u));
  /* 1294ade1 call dword ptr [0x12970320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970320))), 0x1294ade7u);
  /* 1294ade7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ade9 je 0x1294adf7 */
  if (C.zf) goto L_1294adf7;
  /* 1294adeb mov dword ptr [0x1296e67c], 2 */
  w32((uint32_t)(0x1296e67c), (0x2u));
  /* 1294adf5 jmp 0x1294adfe */
  goto L_1294adfe;
L_1294adf7:;
  /* 1294adf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294adf9 jmp 0x1294af28 */
  goto L_1294af28;
L_1294adfe:;
  /* 1294adfe cmp dword ptr [0x1296e67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ae05 jne 0x1294ae35 */
  if (!C.zf) goto L_1294ae35;
  /* 1294ae07 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ae0b jne 0x1294ae16 */
  if (!C.zf) goto L_1294ae16;
  /* 1294ae0d mov edx, dword ptr [0x1296e688] */
  EDX = (r32((uint32_t)(0x1296e688)));
  /* 1294ae13 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1294ae16:;
  /* 1294ae16 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294ae19 push eax */
  push32((uint32_t)(EAX));
  /* 1294ae1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ae1d push ecx */
  push32((uint32_t)(ECX));
  /* 1294ae1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294ae21 push edx */
  push32((uint32_t)(EDX));
  /* 1294ae22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ae25 push eax */
  push32((uint32_t)(EAX));
  /* 1294ae26 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1294ae29 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ae2a call dword ptr [0x12970320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970320))), 0x1294ae30u);
  /* 1294ae30 jmp 0x1294af28 */
  goto L_1294af28;
L_1294ae35:;
  /* 1294ae35 cmp dword ptr [0x1296e67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ae3c jne 0x1294af26 */
  if (!C.zf) goto L_1294af26;
  /* 1294ae42 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ae46 jne 0x1294ae51 */
  if (!C.zf) goto L_1294ae51;
  /* 1294ae48 mov edx, dword ptr [0x1296e698] */
  EDX = (r32((uint32_t)(0x1296e698)));
  /* 1294ae4e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1294ae51:;
  /* 1294ae51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294ae53 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294ae55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ae58 push eax */
  push32((uint32_t)(EAX));
  /* 1294ae59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294ae5c push ecx */
  push32((uint32_t)(ECX));
  /* 1294ae5d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1294ae60 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294ae62 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ae64 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ae67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ae6a push edx */
  push32((uint32_t)(EDX));
  /* 1294ae6b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294ae6e push eax */
  push32((uint32_t)(EAX));
  /* 1294ae6f call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x1294ae75u);
  /* 1294ae75 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1294ae78 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ae7c jne 0x1294ae85 */
  if (!C.zf) goto L_1294ae85;
  /* 1294ae7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294ae80 jmp 0x1294af28 */
  goto L_1294af28;
L_1294ae85:;
  /* 1294ae85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294ae8c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294ae8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294ae91 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ae94 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1294ae96 call 0x12945cf0 */
  push32(0x1294ae9bu); f_12945cf0();
  /* 1294ae9b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1294ae9e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1294aea1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294aea4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1294aea7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294aeaa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1294aeac push edx */
  push32((uint32_t)(EDX));
  /* 1294aead push 0 */
  push32((uint32_t)(0x0u));
  /* 1294aeaf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294aeb2 push eax */
  push32((uint32_t)(EAX));
  /* 1294aeb3 call 0x129468c0 */
  push32(0x1294aeb8u); f_129468c0();
  /* 1294aeb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294aebb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1294aec2 jmp 0x1294aedb */
  goto L_1294aedb;
  /* 1294aec4 mov eax, 1 */
  EAX = (0x1u);
  /* 1294aec9 ret  */
  ESPCHK(0x1294ad80u, _esp0);
  ESP += 4; return;
  /* 1294aeca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1294aecd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1294aed4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1294aedb:;
  /* 1294aedb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294aedf jne 0x1294aee5 */
  if (!C.zf) goto L_1294aee5;
  /* 1294aee1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294aee3 jmp 0x1294af28 */
  goto L_1294af28;
L_1294aee5:;
  /* 1294aee5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294aee8 push ecx */
  push32((uint32_t)(ECX));
  /* 1294aee9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294aeec push edx */
  push32((uint32_t)(EDX));
  /* 1294aeed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294aef0 push eax */
  push32((uint32_t)(EAX));
  /* 1294aef1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294aef4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294aef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294aef7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294aefa push edx */
  push32((uint32_t)(EDX));
  /* 1294aefb call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x1294af01u);
  /* 1294af01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1294af04 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294af08 jne 0x1294af0e */
  if (!C.zf) goto L_1294af0e;
  /* 1294af0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294af0c jmp 0x1294af28 */
  goto L_1294af28;
L_1294af0e:;
  /* 1294af0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294af11 push eax */
  push32((uint32_t)(EAX));
  /* 1294af12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294af15 push ecx */
  push32((uint32_t)(ECX));
  /* 1294af16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294af19 push edx */
  push32((uint32_t)(EDX));
  /* 1294af1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294af1d push eax */
  push32((uint32_t)(EAX));
  /* 1294af1e call dword ptr [0x12970324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970324))), 0x1294af24u);
  /* 1294af24 jmp 0x1294af28 */
  goto L_1294af28;
L_1294af26:;
  /* 1294af26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294af28:;
  /* 1294af28 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1294af2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294af2e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1294af35 pop edi */
  EDI = (pop32());
  /* 1294af36 pop esi */
  ESI = (pop32());
  /* 1294af37 pop ebx */
  EBX = (pop32());
  /* 1294af38 mov esp, ebp */
  ESP = (EBP);
  /* 1294af3a pop ebp */
  EBP = (pop32());
  /* 1294af3b ret  */
  ESPCHK(0x1294ad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x1294af40 (727 bytes, 263 insns) */
void f_1294af40(void) {
  FTRACE(0x1294af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1294af41 mov ebp, esp */
  EBP = (ESP);
  /* 1294af43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1294af45 push 0x12969f38 */
  push32((uint32_t)(0x12969f38u));
  /* 1294af4a push 0x1294bc58 */
  push32((uint32_t)(0x1294bc58u));
  /* 1294af4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1294af55 push eax */
  push32((uint32_t)(EAX));
  /* 1294af56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1294af5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294af60 push ebx */
  push32((uint32_t)(EBX));
  /* 1294af61 push esi */
  push32((uint32_t)(ESI));
  /* 1294af62 push edi */
  push32((uint32_t)(EDI));
  /* 1294af63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1294af66 cmp dword ptr [0x1296e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294af6d jne 0x1294afc6 */
  if (!C.zf) goto L_1294afc6;
  /* 1294af6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1294af71 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294af73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294af75 push 0x12969f24 */
  push32((uint32_t)(0x12969f24u));
  /* 1294af7a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1294af7f push 0 */
  push32((uint32_t)(0x0u));
  /* 1294af81 call dword ptr [0x12970328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970328))), 0x1294af87u);
  /* 1294af87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294af89 je 0x1294af97 */
  if (C.zf) goto L_1294af97;
  /* 1294af8b mov dword ptr [0x1296e6a0], 1 */
  w32((uint32_t)(0x1296e6a0), (0x1u));
  /* 1294af95 jmp 0x1294afc6 */
  goto L_1294afc6;
L_1294af97:;
  /* 1294af97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294af99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294af9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1294af9d push 0x12969f20 */
  push32((uint32_t)(0x12969f20u));
  /* 1294afa2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1294afa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294afa9 call dword ptr [0x12970308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970308))), 0x1294afafu);
  /* 1294afaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294afb1 je 0x1294afbf */
  if (C.zf) goto L_1294afbf;
  /* 1294afb3 mov dword ptr [0x1296e6a0], 2 */
  w32((uint32_t)(0x1296e6a0), (0x2u));
  /* 1294afbd jmp 0x1294afc6 */
  goto L_1294afc6;
L_1294afbf:;
  /* 1294afbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294afc1 jmp 0x1294b231 */
  goto L_1294b231;
L_1294afc6:;
  /* 1294afc6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294afca jle 0x1294afdf */
  if ((C.zf||C.sf!=C.of)) goto L_1294afdf;
  /* 1294afcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294afcf push eax */
  push32((uint32_t)(EAX));
  /* 1294afd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294afd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294afd4 call 0x1294b250 */
  push32(0x1294afd9u); f_1294b250();
  /* 1294afd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294afdc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1294afdf:;
  /* 1294afdf cmp dword ptr [0x1296e6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294afe6 jne 0x1294b00b */
  if (!C.zf) goto L_1294b00b;
  /* 1294afe8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1294afeb push edx */
  push32((uint32_t)(EDX));
  /* 1294afec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294afef push eax */
  push32((uint32_t)(EAX));
  /* 1294aff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294aff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294aff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294aff7 push edx */
  push32((uint32_t)(EDX));
  /* 1294aff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294affb push eax */
  push32((uint32_t)(EAX));
  /* 1294affc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294afff push ecx */
  push32((uint32_t)(ECX));
  /* 1294b000 call dword ptr [0x12970308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970308))), 0x1294b006u);
  /* 1294b006 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b00b:;
  /* 1294b00b cmp dword ptr [0x1296e6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b012 jne 0x1294b22f */
  if (!C.zf) goto L_1294b22f;
  /* 1294b018 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b01c jne 0x1294b027 */
  if (!C.zf) goto L_1294b027;
  /* 1294b01e mov edx, dword ptr [0x1296e698] */
  EDX = (r32((uint32_t)(0x1296e698)));
  /* 1294b024 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1294b027:;
  /* 1294b027 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b02b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294b02e push eax */
  push32((uint32_t)(EAX));
  /* 1294b02f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294b032 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b033 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1294b036 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294b038 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b03a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1294b03d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b040 push edx */
  push32((uint32_t)(EDX));
  /* 1294b041 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1294b044 push eax */
  push32((uint32_t)(EAX));
  /* 1294b045 call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x1294b04bu);
  /* 1294b04b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1294b04e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b052 jne 0x1294b05b */
  if (!C.zf) goto L_1294b05b;
  /* 1294b054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b056 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b05b:;
  /* 1294b05b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294b062 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294b065 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294b067 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b06a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1294b06c call 0x12945cf0 */
  push32(0x1294b071u); f_12945cf0();
  /* 1294b071 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1294b074 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1294b077 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294b07a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1294b07d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1294b084 jmp 0x1294b09d */
  goto L_1294b09d;
  /* 1294b086 mov eax, 1 */
  EAX = (0x1u);
  /* 1294b08b ret  */
  ESPCHK(0x1294af40u, _esp0);
  ESP += 4; return;
  /* 1294b08c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1294b08f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1294b096 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1294b09d:;
  /* 1294b09d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b0a1 jne 0x1294b0aa */
  if (!C.zf) goto L_1294b0aa;
  /* 1294b0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b0a5 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b0aa:;
  /* 1294b0aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294b0ad push edx */
  push32((uint32_t)(EDX));
  /* 1294b0ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294b0b1 push eax */
  push32((uint32_t)(EAX));
  /* 1294b0b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294b0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b0b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294b0b9 push edx */
  push32((uint32_t)(EDX));
  /* 1294b0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1294b0bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1294b0bf push eax */
  push32((uint32_t)(EAX));
  /* 1294b0c0 call dword ptr [0x1297031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297031c))), 0x1294b0c6u);
  /* 1294b0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b0c8 jne 0x1294b0d1 */
  if (!C.zf) goto L_1294b0d1;
  /* 1294b0ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b0cc jmp 0x1294b231 */
  goto L_1294b231;
L_1294b0d1:;
  /* 1294b0d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b0d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b0d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294b0d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b0d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294b0dc push edx */
  push32((uint32_t)(EDX));
  /* 1294b0dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b0e0 push eax */
  push32((uint32_t)(EAX));
  /* 1294b0e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b0e5 call dword ptr [0x12970328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970328))), 0x1294b0ebu);
  /* 1294b0eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1294b0ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b0f2 jne 0x1294b0fb */
  if (!C.zf) goto L_1294b0fb;
  /* 1294b0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b0f6 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b0fb:;
  /* 1294b0fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b0fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1294b104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294b106 je 0x1294b14b */
  if (C.zf) goto L_1294b14b;
  /* 1294b108 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b10c je 0x1294b146 */
  if (C.zf) goto L_1294b146;
  /* 1294b10e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294b111 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b114 jle 0x1294b11d */
  if ((C.zf||C.sf!=C.of)) goto L_1294b11d;
  /* 1294b116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b118 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b11d:;
  /* 1294b11d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1294b120 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b121 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294b124 push edx */
  push32((uint32_t)(EDX));
  /* 1294b125 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294b128 push eax */
  push32((uint32_t)(EAX));
  /* 1294b129 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294b12c push ecx */
  push32((uint32_t)(ECX));
  /* 1294b12d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b130 push edx */
  push32((uint32_t)(EDX));
  /* 1294b131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b134 push eax */
  push32((uint32_t)(EAX));
  /* 1294b135 call dword ptr [0x12970328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970328))), 0x1294b13bu);
  /* 1294b13b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b13d jne 0x1294b146 */
  if (!C.zf) goto L_1294b146;
  /* 1294b13f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b141 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b146:;
  /* 1294b146 jmp 0x1294b22a */
  goto L_1294b22a;
L_1294b14b:;
  /* 1294b14b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294b14e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1294b151 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1294b158 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294b15b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294b15d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b160 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1294b162 call 0x12945cf0 */
  push32(0x1294b167u); f_12945cf0();
  /* 1294b167 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1294b16a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1294b16d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1294b170 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1294b173 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1294b17a jmp 0x1294b193 */
  goto L_1294b193;
  /* 1294b17c mov eax, 1 */
  EAX = (0x1u);
  /* 1294b181 ret  */
  ESPCHK(0x1294af40u, _esp0);
  ESP += 4; return;
  /* 1294b182 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1294b185 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1294b18c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1294b193:;
  /* 1294b193 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b197 jne 0x1294b1a0 */
  if (!C.zf) goto L_1294b1a0;
  /* 1294b199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b19b jmp 0x1294b231 */
  goto L_1294b231;
L_1294b1a0:;
  /* 1294b1a0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294b1a3 push eax */
  push32((uint32_t)(EAX));
  /* 1294b1a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294b1a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b1a8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294b1ab push edx */
  push32((uint32_t)(EDX));
  /* 1294b1ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294b1af push eax */
  push32((uint32_t)(EAX));
  /* 1294b1b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b1b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b1b7 push edx */
  push32((uint32_t)(EDX));
  /* 1294b1b8 call dword ptr [0x12970328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970328))), 0x1294b1beu);
  /* 1294b1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b1c0 jne 0x1294b1c6 */
  if (!C.zf) goto L_1294b1c6;
  /* 1294b1c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b1c4 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b1c6:;
  /* 1294b1c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b1ca jne 0x1294b1fa */
  if (!C.zf) goto L_1294b1fa;
  /* 1294b1cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b1ce push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b1d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b1d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b1d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294b1d7 push eax */
  push32((uint32_t)(EAX));
  /* 1294b1d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294b1db push ecx */
  push32((uint32_t)(ECX));
  /* 1294b1dc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1294b1e1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1294b1e4 push edx */
  push32((uint32_t)(EDX));
  /* 1294b1e5 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x1294b1ebu);
  /* 1294b1eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1294b1ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b1f2 jne 0x1294b1f8 */
  if (!C.zf) goto L_1294b1f8;
  /* 1294b1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b1f6 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b1f8:;
  /* 1294b1f8 jmp 0x1294b22a */
  goto L_1294b22a;
L_1294b1fa:;
  /* 1294b1fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b1fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b1fe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1294b201 push eax */
  push32((uint32_t)(EAX));
  /* 1294b202 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294b205 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b206 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294b209 push edx */
  push32((uint32_t)(EDX));
  /* 1294b20a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294b20d push eax */
  push32((uint32_t)(EAX));
  /* 1294b20e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1294b213 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1294b216 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b217 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x1294b21du);
  /* 1294b21d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1294b220 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b224 jne 0x1294b22a */
  if (!C.zf) goto L_1294b22a;
  /* 1294b226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b228 jmp 0x1294b231 */
  goto L_1294b231;
L_1294b22a:;
  /* 1294b22a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294b22d jmp 0x1294b231 */
  goto L_1294b231;
L_1294b22f:;
  /* 1294b22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294b231:;
  /* 1294b231 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1294b234 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294b237 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1294b23e pop edi */
  EDI = (pop32());
  /* 1294b23f pop esi */
  ESI = (pop32());
  /* 1294b240 pop ebx */
  EBX = (pop32());
  /* 1294b241 mov esp, ebp */
  ESP = (EBP);
  /* 1294b243 pop ebp */
  EBP = (pop32());
  /* 1294b244 ret  */
  ESPCHK(0x1294af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x1294b250 (80 bytes, 32 insns) */
void f_1294b250(void) {
  FTRACE(0x1294b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b250 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b251 mov ebp, esp */
  EBP = (ESP);
  /* 1294b253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b256 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b259 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294b25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b25f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1294b262:;
  /* 1294b262 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b268 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b26b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294b26e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294b270 je 0x1294b287 */
  if (C.zf) goto L_1294b287;
  /* 1294b272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b275 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294b278 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294b27a je 0x1294b287 */
  if (C.zf) goto L_1294b287;
  /* 1294b27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b27f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b282 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294b285 jmp 0x1294b262 */
  goto L_1294b262;
L_1294b287:;
  /* 1294b287 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b28a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294b28d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294b28f jne 0x1294b299 */
  if (!C.zf) goto L_1294b299;
  /* 1294b291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b294 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b297 jmp 0x1294b29c */
  goto L_1294b29c;
L_1294b299:;
  /* 1294b299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1294b29c:;
  /* 1294b29c mov esp, ebp */
  ESP = (EBP);
  /* 1294b29e pop ebp */
  EBP = (pop32());
  /* 1294b29f ret  */
  ESPCHK(0x1294b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2a0 @ 0x1294b2a0 (130 bytes, 43 insns) */
void f_1294b2a0(void) {
  FTRACE(0x1294b2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1294b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b2a7 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b2ad jae 0x1294b2d1 */
  if (!C.cf) goto L_1294b2d1;
  /* 1294b2af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b2b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b2b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b2b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b2bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b2be mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b2c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294b2ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294b2cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294b2cf jne 0x1294b2ec */
  if (!C.zf) goto L_1294b2ec;
L_1294b2d1:;
  /* 1294b2d1 call 0x1294aa20 */
  push32(0x1294b2d6u); f_1294aa20();
  /* 1294b2d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294b2dc call 0x1294aa30 */
  push32(0x1294b2e1u); f_1294aa30();
  /* 1294b2e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294b2e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b2ea jmp 0x1294b31e */
  goto L_1294b31e;
L_1294b2ec:;
  /* 1294b2ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b2ef push edx */
  push32((uint32_t)(EDX));
  /* 1294b2f0 call 0x1294c240 */
  push32(0x1294b2f5u); f_1294c240();
  /* 1294b2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b2f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294b2fb push eax */
  push32((uint32_t)(EAX));
  /* 1294b2fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b2ff push ecx */
  push32((uint32_t)(ECX));
  /* 1294b300 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b303 push edx */
  push32((uint32_t)(EDX));
  /* 1294b304 call 0x1294b330 */
  push32(0x1294b309u); f_1294b330();
  /* 1294b309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b30c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294b30f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b312 push eax */
  push32((uint32_t)(EAX));
  /* 1294b313 call 0x1294c2d0 */
  push32(0x1294b318u); f_1294c2d0();
  /* 1294b318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294b31e:;
  /* 1294b31e mov esp, ebp */
  ESP = (EBP);
  /* 1294b320 pop ebp */
  EBP = (pop32());
  /* 1294b321 ret  */
  ESPCHK(0x1294b2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x1294b330 (178 bytes, 56 insns) */
void f_1294b330(void) {
  FTRACE(0x1294b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b330 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b331 mov ebp, esp */
  EBP = (ESP);
  /* 1294b333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b339 push eax */
  push32((uint32_t)(EAX));
  /* 1294b33a call 0x1294c0c0 */
  push32(0x1294b33fu); f_1294c0c0();
  /* 1294b33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b342 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294b345 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b349 jne 0x1294b35e */
  if (!C.zf) goto L_1294b35e;
  /* 1294b34b call 0x1294aa20 */
  push32(0x1294b350u); f_1294aa20();
  /* 1294b350 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294b356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b359 jmp 0x1294b3de */
  goto L_1294b3de;
L_1294b35e:;
  /* 1294b35e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294b361 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b362 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b364 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b367 push edx */
  push32((uint32_t)(EDX));
  /* 1294b368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294b36b push eax */
  push32((uint32_t)(EAX));
  /* 1294b36c call dword ptr [0x1297032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297032c))), 0x1294b372u);
  /* 1294b372 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294b375 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b379 jne 0x1294b386 */
  if (!C.zf) goto L_1294b386;
  /* 1294b37b call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294b381u);
  /* 1294b381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294b384 jmp 0x1294b38d */
  goto L_1294b38d;
L_1294b386:;
  /* 1294b386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1294b38d:;
  /* 1294b38d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b391 je 0x1294b3a4 */
  if (C.zf) goto L_1294b3a4;
  /* 1294b393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b396 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b397 call 0x1294a980 */
  push32(0x1294b39cu); f_1294a980();
  /* 1294b39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b39f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b3a2 jmp 0x1294b3de */
  goto L_1294b3de;
L_1294b3a4:;
  /* 1294b3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b3a7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1294b3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b3ad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b3b0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b3b3 mov ecx, dword ptr [edx*4 + 0x1296fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 1294b3ba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1294b3be and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1294b3c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b3c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b3c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b3ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294b3cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b3d0 mov eax, dword ptr [eax*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294b3d7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1294b3db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1294b3de:;
  /* 1294b3de mov esp, ebp */
  ESP = (EBP);
  /* 1294b3e0 pop ebp */
  EBP = (pop32());
  /* 1294b3e1 ret  */
  ESPCHK(0x1294b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f0 @ 0x1294b3f0 (130 bytes, 43 insns) */
void f_1294b3f0(void) {
  FTRACE(0x1294b3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1294b3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b3f7 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b3fd jae 0x1294b421 */
  if (!C.cf) goto L_1294b421;
  /* 1294b3ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b402 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b408 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b40b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b40e mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b415 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294b41a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294b41d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294b41f jne 0x1294b43c */
  if (!C.zf) goto L_1294b43c;
L_1294b421:;
  /* 1294b421 call 0x1294aa20 */
  push32(0x1294b426u); f_1294aa20();
  /* 1294b426 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294b42c call 0x1294aa30 */
  push32(0x1294b431u); f_1294aa30();
  /* 1294b431 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294b437 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b43a jmp 0x1294b46e */
  goto L_1294b46e;
L_1294b43c:;
  /* 1294b43c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b43f push edx */
  push32((uint32_t)(EDX));
  /* 1294b440 call 0x1294c240 */
  push32(0x1294b445u); f_1294c240();
  /* 1294b445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294b44b push eax */
  push32((uint32_t)(EAX));
  /* 1294b44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b44f push ecx */
  push32((uint32_t)(ECX));
  /* 1294b450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b453 push edx */
  push32((uint32_t)(EDX));
  /* 1294b454 call 0x1294b480 */
  push32(0x1294b459u); f_1294b480();
  /* 1294b459 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b45c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294b45f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b462 push eax */
  push32((uint32_t)(EAX));
  /* 1294b463 call 0x1294c2d0 */
  push32(0x1294b468u); f_1294c2d0();
  /* 1294b468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b46b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294b46e:;
  /* 1294b46e mov esp, ebp */
  ESP = (EBP);
  /* 1294b470 pop ebp */
  EBP = (pop32());
  /* 1294b471 ret  */
  ESPCHK(0x1294b3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x1294b480 (627 bytes, 182 insns) */
void f_1294b480(void) {
  FTRACE(0x1294b480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b480 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b481 mov ebp, esp */
  EBP = (ESP);
  /* 1294b483 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b489 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294b490 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294b493 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1294b499 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b49d jne 0x1294b4a6 */
  if (!C.zf) goto L_1294b4a6;
  /* 1294b49f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b4a1 jmp 0x1294b6ef */
  goto L_1294b6ef;
L_1294b4a6:;
  /* 1294b4a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b4a9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b4ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b4af and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b4b2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b4b5 mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b4bc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294b4c1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1294b4c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294b4c6 je 0x1294b4d8 */
  if (C.zf) goto L_1294b4d8;
  /* 1294b4c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294b4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b4cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b4cf push edx */
  push32((uint32_t)(EDX));
  /* 1294b4d0 call 0x1294b330 */
  push32(0x1294b4d5u); f_1294b330();
  /* 1294b4d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294b4d8:;
  /* 1294b4d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b4db sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b4de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b4e1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294b4e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b4e7 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294b4ee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1294b4f3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1294b4f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b4fa je 0x1294b60c */
  if (C.zf) goto L_1294b60c;
  /* 1294b500 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b503 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294b506 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1294b50d:;
  /* 1294b50d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b510 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b513 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b516 jae 0x1294b60a */
  if (!C.cf) goto L_1294b60a;
  /* 1294b51c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1294b522 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1294b525:;
  /* 1294b525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b528 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1294b52e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b530 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b536 jge 0x1294b597 */
  if ((C.sf==C.of)) goto L_1294b597;
  /* 1294b538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b53b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b53e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b541 jae 0x1294b597 */
  if (!C.cf) goto L_1294b597;
  /* 1294b543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b546 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294b548 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1294b54e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b551 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b554 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294b557 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1294b55e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b561 jne 0x1294b581 */
  if (!C.zf) goto L_1294b581;
  /* 1294b563 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1294b569 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b56c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1294b572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b575 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1294b578 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b57b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b57e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1294b581:;
  /* 1294b581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b584 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1294b58a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1294b58c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b58f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b592 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294b595 jmp 0x1294b525 */
  goto L_1294b525;
L_1294b597:;
  /* 1294b597 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b599 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1294b59f push edx */
  push32((uint32_t)(EDX));
  /* 1294b5a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b5a3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1294b5a9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b5ab push eax */
  push32((uint32_t)(EAX));
  /* 1294b5ac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1294b5b2 push edx */
  push32((uint32_t)(EDX));
  /* 1294b5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b5b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b5b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b5bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294b5bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b5c2 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294b5c9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1294b5cc push eax */
  push32((uint32_t)(EAX));
  /* 1294b5cd call dword ptr [0x12970264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970264))), 0x1294b5d3u);
  /* 1294b5d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b5d5 je 0x1294b5fa */
  if (C.zf) goto L_1294b5fa;
  /* 1294b5d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294b5da add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b5e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1294b5e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294b5e6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1294b5ec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b5ee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b5f4 jge 0x1294b5f8 */
  if ((C.sf==C.of)) goto L_1294b5f8;
  /* 1294b5f6 jmp 0x1294b60a */
  goto L_1294b60a;
L_1294b5f8:;
  /* 1294b5f8 jmp 0x1294b605 */
  goto L_1294b605;
L_1294b5fa:;
  /* 1294b5fa call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294b600u);
  /* 1294b600 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294b603 jmp 0x1294b60a */
  goto L_1294b60a;
L_1294b605:;
  /* 1294b605 jmp 0x1294b50d */
  goto L_1294b50d;
L_1294b60a:;
  /* 1294b60a jmp 0x1294b65c */
  goto L_1294b65c;
L_1294b60c:;
  /* 1294b60c push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b60e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1294b614 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b615 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294b618 push edx */
  push32((uint32_t)(EDX));
  /* 1294b619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b61c push eax */
  push32((uint32_t)(EAX));
  /* 1294b61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b620 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b626 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b629 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b62c mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b633 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1294b636 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b637 call dword ptr [0x12970264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970264))), 0x1294b63du);
  /* 1294b63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b63f je 0x1294b653 */
  if (C.zf) goto L_1294b653;
  /* 1294b641 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1294b648 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1294b64e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1294b651 jmp 0x1294b65c */
  goto L_1294b65c;
L_1294b653:;
  /* 1294b653 call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294b659u);
  /* 1294b659 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1294b65c:;
  /* 1294b65c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b660 jne 0x1294b6e6 */
  if (!C.zf) goto L_1294b6e6;
  /* 1294b666 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b66a je 0x1294b69a */
  if (C.zf) goto L_1294b69a;
  /* 1294b66c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b670 jne 0x1294b689 */
  if (!C.zf) goto L_1294b689;
  /* 1294b672 call 0x1294aa20 */
  push32(0x1294b677u); f_1294aa20();
  /* 1294b677 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294b67d call 0x1294aa30 */
  push32(0x1294b682u); f_1294aa30();
  /* 1294b682 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294b685 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1294b687 jmp 0x1294b695 */
  goto L_1294b695;
L_1294b689:;
  /* 1294b689 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294b68c push edx */
  push32((uint32_t)(EDX));
  /* 1294b68d call 0x1294a980 */
  push32(0x1294b692u); f_1294a980();
  /* 1294b692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294b695:;
  /* 1294b695 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b698 jmp 0x1294b6ef */
  goto L_1294b6ef;
L_1294b69a:;
  /* 1294b69a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b69d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b6a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294b6a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b6a9 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294b6b0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1294b6b5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1294b6b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b6ba je 0x1294b6cb */
  if (C.zf) goto L_1294b6cb;
  /* 1294b6bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b6bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294b6c2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b6c5 jne 0x1294b6cb */
  if (!C.zf) goto L_1294b6cb;
  /* 1294b6c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b6c9 jmp 0x1294b6ef */
  goto L_1294b6ef;
L_1294b6cb:;
  /* 1294b6cb call 0x1294aa20 */
  push32(0x1294b6d0u); f_1294aa20();
  /* 1294b6d0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1294b6d6 call 0x1294aa30 */
  push32(0x1294b6dbu); f_1294aa30();
  /* 1294b6db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294b6e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294b6e4 jmp 0x1294b6ef */
  goto L_1294b6ef;
L_1294b6e6:;
  /* 1294b6e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294b6e9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1294b6ef:;
  /* 1294b6ef mov esp, ebp */
  ESP = (EBP);
  /* 1294b6f1 pop ebp */
  EBP = (pop32());
  /* 1294b6f2 ret  */
  ESPCHK(0x1294b480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x1294b700 (199 bytes, 68 insns) */
void f_1294b700(void) {
  FTRACE(0x1294b700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b700 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b701 mov ebp, esp */
  EBP = (ESP);
  /* 1294b703 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b704 push ebx */
  push32((uint32_t)(EBX));
  /* 1294b705 push esi */
  push32((uint32_t)(ESI));
  /* 1294b706 push edi */
  push32((uint32_t)(EDI));
L_1294b707:;
  /* 1294b707 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b70b jne 0x1294b72b */
  if (!C.zf) goto L_1294b72b;
  /* 1294b70d push 0x12969e84 */
  push32((uint32_t)(0x12969e84u));
  /* 1294b712 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294b714 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1294b716 push 0x12969f50 */
  push32((uint32_t)(0x12969f50u));
  /* 1294b71b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294b71d call 0x12941c10 */
  push32(0x1294b722u); f_12941c10();
  /* 1294b722 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b728 jne 0x1294b72b */
  if (!C.zf) goto L_1294b72b;
  /* 1294b72a int3  */
  x86_unimpl("int3 @ 0x1294b72a");
L_1294b72b:;
  /* 1294b72b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b72f jne 0x1294b707 */
  if (!C.zf) goto L_1294b707;
  /* 1294b731 mov ecx, dword ptr [0x1296e6a4] */
  ECX = (r32((uint32_t)(0x1296e6a4)));
  /* 1294b737 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b73a mov dword ptr [0x1296e6a4], ecx */
  w32((uint32_t)(0x1296e6a4), (ECX));
  /* 1294b740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b743 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294b746 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1294b748 push 0x12969f50 */
  push32((uint32_t)(0x12969f50u));
  /* 1294b74d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294b74f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1294b754 call 0x12942b50 */
  push32(0x1294b759u); f_12942b50();
  /* 1294b759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b75c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b75f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1294b762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b765 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b769 je 0x1294b786 */
  if (C.zf) goto L_1294b786;
  /* 1294b76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b76e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294b771 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1294b774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b777 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1294b77a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b77d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1294b784 jmp 0x1294b7ab */
  goto L_1294b7ab;
L_1294b786:;
  /* 1294b786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b789 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294b78c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1294b78f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b792 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1294b795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b798 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b79b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b79e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1294b7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b7a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1294b7ab:;
  /* 1294b7ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b7b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1294b7b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1294b7b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b7b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1294b7c0 pop edi */
  EDI = (pop32());
  /* 1294b7c1 pop esi */
  ESI = (pop32());
  /* 1294b7c2 pop ebx */
  EBX = (pop32());
  /* 1294b7c3 mov esp, ebp */
  ESP = (EBP);
  /* 1294b7c5 pop ebp */
  EBP = (pop32());
  /* 1294b7c6 ret  */
  ESPCHK(0x1294b700u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1294b7d0 (50 bytes, 17 insns) */
void f_1294b7d0(void) {
  FTRACE(0x1294b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294b7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b7d6 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b7dc jb 0x1294b7e2 */
  if (C.cf) goto L_1294b7e2;
  /* 1294b7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294b7e0 jmp 0x1294b800 */
  goto L_1294b800;
L_1294b7e2:;
  /* 1294b7e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b7e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b7e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b7eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b7ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b7f1 mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b7f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294b7fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1294b800:;
  /* 1294b800 pop ebp */
  EBP = (pop32());
  /* 1294b801 ret  */
  ESPCHK(0x1294b7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x1294b810 (300 bytes, 80 insns) */
void f_1294b810(void) {
  FTRACE(0x1294b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b810 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b811 mov ebp, esp */
  EBP = (ESP);
  /* 1294b813 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b814 cmp dword ptr [0x1296fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b81b jne 0x1294b829 */
  if (!C.zf) goto L_1294b829;
  /* 1294b81d mov dword ptr [0x1296fb60], 0x200 */
  w32((uint32_t)(0x1296fb60), (0x200u));
  /* 1294b827 jmp 0x1294b83c */
  goto L_1294b83c;
L_1294b829:;
  /* 1294b829 cmp dword ptr [0x1296fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1296fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b830 jge 0x1294b83c */
  if ((C.sf==C.of)) goto L_1294b83c;
  /* 1294b832 mov dword ptr [0x1296fb60], 0x14 */
  w32((uint32_t)(0x1296fb60), (0x14u));
L_1294b83c:;
  /* 1294b83c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1294b841 push 0x12969f5c */
  push32((uint32_t)(0x12969f5cu));
  /* 1294b846 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294b848 push 4 */
  push32((uint32_t)(0x4u));
  /* 1294b84a mov eax, dword ptr [0x1296fb60] */
  EAX = (r32((uint32_t)(0x1296fb60)));
  /* 1294b84f push eax */
  push32((uint32_t)(EAX));
  /* 1294b850 call 0x12942f60 */
  push32(0x1294b855u); f_12942f60();
  /* 1294b855 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b858 mov dword ptr [0x1296e818], eax */
  w32((uint32_t)(0x1296e818), (EAX));
  /* 1294b85d cmp dword ptr [0x1296e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b864 jne 0x1294b8a5 */
  if (!C.zf) goto L_1294b8a5;
  /* 1294b866 mov dword ptr [0x1296fb60], 0x14 */
  w32((uint32_t)(0x1296fb60), (0x14u));
  /* 1294b870 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1294b875 push 0x12969f5c */
  push32((uint32_t)(0x12969f5cu));
  /* 1294b87a push 2 */
  push32((uint32_t)(0x2u));
  /* 1294b87c push 4 */
  push32((uint32_t)(0x4u));
  /* 1294b87e mov ecx, dword ptr [0x1296fb60] */
  ECX = (r32((uint32_t)(0x1296fb60)));
  /* 1294b884 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b885 call 0x12942f60 */
  push32(0x1294b88au); f_12942f60();
  /* 1294b88a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b88d mov dword ptr [0x1296e818], eax */
  w32((uint32_t)(0x1296e818), (EAX));
  /* 1294b892 cmp dword ptr [0x1296e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b899 jne 0x1294b8a5 */
  if (!C.zf) goto L_1294b8a5;
  /* 1294b89b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1294b89d call 0x12941ac0 */
  push32(0x1294b8a2u); f_12941ac0();
  /* 1294b8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294b8a5:;
  /* 1294b8a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294b8ac jmp 0x1294b8b7 */
  goto L_1294b8b7;
L_1294b8ae:;
  /* 1294b8ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b8b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b8b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1294b8b7:;
  /* 1294b8b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b8bb jge 0x1294b8d6 */
  if ((C.sf==C.of)) goto L_1294b8d6;
  /* 1294b8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b8c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b8c3 add eax, 0x1296d120 */
  { uint32_t _a=(EAX),_b=(0x1296d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b8c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b8cb mov edx, dword ptr [0x1296e818] */
  EDX = (r32((uint32_t)(0x1296e818)));
  /* 1294b8d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1294b8d4 jmp 0x1294b8ae */
  goto L_1294b8ae;
L_1294b8d6:;
  /* 1294b8d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294b8dd jmp 0x1294b8e8 */
  goto L_1294b8e8;
L_1294b8df:;
  /* 1294b8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b8e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b8e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294b8e8:;
  /* 1294b8e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b8ec jge 0x1294b938 */
  if ((C.sf==C.of)) goto L_1294b938;
  /* 1294b8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b8f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b8f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b8f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b8fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b8fd mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b904 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b908 je 0x1294b926 */
  if (C.zf) goto L_1294b926;
  /* 1294b90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b90d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b913 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294b916 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294b919 mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294b920 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b924 jne 0x1294b936 */
  if (!C.zf) goto L_1294b936;
L_1294b926:;
  /* 1294b926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294b929 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294b92c mov dword ptr [ecx + 0x1296d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1296d130), (0xffffffffu));
L_1294b936:;
  /* 1294b936 jmp 0x1294b8df */
  goto L_1294b8df;
L_1294b938:;
  /* 1294b938 mov esp, ebp */
  ESP = (EBP);
  /* 1294b93a pop ebp */
  EBP = (pop32());
  /* 1294b93b ret  */
  ESPCHK(0x1294b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b940 @ 0x1294b940 (26 bytes, 9 insns) */
void f_1294b940(void) {
  FTRACE(0x1294b940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b940 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b941 mov ebp, esp */
  EBP = (ESP);
  /* 1294b943 call 0x1294c540 */
  push32(0x1294b948u); f_1294c540();
  /* 1294b948 movsx eax, byte ptr [0x1296e4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1296e4bc))));
  /* 1294b94f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294b951 je 0x1294b958 */
  if (C.zf) goto L_1294b958;
  /* 1294b953 call 0x1294c300 */
  push32(0x1294b958u); f_1294c300();
L_1294b958:;
  /* 1294b958 pop ebp */
  EBP = (pop32());
  /* 1294b959 ret  */
  ESPCHK(0x1294b940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x1294b960 (61 bytes, 20 insns) */
void f_1294b960(void) {
  FTRACE(0x1294b960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b960 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b961 mov ebp, esp */
  EBP = (ESP);
  /* 1294b963 cmp dword ptr [ebp + 8], 0x1296d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1296d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b96a jb 0x1294b98e */
  if (C.cf) goto L_1294b98e;
  /* 1294b96c cmp dword ptr [ebp + 8], 0x1296d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1296d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b973 ja 0x1294b98e */
  if ((!C.cf&&!C.zf)) goto L_1294b98e;
  /* 1294b975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b978 sub eax, 0x1296d120 */
  { uint32_t _a=(EAX),_b=(0x1296d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b97d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b980 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b983 push eax */
  push32((uint32_t)(EAX));
  /* 1294b984 call 0x12946550 */
  push32(0x1294b989u); f_12946550();
  /* 1294b989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b98c jmp 0x1294b99b */
  goto L_1294b99b;
L_1294b98e:;
  /* 1294b98e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b991 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b994 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b995 call dword ptr [0x129702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f4))), 0x1294b99bu);
L_1294b99b:;
  /* 1294b99b pop ebp */
  EBP = (pop32());
  /* 1294b99c ret  */
  ESPCHK(0x1294b960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9a0 @ 0x1294b9a0 (41 bytes, 16 insns) */
void f_1294b9a0(void) {
  FTRACE(0x1294b9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1294b9a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b9a7 jge 0x1294b9ba */
  if ((C.sf==C.of)) goto L_1294b9ba;
  /* 1294b9a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b9ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b9af push eax */
  push32((uint32_t)(EAX));
  /* 1294b9b0 call 0x12946550 */
  push32(0x1294b9b5u); f_12946550();
  /* 1294b9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b9b8 jmp 0x1294b9c7 */
  goto L_1294b9c7;
L_1294b9ba:;
  /* 1294b9ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294b9bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b9c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1294b9c1 call dword ptr [0x129702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f4))), 0x1294b9c7u);
L_1294b9c7:;
  /* 1294b9c7 pop ebp */
  EBP = (pop32());
  /* 1294b9c8 ret  */
  ESPCHK(0x1294b9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x1294b9d0 (61 bytes, 20 insns) */
void f_1294b9d0(void) {
  FTRACE(0x1294b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294b9d3 cmp dword ptr [ebp + 8], 0x1296d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1296d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b9da jb 0x1294b9fe */
  if (C.cf) goto L_1294b9fe;
  /* 1294b9dc cmp dword ptr [ebp + 8], 0x1296d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1296d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294b9e3 ja 0x1294b9fe */
  if ((!C.cf&&!C.zf)) goto L_1294b9fe;
  /* 1294b9e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294b9e8 sub eax, 0x1296d120 */
  { uint32_t _a=(EAX),_b=(0x1296d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294b9ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294b9f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b9f3 push eax */
  push32((uint32_t)(EAX));
  /* 1294b9f4 call 0x129465f0 */
  push32(0x1294b9f9u); f_129465f0();
  /* 1294b9f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294b9fc jmp 0x1294ba0b */
  goto L_1294ba0b;
L_1294b9fe:;
  /* 1294b9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ba01 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ba04 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ba05 call dword ptr [0x129702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f8))), 0x1294ba0bu);
L_1294ba0b:;
  /* 1294ba0b pop ebp */
  EBP = (pop32());
  /* 1294ba0c ret  */
  ESPCHK(0x1294b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x1294ba10 (41 bytes, 16 insns) */
void f_1294ba10(void) {
  FTRACE(0x1294ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ba11 mov ebp, esp */
  EBP = (ESP);
  /* 1294ba13 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ba17 jge 0x1294ba2a */
  if ((C.sf==C.of)) goto L_1294ba2a;
  /* 1294ba19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ba1c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ba1f push eax */
  push32((uint32_t)(EAX));
  /* 1294ba20 call 0x129465f0 */
  push32(0x1294ba25u); f_129465f0();
  /* 1294ba25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ba28 jmp 0x1294ba37 */
  goto L_1294ba37;
L_1294ba2a:;
  /* 1294ba2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294ba2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ba30 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ba31 call dword ptr [0x129702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f8))), 0x1294ba37u);
L_1294ba37:;
  /* 1294ba37 pop ebp */
  EBP = (pop32());
  /* 1294ba38 ret  */
  ESPCHK(0x1294ba10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba40 @ 0x1294ba40 (119 bytes, 34 insns) */
void f_1294ba40(void) {
  FTRACE(0x1294ba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ba40 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ba41 mov ebp, esp */
  EBP = (ESP);
  /* 1294ba43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ba46 push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1294ba4b call dword ptr [0x12970278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970278))), 0x1294ba51u);
  /* 1294ba51 cmp dword ptr [0x1296e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ba58 je 0x1294ba78 */
  if (C.zf) goto L_1294ba78;
  /* 1294ba5a push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1294ba5f call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x1294ba65u);
  /* 1294ba65 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294ba67 call 0x12946550 */
  push32(0x1294ba6cu); f_12946550();
  /* 1294ba6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ba6f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1294ba76 jmp 0x1294ba7f */
  goto L_1294ba7f;
L_1294ba78:;
  /* 1294ba78 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1294ba7f:;
  /* 1294ba7f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1294ba83 push eax */
  push32((uint32_t)(EAX));
  /* 1294ba84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ba87 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ba88 call 0x1294bac0 */
  push32(0x1294ba8du); f_1294bac0();
  /* 1294ba8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ba90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294ba93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ba97 je 0x1294baa5 */
  if (C.zf) goto L_1294baa5;
  /* 1294ba99 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294ba9b call 0x129465f0 */
  push32(0x1294baa0u); f_129465f0();
  /* 1294baa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294baa3 jmp 0x1294bab0 */
  goto L_1294bab0;
L_1294baa5:;
  /* 1294baa5 push 0x1296e814 */
  push32((uint32_t)(0x1296e814u));
  /* 1294baaa call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x1294bab0u);
L_1294bab0:;
  /* 1294bab0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294bab3 mov esp, ebp */
  ESP = (EBP);
  /* 1294bab5 pop ebp */
  EBP = (pop32());
  /* 1294bab6 ret  */
  ESPCHK(0x1294ba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x1294bac0 (160 bytes, 50 insns) */
void f_1294bac0(void) {
  FTRACE(0x1294bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bac1 mov ebp, esp */
  EBP = (ESP);
  /* 1294bac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294bac6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294baca jne 0x1294bad3 */
  if (!C.zf) goto L_1294bad3;
  /* 1294bacc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294bace jmp 0x1294bb5c */
  goto L_1294bb5c;
L_1294bad3:;
  /* 1294bad3 cmp dword ptr [0x1296e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bada jne 0x1294bb0a */
  if (!C.zf) goto L_1294bb0a;
  /* 1294badc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294badf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294bae4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bae9 jle 0x1294bafb */
  if ((C.zf||C.sf!=C.of)) goto L_1294bafb;
  /* 1294baeb call 0x1294aa20 */
  push32(0x1294baf0u); f_1294aa20();
  /* 1294baf0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1294baf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294baf9 jmp 0x1294bb5c */
  goto L_1294bb5c;
L_1294bafb:;
  /* 1294bafb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bafe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1294bb01 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1294bb03 mov eax, 1 */
  EAX = (0x1u);
  /* 1294bb08 jmp 0x1294bb5c */
  goto L_1294bb5c;
L_1294bb0a:;
  /* 1294bb0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294bb11 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1294bb14 push eax */
  push32((uint32_t)(EAX));
  /* 1294bb15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294bb17 mov ecx, dword ptr [0x1296cea4] */
  ECX = (r32((uint32_t)(0x1296cea4)));
  /* 1294bb1d push ecx */
  push32((uint32_t)(ECX));
  /* 1294bb1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bb21 push edx */
  push32((uint32_t)(EDX));
  /* 1294bb22 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294bb24 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1294bb27 push eax */
  push32((uint32_t)(EAX));
  /* 1294bb28 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1294bb2d mov ecx, dword ptr [0x1296e698] */
  ECX = (r32((uint32_t)(0x1296e698)));
  /* 1294bb33 push ecx */
  push32((uint32_t)(ECX));
  /* 1294bb34 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x1294bb3au);
  /* 1294bb3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294bb3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bb41 je 0x1294bb49 */
  if (C.zf) goto L_1294bb49;
  /* 1294bb43 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bb47 je 0x1294bb59 */
  if (C.zf) goto L_1294bb59;
L_1294bb49:;
  /* 1294bb49 call 0x1294aa20 */
  push32(0x1294bb4eu); f_1294aa20();
  /* 1294bb4e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1294bb54 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294bb57 jmp 0x1294bb5c */
  goto L_1294bb5c;
L_1294bb59:;
  /* 1294bb59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294bb5c:;
  /* 1294bb5c mov esp, ebp */
  ESP = (EBP);
  /* 1294bb5e pop ebp */
  EBP = (pop32());
  /* 1294bb5f ret  */
  ESPCHK(0x1294bac0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1294bb60 (32 bytes, 18 insns) */
void f_1294bb60(void) {
  FTRACE(0x1294bb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bb61 mov ebp, esp */
  EBP = (ESP);
  /* 1294bb63 push ebx */
  push32((uint32_t)(EBX));
  /* 1294bb64 push esi */
  push32((uint32_t)(ESI));
  /* 1294bb65 push edi */
  push32((uint32_t)(EDI));
  /* 1294bb66 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bb67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294bb69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294bb6b push 0x1294bb78 */
  push32((uint32_t)(0x1294bb78u));
  /* 1294bb70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1294bb73 call 0x129532ac */
  push32(0x1294bb78u); f_129532ac();
  /* 1294bb78 pop ebp */
  EBP = (pop32());
  /* 1294bb79 pop edi */
  EDI = (pop32());
  /* 1294bb7a pop esi */
  ESI = (pop32());
  /* 1294bb7b pop ebx */
  EBX = (pop32());
  /* 1294bb7c mov esp, ebp */
  ESP = (EBP);
  /* 1294bb7e pop ebp */
  EBP = (pop32());
  /* 1294bb7f ret  */
  ESPCHK(0x1294bb60u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1294bba2 (104 bytes, 33 insns) */
void f_1294bba2(void) {
  FTRACE(0x1294bba2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bba2 push ebx */
  push32((uint32_t)(EBX));
  /* 1294bba3 push esi */
  push32((uint32_t)(ESI));
  /* 1294bba4 push edi */
  push32((uint32_t)(EDI));
  /* 1294bba5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1294bba9 push eax */
  push32((uint32_t)(EAX));
  /* 1294bbaa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1294bbac push 0x1294bb80 */
  push32((uint32_t)(0x1294bb80u));
  /* 1294bbb1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1294bbb8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1294bbbf:;
  /* 1294bbbf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1294bbc3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294bbc6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1294bbc9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bbcc je 0x1294bbfc */
  if (C.zf) goto L_1294bbfc;
  /* 1294bbce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bbd2 je 0x1294bbfc */
  if (C.zf) goto L_1294bbfc;
  /* 1294bbd4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1294bbd7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1294bbda mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1294bbde mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1294bbe1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bbe6 jne 0x1294bbfa */
  if (!C.zf) goto L_1294bbfa;
  /* 1294bbe8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1294bbed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1294bbf1 call 0x1294bc36 */
  push32(0x1294bbf6u); f_1294bc36();
  /* 1294bbf6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1294bbfau);
L_1294bbfa:;
  /* 1294bbfa jmp 0x1294bbbf */
  goto L_1294bbbf;
L_1294bbfc:;
  /* 1294bbfc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1294bc03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bc06 pop edi */
  EDI = (pop32());
  /* 1294bc07 pop esi */
  ESI = (pop32());
  /* 1294bc08 pop ebx */
  EBX = (pop32());
  /* 1294bc09 ret  */
  ESPCHK(0x1294bba2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc36 @ 0x1294bc36 (24 bytes, 10 insns) */
void f_1294bc36(void) {
  FTRACE(0x1294bc36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bc36 push ebx */
  push32((uint32_t)(EBX));
  /* 1294bc37 push ecx */
  push32((uint32_t)(ECX));
  /* 1294bc38 mov ebx, 0x1296d3b8 */
  EBX = (0x1296d3b8u);
  /* 1294bc3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bc40 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1294bc43 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1294bc46 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1294bc49 pop ecx */
  ECX = (pop32());
  /* 1294bc4a pop ebx */
  EBX = (pop32());
  /* 1294bc4b ret 4 */
  ESPCHK(0x1294bc36u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd15 @ 0x1294bd15 (27 bytes, 11 insns) */
void f_1294bd15(void) {
  FTRACE(0x1294bd15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bd15 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bd16 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1294bd1a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1294bd1c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1294bd1f push eax */
  push32((uint32_t)(EAX));
  /* 1294bd20 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1294bd23 push eax */
  push32((uint32_t)(EAX));
  /* 1294bd24 call 0x1294bba2 */
  push32(0x1294bd29u); f_1294bba2();
  /* 1294bd29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bd2c pop ebp */
  EBP = (pop32());
  /* 1294bd2d ret 4 */
  ESPCHK(0x1294bd15u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd30 @ 0x1294bd30 (482 bytes, 138 insns) */
void f_1294bd30(void) {
  FTRACE(0x1294bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bd31 mov ebp, esp */
  EBP = (ESP);
  /* 1294bd33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294bd36 push esi */
  push32((uint32_t)(ESI));
  /* 1294bd37 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1294bd3e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1294bd40 call 0x12946550 */
  push32(0x1294bd45u); f_12946550();
  /* 1294bd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bd48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1294bd4f jmp 0x1294bd5a */
  goto L_1294bd5a;
L_1294bd51:;
  /* 1294bd51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294bd54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bd57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1294bd5a:;
  /* 1294bd5a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bd5e jge 0x1294bf00 */
  if ((C.sf==C.of)) goto L_1294bf00;
  /* 1294bd64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294bd67 cmp dword ptr [ecx*4 + 0x1296fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1296fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bd6f je 0x1294be66 */
  if (C.zf) goto L_1294be66;
  /* 1294bd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294bd78 mov eax, dword ptr [edx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 1294bd7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294bd82 jmp 0x1294bd8d */
  goto L_1294bd8d;
L_1294bd84:;
  /* 1294bd84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bd87 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bd8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1294bd8d:;
  /* 1294bd8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294bd90 mov eax, dword ptr [edx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 1294bd97 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bd9c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bd9f jae 0x1294be56 */
  if (!C.cf) goto L_1294be56;
  /* 1294bda5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bda8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1294bdac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1294bdaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294bdb1 jne 0x1294be51 */
  if (!C.zf) goto L_1294be51;
  /* 1294bdb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bdba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bdbe jne 0x1294bdf9 */
  if (!C.zf) goto L_1294bdf9;
  /* 1294bdc0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1294bdc2 call 0x12946550 */
  push32(0x1294bdc7u); f_12946550();
  /* 1294bdc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bdca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bdcd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bdd1 jne 0x1294bdef */
  if (!C.zf) goto L_1294bdef;
  /* 1294bdd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bdd6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bdd9 push edx */
  push32((uint32_t)(EDX));
  /* 1294bdda call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x1294bde0u);
  /* 1294bde0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bde3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294bde6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bde9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bdec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1294bdef:;
  /* 1294bdef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1294bdf1 call 0x129465f0 */
  push32(0x1294bdf6u); f_129465f0();
  /* 1294bdf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294bdf9:;
  /* 1294bdf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bdfc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bdff push eax */
  push32((uint32_t)(EAX));
  /* 1294be00 call dword ptr [0x129702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f4))), 0x1294be06u);
  /* 1294be06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294be09 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1294be0d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1294be10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294be12 je 0x1294be26 */
  if (C.zf) goto L_1294be26;
  /* 1294be14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294be17 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294be1a push eax */
  push32((uint32_t)(EAX));
  /* 1294be1b call dword ptr [0x129702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f8))), 0x1294be21u);
  /* 1294be21 jmp 0x1294bd84 */
  goto L_1294bd84;
L_1294be26:;
  /* 1294be26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294be29 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1294be2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294be32 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294be35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294be38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294be3b sub eax, dword ptr [edx*4 + 0x1296fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1296fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294be42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294be43 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1294be48 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1294be4a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294be4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294be4f jmp 0x1294be56 */
  goto L_1294be56;
L_1294be51:;
  /* 1294be51 jmp 0x1294bd84 */
  goto L_1294bd84;
L_1294be56:;
  /* 1294be56 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294be5a je 0x1294be61 */
  if (C.zf) goto L_1294be61;
  /* 1294be5c jmp 0x1294bf00 */
  goto L_1294bf00;
L_1294be61:;
  /* 1294be61 jmp 0x1294befb */
  goto L_1294befb;
L_1294be66:;
  /* 1294be66 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1294be68 push 0x12969f64 */
  push32((uint32_t)(0x12969f64u));
  /* 1294be6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294be6f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1294be74 call 0x12942b50 */
  push32(0x1294be79u); f_12942b50();
  /* 1294be79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294be7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294be7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294be83 je 0x1294bef9 */
  if (C.zf) goto L_1294bef9;
  /* 1294be85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294be88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294be8b mov dword ptr [eax*4 + 0x1296fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1296fe60), (ECX));
  /* 1294be92 mov edx, dword ptr [0x1296ff9c] */
  EDX = (r32((uint32_t)(0x1296ff9c)));
  /* 1294be98 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294be9b mov dword ptr [0x1296ff9c], edx */
  w32((uint32_t)(0x1296ff9c), (EDX));
  /* 1294bea1 jmp 0x1294beac */
  goto L_1294beac;
L_1294bea3:;
  /* 1294bea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bea6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294beac:;
  /* 1294beac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294beaf mov edx, dword ptr [ecx*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294beb6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bebc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bebf jae 0x1294bee4 */
  if (!C.cf) goto L_1294bee4;
  /* 1294bec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bec4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1294bec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294becb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1294bed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bed4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1294bed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294bedb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1294bee2 jmp 0x1294bea3 */
  goto L_1294bea3;
L_1294bee4:;
  /* 1294bee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294bee7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294beea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294beed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294bef0 push edx */
  push32((uint32_t)(EDX));
  /* 1294bef1 call 0x1294c240 */
  push32(0x1294bef6u); f_1294c240();
  /* 1294bef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294bef9:;
  /* 1294bef9 jmp 0x1294bf00 */
  goto L_1294bf00;
L_1294befb:;
  /* 1294befb jmp 0x1294bd51 */
  goto L_1294bd51;
L_1294bf00:;
  /* 1294bf00 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1294bf02 call 0x129465f0 */
  push32(0x1294bf07u); f_129465f0();
  /* 1294bf07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294bf0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294bf0d pop esi */
  ESI = (pop32());
  /* 1294bf0e mov esp, ebp */
  ESP = (EBP);
  /* 1294bf10 pop ebp */
  EBP = (pop32());
  /* 1294bf11 ret  */
  ESPCHK(0x1294bd30u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1294bf20 (183 bytes, 57 insns) */
void f_1294bf20(void) {
  FTRACE(0x1294bf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bf20 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bf21 mov ebp, esp */
  EBP = (ESP);
  /* 1294bf23 push ecx */
  push32((uint32_t)(ECX));
  /* 1294bf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bf27 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bf2d jae 0x1294bfba */
  if (!C.cf) goto L_1294bfba;
  /* 1294bf33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bf36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294bf39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bf3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294bf3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294bf42 mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294bf49 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bf4d jne 0x1294bfba */
  if (!C.zf) goto L_1294bfba;
  /* 1294bf4f cmp dword ptr [0x1296e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bf56 jne 0x1294bf9a */
  if (!C.zf) goto L_1294bf9a;
  /* 1294bf58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bf5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294bf5e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bf62 je 0x1294bf72 */
  if (C.zf) goto L_1294bf72;
  /* 1294bf64 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bf68 je 0x1294bf80 */
  if (C.zf) goto L_1294bf80;
  /* 1294bf6a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bf6e je 0x1294bf8e */
  if (C.zf) goto L_1294bf8e;
  /* 1294bf70 jmp 0x1294bf9a */
  goto L_1294bf9a;
L_1294bf72:;
  /* 1294bf72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294bf75 push edx */
  push32((uint32_t)(EDX));
  /* 1294bf76 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1294bf78 call dword ptr [0x12970334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970334))), 0x1294bf7eu);
  /* 1294bf7e jmp 0x1294bf9a */
  goto L_1294bf9a;
L_1294bf80:;
  /* 1294bf80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294bf83 push eax */
  push32((uint32_t)(EAX));
  /* 1294bf84 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1294bf86 call dword ptr [0x12970334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970334))), 0x1294bf8cu);
  /* 1294bf8c jmp 0x1294bf9a */
  goto L_1294bf9a;
L_1294bf8e:;
  /* 1294bf8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294bf91 push ecx */
  push32((uint32_t)(ECX));
  /* 1294bf92 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1294bf94 call dword ptr [0x12970334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970334))), 0x1294bf9au);
L_1294bf9a:;
  /* 1294bf9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bf9d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1294bfa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bfa3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1294bfa6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294bfa9 mov ecx, dword ptr [edx*4 + 0x1296fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 1294bfb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294bfb3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1294bfb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294bfb8 jmp 0x1294bfd3 */
  goto L_1294bfd3;
L_1294bfba:;
  /* 1294bfba call 0x1294aa20 */
  push32(0x1294bfbfu); f_1294aa20();
  /* 1294bfbf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294bfc5 call 0x1294aa30 */
  push32(0x1294bfcau); f_1294aa30();
  /* 1294bfca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294bfd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1294bfd3:;
  /* 1294bfd3 mov esp, ebp */
  ESP = (EBP);
  /* 1294bfd5 pop ebp */
  EBP = (pop32());
  /* 1294bfd6 ret  */
  ESPCHK(0x1294bf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfe0 @ 0x1294bfe0 (216 bytes, 63 insns) */
void f_1294bfe0(void) {
  FTRACE(0x1294bfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294bfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294bfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1294bfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294bfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bfe7 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294bfed jae 0x1294c09b */
  if (!C.cf) goto L_1294c09b;
  /* 1294bff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bff6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294bff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294bffc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294bfff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c002 mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294c009 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294c00e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c011 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294c013 je 0x1294c09b */
  if (C.zf) goto L_1294c09b;
  /* 1294c019 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c01c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1294c01f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c022 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1294c025 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c028 mov ecx, dword ptr [edx*4 + 0x1296fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 1294c02f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c033 je 0x1294c09b */
  if (C.zf) goto L_1294c09b;
  /* 1294c035 cmp dword ptr [0x1296e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c03c jne 0x1294c07a */
  if (!C.zf) goto L_1294c07a;
  /* 1294c03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c041 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294c044 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c048 je 0x1294c058 */
  if (C.zf) goto L_1294c058;
  /* 1294c04a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c04e je 0x1294c064 */
  if (C.zf) goto L_1294c064;
  /* 1294c050 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c054 je 0x1294c070 */
  if (C.zf) goto L_1294c070;
  /* 1294c056 jmp 0x1294c07a */
  goto L_1294c07a;
L_1294c058:;
  /* 1294c058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294c05a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1294c05c call dword ptr [0x12970334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970334))), 0x1294c062u);
  /* 1294c062 jmp 0x1294c07a */
  goto L_1294c07a;
L_1294c064:;
  /* 1294c064 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294c066 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1294c068 call dword ptr [0x12970334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970334))), 0x1294c06eu);
  /* 1294c06e jmp 0x1294c07a */
  goto L_1294c07a;
L_1294c070:;
  /* 1294c070 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294c072 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1294c074 call dword ptr [0x12970334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970334))), 0x1294c07au);
L_1294c07a:;
  /* 1294c07a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c07d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294c080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c083 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294c086 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c089 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294c090 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1294c097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294c099 jmp 0x1294c0b4 */
  goto L_1294c0b4;
L_1294c09b:;
  /* 1294c09b call 0x1294aa20 */
  push32(0x1294c0a0u); f_1294aa20();
  /* 1294c0a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294c0a6 call 0x1294aa30 */
  push32(0x1294c0abu); f_1294aa30();
  /* 1294c0ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294c0b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1294c0b4:;
  /* 1294c0b4 mov esp, ebp */
  ESP = (EBP);
  /* 1294c0b6 pop ebp */
  EBP = (pop32());
  /* 1294c0b7 ret  */
  ESPCHK(0x1294bfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x1294c0c0 (102 bytes, 30 insns) */
void f_1294c0c0(void) {
  FTRACE(0x1294c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1294c0c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c0c6 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c0cc jae 0x1294c10b */
  if (!C.cf) goto L_1294c10b;
  /* 1294c0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c0d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294c0d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c0d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294c0da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c0dd mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294c0e4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294c0e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c0ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294c0ee je 0x1294c10b */
  if (C.zf) goto L_1294c10b;
  /* 1294c0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c0f3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1294c0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c0f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1294c0fc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c0ff mov ecx, dword ptr [edx*4 + 0x1296fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 1294c106 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1294c109 jmp 0x1294c124 */
  goto L_1294c124;
L_1294c10b:;
  /* 1294c10b call 0x1294aa20 */
  push32(0x1294c110u); f_1294aa20();
  /* 1294c110 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294c116 call 0x1294aa30 */
  push32(0x1294c11bu); f_1294aa30();
  /* 1294c11b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294c121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1294c124:;
  /* 1294c124 pop ebp */
  EBP = (pop32());
  /* 1294c125 ret  */
  ESPCHK(0x1294c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x1294c130 (260 bytes, 83 insns) */
void f_1294c130(void) {
  FTRACE(0x1294c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c130 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c131 mov ebp, esp */
  EBP = (ESP);
  /* 1294c133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c136 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1294c13a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c13d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1294c140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c142 je 0x1294c14d */
  if (C.zf) goto L_1294c14d;
  /* 1294c144 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c147 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1294c14a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1294c14d:;
  /* 1294c14d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c150 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1294c156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294c158 je 0x1294c162 */
  if (C.zf) goto L_1294c162;
  /* 1294c15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c15d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1294c15f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1294c162:;
  /* 1294c162 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c165 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c16b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294c16d je 0x1294c178 */
  if (C.zf) goto L_1294c178;
  /* 1294c16f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c172 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1294c175 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1294c178:;
  /* 1294c178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c17b push eax */
  push32((uint32_t)(EAX));
  /* 1294c17c call dword ptr [0x129702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b0))), 0x1294c182u);
  /* 1294c182 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294c185 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c189 jne 0x1294c1a2 */
  if (!C.zf) goto L_1294c1a2;
  /* 1294c18b call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294c191u);
  /* 1294c191 push eax */
  push32((uint32_t)(EAX));
  /* 1294c192 call 0x1294a980 */
  push32(0x1294c197u); f_1294a980();
  /* 1294c197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c19a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294c19d jmp 0x1294c230 */
  goto L_1294c230;
L_1294c1a2:;
  /* 1294c1a2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c1a6 jne 0x1294c1b3 */
  if (!C.zf) goto L_1294c1b3;
  /* 1294c1a8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c1ab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1294c1ae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1294c1b1 jmp 0x1294c1c2 */
  goto L_1294c1c2;
L_1294c1b3:;
  /* 1294c1b3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c1b7 jne 0x1294c1c2 */
  if (!C.zf) goto L_1294c1c2;
  /* 1294c1b9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c1bc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1294c1bf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1294c1c2:;
  /* 1294c1c2 call 0x1294bd30 */
  push32(0x1294c1c7u); f_1294bd30();
  /* 1294c1c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294c1ca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c1ce jne 0x1294c1eb */
  if (!C.zf) goto L_1294c1eb;
  /* 1294c1d0 call 0x1294aa20 */
  push32(0x1294c1d5u); f_1294aa20();
  /* 1294c1d5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1294c1db call 0x1294aa30 */
  push32(0x1294c1e0u); f_1294aa30();
  /* 1294c1e0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294c1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294c1e9 jmp 0x1294c230 */
  goto L_1294c230;
L_1294c1eb:;
  /* 1294c1eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c1ee push eax */
  push32((uint32_t)(EAX));
  /* 1294c1ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c1f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c1f3 call 0x1294bf20 */
  push32(0x1294c1f8u); f_1294bf20();
  /* 1294c1f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c1fb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c1fe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1294c201 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1294c204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c207 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294c20a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c20d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294c210 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c213 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294c21a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1294c21d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1294c221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c224 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c225 call 0x1294c2d0 */
  push32(0x1294c22au); f_1294c2d0();
  /* 1294c22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c22d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1294c230:;
  /* 1294c230 mov esp, ebp */
  ESP = (EBP);
  /* 1294c232 pop ebp */
  EBP = (pop32());
  /* 1294c233 ret  */
  ESPCHK(0x1294c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c240 @ 0x1294c240 (134 bytes, 44 insns) */
void f_1294c240(void) {
  FTRACE(0x1294c240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c240 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c241 mov ebp, esp */
  EBP = (ESP);
  /* 1294c243 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c247 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294c24a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c24d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294c250 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c253 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294c25a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c25c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294c25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c262 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c266 jne 0x1294c2a1 */
  if (!C.zf) goto L_1294c2a1;
  /* 1294c268 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1294c26a call 0x12946550 */
  push32(0x1294c26fu); f_12946550();
  /* 1294c26f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c275 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c279 jne 0x1294c297 */
  if (!C.zf) goto L_1294c297;
  /* 1294c27b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c27e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c281 push edx */
  push32((uint32_t)(EDX));
  /* 1294c282 call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x1294c288u);
  /* 1294c288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c28b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294c28e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c294 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1294c297:;
  /* 1294c297 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1294c299 call 0x129465f0 */
  push32(0x1294c29eu); f_129465f0();
  /* 1294c29e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294c2a1:;
  /* 1294c2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c2a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294c2a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c2aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294c2ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c2b0 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294c2b7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1294c2bb push eax */
  push32((uint32_t)(EAX));
  /* 1294c2bc call dword ptr [0x129702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f4))), 0x1294c2c2u);
  /* 1294c2c2 mov esp, ebp */
  ESP = (EBP);
  /* 1294c2c4 pop ebp */
  EBP = (pop32());
  /* 1294c2c5 ret  */
  ESPCHK(0x1294c240u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1294c2d0 (38 bytes, 13 insns) */
void f_1294c2d0(void) {
  FTRACE(0x1294c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294c2d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c2d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294c2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c2dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294c2df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c2e2 mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294c2e9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1294c2ed push eax */
  push32((uint32_t)(EAX));
  /* 1294c2ee call dword ptr [0x129702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f8))), 0x1294c2f4u);
  /* 1294c2f4 pop ebp */
  EBP = (pop32());
  /* 1294c2f5 ret  */
  ESPCHK(0x1294c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c300 @ 0x1294c300 (218 bytes, 63 insns) */
void f_1294c300(void) {
  FTRACE(0x1294c300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c300 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c301 mov ebp, esp */
  EBP = (ESP);
  /* 1294c303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c306 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294c30d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294c30f call 0x12946550 */
  push32(0x1294c314u); f_12946550();
  /* 1294c314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c317 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1294c31e jmp 0x1294c329 */
  goto L_1294c329;
L_1294c320:;
  /* 1294c320 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c323 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c326 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1294c329:;
  /* 1294c329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c32c cmp ecx, dword ptr [0x1296fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c332 jge 0x1294c3c9 */
  if ((C.sf==C.of)) goto L_1294c3c9;
  /* 1294c338 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c33b mov eax, dword ptr [0x1296e818] */
  EAX = (r32((uint32_t)(0x1296e818)));
  /* 1294c340 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c344 je 0x1294c3c4 */
  if (C.zf) goto L_1294c3c4;
  /* 1294c346 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c349 mov edx, dword ptr [0x1296e818] */
  EDX = (r32((uint32_t)(0x1296e818)));
  /* 1294c34f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1294c352 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294c355 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c35b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294c35d je 0x1294c381 */
  if (C.zf) goto L_1294c381;
  /* 1294c35f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c362 mov eax, dword ptr [0x1296e818] */
  EAX = (r32((uint32_t)(0x1296e818)));
  /* 1294c367 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1294c36a push ecx */
  push32((uint32_t)(ECX));
  /* 1294c36b call 0x1294d0f0 */
  push32(0x1294c370u); f_1294d0f0();
  /* 1294c370 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c373 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c376 je 0x1294c381 */
  if (C.zf) goto L_1294c381;
  /* 1294c378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c37b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c37e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1294c381:;
  /* 1294c381 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c385 jl 0x1294c3c4 */
  if ((C.sf!=C.of)) goto L_1294c3c4;
  /* 1294c387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c38a mov ecx, dword ptr [0x1296e818] */
  ECX = (r32((uint32_t)(0x1296e818)));
  /* 1294c390 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1294c393 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c396 push edx */
  push32((uint32_t)(EDX));
  /* 1294c397 call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x1294c39du);
  /* 1294c39d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294c39f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c3a2 mov ecx, dword ptr [0x1296e818] */
  ECX = (r32((uint32_t)(0x1296e818)));
  /* 1294c3a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1294c3ab push edx */
  push32((uint32_t)(EDX));
  /* 1294c3ac call 0x129435e0 */
  push32(0x1294c3b1u); f_129435e0();
  /* 1294c3b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c3b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c3b7 mov ecx, dword ptr [0x1296e818] */
  ECX = (r32((uint32_t)(0x1296e818)));
  /* 1294c3bd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1294c3c4:;
  /* 1294c3c4 jmp 0x1294c320 */
  goto L_1294c320;
L_1294c3c9:;
  /* 1294c3c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294c3cb call 0x129465f0 */
  push32(0x1294c3d0u); f_129465f0();
  /* 1294c3d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c3d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c3d6 mov esp, ebp */
  ESP = (EBP);
  /* 1294c3d8 pop ebp */
  EBP = (pop32());
  /* 1294c3d9 ret  */
  ESPCHK(0x1294c300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x1294c3e0 (68 bytes, 26 insns) */
void f_1294c3e0(void) {
  FTRACE(0x1294c3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1294c3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c3e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c3e8 jne 0x1294c3f6 */
  if (!C.zf) goto L_1294c3f6;
  /* 1294c3ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1294c3ec call 0x1294c550 */
  push32(0x1294c3f1u); f_1294c550();
  /* 1294c3f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c3f4 jmp 0x1294c420 */
  goto L_1294c420;
L_1294c3f6:;
  /* 1294c3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1294c3fa call 0x1294b960 */
  push32(0x1294c3ffu); f_1294b960();
  /* 1294c3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c405 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c406 call 0x1294c430 */
  push32(0x1294c40bu); f_1294c430();
  /* 1294c40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c40e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294c411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c414 push edx */
  push32((uint32_t)(EDX));
  /* 1294c415 call 0x1294b9d0 */
  push32(0x1294c41au); f_1294b9d0();
  /* 1294c41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c41d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294c420:;
  /* 1294c420 mov esp, ebp */
  ESP = (EBP);
  /* 1294c422 pop ebp */
  EBP = (pop32());
  /* 1294c423 ret  */
  ESPCHK(0x1294c3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1294c430 (65 bytes, 26 insns) */
void f_1294c430(void) {
  FTRACE(0x1294c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c431 mov ebp, esp */
  EBP = (ESP);
  /* 1294c433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c436 push eax */
  push32((uint32_t)(EAX));
  /* 1294c437 call 0x1294c480 */
  push32(0x1294c43cu); f_1294c480();
  /* 1294c43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c43f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c441 je 0x1294c448 */
  if (C.zf) goto L_1294c448;
  /* 1294c443 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294c446 jmp 0x1294c46f */
  goto L_1294c46f;
L_1294c448:;
  /* 1294c448 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c44b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294c44e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1294c454 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294c456 je 0x1294c46d */
  if (C.zf) goto L_1294c46d;
  /* 1294c458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c45b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294c45e push ecx */
  push32((uint32_t)(ECX));
  /* 1294c45f call 0x1294d240 */
  push32(0x1294c464u); f_1294d240();
  /* 1294c464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c467 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294c469 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c46b jmp 0x1294c46f */
  goto L_1294c46f;
L_1294c46d:;
  /* 1294c46d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294c46f:;
  /* 1294c46f pop ebp */
  EBP = (pop32());
  /* 1294c470 ret  */
  ESPCHK(0x1294c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x1294c480 (183 bytes, 62 insns) */
void f_1294c480(void) {
  FTRACE(0x1294c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c480 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c481 mov ebp, esp */
  EBP = (ESP);
  /* 1294c483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c486 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294c48d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c490 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294c493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c496 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294c499 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1294c49c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c49f jne 0x1294c51b */
  if (!C.zf) goto L_1294c51b;
  /* 1294c4a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294c4a7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c4ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294c4af je 0x1294c51b */
  if (C.zf) goto L_1294c51b;
  /* 1294c4b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4b7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1294c4b9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c4bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294c4bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c4c3 jle 0x1294c51b */
  if ((C.zf||C.sf!=C.of)) goto L_1294c51b;
  /* 1294c4c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c4c8 push edx */
  push32((uint32_t)(EDX));
  /* 1294c4c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294c4cf push ecx */
  push32((uint32_t)(ECX));
  /* 1294c4d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4d3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1294c4d6 push eax */
  push32((uint32_t)(EAX));
  /* 1294c4d7 call 0x1294b3f0 */
  push32(0x1294c4dcu); f_1294b3f0();
  /* 1294c4dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c4df cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c4e2 jne 0x1294c505 */
  if (!C.zf) goto L_1294c505;
  /* 1294c4e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294c4ea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1294c4f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294c4f2 je 0x1294c503 */
  if (C.zf) goto L_1294c503;
  /* 1294c4f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c4f7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294c4fa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1294c4fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c500 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1294c503:;
  /* 1294c503 jmp 0x1294c51b */
  goto L_1294c51b;
L_1294c505:;
  /* 1294c505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c508 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294c50b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c50e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c511 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1294c514 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1294c51b:;
  /* 1294c51b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c51e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c521 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1294c524 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1294c526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294c529 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1294c530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c533 mov esp, ebp */
  ESP = (EBP);
  /* 1294c535 pop ebp */
  EBP = (pop32());
  /* 1294c536 ret  */
  ESPCHK(0x1294c480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1294c540 (15 bytes, 7 insns) */
void f_1294c540(void) {
  FTRACE(0x1294c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c541 mov ebp, esp */
  EBP = (ESP);
  /* 1294c543 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294c545 call 0x1294c550 */
  push32(0x1294c54au); f_1294c550();
  /* 1294c54a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c54d pop ebp */
  EBP = (pop32());
  /* 1294c54e ret  */
  ESPCHK(0x1294c540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c550 @ 0x1294c550 (319 bytes, 94 insns) */
void f_1294c550(void) {
  FTRACE(0x1294c550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c550 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c551 mov ebp, esp */
  EBP = (ESP);
  /* 1294c553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294c55d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294c564 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294c566 call 0x12946550 */
  push32(0x1294c56bu); f_12946550();
  /* 1294c56b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c56e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1294c575 jmp 0x1294c580 */
  goto L_1294c580;
L_1294c577:;
  /* 1294c577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c57a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c57d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1294c580:;
  /* 1294c580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c583 cmp ecx, dword ptr [0x1296fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c589 jge 0x1294c673 */
  if ((C.sf==C.of)) goto L_1294c673;
  /* 1294c58f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c592 mov eax, dword ptr [0x1296e818] */
  EAX = (r32((uint32_t)(0x1296e818)));
  /* 1294c597 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c59b je 0x1294c66e */
  if (C.zf) goto L_1294c66e;
  /* 1294c5a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c5a4 mov edx, dword ptr [0x1296e818] */
  EDX = (r32((uint32_t)(0x1296e818)));
  /* 1294c5aa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1294c5ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1294c5b0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1294c5b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294c5b8 je 0x1294c66e */
  if (C.zf) goto L_1294c66e;
  /* 1294c5be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c5c1 mov eax, dword ptr [0x1296e818] */
  EAX = (r32((uint32_t)(0x1296e818)));
  /* 1294c5c6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1294c5c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c5ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c5cd push edx */
  push32((uint32_t)(EDX));
  /* 1294c5ce call 0x1294b9a0 */
  push32(0x1294c5d3u); f_1294b9a0();
  /* 1294c5d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c5d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c5d9 mov ecx, dword ptr [0x1296e818] */
  ECX = (r32((uint32_t)(0x1296e818)));
  /* 1294c5df mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1294c5e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1294c5e5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1294c5ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c5ec je 0x1294c655 */
  if (C.zf) goto L_1294c655;
  /* 1294c5ee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c5f2 jne 0x1294c619 */
  if (!C.zf) goto L_1294c619;
  /* 1294c5f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c5f7 mov edx, dword ptr [0x1296e818] */
  EDX = (r32((uint32_t)(0x1296e818)));
  /* 1294c5fd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1294c600 push eax */
  push32((uint32_t)(EAX));
  /* 1294c601 call 0x1294c430 */
  push32(0x1294c606u); f_1294c430();
  /* 1294c606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c609 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c60c je 0x1294c617 */
  if (C.zf) goto L_1294c617;
  /* 1294c60e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c614 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1294c617:;
  /* 1294c617 jmp 0x1294c655 */
  goto L_1294c655;
L_1294c619:;
  /* 1294c619 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c61d jne 0x1294c655 */
  if (!C.zf) goto L_1294c655;
  /* 1294c61f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c622 mov eax, dword ptr [0x1296e818] */
  EAX = (r32((uint32_t)(0x1296e818)));
  /* 1294c627 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1294c62a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294c62d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1294c630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294c632 je 0x1294c655 */
  if (C.zf) goto L_1294c655;
  /* 1294c634 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c637 mov ecx, dword ptr [0x1296e818] */
  ECX = (r32((uint32_t)(0x1296e818)));
  /* 1294c63d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1294c640 push edx */
  push32((uint32_t)(EDX));
  /* 1294c641 call 0x1294c430 */
  push32(0x1294c646u); f_1294c430();
  /* 1294c646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c649 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c64c jne 0x1294c655 */
  if (!C.zf) goto L_1294c655;
  /* 1294c64e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1294c655:;
  /* 1294c655 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c658 mov ecx, dword ptr [0x1296e818] */
  ECX = (r32((uint32_t)(0x1296e818)));
  /* 1294c65e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1294c661 push edx */
  push32((uint32_t)(EDX));
  /* 1294c662 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c665 push eax */
  push32((uint32_t)(EAX));
  /* 1294c666 call 0x1294ba10 */
  push32(0x1294c66bu); f_1294ba10();
  /* 1294c66b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294c66e:;
  /* 1294c66e jmp 0x1294c577 */
  goto L_1294c577;
L_1294c673:;
  /* 1294c673 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294c675 call 0x129465f0 */
  push32(0x1294c67au); f_129465f0();
  /* 1294c67a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c67d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c681 jne 0x1294c688 */
  if (!C.zf) goto L_1294c688;
  /* 1294c683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294c686 jmp 0x1294c68b */
  goto L_1294c68b;
L_1294c688:;
  /* 1294c688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1294c68b:;
  /* 1294c68b mov esp, ebp */
  ESP = (EBP);
  /* 1294c68d pop ebp */
  EBP = (pop32());
  /* 1294c68e ret  */
  ESPCHK(0x1294c550u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1294c690 (15 bytes, 7 insns) */
void f_1294c690(void) {
  FTRACE(0x1294c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c691 mov ebp, esp */
  EBP = (ESP);
  /* 1294c693 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294c695 call 0x12941ac0 */
  push32(0x1294c69au); f_12941ac0();
  /* 1294c69a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c69d pop ebp */
  EBP = (pop32());
  /* 1294c69e ret  */
  ESPCHK(0x1294c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a0 @ 0x1294c6a0 (1007 bytes, 269 insns) */
void f_1294c6a0(void) {
  FTRACE(0x1294c6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294c6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294c6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1294c6a3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c6a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c6ad jl 0x1294c6b5 */
  if ((C.sf!=C.of)) goto L_1294c6b5;
  /* 1294c6af cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c6b3 jle 0x1294c6bc */
  if ((C.zf||C.sf!=C.of)) goto L_1294c6bc;
L_1294c6b5:;
  /* 1294c6b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294c6b7 jmp 0x1294ca8b */
  goto L_1294ca8b;
L_1294c6bc:;
  /* 1294c6bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294c6be call 0x12946550 */
  push32(0x1294c6c3u); f_12946550();
  /* 1294c6c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c6c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1294c6cd mov eax, dword ptr [0x1296e804] */
  EAX = (r32((uint32_t)(0x1296e804)));
  /* 1294c6d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c6d5 mov dword ptr [0x1296e804], eax */
  w32((uint32_t)(0x1296e804), (EAX));
L_1294c6da:;
  /* 1294c6da cmp dword ptr [0x1296e814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c6e1 je 0x1294c6ed */
  if (C.zf) goto L_1294c6ed;
  /* 1294c6e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294c6e5 call dword ptr [0x12970338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970338))), 0x1294c6ebu);
  /* 1294c6eb jmp 0x1294c6da */
  goto L_1294c6da;
L_1294c6ed:;
  /* 1294c6ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c6f1 je 0x1294c731 */
  if (C.zf) goto L_1294c731;
  /* 1294c6f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c6f7 je 0x1294c711 */
  if (C.zf) goto L_1294c711;
  /* 1294c6f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c6fc push ecx */
  push32((uint32_t)(ECX));
  /* 1294c6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c700 push edx */
  push32((uint32_t)(EDX));
  /* 1294c701 call 0x1294ca90 */
  push32(0x1294c706u); f_1294ca90();
  /* 1294c706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c709 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1294c70f jmp 0x1294c723 */
  goto L_1294c723;
L_1294c711:;
  /* 1294c711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c714 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c717 mov ecx, dword ptr [eax + 0x1296d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1296d4dc)));
  /* 1294c71d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1294c723:;
  /* 1294c723 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1294c729 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294c72c jmp 0x1294ca6b */
  goto L_1294ca6b;
L_1294c731:;
  /* 1294c731 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1294c738 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1294c73f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c743 je 0x1294ca63 */
  if (C.zf) goto L_1294ca63;
  /* 1294c749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c74c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294c74f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c752 jne 0x1294c974 */
  if (!C.zf) goto L_1294c974;
  /* 1294c758 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c75b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1294c75f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c762 jne 0x1294c974 */
  if (!C.zf) goto L_1294c974;
  /* 1294c768 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c76b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1294c76f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c772 jne 0x1294c974 */
  if (!C.zf) goto L_1294c974;
  /* 1294c778 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c77b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1294c781:;
  /* 1294c781 push 0x12969fb4 */
  push32((uint32_t)(0x12969fb4u));
  /* 1294c786 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1294c78c push ecx */
  push32((uint32_t)(ECX));
  /* 1294c78d call 0x1294e8f0 */
  push32(0x1294c792u); f_1294e8f0();
  /* 1294c792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c795 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1294c79b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c7a2 je 0x1294c7cd */
  if (C.zf) goto L_1294c7cd;
  /* 1294c7a4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c7aa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c7b0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1294c7b6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c7bd je 0x1294c7cd */
  if (C.zf) goto L_1294c7cd;
  /* 1294c7bf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c7c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294c7c8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c7cb jne 0x1294c7f3 */
  if (!C.zf) goto L_1294c7f3;
L_1294c7cd:;
  /* 1294c7cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c7d1 je 0x1294c7ec */
  if (C.zf) goto L_1294c7ec;
  /* 1294c7d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294c7d5 call 0x129465f0 */
  push32(0x1294c7dau); f_129465f0();
  /* 1294c7da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c7dd mov edx, dword ptr [0x1296e804] */
  EDX = (r32((uint32_t)(0x1296e804)));
  /* 1294c7e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c7e6 mov dword ptr [0x1296e804], edx */
  w32((uint32_t)(0x1296e804), (EDX));
L_1294c7ec:;
  /* 1294c7ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294c7ee jmp 0x1294ca8b */
  goto L_1294ca8b;
L_1294c7f3:;
  /* 1294c7f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1294c7fa jmp 0x1294c805 */
  goto L_1294c805;
L_1294c7fc:;
  /* 1294c7fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c7ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c802 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1294c805:;
  /* 1294c805 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c809 jg 0x1294c853 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294c853;
  /* 1294c80b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1294c811 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c812 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1294c818 push edx */
  push32((uint32_t)(EDX));
  /* 1294c819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c81c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c81f mov ecx, dword ptr [eax + 0x1296d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1296d4d8)));
  /* 1294c825 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c826 call 0x1294e8b0 */
  push32(0x1294c82bu); f_1294e8b0();
  /* 1294c82b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c830 jne 0x1294c851 */
  if (!C.zf) goto L_1294c851;
  /* 1294c832 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c835 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c838 mov eax, dword ptr [edx + 0x1296d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1296d4d8)));
  /* 1294c83e push eax */
  push32((uint32_t)(EAX));
  /* 1294c83f call 0x12945980 */
  push32(0x1294c844u); f_12945980();
  /* 1294c844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c847 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c84d jne 0x1294c851 */
  if (!C.zf) goto L_1294c851;
  /* 1294c84f jmp 0x1294c853 */
  goto L_1294c853;
L_1294c851:;
  /* 1294c851 jmp 0x1294c7fc */
  goto L_1294c7fc;
L_1294c853:;
  /* 1294c853 push 0x12969fb0 */
  push32((uint32_t)(0x12969fb0u));
  /* 1294c858 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c85e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c861 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1294c867 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c86d push edx */
  push32((uint32_t)(EDX));
  /* 1294c86e call 0x1294e870 */
  push32(0x1294c873u); f_1294e870();
  /* 1294c873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c876 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1294c87c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c883 jne 0x1294c8b9 */
  if (!C.zf) goto L_1294c8b9;
  /* 1294c885 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c88b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294c88e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c891 je 0x1294c8b9 */
  if (C.zf) goto L_1294c8b9;
  /* 1294c893 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c897 je 0x1294c8b2 */
  if (C.zf) goto L_1294c8b2;
  /* 1294c899 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294c89b call 0x129465f0 */
  push32(0x1294c8a0u); f_129465f0();
  /* 1294c8a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c8a3 mov edx, dword ptr [0x1296e804] */
  EDX = (r32((uint32_t)(0x1296e804)));
  /* 1294c8a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294c8ac mov dword ptr [0x1296e804], edx */
  w32((uint32_t)(0x1296e804), (EDX));
L_1294c8b2:;
  /* 1294c8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294c8b4 jmp 0x1294ca8b */
  goto L_1294ca8b;
L_1294c8b9:;
  /* 1294c8b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c8bd jg 0x1294c90a */
  if ((!C.zf&&C.sf==C.of)) goto L_1294c90a;
  /* 1294c8bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1294c8c5 push eax */
  push32((uint32_t)(EAX));
  /* 1294c8c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c8cc push ecx */
  push32((uint32_t)(ECX));
  /* 1294c8cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1294c8d3 push edx */
  push32((uint32_t)(EDX));
  /* 1294c8d4 call 0x12946370 */
  push32(0x1294c8d9u); f_12946370();
  /* 1294c8d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c8dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1294c8e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1294c8ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1294c8f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c8f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c8f4 push edx */
  push32((uint32_t)(EDX));
  /* 1294c8f5 call 0x1294ca90 */
  push32(0x1294c8fau); f_1294ca90();
  /* 1294c8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c8fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c8ff je 0x1294c90a */
  if (C.zf) goto L_1294c90a;
  /* 1294c901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c907 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1294c90a:;
  /* 1294c90a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294c910 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c916 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1294c91c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1294c922 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294c925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c927 je 0x1294c938 */
  if (C.zf) goto L_1294c938;
  /* 1294c929 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1294c92f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c932 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1294c938:;
  /* 1294c938 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1294c93e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294c941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c943 jne 0x1294c781 */
  if (!C.zf) goto L_1294c781;
  /* 1294c949 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c94d je 0x1294c95c */
  if (C.zf) goto L_1294c95c;
  /* 1294c94f call 0x1294cc30 */
  push32(0x1294c954u); f_1294cc30();
  /* 1294c954 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1294c95a jmp 0x1294c966 */
  goto L_1294c966;
L_1294c95c:;
  /* 1294c95c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1294c966:;
  /* 1294c966 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1294c96c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294c96f jmp 0x1294ca61 */
  goto L_1294ca61;
L_1294c974:;
  /* 1294c974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294c977 push edx */
  push32((uint32_t)(EDX));
  /* 1294c978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294c97a push 0 */
  push32((uint32_t)(0x0u));
  /* 1294c97c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1294c982 push eax */
  push32((uint32_t)(EAX));
  /* 1294c983 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294c986 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c987 call 0x1294cd30 */
  push32(0x1294c98cu); f_1294cd30();
  /* 1294c98c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c98f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294c992 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c996 je 0x1294ca61 */
  if (C.zf) goto L_1294ca61;
  /* 1294c99c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294c9a3 jmp 0x1294c9ae */
  goto L_1294c9ae;
L_1294c9a5:;
  /* 1294c9a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c9a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c9ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1294c9ae:;
  /* 1294c9ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c9b2 jg 0x1294ca10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294ca10;
  /* 1294c9b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294c9b8 je 0x1294ca0e */
  if (C.zf) goto L_1294ca0e;
  /* 1294c9ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c9bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294c9c0 mov ecx, dword ptr [eax + 0x1296d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1296d4dc)));
  /* 1294c9c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c9c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1294c9cd push edx */
  push32((uint32_t)(EDX));
  /* 1294c9ce call 0x1294e7e0 */
  push32(0x1294c9d3u); f_1294e7e0();
  /* 1294c9d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c9d8 je 0x1294ca05 */
  if (C.zf) goto L_1294ca05;
  /* 1294c9da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1294c9e0 push eax */
  push32((uint32_t)(EAX));
  /* 1294c9e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294c9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294c9e5 call 0x1294ca90 */
  push32(0x1294c9eau); f_1294ca90();
  /* 1294c9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294c9ef je 0x1294c9fc */
  if (C.zf) goto L_1294c9fc;
  /* 1294c9f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294c9f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294c9f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1294c9fa jmp 0x1294ca03 */
  goto L_1294ca03;
L_1294c9fc:;
  /* 1294c9fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1294ca03:;
  /* 1294ca03 jmp 0x1294ca0e */
  goto L_1294ca0e;
L_1294ca05:;
  /* 1294ca05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294ca08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ca0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1294ca0e:;
  /* 1294ca0e jmp 0x1294c9a5 */
  goto L_1294c9a5;
L_1294ca10:;
  /* 1294ca10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ca14 je 0x1294ca3b */
  if (C.zf) goto L_1294ca3b;
  /* 1294ca16 call 0x1294cc30 */
  push32(0x1294ca1bu); f_1294cc30();
  /* 1294ca1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294ca1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1294ca20 mov ecx, dword ptr [0x1296d4dc] */
  ECX = (r32((uint32_t)(0x1296d4dc)));
  /* 1294ca26 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ca27 call 0x129435e0 */
  push32(0x1294ca2cu); f_129435e0();
  /* 1294ca2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ca2f mov dword ptr [0x1296d4dc], 0 */
  w32((uint32_t)(0x1296d4dc), (0x0u));
  /* 1294ca39 jmp 0x1294ca61 */
  goto L_1294ca61;
L_1294ca3b:;
  /* 1294ca3b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ca3f je 0x1294ca4e */
  if (C.zf) goto L_1294ca4e;
  /* 1294ca41 call 0x1294cc30 */
  push32(0x1294ca46u); f_1294cc30();
  /* 1294ca46 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1294ca4c jmp 0x1294ca58 */
  goto L_1294ca58;
L_1294ca4e:;
  /* 1294ca4e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1294ca58:;
  /* 1294ca58 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1294ca5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1294ca61:;
  /* 1294ca61 jmp 0x1294ca6b */
  goto L_1294ca6b;
L_1294ca63:;
  /* 1294ca63 call 0x1294cc30 */
  push32(0x1294ca68u); f_1294cc30();
  /* 1294ca68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1294ca6b:;
  /* 1294ca6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ca6f je 0x1294ca88 */
  if (C.zf) goto L_1294ca88;
  /* 1294ca71 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1294ca73 call 0x129465f0 */
  push32(0x1294ca78u); f_129465f0();
  /* 1294ca78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ca7b mov eax, dword ptr [0x1296e804] */
  EAX = (r32((uint32_t)(0x1296e804)));
  /* 1294ca80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ca83 mov dword ptr [0x1296e804], eax */
  w32((uint32_t)(0x1296e804), (EAX));
L_1294ca88:;
  /* 1294ca88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1294ca8b:;
  /* 1294ca8b mov esp, ebp */
  ESP = (EBP);
  /* 1294ca8d pop ebp */
  EBP = (pop32());
  /* 1294ca8e ret  */
  ESPCHK(0x1294c6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x1294ca90 (403 bytes, 117 insns) */
void f_1294ca90(void) {
  FTRACE(0x1294ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ca91 mov ebp, esp */
  EBP = (ESP);
  /* 1294ca93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ca99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ca9c push eax */
  push32((uint32_t)(EAX));
  /* 1294ca9d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1294caa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294caa4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1294caaa push edx */
  push32((uint32_t)(EDX));
  /* 1294caab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1294cab1 push eax */
  push32((uint32_t)(EAX));
  /* 1294cab2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cab5 push ecx */
  push32((uint32_t)(ECX));
  /* 1294cab6 call 0x1294cd30 */
  push32(0x1294cabbu); f_1294cd30();
  /* 1294cabb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cabe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cac0 jne 0x1294cac9 */
  if (!C.zf) goto L_1294cac9;
  /* 1294cac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cac4 jmp 0x1294cc1f */
  goto L_1294cc1f;
L_1294cac9:;
  /* 1294cac9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1294cace push 0x12969fb8 */
  push32((uint32_t)(0x12969fb8u));
  /* 1294cad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294cad5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1294cadb push edx */
  push32((uint32_t)(EDX));
  /* 1294cadc call 0x12945980 */
  push32(0x1294cae1u); f_12945980();
  /* 1294cae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cae7 push eax */
  push32((uint32_t)(EAX));
  /* 1294cae8 call 0x12942b50 */
  push32(0x1294caedu); f_12942b50();
  /* 1294caed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294caf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294caf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294caf7 jne 0x1294cb00 */
  if (!C.zf) goto L_1294cb00;
  /* 1294caf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cafb jmp 0x1294cc1f */
  goto L_1294cc1f;
L_1294cb00:;
  /* 1294cb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cb03 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cb06 mov ecx, dword ptr [eax + 0x1296d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1296d4dc)));
  /* 1294cb0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294cb0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cb12 mov eax, dword ptr [edx*4 + 0x1296e680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296e680)));
  /* 1294cb19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294cb1c push 6 */
  push32((uint32_t)(0x6u));
  /* 1294cb1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cb21 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cb24 add ecx, 0x1296e6d0 */
  { uint32_t _a=(ECX),_b=(0x1296e6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cb2a push ecx */
  push32((uint32_t)(ECX));
  /* 1294cb2b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1294cb2e push edx */
  push32((uint32_t)(EDX));
  /* 1294cb2f call 0x12949430 */
  push32(0x1294cb34u); f_12949430();
  /* 1294cb34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cb37 mov eax, dword ptr [0x1296e698] */
  EAX = (r32((uint32_t)(0x1296e698)));
  /* 1294cb3c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1294cb3f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1294cb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1294cb46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294cb49 push edx */
  push32((uint32_t)(EDX));
  /* 1294cb4a call 0x12945b00 */
  push32(0x1294cb4fu); f_12945b00();
  /* 1294cb4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cb52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cb55 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cb58 mov dword ptr [ecx + 0x1296d4dc], eax */
  w32((uint32_t)(ECX + 0x1296d4dc), (EAX));
  /* 1294cb5e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1294cb64 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294cb6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cb6d mov dword ptr [eax*4 + 0x1296e680], edx */
  w32((uint32_t)(EAX*4 + 0x1296e680), (EDX));
  /* 1294cb74 push 6 */
  push32((uint32_t)(0x6u));
  /* 1294cb76 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1294cb7c push ecx */
  push32((uint32_t)(ECX));
  /* 1294cb7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cb80 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cb83 add edx, 0x1296e6d0 */
  { uint32_t _a=(EDX),_b=(0x1296e6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cb89 push edx */
  push32((uint32_t)(EDX));
  /* 1294cb8a call 0x12949430 */
  push32(0x1294cb8fu); f_12949430();
  /* 1294cb8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cb92 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cb96 jne 0x1294cba3 */
  if (!C.zf) goto L_1294cba3;
  /* 1294cb98 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294cb9e mov dword ptr [0x1296e698], eax */
  w32((uint32_t)(0x1296e698), (EAX));
L_1294cba3:;
  /* 1294cba3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cba7 jne 0x1294cbb5 */
  if (!C.zf) goto L_1294cbb5;
  /* 1294cba9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1294cbaf mov dword ptr [0x1296e69c], ecx */
  w32((uint32_t)(0x1296e69c), (ECX));
L_1294cbb5:;
  /* 1294cbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cbb8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cbbb call dword ptr [edx + 0x1296d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1296d4e0))), 0x1294cbc1u);
  /* 1294cbc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cbc3 je 0x1294cbfc */
  if (C.zf) goto L_1294cbfc;
  /* 1294cbc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cbc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cbcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294cbce mov dword ptr [eax + 0x1296d4dc], ecx */
  w32((uint32_t)(EAX + 0x1296d4dc), (ECX));
  /* 1294cbd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294cbd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294cbd9 push edx */
  push32((uint32_t)(EDX));
  /* 1294cbda call 0x129435e0 */
  push32(0x1294cbdfu); f_129435e0();
  /* 1294cbdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cbe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cbe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cbe8 mov dword ptr [eax*4 + 0x1296e680], ecx */
  w32((uint32_t)(EAX*4 + 0x1296e680), (ECX));
  /* 1294cbef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294cbf2 mov dword ptr [0x1296e698], edx */
  w32((uint32_t)(0x1296e698), (EDX));
  /* 1294cbf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cbfa jmp 0x1294cc1f */
  goto L_1294cc1f;
L_1294cbfc:;
  /* 1294cbfc cmp dword ptr [ebp - 0xc], 0x1296d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1296d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cc03 je 0x1294cc13 */
  if (C.zf) goto L_1294cc13;
  /* 1294cc05 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294cc07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294cc0a push eax */
  push32((uint32_t)(EAX));
  /* 1294cc0b call 0x129435e0 */
  push32(0x1294cc10u); f_129435e0();
  /* 1294cc10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294cc13:;
  /* 1294cc13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cc16 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cc19 mov eax, dword ptr [ecx + 0x1296d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1296d4dc)));
L_1294cc1f:;
  /* 1294cc1f mov esp, ebp */
  ESP = (EBP);
  /* 1294cc21 pop ebp */
  EBP = (pop32());
  /* 1294cc22 ret  */
  ESPCHK(0x1294ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x1294cc30 (256 bytes, 72 insns) */
void f_1294cc30(void) {
  FTRACE(0x1294cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1294cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1294cc33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294cc36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1294cc3d cmp dword ptr [0x1296d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cc44 jne 0x1294cc64 */
  if (!C.zf) goto L_1294cc64;
  /* 1294cc46 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1294cc4b push 0x12969fb8 */
  push32((uint32_t)(0x12969fb8u));
  /* 1294cc50 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294cc52 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1294cc57 call 0x12942b50 */
  push32(0x1294cc5cu); f_12942b50();
  /* 1294cc5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cc5f mov dword ptr [0x1296d4dc], eax */
  w32((uint32_t)(0x1296d4dc), (EAX));
L_1294cc64:;
  /* 1294cc64 mov eax, dword ptr [0x1296d4dc] */
  EAX = (r32((uint32_t)(0x1296d4dc)));
  /* 1294cc69 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1294cc6c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1294cc73 jmp 0x1294cc7e */
  goto L_1294cc7e;
L_1294cc75:;
  /* 1294cc75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cc78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cc7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1294cc7e:;
  /* 1294cc7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cc81 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cc84 mov eax, dword ptr [edx + 0x1296d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1296d4dc)));
  /* 1294cc8a push eax */
  push32((uint32_t)(EAX));
  /* 1294cc8b push 0x12969fc4 */
  push32((uint32_t)(0x12969fc4u));
  /* 1294cc90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cc93 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294cc96 mov edx, dword ptr [ecx + 0x1296d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1296d4d8)));
  /* 1294cc9c push edx */
  push32((uint32_t)(EDX));
  /* 1294cc9d push 3 */
  push32((uint32_t)(0x3u));
  /* 1294cc9f mov eax, dword ptr [0x1296d4dc] */
  EAX = (r32((uint32_t)(0x1296d4dc)));
  /* 1294cca4 push eax */
  push32((uint32_t)(EAX));
  /* 1294cca5 call 0x1294ced0 */
  push32(0x1294ccaau); f_1294ced0();
  /* 1294ccaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ccad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ccb1 jge 0x1294ccf9 */
  if ((C.sf==C.of)) goto L_1294ccf9;
  /* 1294ccb3 push 0x12969fb0 */
  push32((uint32_t)(0x12969fb0u));
  /* 1294ccb8 mov ecx, dword ptr [0x1296d4dc] */
  ECX = (r32((uint32_t)(0x1296d4dc)));
  /* 1294ccbe push ecx */
  push32((uint32_t)(ECX));
  /* 1294ccbf call 0x12945b10 */
  push32(0x1294ccc4u); f_12945b10();
  /* 1294ccc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ccc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294ccca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cccd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294ccd0 mov eax, dword ptr [edx + 0x1296d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1296d4dc)));
  /* 1294ccd6 push eax */
  push32((uint32_t)(EAX));
  /* 1294ccd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294ccda imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294ccdd mov edx, dword ptr [ecx + 0x1296d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1296d4dc)));
  /* 1294cce3 push edx */
  push32((uint32_t)(EDX));
  /* 1294cce4 call 0x1294e7e0 */
  push32(0x1294cce9u); f_1294e7e0();
  /* 1294cce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ccec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ccee je 0x1294ccf7 */
  if (C.zf) goto L_1294ccf7;
  /* 1294ccf0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1294ccf7:;
  /* 1294ccf7 jmp 0x1294cd27 */
  goto L_1294cd27;
L_1294ccf9:;
  /* 1294ccf9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ccfd jne 0x1294cd06 */
  if (!C.zf) goto L_1294cd06;
  /* 1294ccff mov eax, dword ptr [0x1296d4dc] */
  EAX = (r32((uint32_t)(0x1296d4dc)));
  /* 1294cd04 jmp 0x1294cd2c */
  goto L_1294cd2c;
L_1294cd06:;
  /* 1294cd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294cd08 mov eax, dword ptr [0x1296d4dc] */
  EAX = (r32((uint32_t)(0x1296d4dc)));
  /* 1294cd0d push eax */
  push32((uint32_t)(EAX));
  /* 1294cd0e call 0x129435e0 */
  push32(0x1294cd13u); f_129435e0();
  /* 1294cd13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cd16 mov dword ptr [0x1296d4dc], 0 */
  w32((uint32_t)(0x1296d4dc), (0x0u));
  /* 1294cd20 mov eax, dword ptr [0x1296d4f4] */
  EAX = (r32((uint32_t)(0x1296d4f4)));
  /* 1294cd25 jmp 0x1294cd2c */
  goto L_1294cd2c;
L_1294cd27:;
  /* 1294cd27 jmp 0x1294cc75 */
  goto L_1294cc75;
L_1294cd2c:;
  /* 1294cd2c mov esp, ebp */
  ESP = (EBP);
  /* 1294cd2e pop ebp */
  EBP = (pop32());
  /* 1294cd2f ret  */
  ESPCHK(0x1294cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x1294cd30 (388 bytes, 115 insns) */
void f_1294cd30(void) {
  FTRACE(0x1294cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1294cd31 mov ebp, esp */
  EBP = (ESP);
  /* 1294cd33 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294cd39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cd3d jne 0x1294cd46 */
  if (!C.zf) goto L_1294cd46;
  /* 1294cd3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cd41 jmp 0x1294ceb0 */
  goto L_1294ceb0;
L_1294cd46:;
  /* 1294cd46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cd49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294cd4c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cd4f jne 0x1294cda0 */
  if (!C.zf) goto L_1294cda0;
  /* 1294cd51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cd54 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1294cd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cd5a jne 0x1294cda0 */
  if (!C.zf) goto L_1294cda0;
  /* 1294cd5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cd5f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1294cd62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cd65 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1294cd69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cd6d je 0x1294cd89 */
  if (C.zf) goto L_1294cd89;
  /* 1294cd6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294cd72 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1294cd77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294cd7a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1294cd80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294cd83 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1294cd89:;
  /* 1294cd89 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cd8d je 0x1294cd98 */
  if (C.zf) goto L_1294cd98;
  /* 1294cd8f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294cd92 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1294cd98:;
  /* 1294cd98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cd9b jmp 0x1294ceb0 */
  goto L_1294ceb0;
L_1294cda0:;
  /* 1294cda0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cda3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294cda4 push 0x1296d450 */
  push32((uint32_t)(0x1296d450u));
  /* 1294cda9 call 0x1294e7e0 */
  push32(0x1294cdaeu); f_1294e7e0();
  /* 1294cdae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cdb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cdb3 je 0x1294ce68 */
  if (C.zf) goto L_1294ce68;
  /* 1294cdb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cdbc push edx */
  push32((uint32_t)(EDX));
  /* 1294cdbd push 0x1296d3cc */
  push32((uint32_t)(0x1296d3ccu));
  /* 1294cdc2 call 0x1294e7e0 */
  push32(0x1294cdc7u); f_1294e7e0();
  /* 1294cdc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cdca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cdcc je 0x1294ce68 */
  if (C.zf) goto L_1294ce68;
  /* 1294cdd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cdd5 push eax */
  push32((uint32_t)(EAX));
  /* 1294cdd6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1294cddc push ecx */
  push32((uint32_t)(ECX));
  /* 1294cddd call 0x1294cf20 */
  push32(0x1294cde2u); f_1294cf20();
  /* 1294cde2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cde7 je 0x1294cdf0 */
  if (C.zf) goto L_1294cdf0;
  /* 1294cde9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cdeb jmp 0x1294ceb0 */
  goto L_1294ceb0;
L_1294cdf0:;
  /* 1294cdf0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1294cdf6 push edx */
  push32((uint32_t)(EDX));
  /* 1294cdf7 push 0x1296e6a8 */
  push32((uint32_t)(0x1296e6a8u));
  /* 1294cdfc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1294ce02 push eax */
  push32((uint32_t)(EAX));
  /* 1294ce03 call 0x1294e930 */
  push32(0x1294ce08u); f_1294e930();
  /* 1294ce08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ce0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ce0d jne 0x1294ce16 */
  if (!C.zf) goto L_1294ce16;
  /* 1294ce0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294ce11 jmp 0x1294ceb0 */
  goto L_1294ceb0;
L_1294ce16:;
  /* 1294ce16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294ce18 mov cx, word ptr [0x1296e6ac] */
  CX = (r16((uint32_t)(0x1296e6ac)));
  /* 1294ce1f mov dword ptr [0x1296e6b0], ecx */
  w32((uint32_t)(0x1296e6b0), (ECX));
  /* 1294ce25 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1294ce2b push edx */
  push32((uint32_t)(EDX));
  /* 1294ce2c push 0x1296d450 */
  push32((uint32_t)(0x1296d450u));
  /* 1294ce31 call 0x1294d080 */
  push32(0x1294ce36u); f_1294d080();
  /* 1294ce36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ce39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ce3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294ce3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294ce41 je 0x1294ce56 */
  if (C.zf) goto L_1294ce56;
  /* 1294ce43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ce46 push edx */
  push32((uint32_t)(EDX));
  /* 1294ce47 push 0x1296d3cc */
  push32((uint32_t)(0x1296d3ccu));
  /* 1294ce4c call 0x12945b00 */
  push32(0x1294ce51u); f_12945b00();
  /* 1294ce51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ce54 jmp 0x1294ce68 */
  goto L_1294ce68;
L_1294ce56:;
  /* 1294ce56 push 0x1296d450 */
  push32((uint32_t)(0x1296d450u));
  /* 1294ce5b push 0x1296d3cc */
  push32((uint32_t)(0x1296d3ccu));
  /* 1294ce60 call 0x12945b00 */
  push32(0x1294ce65u); f_12945b00();
  /* 1294ce65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294ce68:;
  /* 1294ce68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ce6c je 0x1294ce81 */
  if (C.zf) goto L_1294ce81;
  /* 1294ce6e push 6 */
  push32((uint32_t)(0x6u));
  /* 1294ce70 push 0x1296e6a8 */
  push32((uint32_t)(0x1296e6a8u));
  /* 1294ce75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ce78 push eax */
  push32((uint32_t)(EAX));
  /* 1294ce79 call 0x12949430 */
  push32(0x1294ce7eu); f_12949430();
  /* 1294ce7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294ce81:;
  /* 1294ce81 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ce85 je 0x1294ce9a */
  if (C.zf) goto L_1294ce9a;
  /* 1294ce87 push 4 */
  push32((uint32_t)(0x4u));
  /* 1294ce89 push 0x1296e6b0 */
  push32((uint32_t)(0x1296e6b0u));
  /* 1294ce8e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294ce91 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ce92 call 0x12949430 */
  push32(0x1294ce97u); f_12949430();
  /* 1294ce97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294ce9a:;
  /* 1294ce9a push 0x1296d450 */
  push32((uint32_t)(0x1296d450u));
  /* 1294ce9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cea2 push edx */
  push32((uint32_t)(EDX));
  /* 1294cea3 call 0x12945b00 */
  push32(0x1294cea8u); f_12945b00();
  /* 1294cea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ceab mov eax, 0x1296d450 */
  EAX = (0x1296d450u);
L_1294ceb0:;
  /* 1294ceb0 mov esp, ebp */
  ESP = (EBP);
  /* 1294ceb2 pop ebp */
  EBP = (pop32());
  /* 1294ceb3 ret  */
  ESPCHK(0x1294cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x1294cec0 (7 bytes, 5 insns) */
void f_1294cec0(void) {
  FTRACE(0x1294cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294cec1 mov ebp, esp */
  EBP = (ESP);
  /* 1294cec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cec5 pop ebp */
  EBP = (pop32());
  /* 1294cec6 ret  */
  ESPCHK(0x1294cec0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1294ced0 (79 bytes, 28 insns) */
void f_1294ced0(void) {
  FTRACE(0x1294ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ced1 mov ebp, esp */
  EBP = (ESP);
  /* 1294ced3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ced6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1294ced9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294cedc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294cee3 jmp 0x1294ceee */
  goto L_1294ceee;
L_1294cee5:;
  /* 1294cee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294cee8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ceeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1294ceee:;
  /* 1294ceee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294cef1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cef4 jge 0x1294cf14 */
  if ((C.sf==C.of)) goto L_1294cf14;
  /* 1294cef6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cef9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cefc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294ceff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cf02 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1294cf05 push edx */
  push32((uint32_t)(EDX));
  /* 1294cf06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cf09 push eax */
  push32((uint32_t)(EAX));
  /* 1294cf0a call 0x12945b10 */
  push32(0x1294cf0fu); f_12945b10();
  /* 1294cf0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cf12 jmp 0x1294cee5 */
  goto L_1294cee5;
L_1294cf14:;
  /* 1294cf14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294cf1b mov esp, ebp */
  ESP = (EBP);
  /* 1294cf1d pop ebp */
  EBP = (pop32());
  /* 1294cf1e ret  */
  ESPCHK(0x1294ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x1294cf20 (349 bytes, 122 insns) */
void f_1294cf20(void) {
  FTRACE(0x1294cf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294cf20 push ebp */
  push32((uint32_t)(EBP));
  /* 1294cf21 mov ebp, esp */
  EBP = (ESP);
  /* 1294cf23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294cf26 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1294cf2b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294cf2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cf30 push eax */
  push32((uint32_t)(EAX));
  /* 1294cf31 call 0x129468c0 */
  push32(0x1294cf36u); f_129468c0();
  /* 1294cf36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cf39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cf3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294cf3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294cf41 jne 0x1294cf4a */
  if (!C.zf) goto L_1294cf4a;
  /* 1294cf43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cf45 jmp 0x1294d079 */
  goto L_1294d079;
L_1294cf4a:;
  /* 1294cf4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cf4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294cf50 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cf53 jne 0x1294cf80 */
  if (!C.zf) goto L_1294cf80;
  /* 1294cf55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cf58 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1294cf5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294cf5e je 0x1294cf80 */
  if (C.zf) goto L_1294cf80;
  /* 1294cf60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cf63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cf66 push ecx */
  push32((uint32_t)(ECX));
  /* 1294cf67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cf6a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cf70 push edx */
  push32((uint32_t)(EDX));
  /* 1294cf71 call 0x12945b00 */
  push32(0x1294cf76u); f_12945b00();
  /* 1294cf76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cf79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294cf7b jmp 0x1294d079 */
  goto L_1294d079;
L_1294cf80:;
  /* 1294cf80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294cf87 jmp 0x1294cf92 */
  goto L_1294cf92;
L_1294cf89:;
  /* 1294cf89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294cf8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cf8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294cf92:;
  /* 1294cf92 push 0x12969fc8 */
  push32((uint32_t)(0x12969fc8u));
  /* 1294cf97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cf9a push ecx */
  push32((uint32_t)(ECX));
  /* 1294cf9b call 0x1294e870 */
  push32(0x1294cfa0u); f_1294e870();
  /* 1294cfa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cfa3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294cfa6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cfaa jne 0x1294cfb4 */
  if (!C.zf) goto L_1294cfb4;
  /* 1294cfac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294cfaf jmp 0x1294d079 */
  goto L_1294d079;
L_1294cfb4:;
  /* 1294cfb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cfb7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cfba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294cfbc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1294cfbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cfc3 jne 0x1294cfea */
  if (!C.zf) goto L_1294cfea;
  /* 1294cfc5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cfc9 jge 0x1294cfea */
  if ((C.sf==C.of)) goto L_1294cfea;
  /* 1294cfcb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294cfcf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cfd2 je 0x1294cfea */
  if (C.zf) goto L_1294cfea;
  /* 1294cfd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294cfd7 push edx */
  push32((uint32_t)(EDX));
  /* 1294cfd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294cfdb push eax */
  push32((uint32_t)(EAX));
  /* 1294cfdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294cfdf push ecx */
  push32((uint32_t)(ECX));
  /* 1294cfe0 call 0x12946370 */
  push32(0x1294cfe5u); f_12946370();
  /* 1294cfe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294cfe8 jmp 0x1294d050 */
  goto L_1294d050;
L_1294cfea:;
  /* 1294cfea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cfee jne 0x1294d018 */
  if (!C.zf) goto L_1294d018;
  /* 1294cff0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cff4 jge 0x1294d018 */
  if ((C.sf==C.of)) goto L_1294d018;
  /* 1294cff6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294cffa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294cffd je 0x1294d018 */
  if (C.zf) goto L_1294d018;
  /* 1294cfff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d002 push eax */
  push32((uint32_t)(EAX));
  /* 1294d003 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d006 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d00a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d00d push edx */
  push32((uint32_t)(EDX));
  /* 1294d00e call 0x12946370 */
  push32(0x1294d013u); f_12946370();
  /* 1294d013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d016 jmp 0x1294d050 */
  goto L_1294d050;
L_1294d018:;
  /* 1294d018 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d01c jne 0x1294d04b */
  if (!C.zf) goto L_1294d04b;
  /* 1294d01e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294d022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d024 je 0x1294d02f */
  if (C.zf) goto L_1294d02f;
  /* 1294d026 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294d02a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d02d jne 0x1294d04b */
  if (!C.zf) goto L_1294d04b;
L_1294d02f:;
  /* 1294d02f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d032 push edx */
  push32((uint32_t)(EDX));
  /* 1294d033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d036 push eax */
  push32((uint32_t)(EAX));
  /* 1294d037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d03a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d040 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d041 call 0x12946370 */
  push32(0x1294d046u); f_12946370();
  /* 1294d046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d049 jmp 0x1294d050 */
  goto L_1294d050;
L_1294d04b:;
  /* 1294d04b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294d04e jmp 0x1294d079 */
  goto L_1294d079;
L_1294d050:;
  /* 1294d050 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294d054 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d057 jne 0x1294d05b */
  if (!C.zf) goto L_1294d05b;
  /* 1294d059 jmp 0x1294d077 */
  goto L_1294d077;
L_1294d05b:;
  /* 1294d05b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294d05f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d061 jne 0x1294d065 */
  if (!C.zf) goto L_1294d065;
  /* 1294d063 jmp 0x1294d077 */
  goto L_1294d077;
L_1294d065:;
  /* 1294d065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d06b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1294d06f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1294d072 jmp 0x1294cf89 */
  goto L_1294cf89;
L_1294d077:;
  /* 1294d077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294d079:;
  /* 1294d079 mov esp, ebp */
  ESP = (EBP);
  /* 1294d07b pop ebp */
  EBP = (pop32());
  /* 1294d07c ret  */
  ESPCHK(0x1294cf20u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1294d080 (101 bytes, 36 insns) */
void f_1294d080(void) {
  FTRACE(0x1294d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d080 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d081 mov ebp, esp */
  EBP = (ESP);
  /* 1294d083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d086 push eax */
  push32((uint32_t)(EAX));
  /* 1294d087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d08a push ecx */
  push32((uint32_t)(ECX));
  /* 1294d08b call 0x12945b00 */
  push32(0x1294d090u); f_12945b00();
  /* 1294d090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d096 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1294d09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d09c je 0x1294d0b8 */
  if (C.zf) goto L_1294d0b8;
  /* 1294d09e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d0a1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d0a5 push 0x12969fd0 */
  push32((uint32_t)(0x12969fd0u));
  /* 1294d0aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d0ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d0af push edx */
  push32((uint32_t)(EDX));
  /* 1294d0b0 call 0x1294ced0 */
  push32(0x1294d0b5u); f_1294ced0();
  /* 1294d0b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294d0b8:;
  /* 1294d0b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d0bb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1294d0c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294d0c4 je 0x1294d0e3 */
  if (C.zf) goto L_1294d0e3;
  /* 1294d0c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294d0c9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d0cf push edx */
  push32((uint32_t)(EDX));
  /* 1294d0d0 push 0x12969fcc */
  push32((uint32_t)(0x12969fccu));
  /* 1294d0d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d0da push eax */
  push32((uint32_t)(EAX));
  /* 1294d0db call 0x1294ced0 */
  push32(0x1294d0e0u); f_1294ced0();
  /* 1294d0e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294d0e3:;
  /* 1294d0e3 pop ebp */
  EBP = (pop32());
  /* 1294d0e4 ret  */
  ESPCHK(0x1294d080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x1294d0f0 (130 bytes, 50 insns) */
void f_1294d0f0(void) {
  FTRACE(0x1294d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1294d0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d0f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1294d0f5 push esi */
  push32((uint32_t)(ESI));
  /* 1294d0f6 push edi */
  push32((uint32_t)(EDI));
  /* 1294d0f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1294d0fe:;
  /* 1294d0fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d102 jne 0x1294d122 */
  if (!C.zf) goto L_1294d122;
  /* 1294d104 push 0x12969fe0 */
  push32((uint32_t)(0x12969fe0u));
  /* 1294d109 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294d10b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1294d10d push 0x12969fd4 */
  push32((uint32_t)(0x12969fd4u));
  /* 1294d112 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d114 call 0x12941c10 */
  push32(0x1294d119u); f_12941c10();
  /* 1294d119 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d11c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d11f jne 0x1294d122 */
  if (!C.zf) goto L_1294d122;
  /* 1294d121 int3  */
  x86_unimpl("int3 @ 0x1294d121");
L_1294d122:;
  /* 1294d122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294d124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d126 jne 0x1294d0fe */
  if (!C.zf) goto L_1294d0fe;
  /* 1294d128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d12b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294d12e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1294d131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294d133 je 0x1294d141 */
  if (C.zf) goto L_1294d141;
  /* 1294d135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d138 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1294d13f jmp 0x1294d168 */
  goto L_1294d168;
L_1294d141:;
  /* 1294d141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d144 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d145 call 0x1294b960 */
  push32(0x1294d14au); f_1294b960();
  /* 1294d14a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d150 push edx */
  push32((uint32_t)(EDX));
  /* 1294d151 call 0x1294d180 */
  push32(0x1294d156u); f_1294d180();
  /* 1294d156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d159 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294d15c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d15f push eax */
  push32((uint32_t)(EAX));
  /* 1294d160 call 0x1294b9d0 */
  push32(0x1294d165u); f_1294b9d0();
  /* 1294d165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294d168:;
  /* 1294d168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d16b pop edi */
  EDI = (pop32());
  /* 1294d16c pop esi */
  ESI = (pop32());
  /* 1294d16d pop ebx */
  EBX = (pop32());
  /* 1294d16e mov esp, ebp */
  ESP = (EBP);
  /* 1294d170 pop ebp */
  EBP = (pop32());
  /* 1294d171 ret  */
  ESPCHK(0x1294d0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x1294d180 (190 bytes, 67 insns) */
void f_1294d180(void) {
  FTRACE(0x1294d180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d180 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d181 mov ebp, esp */
  EBP = (ESP);
  /* 1294d183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294d186 push ebx */
  push32((uint32_t)(EBX));
  /* 1294d187 push esi */
  push32((uint32_t)(ESI));
  /* 1294d188 push edi */
  push32((uint32_t)(EDI));
  /* 1294d189 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1294d190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d193 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1294d196:;
  /* 1294d196 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d19a jne 0x1294d1ba */
  if (!C.zf) goto L_1294d1ba;
  /* 1294d19c push 0x12969e84 */
  push32((uint32_t)(0x12969e84u));
  /* 1294d1a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294d1a3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1294d1a5 push 0x12969fd4 */
  push32((uint32_t)(0x12969fd4u));
  /* 1294d1aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d1ac call 0x12941c10 */
  push32(0x1294d1b1u); f_12941c10();
  /* 1294d1b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d1b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d1b7 jne 0x1294d1ba */
  if (!C.zf) goto L_1294d1ba;
  /* 1294d1b9 int3  */
  x86_unimpl("int3 @ 0x1294d1b9");
L_1294d1ba:;
  /* 1294d1ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d1bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294d1be jne 0x1294d196 */
  if (!C.zf) goto L_1294d196;
  /* 1294d1c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d1c3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1294d1c6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1294d1cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d1cd je 0x1294d22a */
  if (C.zf) goto L_1294d22a;
  /* 1294d1cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d1d3 call 0x1294c480 */
  push32(0x1294d1d8u); f_1294c480();
  /* 1294d1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d1db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294d1de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d1e1 push edx */
  push32((uint32_t)(EDX));
  /* 1294d1e2 call 0x1294f800 */
  push32(0x1294d1e7u); f_1294f800();
  /* 1294d1e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d1ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d1ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294d1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d1f1 call 0x1294f6d0 */
  push32(0x1294d1f6u); f_1294f6d0();
  /* 1294d1f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d1fb jge 0x1294d206 */
  if ((C.sf==C.of)) goto L_1294d206;
  /* 1294d1fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1294d204 jmp 0x1294d22a */
  goto L_1294d22a;
L_1294d206:;
  /* 1294d206 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d209 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d20d je 0x1294d22a */
  if (C.zf) goto L_1294d22a;
  /* 1294d20f push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d214 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1294d217 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d218 call 0x129435e0 */
  push32(0x1294d21du); f_129435e0();
  /* 1294d21d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d220 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d223 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1294d22a:;
  /* 1294d22a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d22d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1294d234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d237 pop edi */
  EDI = (pop32());
  /* 1294d238 pop esi */
  ESI = (pop32());
  /* 1294d239 pop ebx */
  EBX = (pop32());
  /* 1294d23a mov esp, ebp */
  ESP = (EBP);
  /* 1294d23c pop ebp */
  EBP = (pop32());
  /* 1294d23d ret  */
  ESPCHK(0x1294d180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x1294d240 (210 bytes, 63 insns) */
void f_1294d240(void) {
  FTRACE(0x1294d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d240 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d241 mov ebp, esp */
  EBP = (ESP);
  /* 1294d243 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d247 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d24d jae 0x1294d271 */
  if (!C.cf) goto L_1294d271;
  /* 1294d24f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d252 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294d255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d258 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294d25b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294d25e mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294d265 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294d26a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294d26d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294d26f jne 0x1294d284 */
  if (!C.zf) goto L_1294d284;
L_1294d271:;
  /* 1294d271 call 0x1294aa20 */
  push32(0x1294d276u); f_1294aa20();
  /* 1294d276 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294d27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294d27f jmp 0x1294d30e */
  goto L_1294d30e;
L_1294d284:;
  /* 1294d284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d287 push edx */
  push32((uint32_t)(EDX));
  /* 1294d288 call 0x1294c240 */
  push32(0x1294d28du); f_1294c240();
  /* 1294d28d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d293 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1294d296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d299 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294d29c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294d29f mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 1294d2a6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1294d2ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1294d2ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d2b0 je 0x1294d2ed */
  if (C.zf) goto L_1294d2ed;
  /* 1294d2b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d2b6 call 0x1294c0c0 */
  push32(0x1294d2bbu); f_1294c0c0();
  /* 1294d2bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d2be push eax */
  push32((uint32_t)(EAX));
  /* 1294d2bf call dword ptr [0x1297033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297033c))), 0x1294d2c5u);
  /* 1294d2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d2c7 jne 0x1294d2d4 */
  if (!C.zf) goto L_1294d2d4;
  /* 1294d2c9 call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294d2cfu);
  /* 1294d2cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294d2d2 jmp 0x1294d2db */
  goto L_1294d2db;
L_1294d2d4:;
  /* 1294d2d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1294d2db:;
  /* 1294d2db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d2df jne 0x1294d2e3 */
  if (!C.zf) goto L_1294d2e3;
  /* 1294d2e1 jmp 0x1294d2ff */
  goto L_1294d2ff;
L_1294d2e3:;
  /* 1294d2e3 call 0x1294aa30 */
  push32(0x1294d2e8u); f_1294aa30();
  /* 1294d2e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d2eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1294d2ed:;
  /* 1294d2ed call 0x1294aa20 */
  push32(0x1294d2f2u); f_1294aa20();
  /* 1294d2f2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294d2f8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1294d2ff:;
  /* 1294d2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d302 push eax */
  push32((uint32_t)(EAX));
  /* 1294d303 call 0x1294c2d0 */
  push32(0x1294d308u); f_1294c2d0();
  /* 1294d308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294d30e:;
  /* 1294d30e mov esp, ebp */
  ESP = (EBP);
  /* 1294d310 pop ebp */
  EBP = (pop32());
  /* 1294d311 ret  */
  ESPCHK(0x1294d240u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1294d320 (219 bytes, 64 insns) */
void f_1294d320(void) {
  FTRACE(0x1294d320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d320 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d321 mov ebp, esp */
  EBP = (ESP);
  /* 1294d323 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d324 cmp dword ptr [0x1296e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d32b je 0x1294d3c1 */
  if (C.zf) goto L_1294d3c1;
  /* 1294d331 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1294d333 push 0x12969ff0 */
  push32((uint32_t)(0x12969ff0u));
  /* 1294d338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d33a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1294d33f push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d341 call 0x12942f60 */
  push32(0x1294d346u); f_12942f60();
  /* 1294d346 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d349 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294d34c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d350 jne 0x1294d35c */
  if (!C.zf) goto L_1294d35c;
  /* 1294d352 mov eax, 1 */
  EAX = (0x1u);
  /* 1294d357 jmp 0x1294d3f7 */
  goto L_1294d3f7;
L_1294d35c:;
  /* 1294d35c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d35f push eax */
  push32((uint32_t)(EAX));
  /* 1294d360 call 0x1294d400 */
  push32(0x1294d365u); f_1294d400();
  /* 1294d365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294d36a je 0x1294d38d */
  if (C.zf) goto L_1294d38d;
  /* 1294d36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d36f push ecx */
  push32((uint32_t)(ECX));
  /* 1294d370 call 0x1294d990 */
  push32(0x1294d375u); f_1294d990();
  /* 1294d375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d378 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d37a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d37d push edx */
  push32((uint32_t)(EDX));
  /* 1294d37e call 0x129435e0 */
  push32(0x1294d383u); f_129435e0();
  /* 1294d383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d386 mov eax, 1 */
  EAX = (0x1u);
  /* 1294d38b jmp 0x1294d3f7 */
  goto L_1294d3f7;
L_1294d38d:;
  /* 1294d38d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d390 mov dword ptr [0x1296dc98], eax */
  w32((uint32_t)(0x1296dc98), (EAX));
  /* 1294d395 mov ecx, dword ptr [0x1296e6b4] */
  ECX = (r32((uint32_t)(0x1296e6b4)));
  /* 1294d39b push ecx */
  push32((uint32_t)(ECX));
  /* 1294d39c call 0x1294d990 */
  push32(0x1294d3a1u); f_1294d990();
  /* 1294d3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d3a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d3a6 mov edx, dword ptr [0x1296e6b4] */
  EDX = (r32((uint32_t)(0x1296e6b4)));
  /* 1294d3ac push edx */
  push32((uint32_t)(EDX));
  /* 1294d3ad call 0x129435e0 */
  push32(0x1294d3b2u); f_129435e0();
  /* 1294d3b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d3b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d3b8 mov dword ptr [0x1296e6b4], eax */
  w32((uint32_t)(0x1296e6b4), (EAX));
  /* 1294d3bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294d3bf jmp 0x1294d3f7 */
  goto L_1294d3f7;
L_1294d3c1:;
  /* 1294d3c1 mov dword ptr [0x1296dc98], 0x1296dca0 */
  w32((uint32_t)(0x1296dc98), (0x1296dca0u));
  /* 1294d3cb mov ecx, dword ptr [0x1296e6b4] */
  ECX = (r32((uint32_t)(0x1296e6b4)));
  /* 1294d3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d3d2 call 0x1294d990 */
  push32(0x1294d3d7u); f_1294d990();
  /* 1294d3d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d3da push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d3dc mov edx, dword ptr [0x1296e6b4] */
  EDX = (r32((uint32_t)(0x1296e6b4)));
  /* 1294d3e2 push edx */
  push32((uint32_t)(EDX));
  /* 1294d3e3 call 0x129435e0 */
  push32(0x1294d3e8u); f_129435e0();
  /* 1294d3e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d3eb mov dword ptr [0x1296e6b4], 0 */
  w32((uint32_t)(0x1296e6b4), (0x0u));
  /* 1294d3f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294d3f7:;
  /* 1294d3f7 mov esp, ebp */
  ESP = (EBP);
  /* 1294d3f9 pop ebp */
  EBP = (pop32());
  /* 1294d3fa ret  */
  ESPCHK(0x1294d320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x1294d400 (1423 bytes, 533 insns) */
void f_1294d400(void) {
  FTRACE(0x1294d400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d400 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d401 mov ebp, esp */
  EBP = (ESP);
  /* 1294d403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294d406 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1294d40d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294d40f mov ax, word ptr [0x1296e6ee] */
  AX = (r16((uint32_t)(0x1296e6ee)));
  /* 1294d415 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294d418 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d41a mov cx, word ptr [0x1296e6f0] */
  CX = (r16((uint32_t)(0x1296e6f0)));
  /* 1294d421 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294d424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d428 jne 0x1294d432 */
  if (!C.zf) goto L_1294d432;
  /* 1294d42a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294d42d jmp 0x1294d98b */
  goto L_1294d98b;
L_1294d432:;
  /* 1294d432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d435 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d438 push edx */
  push32((uint32_t)(EDX));
  /* 1294d439 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1294d43b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d43e push eax */
  push32((uint32_t)(EAX));
  /* 1294d43f push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d441 call 0x12950d10 */
  push32(0x1294d446u); f_12950d10();
  /* 1294d446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d44c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d44e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d454 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d457 push edx */
  push32((uint32_t)(EDX));
  /* 1294d458 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1294d45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d45d push eax */
  push32((uint32_t)(EAX));
  /* 1294d45e push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d460 call 0x12950d10 */
  push32(0x1294d465u); f_12950d10();
  /* 1294d465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d46b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d46d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d473 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d476 push edx */
  push32((uint32_t)(EDX));
  /* 1294d477 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1294d479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d47c push eax */
  push32((uint32_t)(EAX));
  /* 1294d47d push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d47f call 0x12950d10 */
  push32(0x1294d484u); f_12950d10();
  /* 1294d484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d48a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d492 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d495 push edx */
  push32((uint32_t)(EDX));
  /* 1294d496 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1294d498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d49b push eax */
  push32((uint32_t)(EAX));
  /* 1294d49c push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d49e call 0x12950d10 */
  push32(0x1294d4a3u); f_12950d10();
  /* 1294d4a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d4a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d4a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d4ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d4ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d4b1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d4b4 push edx */
  push32((uint32_t)(EDX));
  /* 1294d4b5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1294d4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d4ba push eax */
  push32((uint32_t)(EAX));
  /* 1294d4bb push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d4bd call 0x12950d10 */
  push32(0x1294d4c2u); f_12950d10();
  /* 1294d4c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d4c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d4c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d4ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d4d0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d4d3 push edx */
  push32((uint32_t)(EDX));
  /* 1294d4d4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1294d4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d4d9 push eax */
  push32((uint32_t)(EAX));
  /* 1294d4da push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d4dc call 0x12950d10 */
  push32(0x1294d4e1u); f_12950d10();
  /* 1294d4e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d4e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d4e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d4ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d4ef push edx */
  push32((uint32_t)(EDX));
  /* 1294d4f0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1294d4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d4f5 push eax */
  push32((uint32_t)(EAX));
  /* 1294d4f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d4f8 call 0x12950d10 */
  push32(0x1294d4fdu); f_12950d10();
  /* 1294d4fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d500 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d503 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d505 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d50b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d50e push edx */
  push32((uint32_t)(EDX));
  /* 1294d50f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1294d511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d514 push eax */
  push32((uint32_t)(EAX));
  /* 1294d515 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d517 call 0x12950d10 */
  push32(0x1294d51cu); f_12950d10();
  /* 1294d51c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d522 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d524 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d52a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d52d push edx */
  push32((uint32_t)(EDX));
  /* 1294d52e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1294d530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d533 push eax */
  push32((uint32_t)(EAX));
  /* 1294d534 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d536 call 0x12950d10 */
  push32(0x1294d53bu); f_12950d10();
  /* 1294d53b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d53e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d541 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d549 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d54c push edx */
  push32((uint32_t)(EDX));
  /* 1294d54d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1294d54f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d552 push eax */
  push32((uint32_t)(EAX));
  /* 1294d553 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d555 call 0x12950d10 */
  push32(0x1294d55au); f_12950d10();
  /* 1294d55a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d55d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d560 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d562 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d568 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d56b push edx */
  push32((uint32_t)(EDX));
  /* 1294d56c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1294d56e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d571 push eax */
  push32((uint32_t)(EAX));
  /* 1294d572 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d574 call 0x12950d10 */
  push32(0x1294d579u); f_12950d10();
  /* 1294d579 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d57c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d57f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d581 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d587 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d58a push edx */
  push32((uint32_t)(EDX));
  /* 1294d58b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1294d58d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d590 push eax */
  push32((uint32_t)(EAX));
  /* 1294d591 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d593 call 0x12950d10 */
  push32(0x1294d598u); f_12950d10();
  /* 1294d598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d59b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d59e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d5a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d5a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d5a6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d5a9 push edx */
  push32((uint32_t)(EDX));
  /* 1294d5aa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1294d5ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d5af push eax */
  push32((uint32_t)(EAX));
  /* 1294d5b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d5b2 call 0x12950d10 */
  push32(0x1294d5b7u); f_12950d10();
  /* 1294d5b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d5ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d5bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d5bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d5c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d5c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1294d5c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1294d5cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d5ce push eax */
  push32((uint32_t)(EAX));
  /* 1294d5cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d5d1 call 0x12950d10 */
  push32(0x1294d5d6u); f_12950d10();
  /* 1294d5d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d5d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d5dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d5de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d5e4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d5e7 push edx */
  push32((uint32_t)(EDX));
  /* 1294d5e8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1294d5ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d5ed push eax */
  push32((uint32_t)(EAX));
  /* 1294d5ee push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d5f0 call 0x12950d10 */
  push32(0x1294d5f5u); f_12950d10();
  /* 1294d5f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d5f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d5fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d5fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d603 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d606 push edx */
  push32((uint32_t)(EDX));
  /* 1294d607 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1294d609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d60c push eax */
  push32((uint32_t)(EAX));
  /* 1294d60d push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d60f call 0x12950d10 */
  push32(0x1294d614u); f_12950d10();
  /* 1294d614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d617 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d61a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d61c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d622 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d625 push edx */
  push32((uint32_t)(EDX));
  /* 1294d626 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1294d628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d62b push eax */
  push32((uint32_t)(EAX));
  /* 1294d62c push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d62e call 0x12950d10 */
  push32(0x1294d633u); f_12950d10();
  /* 1294d633 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d639 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d63b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d641 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d644 push edx */
  push32((uint32_t)(EDX));
  /* 1294d645 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1294d647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d64a push eax */
  push32((uint32_t)(EAX));
  /* 1294d64b push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d64d call 0x12950d10 */
  push32(0x1294d652u); f_12950d10();
  /* 1294d652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d655 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d658 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d65a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d65d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d660 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d663 push edx */
  push32((uint32_t)(EDX));
  /* 1294d664 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1294d666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d669 push eax */
  push32((uint32_t)(EAX));
  /* 1294d66a push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d66c call 0x12950d10 */
  push32(0x1294d671u); f_12950d10();
  /* 1294d671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d677 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d679 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d67c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d67f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d682 push edx */
  push32((uint32_t)(EDX));
  /* 1294d683 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1294d685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d688 push eax */
  push32((uint32_t)(EAX));
  /* 1294d689 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d68b call 0x12950d10 */
  push32(0x1294d690u); f_12950d10();
  /* 1294d690 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d693 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d696 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d698 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d69e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6a1 push edx */
  push32((uint32_t)(EDX));
  /* 1294d6a2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1294d6a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d6a7 push eax */
  push32((uint32_t)(EAX));
  /* 1294d6a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d6aa call 0x12950d10 */
  push32(0x1294d6afu); f_12950d10();
  /* 1294d6af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d6b5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d6b7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d6ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d6bd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6c0 push edx */
  push32((uint32_t)(EDX));
  /* 1294d6c1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1294d6c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d6c6 push eax */
  push32((uint32_t)(EAX));
  /* 1294d6c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d6c9 call 0x12950d10 */
  push32(0x1294d6ceu); f_12950d10();
  /* 1294d6ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d6d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d6d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d6dc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6df push edx */
  push32((uint32_t)(EDX));
  /* 1294d6e0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1294d6e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d6e5 push eax */
  push32((uint32_t)(EAX));
  /* 1294d6e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d6e8 call 0x12950d10 */
  push32(0x1294d6edu); f_12950d10();
  /* 1294d6ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d6f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d6f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d6f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d6fb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d6fe push edx */
  push32((uint32_t)(EDX));
  /* 1294d6ff push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1294d701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d704 push eax */
  push32((uint32_t)(EAX));
  /* 1294d705 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d707 call 0x12950d10 */
  push32(0x1294d70cu); f_12950d10();
  /* 1294d70c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d70f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d712 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d714 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d71a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d71d push edx */
  push32((uint32_t)(EDX));
  /* 1294d71e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1294d720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d723 push eax */
  push32((uint32_t)(EAX));
  /* 1294d724 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d726 call 0x12950d10 */
  push32(0x1294d72bu); f_12950d10();
  /* 1294d72b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d72e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d731 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d736 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d739 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d73c push edx */
  push32((uint32_t)(EDX));
  /* 1294d73d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1294d73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d742 push eax */
  push32((uint32_t)(EAX));
  /* 1294d743 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d745 call 0x12950d10 */
  push32(0x1294d74au); f_12950d10();
  /* 1294d74a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d74d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d750 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d752 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d758 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d75b push edx */
  push32((uint32_t)(EDX));
  /* 1294d75c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1294d75e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d761 push eax */
  push32((uint32_t)(EAX));
  /* 1294d762 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d764 call 0x12950d10 */
  push32(0x1294d769u); f_12950d10();
  /* 1294d769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d76c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d76f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d771 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d777 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d77a push edx */
  push32((uint32_t)(EDX));
  /* 1294d77b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1294d77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d780 push eax */
  push32((uint32_t)(EAX));
  /* 1294d781 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d783 call 0x12950d10 */
  push32(0x1294d788u); f_12950d10();
  /* 1294d788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d796 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d799 push edx */
  push32((uint32_t)(EDX));
  /* 1294d79a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1294d79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d79f push eax */
  push32((uint32_t)(EAX));
  /* 1294d7a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d7a2 call 0x12950d10 */
  push32(0x1294d7a7u); f_12950d10();
  /* 1294d7a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d7aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d7ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d7af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d7b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d7b5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1294d7b9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1294d7bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d7be push eax */
  push32((uint32_t)(EAX));
  /* 1294d7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d7c1 call 0x12950d10 */
  push32(0x1294d7c6u); f_12950d10();
  /* 1294d7c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d7c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d7cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d7ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d7d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d7d4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1294d7d8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1294d7da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d7dd push eax */
  push32((uint32_t)(EAX));
  /* 1294d7de push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d7e0 call 0x12950d10 */
  push32(0x1294d7e5u); f_12950d10();
  /* 1294d7e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d7e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d7eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d7ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d7f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d7f3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d7f6 push edx */
  push32((uint32_t)(EDX));
  /* 1294d7f7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1294d7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d7fc push eax */
  push32((uint32_t)(EAX));
  /* 1294d7fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d7ff call 0x12950d10 */
  push32(0x1294d804u); f_12950d10();
  /* 1294d804 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d807 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d80a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d80c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d80f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d812 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d818 push edx */
  push32((uint32_t)(EDX));
  /* 1294d819 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1294d81b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d81e push eax */
  push32((uint32_t)(EAX));
  /* 1294d81f push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d821 call 0x12950d10 */
  push32(0x1294d826u); f_12950d10();
  /* 1294d826 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d829 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d82c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d82e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d834 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d83a push edx */
  push32((uint32_t)(EDX));
  /* 1294d83b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1294d83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d840 push eax */
  push32((uint32_t)(EAX));
  /* 1294d841 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d843 call 0x12950d10 */
  push32(0x1294d848u); f_12950d10();
  /* 1294d848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d84b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d84e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d850 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d856 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d85c push edx */
  push32((uint32_t)(EDX));
  /* 1294d85d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1294d85f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d862 push eax */
  push32((uint32_t)(EAX));
  /* 1294d863 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d865 call 0x12950d10 */
  push32(0x1294d86au); f_12950d10();
  /* 1294d86a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d870 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d872 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d878 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d87e push edx */
  push32((uint32_t)(EDX));
  /* 1294d87f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1294d881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d884 push eax */
  push32((uint32_t)(EAX));
  /* 1294d885 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d887 call 0x12950d10 */
  push32(0x1294d88cu); f_12950d10();
  /* 1294d88c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d88f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d892 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d894 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d897 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d89a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d8a0 push edx */
  push32((uint32_t)(EDX));
  /* 1294d8a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1294d8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d8a6 push eax */
  push32((uint32_t)(EAX));
  /* 1294d8a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d8a9 call 0x12950d10 */
  push32(0x1294d8aeu); f_12950d10();
  /* 1294d8ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d8b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d8b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d8b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d8bc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d8c2 push edx */
  push32((uint32_t)(EDX));
  /* 1294d8c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1294d8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d8c8 push eax */
  push32((uint32_t)(EAX));
  /* 1294d8c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d8cb call 0x12950d10 */
  push32(0x1294d8d0u); f_12950d10();
  /* 1294d8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d8d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d8d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d8d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d8de add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d8e4 push edx */
  push32((uint32_t)(EDX));
  /* 1294d8e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1294d8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d8ea push eax */
  push32((uint32_t)(EAX));
  /* 1294d8eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d8ed call 0x12950d10 */
  push32(0x1294d8f2u); f_12950d10();
  /* 1294d8f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d8f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d8f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d8fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d8fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d900 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d906 push edx */
  push32((uint32_t)(EDX));
  /* 1294d907 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1294d909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294d90c push eax */
  push32((uint32_t)(EAX));
  /* 1294d90d push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d90f call 0x12950d10 */
  push32(0x1294d914u); f_12950d10();
  /* 1294d914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d917 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d91a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d91c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d91f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d922 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d928 push edx */
  push32((uint32_t)(EDX));
  /* 1294d929 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1294d92b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d92e push eax */
  push32((uint32_t)(EAX));
  /* 1294d92f push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d931 call 0x12950d10 */
  push32(0x1294d936u); f_12950d10();
  /* 1294d936 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d939 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d93c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d93e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d944 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d94a push edx */
  push32((uint32_t)(EDX));
  /* 1294d94b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1294d94d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d950 push eax */
  push32((uint32_t)(EAX));
  /* 1294d951 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d953 call 0x12950d10 */
  push32(0x1294d958u); f_12950d10();
  /* 1294d958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d95b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d95e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d960 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d966 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d96c push edx */
  push32((uint32_t)(EDX));
  /* 1294d96d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1294d972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294d975 push eax */
  push32((uint32_t)(EAX));
  /* 1294d976 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294d978 call 0x12950d10 */
  push32(0x1294d97du); f_12950d10();
  /* 1294d97d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294d983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294d985 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294d988 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1294d98b:;
  /* 1294d98b mov esp, ebp */
  ESP = (EBP);
  /* 1294d98d pop ebp */
  EBP = (pop32());
  /* 1294d98e ret  */
  ESPCHK(0x1294d400u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1294d990 (779 bytes, 265 insns) */
void f_1294d990(void) {
  FTRACE(0x1294d990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294d990 push ebp */
  push32((uint32_t)(EBP));
  /* 1294d991 mov ebp, esp */
  EBP = (ESP);
  /* 1294d993 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294d997 jne 0x1294d99e */
  if (!C.zf) goto L_1294d99e;
  /* 1294d999 jmp 0x1294dc99 */
  goto L_1294dc99;
L_1294d99e:;
  /* 1294d99e push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d9a3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294d9a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d9a7 call 0x129435e0 */
  push32(0x1294d9acu); f_129435e0();
  /* 1294d9ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d9af push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d9b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d9b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1294d9b7 push eax */
  push32((uint32_t)(EAX));
  /* 1294d9b8 call 0x129435e0 */
  push32(0x1294d9bdu); f_129435e0();
  /* 1294d9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d9c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d9c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294d9c8 push edx */
  push32((uint32_t)(EDX));
  /* 1294d9c9 call 0x129435e0 */
  push32(0x1294d9ceu); f_129435e0();
  /* 1294d9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d9d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d9d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d9d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294d9d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1294d9da call 0x129435e0 */
  push32(0x1294d9dfu); f_129435e0();
  /* 1294d9df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d9e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d9e7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1294d9ea push eax */
  push32((uint32_t)(EAX));
  /* 1294d9eb call 0x129435e0 */
  push32(0x1294d9f0u); f_129435e0();
  /* 1294d9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294d9f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294d9f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294d9f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1294d9fb push edx */
  push32((uint32_t)(EDX));
  /* 1294d9fc call 0x129435e0 */
  push32(0x1294da01u); f_129435e0();
  /* 1294da01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294da0b push ecx */
  push32((uint32_t)(ECX));
  /* 1294da0c call 0x129435e0 */
  push32(0x1294da11u); f_129435e0();
  /* 1294da11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da19 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1294da1c push eax */
  push32((uint32_t)(EAX));
  /* 1294da1d call 0x129435e0 */
  push32(0x1294da22u); f_129435e0();
  /* 1294da22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da2a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1294da2d push edx */
  push32((uint32_t)(EDX));
  /* 1294da2e call 0x129435e0 */
  push32(0x1294da33u); f_129435e0();
  /* 1294da33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da3b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1294da3e push ecx */
  push32((uint32_t)(ECX));
  /* 1294da3f call 0x129435e0 */
  push32(0x1294da44u); f_129435e0();
  /* 1294da44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da47 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da4c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1294da4f push eax */
  push32((uint32_t)(EAX));
  /* 1294da50 call 0x129435e0 */
  push32(0x1294da55u); f_129435e0();
  /* 1294da55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da5d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1294da60 push edx */
  push32((uint32_t)(EDX));
  /* 1294da61 call 0x129435e0 */
  push32(0x1294da66u); f_129435e0();
  /* 1294da66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da6e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1294da71 push ecx */
  push32((uint32_t)(ECX));
  /* 1294da72 call 0x129435e0 */
  push32(0x1294da77u); f_129435e0();
  /* 1294da77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da7f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1294da82 push eax */
  push32((uint32_t)(EAX));
  /* 1294da83 call 0x129435e0 */
  push32(0x1294da88u); f_129435e0();
  /* 1294da88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294da90 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1294da93 push edx */
  push32((uint32_t)(EDX));
  /* 1294da94 call 0x129435e0 */
  push32(0x1294da99u); f_129435e0();
  /* 1294da99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294da9c push 2 */
  push32((uint32_t)(0x2u));
  /* 1294da9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294daa1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1294daa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294daa5 call 0x129435e0 */
  push32(0x1294daaau); f_129435e0();
  /* 1294daaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294daad push 2 */
  push32((uint32_t)(0x2u));
  /* 1294daaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dab2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1294dab5 push eax */
  push32((uint32_t)(EAX));
  /* 1294dab6 call 0x129435e0 */
  push32(0x1294dabbu); f_129435e0();
  /* 1294dabb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dabe push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dac3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1294dac6 push edx */
  push32((uint32_t)(EDX));
  /* 1294dac7 call 0x129435e0 */
  push32(0x1294daccu); f_129435e0();
  /* 1294dacc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dacf push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dad4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1294dad7 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dad8 call 0x129435e0 */
  push32(0x1294daddu); f_129435e0();
  /* 1294dadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dae5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1294dae8 push eax */
  push32((uint32_t)(EAX));
  /* 1294dae9 call 0x129435e0 */
  push32(0x1294daeeu); f_129435e0();
  /* 1294daee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294daf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294daf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294daf6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1294daf9 push edx */
  push32((uint32_t)(EDX));
  /* 1294dafa call 0x129435e0 */
  push32(0x1294daffu); f_129435e0();
  /* 1294daff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db07 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1294db0a push ecx */
  push32((uint32_t)(ECX));
  /* 1294db0b call 0x129435e0 */
  push32(0x1294db10u); f_129435e0();
  /* 1294db10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db13 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db18 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1294db1b push eax */
  push32((uint32_t)(EAX));
  /* 1294db1c call 0x129435e0 */
  push32(0x1294db21u); f_129435e0();
  /* 1294db21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db24 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db29 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1294db2c push edx */
  push32((uint32_t)(EDX));
  /* 1294db2d call 0x129435e0 */
  push32(0x1294db32u); f_129435e0();
  /* 1294db32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db3a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1294db3d push ecx */
  push32((uint32_t)(ECX));
  /* 1294db3e call 0x129435e0 */
  push32(0x1294db43u); f_129435e0();
  /* 1294db43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db4b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1294db4e push eax */
  push32((uint32_t)(EAX));
  /* 1294db4f call 0x129435e0 */
  push32(0x1294db54u); f_129435e0();
  /* 1294db54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db57 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db5c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1294db5f push edx */
  push32((uint32_t)(EDX));
  /* 1294db60 call 0x129435e0 */
  push32(0x1294db65u); f_129435e0();
  /* 1294db65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db68 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db6d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1294db70 push ecx */
  push32((uint32_t)(ECX));
  /* 1294db71 call 0x129435e0 */
  push32(0x1294db76u); f_129435e0();
  /* 1294db76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db79 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db7e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1294db81 push eax */
  push32((uint32_t)(EAX));
  /* 1294db82 call 0x129435e0 */
  push32(0x1294db87u); f_129435e0();
  /* 1294db87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db8a push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294db8f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1294db92 push edx */
  push32((uint32_t)(EDX));
  /* 1294db93 call 0x129435e0 */
  push32(0x1294db98u); f_129435e0();
  /* 1294db98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294db9b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294db9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dba0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1294dba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dba4 call 0x129435e0 */
  push32(0x1294dba9u); f_129435e0();
  /* 1294dba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dbac push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dbae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dbb1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1294dbb4 push eax */
  push32((uint32_t)(EAX));
  /* 1294dbb5 call 0x129435e0 */
  push32(0x1294dbbau); f_129435e0();
  /* 1294dbba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dbbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dbc2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1294dbc8 push edx */
  push32((uint32_t)(EDX));
  /* 1294dbc9 call 0x129435e0 */
  push32(0x1294dbceu); f_129435e0();
  /* 1294dbce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dbd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dbd6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1294dbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1294dbdd call 0x129435e0 */
  push32(0x1294dbe2u); f_129435e0();
  /* 1294dbe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dbe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dbea mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1294dbf0 push eax */
  push32((uint32_t)(EAX));
  /* 1294dbf1 call 0x129435e0 */
  push32(0x1294dbf6u); f_129435e0();
  /* 1294dbf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dbf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dbfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dbfe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1294dc04 push edx */
  push32((uint32_t)(EDX));
  /* 1294dc05 call 0x129435e0 */
  push32(0x1294dc0au); f_129435e0();
  /* 1294dc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc12 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1294dc18 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dc19 call 0x129435e0 */
  push32(0x1294dc1eu); f_129435e0();
  /* 1294dc1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc26 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1294dc2c push eax */
  push32((uint32_t)(EAX));
  /* 1294dc2d call 0x129435e0 */
  push32(0x1294dc32u); f_129435e0();
  /* 1294dc32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc3a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1294dc40 push edx */
  push32((uint32_t)(EDX));
  /* 1294dc41 call 0x129435e0 */
  push32(0x1294dc46u); f_129435e0();
  /* 1294dc46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc49 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc4e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1294dc54 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dc55 call 0x129435e0 */
  push32(0x1294dc5au); f_129435e0();
  /* 1294dc5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc62 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1294dc68 push eax */
  push32((uint32_t)(EAX));
  /* 1294dc69 call 0x129435e0 */
  push32(0x1294dc6eu); f_129435e0();
  /* 1294dc6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc71 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc76 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1294dc7c push edx */
  push32((uint32_t)(EDX));
  /* 1294dc7d call 0x129435e0 */
  push32(0x1294dc82u); f_129435e0();
  /* 1294dc82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dc87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dc8a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1294dc90 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dc91 call 0x129435e0 */
  push32(0x1294dc96u); f_129435e0();
  /* 1294dc96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294dc99:;
  /* 1294dc99 pop ebp */
  EBP = (pop32());
  /* 1294dc9a ret  */
  ESPCHK(0x1294d990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dca0 @ 0x1294dca0 (678 bytes, 180 insns) */
void f_1294dca0(void) {
  FTRACE(0x1294dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294dca1 mov ebp, esp */
  EBP = (ESP);
  /* 1294dca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294dca6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294dcad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294dcaf mov ax, word ptr [0x1296e6ea] */
  AX = (r16((uint32_t)(0x1296e6ea)));
  /* 1294dcb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294dcb8 cmp dword ptr [0x1296e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294dcbf je 0x1294de1a */
  if (C.zf) goto L_1294de1a;
  /* 1294dcc5 push 0x1296e6b8 */
  push32((uint32_t)(0x1296e6b8u));
  /* 1294dcca push 0xe */
  push32((uint32_t)(0xeu));
  /* 1294dccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dccf push ecx */
  push32((uint32_t)(ECX));
  /* 1294dcd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294dcd2 call 0x12950d10 */
  push32(0x1294dcd7u); f_12950d10();
  /* 1294dcd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dcda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294dcdd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1294dcdf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294dce2 push 0x1296e6bc */
  push32((uint32_t)(0x1296e6bcu));
  /* 1294dce7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1294dce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dcec push eax */
  push32((uint32_t)(EAX));
  /* 1294dced push 1 */
  push32((uint32_t)(0x1u));
  /* 1294dcef call 0x12950d10 */
  push32(0x1294dcf4u); f_12950d10();
  /* 1294dcf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dcf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294dcfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294dcfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294dcff push 0x1296e6c0 */
  push32((uint32_t)(0x1296e6c0u));
  /* 1294dd04 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1294dd06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dd09 push edx */
  push32((uint32_t)(EDX));
  /* 1294dd0a push 1 */
  push32((uint32_t)(0x1u));
  /* 1294dd0c call 0x12950d10 */
  push32(0x1294dd11u); f_12950d10();
  /* 1294dd11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dd14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294dd17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294dd19 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294dd1c mov edx, dword ptr [0x1296e6c0] */
  EDX = (r32((uint32_t)(0x1296e6c0)));
  /* 1294dd22 push edx */
  push32((uint32_t)(EDX));
  /* 1294dd23 call 0x1294df50 */
  push32(0x1294dd28u); f_1294df50();
  /* 1294dd28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dd2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294dd2f je 0x1294dd89 */
  if (C.zf) goto L_1294dd89;
  /* 1294dd31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dd33 mov eax, dword ptr [0x1296e6b8] */
  EAX = (r32((uint32_t)(0x1296e6b8)));
  /* 1294dd38 push eax */
  push32((uint32_t)(EAX));
  /* 1294dd39 call 0x129435e0 */
  push32(0x1294dd3eu); f_129435e0();
  /* 1294dd3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dd41 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dd43 mov ecx, dword ptr [0x1296e6bc] */
  ECX = (r32((uint32_t)(0x1296e6bc)));
  /* 1294dd49 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dd4a call 0x129435e0 */
  push32(0x1294dd4fu); f_129435e0();
  /* 1294dd4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dd52 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dd54 mov edx, dword ptr [0x1296e6c0] */
  EDX = (r32((uint32_t)(0x1296e6c0)));
  /* 1294dd5a push edx */
  push32((uint32_t)(EDX));
  /* 1294dd5b call 0x129435e0 */
  push32(0x1294dd60u); f_129435e0();
  /* 1294dd60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dd63 mov dword ptr [0x1296e6b8], 0 */
  w32((uint32_t)(0x1296e6b8), (0x0u));
  /* 1294dd6d mov dword ptr [0x1296e6bc], 0 */
  w32((uint32_t)(0x1296e6bc), (0x0u));
  /* 1294dd77 mov dword ptr [0x1296e6c0], 0 */
  w32((uint32_t)(0x1296e6c0), (0x0u));
  /* 1294dd81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294dd84 jmp 0x1294df42 */
  goto L_1294df42;
L_1294dd89:;
  /* 1294dd89 mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294dd8e cmp dword ptr [eax], 0x1296dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1296dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294dd94 je 0x1294ddd0 */
  if (C.zf) goto L_1294ddd0;
  /* 1294dd96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dd98 mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294dd9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294dda0 push edx */
  push32((uint32_t)(EDX));
  /* 1294dda1 call 0x129435e0 */
  push32(0x1294dda6u); f_129435e0();
  /* 1294dda6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dda9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294ddab mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294ddb0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294ddb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ddb4 call 0x129435e0 */
  push32(0x1294ddb9u); f_129435e0();
  /* 1294ddb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ddbc push 2 */
  push32((uint32_t)(0x2u));
  /* 1294ddbe mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294ddc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1294ddc7 push eax */
  push32((uint32_t)(EAX));
  /* 1294ddc8 call 0x129435e0 */
  push32(0x1294ddcdu); f_129435e0();
  /* 1294ddcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294ddd0:;
  /* 1294ddd0 mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294ddd6 mov edx, dword ptr [0x1296e6b8] */
  EDX = (r32((uint32_t)(0x1296e6b8)));
  /* 1294dddc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1294ddde mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294dde3 mov ecx, dword ptr [0x1296e6bc] */
  ECX = (r32((uint32_t)(0x1296e6bc)));
  /* 1294dde9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1294ddec mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294ddf2 mov eax, dword ptr [0x1296e6c0] */
  EAX = (r32((uint32_t)(0x1296e6c0)));
  /* 1294ddf7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1294ddfa mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294de00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294de02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294de04 mov byte ptr [0x1296cea8], al */
  w8((uint32_t)(0x1296cea8), (AL));
  /* 1294de09 mov dword ptr [0x1296ceac], 1 */
  w32((uint32_t)(0x1296ceac), (0x1u));
  /* 1294de13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294de15 jmp 0x1294df42 */
  goto L_1294df42;
L_1294de1a:;
  /* 1294de1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1294de1c mov ecx, dword ptr [0x1296e6b8] */
  ECX = (r32((uint32_t)(0x1296e6b8)));
  /* 1294de22 push ecx */
  push32((uint32_t)(ECX));
  /* 1294de23 call 0x129435e0 */
  push32(0x1294de28u); f_129435e0();
  /* 1294de28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294de2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294de2d mov edx, dword ptr [0x1296e6bc] */
  EDX = (r32((uint32_t)(0x1296e6bc)));
  /* 1294de33 push edx */
  push32((uint32_t)(EDX));
  /* 1294de34 call 0x129435e0 */
  push32(0x1294de39u); f_129435e0();
  /* 1294de39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294de3c push 2 */
  push32((uint32_t)(0x2u));
  /* 1294de3e mov eax, dword ptr [0x1296e6c0] */
  EAX = (r32((uint32_t)(0x1296e6c0)));
  /* 1294de43 push eax */
  push32((uint32_t)(EAX));
  /* 1294de44 call 0x129435e0 */
  push32(0x1294de49u); f_129435e0();
  /* 1294de49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294de4c mov dword ptr [0x1296e6b8], 0 */
  w32((uint32_t)(0x1296e6b8), (0x0u));
  /* 1294de56 mov dword ptr [0x1296e6bc], 0 */
  w32((uint32_t)(0x1296e6bc), (0x0u));
  /* 1294de60 mov dword ptr [0x1296e6c0], 0 */
  w32((uint32_t)(0x1296e6c0), (0x0u));
  /* 1294de6a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1294de6f push 0x12969ffc */
  push32((uint32_t)(0x12969ffcu));
  /* 1294de74 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294de76 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294de78 call 0x12942b50 */
  push32(0x1294de7du); f_12942b50();
  /* 1294de7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294de80 mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294de86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1294de88 mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294de8e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294de91 jne 0x1294de9b */
  if (!C.zf) goto L_1294de9b;
  /* 1294de93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294de96 jmp 0x1294df42 */
  goto L_1294df42;
L_1294de9b:;
  /* 1294de9b push 0x12969fcc */
  push32((uint32_t)(0x12969fccu));
  /* 1294dea0 mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294dea5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294dea7 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dea8 call 0x12945b00 */
  push32(0x1294deadu); f_12945b00();
  /* 1294dead add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294deb0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1294deb5 push 0x12969ffc */
  push32((uint32_t)(0x12969ffcu));
  /* 1294deba push 2 */
  push32((uint32_t)(0x2u));
  /* 1294debc push 2 */
  push32((uint32_t)(0x2u));
  /* 1294debe call 0x12942b50 */
  push32(0x1294dec3u); f_12942b50();
  /* 1294dec3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dec6 mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294decc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1294decf mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294ded4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ded8 jne 0x1294dedf */
  if (!C.zf) goto L_1294dedf;
  /* 1294deda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294dedd jmp 0x1294df42 */
  goto L_1294df42;
L_1294dedf:;
  /* 1294dedf mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294dee5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294dee8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1294deeb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1294def0 push 0x12969ffc */
  push32((uint32_t)(0x12969ffcu));
  /* 1294def5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294def7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294def9 call 0x12942b50 */
  push32(0x1294defeu); f_12942b50();
  /* 1294defe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294df01 mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294df07 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1294df0a mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294df10 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294df14 jne 0x1294df1b */
  if (!C.zf) goto L_1294df1b;
  /* 1294df16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294df19 jmp 0x1294df42 */
  goto L_1294df42;
L_1294df1b:;
  /* 1294df1b mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294df20 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294df23 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1294df26 mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294df2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1294df2e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1294df30 mov byte ptr [0x1296cea8], cl */
  w8((uint32_t)(0x1296cea8), (CL));
  /* 1294df36 mov dword ptr [0x1296ceac], 1 */
  w32((uint32_t)(0x1296ceac), (0x1u));
  /* 1294df40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294df42:;
  /* 1294df42 mov esp, ebp */
  ESP = (EBP);
  /* 1294df44 pop ebp */
  EBP = (pop32());
  /* 1294df45 ret  */
  ESPCHK(0x1294dca0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1294df50 (125 bytes, 49 insns) */
void f_1294df50(void) {
  FTRACE(0x1294df50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294df50 push ebp */
  push32((uint32_t)(EBP));
  /* 1294df51 mov ebp, esp */
  EBP = (ESP);
  /* 1294df53 push ecx */
  push32((uint32_t)(ECX));
L_1294df54:;
  /* 1294df54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294df5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294df5c je 0x1294dfc9 */
  if (C.zf) goto L_1294dfc9;
  /* 1294df5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294df64 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294df67 jl 0x1294df8d */
  if ((C.sf!=C.of)) goto L_1294df8d;
  /* 1294df69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294df6f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294df72 jg 0x1294df8d */
  if ((!C.zf&&C.sf==C.of)) goto L_1294df8d;
  /* 1294df74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294df7a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294df7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df80 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1294df82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294df88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1294df8b jmp 0x1294dfc7 */
  goto L_1294dfc7;
L_1294df8d:;
  /* 1294df8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294df93 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294df96 jne 0x1294dfbe */
  if (!C.zf) goto L_1294dfbe;
  /* 1294df98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294df9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294df9e:;
  /* 1294df9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dfa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dfa4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1294dfa7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1294dfa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dfac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dfaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294dfb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294dfb5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294dfb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294dfba jne 0x1294df9e */
  if (!C.zf) goto L_1294df9e;
  /* 1294dfbc jmp 0x1294dfc7 */
  goto L_1294dfc7;
L_1294dfbe:;
  /* 1294dfbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294dfc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dfc4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1294dfc7:;
  /* 1294dfc7 jmp 0x1294df54 */
  goto L_1294df54;
L_1294dfc9:;
  /* 1294dfc9 mov esp, ebp */
  ESP = (EBP);
  /* 1294dfcb pop ebp */
  EBP = (pop32());
  /* 1294dfcc ret  */
  ESPCHK(0x1294df50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd0 @ 0x1294dfd0 (304 bytes, 85 insns) */
void f_1294dfd0(void) {
  FTRACE(0x1294dfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294dfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294dfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1294dfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294dfd4 cmp dword ptr [0x1296e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294dfdb je 0x1294e09c */
  if (C.zf) goto L_1294e09c;
  /* 1294dfe1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1294dfe3 push 0x1296a008 */
  push32((uint32_t)(0x1296a008u));
  /* 1294dfe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294dfea push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1294dfec push 1 */
  push32((uint32_t)(0x1u));
  /* 1294dfee call 0x12942f60 */
  push32(0x1294dff3u); f_12942f60();
  /* 1294dff3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294dff6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294dff9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294dffd jne 0x1294e009 */
  if (!C.zf) goto L_1294e009;
  /* 1294dfff mov eax, 1 */
  EAX = (0x1u);
  /* 1294e004 jmp 0x1294e0fc */
  goto L_1294e0fc;
L_1294e009:;
  /* 1294e009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e00c push eax */
  push32((uint32_t)(EAX));
  /* 1294e00d call 0x1294e100 */
  push32(0x1294e012u); f_1294e100();
  /* 1294e012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e017 je 0x1294e03d */
  if (C.zf) goto L_1294e03d;
  /* 1294e019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e01c push ecx */
  push32((uint32_t)(ECX));
  /* 1294e01d call 0x1294e390 */
  push32(0x1294e022u); f_1294e390();
  /* 1294e022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e025 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e02a push edx */
  push32((uint32_t)(EDX));
  /* 1294e02b call 0x129435e0 */
  push32(0x1294e030u); f_129435e0();
  /* 1294e030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e033 mov eax, 1 */
  EAX = (0x1u);
  /* 1294e038 jmp 0x1294e0fc */
  goto L_1294e0fc;
L_1294e03d:;
  /* 1294e03d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e040 mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294e046 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294e048 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1294e04a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e04d mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294e053 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1294e056 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1294e059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e05c mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294e062 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1294e065 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1294e068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e06b mov dword ptr [0x1296dd88], eax */
  w32((uint32_t)(0x1296dd88), (EAX));
  /* 1294e070 mov ecx, dword ptr [0x1296e6c4] */
  ECX = (r32((uint32_t)(0x1296e6c4)));
  /* 1294e076 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e077 call 0x1294e390 */
  push32(0x1294e07cu); f_1294e390();
  /* 1294e07c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e07f push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e081 mov edx, dword ptr [0x1296e6c4] */
  EDX = (r32((uint32_t)(0x1296e6c4)));
  /* 1294e087 push edx */
  push32((uint32_t)(EDX));
  /* 1294e088 call 0x129435e0 */
  push32(0x1294e08du); f_129435e0();
  /* 1294e08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e093 mov dword ptr [0x1296e6c4], eax */
  w32((uint32_t)(0x1296e6c4), (EAX));
  /* 1294e098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e09a jmp 0x1294e0fc */
  goto L_1294e0fc;
L_1294e09c:;
  /* 1294e09c mov ecx, dword ptr [0x1296dd88] */
  ECX = (r32((uint32_t)(0x1296dd88)));
  /* 1294e0a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294e0a4 mov dword ptr [0x1296dd58], edx */
  w32((uint32_t)(0x1296dd58), (EDX));
  /* 1294e0aa mov eax, dword ptr [0x1296dd88] */
  EAX = (r32((uint32_t)(0x1296dd88)));
  /* 1294e0af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1294e0b2 mov dword ptr [0x1296dd5c], ecx */
  w32((uint32_t)(0x1296dd5c), (ECX));
  /* 1294e0b8 mov edx, dword ptr [0x1296dd88] */
  EDX = (r32((uint32_t)(0x1296dd88)));
  /* 1294e0be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1294e0c1 mov dword ptr [0x1296dd60], eax */
  w32((uint32_t)(0x1296dd60), (EAX));
  /* 1294e0c6 mov dword ptr [0x1296dd88], 0x1296dd58 */
  w32((uint32_t)(0x1296dd88), (0x1296dd58u));
  /* 1294e0d0 mov ecx, dword ptr [0x1296e6c4] */
  ECX = (r32((uint32_t)(0x1296e6c4)));
  /* 1294e0d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e0d7 call 0x1294e390 */
  push32(0x1294e0dcu); f_1294e390();
  /* 1294e0dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e0df push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e0e1 mov edx, dword ptr [0x1296e6c4] */
  EDX = (r32((uint32_t)(0x1296e6c4)));
  /* 1294e0e7 push edx */
  push32((uint32_t)(EDX));
  /* 1294e0e8 call 0x129435e0 */
  push32(0x1294e0edu); f_129435e0();
  /* 1294e0ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e0f0 mov dword ptr [0x1296e6c4], 0 */
  w32((uint32_t)(0x1296e6c4), (0x0u));
  /* 1294e0fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294e0fc:;
  /* 1294e0fc mov esp, ebp */
  ESP = (EBP);
  /* 1294e0fe pop ebp */
  EBP = (pop32());
  /* 1294e0ff ret  */
  ESPCHK(0x1294dfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x1294e100 (525 bytes, 200 insns) */
void f_1294e100(void) {
  FTRACE(0x1294e100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e100 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e101 mov ebp, esp */
  EBP = (ESP);
  /* 1294e103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294e106 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294e10d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e10f mov ax, word ptr [0x1296e6e4] */
  AX = (r16((uint32_t)(0x1296e6e4)));
  /* 1294e115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294e118 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e11c jne 0x1294e126 */
  if (!C.zf) goto L_1294e126;
  /* 1294e11e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294e121 jmp 0x1294e309 */
  goto L_1294e309;
L_1294e126:;
  /* 1294e126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e129 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e12c push ecx */
  push32((uint32_t)(ECX));
  /* 1294e12d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1294e12f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e132 push edx */
  push32((uint32_t)(EDX));
  /* 1294e133 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e135 call 0x12950d10 */
  push32(0x1294e13au); f_12950d10();
  /* 1294e13a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e13d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e140 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e142 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e148 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e14b push edx */
  push32((uint32_t)(EDX));
  /* 1294e14c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1294e14e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e151 push eax */
  push32((uint32_t)(EAX));
  /* 1294e152 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e154 call 0x12950d10 */
  push32(0x1294e159u); f_12950d10();
  /* 1294e159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e15c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e15f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e161 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e167 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e16a push edx */
  push32((uint32_t)(EDX));
  /* 1294e16b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1294e16d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e170 push eax */
  push32((uint32_t)(EAX));
  /* 1294e171 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e173 call 0x12950d10 */
  push32(0x1294e178u); f_12950d10();
  /* 1294e178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e17b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e17e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e180 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e186 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e189 push edx */
  push32((uint32_t)(EDX));
  /* 1294e18a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1294e18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e18f push eax */
  push32((uint32_t)(EAX));
  /* 1294e190 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e192 call 0x12950d10 */
  push32(0x1294e197u); f_12950d10();
  /* 1294e197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e19a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e19d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e19f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e1a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e1a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e1a8 push edx */
  push32((uint32_t)(EDX));
  /* 1294e1a9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1294e1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e1ae push eax */
  push32((uint32_t)(EAX));
  /* 1294e1af push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e1b1 call 0x12950d10 */
  push32(0x1294e1b6u); f_12950d10();
  /* 1294e1b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e1b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e1bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e1be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e1c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e1c4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1294e1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1294e1c8 call 0x1294e310 */
  push32(0x1294e1cdu); f_1294e310();
  /* 1294e1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e1d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e1d3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e1d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e1d7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1294e1d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e1dc push edx */
  push32((uint32_t)(EDX));
  /* 1294e1dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e1df call 0x12950d10 */
  push32(0x1294e1e4u); f_12950d10();
  /* 1294e1e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e1e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e1ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e1ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e1f2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e1f5 push edx */
  push32((uint32_t)(EDX));
  /* 1294e1f6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1294e1f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e1fb push eax */
  push32((uint32_t)(EAX));
  /* 1294e1fc push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e1fe call 0x12950d10 */
  push32(0x1294e203u); f_12950d10();
  /* 1294e203 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e209 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e20b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e211 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e214 push edx */
  push32((uint32_t)(EDX));
  /* 1294e215 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1294e217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e21a push eax */
  push32((uint32_t)(EAX));
  /* 1294e21b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e21d call 0x12950d10 */
  push32(0x1294e222u); f_12950d10();
  /* 1294e222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e228 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e22a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e22d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e230 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e233 push edx */
  push32((uint32_t)(EDX));
  /* 1294e234 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1294e236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e239 push eax */
  push32((uint32_t)(EAX));
  /* 1294e23a push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e23c call 0x12950d10 */
  push32(0x1294e241u); f_12950d10();
  /* 1294e241 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e244 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e247 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e249 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e24c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e24f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e252 push edx */
  push32((uint32_t)(EDX));
  /* 1294e253 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1294e255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e258 push eax */
  push32((uint32_t)(EAX));
  /* 1294e259 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e25b call 0x12950d10 */
  push32(0x1294e260u); f_12950d10();
  /* 1294e260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e263 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e266 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e268 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e26b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e26e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e271 push edx */
  push32((uint32_t)(EDX));
  /* 1294e272 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1294e274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e277 push eax */
  push32((uint32_t)(EAX));
  /* 1294e278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e27a call 0x12950d10 */
  push32(0x1294e27fu); f_12950d10();
  /* 1294e27f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e282 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e285 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e287 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e28a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e28d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e290 push edx */
  push32((uint32_t)(EDX));
  /* 1294e291 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1294e293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e296 push eax */
  push32((uint32_t)(EAX));
  /* 1294e297 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e299 call 0x12950d10 */
  push32(0x1294e29eu); f_12950d10();
  /* 1294e29e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e2a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e2a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e2a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e2ac add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2af push edx */
  push32((uint32_t)(EDX));
  /* 1294e2b0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1294e2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e2b5 push eax */
  push32((uint32_t)(EAX));
  /* 1294e2b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e2b8 call 0x12950d10 */
  push32(0x1294e2bdu); f_12950d10();
  /* 1294e2bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e2c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e2c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e2c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e2cb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2ce push edx */
  push32((uint32_t)(EDX));
  /* 1294e2cf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1294e2d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e2d4 push eax */
  push32((uint32_t)(EAX));
  /* 1294e2d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e2d7 call 0x12950d10 */
  push32(0x1294e2dcu); f_12950d10();
  /* 1294e2dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e2e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e2e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e2e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e2ea add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2ed push edx */
  push32((uint32_t)(EDX));
  /* 1294e2ee push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1294e2f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e2f3 push eax */
  push32((uint32_t)(EAX));
  /* 1294e2f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e2f6 call 0x12950d10 */
  push32(0x1294e2fbu); f_12950d10();
  /* 1294e2fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e2fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e301 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e303 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294e306 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1294e309:;
  /* 1294e309 mov esp, ebp */
  ESP = (EBP);
  /* 1294e30b pop ebp */
  EBP = (pop32());
  /* 1294e30c ret  */
  ESPCHK(0x1294e100u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1294e310 (125 bytes, 49 insns) */
void f_1294e310(void) {
  FTRACE(0x1294e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e310 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e311 mov ebp, esp */
  EBP = (ESP);
  /* 1294e313 push ecx */
  push32((uint32_t)(ECX));
L_1294e314:;
  /* 1294e314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e317 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294e31a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294e31c je 0x1294e389 */
  if (C.zf) goto L_1294e389;
  /* 1294e31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294e324 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e327 jl 0x1294e34d */
  if ((C.sf!=C.of)) goto L_1294e34d;
  /* 1294e329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e32c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294e32f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e332 jg 0x1294e34d */
  if ((!C.zf&&C.sf==C.of)) goto L_1294e34d;
  /* 1294e334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e337 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294e33a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294e33d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e340 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1294e342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1294e34b jmp 0x1294e387 */
  goto L_1294e387;
L_1294e34d:;
  /* 1294e34d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e350 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294e353 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e356 jne 0x1294e37e */
  if (!C.zf) goto L_1294e37e;
  /* 1294e358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e35b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294e35e:;
  /* 1294e35e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e364 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1294e367 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1294e369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e36c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e36f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294e372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294e375 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294e378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e37a jne 0x1294e35e */
  if (!C.zf) goto L_1294e35e;
  /* 1294e37c jmp 0x1294e387 */
  goto L_1294e387;
L_1294e37e:;
  /* 1294e37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1294e387:;
  /* 1294e387 jmp 0x1294e314 */
  goto L_1294e314;
L_1294e389:;
  /* 1294e389 mov esp, ebp */
  ESP = (EBP);
  /* 1294e38b pop ebp */
  EBP = (pop32());
  /* 1294e38c ret  */
  ESPCHK(0x1294e310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x1294e390 (147 bytes, 52 insns) */
void f_1294e390(void) {
  FTRACE(0x1294e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e390 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e391 mov ebp, esp */
  EBP = (ESP);
  /* 1294e393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e397 jne 0x1294e39e */
  if (!C.zf) goto L_1294e39e;
  /* 1294e399 jmp 0x1294e421 */
  goto L_1294e421;
L_1294e39e:;
  /* 1294e39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e3a1 cmp dword ptr [eax + 0xc], 0x1296e720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1296e720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e3a8 je 0x1294e421 */
  if (C.zf) goto L_1294e421;
  /* 1294e3aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e3ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e3af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1294e3b2 push edx */
  push32((uint32_t)(EDX));
  /* 1294e3b3 call 0x129435e0 */
  push32(0x1294e3b8u); f_129435e0();
  /* 1294e3b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e3bb push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e3bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e3c0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1294e3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e3c4 call 0x129435e0 */
  push32(0x1294e3c9u); f_129435e0();
  /* 1294e3c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e3cc push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e3ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e3d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1294e3d4 push eax */
  push32((uint32_t)(EAX));
  /* 1294e3d5 call 0x129435e0 */
  push32(0x1294e3dau); f_129435e0();
  /* 1294e3da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e3dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e3df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e3e2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1294e3e5 push edx */
  push32((uint32_t)(EDX));
  /* 1294e3e6 call 0x129435e0 */
  push32(0x1294e3ebu); f_129435e0();
  /* 1294e3eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e3ee push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e3f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e3f3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1294e3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e3f7 call 0x129435e0 */
  push32(0x1294e3fcu); f_129435e0();
  /* 1294e3fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e3ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e404 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1294e407 push eax */
  push32((uint32_t)(EAX));
  /* 1294e408 call 0x129435e0 */
  push32(0x1294e40du); f_129435e0();
  /* 1294e40d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e410 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e415 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1294e418 push edx */
  push32((uint32_t)(EDX));
  /* 1294e419 call 0x129435e0 */
  push32(0x1294e41eu); f_129435e0();
  /* 1294e41e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294e421:;
  /* 1294e421 pop ebp */
  EBP = (pop32());
  /* 1294e422 ret  */
  ESPCHK(0x1294e390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e430 @ 0x1294e430 (928 bytes, 284 insns) */
void f_1294e430(void) {
  FTRACE(0x1294e430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e430 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e431 mov ebp, esp */
  EBP = (ESP);
  /* 1294e433 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294e436 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1294e43d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1294e444 cmp dword ptr [0x1296e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e44b je 0x1294e781 */
  if (C.zf) goto L_1294e781;
  /* 1294e451 cmp dword ptr [0x1296e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e458 jne 0x1294e480 */
  if (!C.zf) goto L_1294e480;
  /* 1294e45a push 0x1296e698 */
  push32((uint32_t)(0x1296e698u));
  /* 1294e45f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1294e464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e466 mov ax, word ptr [0x1296e6dc] */
  AX = (r16((uint32_t)(0x1296e6dc)));
  /* 1294e46c push eax */
  push32((uint32_t)(EAX));
  /* 1294e46d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e46f call 0x12950d10 */
  push32(0x1294e474u); f_12950d10();
  /* 1294e474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e479 je 0x1294e480 */
  if (C.zf) goto L_1294e480;
  /* 1294e47b jmp 0x1294e742 */
  goto L_1294e742;
L_1294e480:;
  /* 1294e480 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1294e482 push 0x1296a014 */
  push32((uint32_t)(0x1296a014u));
  /* 1294e487 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e489 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1294e48e call 0x12942b50 */
  push32(0x1294e493u); f_12942b50();
  /* 1294e493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e496 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1294e499 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1294e49b push 0x1296a014 */
  push32((uint32_t)(0x1296a014u));
  /* 1294e4a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e4a2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1294e4a7 call 0x12942b50 */
  push32(0x1294e4acu); f_12942b50();
  /* 1294e4ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e4af mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1294e4b2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1294e4b4 push 0x1296a014 */
  push32((uint32_t)(0x1296a014u));
  /* 1294e4b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e4bb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1294e4c0 call 0x12942b50 */
  push32(0x1294e4c5u); f_12942b50();
  /* 1294e4c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e4c8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1294e4cb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1294e4cd push 0x1296a014 */
  push32((uint32_t)(0x1296a014u));
  /* 1294e4d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e4d4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1294e4d9 call 0x12942b50 */
  push32(0x1294e4deu); f_12942b50();
  /* 1294e4de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e4e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1294e4e4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e4e8 je 0x1294e4fc */
  if (C.zf) goto L_1294e4fc;
  /* 1294e4ea cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e4ee je 0x1294e4fc */
  if (C.zf) goto L_1294e4fc;
  /* 1294e4f0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e4f4 je 0x1294e4fc */
  if (C.zf) goto L_1294e4fc;
  /* 1294e4f6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e4fa jne 0x1294e501 */
  if (!C.zf) goto L_1294e501;
L_1294e4fc:;
  /* 1294e4fc jmp 0x1294e742 */
  goto L_1294e742;
L_1294e501:;
  /* 1294e501 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294e504 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1294e507 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1294e50e jmp 0x1294e519 */
  goto L_1294e519;
L_1294e510:;
  /* 1294e510 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294e513 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e516 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1294e519:;
  /* 1294e519 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e520 jge 0x1294e535 */
  if ((C.sf==C.of)) goto L_1294e535;
  /* 1294e522 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e525 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1294e528 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1294e52a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e52d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e530 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1294e533 jmp 0x1294e510 */
  goto L_1294e510;
L_1294e535:;
  /* 1294e535 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1294e538 push eax */
  push32((uint32_t)(EAX));
  /* 1294e539 mov ecx, dword ptr [0x1296e698] */
  ECX = (r32((uint32_t)(0x1296e698)));
  /* 1294e53f push ecx */
  push32((uint32_t)(ECX));
  /* 1294e540 call dword ptr [0x12970310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970310))), 0x1294e546u);
  /* 1294e546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e548 jne 0x1294e54f */
  if (!C.zf) goto L_1294e54f;
  /* 1294e54a jmp 0x1294e742 */
  goto L_1294e742;
L_1294e54f:;
  /* 1294e54f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e553 jbe 0x1294e55a */
  if ((C.cf||C.zf)) goto L_1294e55a;
  /* 1294e555 jmp 0x1294e742 */
  goto L_1294e742;
L_1294e55a:;
  /* 1294e55a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294e55d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294e563 mov dword ptr [0x1296cea4], edx */
  w32((uint32_t)(0x1296cea4), (EDX));
  /* 1294e569 cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e570 jle 0x1294e5c9 */
  if ((C.zf||C.sf!=C.of)) goto L_1294e5c9;
  /* 1294e572 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1294e575 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1294e578 jmp 0x1294e583 */
  goto L_1294e583;
L_1294e57a:;
  /* 1294e57a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e57d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e580 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1294e583:;
  /* 1294e583 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e588 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294e58a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e58c je 0x1294e5c9 */
  if (C.zf) goto L_1294e5c9;
  /* 1294e58e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e591 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294e593 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1294e596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294e598 je 0x1294e5c9 */
  if (C.zf) goto L_1294e5c9;
  /* 1294e59a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e59d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e59f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1294e5a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1294e5a4 jmp 0x1294e5af */
  goto L_1294e5af;
L_1294e5a6:;
  /* 1294e5a6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294e5a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e5ac mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1294e5af:;
  /* 1294e5af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e5b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e5b4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1294e5b7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e5ba jg 0x1294e5c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294e5c7;
  /* 1294e5bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294e5bf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e5c2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1294e5c5 jmp 0x1294e5a6 */
  goto L_1294e5a6;
L_1294e5c7:;
  /* 1294e5c7 jmp 0x1294e57a */
  goto L_1294e57a;
L_1294e5c9:;
  /* 1294e5c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e5cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e5cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e5cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294e5d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e5d5 push eax */
  push32((uint32_t)(EAX));
  /* 1294e5d6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1294e5db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294e5de push ecx */
  push32((uint32_t)(ECX));
  /* 1294e5df push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e5e1 call 0x1294ad80 */
  push32(0x1294e5e6u); f_1294ad80();
  /* 1294e5e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e5e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e5eb jne 0x1294e5f2 */
  if (!C.zf) goto L_1294e5f2;
  /* 1294e5ed jmp 0x1294e742 */
  goto L_1294e742;
L_1294e5f2:;
  /* 1294e5f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294e5f5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1294e5fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294e5fd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1294e600 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1294e607 jmp 0x1294e612 */
  goto L_1294e612;
L_1294e609:;
  /* 1294e609 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294e60c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e60f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1294e612:;
  /* 1294e612 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e619 jge 0x1294e630 */
  if ((C.sf==C.of)) goto L_1294e630;
  /* 1294e61b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294e61e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1294e622 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1294e625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1294e628 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e62b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1294e62e jmp 0x1294e609 */
  goto L_1294e609;
L_1294e630:;
  /* 1294e630 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e632 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294e634 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294e637 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e63a push edx */
  push32((uint32_t)(EDX));
  /* 1294e63b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1294e640 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294e643 push eax */
  push32((uint32_t)(EAX));
  /* 1294e644 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294e646 call 0x12950fb0 */
  push32(0x1294e64bu); f_12950fb0();
  /* 1294e64b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e64e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e650 jne 0x1294e657 */
  if (!C.zf) goto L_1294e657;
  /* 1294e652 jmp 0x1294e742 */
  goto L_1294e742;
L_1294e657:;
  /* 1294e657 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294e65a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1294e65f cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e666 jle 0x1294e6c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1294e6c3;
  /* 1294e668 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1294e66b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1294e66e jmp 0x1294e679 */
  goto L_1294e679;
L_1294e670:;
  /* 1294e670 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e673 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e676 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1294e679:;
  /* 1294e679 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e67c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294e67e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294e680 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294e682 je 0x1294e6c3 */
  if (C.zf) goto L_1294e6c3;
  /* 1294e684 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e687 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e689 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1294e68c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294e68e je 0x1294e6c3 */
  if (C.zf) goto L_1294e6c3;
  /* 1294e690 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e695 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294e697 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1294e69a jmp 0x1294e6a5 */
  goto L_1294e6a5;
L_1294e69c:;
  /* 1294e69c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294e69f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e6a2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1294e6a5:;
  /* 1294e6a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294e6a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e6aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1294e6ad cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e6b0 jg 0x1294e6c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294e6c1;
  /* 1294e6b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1294e6b5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294e6b8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1294e6bf jmp 0x1294e69c */
  goto L_1294e69c;
L_1294e6c1:;
  /* 1294e6c1 jmp 0x1294e670 */
  goto L_1294e670;
L_1294e6c3:;
  /* 1294e6c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294e6c6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e6c9 mov dword ptr [0x1296cc98], eax */
  w32((uint32_t)(0x1296cc98), (EAX));
  /* 1294e6ce mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294e6d1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e6d4 mov dword ptr [0x1296cc9c], ecx */
  w32((uint32_t)(0x1296cc9c), (ECX));
  /* 1294e6da cmp dword ptr [0x1296e6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e6e1 je 0x1294e6f4 */
  if (C.zf) goto L_1294e6f4;
  /* 1294e6e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e6e5 mov edx, dword ptr [0x1296e6c8] */
  EDX = (r32((uint32_t)(0x1296e6c8)));
  /* 1294e6eb push edx */
  push32((uint32_t)(EDX));
  /* 1294e6ec call 0x129435e0 */
  push32(0x1294e6f1u); f_129435e0();
  /* 1294e6f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294e6f4:;
  /* 1294e6f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294e6f7 mov dword ptr [0x1296e6c8], eax */
  w32((uint32_t)(0x1296e6c8), (EAX));
  /* 1294e6fc cmp dword ptr [0x1296e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e703 je 0x1294e716 */
  if (C.zf) goto L_1294e716;
  /* 1294e705 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e707 mov ecx, dword ptr [0x1296e6cc] */
  ECX = (r32((uint32_t)(0x1296e6cc)));
  /* 1294e70d push ecx */
  push32((uint32_t)(ECX));
  /* 1294e70e call 0x129435e0 */
  push32(0x1294e713u); f_129435e0();
  /* 1294e713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294e716:;
  /* 1294e716 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294e719 mov dword ptr [0x1296e6cc], edx */
  w32((uint32_t)(0x1296e6cc), (EDX));
  /* 1294e71f push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e721 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294e724 push eax */
  push32((uint32_t)(EAX));
  /* 1294e725 call 0x129435e0 */
  push32(0x1294e72au); f_129435e0();
  /* 1294e72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e72d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e72f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294e732 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e733 call 0x129435e0 */
  push32(0x1294e738u); f_129435e0();
  /* 1294e738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e73b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e73d jmp 0x1294e7cc */
  goto L_1294e7cc;
L_1294e742:;
  /* 1294e742 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e744 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1294e747 push edx */
  push32((uint32_t)(EDX));
  /* 1294e748 call 0x129435e0 */
  push32(0x1294e74du); f_129435e0();
  /* 1294e74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e750 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e752 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1294e755 push eax */
  push32((uint32_t)(EAX));
  /* 1294e756 call 0x129435e0 */
  push32(0x1294e75bu); f_129435e0();
  /* 1294e75b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e75e push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e760 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1294e763 push ecx */
  push32((uint32_t)(ECX));
  /* 1294e764 call 0x129435e0 */
  push32(0x1294e769u); f_129435e0();
  /* 1294e769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e76c push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e76e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1294e771 push edx */
  push32((uint32_t)(EDX));
  /* 1294e772 call 0x129435e0 */
  push32(0x1294e777u); f_129435e0();
  /* 1294e777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e77a mov eax, 1 */
  EAX = (0x1u);
  /* 1294e77f jmp 0x1294e7cc */
  goto L_1294e7cc;
L_1294e781:;
  /* 1294e781 mov dword ptr [0x1296cc98], 0x1296cca2 */
  w32((uint32_t)(0x1296cc98), (0x1296cca2u));
  /* 1294e78b mov dword ptr [0x1296cc9c], 0x1296cca2 */
  w32((uint32_t)(0x1296cc9c), (0x1296cca2u));
  /* 1294e795 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e797 mov eax, dword ptr [0x1296e6c8] */
  EAX = (r32((uint32_t)(0x1296e6c8)));
  /* 1294e79c push eax */
  push32((uint32_t)(EAX));
  /* 1294e79d call 0x129435e0 */
  push32(0x1294e7a2u); f_129435e0();
  /* 1294e7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294e7a7 mov ecx, dword ptr [0x1296e6cc] */
  ECX = (r32((uint32_t)(0x1296e6cc)));
  /* 1294e7ad push ecx */
  push32((uint32_t)(ECX));
  /* 1294e7ae call 0x129435e0 */
  push32(0x1294e7b3u); f_129435e0();
  /* 1294e7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e7b6 mov dword ptr [0x1296e6c8], 0 */
  w32((uint32_t)(0x1296e6c8), (0x0u));
  /* 1294e7c0 mov dword ptr [0x1296e6cc], 0 */
  w32((uint32_t)(0x1296e6cc), (0x0u));
  /* 1294e7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294e7cc:;
  /* 1294e7cc mov esp, ebp */
  ESP = (EBP);
  /* 1294e7ce pop ebp */
  EBP = (pop32());
  /* 1294e7cf ret  */
  ESPCHK(0x1294e430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x1294e7d0 (7 bytes, 5 insns) */
void f_1294e7d0(void) {
  FTRACE(0x1294e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294e7d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e7d5 pop ebp */
  EBP = (pop32());
  /* 1294e7d6 ret  */
  ESPCHK(0x1294e7d0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1294e7e0 (129 bytes, 56 insns) */
void f_1294e7e0(void) {
  FTRACE(0x1294e7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e7e0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1294e7e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1294e7e8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1294e7ee jne 0x1294e82c */
  if (!C.zf) goto L_1294e82c;
L_1294e7f0:;
  /* 1294e7f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1294e7f2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e7f4 jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e7f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e7f8 je 0x1294e820 */
  if (C.zf) goto L_1294e820;
  /* 1294e7fa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e7fd jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e7ff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1294e801 je 0x1294e820 */
  if (C.zf) goto L_1294e820;
  /* 1294e803 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1294e806 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e809 jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e80b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e80d je 0x1294e820 */
  if (C.zf) goto L_1294e820;
  /* 1294e80f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e812 jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e814 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e817 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e81a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1294e81c jne 0x1294e7f0 */
  if (!C.zf) goto L_1294e7f0;
  /* 1294e81e mov edi, edi */
  EDI = (EDI);
L_1294e820:;
  /* 1294e820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e822 ret  */
  ESPCHK(0x1294e7e0u, _esp0);
  ESP += 4; return;
  /* 1294e823 nop  */
  /* nop */
L_1294e824:;
  /* 1294e824 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294e826 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294e828 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1294e829 ret  */
  ESPCHK(0x1294e7e0u, _esp0);
  ESP += 4; return;
  /* 1294e82a mov edi, edi */
  EDI = (EDI);
L_1294e82c:;
  /* 1294e82c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1294e832 je 0x1294e848 */
  if (C.zf) goto L_1294e848;
  /* 1294e834 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294e836 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1294e837 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e839 jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e83b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1294e83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e83e je 0x1294e820 */
  if (C.zf) goto L_1294e820;
  /* 1294e840 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1294e846 je 0x1294e7f0 */
  if (C.zf) goto L_1294e7f0;
L_1294e848:;
  /* 1294e848 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1294e84b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e84e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e850 jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e852 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e854 je 0x1294e820 */
  if (C.zf) goto L_1294e820;
  /* 1294e856 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e859 jne 0x1294e824 */
  if (!C.zf) goto L_1294e824;
  /* 1294e85b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1294e85d je 0x1294e820 */
  if (C.zf) goto L_1294e820;
  /* 1294e85f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e862 jmp 0x1294e7f0 */
  goto L_1294e7f0;
}

/* FUN_1000e870 @ 0x1294e870 (62 bytes, 35 insns) */
void f_1294e870(void) {
  FTRACE(0x1294e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e870 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e871 mov ebp, esp */
  EBP = (ESP);
  /* 1294e873 push esi */
  push32((uint32_t)(ESI));
  /* 1294e874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e876 push eax */
  push32((uint32_t)(EAX));
  /* 1294e877 push eax */
  push32((uint32_t)(EAX));
  /* 1294e878 push eax */
  push32((uint32_t)(EAX));
  /* 1294e879 push eax */
  push32((uint32_t)(EAX));
  /* 1294e87a push eax */
  push32((uint32_t)(EAX));
  /* 1294e87b push eax */
  push32((uint32_t)(EAX));
  /* 1294e87c push eax */
  push32((uint32_t)(EAX));
  /* 1294e87d push eax */
  push32((uint32_t)(EAX));
  /* 1294e87e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294e881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294e884:;
  /* 1294e884 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294e886 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e888 je 0x1294e891 */
  if (C.zf) goto L_1294e891;
  /* 1294e88a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1294e88b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1294e88b");
  /* 1294e88f jmp 0x1294e884 */
  goto L_1294e884;
L_1294e891:;
  /* 1294e891 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e894 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1294e897 nop  */
  /* nop */
L_1294e898:;
  /* 1294e898 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1294e899 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294e89b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e89d je 0x1294e8a6 */
  if (C.zf) goto L_1294e8a6;
  /* 1294e89f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1294e8a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1294e8a0");
  /* 1294e8a4 jae 0x1294e898 */
  if (!C.cf) goto L_1294e898;
L_1294e8a6:;
  /* 1294e8a6 mov eax, ecx */
  EAX = (ECX);
  /* 1294e8a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e8ab pop esi */
  ESI = (pop32());
  /* 1294e8ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294e8ad ret  */
  ESPCHK(0x1294e870u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1294e8b0 (56 bytes, 31 insns) */
void f_1294e8b0(void) {
  FTRACE(0x1294e8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1294e8b3 push edi */
  push32((uint32_t)(EDI));
  /* 1294e8b4 push esi */
  push32((uint32_t)(ESI));
  /* 1294e8b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1294e8b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294e8b9 jecxz 0x1294e8e1 */
  x86_unimpl("jecxz @ 0x1294e8b9");
  /* 1294e8bb mov ebx, ecx */
  EBX = (ECX);
  /* 1294e8bd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e8c0 mov esi, edi */
  ESI = (EDI);
  /* 1294e8c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e8c4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1294e8c6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294e8c8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e8ca mov edi, esi */
  EDI = (ESI);
  /* 1294e8cc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1294e8cf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1294e8d1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1294e8d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294e8d6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1294e8d9 ja 0x1294e8df */
  if ((!C.cf&&!C.zf)) goto L_1294e8df;
  /* 1294e8db je 0x1294e8e1 */
  if (C.zf) goto L_1294e8e1;
  /* 1294e8dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1294e8de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1294e8df:;
  /* 1294e8df not ecx */
  ECX = (~(ECX));
L_1294e8e1:;
  /* 1294e8e1 mov eax, ecx */
  EAX = (ECX);
  /* 1294e8e3 pop ebx */
  EBX = (pop32());
  /* 1294e8e4 pop esi */
  ESI = (pop32());
  /* 1294e8e5 pop edi */
  EDI = (pop32());
  /* 1294e8e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294e8e7 ret  */
  ESPCHK(0x1294e8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x1294e8f0 (58 bytes, 32 insns) */
void f_1294e8f0(void) {
  FTRACE(0x1294e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1294e8f3 push esi */
  push32((uint32_t)(ESI));
  /* 1294e8f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294e8f6 push eax */
  push32((uint32_t)(EAX));
  /* 1294e8f7 push eax */
  push32((uint32_t)(EAX));
  /* 1294e8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1294e8f9 push eax */
  push32((uint32_t)(EAX));
  /* 1294e8fa push eax */
  push32((uint32_t)(EAX));
  /* 1294e8fb push eax */
  push32((uint32_t)(EAX));
  /* 1294e8fc push eax */
  push32((uint32_t)(EAX));
  /* 1294e8fd push eax */
  push32((uint32_t)(EAX));
  /* 1294e8fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294e901 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1294e904:;
  /* 1294e904 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294e906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e908 je 0x1294e911 */
  if (C.zf) goto L_1294e911;
  /* 1294e90a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1294e90b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1294e90b");
  /* 1294e90f jmp 0x1294e904 */
  goto L_1294e904;
L_1294e911:;
  /* 1294e911 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1294e914:;
  /* 1294e914 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1294e916 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1294e918 je 0x1294e924 */
  if (C.zf) goto L_1294e924;
  /* 1294e91a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1294e91b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1294e91b");
  /* 1294e91f jae 0x1294e914 */
  if (!C.cf) goto L_1294e914;
  /* 1294e921 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1294e924:;
  /* 1294e924 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e927 pop esi */
  ESI = (pop32());
  /* 1294e928 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1294e929 ret  */
  ESPCHK(0x1294e8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e930 @ 0x1294e930 (512 bytes, 147 insns) */
void f_1294e930(void) {
  FTRACE(0x1294e930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294e930 push ebp */
  push32((uint32_t)(EBP));
  /* 1294e931 mov ebp, esp */
  EBP = (ESP);
  /* 1294e933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294e936 cmp dword ptr [0x1296e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e93d jne 0x1294e962 */
  if (!C.zf) goto L_1294e962;
  /* 1294e93f call 0x1294f400 */
  push32(0x1294e944u); f_1294f400();
  /* 1294e944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e946 je 0x1294e952 */
  if (C.zf) goto L_1294e952;
  /* 1294e948 mov eax, dword ptr [0x12970250] */
  EAX = (r32((uint32_t)(0x12970250)));
  /* 1294e94d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294e950 jmp 0x1294e959 */
  goto L_1294e959;
L_1294e952:;
  /* 1294e952 mov dword ptr [ebp - 8], 0x1294f450 */
  w32((uint32_t)(EBP + -0x8), (0x1294f450u));
L_1294e959:;
  /* 1294e959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294e95c mov dword ptr [0x1296e714], ecx */
  w32((uint32_t)(0x1296e714), (ECX));
L_1294e962:;
  /* 1294e962 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e966 jne 0x1294e972 */
  if (!C.zf) goto L_1294e972;
  /* 1294e968 call 0x1294f250 */
  push32(0x1294e96du); f_1294f250();
  /* 1294e96d jmp 0x1294ea3e */
  goto L_1294ea3e;
L_1294e972:;
  /* 1294e972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e975 mov dword ptr [0x1296e704], edx */
  w32((uint32_t)(0x1296e704), (EDX));
  /* 1294e97b cmp dword ptr [0x1296e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e982 je 0x1294e9a4 */
  if (C.zf) goto L_1294e9a4;
  /* 1294e984 mov eax, dword ptr [0x1296e704] */
  EAX = (r32((uint32_t)(0x1296e704)));
  /* 1294e989 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294e98c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294e98e je 0x1294e9a4 */
  if (C.zf) goto L_1294e9a4;
  /* 1294e990 push 0x1296e704 */
  push32((uint32_t)(0x1296e704u));
  /* 1294e995 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1294e997 push 0x1296da90 */
  push32((uint32_t)(0x1296da90u));
  /* 1294e99c call 0x1294eb30 */
  push32(0x1294e9a1u); f_1294eb30();
  /* 1294e9a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294e9a4:;
  /* 1294e9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294e9a7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294e9aa mov dword ptr [0x1296e708], edx */
  w32((uint32_t)(0x1296e708), (EDX));
  /* 1294e9b0 cmp dword ptr [0x1296e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e9b7 je 0x1294e9d9 */
  if (C.zf) goto L_1294e9d9;
  /* 1294e9b9 mov eax, dword ptr [0x1296e708] */
  EAX = (r32((uint32_t)(0x1296e708)));
  /* 1294e9be movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294e9c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294e9c3 je 0x1294e9d9 */
  if (C.zf) goto L_1294e9d9;
  /* 1294e9c5 push 0x1296e708 */
  push32((uint32_t)(0x1296e708u));
  /* 1294e9ca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1294e9cc push 0x1296d9d8 */
  push32((uint32_t)(0x1296d9d8u));
  /* 1294e9d1 call 0x1294eb30 */
  push32(0x1294e9d6u); f_1294eb30();
  /* 1294e9d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294e9d9:;
  /* 1294e9d9 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
  /* 1294e9e3 cmp dword ptr [0x1296e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294e9ea je 0x1294ea1d */
  if (C.zf) goto L_1294ea1d;
  /* 1294e9ec mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294e9f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1294e9f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294e9f7 je 0x1294ea1d */
  if (C.zf) goto L_1294ea1d;
  /* 1294e9f9 cmp dword ptr [0x1296e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ea00 je 0x1294ea16 */
  if (C.zf) goto L_1294ea16;
  /* 1294ea02 mov ecx, dword ptr [0x1296e708] */
  ECX = (r32((uint32_t)(0x1296e708)));
  /* 1294ea08 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1294ea0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294ea0d je 0x1294ea16 */
  if (C.zf) goto L_1294ea16;
  /* 1294ea0f call 0x1294ebc0 */
  push32(0x1294ea14u); f_1294ebc0();
  /* 1294ea14 jmp 0x1294ea1b */
  goto L_1294ea1b;
L_1294ea16:;
  /* 1294ea16 call 0x1294efb0 */
  push32(0x1294ea1bu); f_1294efb0();
L_1294ea1b:;
  /* 1294ea1b jmp 0x1294ea3e */
  goto L_1294ea3e;
L_1294ea1d:;
  /* 1294ea1d cmp dword ptr [0x1296e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ea24 je 0x1294ea39 */
  if (C.zf) goto L_1294ea39;
  /* 1294ea26 mov eax, dword ptr [0x1296e708] */
  EAX = (r32((uint32_t)(0x1296e708)));
  /* 1294ea2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294ea2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294ea30 je 0x1294ea39 */
  if (C.zf) goto L_1294ea39;
  /* 1294ea32 call 0x1294f150 */
  push32(0x1294ea37u); f_1294f150();
  /* 1294ea37 jmp 0x1294ea3e */
  goto L_1294ea3e;
L_1294ea39:;
  /* 1294ea39 call 0x1294f250 */
  push32(0x1294ea3eu); f_1294f250();
L_1294ea3e:;
  /* 1294ea3e cmp dword ptr [0x1296e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ea45 jne 0x1294ea4e */
  if (!C.zf) goto L_1294ea4e;
  /* 1294ea47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294ea49 jmp 0x1294eb2c */
  goto L_1294eb2c;
L_1294ea4e:;
  /* 1294ea4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ea51 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ea57 push edx */
  push32((uint32_t)(EDX));
  /* 1294ea58 call 0x1294f280 */
  push32(0x1294ea5du); f_1294f280();
  /* 1294ea5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ea60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294ea63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ea67 je 0x1294ea7c */
  if (C.zf) goto L_1294ea7c;
  /* 1294ea69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294ea6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294ea71 push eax */
  push32((uint32_t)(EAX));
  /* 1294ea72 call dword ptr [0x129702c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702c8))), 0x1294ea78u);
  /* 1294ea78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ea7a jne 0x1294ea83 */
  if (!C.zf) goto L_1294ea83;
L_1294ea7c:;
  /* 1294ea7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294ea7e jmp 0x1294eb2c */
  goto L_1294eb2c;
L_1294ea83:;
  /* 1294ea83 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294ea85 mov ecx, dword ptr [0x1296e6f4] */
  ECX = (r32((uint32_t)(0x1296e6f4)));
  /* 1294ea8b push ecx */
  push32((uint32_t)(ECX));
  /* 1294ea8c call dword ptr [0x12970340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970340))), 0x1294ea92u);
  /* 1294ea92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ea94 jne 0x1294ea9d */
  if (!C.zf) goto L_1294ea9d;
  /* 1294ea96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294ea98 jmp 0x1294eb2c */
  goto L_1294eb2c;
L_1294ea9d:;
  /* 1294ea9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eaa1 je 0x1294eac8 */
  if (C.zf) goto L_1294eac8;
  /* 1294eaa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294eaa6 mov ax, word ptr [0x1296e6f4] */
  AX = (r16((uint32_t)(0x1296e6f4)));
  /* 1294eaac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1294eaaf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294eab2 mov dx, word ptr [0x1296e710] */
  DX = (r16((uint32_t)(0x1296e710)));
  /* 1294eab9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1294eabd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294eac0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1294eac4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1294eac8:;
  /* 1294eac8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eacc je 0x1294eb27 */
  if (C.zf) goto L_1294eb27;
  /* 1294eace push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1294ead0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294ead3 push edx */
  push32((uint32_t)(EDX));
  /* 1294ead4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1294ead9 mov eax, dword ptr [0x1296e6f4] */
  EAX = (r32((uint32_t)(0x1296e6f4)));
  /* 1294eade push eax */
  push32((uint32_t)(EAX));
  /* 1294eadf call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294eae5u);
  /* 1294eae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294eae7 jne 0x1294eaed */
  if (!C.zf) goto L_1294eaed;
  /* 1294eae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294eaeb jmp 0x1294eb2c */
  goto L_1294eb2c;
L_1294eaed:;
  /* 1294eaed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1294eaef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294eaf2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1294eaf6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1294eafb mov edx, dword ptr [0x1296e710] */
  EDX = (r32((uint32_t)(0x1296e710)));
  /* 1294eb01 push edx */
  push32((uint32_t)(EDX));
  /* 1294eb02 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294eb08u);
  /* 1294eb08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294eb0a jne 0x1294eb10 */
  if (!C.zf) goto L_1294eb10;
  /* 1294eb0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294eb0e jmp 0x1294eb2c */
  goto L_1294eb2c;
L_1294eb10:;
  /* 1294eb10 push 0xa */
  push32((uint32_t)(0xau));
  /* 1294eb12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294eb15 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eb1a push eax */
  push32((uint32_t)(EAX));
  /* 1294eb1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294eb1e push ecx */
  push32((uint32_t)(ECX));
  /* 1294eb1f call 0x12945690 */
  push32(0x1294eb24u); f_12945690();
  /* 1294eb24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294eb27:;
  /* 1294eb27 mov eax, 1 */
  EAX = (0x1u);
L_1294eb2c:;
  /* 1294eb2c mov esp, ebp */
  ESP = (EBP);
  /* 1294eb2e pop ebp */
  EBP = (pop32());
  /* 1294eb2f ret  */
  ESPCHK(0x1294e930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x1294eb30 (130 bytes, 47 insns) */
void f_1294eb30(void) {
  FTRACE(0x1294eb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294eb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1294eb31 mov ebp, esp */
  EBP = (ESP);
  /* 1294eb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294eb36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1294eb3d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1294eb44:;
  /* 1294eb44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294eb47 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eb4a jg 0x1294ebae */
  if ((!C.zf&&C.sf==C.of)) goto L_1294ebae;
  /* 1294eb4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eb50 je 0x1294ebae */
  if (C.zf) goto L_1294ebae;
  /* 1294eb52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294eb55 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eb58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294eb59 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294eb5b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294eb5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294eb60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294eb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294eb66 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1294eb69 push eax */
  push32((uint32_t)(EAX));
  /* 1294eb6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294eb6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294eb6f push edx */
  push32((uint32_t)(EDX));
  /* 1294eb70 call 0x12951220 */
  push32(0x1294eb75u); f_12951220();
  /* 1294eb75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eb78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294eb7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eb7f jne 0x1294eb92 */
  if (!C.zf) goto L_1294eb92;
  /* 1294eb81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294eb84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294eb87 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1294eb8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294eb8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1294eb90 jmp 0x1294ebac */
  goto L_1294ebac;
L_1294eb92:;
  /* 1294eb92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eb96 jge 0x1294eba3 */
  if ((C.sf==C.of)) goto L_1294eba3;
  /* 1294eb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294eb9b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294eb9e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1294eba1 jmp 0x1294ebac */
  goto L_1294ebac;
L_1294eba3:;
  /* 1294eba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294eba6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eba9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1294ebac:;
  /* 1294ebac jmp 0x1294eb44 */
  goto L_1294eb44;
L_1294ebae:;
  /* 1294ebae mov esp, ebp */
  ESP = (EBP);
  /* 1294ebb0 pop ebp */
  EBP = (pop32());
  /* 1294ebb1 ret  */
  ESPCHK(0x1294eb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x1294ebc0 (186 bytes, 50 insns) */
void f_1294ebc0(void) {
  FTRACE(0x1294ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 1294ebc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ebc4 mov eax, dword ptr [0x1296e704] */
  EAX = (r32((uint32_t)(0x1296e704)));
  /* 1294ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 1294ebca call 0x12945980 */
  push32(0x1294ebcfu); f_12945980();
  /* 1294ebcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ebd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294ebd4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ebd7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1294ebda mov dword ptr [0x1296e700], ecx */
  w32((uint32_t)(0x1296e700), (ECX));
  /* 1294ebe0 mov edx, dword ptr [0x1296e708] */
  EDX = (r32((uint32_t)(0x1296e708)));
  /* 1294ebe6 push edx */
  push32((uint32_t)(EDX));
  /* 1294ebe7 call 0x12945980 */
  push32(0x1294ebecu); f_12945980();
  /* 1294ebec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ebef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294ebf1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ebf4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1294ebf7 mov dword ptr [0x1296e6f8], ecx */
  w32((uint32_t)(0x1296e6f8), (ECX));
  /* 1294ebfd mov dword ptr [0x1296e6f4], 0 */
  w32((uint32_t)(0x1296e6f4), (0x0u));
  /* 1294ec07 cmp dword ptr [0x1296e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ec0e je 0x1294ec19 */
  if (C.zf) goto L_1294ec19;
  /* 1294ec10 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1294ec17 jmp 0x1294ec2b */
  goto L_1294ec2b;
L_1294ec19:;
  /* 1294ec19 mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294ec1f push edx */
  push32((uint32_t)(EDX));
  /* 1294ec20 call 0x1294f660 */
  push32(0x1294ec25u); f_1294f660();
  /* 1294ec25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ec28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294ec2b:;
  /* 1294ec2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294ec2e mov dword ptr [0x1296e6fc], eax */
  w32((uint32_t)(0x1296e6fc), (EAX));
  /* 1294ec33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294ec35 push 0x1294ec80 */
  push32((uint32_t)(0x1294ec80u));
  /* 1294ec3a call dword ptr [0x1297024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297024c))), 0x1294ec40u);
  /* 1294ec40 mov ecx, dword ptr [0x1296e70c] */
  ECX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ec46 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1294ec4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294ec4e je 0x1294ec6c */
  if (C.zf) goto L_1294ec6c;
  /* 1294ec50 mov edx, dword ptr [0x1296e70c] */
  EDX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ec56 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ec5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294ec5e je 0x1294ec6c */
  if (C.zf) goto L_1294ec6c;
  /* 1294ec60 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ec65 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1294ec68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ec6a jne 0x1294ec76 */
  if (!C.zf) goto L_1294ec76;
L_1294ec6c:;
  /* 1294ec6c mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
L_1294ec76:;
  /* 1294ec76 mov esp, ebp */
  ESP = (EBP);
  /* 1294ec78 pop ebp */
  EBP = (pop32());
  /* 1294ec79 ret  */
  ESPCHK(0x1294ebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec80 @ 0x1294ec80 (804 bytes, 220 insns) */
void f_1294ec80(void) {
  FTRACE(0x1294ec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294ec80 push ebp */
  push32((uint32_t)(EBP));
  /* 1294ec81 mov ebp, esp */
  EBP = (ESP);
  /* 1294ec83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ec86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294ec89 push eax */
  push32((uint32_t)(EAX));
  /* 1294ec8a call 0x1294f5e0 */
  push32(0x1294ec8fu); f_1294f5e0();
  /* 1294ec8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ec92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1294ec95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1294ec97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294ec9a push ecx */
  push32((uint32_t)(ECX));
  /* 1294ec9b mov edx, dword ptr [0x1296e6f8] */
  EDX = (r32((uint32_t)(0x1296e6f8)));
  /* 1294eca1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294eca3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294eca5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ecab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ecb1 push edx */
  push32((uint32_t)(EDX));
  /* 1294ecb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ecb5 push eax */
  push32((uint32_t)(EAX));
  /* 1294ecb6 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294ecbcu);
  /* 1294ecbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ecbe jne 0x1294ecd4 */
  if (!C.zf) goto L_1294ecd4;
  /* 1294ecc0 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
  /* 1294ecca mov eax, 1 */
  EAX = (0x1u);
  /* 1294eccf jmp 0x1294ef9e */
  goto L_1294ef9e;
L_1294ecd4:;
  /* 1294ecd4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294ecd7 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ecd8 mov edx, dword ptr [0x1296e708] */
  EDX = (r32((uint32_t)(0x1296e708)));
  /* 1294ecde push edx */
  push32((uint32_t)(EDX));
  /* 1294ecdf call 0x12951220 */
  push32(0x1294ece4u); f_12951220();
  /* 1294ece4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ece7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ece9 jne 0x1294ee0f */
  if (!C.zf) goto L_1294ee0f;
  /* 1294ecef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1294ecf1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1294ecf4 push eax */
  push32((uint32_t)(EAX));
  /* 1294ecf5 mov ecx, dword ptr [0x1296e700] */
  ECX = (r32((uint32_t)(0x1296e700)));
  /* 1294ecfb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294ecfd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ecff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1294ed05 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ed0b push ecx */
  push32((uint32_t)(ECX));
  /* 1294ed0c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ed0f push edx */
  push32((uint32_t)(EDX));
  /* 1294ed10 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294ed16u);
  /* 1294ed16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ed18 jne 0x1294ed2e */
  if (!C.zf) goto L_1294ed2e;
  /* 1294ed1a mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
  /* 1294ed24 mov eax, 1 */
  EAX = (0x1u);
  /* 1294ed29 jmp 0x1294ef9e */
  goto L_1294ef9e;
L_1294ed2e:;
  /* 1294ed2e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1294ed31 push eax */
  push32((uint32_t)(EAX));
  /* 1294ed32 mov ecx, dword ptr [0x1296e704] */
  ECX = (r32((uint32_t)(0x1296e704)));
  /* 1294ed38 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ed39 call 0x12951220 */
  push32(0x1294ed3eu); f_12951220();
  /* 1294ed3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ed41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ed43 jne 0x1294ed70 */
  if (!C.zf) goto L_1294ed70;
  /* 1294ed45 mov edx, dword ptr [0x1296e70c] */
  EDX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ed4b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ed51 mov dword ptr [0x1296e70c], edx */
  w32((uint32_t)(0x1296e70c), (EDX));
  /* 1294ed57 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ed5a mov dword ptr [0x1296e710], eax */
  w32((uint32_t)(0x1296e710), (EAX));
  /* 1294ed5f mov ecx, dword ptr [0x1296e710] */
  ECX = (r32((uint32_t)(0x1296e710)));
  /* 1294ed65 mov dword ptr [0x1296e6f4], ecx */
  w32((uint32_t)(0x1296e6f4), (ECX));
  /* 1294ed6b jmp 0x1294ee0f */
  goto L_1294ee0f;
L_1294ed70:;
  /* 1294ed70 mov edx, dword ptr [0x1296e70c] */
  EDX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ed76 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ed79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294ed7b jne 0x1294ee0f */
  if (!C.zf) goto L_1294ee0f;
  /* 1294ed81 cmp dword ptr [0x1296e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ed88 je 0x1294eddd */
  if (C.zf) goto L_1294eddd;
  /* 1294ed8a mov eax, dword ptr [0x1296e6fc] */
  EAX = (r32((uint32_t)(0x1296e6fc)));
  /* 1294ed8f push eax */
  push32((uint32_t)(EAX));
  /* 1294ed90 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294ed93 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ed94 mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294ed9a push edx */
  push32((uint32_t)(EDX));
  /* 1294ed9b call 0x129512f0 */
  push32(0x1294eda0u); f_129512f0();
  /* 1294eda0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eda3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294eda5 jne 0x1294eddd */
  if (!C.zf) goto L_1294eddd;
  /* 1294eda7 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294edac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1294edae mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
  /* 1294edb3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294edb6 mov dword ptr [0x1296e710], ecx */
  w32((uint32_t)(0x1296e710), (ECX));
  /* 1294edbc mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294edc2 push edx */
  push32((uint32_t)(EDX));
  /* 1294edc3 call 0x12945980 */
  push32(0x1294edc8u); f_12945980();
  /* 1294edc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294edcb cmp eax, dword ptr [0x1296e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294edd1 jne 0x1294eddb */
  if (!C.zf) goto L_1294eddb;
  /* 1294edd3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294edd6 mov dword ptr [0x1296e6f4], eax */
  w32((uint32_t)(0x1296e6f4), (EAX));
L_1294eddb:;
  /* 1294eddb jmp 0x1294ee0f */
  goto L_1294ee0f;
L_1294eddd:;
  /* 1294eddd mov ecx, dword ptr [0x1296e70c] */
  ECX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ede3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294ede6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294ede8 jne 0x1294ee0f */
  if (!C.zf) goto L_1294ee0f;
  /* 1294edea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294eded push edx */
  push32((uint32_t)(EDX));
  /* 1294edee call 0x1294f320 */
  push32(0x1294edf3u); f_1294f320();
  /* 1294edf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294edf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294edf8 je 0x1294ee0f */
  if (C.zf) goto L_1294ee0f;
  /* 1294edfa mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294edff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1294ee01 mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
  /* 1294ee06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ee09 mov dword ptr [0x1296e710], ecx */
  w32((uint32_t)(0x1296e710), (ECX));
L_1294ee0f:;
  /* 1294ee0f mov edx, dword ptr [0x1296e70c] */
  EDX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ee15 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1294ee1b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ee21 je 0x1294ef91 */
  if (C.zf) goto L_1294ef91;
  /* 1294ee27 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1294ee29 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1294ee2c push eax */
  push32((uint32_t)(EAX));
  /* 1294ee2d mov ecx, dword ptr [0x1296e700] */
  ECX = (r32((uint32_t)(0x1296e700)));
  /* 1294ee33 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294ee35 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ee37 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1294ee3d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ee43 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ee44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ee47 push edx */
  push32((uint32_t)(EDX));
  /* 1294ee48 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294ee4eu);
  /* 1294ee4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ee50 jne 0x1294ee66 */
  if (!C.zf) goto L_1294ee66;
  /* 1294ee52 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
  /* 1294ee5c mov eax, 1 */
  EAX = (0x1u);
  /* 1294ee61 jmp 0x1294ef9e */
  goto L_1294ef9e;
L_1294ee66:;
  /* 1294ee66 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1294ee69 push eax */
  push32((uint32_t)(EAX));
  /* 1294ee6a mov ecx, dword ptr [0x1296e704] */
  ECX = (r32((uint32_t)(0x1296e704)));
  /* 1294ee70 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ee71 call 0x12951220 */
  push32(0x1294ee76u); f_12951220();
  /* 1294ee76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ee79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ee7b jne 0x1294ef30 */
  if (!C.zf) goto L_1294ef30;
  /* 1294ee81 mov edx, dword ptr [0x1296e70c] */
  EDX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ee87 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1294ee8a mov dword ptr [0x1296e70c], edx */
  w32((uint32_t)(0x1296e70c), (EDX));
  /* 1294ee90 cmp dword ptr [0x1296e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ee97 je 0x1294eeba */
  if (C.zf) goto L_1294eeba;
  /* 1294ee99 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ee9e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1294eea1 mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
  /* 1294eea6 cmp dword ptr [0x1296e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eead jne 0x1294eeb8 */
  if (!C.zf) goto L_1294eeb8;
  /* 1294eeaf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294eeb2 mov dword ptr [0x1296e6f4], ecx */
  w32((uint32_t)(0x1296e6f4), (ECX));
L_1294eeb8:;
  /* 1294eeb8 jmp 0x1294ef2e */
  goto L_1294ef2e;
L_1294eeba:;
  /* 1294eeba cmp dword ptr [0x1296e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eec1 je 0x1294ef0f */
  if (C.zf) goto L_1294ef0f;
  /* 1294eec3 mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294eec9 push edx */
  push32((uint32_t)(EDX));
  /* 1294eeca call 0x12945980 */
  push32(0x1294eecfu); f_12945980();
  /* 1294eecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eed2 cmp eax, dword ptr [0x1296e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294eed8 jne 0x1294ef0f */
  if (!C.zf) goto L_1294ef0f;
  /* 1294eeda push 1 */
  push32((uint32_t)(0x1u));
  /* 1294eedc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294eedf push eax */
  push32((uint32_t)(EAX));
  /* 1294eee0 call 0x1294f370 */
  push32(0x1294eee5u); f_1294f370();
  /* 1294eee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294eeea je 0x1294ef0d */
  if (C.zf) goto L_1294ef0d;
  /* 1294eeec mov ecx, dword ptr [0x1296e70c] */
  ECX = (r32((uint32_t)(0x1296e70c)));
  /* 1294eef2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1294eef5 mov dword ptr [0x1296e70c], ecx */
  w32((uint32_t)(0x1296e70c), (ECX));
  /* 1294eefb cmp dword ptr [0x1296e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ef02 jne 0x1294ef0d */
  if (!C.zf) goto L_1294ef0d;
  /* 1294ef04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ef07 mov dword ptr [0x1296e6f4], edx */
  w32((uint32_t)(0x1296e6f4), (EDX));
L_1294ef0d:;
  /* 1294ef0d jmp 0x1294ef2e */
  goto L_1294ef2e;
L_1294ef0f:;
  /* 1294ef0f mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ef14 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1294ef17 mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
  /* 1294ef1c cmp dword ptr [0x1296e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ef23 jne 0x1294ef2e */
  if (!C.zf) goto L_1294ef2e;
  /* 1294ef25 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ef28 mov dword ptr [0x1296e6f4], ecx */
  w32((uint32_t)(0x1296e6f4), (ECX));
L_1294ef2e:;
  /* 1294ef2e jmp 0x1294ef91 */
  goto L_1294ef91;
L_1294ef30:;
  /* 1294ef30 cmp dword ptr [0x1296e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ef37 jne 0x1294ef91 */
  if (!C.zf) goto L_1294ef91;
  /* 1294ef39 cmp dword ptr [0x1296e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ef40 je 0x1294ef91 */
  if (C.zf) goto L_1294ef91;
  /* 1294ef42 mov edx, dword ptr [0x1296e6fc] */
  EDX = (r32((uint32_t)(0x1296e6fc)));
  /* 1294ef48 push edx */
  push32((uint32_t)(EDX));
  /* 1294ef49 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1294ef4c push eax */
  push32((uint32_t)(EAX));
  /* 1294ef4d mov ecx, dword ptr [0x1296e704] */
  ECX = (r32((uint32_t)(0x1296e704)));
  /* 1294ef53 push ecx */
  push32((uint32_t)(ECX));
  /* 1294ef54 call 0x129512f0 */
  push32(0x1294ef59u); f_129512f0();
  /* 1294ef59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ef5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ef5e jne 0x1294ef91 */
  if (!C.zf) goto L_1294ef91;
  /* 1294ef60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294ef62 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ef65 push edx */
  push32((uint32_t)(EDX));
  /* 1294ef66 call 0x1294f370 */
  push32(0x1294ef6bu); f_1294f370();
  /* 1294ef6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294ef6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294ef70 je 0x1294ef91 */
  if (C.zf) goto L_1294ef91;
  /* 1294ef72 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ef77 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1294ef7a mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
  /* 1294ef7f cmp dword ptr [0x1296e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294ef86 jne 0x1294ef91 */
  if (!C.zf) goto L_1294ef91;
  /* 1294ef88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294ef8b mov dword ptr [0x1296e6f4], ecx */
  w32((uint32_t)(0x1296e6f4), (ECX));
L_1294ef91:;
  /* 1294ef91 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294ef96 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1294ef99 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294ef9b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294ef9d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1294ef9e:;
  /* 1294ef9e mov esp, ebp */
  ESP = (EBP);
  /* 1294efa0 pop ebp */
  EBP = (pop32());
  /* 1294efa1 ret 4 */
  ESPCHK(0x1294ec80u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efb0 @ 0x1294efb0 (116 bytes, 33 insns) */
void f_1294efb0(void) {
  FTRACE(0x1294efb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294efb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294efb1 mov ebp, esp */
  EBP = (ESP);
  /* 1294efb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294efb4 mov eax, dword ptr [0x1296e704] */
  EAX = (r32((uint32_t)(0x1296e704)));
  /* 1294efb9 push eax */
  push32((uint32_t)(EAX));
  /* 1294efba call 0x12945980 */
  push32(0x1294efbfu); f_12945980();
  /* 1294efbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294efc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294efc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294efc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1294efca mov dword ptr [0x1296e700], ecx */
  w32((uint32_t)(0x1296e700), (ECX));
  /* 1294efd0 cmp dword ptr [0x1296e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294efd7 je 0x1294efe2 */
  if (C.zf) goto L_1294efe2;
  /* 1294efd9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1294efe0 jmp 0x1294eff4 */
  goto L_1294eff4;
L_1294efe2:;
  /* 1294efe2 mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294efe8 push edx */
  push32((uint32_t)(EDX));
  /* 1294efe9 call 0x1294f660 */
  push32(0x1294efeeu); f_1294f660();
  /* 1294efee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294eff1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294eff4:;
  /* 1294eff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294eff7 mov dword ptr [0x1296e6fc], eax */
  w32((uint32_t)(0x1296e6fc), (EAX));
  /* 1294effc push 1 */
  push32((uint32_t)(0x1u));
  /* 1294effe push 0x1294f030 */
  push32((uint32_t)(0x1294f030u));
  /* 1294f003 call dword ptr [0x1297024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297024c))), 0x1294f009u);
  /* 1294f009 mov ecx, dword ptr [0x1296e70c] */
  ECX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f00f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1294f012 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294f014 jne 0x1294f020 */
  if (!C.zf) goto L_1294f020;
  /* 1294f016 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
L_1294f020:;
  /* 1294f020 mov esp, ebp */
  ESP = (EBP);
  /* 1294f022 pop ebp */
  EBP = (pop32());
  /* 1294f023 ret  */
  ESPCHK(0x1294efb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f030 @ 0x1294f030 (287 bytes, 86 insns) */
void f_1294f030(void) {
  FTRACE(0x1294f030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f030 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f031 mov ebp, esp */
  EBP = (ESP);
  /* 1294f033 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f039 push eax */
  push32((uint32_t)(EAX));
  /* 1294f03a call 0x1294f5e0 */
  push32(0x1294f03fu); f_1294f5e0();
  /* 1294f03f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f042 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1294f045 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1294f047 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294f04a push ecx */
  push32((uint32_t)(ECX));
  /* 1294f04b mov edx, dword ptr [0x1296e700] */
  EDX = (r32((uint32_t)(0x1296e700)));
  /* 1294f051 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294f053 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f055 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1294f05b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f061 push edx */
  push32((uint32_t)(EDX));
  /* 1294f062 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f065 push eax */
  push32((uint32_t)(EAX));
  /* 1294f066 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294f06cu);
  /* 1294f06c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f06e jne 0x1294f084 */
  if (!C.zf) goto L_1294f084;
  /* 1294f070 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
  /* 1294f07a mov eax, 1 */
  EAX = (0x1u);
  /* 1294f07f jmp 0x1294f149 */
  goto L_1294f149;
L_1294f084:;
  /* 1294f084 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294f087 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f088 mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294f08e push edx */
  push32((uint32_t)(EDX));
  /* 1294f08f call 0x12951220 */
  push32(0x1294f094u); f_12951220();
  /* 1294f094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f099 jne 0x1294f0d9 */
  if (!C.zf) goto L_1294f0d9;
  /* 1294f09b cmp dword ptr [0x1296e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f0a2 jne 0x1294f0b6 */
  if (!C.zf) goto L_1294f0b6;
  /* 1294f0a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294f0a6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1294f0aa call 0x1294f370 */
  push32(0x1294f0afu); f_1294f370();
  /* 1294f0af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f0b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f0b4 je 0x1294f0d7 */
  if (C.zf) goto L_1294f0d7;
L_1294f0b6:;
  /* 1294f0b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f0b9 mov dword ptr [0x1296e710], ecx */
  w32((uint32_t)(0x1296e710), (ECX));
  /* 1294f0bf mov edx, dword ptr [0x1296e710] */
  EDX = (r32((uint32_t)(0x1296e710)));
  /* 1294f0c5 mov dword ptr [0x1296e6f4], edx */
  w32((uint32_t)(0x1296e6f4), (EDX));
  /* 1294f0cb mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f0d0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1294f0d2 mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
L_1294f0d7:;
  /* 1294f0d7 jmp 0x1294f13c */
  goto L_1294f13c;
L_1294f0d9:;
  /* 1294f0d9 cmp dword ptr [0x1296e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f0e0 jne 0x1294f13c */
  if (!C.zf) goto L_1294f13c;
  /* 1294f0e2 cmp dword ptr [0x1296e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f0e9 je 0x1294f13c */
  if (C.zf) goto L_1294f13c;
  /* 1294f0eb mov ecx, dword ptr [0x1296e6fc] */
  ECX = (r32((uint32_t)(0x1296e6fc)));
  /* 1294f0f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f0f2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1294f0f5 push edx */
  push32((uint32_t)(EDX));
  /* 1294f0f6 mov eax, dword ptr [0x1296e704] */
  EAX = (r32((uint32_t)(0x1296e704)));
  /* 1294f0fb push eax */
  push32((uint32_t)(EAX));
  /* 1294f0fc call 0x129512f0 */
  push32(0x1294f101u); f_129512f0();
  /* 1294f101 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f106 jne 0x1294f13c */
  if (!C.zf) goto L_1294f13c;
  /* 1294f108 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294f10a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f10d push ecx */
  push32((uint32_t)(ECX));
  /* 1294f10e call 0x1294f370 */
  push32(0x1294f113u); f_1294f370();
  /* 1294f113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f118 je 0x1294f13c */
  if (C.zf) goto L_1294f13c;
  /* 1294f11a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f11d mov dword ptr [0x1296e710], edx */
  w32((uint32_t)(0x1296e710), (EDX));
  /* 1294f123 mov eax, dword ptr [0x1296e710] */
  EAX = (r32((uint32_t)(0x1296e710)));
  /* 1294f128 mov dword ptr [0x1296e6f4], eax */
  w32((uint32_t)(0x1296e6f4), (EAX));
  /* 1294f12d mov ecx, dword ptr [0x1296e70c] */
  ECX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f133 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1294f136 mov dword ptr [0x1296e70c], ecx */
  w32((uint32_t)(0x1296e70c), (ECX));
L_1294f13c:;
  /* 1294f13c mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f141 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1294f144 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294f146 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f148 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1294f149:;
  /* 1294f149 mov esp, ebp */
  ESP = (EBP);
  /* 1294f14b pop ebp */
  EBP = (pop32());
  /* 1294f14c ret 4 */
  ESPCHK(0x1294f030u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f150 @ 0x1294f150 (69 bytes, 20 insns) */
void f_1294f150(void) {
  FTRACE(0x1294f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f150 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f151 mov ebp, esp */
  EBP = (ESP);
  /* 1294f153 mov eax, dword ptr [0x1296e708] */
  EAX = (r32((uint32_t)(0x1296e708)));
  /* 1294f158 push eax */
  push32((uint32_t)(EAX));
  /* 1294f159 call 0x12945980 */
  push32(0x1294f15eu); f_12945980();
  /* 1294f15e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f161 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294f163 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f166 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1294f169 mov dword ptr [0x1296e6f8], ecx */
  w32((uint32_t)(0x1296e6f8), (ECX));
  /* 1294f16f push 1 */
  push32((uint32_t)(0x1u));
  /* 1294f171 push 0x1294f1a0 */
  push32((uint32_t)(0x1294f1a0u));
  /* 1294f176 call dword ptr [0x1297024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297024c))), 0x1294f17cu);
  /* 1294f17c mov edx, dword ptr [0x1296e70c] */
  EDX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f182 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1294f185 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294f187 jne 0x1294f193 */
  if (!C.zf) goto L_1294f193;
  /* 1294f189 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
L_1294f193:;
  /* 1294f193 pop ebp */
  EBP = (pop32());
  /* 1294f194 ret  */
  ESPCHK(0x1294f150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1a0 @ 0x1294f1a0 (172 bytes, 54 insns) */
void f_1294f1a0(void) {
  FTRACE(0x1294f1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1294f1a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f1a9 push eax */
  push32((uint32_t)(EAX));
  /* 1294f1aa call 0x1294f5e0 */
  push32(0x1294f1afu); f_1294f5e0();
  /* 1294f1af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f1b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1294f1b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1294f1b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294f1ba push ecx */
  push32((uint32_t)(ECX));
  /* 1294f1bb mov edx, dword ptr [0x1296e6f8] */
  EDX = (r32((uint32_t)(0x1296e6f8)));
  /* 1294f1c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294f1c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f1c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1294f1cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1294f1d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1294f1d6 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294f1dcu);
  /* 1294f1dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f1de jne 0x1294f1f1 */
  if (!C.zf) goto L_1294f1f1;
  /* 1294f1e0 mov dword ptr [0x1296e70c], 0 */
  w32((uint32_t)(0x1296e70c), (0x0u));
  /* 1294f1ea mov eax, 1 */
  EAX = (0x1u);
  /* 1294f1ef jmp 0x1294f246 */
  goto L_1294f246;
L_1294f1f1:;
  /* 1294f1f1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1294f1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f1f5 mov edx, dword ptr [0x1296e708] */
  EDX = (r32((uint32_t)(0x1296e708)));
  /* 1294f1fb push edx */
  push32((uint32_t)(EDX));
  /* 1294f1fc call 0x12951220 */
  push32(0x1294f201u); f_12951220();
  /* 1294f201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f206 jne 0x1294f239 */
  if (!C.zf) goto L_1294f239;
  /* 1294f208 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f20b push eax */
  push32((uint32_t)(EAX));
  /* 1294f20c call 0x1294f320 */
  push32(0x1294f211u); f_1294f320();
  /* 1294f211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f216 je 0x1294f239 */
  if (C.zf) goto L_1294f239;
  /* 1294f218 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1294f21b mov dword ptr [0x1296e710], ecx */
  w32((uint32_t)(0x1296e710), (ECX));
  /* 1294f221 mov edx, dword ptr [0x1296e710] */
  EDX = (r32((uint32_t)(0x1296e710)));
  /* 1294f227 mov dword ptr [0x1296e6f4], edx */
  w32((uint32_t)(0x1296e6f4), (EDX));
  /* 1294f22d mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f232 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1294f234 mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
L_1294f239:;
  /* 1294f239 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f23e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1294f241 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294f243 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f245 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1294f246:;
  /* 1294f246 mov esp, ebp */
  ESP = (EBP);
  /* 1294f248 pop ebp */
  EBP = (pop32());
  /* 1294f249 ret 4 */
  ESPCHK(0x1294f1a0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f250 @ 0x1294f250 (43 bytes, 11 insns) */
void f_1294f250(void) {
  FTRACE(0x1294f250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f250 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f251 mov ebp, esp */
  EBP = (ESP);
  /* 1294f253 mov eax, dword ptr [0x1296e70c] */
  EAX = (r32((uint32_t)(0x1296e70c)));
  /* 1294f258 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1294f25d mov dword ptr [0x1296e70c], eax */
  w32((uint32_t)(0x1296e70c), (EAX));
  /* 1294f262 call dword ptr [0x12970248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970248))), 0x1294f268u);
  /* 1294f268 mov dword ptr [0x1296e710], eax */
  w32((uint32_t)(0x1296e710), (EAX));
  /* 1294f26d mov ecx, dword ptr [0x1296e710] */
  ECX = (r32((uint32_t)(0x1296e710)));
  /* 1294f273 mov dword ptr [0x1296e6f4], ecx */
  w32((uint32_t)(0x1296e6f4), (ECX));
  /* 1294f279 pop ebp */
  EBP = (pop32());
  /* 1294f27a ret  */
  ESPCHK(0x1294f250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f280 @ 0x1294f280 (155 bytes, 57 insns) */
void f_1294f280(void) {
  FTRACE(0x1294f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f280 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f281 mov ebp, esp */
  EBP = (ESP);
  /* 1294f283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f286 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f28a je 0x1294f2ab */
  if (C.zf) goto L_1294f2ab;
  /* 1294f28c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f28f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294f292 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294f294 je 0x1294f2ab */
  if (C.zf) goto L_1294f2ab;
  /* 1294f296 push 0x1296a6a4 */
  push32((uint32_t)(0x1296a6a4u));
  /* 1294f29b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f29e push edx */
  push32((uint32_t)(EDX));
  /* 1294f29f call 0x1294e7e0 */
  push32(0x1294f2a4u); f_1294e7e0();
  /* 1294f2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f2a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f2a9 jne 0x1294f2d3 */
  if (!C.zf) goto L_1294f2d3;
L_1294f2ab:;
  /* 1294f2ab push 8 */
  push32((uint32_t)(0x8u));
  /* 1294f2ad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1294f2b0 push eax */
  push32((uint32_t)(EAX));
  /* 1294f2b1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1294f2b6 mov ecx, dword ptr [0x1296e710] */
  ECX = (r32((uint32_t)(0x1296e710)));
  /* 1294f2bc push ecx */
  push32((uint32_t)(ECX));
  /* 1294f2bd call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294f2c3u);
  /* 1294f2c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f2c5 jne 0x1294f2cb */
  if (!C.zf) goto L_1294f2cb;
  /* 1294f2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294f2c9 jmp 0x1294f317 */
  goto L_1294f317;
L_1294f2cb:;
  /* 1294f2cb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1294f2ce mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1294f2d1 jmp 0x1294f30b */
  goto L_1294f30b;
L_1294f2d3:;
  /* 1294f2d3 push 0x1296a6a0 */
  push32((uint32_t)(0x1296a6a0u));
  /* 1294f2d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f2db push eax */
  push32((uint32_t)(EAX));
  /* 1294f2dc call 0x1294e7e0 */
  push32(0x1294f2e1u); f_1294e7e0();
  /* 1294f2e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f2e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f2e6 jne 0x1294f30b */
  if (!C.zf) goto L_1294f30b;
  /* 1294f2e8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1294f2ea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1294f2ed push ecx */
  push32((uint32_t)(ECX));
  /* 1294f2ee push 0xb */
  push32((uint32_t)(0xbu));
  /* 1294f2f0 mov edx, dword ptr [0x1296e710] */
  EDX = (r32((uint32_t)(0x1296e710)));
  /* 1294f2f6 push edx */
  push32((uint32_t)(EDX));
  /* 1294f2f7 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294f2fdu);
  /* 1294f2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f2ff jne 0x1294f305 */
  if (!C.zf) goto L_1294f305;
  /* 1294f301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294f303 jmp 0x1294f317 */
  goto L_1294f317;
L_1294f305:;
  /* 1294f305 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1294f308 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1294f30b:;
  /* 1294f30b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f30e push ecx */
  push32((uint32_t)(ECX));
  /* 1294f30f call 0x12951400 */
  push32(0x1294f314u); f_12951400();
  /* 1294f314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294f317:;
  /* 1294f317 mov esp, ebp */
  ESP = (EBP);
  /* 1294f319 pop ebp */
  EBP = (pop32());
  /* 1294f31a ret  */
  ESPCHK(0x1294f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x1294f320 (79 bytes, 26 insns) */
void f_1294f320(void) {
  FTRACE(0x1294f320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f320 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f321 mov ebp, esp */
  EBP = (ESP);
  /* 1294f323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f326 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1294f32a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1294f32e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294f335 jmp 0x1294f340 */
  goto L_1294f340;
L_1294f337:;
  /* 1294f337 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294f33a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f33d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1294f340:;
  /* 1294f340 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f344 jae 0x1294f366 */
  if (!C.cf) goto L_1294f366;
  /* 1294f346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f349 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294f34f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294f352 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294f354 mov cx, word ptr [eax*2 + 0x1296d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1296d9c4)));
  /* 1294f35c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f35e jne 0x1294f364 */
  if (!C.zf) goto L_1294f364;
  /* 1294f360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294f362 jmp 0x1294f36b */
  goto L_1294f36b;
L_1294f364:;
  /* 1294f364 jmp 0x1294f337 */
  goto L_1294f337;
L_1294f366:;
  /* 1294f366 mov eax, 1 */
  EAX = (0x1u);
L_1294f36b:;
  /* 1294f36b mov esp, ebp */
  ESP = (EBP);
  /* 1294f36d pop ebp */
  EBP = (pop32());
  /* 1294f36e ret  */
  ESPCHK(0x1294f320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x1294f370 (135 bytes, 48 insns) */
void f_1294f370(void) {
  FTRACE(0x1294f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f370 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f371 mov ebp, esp */
  EBP = (ESP);
  /* 1294f373 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f376 push esi */
  push32((uint32_t)(ESI));
  /* 1294f377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f37a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294f37f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294f384 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294f389 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1294f38c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294f391 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294f394 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1294f396 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1294f399 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f39a push 1 */
  push32((uint32_t)(0x1u));
  /* 1294f39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f39f push edx */
  push32((uint32_t)(EDX));
  /* 1294f3a0 call dword ptr [0x1296e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e714))), 0x1294f3a6u);
  /* 1294f3a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f3a8 jne 0x1294f3ae */
  if (!C.zf) goto L_1294f3ae;
  /* 1294f3aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294f3ac jmp 0x1294f3f2 */
  goto L_1294f3f2;
L_1294f3ae:;
  /* 1294f3ae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1294f3b1 push eax */
  push32((uint32_t)(EAX));
  /* 1294f3b2 call 0x1294f5e0 */
  push32(0x1294f3b7u); f_1294f5e0();
  /* 1294f3b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f3ba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f3bd je 0x1294f3ed */
  if (C.zf) goto L_1294f3ed;
  /* 1294f3bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f3c3 je 0x1294f3ed */
  if (C.zf) goto L_1294f3ed;
  /* 1294f3c5 mov ecx, dword ptr [0x1296e704] */
  ECX = (r32((uint32_t)(0x1296e704)));
  /* 1294f3cb push ecx */
  push32((uint32_t)(ECX));
  /* 1294f3cc call 0x1294f660 */
  push32(0x1294f3d1u); f_1294f660();
  /* 1294f3d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f3d4 mov esi, eax */
  ESI = (EAX);
  /* 1294f3d6 mov edx, dword ptr [0x1296e704] */
  EDX = (r32((uint32_t)(0x1296e704)));
  /* 1294f3dc push edx */
  push32((uint32_t)(EDX));
  /* 1294f3dd call 0x12945980 */
  push32(0x1294f3e2u); f_12945980();
  /* 1294f3e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f3e5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f3e7 jne 0x1294f3ed */
  if (!C.zf) goto L_1294f3ed;
  /* 1294f3e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294f3eb jmp 0x1294f3f2 */
  goto L_1294f3f2;
L_1294f3ed:;
  /* 1294f3ed mov eax, 1 */
  EAX = (0x1u);
L_1294f3f2:;
  /* 1294f3f2 pop esi */
  ESI = (pop32());
  /* 1294f3f3 mov esp, ebp */
  ESP = (EBP);
  /* 1294f3f5 pop ebp */
  EBP = (pop32());
  /* 1294f3f6 ret  */
  ESPCHK(0x1294f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f400 @ 0x1294f400 (77 bytes, 18 insns) */
void f_1294f400(void) {
  FTRACE(0x1294f400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f400 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f401 mov ebp, esp */
  EBP = (ESP);
  /* 1294f403 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f409 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1294f413 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1294f419 push eax */
  push32((uint32_t)(EAX));
  /* 1294f41a call dword ptr [0x12970244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970244))), 0x1294f420u);
  /* 1294f420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294f422 je 0x1294f439 */
  if (C.zf) goto L_1294f439;
  /* 1294f424 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f42b jne 0x1294f439 */
  if (!C.zf) goto L_1294f439;
  /* 1294f42d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1294f437 jmp 0x1294f443 */
  goto L_1294f443;
L_1294f439:;
  /* 1294f439 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1294f443:;
  /* 1294f443 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1294f449 mov esp, ebp */
  ESP = (EBP);
  /* 1294f44b pop ebp */
  EBP = (pop32());
  /* 1294f44c ret  */
  ESPCHK(0x1294f400u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1294f450 (388 bytes, 118 insns) */
void f_1294f450(void) {
  FTRACE(0x1294f450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f450 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f451 mov ebp, esp */
  EBP = (ESP);
  /* 1294f453 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f456 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1294f45d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1294f464 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1294f46b:;
  /* 1294f46b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f46e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f471 jg 0x1294f5b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294f5b8;
  /* 1294f477 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294f47a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f47d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1294f47e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f480 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1294f482 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294f485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f488 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f48e cmp edx, dword ptr [ecx + 0x1296d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1296d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f494 jne 0x1294f58e */
  if (!C.zf) goto L_1294f58e;
  /* 1294f49a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294f49d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1294f4a0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4a4 ja 0x1294f4c7 */
  if ((!C.cf&&!C.zf)) goto L_1294f4c7;
  /* 1294f4a6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4aa je 0x1294f539 */
  if (C.zf) goto L_1294f539;
  /* 1294f4b0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4b4 je 0x1294f4e4 */
  if (C.zf) goto L_1294f4e4;
  /* 1294f4b6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4ba je 0x1294f506 */
  if (C.zf) goto L_1294f506;
  /* 1294f4bc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4c0 je 0x1294f528 */
  if (C.zf) goto L_1294f528;
  /* 1294f4c2 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f4c7:;
  /* 1294f4c7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4ce je 0x1294f4f5 */
  if (C.zf) goto L_1294f4f5;
  /* 1294f4d0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4d7 je 0x1294f517 */
  if (C.zf) goto L_1294f517;
  /* 1294f4d9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f4e0 je 0x1294f54a */
  if (C.zf) goto L_1294f54a;
  /* 1294f4e2 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f4e4:;
  /* 1294f4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f4e7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f4ea add ecx, 0x1296d524 */
  { uint32_t _a=(ECX),_b=(0x1296d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f4f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294f4f3 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f4f5:;
  /* 1294f4f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f4f8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f4fb mov eax, dword ptr [edx + 0x1296d52c] */
  EAX = (r32((uint32_t)(EDX + 0x1296d52c)));
  /* 1294f501 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294f504 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f506:;
  /* 1294f506 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f509 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f50c add ecx, 0x1296d530 */
  { uint32_t _a=(ECX),_b=(0x1296d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f512 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294f515 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f517:;
  /* 1294f517 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f51a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f51d mov eax, dword ptr [edx + 0x1296d534] */
  EAX = (r32((uint32_t)(EDX + 0x1296d534)));
  /* 1294f523 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294f526 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f528:;
  /* 1294f528 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f52b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f52e add ecx, 0x1296d538 */
  { uint32_t _a=(ECX),_b=(0x1296d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f534 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294f537 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f539:;
  /* 1294f539 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f53c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f53f add edx, 0x1296d53c */
  { uint32_t _a=(EDX),_b=(0x1296d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f545 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294f548 jmp 0x1294f558 */
  goto L_1294f558;
L_1294f54a:;
  /* 1294f54a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f54d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f550 add eax, 0x1296d544 */
  { uint32_t _a=(EAX),_b=(0x1296d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f555 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1294f558:;
  /* 1294f558 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f55c je 0x1294f564 */
  if (C.zf) goto L_1294f564;
  /* 1294f55e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f562 jge 0x1294f566 */
  if ((C.sf==C.of)) goto L_1294f566;
L_1294f564:;
  /* 1294f564 jmp 0x1294f5b8 */
  goto L_1294f5b8;
L_1294f566:;
  /* 1294f566 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294f569 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f56c push ecx */
  push32((uint32_t)(ECX));
  /* 1294f56d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294f570 push edx */
  push32((uint32_t)(EDX));
  /* 1294f571 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294f574 push eax */
  push32((uint32_t)(EAX));
  /* 1294f575 call 0x12946370 */
  push32(0x1294f57au); f_12946370();
  /* 1294f57a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f57d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294f580 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f583 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1294f587 mov eax, 1 */
  EAX = (0x1u);
  /* 1294f58c jmp 0x1294f5ce */
  goto L_1294f5ce;
L_1294f58e:;
  /* 1294f58e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f591 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f597 cmp eax, dword ptr [edx + 0x1296d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1296d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f59d jae 0x1294f5aa */
  if (!C.cf) goto L_1294f5aa;
  /* 1294f59f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f5a2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f5a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294f5a8 jmp 0x1294f5b3 */
  goto L_1294f5b3;
L_1294f5aa:;
  /* 1294f5aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294f5ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f5b0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1294f5b3:;
  /* 1294f5b3 jmp 0x1294f46b */
  goto L_1294f46b;
L_1294f5b8:;
  /* 1294f5b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294f5bb push eax */
  push32((uint32_t)(EAX));
  /* 1294f5bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294f5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1294f5c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294f5c3 push edx */
  push32((uint32_t)(EDX));
  /* 1294f5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f5c7 push eax */
  push32((uint32_t)(EAX));
  /* 1294f5c8 call dword ptr [0x12970250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970250))), 0x1294f5ceu);
L_1294f5ce:;
  /* 1294f5ce mov esp, ebp */
  ESP = (EBP);
  /* 1294f5d0 pop ebp */
  EBP = (pop32());
  /* 1294f5d1 ret 0x10 */
  ESPCHK(0x1294f450u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f5e0 @ 0x1294f5e0 (118 bytes, 42 insns) */
void f_1294f5e0(void) {
  FTRACE(0x1294f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1294f5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f5e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1294f5ed:;
  /* 1294f5ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f5f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1294f5f2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1294f5f5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294f5f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f5fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f5ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1294f602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294f604 je 0x1294f64f */
  if (C.zf) goto L_1294f64f;
  /* 1294f606 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294f60a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f60d jl 0x1294f622 */
  if ((C.sf!=C.of)) goto L_1294f622;
  /* 1294f60f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294f613 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f616 jg 0x1294f622 */
  if ((!C.zf&&C.sf==C.of)) goto L_1294f622;
  /* 1294f618 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1294f61b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294f61d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1294f620 jmp 0x1294f63c */
  goto L_1294f63c;
L_1294f622:;
  /* 1294f622 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294f626 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f629 jl 0x1294f63c */
  if ((C.sf!=C.of)) goto L_1294f63c;
  /* 1294f62b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294f62f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f632 jg 0x1294f63c */
  if ((!C.zf&&C.sf==C.of)) goto L_1294f63c;
  /* 1294f634 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1294f637 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1294f639 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1294f63c:;
  /* 1294f63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f63f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1294f642 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1294f646 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1294f64a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294f64d jmp 0x1294f5ed */
  goto L_1294f5ed;
L_1294f64f:;
  /* 1294f64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294f652 mov esp, ebp */
  ESP = (EBP);
  /* 1294f654 pop ebp */
  EBP = (pop32());
  /* 1294f655 ret  */
  ESPCHK(0x1294f5e0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1294f660 (101 bytes, 36 insns) */
void f_1294f660(void) {
  FTRACE(0x1294f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f660 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f661 mov ebp, esp */
  EBP = (ESP);
  /* 1294f663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294f666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1294f66d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f670 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1294f672 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1294f675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f678 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f67b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1294f67e:;
  /* 1294f67e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1294f682 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f685 jl 0x1294f690 */
  if ((C.sf!=C.of)) goto L_1294f690;
  /* 1294f687 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1294f68b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f68e jle 0x1294f6a2 */
  if ((C.zf||C.sf!=C.of)) goto L_1294f6a2;
L_1294f690:;
  /* 1294f690 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1294f694 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f697 jl 0x1294f6be */
  if ((C.sf!=C.of)) goto L_1294f6be;
  /* 1294f699 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1294f69d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f6a0 jg 0x1294f6be */
  if ((!C.zf&&C.sf==C.of)) goto L_1294f6be;
L_1294f6a2:;
  /* 1294f6a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294f6a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f6a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1294f6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f6ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1294f6b0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1294f6b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f6b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f6b9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1294f6bc jmp 0x1294f67e */
  goto L_1294f67e;
L_1294f6be:;
  /* 1294f6be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294f6c1 mov esp, ebp */
  ESP = (EBP);
  /* 1294f6c3 pop ebp */
  EBP = (pop32());
  /* 1294f6c4 ret  */
  ESPCHK(0x1294f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x1294f6d0 (122 bytes, 39 insns) */
void f_1294f6d0(void) {
  FTRACE(0x1294f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1294f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1294f6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1294f6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f6d7 cmp eax, dword ptr [0x1296ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294f6dd jae 0x1294f701 */
  if (!C.cf) goto L_1294f701;
  /* 1294f6df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f6e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1294f6e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f6e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1294f6eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294f6ee mov eax, dword ptr [ecx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 1294f6f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1294f6fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294f6fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294f6ff jne 0x1294f71c */
  if (!C.zf) goto L_1294f71c;
L_1294f701:;
  /* 1294f701 call 0x1294aa20 */
  push32(0x1294f706u); f_1294aa20();
  /* 1294f706 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1294f70c call 0x1294aa30 */
  push32(0x1294f711u); f_1294aa30();
  /* 1294f711 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1294f717 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294f71a jmp 0x1294f746 */
  goto L_1294f746;
L_1294f71c:;
  /* 1294f71c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f71f push edx */
  push32((uint32_t)(EDX));
  /* 1294f720 call 0x1294c240 */
  push32(0x1294f725u); f_1294c240();
  /* 1294f725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f72b push eax */
  push32((uint32_t)(EAX));
  /* 1294f72c call 0x1294f750 */
  push32(0x1294f731u); f_1294f750();
  /* 1294f731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f734 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294f737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294f73a push ecx */
  push32((uint32_t)(ECX));
  /* 1294f73b call 0x1294c2d0 */
  push32(0x1294f740u); f_1294c2d0();
  /* 1294f740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294f743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294f746:;
  /* 1294f746 mov esp, ebp */
  ESP = (EBP);
  /* 1294f748 pop ebp */
  EBP = (pop32());
  /* 1294f749 ret  */
  ESPCHK(0x1294f6d0u, _esp0);
  ESP += 4; return;
}

