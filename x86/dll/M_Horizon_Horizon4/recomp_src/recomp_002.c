#include "recomp.h"

/* FUN_10011ac0 @ 0x127b1ac0 (393 bytes, 123 insns) */
void f_127b1ac0(void) {
  FTRACE(0x127b1ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1ac1 mov ebp, esp */
  EBP = (ESP);
  /* 127b1ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1ac6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1aca jne 0x127b1ad6 */
  if (!C.zf) goto L_127b1ad6;
  /* 127b1acc mov eax, dword ptr [0x127cfc98] */
  EAX = (r32((uint32_t)(0x127cfc98)));
  /* 127b1ad1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127b1ad4 jmp 0x127b1adc */
  goto L_127b1adc;
L_127b1ad6:;
  /* 127b1ad6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1ad9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127b1adc:;
  /* 127b1adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1adf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b1ae2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1ae5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b1ae8 push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127b1aed call dword ptr [0x127d32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b0))), 0x127b1af3u);
  /* 127b1af3 cmp dword ptr [0x127d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1afa je 0x127b1b1a */
  if (C.zf) goto L_127b1b1a;
  /* 127b1afc push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127b1b01 call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127b1b07u);
  /* 127b1b07 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b1b09 call 0x127a8180 */
  push32(0x127b1b0eu); f_127a8180();
  /* 127b1b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1b11 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127b1b18 jmp 0x127b1b21 */
  goto L_127b1b21;
L_127b1b1a:;
  /* 127b1b1a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127b1b21:;
  /* 127b1b21 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1b25 jbe 0x127b1c12 */
  if ((C.cf||C.zf)) goto L_127b1c12;
  /* 127b1b2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1b2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b1b30 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 127b1b33 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b1b37 je 0x127b1b41 */
  if (C.zf) goto L_127b1b41;
  /* 127b1b39 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b1b3d je 0x127b1b46 */
  if (C.zf) goto L_127b1b46;
  /* 127b1b3f jmp 0x127b1ba0 */
  goto L_127b1ba0;
L_127b1b41:;
  /* 127b1b41 jmp 0x127b1c12 */
  goto L_127b1c12;
L_127b1b46:;
  /* 127b1b46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1b4c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 127b1b4f mov dword ptr [0x127d0880], 0 */
  w32((uint32_t)(0x127d0880), (0x0u));
  /* 127b1b59 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1b5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b1b5f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1b62 jne 0x127b1b77 */
  if (!C.zf) goto L_127b1b77;
  /* 127b1b64 mov dword ptr [0x127d0880], 1 */
  w32((uint32_t)(0x127d0880), (0x1u));
  /* 127b1b6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1b71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1b74 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_127b1b77:;
  /* 127b1b77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1b7a push ecx */
  push32((uint32_t)(ECX));
  /* 127b1b7b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 127b1b7e push edx */
  push32((uint32_t)(EDX));
  /* 127b1b7f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 127b1b82 push eax */
  push32((uint32_t)(EAX));
  /* 127b1b83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1b86 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1b87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1b8a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b1b8c push eax */
  push32((uint32_t)(EAX));
  /* 127b1b8d call 0x127b1c50 */
  push32(0x127b1b92u); f_127b1c50();
  /* 127b1b92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1b98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1b9b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127b1b9e jmp 0x127b1c0d */
  goto L_127b1c0d;
L_127b1ba0:;
  /* 127b1ba0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b1ba5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b1ba7 mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b1bad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b1baf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b1bb3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127b1bb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b1bbb je 0x127b1be8 */
  if (C.zf) goto L_127b1be8;
  /* 127b1bbd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1bc1 jbe 0x127b1be8 */
  if ((C.cf||C.zf)) goto L_127b1be8;
  /* 127b1bc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1bc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1bc9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b1bcb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127b1bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1bd3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b1bd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1bd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1bdc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127b1bdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1be2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1be5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127b1be8:;
  /* 127b1be8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1beb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1bee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b1bf0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127b1bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1bf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1bf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b1bfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1bfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1c01 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 127b1c04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1c07 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1c0a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127b1c0d:;
  /* 127b1c0d jmp 0x127b1b21 */
  goto L_127b1b21;
L_127b1c12:;
  /* 127b1c12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1c16 je 0x127b1c24 */
  if (C.zf) goto L_127b1c24;
  /* 127b1c18 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b1c1a call 0x127a8220 */
  push32(0x127b1c1fu); f_127a8220();
  /* 127b1c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1c22 jmp 0x127b1c2f */
  goto L_127b1c2f;
L_127b1c24:;
  /* 127b1c24 push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127b1c29 call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127b1c2fu);
L_127b1c2f:;
  /* 127b1c2f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1c33 jbe 0x127b1c43 */
  if ((C.cf||C.zf)) goto L_127b1c43;
  /* 127b1c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1c38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127b1c3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1c3e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1c41 jmp 0x127b1c45 */
  goto L_127b1c45;
L_127b1c43:;
  /* 127b1c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b1c45:;
  /* 127b1c45 mov esp, ebp */
  ESP = (EBP);
  /* 127b1c47 pop ebp */
  EBP = (pop32());
  /* 127b1c48 ret  */
  ESPCHK(0x127b1ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x127b1c50 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_127b1c50(void) {
  FTRACE(0x127b1c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1c50 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1c51 mov ebp, esp */
  EBP = (ESP);
  /* 127b1c53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1c56 push esi */
  push32((uint32_t)(ESI));
  /* 127b1c57 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 127b1c5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b1c5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1c61 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1c64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b1c67 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1c6b ja 0x127b21b8 */
  if ((!C.cf&&!C.zf)) goto L_127b21b8;
  /* 127b1c71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1c74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b1c76 mov dl, byte ptr [eax + 0x127b2219] */
  DL = (r8((uint32_t)(EAX + 0x127b2219)));
  /* 127b1c7c jmp dword ptr [edx*4 + 0x127b21bd] */
  switch (EDX) {
    case 0: goto L_127b2196;
    case 1: goto L_127b1ca5;
    case 2: goto L_127b1ceb;
    case 3: goto L_127b1e38;
    case 4: goto L_127b1e60;
    case 5: goto L_127b1eff;
    case 6: goto L_127b1f6b;
    case 7: goto L_127b1f94;
    case 8: goto L_127b1fd5;
    case 9: goto L_127b20b7;
    case 10: goto L_127b211e;
    case 11: goto L_127b216b;
    case 12: goto L_127b1c83;
    case 13: goto L_127b1cc8;
    case 14: goto L_127b1d0e;
    case 15: goto L_127b1e0e;
    case 16: goto L_127b1ea5;
    case 17: goto L_127b1ed2;
    case 18: goto L_127b1f27;
    case 19: goto L_127b1fab;
    case 20: goto L_127b2059;
    case 21: goto L_127b20e8;
    case 22: goto L_127b21b8;
    default: x86_unimpl("switch@0x127b1c7c out of table"); return;
  }
L_127b1c83:;
  /* 127b1c83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1c86 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1c87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1c8a push edx */
  push32((uint32_t)(EDX));
  /* 127b1c8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1c8e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127b1c91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1c94 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127b1c97 push eax */
  push32((uint32_t)(EAX));
  /* 127b1c98 call 0x127b2270 */
  push32(0x127b1c9du); f_127b2270();
  /* 127b1c9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1ca0 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1ca5:;
  /* 127b1ca5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1ca9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1cac push edx */
  push32((uint32_t)(EDX));
  /* 127b1cad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1cb0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 127b1cb3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1cb6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 127b1cba push eax */
  push32((uint32_t)(EAX));
  /* 127b1cbb call 0x127b2270 */
  push32(0x127b1cc0u); f_127b2270();
  /* 127b1cc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1cc3 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1cc8:;
  /* 127b1cc8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1ccb push ecx */
  push32((uint32_t)(ECX));
  /* 127b1ccc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1ccf push edx */
  push32((uint32_t)(EDX));
  /* 127b1cd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1cd3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127b1cd6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1cd9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127b1cdd push eax */
  push32((uint32_t)(EAX));
  /* 127b1cde call 0x127b2270 */
  push32(0x127b1ce3u); f_127b2270();
  /* 127b1ce3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1ce6 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1ceb:;
  /* 127b1ceb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1cee push ecx */
  push32((uint32_t)(ECX));
  /* 127b1cef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1cf2 push edx */
  push32((uint32_t)(EDX));
  /* 127b1cf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1cf6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127b1cf9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1cfc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127b1d00 push eax */
  push32((uint32_t)(EAX));
  /* 127b1d01 call 0x127b2270 */
  push32(0x127b1d06u); f_127b2270();
  /* 127b1d06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1d09 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1d0e:;
  /* 127b1d0e cmp dword ptr [0x127d0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1d15 je 0x127b1d96 */
  if (C.zf) goto L_127b1d96;
  /* 127b1d17 mov dword ptr [0x127d0880], 0 */
  w32((uint32_t)(0x127d0880), (0x0u));
  /* 127b1d21 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1d24 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1d25 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1d28 push edx */
  push32((uint32_t)(EDX));
  /* 127b1d29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1d2c push eax */
  push32((uint32_t)(EAX));
  /* 127b1d2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1d30 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1d31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1d34 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 127b1d3a push eax */
  push32((uint32_t)(EAX));
  /* 127b1d3b call 0x127b2420 */
  push32(0x127b1d40u); f_127b2420();
  /* 127b1d40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1d43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1d46 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1d49 jne 0x127b1d50 */
  if (!C.zf) goto L_127b1d50;
  /* 127b1d4b jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1d50:;
  /* 127b1d50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1d53 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b1d55 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 127b1d58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1d5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b1d5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1d60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1d63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b1d65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1d68 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b1d6a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1d6d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1d70 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b1d72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1d75 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1d76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1d79 push edx */
  push32((uint32_t)(EDX));
  /* 127b1d7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1d7d push eax */
  push32((uint32_t)(EAX));
  /* 127b1d7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1d81 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1d82 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1d85 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 127b1d8b push eax */
  push32((uint32_t)(EAX));
  /* 127b1d8c call 0x127b2420 */
  push32(0x127b1d91u); f_127b2420();
  /* 127b1d91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1d94 jmp 0x127b1e09 */
  goto L_127b1e09;
L_127b1d96:;
  /* 127b1d96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1d99 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1d9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1d9d push edx */
  push32((uint32_t)(EDX));
  /* 127b1d9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1da1 push eax */
  push32((uint32_t)(EAX));
  /* 127b1da2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1da5 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1da6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1da9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 127b1daf push eax */
  push32((uint32_t)(EAX));
  /* 127b1db0 call 0x127b2420 */
  push32(0x127b1db5u); f_127b2420();
  /* 127b1db5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1db8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1dbb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1dbe jne 0x127b1dc5 */
  if (!C.zf) goto L_127b1dc5;
  /* 127b1dc0 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1dc5:;
  /* 127b1dc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1dc8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b1dca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 127b1dcd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1dd0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b1dd2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1dd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1dd8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b1dda mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1ddd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b1ddf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1de2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1de5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b1de7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1dea push ecx */
  push32((uint32_t)(ECX));
  /* 127b1deb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1dee push edx */
  push32((uint32_t)(EDX));
  /* 127b1def mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1df2 push eax */
  push32((uint32_t)(EAX));
  /* 127b1df3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1df6 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1df7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1dfa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 127b1e00 push eax */
  push32((uint32_t)(EAX));
  /* 127b1e01 call 0x127b2420 */
  push32(0x127b1e06u); f_127b2420();
  /* 127b1e06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b1e09:;
  /* 127b1e09 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1e0e:;
  /* 127b1e0e mov ecx, dword ptr [0x127d0880] */
  ECX = (r32((uint32_t)(0x127d0880)));
  /* 127b1e14 mov dword ptr [0x127d0890], ecx */
  w32((uint32_t)(0x127d0890), (ECX));
  /* 127b1e1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1e1d push edx */
  push32((uint32_t)(EDX));
  /* 127b1e1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1e21 push eax */
  push32((uint32_t)(EAX));
  /* 127b1e22 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b1e24 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1e27 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127b1e2a push edx */
  push32((uint32_t)(EDX));
  /* 127b1e2b call 0x127b22c0 */
  push32(0x127b1e30u); f_127b22c0();
  /* 127b1e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1e33 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1e38:;
  /* 127b1e38 mov eax, dword ptr [0x127d0880] */
  EAX = (r32((uint32_t)(0x127d0880)));
  /* 127b1e3d mov dword ptr [0x127d0890], eax */
  w32((uint32_t)(0x127d0890), (EAX));
  /* 127b1e42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1e45 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1e46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1e49 push edx */
  push32((uint32_t)(EDX));
  /* 127b1e4a push 2 */
  push32((uint32_t)(0x2u));
  /* 127b1e4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1e4f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127b1e52 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1e53 call 0x127b22c0 */
  push32(0x127b1e58u); f_127b22c0();
  /* 127b1e58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1e5b jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1e60:;
  /* 127b1e60 mov edx, dword ptr [0x127d0880] */
  EDX = (r32((uint32_t)(0x127d0880)));
  /* 127b1e66 mov dword ptr [0x127d0890], edx */
  w32((uint32_t)(0x127d0890), (EDX));
  /* 127b1e6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1e6f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 127b1e72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b1e73 mov ecx, 0xc */
  ECX = (0xcu);
  /* 127b1e78 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b1e7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b1e7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1e81 jne 0x127b1e8a */
  if (!C.zf) goto L_127b1e8a;
  /* 127b1e83 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_127b1e8a:;
  /* 127b1e8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1e8d push edx */
  push32((uint32_t)(EDX));
  /* 127b1e8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1e91 push eax */
  push32((uint32_t)(EAX));
  /* 127b1e92 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b1e94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1e97 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1e98 call 0x127b22c0 */
  push32(0x127b1e9du); f_127b22c0();
  /* 127b1e9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1ea0 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1ea5:;
  /* 127b1ea5 mov edx, dword ptr [0x127d0880] */
  EDX = (r32((uint32_t)(0x127d0880)));
  /* 127b1eab mov dword ptr [0x127d0890], edx */
  w32((uint32_t)(0x127d0890), (EDX));
  /* 127b1eb1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1eb4 push eax */
  push32((uint32_t)(EAX));
  /* 127b1eb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1eb8 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1eb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 127b1ebb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1ebe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127b1ec1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1ec4 push eax */
  push32((uint32_t)(EAX));
  /* 127b1ec5 call 0x127b22c0 */
  push32(0x127b1ecau); f_127b22c0();
  /* 127b1eca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1ecd jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1ed2:;
  /* 127b1ed2 mov ecx, dword ptr [0x127d0880] */
  ECX = (r32((uint32_t)(0x127d0880)));
  /* 127b1ed8 mov dword ptr [0x127d0890], ecx */
  w32((uint32_t)(0x127d0890), (ECX));
  /* 127b1ede mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1ee1 push edx */
  push32((uint32_t)(EDX));
  /* 127b1ee2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1ee5 push eax */
  push32((uint32_t)(EAX));
  /* 127b1ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b1ee8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1eeb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127b1eee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1ef1 push edx */
  push32((uint32_t)(EDX));
  /* 127b1ef2 call 0x127b22c0 */
  push32(0x127b1ef7u); f_127b22c0();
  /* 127b1ef7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1efa jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1eff:;
  /* 127b1eff mov eax, dword ptr [0x127d0880] */
  EAX = (r32((uint32_t)(0x127d0880)));
  /* 127b1f04 mov dword ptr [0x127d0890], eax */
  w32((uint32_t)(0x127d0890), (EAX));
  /* 127b1f09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1f0c push ecx */
  push32((uint32_t)(ECX));
  /* 127b1f0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1f10 push edx */
  push32((uint32_t)(EDX));
  /* 127b1f11 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b1f13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1f16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127b1f19 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1f1a call 0x127b22c0 */
  push32(0x127b1f1fu); f_127b22c0();
  /* 127b1f1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1f22 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1f27:;
  /* 127b1f27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1f2a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1f2e jg 0x127b1f4c */
  if ((!C.zf&&C.sf==C.of)) goto L_127b1f4c;
  /* 127b1f30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1f33 push eax */
  push32((uint32_t)(EAX));
  /* 127b1f34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1f37 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1f38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1f3b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 127b1f41 push eax */
  push32((uint32_t)(EAX));
  /* 127b1f42 call 0x127b2270 */
  push32(0x127b1f47u); f_127b2270();
  /* 127b1f47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1f4a jmp 0x127b1f66 */
  goto L_127b1f66;
L_127b1f4c:;
  /* 127b1f4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1f4f push ecx */
  push32((uint32_t)(ECX));
  /* 127b1f50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1f53 push edx */
  push32((uint32_t)(EDX));
  /* 127b1f54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b1f57 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 127b1f5d push ecx */
  push32((uint32_t)(ECX));
  /* 127b1f5e call 0x127b2270 */
  push32(0x127b1f63u); f_127b2270();
  /* 127b1f63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b1f66:;
  /* 127b1f66 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1f6b:;
  /* 127b1f6b mov edx, dword ptr [0x127d0880] */
  EDX = (r32((uint32_t)(0x127d0880)));
  /* 127b1f71 mov dword ptr [0x127d0890], edx */
  w32((uint32_t)(0x127d0890), (EDX));
  /* 127b1f77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1f7a push eax */
  push32((uint32_t)(EAX));
  /* 127b1f7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1f7e push ecx */
  push32((uint32_t)(ECX));
  /* 127b1f7f push 2 */
  push32((uint32_t)(0x2u));
  /* 127b1f81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1f84 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b1f86 push eax */
  push32((uint32_t)(EAX));
  /* 127b1f87 call 0x127b22c0 */
  push32(0x127b1f8cu); f_127b22c0();
  /* 127b1f8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1f8f jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1f94:;
  /* 127b1f94 mov ecx, dword ptr [0x127d0880] */
  ECX = (r32((uint32_t)(0x127d0880)));
  /* 127b1f9a mov dword ptr [0x127d0890], ecx */
  w32((uint32_t)(0x127d0890), (ECX));
  /* 127b1fa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1fa3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 127b1fa6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b1fa9 jmp 0x127b1ffd */
  goto L_127b1ffd;
L_127b1fab:;
  /* 127b1fab mov ecx, dword ptr [0x127d0880] */
  ECX = (r32((uint32_t)(0x127d0880)));
  /* 127b1fb1 mov dword ptr [0x127d0890], ecx */
  w32((uint32_t)(0x127d0890), (ECX));
  /* 127b1fb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1fba push edx */
  push32((uint32_t)(EDX));
  /* 127b1fbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1fbe push eax */
  push32((uint32_t)(EAX));
  /* 127b1fbf push 1 */
  push32((uint32_t)(0x1u));
  /* 127b1fc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1fc4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127b1fc7 push edx */
  push32((uint32_t)(EDX));
  /* 127b1fc8 call 0x127b22c0 */
  push32(0x127b1fcdu); f_127b22c0();
  /* 127b1fcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1fd0 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b1fd5:;
  /* 127b1fd5 mov eax, dword ptr [0x127d0880] */
  EAX = (r32((uint32_t)(0x127d0880)));
  /* 127b1fda mov dword ptr [0x127d0890], eax */
  w32((uint32_t)(0x127d0890), (EAX));
  /* 127b1fdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1fe2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1fe6 jne 0x127b1ff1 */
  if (!C.zf) goto L_127b1ff1;
  /* 127b1fe8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 127b1fef jmp 0x127b1ffd */
  goto L_127b1ffd;
L_127b1ff1:;
  /* 127b1ff1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1ff4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 127b1ff7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1ffa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127b1ffd:;
  /* 127b1ffd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2000 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127b2003 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2006 jge 0x127b2011 */
  if ((C.sf==C.of)) goto L_127b2011;
  /* 127b2008 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b200f jmp 0x127b203e */
  goto L_127b203e;
L_127b2011:;
  /* 127b2011 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2014 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127b2017 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b2018 mov ecx, 7 */
  ECX = (0x7u);
  /* 127b201d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b201f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b2022 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2025 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127b2028 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b2029 mov ecx, 7 */
  ECX = (0x7u);
  /* 127b202e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b2030 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2033 jl 0x127b203e */
  if ((C.sf!=C.of)) goto L_127b203e;
  /* 127b2035 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2038 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b203b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127b203e:;
  /* 127b203e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2041 push eax */
  push32((uint32_t)(EAX));
  /* 127b2042 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2045 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2046 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b2048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b204b push edx */
  push32((uint32_t)(EDX));
  /* 127b204c call 0x127b22c0 */
  push32(0x127b2051u); f_127b22c0();
  /* 127b2051 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2054 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b2059:;
  /* 127b2059 cmp dword ptr [0x127d0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2060 je 0x127b2090 */
  if (C.zf) goto L_127b2090;
  /* 127b2062 mov dword ptr [0x127d0880], 0 */
  w32((uint32_t)(0x127d0880), (0x0u));
  /* 127b206c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b206f push eax */
  push32((uint32_t)(EAX));
  /* 127b2070 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2073 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2074 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2077 push edx */
  push32((uint32_t)(EDX));
  /* 127b2078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b207b push eax */
  push32((uint32_t)(EAX));
  /* 127b207c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b207f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 127b2085 push edx */
  push32((uint32_t)(EDX));
  /* 127b2086 call 0x127b2420 */
  push32(0x127b208bu); f_127b2420();
  /* 127b208b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b208e jmp 0x127b20b2 */
  goto L_127b20b2;
L_127b2090:;
  /* 127b2090 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b2093 push eax */
  push32((uint32_t)(EAX));
  /* 127b2094 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2097 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2098 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b209b push edx */
  push32((uint32_t)(EDX));
  /* 127b209c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b209f push eax */
  push32((uint32_t)(EAX));
  /* 127b20a0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b20a3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 127b20a9 push edx */
  push32((uint32_t)(EDX));
  /* 127b20aa call 0x127b2420 */
  push32(0x127b20afu); f_127b2420();
  /* 127b20af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b20b2:;
  /* 127b20b2 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b20b7:;
  /* 127b20b7 mov dword ptr [0x127d0880], 0 */
  w32((uint32_t)(0x127d0880), (0x0u));
  /* 127b20c1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b20c4 push eax */
  push32((uint32_t)(EAX));
  /* 127b20c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b20c8 push ecx */
  push32((uint32_t)(ECX));
  /* 127b20c9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b20cc push edx */
  push32((uint32_t)(EDX));
  /* 127b20cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b20d0 push eax */
  push32((uint32_t)(EAX));
  /* 127b20d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b20d4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 127b20da push edx */
  push32((uint32_t)(EDX));
  /* 127b20db call 0x127b2420 */
  push32(0x127b20e0u); f_127b2420();
  /* 127b20e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b20e3 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b20e8:;
  /* 127b20e8 mov eax, dword ptr [0x127d0880] */
  EAX = (r32((uint32_t)(0x127d0880)));
  /* 127b20ed mov dword ptr [0x127d0890], eax */
  w32((uint32_t)(0x127d0890), (EAX));
  /* 127b20f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b20f5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 127b20f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b20f9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 127b20fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b2100 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b2103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2106 push edx */
  push32((uint32_t)(EDX));
  /* 127b2107 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b210a push eax */
  push32((uint32_t)(EAX));
  /* 127b210b push 2 */
  push32((uint32_t)(0x2u));
  /* 127b210d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2110 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2111 call 0x127b22c0 */
  push32(0x127b2116u); f_127b22c0();
  /* 127b2116 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2119 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b211e:;
  /* 127b211e mov edx, dword ptr [0x127d0880] */
  EDX = (r32((uint32_t)(0x127d0880)));
  /* 127b2124 mov dword ptr [0x127d0890], edx */
  w32((uint32_t)(0x127d0890), (EDX));
  /* 127b212a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b212d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 127b2130 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b2131 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 127b2136 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b2138 mov ecx, eax */
  ECX = (EAX);
  /* 127b213a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b213d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b2140 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2143 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127b2146 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b2147 mov esi, 0x64 */
  ESI = (0x64u);
  /* 127b214c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b214e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2150 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b2153 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2156 push eax */
  push32((uint32_t)(EAX));
  /* 127b2157 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b215a push ecx */
  push32((uint32_t)(ECX));
  /* 127b215b push 4 */
  push32((uint32_t)(0x4u));
  /* 127b215d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2160 push edx */
  push32((uint32_t)(EDX));
  /* 127b2161 call 0x127b22c0 */
  push32(0x127b2166u); f_127b22c0();
  /* 127b2166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2169 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b216b:;
  /* 127b216b call 0x127b3280 */
  push32(0x127b2170u); f_127b3280();
  /* 127b2170 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2173 push eax */
  push32((uint32_t)(EAX));
  /* 127b2174 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2177 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2178 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b217b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b217d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2181 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 127b2184 mov ecx, dword ptr [eax*4 + 0x127cfe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127cfe1c)));
  /* 127b218b push ecx */
  push32((uint32_t)(ECX));
  /* 127b218c call 0x127b2270 */
  push32(0x127b2191u); f_127b2270();
  /* 127b2191 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2194 jmp 0x127b21b8 */
  goto L_127b21b8;
L_127b2196:;
  /* 127b2196 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2199 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b219b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 127b219e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b21a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b21a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b21a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b21a9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b21ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b21ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b21b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b21b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b21b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127b21b8:;
  /* 127b21b8 pop esi */
  ESI = (pop32());
  /* 127b21b9 mov esp, ebp */
  ESP = (EBP);
  /* 127b21bb pop ebp */
  EBP = (pop32());
  /* 127b21bc ret  */
  ESPCHK(0x127b1c50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x127b2270 (72 bytes, 30 insns) */
void f_127b2270(void) {
  FTRACE(0x127b2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2270 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2271 mov ebp, esp */
  EBP = (ESP);
L_127b2273:;
  /* 127b2273 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2276 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2279 je 0x127b22b6 */
  if (C.zf) goto L_127b22b6;
  /* 127b227b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b227e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b2281 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b2283 je 0x127b22b6 */
  if (C.zf) goto L_127b22b6;
  /* 127b2285 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2288 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b228a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b228d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b228f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127b2291 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2294 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b2296 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b229c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b229e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b22a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b22a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127b22a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b22aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b22ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b22af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b22b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127b22b4 jmp 0x127b2273 */
  goto L_127b2273;
L_127b22b6:;
  /* 127b22b6 pop ebp */
  EBP = (pop32());
  /* 127b22b7 ret  */
  ESPCHK(0x127b2270u, _esp0);
  ESP += 4; return;
}

/* FUN_100122c0 @ 0x127b22c0 (173 bytes, 64 insns) */
void f_127b22c0(void) {
  FTRACE(0x127b22c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b22c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b22c1 mov ebp, esp */
  EBP = (ESP);
  /* 127b22c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b22c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b22cb cmp dword ptr [0x127d0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b22d2 je 0x127b22ea */
  if (C.zf) goto L_127b22ea;
  /* 127b22d4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b22d7 push eax */
  push32((uint32_t)(EAX));
  /* 127b22d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b22db push ecx */
  push32((uint32_t)(ECX));
  /* 127b22dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b22df push edx */
  push32((uint32_t)(EDX));
  /* 127b22e0 call 0x127b2370 */
  push32(0x127b22e5u); f_127b2370();
  /* 127b22e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b22e8 jmp 0x127b2369 */
  goto L_127b2369;
L_127b22ea:;
  /* 127b22ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b22ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b22f0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b22f2 jae 0x127b2360 */
  if (!C.cf) goto L_127b2360;
  /* 127b22f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b22f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b22fa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 127b22fd jmp 0x127b2308 */
  goto L_127b2308;
L_127b22ff:;
  /* 127b22ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2302 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2305 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_127b2308:;
  /* 127b2308 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b230b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b230e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b2310 je 0x127b2344 */
  if (C.zf) goto L_127b2344;
  /* 127b2312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2315 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b2316 mov ecx, 0xa */
  ECX = (0xau);
  /* 127b231b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b231d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2320 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2323 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b2325 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2328 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 127b232b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b232e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b232f mov ecx, 0xa */
  ECX = (0xau);
  /* 127b2334 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b2336 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b2339 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b233c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b233f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b2342 jmp 0x127b22ff */
  goto L_127b22ff;
L_127b2344:;
  /* 127b2344 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2347 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b2349 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b234c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b234f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127b2351 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2354 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b2356 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2359 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b235c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127b235e jmp 0x127b2369 */
  goto L_127b2369;
L_127b2360:;
  /* 127b2360 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2363 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127b2369:;
  /* 127b2369 mov esp, ebp */
  ESP = (EBP);
  /* 127b236b pop ebp */
  EBP = (pop32());
  /* 127b236c ret  */
  ESPCHK(0x127b22c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x127b2370 (172 bytes, 65 insns) */
void f_127b2370(void) {
  FTRACE(0x127b2370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2370 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2371 mov ebp, esp */
  EBP = (ESP);
  /* 127b2373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2379 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b237b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b237e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2381 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2384 jbe 0x127b23cb */
  if ((C.cf||C.zf)) goto L_127b23cb;
L_127b2386:;
  /* 127b2386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2389 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b238a mov ecx, 0xa */
  ECX = (0xau);
  /* 127b238f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b2391 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2397 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127b2399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b239c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b239f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b23a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b23a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b23a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b23aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b23ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127b23af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b23b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b23b3 mov ecx, 0xa */
  ECX = (0xau);
  /* 127b23b8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b23ba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b23bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b23c1 jle 0x127b23cb */
  if ((C.zf||C.sf!=C.of)) goto L_127b23cb;
  /* 127b23c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b23c6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b23c9 ja 0x127b2386 */
  if ((!C.cf&&!C.zf)) goto L_127b2386;
L_127b23cb:;
  /* 127b23cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b23ce mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b23d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b23d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b23d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b23d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127b23db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b23de sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b23e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127b23e4:;
  /* 127b23e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b23e7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b23e9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 127b23ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b23ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b23f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b23f4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127b23f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b23f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b23fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b23ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b2402 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 127b2405 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 127b2407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b240a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b240d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b2410 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b2413 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2416 jb 0x127b23e4 */
  if (C.cf) goto L_127b23e4;
  /* 127b2418 mov esp, ebp */
  ESP = (EBP);
  /* 127b241a pop ebp */
  EBP = (pop32());
  /* 127b241b ret  */
  ESPCHK(0x127b2370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012420 @ 0x127b2420 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_127b2420(void) {
  FTRACE(0x127b2420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2420 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2421 mov ebp, esp */
  EBP = (ESP);
  /* 127b2423 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_127b2426:;
  /* 127b2426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2429 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b242c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b242e je 0x127b289c */
  if (C.zf) goto L_127b289c;
  /* 127b2434 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2437 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b243a je 0x127b289c */
  if (C.zf) goto L_127b289c;
  /* 127b2440 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 127b2444 mov dword ptr [0x127d0890], 0 */
  w32((uint32_t)(0x127d0890), (0x0u));
  /* 127b244e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127b2455 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b245b jmp 0x127b2466 */
  goto L_127b2466;
L_127b245d:;
  /* 127b245d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2460 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2463 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127b2466:;
  /* 127b2466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2469 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b246c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b246f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b2472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2478 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b247b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b247d jne 0x127b2481 */
  if (!C.zf) goto L_127b2481;
  /* 127b247f jmp 0x127b245d */
  goto L_127b245d;
L_127b2481:;
  /* 127b2481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2484 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2487 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b248a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b248d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b2490 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b2493 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b2496 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2499 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b249c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b24a0 ja 0x127b27f0 */
  if ((!C.cf&&!C.zf)) goto L_127b27f0;
  /* 127b24a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b24a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b24ab mov al, byte ptr [ecx + 0x127b28cc] */
  AL = (r8((uint32_t)(ECX + 0x127b28cc)));
  /* 127b24b1 jmp dword ptr [eax*4 + 0x127b28a0] */
  switch (EAX) {
    case 0: goto L_127b270f;
    case 1: goto L_127b25f3;
    case 2: goto L_127b257e;
    case 3: goto L_127b24b8;
    case 4: goto L_127b24f6;
    case 5: goto L_127b2557;
    case 6: goto L_127b25a5;
    case 7: goto L_127b25cc;
    case 8: goto L_127b263a;
    case 9: goto L_127b2534;
    case 10: goto L_127b27f0;
    default: x86_unimpl("switch@0x127b24b1 out of table"); return;
  }
L_127b24b8:;
  /* 127b24b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b24bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127b24be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b24c1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b24c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127b24c7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b24cb ja 0x127b24f1 */
  if ((!C.cf&&!C.zf)) goto L_127b24f1;
  /* 127b24cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b24d0 jmp dword ptr [ecx*4 + 0x127b291f] */
  switch (ECX) {
    case 0: goto L_127b24d7;
    case 1: goto L_127b24e1;
    case 2: goto L_127b24e7;
    case 3: goto L_127b24ed;
    case 4: goto L_127b2515;
    case 5: goto L_127b251f;
    case 6: goto L_127b2525;
    case 7: goto L_127b252b;
    default: x86_unimpl("switch@0x127b24d0 out of table"); return;
  }
L_127b24d7:;
  /* 127b24d7 mov dword ptr [0x127d0890], 1 */
  w32((uint32_t)(0x127d0890), (0x1u));
L_127b24e1:;
  /* 127b24e1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 127b24e5 jmp 0x127b24f1 */
  goto L_127b24f1;
L_127b24e7:;
  /* 127b24e7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 127b24eb jmp 0x127b24f1 */
  goto L_127b24f1;
L_127b24ed:;
  /* 127b24ed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_127b24f1:;
  /* 127b24f1 jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b24f6:;
  /* 127b24f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b24f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127b24fc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b24ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2502 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127b2505 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2509 ja 0x127b252f */
  if ((!C.cf&&!C.zf)) goto L_127b252f;
  /* 127b250b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b250e jmp dword ptr [ecx*4 + 0x127b292f] */
  switch (ECX) {
    case 0: goto L_127b2515;
    case 1: goto L_127b251f;
    case 2: goto L_127b2525;
    case 3: goto L_127b252b;
    default: x86_unimpl("switch@0x127b250e out of table"); return;
  }
L_127b2515:;
  /* 127b2515 mov dword ptr [0x127d0890], 1 */
  w32((uint32_t)(0x127d0890), (0x1u));
L_127b251f:;
  /* 127b251f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 127b2523 jmp 0x127b252f */
  goto L_127b252f;
L_127b2525:;
  /* 127b2525 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 127b2529 jmp 0x127b252f */
  goto L_127b252f;
L_127b252b:;
  /* 127b252b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_127b252f:;
  /* 127b252f jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b2534:;
  /* 127b2534 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2537 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127b253a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b253e je 0x127b2548 */
  if (C.zf) goto L_127b2548;
  /* 127b2540 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2544 je 0x127b254e */
  if (C.zf) goto L_127b254e;
  /* 127b2546 jmp 0x127b2552 */
  goto L_127b2552;
L_127b2548:;
  /* 127b2548 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 127b254c jmp 0x127b2552 */
  goto L_127b2552;
L_127b254e:;
  /* 127b254e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_127b2552:;
  /* 127b2552 jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b2557:;
  /* 127b2557 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b255a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127b255d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2561 je 0x127b256b */
  if (C.zf) goto L_127b256b;
  /* 127b2563 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2567 je 0x127b2575 */
  if (C.zf) goto L_127b2575;
  /* 127b2569 jmp 0x127b2579 */
  goto L_127b2579;
L_127b256b:;
  /* 127b256b mov dword ptr [0x127d0890], 1 */
  w32((uint32_t)(0x127d0890), (0x1u));
L_127b2575:;
  /* 127b2575 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_127b2579:;
  /* 127b2579 jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b257e:;
  /* 127b257e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2581 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127b2584 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2588 je 0x127b2592 */
  if (C.zf) goto L_127b2592;
  /* 127b258a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b258e je 0x127b259c */
  if (C.zf) goto L_127b259c;
  /* 127b2590 jmp 0x127b25a0 */
  goto L_127b25a0;
L_127b2592:;
  /* 127b2592 mov dword ptr [0x127d0890], 1 */
  w32((uint32_t)(0x127d0890), (0x1u));
L_127b259c:;
  /* 127b259c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_127b25a0:;
  /* 127b25a0 jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b25a5:;
  /* 127b25a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b25a8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 127b25ab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b25af je 0x127b25b9 */
  if (C.zf) goto L_127b25b9;
  /* 127b25b1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b25b5 je 0x127b25c3 */
  if (C.zf) goto L_127b25c3;
  /* 127b25b7 jmp 0x127b25c7 */
  goto L_127b25c7;
L_127b25b9:;
  /* 127b25b9 mov dword ptr [0x127d0890], 1 */
  w32((uint32_t)(0x127d0890), (0x1u));
L_127b25c3:;
  /* 127b25c3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_127b25c7:;
  /* 127b25c7 jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b25cc:;
  /* 127b25cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b25cf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 127b25d2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b25d6 je 0x127b25e0 */
  if (C.zf) goto L_127b25e0;
  /* 127b25d8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b25dc je 0x127b25ea */
  if (C.zf) goto L_127b25ea;
  /* 127b25de jmp 0x127b25ee */
  goto L_127b25ee;
L_127b25e0:;
  /* 127b25e0 mov dword ptr [0x127d0890], 1 */
  w32((uint32_t)(0x127d0890), (0x1u));
L_127b25ea:;
  /* 127b25ea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_127b25ee:;
  /* 127b25ee jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b25f3:;
  /* 127b25f3 push 0x127cc89c */
  push32((uint32_t)(0x127cc89cu));
  /* 127b25f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b25fb push ecx */
  push32((uint32_t)(ECX));
  /* 127b25fc call 0x127b2e50 */
  push32(0x127b2601u); f_127b2e50();
  /* 127b2601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2606 jne 0x127b2613 */
  if (!C.zf) goto L_127b2613;
  /* 127b2608 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b260b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b260e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b2611 jmp 0x127b2631 */
  goto L_127b2631;
L_127b2613:;
  /* 127b2613 push 0x127cc898 */
  push32((uint32_t)(0x127cc898u));
  /* 127b2618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b261b push eax */
  push32((uint32_t)(EAX));
  /* 127b261c call 0x127b2e50 */
  push32(0x127b2621u); f_127b2e50();
  /* 127b2621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2626 jne 0x127b2631 */
  if (!C.zf) goto L_127b2631;
  /* 127b2628 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b262b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b262e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127b2631:;
  /* 127b2631 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 127b2635 jmp 0x127b27f0 */
  goto L_127b27f0;
L_127b263a:;
  /* 127b263a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b263d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2641 jg 0x127b2651 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b2651;
  /* 127b2643 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b2646 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 127b264c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127b264f jmp 0x127b265d */
  goto L_127b265d;
L_127b2651:;
  /* 127b2651 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b2654 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 127b265a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127b265d:;
  /* 127b265d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2661 jle 0x127b2704 */
  if ((C.zf||C.sf!=C.of)) goto L_127b2704;
  /* 127b2667 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b266a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b266d jbe 0x127b2704 */
  if ((C.cf||C.zf)) goto L_127b2704;
  /* 127b2673 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b2676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2678 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b267a mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b2680 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b2682 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b2686 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127b268c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b268e je 0x127b26c7 */
  if (C.zf) goto L_127b26c7;
  /* 127b2690 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2693 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2696 jbe 0x127b26c7 */
  if ((C.cf||C.zf)) goto L_127b26c7;
  /* 127b2698 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b269b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b269d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b26a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b26a2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127b26a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b26a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b26a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b26ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b26af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127b26b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b26b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b26b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127b26ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b26bd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b26bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b26c2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b26c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127b26c7:;
  /* 127b26c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b26ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b26cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b26cf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b26d1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127b26d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b26d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b26d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b26db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b26de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b26e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b26e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b26e6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127b26e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b26ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b26ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b26f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b26f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127b26f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b26f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b26fc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127b26ff jmp 0x127b265d */
  goto L_127b265d;
L_127b2704:;
  /* 127b2704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2707 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b270a jmp 0x127b2426 */
  goto L_127b2426;
L_127b270f:;
  /* 127b270f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2712 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127b2715 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b2717 je 0x127b27e2 */
  if (C.zf) goto L_127b27e2;
  /* 127b271d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2720 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2723 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_127b2726:;
  /* 127b2726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2729 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b272c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b272e je 0x127b27e0 */
  if (C.zf) goto L_127b27e0;
  /* 127b2734 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2737 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b273a je 0x127b27e0 */
  if (C.zf) goto L_127b27e0;
  /* 127b2740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2743 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b2746 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2749 jne 0x127b2759 */
  if (!C.zf) goto L_127b2759;
  /* 127b274b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b274e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2751 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127b2754 jmp 0x127b27e0 */
  goto L_127b27e0;
L_127b2759:;
  /* 127b2759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b275c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b275e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b2760 mov edx, dword ptr [0x127cec98] */
  EDX = (r32((uint32_t)(0x127cec98)));
  /* 127b2766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2768 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 127b276c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127b2771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2773 je 0x127b27ac */
  if (C.zf) goto L_127b27ac;
  /* 127b2775 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2778 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b277b jbe 0x127b27ac */
  if ((C.cf||C.zf)) goto L_127b27ac;
  /* 127b277d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2780 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b2782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2785 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b2787 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127b2789 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b278c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b278e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2791 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2794 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127b2796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2799 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b279c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b279f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b27a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b27a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b27a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b27aa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127b27ac:;
  /* 127b27ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b27af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b27b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b27b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b27b6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127b27b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b27bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b27bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b27c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b27c3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127b27c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b27c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b27cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127b27ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b27d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b27d3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b27d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b27d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127b27db jmp 0x127b2726 */
  goto L_127b2726;
L_127b27e0:;
  /* 127b27e0 jmp 0x127b27eb */
  goto L_127b27eb;
L_127b27e2:;
  /* 127b27e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b27e5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b27e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127b27eb:;
  /* 127b27eb jmp 0x127b2426 */
  goto L_127b2426;
L_127b27f0:;
  /* 127b27f0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b27f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b27f6 je 0x127b281c */
  if (C.zf) goto L_127b281c;
  /* 127b27f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b27fb push edx */
  push32((uint32_t)(EDX));
  /* 127b27fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b27ff push eax */
  push32((uint32_t)(EAX));
  /* 127b2800 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2803 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2804 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2807 push edx */
  push32((uint32_t)(EDX));
  /* 127b2808 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127b280b push eax */
  push32((uint32_t)(EAX));
  /* 127b280c call 0x127b1c50 */
  push32(0x127b2811u); f_127b1c50();
  /* 127b2811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b2817 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127b281a jmp 0x127b2897 */
  goto L_127b2897;
L_127b281c:;
  /* 127b281c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b281f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2821 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b2823 mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b2829 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b282b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b282f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127b2835 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b2837 je 0x127b2868 */
  if (C.zf) goto L_127b2868;
  /* 127b2839 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b283c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b283e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2841 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b2843 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127b2845 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2848 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b284a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b284d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2850 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b2852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2858 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127b285b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b285e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b2860 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2863 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2866 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_127b2868:;
  /* 127b2868 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b286b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b286d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2870 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b2872 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127b2874 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2877 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b2879 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b287c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b287f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127b2881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2887 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b288a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b288d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b288f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2892 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2895 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127b2897:;
  /* 127b2897 jmp 0x127b2426 */
  goto L_127b2426;
L_127b289c:;
  /* 127b289c mov esp, ebp */
  ESP = (EBP);
  /* 127b289e pop ebp */
  EBP = (pop32());
  /* 127b289f ret  */
  ESPCHK(0x127b2420u, _esp0);
  ESP += 4; return;
}

/* FUN_10012940 @ 0x127b2940 (650 bytes, 178 insns) */
void f_127b2940(void) {
  FTRACE(0x127b2940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2940 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2941 mov ebp, esp */
  EBP = (ESP);
  /* 127b2943 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2949 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b294d jne 0x127b2aa9 */
  if (!C.zf) goto L_127b2aa9;
  /* 127b2953 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2956 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 127b295c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 127b2962 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b2965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b296c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 127b2976 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2978 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 127b297e push edx */
  push32((uint32_t)(EDX));
  /* 127b297f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2982 push eax */
  push32((uint32_t)(EAX));
  /* 127b2983 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2986 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2987 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b298a push edx */
  push32((uint32_t)(EDX));
  /* 127b298b call 0x127b3d60 */
  push32(0x127b2990u); f_127b3d60();
  /* 127b2990 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2993 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b2996 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b299a jne 0x127b2a2f */
  if (!C.zf) goto L_127b2a2f;
  /* 127b29a0 call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127b29a6u);
  /* 127b29a6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b29a9 je 0x127b29b0 */
  if (C.zf) goto L_127b29b0;
  /* 127b29ab jmp 0x127b2a8d */
  goto L_127b2a8d;
L_127b29b0:;
  /* 127b29b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b29b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b29b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b29b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b29b9 push eax */
  push32((uint32_t)(EAX));
  /* 127b29ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b29bd push ecx */
  push32((uint32_t)(ECX));
  /* 127b29be call 0x127b3d60 */
  push32(0x127b29c3u); f_127b3d60();
  /* 127b29c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b29c6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 127b29cc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b29d3 jne 0x127b29da */
  if (!C.zf) goto L_127b29da;
  /* 127b29d5 jmp 0x127b2a8d */
  goto L_127b2a8d;
L_127b29da:;
  /* 127b29da push 0x58 */
  push32((uint32_t)(0x58u));
  /* 127b29dc push 0x127cc8a4 */
  push32((uint32_t)(0x127cc8a4u));
  /* 127b29e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b29e3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 127b29e9 push edx */
  push32((uint32_t)(EDX));
  /* 127b29ea call 0x127a4780 */
  push32(0x127b29efu); f_127a4780();
  /* 127b29ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b29f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b29f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b29f9 jne 0x127b2a00 */
  if (!C.zf) goto L_127b2a00;
  /* 127b29fb jmp 0x127b2a8d */
  goto L_127b2a8d;
L_127b2a00:;
  /* 127b2a00 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127b2a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2a09 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 127b2a0f push eax */
  push32((uint32_t)(EAX));
  /* 127b2a10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2a13 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2a14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2a17 push edx */
  push32((uint32_t)(EDX));
  /* 127b2a18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2a1b push eax */
  push32((uint32_t)(EAX));
  /* 127b2a1c call 0x127b3d60 */
  push32(0x127b2a21u); f_127b3d60();
  /* 127b2a21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2a24 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b2a27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2a2b jne 0x127b2a2f */
  if (!C.zf) goto L_127b2a2f;
  /* 127b2a2d jmp 0x127b2a8d */
  goto L_127b2a8d;
L_127b2a2f:;
  /* 127b2a2f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 127b2a31 push 0x127cc8a4 */
  push32((uint32_t)(0x127cc8a4u));
  /* 127b2a36 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b2a38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b2a3b push ecx */
  push32((uint32_t)(ECX));
  /* 127b2a3c call 0x127a4780 */
  push32(0x127b2a41u); f_127a4780();
  /* 127b2a41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2a44 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 127b2a4a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127b2a4c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 127b2a52 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2a55 jne 0x127b2a59 */
  if (!C.zf) goto L_127b2a59;
  /* 127b2a57 jmp 0x127b2a8d */
  goto L_127b2a8d;
L_127b2a59:;
  /* 127b2a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b2a5c push ecx */
  push32((uint32_t)(ECX));
  /* 127b2a5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2a60 push edx */
  push32((uint32_t)(EDX));
  /* 127b2a61 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 127b2a67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b2a69 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2a6a call 0x127a7fa0 */
  push32(0x127b2a6fu); f_127a7fa0();
  /* 127b2a6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2a72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2a76 je 0x127b2a86 */
  if (C.zf) goto L_127b2a86;
  /* 127b2a78 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b2a7a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2a7d push edx */
  push32((uint32_t)(EDX));
  /* 127b2a7e call 0x127a5210 */
  push32(0x127b2a83u); f_127a5210();
  /* 127b2a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b2a86:;
  /* 127b2a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2a88 jmp 0x127b2bc6 */
  goto L_127b2bc6;
L_127b2a8d:;
  /* 127b2a8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2a91 je 0x127b2aa1 */
  if (C.zf) goto L_127b2aa1;
  /* 127b2a93 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b2a95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b2a98 push eax */
  push32((uint32_t)(EAX));
  /* 127b2a99 call 0x127a5210 */
  push32(0x127b2a9eu); f_127a5210();
  /* 127b2a9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b2aa1:;
  /* 127b2aa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b2aa4 jmp 0x127b2bc6 */
  goto L_127b2bc6;
L_127b2aa9:;
  /* 127b2aa9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2aad jne 0x127b2bc3 */
  if (!C.zf) goto L_127b2bc3;
  /* 127b2ab3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 127b2abd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2ac0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 127b2ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2ac8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127b2ace push edx */
  push32((uint32_t)(EDX));
  /* 127b2acf push 0x127d07a8 */
  push32((uint32_t)(0x127d07a8u));
  /* 127b2ad4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2ad7 push eax */
  push32((uint32_t)(EAX));
  /* 127b2ad8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2adb push ecx */
  push32((uint32_t)(ECX));
  /* 127b2adc call 0x127b3bc0 */
  push32(0x127b2ae1u); f_127b3bc0();
  /* 127b2ae1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2ae6 jne 0x127b2af0 */
  if (!C.zf) goto L_127b2af0;
  /* 127b2ae8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b2aeb jmp 0x127b2bc6 */
  goto L_127b2bc6;
L_127b2af0:;
  /* 127b2af0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127b2af6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127b2af9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 127b2b03 jmp 0x127b2b14 */
  goto L_127b2b14;
L_127b2b05:;
  /* 127b2b05 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127b2b0b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2b0e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_127b2b14:;
  /* 127b2b14 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2b1b jge 0x127b2bbf */
  if ((C.sf==C.of)) goto L_127b2bbf;
  /* 127b2b21 cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2b28 jle 0x127b2b5b */
  if ((C.zf||C.sf!=C.of)) goto L_127b2b5b;
  /* 127b2b2a push 4 */
  push32((uint32_t)(0x4u));
  /* 127b2b2c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127b2b32 mov dl, byte ptr [ecx*2 + 0x127d07a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x127d07a8)));
  /* 127b2b39 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 127b2b3f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127b2b45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b2b4a push eax */
  push32((uint32_t)(EAX));
  /* 127b2b4b call 0x127aa790 */
  push32(0x127b2b50u); f_127aa790();
  /* 127b2b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2b53 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 127b2b59 jmp 0x127b2b8e */
  goto L_127b2b8e;
L_127b2b5b:;
  /* 127b2b5b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127b2b61 mov dl, byte ptr [ecx*2 + 0x127d07a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x127d07a8)));
  /* 127b2b68 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 127b2b6e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127b2b74 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b2b79 mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b2b7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b2b81 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b2b85 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127b2b88 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_127b2b8e:;
  /* 127b2b8e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2b95 je 0x127b2bb8 */
  if (C.zf) goto L_127b2bb8;
  /* 127b2b97 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127b2b9d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b2ba0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b2ba3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 127b2baa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127b2bae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127b2bb4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127b2bb6 jmp 0x127b2bba */
  goto L_127b2bba;
L_127b2bb8:;
  /* 127b2bb8 jmp 0x127b2bbf */
  goto L_127b2bbf;
L_127b2bba:;
  /* 127b2bba jmp 0x127b2b05 */
  goto L_127b2b05;
L_127b2bbf:;
  /* 127b2bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2bc1 jmp 0x127b2bc6 */
  goto L_127b2bc6;
L_127b2bc3:;
  /* 127b2bc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127b2bc6:;
  /* 127b2bc6 mov esp, ebp */
  ESP = (EBP);
  /* 127b2bc8 pop ebp */
  EBP = (pop32());
  /* 127b2bc9 ret  */
  ESPCHK(0x127b2940u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bd0 @ 0x127b2bd0 (10 bytes, 5 insns) */
void f_127b2bd0(void) {
  FTRACE(0x127b2bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2bd1 mov ebp, esp */
  EBP = (ESP);
  /* 127b2bd3 mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127b2bd8 pop ebp */
  EBP = (pop32());
  /* 127b2bd9 ret  */
  ESPCHK(0x127b2bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012be0 @ 0x127b2be0 (575 bytes, 196 insns) */
void f_127b2be0(void) {
  FTRACE(0x127b2be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2be0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2be1 mov ebp, esp */
  EBP = (ESP);
  /* 127b2be3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b2be5 push 0x127cc8b0 */
  push32((uint32_t)(0x127cc8b0u));
  /* 127b2bea push 0x127ad888 */
  push32((uint32_t)(0x127ad888u));
  /* 127b2bef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127b2bf5 push eax */
  push32((uint32_t)(EAX));
  /* 127b2bf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127b2bfd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2c00 push ebx */
  push32((uint32_t)(EBX));
  /* 127b2c01 push esi */
  push32((uint32_t)(ESI));
  /* 127b2c02 push edi */
  push32((uint32_t)(EDI));
  /* 127b2c03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b2c06 cmp dword ptr [0x127d07b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d07b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2c0d jne 0x127b2c5e */
  if (!C.zf) goto L_127b2c5e;
  /* 127b2c0f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 127b2c12 push eax */
  push32((uint32_t)(EAX));
  /* 127b2c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b2c15 push 0x127cbfe0 */
  push32((uint32_t)(0x127cbfe0u));
  /* 127b2c1a push 1 */
  push32((uint32_t)(0x1u));
  /* 127b2c1c call dword ptr [0x127d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3358))), 0x127b2c22u);
  /* 127b2c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2c24 je 0x127b2c32 */
  if (C.zf) goto L_127b2c32;
  /* 127b2c26 mov dword ptr [0x127d07b4], 1 */
  w32((uint32_t)(0x127d07b4), (0x1u));
  /* 127b2c30 jmp 0x127b2c5e */
  goto L_127b2c5e;
L_127b2c32:;
  /* 127b2c32 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 127b2c35 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2c36 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b2c38 push 0x127cbfdc */
  push32((uint32_t)(0x127cbfdcu));
  /* 127b2c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 127b2c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2c41 call dword ptr [0x127d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3354))), 0x127b2c47u);
  /* 127b2c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2c49 je 0x127b2c57 */
  if (C.zf) goto L_127b2c57;
  /* 127b2c4b mov dword ptr [0x127d07b4], 2 */
  w32((uint32_t)(0x127d07b4), (0x2u));
  /* 127b2c55 jmp 0x127b2c5e */
  goto L_127b2c5e;
L_127b2c57:;
  /* 127b2c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2c59 jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2c5e:;
  /* 127b2c5e cmp dword ptr [0x127d07b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d07b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2c65 jne 0x127b2c82 */
  if (!C.zf) goto L_127b2c82;
  /* 127b2c67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2c6a push edx */
  push32((uint32_t)(EDX));
  /* 127b2c6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2c6e push eax */
  push32((uint32_t)(EAX));
  /* 127b2c6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2c72 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2c73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2c76 push edx */
  push32((uint32_t)(EDX));
  /* 127b2c77 call dword ptr [0x127d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3358))), 0x127b2c7du);
  /* 127b2c7d jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2c82:;
  /* 127b2c82 cmp dword ptr [0x127d07b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d07b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2c89 jne 0x127b2e37 */
  if (!C.zf) goto L_127b2e37;
  /* 127b2c8f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2c93 jne 0x127b2c9d */
  if (!C.zf) goto L_127b2c9d;
  /* 127b2c95 mov eax, dword ptr [0x127d0728] */
  EAX = (r32((uint32_t)(0x127d0728)));
  /* 127b2c9a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_127b2c9d:;
  /* 127b2c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2ca5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2ca9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2cac push edx */
  push32((uint32_t)(EDX));
  /* 127b2cad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127b2cb2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b2cb5 push eax */
  push32((uint32_t)(EAX));
  /* 127b2cb6 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b2cbcu);
  /* 127b2cbc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127b2cbf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2cc3 jne 0x127b2ccc */
  if (!C.zf) goto L_127b2ccc;
  /* 127b2cc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2cc7 jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2ccc:;
  /* 127b2ccc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b2cd3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b2cd6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2cd9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127b2cdb call 0x127a7920 */
  push32(0x127b2ce0u); f_127a7920();
  /* 127b2ce0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 127b2ce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b2ce6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b2ce9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127b2cec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b2cef push edx */
  push32((uint32_t)(EDX));
  /* 127b2cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2cf2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b2cf5 push eax */
  push32((uint32_t)(EAX));
  /* 127b2cf6 call 0x127a84f0 */
  push32(0x127b2cfbu); f_127a84f0();
  /* 127b2cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2cfe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127b2d05 jmp 0x127b2d1e */
  goto L_127b2d1e;
  /* 127b2d07 mov eax, 1 */
  EAX = (0x1u);
  /* 127b2d0c ret  */
  ESPCHK(0x127b2be0u, _esp0);
  ESP += 4; return;
  /* 127b2d0d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127b2d10 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 127b2d17 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127b2d1e:;
  /* 127b2d1e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2d22 jne 0x127b2d2b */
  if (!C.zf) goto L_127b2d2b;
  /* 127b2d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2d26 jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2d2b:;
  /* 127b2d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2d2f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b2d32 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2d33 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b2d36 push edx */
  push32((uint32_t)(EDX));
  /* 127b2d37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2d3a push eax */
  push32((uint32_t)(EAX));
  /* 127b2d3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2d3e push ecx */
  push32((uint32_t)(ECX));
  /* 127b2d3f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127b2d44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b2d47 push edx */
  push32((uint32_t)(EDX));
  /* 127b2d48 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b2d4eu);
  /* 127b2d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b2d50 jne 0x127b2d59 */
  if (!C.zf) goto L_127b2d59;
  /* 127b2d52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2d54 jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2d59:;
  /* 127b2d59 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127b2d60 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b2d63 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 127b2d67 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2d6a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127b2d6c call 0x127a7920 */
  push32(0x127b2d71u); f_127a7920();
  /* 127b2d71 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 127b2d74 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b2d77 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127b2d7a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127b2d7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127b2d84 jmp 0x127b2d9d */
  goto L_127b2d9d;
  /* 127b2d86 mov eax, 1 */
  EAX = (0x1u);
  /* 127b2d8b ret  */
  ESPCHK(0x127b2be0u, _esp0);
  ESP += 4; return;
  /* 127b2d8c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127b2d8f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127b2d96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127b2d9d:;
  /* 127b2d9d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2da1 jne 0x127b2daa */
  if (!C.zf) goto L_127b2daa;
  /* 127b2da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2da5 jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2daa:;
  /* 127b2daa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2dae jne 0x127b2db9 */
  if (!C.zf) goto L_127b2db9;
  /* 127b2db0 mov edx, dword ptr [0x127d0718] */
  EDX = (r32((uint32_t)(0x127d0718)));
  /* 127b2db6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_127b2db9:;
  /* 127b2db9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2dbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b2dbf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 127b2dc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2dc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b2dcb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 127b2dd2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b2dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2dd6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b2dd9 push edx */
  push32((uint32_t)(EDX));
  /* 127b2dda mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b2ddd push eax */
  push32((uint32_t)(EAX));
  /* 127b2dde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2de1 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2de2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b2de5 push edx */
  push32((uint32_t)(EDX));
  /* 127b2de6 call dword ptr [0x127d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3354))), 0x127b2decu);
  /* 127b2dec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127b2def mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2df2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b2df5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b2df7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 127b2dfc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2e02 je 0x127b2e18 */
  if (C.zf) goto L_127b2e18;
  /* 127b2e04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2e07 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b2e0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b2e0c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b2e10 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2e16 je 0x127b2e1c */
  if (C.zf) goto L_127b2e1c;
L_127b2e18:;
  /* 127b2e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2e1a jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2e1c:;
  /* 127b2e1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2e1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b2e21 push eax */
  push32((uint32_t)(EAX));
  /* 127b2e22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b2e25 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2e26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b2e29 push edx */
  push32((uint32_t)(EDX));
  /* 127b2e2a call 0x127ac670 */
  push32(0x127b2e2fu); f_127ac670();
  /* 127b2e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2e32 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b2e35 jmp 0x127b2e39 */
  goto L_127b2e39;
L_127b2e37:;
  /* 127b2e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b2e39:;
  /* 127b2e39 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 127b2e3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b2e3f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127b2e46 pop edi */
  EDI = (pop32());
  /* 127b2e47 pop esi */
  ESI = (pop32());
  /* 127b2e48 pop ebx */
  EBX = (pop32());
  /* 127b2e49 mov esp, ebp */
  ESP = (EBP);
  /* 127b2e4b pop ebp */
  EBP = (pop32());
  /* 127b2e4c ret  */
  ESPCHK(0x127b2be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x127b2e50 (208 bytes, 85 insns) */
void f_127b2e50(void) {
  FTRACE(0x127b2e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2e50 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2e51 mov ebp, esp */
  EBP = (ESP);
  /* 127b2e53 push edi */
  push32((uint32_t)(EDI));
  /* 127b2e54 push esi */
  push32((uint32_t)(ESI));
  /* 127b2e55 push ebx */
  push32((uint32_t)(EBX));
  /* 127b2e56 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2e59 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2e5c lea eax, [0x127d0710] */
  EAX = ((uint32_t)(0x127d0710));
  /* 127b2e62 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2e66 jne 0x127b2ea3 */
  if (!C.zf) goto L_127b2ea3;
  /* 127b2e68 mov al, 0xff */
  AL = (0xffu);
  /* 127b2e6a mov edi, edi */
  EDI = (EDI);
L_127b2e6c:;
  /* 127b2e6c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b2e6e je 0x127b2e9e */
  if (C.zf) goto L_127b2e9e;
  /* 127b2e70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127b2e72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127b2e73 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 127b2e75 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127b2e76 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2e78 je 0x127b2e6c */
  if (C.zf) goto L_127b2e6c;
  /* 127b2e7a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127b2e7c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2e7e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127b2e80 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127b2e83 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127b2e85 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127b2e87 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 127b2e89 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127b2e8b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2e8d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127b2e8f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127b2e92 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127b2e94 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127b2e96 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2e98 je 0x127b2e6c */
  if (C.zf) goto L_127b2e6c;
  /* 127b2e9a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127b2e9c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_127b2e9e:;
  /* 127b2e9e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 127b2ea1 jmp 0x127b2f1b */
  goto L_127b2f1b;
L_127b2ea3:;
  /* 127b2ea3 lock inc dword ptr [0x127d08a4] */
  x86_unimpl("lock inc @ 0x127b2ea3");
  /* 127b2eaa cmp dword ptr [0x127d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2eb1 jg 0x127b2eb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b2eb7;
  /* 127b2eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2eb5 jmp 0x127b2ecc */
  goto L_127b2ecc;
L_127b2eb7:;
  /* 127b2eb7 lock dec dword ptr [0x127d08a4] */
  x86_unimpl("lock dec @ 0x127b2eb7");
  /* 127b2ebe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b2ec0 call 0x127a8180 */
  push32(0x127b2ec5u); f_127a8180();
  /* 127b2ec5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_127b2ecc:;
  /* 127b2ecc mov eax, 0xff */
  EAX = (0xffu);
  /* 127b2ed1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 127b2ed3 nop  */
  /* nop */
L_127b2ed4:;
  /* 127b2ed4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b2ed6 je 0x127b2eff */
  if (C.zf) goto L_127b2eff;
  /* 127b2ed8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127b2eda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127b2edb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 127b2edd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127b2ede cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2ee0 je 0x127b2ed4 */
  if (C.zf) goto L_127b2ed4;
  /* 127b2ee2 push eax */
  push32((uint32_t)(EAX));
  /* 127b2ee3 push ebx */
  push32((uint32_t)(EBX));
  /* 127b2ee4 call 0x127b3fc0 */
  push32(0x127b2ee9u); f_127b3fc0();
  /* 127b2ee9 mov ebx, eax */
  EBX = (EAX);
  /* 127b2eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2eee call 0x127b3fc0 */
  push32(0x127b2ef3u); f_127b3fc0();
  /* 127b2ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2ef6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2ef8 je 0x127b2ed4 */
  if (C.zf) goto L_127b2ed4;
  /* 127b2efa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b2efc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127b2eff:;
  /* 127b2eff mov ebx, eax */
  EBX = (EAX);
  /* 127b2f01 pop eax */
  EAX = (pop32());
  /* 127b2f02 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2f04 jne 0x127b2f0f */
  if (!C.zf) goto L_127b2f0f;
  /* 127b2f06 lock dec dword ptr [0x127d08a4] */
  x86_unimpl("lock dec @ 0x127b2f06");
  /* 127b2f0d jmp 0x127b2f19 */
  goto L_127b2f19;
L_127b2f0f:;
  /* 127b2f0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b2f11 call 0x127a8220 */
  push32(0x127b2f16u); f_127a8220();
  /* 127b2f16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b2f19:;
  /* 127b2f19 mov eax, ebx */
  EAX = (EBX);
L_127b2f1b:;
  /* 127b2f1b pop ebx */
  EBX = (pop32());
  /* 127b2f1c pop esi */
  ESI = (pop32());
  /* 127b2f1d pop edi */
  EDI = (pop32());
  /* 127b2f1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127b2f1f ret  */
  ESPCHK(0x127b2e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x127b2f20 (257 bytes, 103 insns) */
void f_127b2f20(void) {
  FTRACE(0x127b2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 127b2f21 mov ebp, esp */
  EBP = (ESP);
  /* 127b2f23 push edi */
  push32((uint32_t)(EDI));
  /* 127b2f24 push esi */
  push32((uint32_t)(ESI));
  /* 127b2f25 push ebx */
  push32((uint32_t)(EBX));
  /* 127b2f26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b2f29 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b2f2b je 0x127b301a */
  if (C.zf) goto L_127b301a;
  /* 127b2f31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 127b2f34 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 127b2f37 lea eax, [0x127d0710] */
  EAX = ((uint32_t)(0x127d0710));
  /* 127b2f3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2f41 jne 0x127b2f91 */
  if (!C.zf) goto L_127b2f91;
  /* 127b2f43 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 127b2f45 mov bl, 0x5a */
  BL = (0x5au);
  /* 127b2f47 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 127b2f49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127b2f4c:;
  /* 127b2f4c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 127b2f4e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127b2f50 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 127b2f52 je 0x127b2f75 */
  if (C.zf) goto L_127b2f75;
  /* 127b2f54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b2f56 je 0x127b2f75 */
  if (C.zf) goto L_127b2f75;
  /* 127b2f58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127b2f59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127b2f5a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2f5c jb 0x127b2f64 */
  if (C.cf) goto L_127b2f64;
  /* 127b2f5e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2f60 ja 0x127b2f64 */
  if ((!C.cf&&!C.zf)) goto L_127b2f64;
  /* 127b2f62 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_127b2f64:;
  /* 127b2f64 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2f66 jb 0x127b2f6e */
  if (C.cf) goto L_127b2f6e;
  /* 127b2f68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2f6a ja 0x127b2f6e */
  if ((!C.cf&&!C.zf)) goto L_127b2f6e;
  /* 127b2f6c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_127b2f6e:;
  /* 127b2f6e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2f70 jne 0x127b2f7f */
  if (!C.zf) goto L_127b2f7f;
  /* 127b2f72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127b2f73 jne 0x127b2f4c */
  if (!C.zf) goto L_127b2f4c;
L_127b2f75:;
  /* 127b2f75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b2f77 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b2f79 je 0x127b301a */
  if (C.zf) goto L_127b301a;
L_127b2f7f:;
  /* 127b2f7f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 127b2f84 jb 0x127b301a */
  if (C.cf) goto L_127b301a;
  /* 127b2f8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b2f8c jmp 0x127b301a */
  goto L_127b301a;
L_127b2f91:;
  /* 127b2f91 lock inc dword ptr [0x127d08a4] */
  x86_unimpl("lock inc @ 0x127b2f91");
  /* 127b2f98 cmp dword ptr [0x127d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2f9f jg 0x127b2fa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b2fa5;
  /* 127b2fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b2fa3 jmp 0x127b2fbe */
  goto L_127b2fbe;
L_127b2fa5:;
  /* 127b2fa5 lock dec dword ptr [0x127d08a4] */
  x86_unimpl("lock dec @ 0x127b2fa5");
  /* 127b2fac mov ebx, ecx */
  EBX = (ECX);
  /* 127b2fae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b2fb0 call 0x127a8180 */
  push32(0x127b2fb5u); f_127a8180();
  /* 127b2fb5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 127b2fbc mov ecx, ebx */
  ECX = (EBX);
L_127b2fbe:;
  /* 127b2fbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2fc0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 127b2fc2 mov edi, edi */
  EDI = (EDI);
L_127b2fc4:;
  /* 127b2fc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127b2fc6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b2fc8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 127b2fca je 0x127b2fef */
  if (C.zf) goto L_127b2fef;
  /* 127b2fcc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 127b2fce je 0x127b2fef */
  if (C.zf) goto L_127b2fef;
  /* 127b2fd0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127b2fd1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127b2fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 127b2fd3 push eax */
  push32((uint32_t)(EAX));
  /* 127b2fd4 push ebx */
  push32((uint32_t)(EBX));
  /* 127b2fd5 call 0x127b3fc0 */
  push32(0x127b2fdau); f_127b3fc0();
  /* 127b2fda mov ebx, eax */
  EBX = (EAX);
  /* 127b2fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2fdf call 0x127b3fc0 */
  push32(0x127b2fe4u); f_127b3fc0();
  /* 127b2fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b2fe7 pop ecx */
  ECX = (pop32());
  /* 127b2fe8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2fea jne 0x127b2ff5 */
  if (!C.zf) goto L_127b2ff5;
  /* 127b2fec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127b2fed jne 0x127b2fc4 */
  if (!C.zf) goto L_127b2fc4;
L_127b2fef:;
  /* 127b2fef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b2ff1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b2ff3 je 0x127b2ffe */
  if (C.zf) goto L_127b2ffe;
L_127b2ff5:;
  /* 127b2ff5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 127b2ffa jb 0x127b2ffe */
  if (C.cf) goto L_127b2ffe;
  /* 127b2ffc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_127b2ffe:;
  /* 127b2ffe pop eax */
  EAX = (pop32());
  /* 127b2fff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3001 jne 0x127b300c */
  if (!C.zf) goto L_127b300c;
  /* 127b3003 lock dec dword ptr [0x127d08a4] */
  x86_unimpl("lock dec @ 0x127b3003");
  /* 127b300a jmp 0x127b301a */
  goto L_127b301a;
L_127b300c:;
  /* 127b300c mov ebx, ecx */
  EBX = (ECX);
  /* 127b300e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b3010 call 0x127a8220 */
  push32(0x127b3015u); f_127a8220();
  /* 127b3015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3018 mov ecx, ebx */
  ECX = (EBX);
L_127b301a:;
  /* 127b301a mov eax, ecx */
  EAX = (ECX);
  /* 127b301c pop ebx */
  EBX = (pop32());
  /* 127b301d pop esi */
  ESI = (pop32());
  /* 127b301e pop edi */
  EDI = (pop32());
  /* 127b301f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127b3020 ret  */
  ESPCHK(0x127b2f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013030 @ 0x127b3030 (255 bytes, 88 insns) */
void f_127b3030(void) {
  FTRACE(0x127b3030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3030 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3031 mov ebp, esp */
  EBP = (ESP);
  /* 127b3033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_127b3036:;
  /* 127b3036 cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b303d jle 0x127b3056 */
  if ((C.zf||C.sf!=C.of)) goto L_127b3056;
  /* 127b303f push 8 */
  push32((uint32_t)(0x8u));
  /* 127b3041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3044 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3046 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b3048 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3049 call 0x127aa790 */
  push32(0x127b304eu); f_127aa790();
  /* 127b304e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3051 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127b3054 jmp 0x127b306f */
  goto L_127b306f;
L_127b3056:;
  /* 127b3056 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b305b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b305d mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b3063 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3065 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b3069 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127b306c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127b306f:;
  /* 127b306f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3073 je 0x127b3080 */
  if (C.zf) goto L_127b3080;
  /* 127b3075 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3078 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b307b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b307e jmp 0x127b3036 */
  goto L_127b3036;
L_127b3080:;
  /* 127b3080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3083 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3085 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b3087 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b308a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b308d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3090 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b3093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b3096 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b3099 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b309d je 0x127b30a5 */
  if (C.zf) goto L_127b30a5;
  /* 127b309f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b30a3 jne 0x127b30b8 */
  if (!C.zf) goto L_127b30b8;
L_127b30a5:;
  /* 127b30a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b30a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b30aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b30ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b30af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b30b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b30b5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127b30b8:;
  /* 127b30b8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127b30bf:;
  /* 127b30bf cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b30c6 jle 0x127b30db */
  if ((C.zf||C.sf!=C.of)) goto L_127b30db;
  /* 127b30c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 127b30ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b30cd push edx */
  push32((uint32_t)(EDX));
  /* 127b30ce call 0x127aa790 */
  push32(0x127b30d3u); f_127aa790();
  /* 127b30d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b30d6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b30d9 jmp 0x127b30f0 */
  goto L_127b30f0;
L_127b30db:;
  /* 127b30db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b30de mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b30e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b30e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b30ea and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127b30ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_127b30f0:;
  /* 127b30f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b30f4 je 0x127b311b */
  if (C.zf) goto L_127b311b;
  /* 127b30f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b30f9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b30fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b30ff lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 127b3103 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b3106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3109 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b310b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b310d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b3110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3113 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3116 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127b3119 jmp 0x127b30bf */
  goto L_127b30bf;
L_127b311b:;
  /* 127b311b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b311f jne 0x127b3128 */
  if (!C.zf) goto L_127b3128;
  /* 127b3121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3124 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b3126 jmp 0x127b312b */
  goto L_127b312b;
L_127b3128:;
  /* 127b3128 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127b312b:;
  /* 127b312b mov esp, ebp */
  ESP = (EBP);
  /* 127b312d pop ebp */
  EBP = (pop32());
  /* 127b312e ret  */
  ESPCHK(0x127b3030u, _esp0);
  ESP += 4; return;
}

/* FUN_10013130 @ 0x127b3130 (17 bytes, 8 insns) */
void f_127b3130(void) {
  FTRACE(0x127b3130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3130 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3131 mov ebp, esp */
  EBP = (ESP);
  /* 127b3133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3136 push eax */
  push32((uint32_t)(EAX));
  /* 127b3137 call 0x127b3030 */
  push32(0x127b313cu); f_127b3030();
  /* 127b313c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b313f pop ebp */
  EBP = (pop32());
  /* 127b3140 ret  */
  ESPCHK(0x127b3130u, _esp0);
  ESP += 4; return;
}

/* FUN_10013150 @ 0x127b3150 (297 bytes, 106 insns) */
void f_127b3150(void) {
  FTRACE(0x127b3150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3150 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3151 mov ebp, esp */
  EBP = (ESP);
  /* 127b3153 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3156 push esi */
  push32((uint32_t)(ESI));
L_127b3157:;
  /* 127b3157 cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b315e jle 0x127b3177 */
  if ((C.zf||C.sf!=C.of)) goto L_127b3177;
  /* 127b3160 push 8 */
  push32((uint32_t)(0x8u));
  /* 127b3162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3165 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3167 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b3169 push ecx */
  push32((uint32_t)(ECX));
  /* 127b316a call 0x127aa790 */
  push32(0x127b316fu); f_127aa790();
  /* 127b316f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3172 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b3175 jmp 0x127b3190 */
  goto L_127b3190;
L_127b3177:;
  /* 127b3177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b317a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b317c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b317e mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b3184 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3186 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b318a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127b318d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_127b3190:;
  /* 127b3190 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3194 je 0x127b31a1 */
  if (C.zf) goto L_127b31a1;
  /* 127b3196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3199 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b319c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b319f jmp 0x127b3157 */
  goto L_127b3157;
L_127b31a1:;
  /* 127b31a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b31a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b31a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b31a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b31ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b31ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b31b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b31b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b31b7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127b31ba cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b31be je 0x127b31c6 */
  if (C.zf) goto L_127b31c6;
  /* 127b31c0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b31c4 jne 0x127b31d9 */
  if (!C.zf) goto L_127b31d9;
L_127b31c6:;
  /* 127b31c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b31c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b31cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b31cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b31d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b31d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b31d6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127b31d9:;
  /* 127b31d9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127b31e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127b31e7:;
  /* 127b31e7 cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b31ee jle 0x127b3203 */
  if ((C.zf||C.sf!=C.of)) goto L_127b3203;
  /* 127b31f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 127b31f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b31f5 push edx */
  push32((uint32_t)(EDX));
  /* 127b31f6 call 0x127aa790 */
  push32(0x127b31fbu); f_127aa790();
  /* 127b31fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b31fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127b3201 jmp 0x127b3218 */
  goto L_127b3218;
L_127b3203:;
  /* 127b3203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b3206 mov ecx, dword ptr [0x127cec98] */
  ECX = (r32((uint32_t)(0x127cec98)));
  /* 127b320c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b320e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 127b3212 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127b3215 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_127b3218:;
  /* 127b3218 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b321c je 0x127b3259 */
  if (C.zf) goto L_127b3259;
  /* 127b321e push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3220 push 0xa */
  push32((uint32_t)(0xau));
  /* 127b3222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3225 push eax */
  push32((uint32_t)(EAX));
  /* 127b3226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3229 push ecx */
  push32((uint32_t)(ECX));
  /* 127b322a call 0x127b40f0 */
  push32(0x127b322fu); f_127b40f0();
  /* 127b322f mov ecx, eax */
  ECX = (EAX);
  /* 127b3231 mov esi, edx */
  ESI = (EDX);
  /* 127b3233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b3236 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3239 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b323a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b323c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127b323e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b3241 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 127b3244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3249 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b324b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b324e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3254 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127b3257 jmp 0x127b31e7 */
  goto L_127b31e7;
L_127b3259:;
  /* 127b3259 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b325d jne 0x127b326e */
  if (!C.zf) goto L_127b326e;
  /* 127b325f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3262 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b3264 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3267 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b326a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b326c jmp 0x127b3274 */
  goto L_127b3274;
L_127b326e:;
  /* 127b326e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3271 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_127b3274:;
  /* 127b3274 pop esi */
  ESI = (pop32());
  /* 127b3275 mov esp, ebp */
  ESP = (EBP);
  /* 127b3277 pop ebp */
  EBP = (pop32());
  /* 127b3278 ret  */
  ESPCHK(0x127b3150u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x127b3280 (61 bytes, 18 insns) */
void f_127b3280(void) {
  FTRACE(0x127b3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3280 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3281 mov ebp, esp */
  EBP = (ESP);
  /* 127b3283 cmp dword ptr [0x127d0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b328a jne 0x127b32bb */
  if (!C.zf) goto L_127b32bb;
  /* 127b328c push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b328e call 0x127a8180 */
  push32(0x127b3293u); f_127a8180();
  /* 127b3293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3296 cmp dword ptr [0x127d0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b329d jne 0x127b32b1 */
  if (!C.zf) goto L_127b32b1;
  /* 127b329f call 0x127b32e0 */
  push32(0x127b32a4u); f_127b32e0();
  /* 127b32a4 mov eax, dword ptr [0x127d0870] */
  EAX = (r32((uint32_t)(0x127d0870)));
  /* 127b32a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b32ac mov dword ptr [0x127d0870], eax */
  w32((uint32_t)(0x127d0870), (EAX));
L_127b32b1:;
  /* 127b32b1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b32b3 call 0x127a8220 */
  push32(0x127b32b8u); f_127a8220();
  /* 127b32b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b32bb:;
  /* 127b32bb pop ebp */
  EBP = (pop32());
  /* 127b32bc ret  */
  ESPCHK(0x127b3280u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x127b32c0 (30 bytes, 11 insns) */
void f_127b32c0(void) {
  FTRACE(0x127b32c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b32c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b32c1 mov ebp, esp */
  EBP = (ESP);
  /* 127b32c3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b32c5 call 0x127a8180 */
  push32(0x127b32cau); f_127a8180();
  /* 127b32ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b32cd call 0x127b32e0 */
  push32(0x127b32d2u); f_127b32e0();
  /* 127b32d2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b32d4 call 0x127a8220 */
  push32(0x127b32d9u); f_127a8220();
  /* 127b32d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b32dc pop ebp */
  EBP = (pop32());
  /* 127b32dd ret  */
  ESPCHK(0x127b32c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132e0 @ 0x127b32e0 (939 bytes, 266 insns) */
void f_127b32e0(void) {
  FTRACE(0x127b32e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b32e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b32e1 mov ebp, esp */
  EBP = (ESP);
  /* 127b32e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b32e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b32ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b32ef call 0x127a8180 */
  push32(0x127b32f4u); f_127a8180();
  /* 127b32f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b32f7 mov dword ptr [0x127d07b8], 0 */
  w32((uint32_t)(0x127d07b8), (0x0u));
  /* 127b3301 mov dword ptr [0x127cfe38], 0xffffffff */
  w32((uint32_t)(0x127cfe38), (0xffffffffu));
  /* 127b330b mov eax, dword ptr [0x127cfe38] */
  EAX = (r32((uint32_t)(0x127cfe38)));
  /* 127b3310 mov dword ptr [0x127cfe28], eax */
  w32((uint32_t)(0x127cfe28), (EAX));
  /* 127b3315 push 0x127cc910 */
  push32((uint32_t)(0x127cc910u));
  /* 127b331a call 0x127b4160 */
  push32(0x127b331fu); f_127b4160();
  /* 127b331f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3322 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b3325 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3329 jne 0x127b3463 */
  if (!C.zf) goto L_127b3463;
  /* 127b332f push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b3331 call 0x127a8220 */
  push32(0x127b3336u); f_127a8220();
  /* 127b3336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3339 push 0x127d07c0 */
  push32((uint32_t)(0x127d07c0u));
  /* 127b333e call dword ptr [0x127d3254] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3254))), 0x127b3344u);
  /* 127b3344 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3347 je 0x127b345e */
  if (C.zf) goto L_127b345e;
  /* 127b334d mov dword ptr [0x127d07b8], 1 */
  w32((uint32_t)(0x127d07b8), (0x1u));
  /* 127b3357 mov ecx, dword ptr [0x127d07c0] */
  ECX = (r32((uint32_t)(0x127d07c0)));
  /* 127b335d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3360 mov dword ptr [0x127cfd90], ecx */
  w32((uint32_t)(0x127cfd90), (ECX));
  /* 127b3366 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3368 mov dx, word ptr [0x127d0806] */
  DX = (r16((uint32_t)(0x127d0806)));
  /* 127b336f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b3371 je 0x127b3389 */
  if (C.zf) goto L_127b3389;
  /* 127b3373 mov eax, dword ptr [0x127d0814] */
  EAX = (r32((uint32_t)(0x127d0814)));
  /* 127b3378 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b337b mov ecx, dword ptr [0x127cfd90] */
  ECX = (r32((uint32_t)(0x127cfd90)));
  /* 127b3381 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3383 mov dword ptr [0x127cfd90], ecx */
  w32((uint32_t)(0x127cfd90), (ECX));
L_127b3389:;
  /* 127b3389 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b338b mov dx, word ptr [0x127d085a] */
  DX = (r16((uint32_t)(0x127d085a)));
  /* 127b3392 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b3394 je 0x127b33be */
  if (C.zf) goto L_127b33be;
  /* 127b3396 cmp dword ptr [0x127d0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b339d je 0x127b33be */
  if (C.zf) goto L_127b33be;
  /* 127b339f mov dword ptr [0x127cfd94], 1 */
  w32((uint32_t)(0x127cfd94), (0x1u));
  /* 127b33a9 mov eax, dword ptr [0x127d0868] */
  EAX = (r32((uint32_t)(0x127d0868)));
  /* 127b33ae sub eax, dword ptr [0x127d0814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d0814))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b33b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b33b7 mov dword ptr [0x127cfd98], eax */
  w32((uint32_t)(0x127cfd98), (EAX));
  /* 127b33bc jmp 0x127b33d2 */
  goto L_127b33d2;
L_127b33be:;
  /* 127b33be mov dword ptr [0x127cfd94], 0 */
  w32((uint32_t)(0x127cfd94), (0x0u));
  /* 127b33c8 mov dword ptr [0x127cfd98], 0 */
  w32((uint32_t)(0x127cfd98), (0x0u));
L_127b33d2:;
  /* 127b33d2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 127b33d5 push ecx */
  push32((uint32_t)(ECX));
  /* 127b33d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b33d8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127b33da mov edx, dword ptr [0x127cfe1c] */
  EDX = (r32((uint32_t)(0x127cfe1c)));
  /* 127b33e0 push edx */
  push32((uint32_t)(EDX));
  /* 127b33e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b33e3 push 0x127d07c4 */
  push32((uint32_t)(0x127d07c4u));
  /* 127b33e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127b33ed mov eax, dword ptr [0x127d0728] */
  EAX = (r32((uint32_t)(0x127d0728)));
  /* 127b33f2 push eax */
  push32((uint32_t)(EAX));
  /* 127b33f3 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b33f9u);
  /* 127b33f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b33fb je 0x127b340f */
  if (C.zf) goto L_127b340f;
  /* 127b33fd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3401 jne 0x127b340f */
  if (!C.zf) goto L_127b340f;
  /* 127b3403 mov ecx, dword ptr [0x127cfe1c] */
  ECX = (r32((uint32_t)(0x127cfe1c)));
  /* 127b3409 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 127b340d jmp 0x127b3418 */
  goto L_127b3418;
L_127b340f:;
  /* 127b340f mov edx, dword ptr [0x127cfe1c] */
  EDX = (r32((uint32_t)(0x127cfe1c)));
  /* 127b3415 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_127b3418:;
  /* 127b3418 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127b341b push eax */
  push32((uint32_t)(EAX));
  /* 127b341c push 0 */
  push32((uint32_t)(0x0u));
  /* 127b341e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127b3420 mov ecx, dword ptr [0x127cfe20] */
  ECX = (r32((uint32_t)(0x127cfe20)));
  /* 127b3426 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3427 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3429 push 0x127d0818 */
  push32((uint32_t)(0x127d0818u));
  /* 127b342e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127b3433 mov edx, dword ptr [0x127d0728] */
  EDX = (r32((uint32_t)(0x127d0728)));
  /* 127b3439 push edx */
  push32((uint32_t)(EDX));
  /* 127b343a call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b3440u);
  /* 127b3440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3442 je 0x127b3455 */
  if (C.zf) goto L_127b3455;
  /* 127b3444 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3448 jne 0x127b3455 */
  if (!C.zf) goto L_127b3455;
  /* 127b344a mov eax, dword ptr [0x127cfe20] */
  EAX = (r32((uint32_t)(0x127cfe20)));
  /* 127b344f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 127b3453 jmp 0x127b345e */
  goto L_127b345e;
L_127b3455:;
  /* 127b3455 mov ecx, dword ptr [0x127cfe20] */
  ECX = (r32((uint32_t)(0x127cfe20)));
  /* 127b345b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_127b345e:;
  /* 127b345e jmp 0x127b3687 */
  goto L_127b3687;
L_127b3463:;
  /* 127b3463 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3466 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b3469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b346b je 0x127b348d */
  if (C.zf) goto L_127b348d;
  /* 127b346d cmp dword ptr [0x127d086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3474 je 0x127b349c */
  if (C.zf) goto L_127b349c;
  /* 127b3476 mov ecx, dword ptr [0x127d086c] */
  ECX = (r32((uint32_t)(0x127d086c)));
  /* 127b347c push ecx */
  push32((uint32_t)(ECX));
  /* 127b347d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3480 push edx */
  push32((uint32_t)(EDX));
  /* 127b3481 call 0x127b0410 */
  push32(0x127b3486u); f_127b0410();
  /* 127b3486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b348b jne 0x127b349c */
  if (!C.zf) goto L_127b349c;
L_127b348d:;
  /* 127b348d push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b348f call 0x127a8220 */
  push32(0x127b3494u); f_127a8220();
  /* 127b3494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3497 jmp 0x127b3687 */
  goto L_127b3687;
L_127b349c:;
  /* 127b349c push 2 */
  push32((uint32_t)(0x2u));
  /* 127b349e mov eax, dword ptr [0x127d086c] */
  EAX = (r32((uint32_t)(0x127d086c)));
  /* 127b34a3 push eax */
  push32((uint32_t)(EAX));
  /* 127b34a4 call 0x127a5210 */
  push32(0x127b34a9u); f_127a5210();
  /* 127b34a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b34ac push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 127b34b1 push 0x127cc908 */
  push32((uint32_t)(0x127cc908u));
  /* 127b34b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b34b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b34bb push ecx */
  push32((uint32_t)(ECX));
  /* 127b34bc call 0x127a75b0 */
  push32(0x127b34c1u); f_127a75b0();
  /* 127b34c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b34c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b34c7 push eax */
  push32((uint32_t)(EAX));
  /* 127b34c8 call 0x127a4780 */
  push32(0x127b34cdu); f_127a4780();
  /* 127b34cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b34d0 mov dword ptr [0x127d086c], eax */
  w32((uint32_t)(0x127d086c), (EAX));
  /* 127b34d5 cmp dword ptr [0x127d086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b34dc jne 0x127b34ed */
  if (!C.zf) goto L_127b34ed;
  /* 127b34de push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b34e0 call 0x127a8220 */
  push32(0x127b34e5u); f_127a8220();
  /* 127b34e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b34e8 jmp 0x127b3687 */
  goto L_127b3687;
L_127b34ed:;
  /* 127b34ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b34f0 push edx */
  push32((uint32_t)(EDX));
  /* 127b34f1 mov eax, dword ptr [0x127d086c] */
  EAX = (r32((uint32_t)(0x127d086c)));
  /* 127b34f6 push eax */
  push32((uint32_t)(EAX));
  /* 127b34f7 call 0x127a7730 */
  push32(0x127b34fcu); f_127a7730();
  /* 127b34fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b34ff push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b3501 call 0x127a8220 */
  push32(0x127b3506u); f_127a8220();
  /* 127b3506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3509 push 3 */
  push32((uint32_t)(0x3u));
  /* 127b350b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b350e push ecx */
  push32((uint32_t)(ECX));
  /* 127b350f mov edx, dword ptr [0x127cfe1c] */
  EDX = (r32((uint32_t)(0x127cfe1c)));
  /* 127b3515 push edx */
  push32((uint32_t)(EDX));
  /* 127b3516 call 0x127a7fa0 */
  push32(0x127b351bu); f_127a7fa0();
  /* 127b351b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b351e mov eax, dword ptr [0x127cfe1c] */
  EAX = (r32((uint32_t)(0x127cfe1c)));
  /* 127b3523 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 127b3527 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b352a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b352d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b3530 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3533 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b3536 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3539 jne 0x127b354d */
  if (!C.zf) goto L_127b354d;
  /* 127b353b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b353e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3541 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b3544 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3547 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b354a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127b354d:;
  /* 127b354d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3550 push eax */
  push32((uint32_t)(EAX));
  /* 127b3551 call 0x127b3030 */
  push32(0x127b3556u); f_127b3030();
  /* 127b3556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3559 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b355f mov dword ptr [0x127cfd90], eax */
  w32((uint32_t)(0x127cfd90), (EAX));
L_127b3564:;
  /* 127b3564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3567 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b356a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b356d je 0x127b3585 */
  if (C.zf) goto L_127b3585;
  /* 127b356f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3572 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b3575 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3578 jl 0x127b3590 */
  if ((C.sf!=C.of)) goto L_127b3590;
  /* 127b357a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b357d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b3580 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3583 jg 0x127b3590 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b3590;
L_127b3585:;
  /* 127b3585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3588 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b358b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b358e jmp 0x127b3564 */
  goto L_127b3564;
L_127b3590:;
  /* 127b3590 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3593 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b3596 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3599 jne 0x127b3635 */
  if (!C.zf) goto L_127b3635;
  /* 127b359f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b35a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b35a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35ab push edx */
  push32((uint32_t)(EDX));
  /* 127b35ac call 0x127b3030 */
  push32(0x127b35b1u); f_127b3030();
  /* 127b35b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b35b4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b35b7 mov ecx, dword ptr [0x127cfd90] */
  ECX = (r32((uint32_t)(0x127cfd90)));
  /* 127b35bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b35bf mov dword ptr [0x127cfd90], ecx */
  w32((uint32_t)(0x127cfd90), (ECX));
L_127b35c5:;
  /* 127b35c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35c8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b35cb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b35ce jl 0x127b35e6 */
  if ((C.sf!=C.of)) goto L_127b35e6;
  /* 127b35d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b35d6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b35d9 jg 0x127b35e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b35e6;
  /* 127b35db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b35e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b35e4 jmp 0x127b35c5 */
  goto L_127b35c5;
L_127b35e6:;
  /* 127b35e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35e9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b35ec cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b35ef jne 0x127b3635 */
  if (!C.zf) goto L_127b3635;
  /* 127b35f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b35f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b35fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b35fd push ecx */
  push32((uint32_t)(ECX));
  /* 127b35fe call 0x127b3030 */
  push32(0x127b3603u); f_127b3030();
  /* 127b3603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3606 mov edx, dword ptr [0x127cfd90] */
  EDX = (r32((uint32_t)(0x127cfd90)));
  /* 127b360c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b360e mov dword ptr [0x127cfd90], edx */
  w32((uint32_t)(0x127cfd90), (EDX));
L_127b3614:;
  /* 127b3614 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3617 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b361a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b361d jl 0x127b3635 */
  if ((C.sf!=C.of)) goto L_127b3635;
  /* 127b361f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3622 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b3625 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3628 jg 0x127b3635 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b3635;
  /* 127b362a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b362d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3630 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b3633 jmp 0x127b3614 */
  goto L_127b3614;
L_127b3635:;
  /* 127b3635 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3639 je 0x127b3649 */
  if (C.zf) goto L_127b3649;
  /* 127b363b mov edx, dword ptr [0x127cfd90] */
  EDX = (r32((uint32_t)(0x127cfd90)));
  /* 127b3641 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b3643 mov dword ptr [0x127cfd90], edx */
  w32((uint32_t)(0x127cfd90), (EDX));
L_127b3649:;
  /* 127b3649 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b364c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b364f mov dword ptr [0x127cfd94], ecx */
  w32((uint32_t)(0x127cfd94), (ECX));
  /* 127b3655 cmp dword ptr [0x127cfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127cfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b365c je 0x127b367e */
  if (C.zf) goto L_127b367e;
  /* 127b365e push 3 */
  push32((uint32_t)(0x3u));
  /* 127b3660 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b3663 push edx */
  push32((uint32_t)(EDX));
  /* 127b3664 mov eax, dword ptr [0x127cfe20] */
  EAX = (r32((uint32_t)(0x127cfe20)));
  /* 127b3669 push eax */
  push32((uint32_t)(EAX));
  /* 127b366a call 0x127a7fa0 */
  push32(0x127b366fu); f_127a7fa0();
  /* 127b366f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3672 mov ecx, dword ptr [0x127cfe20] */
  ECX = (r32((uint32_t)(0x127cfe20)));
  /* 127b3678 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 127b367c jmp 0x127b3687 */
  goto L_127b3687;
L_127b367e:;
  /* 127b367e mov edx, dword ptr [0x127cfe20] */
  EDX = (r32((uint32_t)(0x127cfe20)));
  /* 127b3684 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_127b3687:;
  /* 127b3687 mov esp, ebp */
  ESP = (EBP);
  /* 127b3689 pop ebp */
  EBP = (pop32());
  /* 127b368a ret  */
  ESPCHK(0x127b32e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x127b3690 (46 bytes, 18 insns) */
void f_127b3690(void) {
  FTRACE(0x127b3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3690 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3691 mov ebp, esp */
  EBP = (ESP);
  /* 127b3693 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3694 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b3696 call 0x127a8180 */
  push32(0x127b369bu); f_127a8180();
  /* 127b369b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b369e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b36a1 push eax */
  push32((uint32_t)(EAX));
  /* 127b36a2 call 0x127b36c0 */
  push32(0x127b36a7u); f_127b36c0();
  /* 127b36a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b36aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b36ad push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b36af call 0x127a8220 */
  push32(0x127b36b4u); f_127a8220();
  /* 127b36b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b36b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b36ba mov esp, ebp */
  ESP = (EBP);
  /* 127b36bc pop ebp */
  EBP = (pop32());
  /* 127b36bd ret  */
  ESPCHK(0x127b3690u, _esp0);
  ESP += 4; return;
}

/* FUN_100136c0 @ 0x127b36c0 (762 bytes, 246 insns) */
void f_127b36c0(void) {
  FTRACE(0x127b36c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b36c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b36c1 mov ebp, esp */
  EBP = (ESP);
  /* 127b36c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b36c4 cmp dword ptr [0x127cfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127cfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b36cb jne 0x127b36d4 */
  if (!C.zf) goto L_127b36d4;
  /* 127b36cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b36cf jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b36d4:;
  /* 127b36d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b36d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127b36da cmp ecx, dword ptr [0x127cfe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cfe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b36e0 jne 0x127b36f4 */
  if (!C.zf) goto L_127b36f4;
  /* 127b36e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b36e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127b36e8 cmp eax, dword ptr [0x127cfe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cfe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b36ee je 0x127b38bb */
  if (C.zf) goto L_127b38bb;
L_127b36f4:;
  /* 127b36f4 cmp dword ptr [0x127d07b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d07b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b36fb je 0x127b3875 */
  if (C.zf) goto L_127b3875;
  /* 127b3701 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3703 mov cx, word ptr [0x127d0858] */
  CX = (r16((uint32_t)(0x127d0858)));
  /* 127b370a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b370c jne 0x127b3769 */
  if (!C.zf) goto L_127b3769;
  /* 127b370e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3710 mov dx, word ptr [0x127d0866] */
  DX = (r16((uint32_t)(0x127d0866)));
  /* 127b3717 push edx */
  push32((uint32_t)(EDX));
  /* 127b3718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b371a mov ax, word ptr [0x127d0864] */
  AX = (r16((uint32_t)(0x127d0864)));
  /* 127b3720 push eax */
  push32((uint32_t)(EAX));
  /* 127b3721 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3723 mov cx, word ptr [0x127d0862] */
  CX = (r16((uint32_t)(0x127d0862)));
  /* 127b372a push ecx */
  push32((uint32_t)(ECX));
  /* 127b372b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b372d mov dx, word ptr [0x127d0860] */
  DX = (r16((uint32_t)(0x127d0860)));
  /* 127b3734 push edx */
  push32((uint32_t)(EDX));
  /* 127b3735 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3739 mov ax, word ptr [0x127d085c] */
  AX = (r16((uint32_t)(0x127d085c)));
  /* 127b373f push eax */
  push32((uint32_t)(EAX));
  /* 127b3740 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3742 mov cx, word ptr [0x127d085e] */
  CX = (r16((uint32_t)(0x127d085e)));
  /* 127b3749 push ecx */
  push32((uint32_t)(ECX));
  /* 127b374a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b374c mov dx, word ptr [0x127d085a] */
  DX = (r16((uint32_t)(0x127d085a)));
  /* 127b3753 push edx */
  push32((uint32_t)(EDX));
  /* 127b3754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3757 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127b375a push ecx */
  push32((uint32_t)(ECX));
  /* 127b375b push 1 */
  push32((uint32_t)(0x1u));
  /* 127b375d push 1 */
  push32((uint32_t)(0x1u));
  /* 127b375f call 0x127b39c0 */
  push32(0x127b3764u); f_127b39c0();
  /* 127b3764 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3767 jmp 0x127b37ba */
  goto L_127b37ba;
L_127b3769:;
  /* 127b3769 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b376b mov dx, word ptr [0x127d0866] */
  DX = (r16((uint32_t)(0x127d0866)));
  /* 127b3772 push edx */
  push32((uint32_t)(EDX));
  /* 127b3773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3775 mov ax, word ptr [0x127d0864] */
  AX = (r16((uint32_t)(0x127d0864)));
  /* 127b377b push eax */
  push32((uint32_t)(EAX));
  /* 127b377c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b377e mov cx, word ptr [0x127d0862] */
  CX = (r16((uint32_t)(0x127d0862)));
  /* 127b3785 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3786 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3788 mov dx, word ptr [0x127d0860] */
  DX = (r16((uint32_t)(0x127d0860)));
  /* 127b378f push edx */
  push32((uint32_t)(EDX));
  /* 127b3790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3792 mov ax, word ptr [0x127d085e] */
  AX = (r16((uint32_t)(0x127d085e)));
  /* 127b3798 push eax */
  push32((uint32_t)(EAX));
  /* 127b3799 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b379b push 0 */
  push32((uint32_t)(0x0u));
  /* 127b379d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b379f mov cx, word ptr [0x127d085a] */
  CX = (r16((uint32_t)(0x127d085a)));
  /* 127b37a6 push ecx */
  push32((uint32_t)(ECX));
  /* 127b37a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b37aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127b37ad push eax */
  push32((uint32_t)(EAX));
  /* 127b37ae push 0 */
  push32((uint32_t)(0x0u));
  /* 127b37b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b37b2 call 0x127b39c0 */
  push32(0x127b37b7u); f_127b39c0();
  /* 127b37b7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b37ba:;
  /* 127b37ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b37bc mov cx, word ptr [0x127d0804] */
  CX = (r16((uint32_t)(0x127d0804)));
  /* 127b37c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b37c5 jne 0x127b3822 */
  if (!C.zf) goto L_127b3822;
  /* 127b37c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b37c9 mov dx, word ptr [0x127d0812] */
  DX = (r16((uint32_t)(0x127d0812)));
  /* 127b37d0 push edx */
  push32((uint32_t)(EDX));
  /* 127b37d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b37d3 mov ax, word ptr [0x127d0810] */
  AX = (r16((uint32_t)(0x127d0810)));
  /* 127b37d9 push eax */
  push32((uint32_t)(EAX));
  /* 127b37da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b37dc mov cx, word ptr [0x127d080e] */
  CX = (r16((uint32_t)(0x127d080e)));
  /* 127b37e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b37e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b37e6 mov dx, word ptr [0x127d080c] */
  DX = (r16((uint32_t)(0x127d080c)));
  /* 127b37ed push edx */
  push32((uint32_t)(EDX));
  /* 127b37ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127b37f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b37f2 mov ax, word ptr [0x127d0808] */
  AX = (r16((uint32_t)(0x127d0808)));
  /* 127b37f8 push eax */
  push32((uint32_t)(EAX));
  /* 127b37f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b37fb mov cx, word ptr [0x127d080a] */
  CX = (r16((uint32_t)(0x127d080a)));
  /* 127b3802 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3803 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3805 mov dx, word ptr [0x127d0806] */
  DX = (r16((uint32_t)(0x127d0806)));
  /* 127b380c push edx */
  push32((uint32_t)(EDX));
  /* 127b380d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3810 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127b3813 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3814 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3816 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3818 call 0x127b39c0 */
  push32(0x127b381du); f_127b39c0();
  /* 127b381d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3820 jmp 0x127b3873 */
  goto L_127b3873;
L_127b3822:;
  /* 127b3822 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3824 mov dx, word ptr [0x127d0812] */
  DX = (r16((uint32_t)(0x127d0812)));
  /* 127b382b push edx */
  push32((uint32_t)(EDX));
  /* 127b382c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b382e mov ax, word ptr [0x127d0810] */
  AX = (r16((uint32_t)(0x127d0810)));
  /* 127b3834 push eax */
  push32((uint32_t)(EAX));
  /* 127b3835 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3837 mov cx, word ptr [0x127d080e] */
  CX = (r16((uint32_t)(0x127d080e)));
  /* 127b383e push ecx */
  push32((uint32_t)(ECX));
  /* 127b383f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b3841 mov dx, word ptr [0x127d080c] */
  DX = (r16((uint32_t)(0x127d080c)));
  /* 127b3848 push edx */
  push32((uint32_t)(EDX));
  /* 127b3849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b384b mov ax, word ptr [0x127d080a] */
  AX = (r16((uint32_t)(0x127d080a)));
  /* 127b3851 push eax */
  push32((uint32_t)(EAX));
  /* 127b3852 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3854 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3856 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b3858 mov cx, word ptr [0x127d0806] */
  CX = (r16((uint32_t)(0x127d0806)));
  /* 127b385f push ecx */
  push32((uint32_t)(ECX));
  /* 127b3860 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3863 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127b3866 push eax */
  push32((uint32_t)(EAX));
  /* 127b3867 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3869 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b386b call 0x127b39c0 */
  push32(0x127b3870u); f_127b39c0();
  /* 127b3870 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b3873:;
  /* 127b3873 jmp 0x127b38bb */
  goto L_127b38bb;
L_127b3875:;
  /* 127b3875 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3877 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3879 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b387b push 2 */
  push32((uint32_t)(0x2u));
  /* 127b387d push 0 */
  push32((uint32_t)(0x0u));
  /* 127b387f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3881 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3883 push 4 */
  push32((uint32_t)(0x4u));
  /* 127b3885 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3888 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127b388b push edx */
  push32((uint32_t)(EDX));
  /* 127b388c push 1 */
  push32((uint32_t)(0x1u));
  /* 127b388e push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3890 call 0x127b39c0 */
  push32(0x127b3895u); f_127b39c0();
  /* 127b3895 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3898 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b389a push 0 */
  push32((uint32_t)(0x0u));
  /* 127b389c push 0 */
  push32((uint32_t)(0x0u));
  /* 127b389e push 2 */
  push32((uint32_t)(0x2u));
  /* 127b38a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b38a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b38a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 127b38a6 push 0xa */
  push32((uint32_t)(0xau));
  /* 127b38a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b38ab mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127b38ae push ecx */
  push32((uint32_t)(ECX));
  /* 127b38af push 1 */
  push32((uint32_t)(0x1u));
  /* 127b38b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b38b3 call 0x127b39c0 */
  push32(0x127b38b8u); f_127b39c0();
  /* 127b38b8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b38bb:;
  /* 127b38bb mov edx, dword ptr [0x127cfe2c] */
  EDX = (r32((uint32_t)(0x127cfe2c)));
  /* 127b38c1 cmp edx, dword ptr [0x127cfe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b38c7 jge 0x127b3914 */
  if ((C.sf==C.of)) goto L_127b3914;
  /* 127b38c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b38cc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127b38cf cmp ecx, dword ptr [0x127cfe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b38d5 jl 0x127b38e5 */
  if ((C.sf!=C.of)) goto L_127b38e5;
  /* 127b38d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b38da mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127b38dd cmp eax, dword ptr [0x127cfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b38e3 jle 0x127b38ec */
  if ((C.zf||C.sf!=C.of)) goto L_127b38ec;
L_127b38e5:;
  /* 127b38e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b38e7 jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b38ec:;
  /* 127b38ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b38ef mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127b38f2 cmp edx, dword ptr [0x127cfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b38f8 jle 0x127b3912 */
  if ((C.zf||C.sf!=C.of)) goto L_127b3912;
  /* 127b38fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b38fd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127b3900 cmp ecx, dword ptr [0x127cfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3906 jge 0x127b3912 */
  if ((C.sf==C.of)) goto L_127b3912;
  /* 127b3908 mov eax, 1 */
  EAX = (0x1u);
  /* 127b390d jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b3912:;
  /* 127b3912 jmp 0x127b3957 */
  goto L_127b3957;
L_127b3914:;
  /* 127b3914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3917 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127b391a cmp eax, dword ptr [0x127cfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3920 jl 0x127b3930 */
  if ((C.sf!=C.of)) goto L_127b3930;
  /* 127b3922 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3925 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127b3928 cmp edx, dword ptr [0x127cfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b392e jle 0x127b3937 */
  if ((C.zf||C.sf!=C.of)) goto L_127b3937;
L_127b3930:;
  /* 127b3930 mov eax, 1 */
  EAX = (0x1u);
  /* 127b3935 jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b3937:;
  /* 127b3937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b393a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127b393d cmp ecx, dword ptr [0x127cfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3943 jle 0x127b3957 */
  if ((C.zf||C.sf!=C.of)) goto L_127b3957;
  /* 127b3945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3948 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127b394b cmp eax, dword ptr [0x127cfe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3951 jge 0x127b3957 */
  if ((C.sf==C.of)) goto L_127b3957;
  /* 127b3953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3955 jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b3957:;
  /* 127b3957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b395a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127b395d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3963 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b3965 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b396a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127b396d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3973 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3975 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b397b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b397e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3981 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127b3984 cmp edx, dword ptr [0x127cfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127cfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b398a jne 0x127b39a2 */
  if (!C.zf) goto L_127b39a2;
  /* 127b398c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b398f cmp eax, dword ptr [0x127cfe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127cfe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3995 jl 0x127b399e */
  if ((C.sf!=C.of)) goto L_127b399e;
  /* 127b3997 mov eax, 1 */
  EAX = (0x1u);
  /* 127b399c jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b399e:;
  /* 127b399e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b39a0 jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b39a2:;
  /* 127b39a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b39a5 cmp ecx, dword ptr [0x127cfe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127cfe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b39ab jge 0x127b39b4 */
  if ((C.sf==C.of)) goto L_127b39b4;
  /* 127b39ad mov eax, 1 */
  EAX = (0x1u);
  /* 127b39b2 jmp 0x127b39b6 */
  goto L_127b39b6;
L_127b39b4:;
  /* 127b39b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b39b6:;
  /* 127b39b6 mov esp, ebp */
  ESP = (EBP);
  /* 127b39b8 pop ebp */
  EBP = (pop32());
  /* 127b39b9 ret  */
  ESPCHK(0x127b36c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139c0 @ 0x127b39c0 (504 bytes, 145 insns) */
void f_127b39c0(void) {
  FTRACE(0x127b39c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b39c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b39c1 mov ebp, esp */
  EBP = (ESP);
  /* 127b39c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b39c6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b39ca jne 0x127b3a9c */
  if (!C.zf) goto L_127b3a9c;
  /* 127b39d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b39d3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127b39d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b39d8 jne 0x127b39e9 */
  if (!C.zf) goto L_127b39e9;
  /* 127b39da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b39dd mov edx, dword ptr [ecx*4 + 0x127cfe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cfe4c)));
  /* 127b39e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127b39e7 jmp 0x127b39f6 */
  goto L_127b39f6;
L_127b39e9:;
  /* 127b39e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b39ec mov ecx, dword ptr [eax*4 + 0x127cfe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127cfe80)));
  /* 127b39f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127b39f6:;
  /* 127b39f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b39f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b39fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b39ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3a02 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3a05 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3a0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3a0e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3a10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3a13 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3a16 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 127b3a19 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 127b3a1d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b3a1e mov ecx, 7 */
  ECX = (0x7u);
  /* 127b3a23 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127b3a25 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b3a28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b3a2b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3a2e jge 0x127b3a49 */
  if ((C.sf==C.of)) goto L_127b3a49;
  /* 127b3a30 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b3a33 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3a36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b3a39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3a3c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3a3f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3a42 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3a44 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b3a47 jmp 0x127b3a5d */
  goto L_127b3a5d;
L_127b3a49:;
  /* 127b3a49 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b3a4c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3a4f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b3a52 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3a55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3a58 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3a5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127b3a5d:;
  /* 127b3a5d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3a61 jne 0x127b3a9a */
  if (!C.zf) goto L_127b3a9a;
  /* 127b3a63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3a66 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 127b3a69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b3a6b jne 0x127b3a7c */
  if (!C.zf) goto L_127b3a7c;
  /* 127b3a6d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3a70 mov eax, dword ptr [edx*4 + 0x127cfe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127cfe50)));
  /* 127b3a77 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127b3a7a jmp 0x127b3a89 */
  goto L_127b3a89;
L_127b3a7c:;
  /* 127b3a7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3a7f mov edx, dword ptr [ecx*4 + 0x127cfe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127cfe84)));
  /* 127b3a86 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127b3a89:;
  /* 127b3a89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3a8c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3a8f jle 0x127b3a9a */
  if ((C.zf||C.sf!=C.of)) goto L_127b3a9a;
  /* 127b3a91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3a94 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3a97 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127b3a9a:;
  /* 127b3a9a jmp 0x127b3ad1 */
  goto L_127b3ad1;
L_127b3a9c:;
  /* 127b3a9c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3a9f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127b3aa2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b3aa4 jne 0x127b3ab5 */
  if (!C.zf) goto L_127b3ab5;
  /* 127b3aa6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3aa9 mov ecx, dword ptr [eax*4 + 0x127cfe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x127cfe4c)));
  /* 127b3ab0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b3ab3 jmp 0x127b3ac2 */
  goto L_127b3ac2;
L_127b3ab5:;
  /* 127b3ab5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3ab8 mov eax, dword ptr [edx*4 + 0x127cfe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127cfe80)));
  /* 127b3abf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_127b3ac2:;
  /* 127b3ac2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b3ac5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b3ac8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3acb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3ace mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127b3ad1:;
  /* 127b3ad1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3ad5 jne 0x127b3b11 */
  if (!C.zf) goto L_127b3b11;
  /* 127b3ad7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3ada mov dword ptr [0x127cfe2c], eax */
  w32((uint32_t)(0x127cfe2c), (EAX));
  /* 127b3adf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 127b3ae2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3ae5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 127b3ae8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3aea imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3aed mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 127b3af0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3af2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3af8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 127b3afb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3afd mov dword ptr [0x127cfe30], ecx */
  w32((uint32_t)(0x127cfe30), (ECX));
  /* 127b3b03 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3b06 mov dword ptr [0x127cfe28], edx */
  w32((uint32_t)(0x127cfe28), (EDX));
  /* 127b3b0c jmp 0x127b3bb4 */
  goto L_127b3bb4;
L_127b3b11:;
  /* 127b3b11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b3b14 mov dword ptr [0x127cfe3c], eax */
  w32((uint32_t)(0x127cfe3c), (EAX));
  /* 127b3b19 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 127b3b1c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3b1f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 127b3b22 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3b24 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3b27 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 127b3b2a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3b2c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3b32 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 127b3b35 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3b37 mov dword ptr [0x127cfe40], ecx */
  w32((uint32_t)(0x127cfe40), (ECX));
  /* 127b3b3d mov edx, dword ptr [0x127cfd98] */
  EDX = (r32((uint32_t)(0x127cfd98)));
  /* 127b3b43 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b3b49 mov eax, dword ptr [0x127cfe40] */
  EAX = (r32((uint32_t)(0x127cfe40)));
  /* 127b3b4e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3b50 mov dword ptr [0x127cfe40], eax */
  w32((uint32_t)(0x127cfe40), (EAX));
  /* 127b3b55 cmp dword ptr [0x127cfe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127cfe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3b5c jge 0x127b3b81 */
  if ((C.sf==C.of)) goto L_127b3b81;
  /* 127b3b5e mov ecx, dword ptr [0x127cfe40] */
  ECX = (r32((uint32_t)(0x127cfe40)));
  /* 127b3b64 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3b6a mov dword ptr [0x127cfe40], ecx */
  w32((uint32_t)(0x127cfe40), (ECX));
  /* 127b3b70 mov edx, dword ptr [0x127cfe3c] */
  EDX = (r32((uint32_t)(0x127cfe3c)));
  /* 127b3b76 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3b79 mov dword ptr [0x127cfe3c], edx */
  w32((uint32_t)(0x127cfe3c), (EDX));
  /* 127b3b7f jmp 0x127b3bab */
  goto L_127b3bab;
L_127b3b81:;
  /* 127b3b81 cmp dword ptr [0x127cfe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x127cfe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3b8b jl 0x127b3bab */
  if ((C.sf!=C.of)) goto L_127b3bab;
  /* 127b3b8d mov eax, dword ptr [0x127cfe40] */
  EAX = (r32((uint32_t)(0x127cfe40)));
  /* 127b3b92 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3b97 mov dword ptr [0x127cfe40], eax */
  w32((uint32_t)(0x127cfe40), (EAX));
  /* 127b3b9c mov ecx, dword ptr [0x127cfe3c] */
  ECX = (r32((uint32_t)(0x127cfe3c)));
  /* 127b3ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3ba5 mov dword ptr [0x127cfe3c], ecx */
  w32((uint32_t)(0x127cfe3c), (ECX));
L_127b3bab:;
  /* 127b3bab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3bae mov dword ptr [0x127cfe38], edx */
  w32((uint32_t)(0x127cfe38), (EDX));
L_127b3bb4:;
  /* 127b3bb4 mov esp, ebp */
  ESP = (EBP);
  /* 127b3bb6 pop ebp */
  EBP = (pop32());
  /* 127b3bb7 ret  */
  ESPCHK(0x127b39c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bc0 @ 0x127b3bc0 (382 bytes, 135 insns) */
void f_127b3bc0(void) {
  FTRACE(0x127b3bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3bc1 mov ebp, esp */
  EBP = (ESP);
  /* 127b3bc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3bc5 push 0x127cc918 */
  push32((uint32_t)(0x127cc918u));
  /* 127b3bca push 0x127ad888 */
  push32((uint32_t)(0x127ad888u));
  /* 127b3bcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127b3bd5 push eax */
  push32((uint32_t)(EAX));
  /* 127b3bd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127b3bdd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3be0 push ebx */
  push32((uint32_t)(EBX));
  /* 127b3be1 push esi */
  push32((uint32_t)(ESI));
  /* 127b3be2 push edi */
  push32((uint32_t)(EDI));
  /* 127b3be3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b3be6 cmp dword ptr [0x127d0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3bed jne 0x127b3c32 */
  if (!C.zf) goto L_127b3c32;
  /* 127b3bef push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3bf7 call dword ptr [0x127d3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3250))), 0x127b3bfdu);
  /* 127b3bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3bff je 0x127b3c0d */
  if (C.zf) goto L_127b3c0d;
  /* 127b3c01 mov dword ptr [0x127d0874], 1 */
  w32((uint32_t)(0x127d0874), (0x1u));
  /* 127b3c0b jmp 0x127b3c32 */
  goto L_127b3c32;
L_127b3c0d:;
  /* 127b3c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3c15 call dword ptr [0x127d3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3268))), 0x127b3c1bu);
  /* 127b3c1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3c1d je 0x127b3c2b */
  if (C.zf) goto L_127b3c2b;
  /* 127b3c1f mov dword ptr [0x127d0874], 2 */
  w32((uint32_t)(0x127d0874), (0x2u));
  /* 127b3c29 jmp 0x127b3c32 */
  goto L_127b3c32;
L_127b3c2b:;
  /* 127b3c2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3c2d jmp 0x127b3d41 */
  goto L_127b3d41;
L_127b3c32:;
  /* 127b3c32 cmp dword ptr [0x127d0874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3c39 jne 0x127b3c56 */
  if (!C.zf) goto L_127b3c56;
  /* 127b3c3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3c3e push eax */
  push32((uint32_t)(EAX));
  /* 127b3c3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3c42 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3c43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b3c46 push edx */
  push32((uint32_t)(EDX));
  /* 127b3c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3c4a push eax */
  push32((uint32_t)(EAX));
  /* 127b3c4b call dword ptr [0x127d3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3250))), 0x127b3c51u);
  /* 127b3c51 jmp 0x127b3d41 */
  goto L_127b3d41;
L_127b3c56:;
  /* 127b3c56 cmp dword ptr [0x127d0874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d0874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3c5d jne 0x127b3d3f */
  if (!C.zf) goto L_127b3d3f;
  /* 127b3c63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3c67 jne 0x127b3c72 */
  if (!C.zf) goto L_127b3c72;
  /* 127b3c69 mov ecx, dword ptr [0x127d0728] */
  ECX = (r32((uint32_t)(0x127d0728)));
  /* 127b3c6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_127b3c72:;
  /* 127b3c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3c76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b3c79 push edx */
  push32((uint32_t)(EDX));
  /* 127b3c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3c7d push eax */
  push32((uint32_t)(EAX));
  /* 127b3c7e call dword ptr [0x127d3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3268))), 0x127b3c84u);
  /* 127b3c84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127b3c87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3c8b jne 0x127b3c94 */
  if (!C.zf) goto L_127b3c94;
  /* 127b3c8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3c8f jmp 0x127b3d41 */
  goto L_127b3d41;
L_127b3c94:;
  /* 127b3c94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b3c9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b3c9e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3ca1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127b3ca3 call 0x127a7920 */
  push32(0x127b3ca8u); f_127a7920();
  /* 127b3ca8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 127b3cab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b3cae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b3cb1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127b3cb4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127b3cbb jmp 0x127b3cd4 */
  goto L_127b3cd4;
  /* 127b3cbd mov eax, 1 */
  EAX = (0x1u);
  /* 127b3cc2 ret  */
  ESPCHK(0x127b3bc0u, _esp0);
  ESP += 4; return;
  /* 127b3cc3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127b3cc6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127b3ccd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127b3cd4:;
  /* 127b3cd4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3cd8 jne 0x127b3cde */
  if (!C.zf) goto L_127b3cde;
  /* 127b3cda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3cdc jmp 0x127b3d41 */
  goto L_127b3d41;
L_127b3cde:;
  /* 127b3cde mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b3ce1 push edx */
  push32((uint32_t)(EDX));
  /* 127b3ce2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b3ce5 push eax */
  push32((uint32_t)(EAX));
  /* 127b3ce6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b3ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3cea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3ced push edx */
  push32((uint32_t)(EDX));
  /* 127b3cee call dword ptr [0x127d3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3268))), 0x127b3cf4u);
  /* 127b3cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3cf6 jne 0x127b3cfc */
  if (!C.zf) goto L_127b3cfc;
  /* 127b3cf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3cfa jmp 0x127b3d41 */
  goto L_127b3d41;
L_127b3cfc:;
  /* 127b3cfc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3d00 jne 0x127b3d1d */
  if (!C.zf) goto L_127b3d1d;
  /* 127b3d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3d06 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3d08 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b3d0b push eax */
  push32((uint32_t)(EAX));
  /* 127b3d0c push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3d0e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b3d11 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3d12 call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127b3d18u);
  /* 127b3d18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127b3d1b jmp 0x127b3d3a */
  goto L_127b3d3a;
L_127b3d1d:;
  /* 127b3d1d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3d20 push edx */
  push32((uint32_t)(EDX));
  /* 127b3d21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3d24 push eax */
  push32((uint32_t)(EAX));
  /* 127b3d25 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3d27 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b3d2a push ecx */
  push32((uint32_t)(ECX));
  /* 127b3d2b push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3d2d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b3d30 push edx */
  push32((uint32_t)(EDX));
  /* 127b3d31 call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127b3d37u);
  /* 127b3d37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127b3d3a:;
  /* 127b3d3a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b3d3d jmp 0x127b3d41 */
  goto L_127b3d41;
L_127b3d3f:;
  /* 127b3d3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b3d41:;
  /* 127b3d41 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 127b3d44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b3d47 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127b3d4e pop edi */
  EDI = (pop32());
  /* 127b3d4f pop esi */
  ESI = (pop32());
  /* 127b3d50 pop ebx */
  EBX = (pop32());
  /* 127b3d51 mov esp, ebp */
  ESP = (EBP);
  /* 127b3d53 pop ebp */
  EBP = (pop32());
  /* 127b3d54 ret  */
  ESPCHK(0x127b3bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x127b3d60 (398 bytes, 140 insns) */
void f_127b3d60(void) {
  FTRACE(0x127b3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3d61 mov ebp, esp */
  EBP = (ESP);
  /* 127b3d63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3d65 push 0x127cc928 */
  push32((uint32_t)(0x127cc928u));
  /* 127b3d6a push 0x127ad888 */
  push32((uint32_t)(0x127ad888u));
  /* 127b3d6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127b3d75 push eax */
  push32((uint32_t)(EAX));
  /* 127b3d76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127b3d7d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3d80 push ebx */
  push32((uint32_t)(EBX));
  /* 127b3d81 push esi */
  push32((uint32_t)(ESI));
  /* 127b3d82 push edi */
  push32((uint32_t)(EDI));
  /* 127b3d83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b3d86 cmp dword ptr [0x127d0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3d8d jne 0x127b3dd2 */
  if (!C.zf) goto L_127b3dd2;
  /* 127b3d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3d97 call dword ptr [0x127d3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3250))), 0x127b3d9du);
  /* 127b3d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3d9f je 0x127b3dad */
  if (C.zf) goto L_127b3dad;
  /* 127b3da1 mov dword ptr [0x127d0878], 1 */
  w32((uint32_t)(0x127d0878), (0x1u));
  /* 127b3dab jmp 0x127b3dd2 */
  goto L_127b3dd2;
L_127b3dad:;
  /* 127b3dad push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3daf push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3db1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b3db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3db5 call dword ptr [0x127d3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3268))), 0x127b3dbbu);
  /* 127b3dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3dbd je 0x127b3dcb */
  if (C.zf) goto L_127b3dcb;
  /* 127b3dbf mov dword ptr [0x127d0878], 2 */
  w32((uint32_t)(0x127d0878), (0x2u));
  /* 127b3dc9 jmp 0x127b3dd2 */
  goto L_127b3dd2;
L_127b3dcb:;
  /* 127b3dcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3dcd jmp 0x127b3ef1 */
  goto L_127b3ef1;
L_127b3dd2:;
  /* 127b3dd2 cmp dword ptr [0x127d0878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d0878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3dd9 jne 0x127b3df6 */
  if (!C.zf) goto L_127b3df6;
  /* 127b3ddb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3dde push eax */
  push32((uint32_t)(EAX));
  /* 127b3ddf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3de2 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3de3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b3de6 push edx */
  push32((uint32_t)(EDX));
  /* 127b3de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3dea push eax */
  push32((uint32_t)(EAX));
  /* 127b3deb call dword ptr [0x127d3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3268))), 0x127b3df1u);
  /* 127b3df1 jmp 0x127b3ef1 */
  goto L_127b3ef1;
L_127b3df6:;
  /* 127b3df6 cmp dword ptr [0x127d0878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3dfd jne 0x127b3eef */
  if (!C.zf) goto L_127b3eef;
  /* 127b3e03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3e07 jne 0x127b3e12 */
  if (!C.zf) goto L_127b3e12;
  /* 127b3e09 mov ecx, dword ptr [0x127d0728] */
  ECX = (r32((uint32_t)(0x127d0728)));
  /* 127b3e0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_127b3e12:;
  /* 127b3e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3e16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b3e19 push edx */
  push32((uint32_t)(EDX));
  /* 127b3e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3e1d push eax */
  push32((uint32_t)(EAX));
  /* 127b3e1e call dword ptr [0x127d3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3250))), 0x127b3e24u);
  /* 127b3e24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127b3e27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3e2b jne 0x127b3e34 */
  if (!C.zf) goto L_127b3e34;
  /* 127b3e2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3e2f jmp 0x127b3ef1 */
  goto L_127b3ef1;
L_127b3e34:;
  /* 127b3e34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b3e3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b3e3e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b3e40 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3e43 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127b3e45 call 0x127a7920 */
  push32(0x127b3e4au); f_127a7920();
  /* 127b3e4a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 127b3e4d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b3e50 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b3e53 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127b3e56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127b3e5d jmp 0x127b3e76 */
  goto L_127b3e76;
  /* 127b3e5f mov eax, 1 */
  EAX = (0x1u);
  /* 127b3e64 ret  */
  ESPCHK(0x127b3d60u, _esp0);
  ESP += 4; return;
  /* 127b3e65 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127b3e68 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127b3e6f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127b3e76:;
  /* 127b3e76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3e7a jne 0x127b3e80 */
  if (!C.zf) goto L_127b3e80;
  /* 127b3e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3e7e jmp 0x127b3ef1 */
  goto L_127b3ef1;
L_127b3e80:;
  /* 127b3e80 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b3e83 push edx */
  push32((uint32_t)(EDX));
  /* 127b3e84 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b3e87 push eax */
  push32((uint32_t)(EAX));
  /* 127b3e88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b3e8b push ecx */
  push32((uint32_t)(ECX));
  /* 127b3e8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3e8f push edx */
  push32((uint32_t)(EDX));
  /* 127b3e90 call dword ptr [0x127d3250] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3250))), 0x127b3e96u);
  /* 127b3e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b3e98 jne 0x127b3e9e */
  if (!C.zf) goto L_127b3e9e;
  /* 127b3e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b3e9c jmp 0x127b3ef1 */
  goto L_127b3ef1;
L_127b3e9e:;
  /* 127b3e9e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3ea2 jne 0x127b3ec6 */
  if (!C.zf) goto L_127b3ec6;
  /* 127b3ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3eac push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3eae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b3eb1 push eax */
  push32((uint32_t)(EAX));
  /* 127b3eb2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127b3eb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b3eba push ecx */
  push32((uint32_t)(ECX));
  /* 127b3ebb call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b3ec1u);
  /* 127b3ec1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127b3ec4 jmp 0x127b3eea */
  goto L_127b3eea;
L_127b3ec6:;
  /* 127b3ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b3eca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b3ecd push edx */
  push32((uint32_t)(EDX));
  /* 127b3ece mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b3ed1 push eax */
  push32((uint32_t)(EAX));
  /* 127b3ed2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b3ed4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b3ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3ed8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127b3edd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b3ee0 push edx */
  push32((uint32_t)(EDX));
  /* 127b3ee1 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b3ee7u);
  /* 127b3ee7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127b3eea:;
  /* 127b3eea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b3eed jmp 0x127b3ef1 */
  goto L_127b3ef1;
L_127b3eef:;
  /* 127b3eef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b3ef1:;
  /* 127b3ef1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 127b3ef4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b3ef7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127b3efe pop edi */
  EDI = (pop32());
  /* 127b3eff pop esi */
  ESI = (pop32());
  /* 127b3f00 pop ebx */
  EBX = (pop32());
  /* 127b3f01 mov esp, ebp */
  ESP = (EBP);
  /* 127b3f03 pop ebp */
  EBP = (pop32());
  /* 127b3f04 ret  */
  ESPCHK(0x127b3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f10 @ 0x127b3f10 (11 bytes, 6 insns) */
void f_127b3f10(void) {
  FTRACE(0x127b3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3f11 mov ebp, esp */
  EBP = (ESP);
  /* 127b3f13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3f16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3f19 pop ebp */
  EBP = (pop32());
  /* 127b3f1a ret  */
  ESPCHK(0x127b3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f20 @ 0x127b3f20 (147 bytes, 43 insns) */
void f_127b3f20(void) {
  FTRACE(0x127b3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3f21 mov ebp, esp */
  EBP = (ESP);
  /* 127b3f23 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3f24 cmp dword ptr [0x127d0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3f2b jne 0x127b3f47 */
  if (!C.zf) goto L_127b3f47;
  /* 127b3f2d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3f31 jl 0x127b3f42 */
  if ((C.sf!=C.of)) goto L_127b3f42;
  /* 127b3f33 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3f37 jg 0x127b3f42 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b3f42;
  /* 127b3f39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3f3c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3f3f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127b3f42:;
  /* 127b3f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3f45 jmp 0x127b3faf */
  goto L_127b3faf;
L_127b3f47:;
  /* 127b3f47 push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127b3f4c call dword ptr [0x127d32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b0))), 0x127b3f52u);
  /* 127b3f52 cmp dword ptr [0x127d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3f59 je 0x127b3f79 */
  if (C.zf) goto L_127b3f79;
  /* 127b3f5b push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127b3f60 call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127b3f66u);
  /* 127b3f66 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b3f68 call 0x127a8180 */
  push32(0x127b3f6du); f_127a8180();
  /* 127b3f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3f70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127b3f77 jmp 0x127b3f80 */
  goto L_127b3f80;
L_127b3f79:;
  /* 127b3f79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127b3f80:;
  /* 127b3f80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3f83 push ecx */
  push32((uint32_t)(ECX));
  /* 127b3f84 call 0x127b3fc0 */
  push32(0x127b3f89u); f_127b3fc0();
  /* 127b3f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3f8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b3f8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3f93 je 0x127b3fa1 */
  if (C.zf) goto L_127b3fa1;
  /* 127b3f95 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127b3f97 call 0x127a8220 */
  push32(0x127b3f9cu); f_127a8220();
  /* 127b3f9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3f9f jmp 0x127b3fac */
  goto L_127b3fac;
L_127b3fa1:;
  /* 127b3fa1 push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127b3fa6 call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127b3facu);
L_127b3fac:;
  /* 127b3fac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_127b3faf:;
  /* 127b3faf mov esp, ebp */
  ESP = (EBP);
  /* 127b3fb1 pop ebp */
  EBP = (pop32());
  /* 127b3fb2 ret  */
  ESPCHK(0x127b3f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fc0 @ 0x127b3fc0 (299 bytes, 91 insns) */
void f_127b3fc0(void) {
  FTRACE(0x127b3fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b3fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b3fc1 mov ebp, esp */
  EBP = (ESP);
  /* 127b3fc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b3fc6 cmp dword ptr [0x127d0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3fcd jne 0x127b3fec */
  if (!C.zf) goto L_127b3fec;
  /* 127b3fcf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3fd3 jl 0x127b3fe4 */
  if ((C.sf!=C.of)) goto L_127b3fe4;
  /* 127b3fd5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3fd9 jg 0x127b3fe4 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b3fe4;
  /* 127b3fdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3fde add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b3fe1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127b3fe4:;
  /* 127b3fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b3fe7 jmp 0x127b40e7 */
  goto L_127b40e7;
L_127b3fec:;
  /* 127b3fec cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3ff3 jge 0x127b4033 */
  if ((C.sf==C.of)) goto L_127b4033;
  /* 127b3ff5 cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b3ffc jle 0x127b4011 */
  if ((C.zf||C.sf!=C.of)) goto L_127b4011;
  /* 127b3ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4003 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4004 call 0x127aa790 */
  push32(0x127b4009u); f_127aa790();
  /* 127b4009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b400c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127b400f jmp 0x127b4025 */
  goto L_127b4025;
L_127b4011:;
  /* 127b4011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4014 mov eax, dword ptr [0x127cec98] */
  EAX = (r32((uint32_t)(0x127cec98)));
  /* 127b4019 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b401b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127b401f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127b4022 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127b4025:;
  /* 127b4025 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4029 jne 0x127b4033 */
  if (!C.zf) goto L_127b4033;
  /* 127b402b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b402e jmp 0x127b40e7 */
  goto L_127b40e7;
L_127b4033:;
  /* 127b4033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4036 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127b4039 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b403f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b4045 mov eax, dword ptr [0x127cec98] */
  EAX = (r32((uint32_t)(0x127cec98)));
  /* 127b404a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b404c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127b4050 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 127b4056 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b4058 je 0x127b407c */
  if (C.zf) goto L_127b407c;
  /* 127b405a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b405d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127b4060 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b4066 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 127b4069 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127b406c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 127b406f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 127b4073 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127b407a jmp 0x127b408d */
  goto L_127b408d;
L_127b407c:;
  /* 127b407c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 127b407f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 127b4082 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 127b4086 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_127b408d:;
  /* 127b408d push 1 */
  push32((uint32_t)(0x1u));
  /* 127b408f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b4091 push 3 */
  push32((uint32_t)(0x3u));
  /* 127b4093 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 127b4096 push edx */
  push32((uint32_t)(EDX));
  /* 127b4097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b409a push eax */
  push32((uint32_t)(EAX));
  /* 127b409b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 127b409e push ecx */
  push32((uint32_t)(ECX));
  /* 127b409f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127b40a4 mov edx, dword ptr [0x127d0718] */
  EDX = (r32((uint32_t)(0x127d0718)));
  /* 127b40aa push edx */
  push32((uint32_t)(EDX));
  /* 127b40ab call 0x127acb70 */
  push32(0x127b40b0u); f_127acb70();
  /* 127b40b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b40b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b40b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b40ba jne 0x127b40c1 */
  if (!C.zf) goto L_127b40c1;
  /* 127b40bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b40bf jmp 0x127b40e7 */
  goto L_127b40e7;
L_127b40c1:;
  /* 127b40c1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b40c5 jne 0x127b40d1 */
  if (!C.zf) goto L_127b40d1;
  /* 127b40c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b40ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b40cf jmp 0x127b40e7 */
  goto L_127b40e7;
L_127b40d1:;
  /* 127b40d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b40d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b40d9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 127b40dc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127b40e2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 127b40e5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_127b40e7:;
  /* 127b40e7 mov esp, ebp */
  ESP = (EBP);
  /* 127b40e9 pop ebp */
  EBP = (pop32());
  /* 127b40ea ret  */
  ESPCHK(0x127b3fc0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x127b40f0 (52 bytes, 19 insns) */
void f_127b40f0(void) {
  FTRACE(0x127b40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b40f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127b40f4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 127b40f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127b40fa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 127b40fe jne 0x127b4109 */
  if (!C.zf) goto L_127b4109;
  /* 127b4100 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 127b4104 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127b4106 ret 0x10 */
  ESPCHK(0x127b40f0u, _esp0);
  ESP += 20; return;
L_127b4109:;
  /* 127b4109 push ebx */
  push32((uint32_t)(EBX));
  /* 127b410a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127b410c mov ebx, eax */
  EBX = (EAX);
  /* 127b410e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127b4112 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127b4116 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4118 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127b411c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127b411e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4120 pop ebx */
  EBX = (pop32());
  /* 127b4121 ret 0x10 */
  ESPCHK(0x127b40f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014130 @ 0x127b4130 (46 bytes, 18 insns) */
void f_127b4130(void) {
  FTRACE(0x127b4130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4130 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4131 mov ebp, esp */
  EBP = (ESP);
  /* 127b4133 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4134 push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b4136 call 0x127a8180 */
  push32(0x127b413bu); f_127a8180();
  /* 127b413b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b413e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4141 push eax */
  push32((uint32_t)(EAX));
  /* 127b4142 call 0x127b4160 */
  push32(0x127b4147u); f_127b4160();
  /* 127b4147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b414a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b414d push 0xc */
  push32((uint32_t)(0xcu));
  /* 127b414f call 0x127a8220 */
  push32(0x127b4154u); f_127a8220();
  /* 127b4154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b415a mov esp, ebp */
  ESP = (EBP);
  /* 127b415c pop ebp */
  EBP = (pop32());
  /* 127b415d ret  */
  ESPCHK(0x127b4130u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x127b4160 (198 bytes, 69 insns) */
void f_127b4160(void) {
  FTRACE(0x127b4160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4160 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4161 mov ebp, esp */
  EBP = (ESP);
  /* 127b4163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4166 mov eax, dword ptr [0x127d0534] */
  EAX = (r32((uint32_t)(0x127d0534)));
  /* 127b416b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b416e cmp dword ptr [0x127d2040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d2040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4175 jne 0x127b417e */
  if (!C.zf) goto L_127b417e;
  /* 127b4177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4179 jmp 0x127b4222 */
  goto L_127b4222;
L_127b417e:;
  /* 127b417e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4182 jne 0x127b41a6 */
  if (!C.zf) goto L_127b41a6;
  /* 127b4184 cmp dword ptr [0x127d053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b418b je 0x127b41a6 */
  if (C.zf) goto L_127b41a6;
  /* 127b418d call 0x127b4280 */
  push32(0x127b4192u); f_127b4280();
  /* 127b4192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4194 je 0x127b419d */
  if (C.zf) goto L_127b419d;
  /* 127b4196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4198 jmp 0x127b4222 */
  goto L_127b4222;
L_127b419d:;
  /* 127b419d mov ecx, dword ptr [0x127d0534] */
  ECX = (r32((uint32_t)(0x127d0534)));
  /* 127b41a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127b41a6:;
  /* 127b41a6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b41aa je 0x127b4220 */
  if (C.zf) goto L_127b4220;
  /* 127b41ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b41b0 je 0x127b4220 */
  if (C.zf) goto L_127b4220;
  /* 127b41b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b41b5 push edx */
  push32((uint32_t)(EDX));
  /* 127b41b6 call 0x127a75b0 */
  push32(0x127b41bbu); f_127a75b0();
  /* 127b41bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b41be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127b41c1:;
  /* 127b41c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b41c4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b41c7 je 0x127b4220 */
  if (C.zf) goto L_127b4220;
  /* 127b41c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b41cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b41ce push edx */
  push32((uint32_t)(EDX));
  /* 127b41cf call 0x127a75b0 */
  push32(0x127b41d4u); f_127a75b0();
  /* 127b41d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b41d7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b41da jbe 0x127b4215 */
  if ((C.cf||C.zf)) goto L_127b4215;
  /* 127b41dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b41df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b41e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b41e4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 127b41e8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b41eb jne 0x127b4215 */
  if (!C.zf) goto L_127b4215;
  /* 127b41ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b41f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127b41f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b41f4 push edx */
  push32((uint32_t)(EDX));
  /* 127b41f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b41f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b41fa push ecx */
  push32((uint32_t)(ECX));
  /* 127b41fb call 0x127b4230 */
  push32(0x127b4200u); f_127b4230();
  /* 127b4200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4205 jne 0x127b4215 */
  if (!C.zf) goto L_127b4215;
  /* 127b4207 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b420a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b420c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b420f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 127b4213 jmp 0x127b4222 */
  goto L_127b4222;
L_127b4215:;
  /* 127b4215 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4218 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b421b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b421e jmp 0x127b41c1 */
  goto L_127b41c1;
L_127b4220:;
  /* 127b4220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b4222:;
  /* 127b4222 mov esp, ebp */
  ESP = (EBP);
  /* 127b4224 pop ebp */
  EBP = (pop32());
  /* 127b4225 ret  */
  ESPCHK(0x127b4160u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x127b4230 (79 bytes, 32 insns) */
void f_127b4230(void) {
  FTRACE(0x127b4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4230 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4231 mov ebp, esp */
  EBP = (ESP);
  /* 127b4233 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4234 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4238 jne 0x127b423e */
  if (!C.zf) goto L_127b423e;
  /* 127b423a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b423c jmp 0x127b427b */
  goto L_127b427b;
L_127b423e:;
  /* 127b423e mov eax, dword ptr [0x127d1c04] */
  EAX = (r32((uint32_t)(0x127d1c04)));
  /* 127b4243 push eax */
  push32((uint32_t)(EAX));
  /* 127b4244 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b4247 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4248 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b424b push edx */
  push32((uint32_t)(EDX));
  /* 127b424c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b424f push eax */
  push32((uint32_t)(EAX));
  /* 127b4250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4253 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4254 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4256 mov edx, dword ptr [0x127d1ea4] */
  EDX = (r32((uint32_t)(0x127d1ea4)));
  /* 127b425c push edx */
  push32((uint32_t)(EDX));
  /* 127b425d call 0x127b4330 */
  push32(0x127b4262u); f_127b4330();
  /* 127b4262 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4265 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b4268 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b426c jne 0x127b4275 */
  if (!C.zf) goto L_127b4275;
  /* 127b426e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 127b4273 jmp 0x127b427b */
  goto L_127b427b;
L_127b4275:;
  /* 127b4275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4278 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127b427b:;
  /* 127b427b mov esp, ebp */
  ESP = (EBP);
  /* 127b427d pop ebp */
  EBP = (pop32());
  /* 127b427e ret  */
  ESPCHK(0x127b4230u, _esp0);
  ESP += 4; return;
}

/* FUN_10014280 @ 0x127b4280 (174 bytes, 66 insns) */
void f_127b4280(void) {
  FTRACE(0x127b4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4280 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4281 mov ebp, esp */
  EBP = (ESP);
  /* 127b4283 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4286 mov eax, dword ptr [0x127d053c] */
  EAX = (r32((uint32_t)(0x127d053c)));
  /* 127b428b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127b428e:;
  /* 127b428e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4291 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4294 je 0x127b4328 */
  if (C.zf) goto L_127b4328;
  /* 127b429a push 0 */
  push32((uint32_t)(0x0u));
  /* 127b429c push 0 */
  push32((uint32_t)(0x0u));
  /* 127b429e push 0 */
  push32((uint32_t)(0x0u));
  /* 127b42a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b42a2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b42a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b42a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b42a9 push eax */
  push32((uint32_t)(EAX));
  /* 127b42aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127b42ac push 1 */
  push32((uint32_t)(0x1u));
  /* 127b42ae call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b42b4u);
  /* 127b42b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b42b7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b42bb jne 0x127b42c2 */
  if (!C.zf) goto L_127b42c2;
  /* 127b42bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b42c0 jmp 0x127b432a */
  goto L_127b432a;
L_127b42c2:;
  /* 127b42c2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127b42c4 push 0x127cc934 */
  push32((uint32_t)(0x127cc934u));
  /* 127b42c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b42cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b42ce push ecx */
  push32((uint32_t)(ECX));
  /* 127b42cf call 0x127a4780 */
  push32(0x127b42d4u); f_127a4780();
  /* 127b42d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b42d7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b42da cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b42de jne 0x127b42e5 */
  if (!C.zf) goto L_127b42e5;
  /* 127b42e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b42e3 jmp 0x127b432a */
  goto L_127b432a;
L_127b42e5:;
  /* 127b42e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b42e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b42e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b42ec push edx */
  push32((uint32_t)(EDX));
  /* 127b42ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b42f0 push eax */
  push32((uint32_t)(EAX));
  /* 127b42f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b42f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b42f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b42f8 push edx */
  push32((uint32_t)(EDX));
  /* 127b42f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b42fb push 1 */
  push32((uint32_t)(0x1u));
  /* 127b42fd call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127b4303u);
  /* 127b4303 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4305 jne 0x127b430c */
  if (!C.zf) goto L_127b430c;
  /* 127b4307 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b430a jmp 0x127b432a */
  goto L_127b432a;
L_127b430c:;
  /* 127b430c push 0 */
  push32((uint32_t)(0x0u));
  /* 127b430e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4311 push eax */
  push32((uint32_t)(EAX));
  /* 127b4312 call 0x127b4780 */
  push32(0x127b4317u); f_127b4780();
  /* 127b4317 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b431a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b431d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4320 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b4323 jmp 0x127b428e */
  goto L_127b428e;
L_127b4328:;
  /* 127b4328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b432a:;
  /* 127b432a mov esp, ebp */
  ESP = (EBP);
  /* 127b432c pop ebp */
  EBP = (pop32());
  /* 127b432d ret  */
  ESPCHK(0x127b4280u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x127b4330 (970 bytes, 340 insns) */
void f_127b4330(void) {
  FTRACE(0x127b4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4330 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4331 mov ebp, esp */
  EBP = (ESP);
  /* 127b4333 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127b4335 push 0x127cc988 */
  push32((uint32_t)(0x127cc988u));
  /* 127b433a push 0x127ad888 */
  push32((uint32_t)(0x127ad888u));
  /* 127b433f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127b4345 push eax */
  push32((uint32_t)(EAX));
  /* 127b4346 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127b434d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4350 push ebx */
  push32((uint32_t)(EBX));
  /* 127b4351 push esi */
  push32((uint32_t)(ESI));
  /* 127b4352 push edi */
  push32((uint32_t)(EDI));
  /* 127b4353 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b4356 cmp dword ptr [0x127d087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b435d jne 0x127b43b6 */
  if (!C.zf) goto L_127b43b6;
  /* 127b435f push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4361 push 0x127cbfe0 */
  push32((uint32_t)(0x127cbfe0u));
  /* 127b4366 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4368 push 0x127cbfe0 */
  push32((uint32_t)(0x127cbfe0u));
  /* 127b436d push 0 */
  push32((uint32_t)(0x0u));
  /* 127b436f push 0 */
  push32((uint32_t)(0x0u));
  /* 127b4371 call dword ptr [0x127d3248] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3248))), 0x127b4377u);
  /* 127b4377 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4379 je 0x127b4387 */
  if (C.zf) goto L_127b4387;
  /* 127b437b mov dword ptr [0x127d087c], 1 */
  w32((uint32_t)(0x127d087c), (0x1u));
  /* 127b4385 jmp 0x127b43b6 */
  goto L_127b43b6;
L_127b4387:;
  /* 127b4387 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4389 push 0x127cbfdc */
  push32((uint32_t)(0x127cbfdcu));
  /* 127b438e push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4390 push 0x127cbfdc */
  push32((uint32_t)(0x127cbfdcu));
  /* 127b4395 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b4397 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b4399 call dword ptr [0x127d324c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d324c))), 0x127b439fu);
  /* 127b439f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b43a1 je 0x127b43af */
  if (C.zf) goto L_127b43af;
  /* 127b43a3 mov dword ptr [0x127d087c], 2 */
  w32((uint32_t)(0x127d087c), (0x2u));
  /* 127b43ad jmp 0x127b43b6 */
  goto L_127b43b6;
L_127b43af:;
  /* 127b43af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b43b1 jmp 0x127b4714 */
  goto L_127b4714;
L_127b43b6:;
  /* 127b43b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b43ba jle 0x127b43cf */
  if ((C.zf||C.sf!=C.of)) goto L_127b43cf;
  /* 127b43bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b43bf push eax */
  push32((uint32_t)(EAX));
  /* 127b43c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b43c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b43c4 call 0x127b4730 */
  push32(0x127b43c9u); f_127b4730();
  /* 127b43c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b43cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_127b43cf:;
  /* 127b43cf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b43d3 jle 0x127b43e8 */
  if ((C.zf||C.sf!=C.of)) goto L_127b43e8;
  /* 127b43d5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b43d8 push edx */
  push32((uint32_t)(EDX));
  /* 127b43d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b43dc push eax */
  push32((uint32_t)(EAX));
  /* 127b43dd call 0x127b4730 */
  push32(0x127b43e2u); f_127b4730();
  /* 127b43e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b43e5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_127b43e8:;
  /* 127b43e8 cmp dword ptr [0x127d087c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d087c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b43ef jne 0x127b4414 */
  if (!C.zf) goto L_127b4414;
  /* 127b43f1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b43f4 push ecx */
  push32((uint32_t)(ECX));
  /* 127b43f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b43f8 push edx */
  push32((uint32_t)(EDX));
  /* 127b43f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b43fc push eax */
  push32((uint32_t)(EAX));
  /* 127b43fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b4400 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4401 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4404 push edx */
  push32((uint32_t)(EDX));
  /* 127b4405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4408 push eax */
  push32((uint32_t)(EAX));
  /* 127b4409 call dword ptr [0x127d324c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d324c))), 0x127b440fu);
  /* 127b440f jmp 0x127b4714 */
  goto L_127b4714;
L_127b4414:;
  /* 127b4414 cmp dword ptr [0x127d087c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d087c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b441b jne 0x127b4712 */
  if (!C.zf) goto L_127b4712;
  /* 127b4421 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4425 jne 0x127b4430 */
  if (!C.zf) goto L_127b4430;
  /* 127b4427 mov ecx, dword ptr [0x127d0728] */
  ECX = (r32((uint32_t)(0x127d0728)));
  /* 127b442d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_127b4430:;
  /* 127b4430 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4434 je 0x127b4440 */
  if (C.zf) goto L_127b4440;
  /* 127b4436 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b443a jne 0x127b45bc */
  if (!C.zf) goto L_127b45bc;
L_127b4440:;
  /* 127b4440 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b4443 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4446 jne 0x127b4452 */
  if (!C.zf) goto L_127b4452;
  /* 127b4448 mov eax, 2 */
  EAX = (0x2u);
  /* 127b444d jmp 0x127b4714 */
  goto L_127b4714;
L_127b4452:;
  /* 127b4452 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4456 jle 0x127b4462 */
  if ((C.zf||C.sf!=C.of)) goto L_127b4462;
  /* 127b4458 mov eax, 1 */
  EAX = (0x1u);
  /* 127b445d jmp 0x127b4714 */
  goto L_127b4714;
L_127b4462:;
  /* 127b4462 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4466 jle 0x127b4472 */
  if ((C.zf||C.sf!=C.of)) goto L_127b4472;
  /* 127b4468 mov eax, 3 */
  EAX = (0x3u);
  /* 127b446d jmp 0x127b4714 */
  goto L_127b4714;
L_127b4472:;
  /* 127b4472 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 127b4475 push eax */
  push32((uint32_t)(EAX));
  /* 127b4476 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 127b4479 push ecx */
  push32((uint32_t)(ECX));
  /* 127b447a call dword ptr [0x127d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3344))), 0x127b4480u);
  /* 127b4480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4482 jne 0x127b448b */
  if (!C.zf) goto L_127b448b;
  /* 127b4484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4486 jmp 0x127b4714 */
  goto L_127b4714;
L_127b448b:;
  /* 127b448b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b448f jne 0x127b4497 */
  if (!C.zf) goto L_127b4497;
  /* 127b4491 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4495 je 0x127b44c4 */
  if (C.zf) goto L_127b44c4;
L_127b4497:;
  /* 127b4497 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b449b jne 0x127b44a3 */
  if (!C.zf) goto L_127b44a3;
  /* 127b449d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b44a1 je 0x127b44c4 */
  if (C.zf) goto L_127b44c4;
L_127b44a3:;
  /* 127b44a3 push 0x127cc948 */
  push32((uint32_t)(0x127cc948u));
  /* 127b44a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b44aa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 127b44af push 0x127cc940 */
  push32((uint32_t)(0x127cc940u));
  /* 127b44b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b44b6 call 0x127a3840 */
  push32(0x127b44bbu); f_127a3840();
  /* 127b44bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b44be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b44c1 jne 0x127b44c4 */
  if (!C.zf) goto L_127b44c4;
  /* 127b44c3 int3  */
  x86_unimpl("int3 @ 0x127b44c3");
L_127b44c4:;
  /* 127b44c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b44c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b44c8 jne 0x127b448b */
  if (!C.zf) goto L_127b448b;
  /* 127b44ca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b44ce jle 0x127b4543 */
  if ((C.zf||C.sf!=C.of)) goto L_127b4543;
  /* 127b44d0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b44d4 jae 0x127b44e0 */
  if (!C.cf) goto L_127b44e0;
  /* 127b44d6 mov eax, 3 */
  EAX = (0x3u);
  /* 127b44db jmp 0x127b4714 */
  goto L_127b4714;
L_127b44e0:;
  /* 127b44e0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 127b44e3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 127b44e6 jmp 0x127b44f1 */
  goto L_127b44f1;
L_127b44e8:;
  /* 127b44e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b44eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b44ee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_127b44f1:;
  /* 127b44f1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b44f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b44f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b44f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b44fa je 0x127b4539 */
  if (C.zf) goto L_127b4539;
  /* 127b44fc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b44ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b4501 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127b4504 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b4506 je 0x127b4539 */
  if (C.zf) goto L_127b4539;
  /* 127b4508 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b450b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b450d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b450f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b4512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4514 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b4516 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4518 jl 0x127b4537 */
  if ((C.sf!=C.of)) goto L_127b4537;
  /* 127b451a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b451d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b451f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b4521 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b4524 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b4526 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127b4529 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b452b jg 0x127b4537 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b4537;
  /* 127b452d mov eax, 2 */
  EAX = (0x2u);
  /* 127b4532 jmp 0x127b4714 */
  goto L_127b4714;
L_127b4537:;
  /* 127b4537 jmp 0x127b44e8 */
  goto L_127b44e8;
L_127b4539:;
  /* 127b4539 mov eax, 3 */
  EAX = (0x3u);
  /* 127b453e jmp 0x127b4714 */
  goto L_127b4714;
L_127b4543:;
  /* 127b4543 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4547 jle 0x127b45bc */
  if ((C.zf||C.sf!=C.of)) goto L_127b45bc;
  /* 127b4549 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b454d jae 0x127b4559 */
  if (!C.cf) goto L_127b4559;
  /* 127b454f mov eax, 1 */
  EAX = (0x1u);
  /* 127b4554 jmp 0x127b4714 */
  goto L_127b4714;
L_127b4559:;
  /* 127b4559 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 127b455c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 127b455f jmp 0x127b456a */
  goto L_127b456a;
L_127b4561:;
  /* 127b4561 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b4564 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4567 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_127b456a:;
  /* 127b456a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b456d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b456f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b4571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b4573 je 0x127b45b2 */
  if (C.zf) goto L_127b45b2;
  /* 127b4575 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b4578 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b457a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127b457d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b457f je 0x127b45b2 */
  if (C.zf) goto L_127b45b2;
  /* 127b4581 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b4584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4586 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b4588 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b458b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b458d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b458f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4591 jl 0x127b45b0 */
  if ((C.sf!=C.of)) goto L_127b45b0;
  /* 127b4593 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b4596 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b4598 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b459a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 127b459d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b459f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127b45a2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b45a4 jg 0x127b45b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b45b0;
  /* 127b45a6 mov eax, 2 */
  EAX = (0x2u);
  /* 127b45ab jmp 0x127b4714 */
  goto L_127b4714;
L_127b45b0:;
  /* 127b45b0 jmp 0x127b4561 */
  goto L_127b4561;
L_127b45b2:;
  /* 127b45b2 mov eax, 1 */
  EAX = (0x1u);
  /* 127b45b7 jmp 0x127b4714 */
  goto L_127b4714;
L_127b45bc:;
  /* 127b45bc push 0 */
  push32((uint32_t)(0x0u));
  /* 127b45be push 0 */
  push32((uint32_t)(0x0u));
  /* 127b45c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b45c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b45c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b45c7 push edx */
  push32((uint32_t)(EDX));
  /* 127b45c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 127b45ca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127b45cd push eax */
  push32((uint32_t)(EAX));
  /* 127b45ce call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127b45d4u);
  /* 127b45d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127b45d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b45db jne 0x127b45e4 */
  if (!C.zf) goto L_127b45e4;
  /* 127b45dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b45df jmp 0x127b4714 */
  goto L_127b4714;
L_127b45e4:;
  /* 127b45e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b45eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b45ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b45f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b45f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127b45f5 call 0x127a7920 */
  push32(0x127b45fau); f_127a7920();
  /* 127b45fa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 127b45fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b4600 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 127b4603 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127b4606 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127b460d jmp 0x127b4626 */
  goto L_127b4626;
  /* 127b460f mov eax, 1 */
  EAX = (0x1u);
  /* 127b4614 ret  */
  ESPCHK(0x127b4330u, _esp0);
  ESP += 4; return;
  /* 127b4615 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127b4618 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127b461f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127b4626:;
  /* 127b4626 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b462a jne 0x127b4633 */
  if (!C.zf) goto L_127b4633;
  /* 127b462c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b462e jmp 0x127b4714 */
  goto L_127b4714;
L_127b4633:;
  /* 127b4633 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b4636 push edx */
  push32((uint32_t)(EDX));
  /* 127b4637 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b463a push eax */
  push32((uint32_t)(EAX));
  /* 127b463b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b463e push ecx */
  push32((uint32_t)(ECX));
  /* 127b463f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b4642 push edx */
  push32((uint32_t)(EDX));
  /* 127b4643 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b4645 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127b4648 push eax */
  push32((uint32_t)(EAX));
  /* 127b4649 call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127b464fu);
  /* 127b464f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4651 jne 0x127b465a */
  if (!C.zf) goto L_127b465a;
  /* 127b4653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4655 jmp 0x127b4714 */
  goto L_127b4714;
L_127b465a:;
  /* 127b465a push 0 */
  push32((uint32_t)(0x0u));
  /* 127b465c push 0 */
  push32((uint32_t)(0x0u));
  /* 127b465e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b4661 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4662 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b4665 push edx */
  push32((uint32_t)(EDX));
  /* 127b4666 push 9 */
  push32((uint32_t)(0x9u));
  /* 127b4668 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127b466b push eax */
  push32((uint32_t)(EAX));
  /* 127b466c call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127b4672u);
  /* 127b4672 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127b4675 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4679 jne 0x127b4682 */
  if (!C.zf) goto L_127b4682;
  /* 127b467b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b467d jmp 0x127b4714 */
  goto L_127b4714;
L_127b4682:;
  /* 127b4682 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127b4689 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b468c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b468e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4691 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127b4693 call 0x127a7920 */
  push32(0x127b4698u); f_127a7920();
  /* 127b4698 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 127b469b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127b469e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 127b46a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127b46a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127b46ab jmp 0x127b46c4 */
  goto L_127b46c4;
  /* 127b46ad mov eax, 1 */
  EAX = (0x1u);
  /* 127b46b2 ret  */
  ESPCHK(0x127b4330u, _esp0);
  ESP += 4; return;
  /* 127b46b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127b46b6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 127b46bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127b46c4:;
  /* 127b46c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b46c8 jne 0x127b46ce */
  if (!C.zf) goto L_127b46ce;
  /* 127b46ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b46cc jmp 0x127b4714 */
  goto L_127b4714;
L_127b46ce:;
  /* 127b46ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b46d1 push edx */
  push32((uint32_t)(EDX));
  /* 127b46d2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b46d5 push eax */
  push32((uint32_t)(EAX));
  /* 127b46d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127b46d9 push ecx */
  push32((uint32_t)(ECX));
  /* 127b46da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127b46dd push edx */
  push32((uint32_t)(EDX));
  /* 127b46de push 1 */
  push32((uint32_t)(0x1u));
  /* 127b46e0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127b46e3 push eax */
  push32((uint32_t)(EAX));
  /* 127b46e4 call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127b46eau);
  /* 127b46ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b46ec jne 0x127b46f2 */
  if (!C.zf) goto L_127b46f2;
  /* 127b46ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b46f0 jmp 0x127b4714 */
  goto L_127b4714;
L_127b46f2:;
  /* 127b46f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b46f5 push ecx */
  push32((uint32_t)(ECX));
  /* 127b46f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b46f9 push edx */
  push32((uint32_t)(EDX));
  /* 127b46fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b46fd push eax */
  push32((uint32_t)(EAX));
  /* 127b46fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b4701 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4702 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4705 push edx */
  push32((uint32_t)(EDX));
  /* 127b4706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4709 push eax */
  push32((uint32_t)(EAX));
  /* 127b470a call dword ptr [0x127d3248] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3248))), 0x127b4710u);
  /* 127b4710 jmp 0x127b4714 */
  goto L_127b4714;
L_127b4712:;
  /* 127b4712 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b4714:;
  /* 127b4714 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 127b4717 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b471a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127b4721 pop edi */
  EDI = (pop32());
  /* 127b4722 pop esi */
  ESI = (pop32());
  /* 127b4723 pop ebx */
  EBX = (pop32());
  /* 127b4724 mov esp, ebp */
  ESP = (EBP);
  /* 127b4726 pop ebp */
  EBP = (pop32());
  /* 127b4727 ret  */
  ESPCHK(0x127b4330u, _esp0);
  ESP += 4; return;
}

/* FUN_10014730 @ 0x127b4730 (80 bytes, 32 insns) */
void f_127b4730(void) {
  FTRACE(0x127b4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4730 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4731 mov ebp, esp */
  EBP = (ESP);
  /* 127b4733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4739 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b473c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b473f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127b4742:;
  /* 127b4742 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4745 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4748 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b474b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b474e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b4750 je 0x127b4767 */
  if (C.zf) goto L_127b4767;
  /* 127b4752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4755 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b4758 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b475a je 0x127b4767 */
  if (C.zf) goto L_127b4767;
  /* 127b475c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b475f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b4765 jmp 0x127b4742 */
  goto L_127b4742;
L_127b4767:;
  /* 127b4767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b476a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b476d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b476f jne 0x127b4779 */
  if (!C.zf) goto L_127b4779;
  /* 127b4771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4774 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4777 jmp 0x127b477c */
  goto L_127b477c;
L_127b4779:;
  /* 127b4779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_127b477c:;
  /* 127b477c mov esp, ebp */
  ESP = (EBP);
  /* 127b477e pop ebp */
  EBP = (pop32());
  /* 127b477f ret  */
  ESPCHK(0x127b4730u, _esp0);
  ESP += 4; return;
}

/* FUN_10014780 @ 0x127b4780 (736 bytes, 224 insns) */
void f_127b4780(void) {
  FTRACE(0x127b4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4780 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4781 mov ebp, esp */
  EBP = (ESP);
  /* 127b4783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4786 push esi */
  push32((uint32_t)(ESI));
  /* 127b4787 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b478b je 0x127b47ac */
  if (C.zf) goto L_127b47ac;
  /* 127b478d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127b478f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4792 push eax */
  push32((uint32_t)(EAX));
  /* 127b4793 call 0x127b4bd0 */
  push32(0x127b4798u); f_127b4bd0();
  /* 127b4798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b479b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127b479e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b47a2 je 0x127b47ac */
  if (C.zf) goto L_127b47ac;
  /* 127b47a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b47a7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b47aa jne 0x127b47b4 */
  if (!C.zf) goto L_127b47b4;
L_127b47ac:;
  /* 127b47ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b47af jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b47b4:;
  /* 127b47b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b47b7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127b47bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b47bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b47bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 127b47c0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b47c3 mov ecx, dword ptr [0x127d0534] */
  ECX = (r32((uint32_t)(0x127d0534)));
  /* 127b47c9 cmp ecx, dword ptr [0x127d0538] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d0538))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b47cf jne 0x127b47e5 */
  if (!C.zf) goto L_127b47e5;
  /* 127b47d1 mov edx, dword ptr [0x127d0534] */
  EDX = (r32((uint32_t)(0x127d0534)));
  /* 127b47d7 push edx */
  push32((uint32_t)(EDX));
  /* 127b47d8 call 0x127b4ae0 */
  push32(0x127b47ddu); f_127b4ae0();
  /* 127b47dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b47e0 mov dword ptr [0x127d0534], eax */
  w32((uint32_t)(0x127d0534), (EAX));
L_127b47e5:;
  /* 127b47e5 cmp dword ptr [0x127d0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b47ec jne 0x127b48a5 */
  if (!C.zf) goto L_127b48a5;
  /* 127b47f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b47f6 je 0x127b4817 */
  if (C.zf) goto L_127b4817;
  /* 127b47f8 cmp dword ptr [0x127d053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b47ff je 0x127b4817 */
  if (C.zf) goto L_127b4817;
  /* 127b4801 call 0x127b4280 */
  push32(0x127b4806u); f_127b4280();
  /* 127b4806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4808 je 0x127b4812 */
  if (C.zf) goto L_127b4812;
  /* 127b480a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b480d jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b4812:;
  /* 127b4812 jmp 0x127b48a5 */
  goto L_127b48a5;
L_127b4817:;
  /* 127b4817 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b481b je 0x127b4824 */
  if (C.zf) goto L_127b4824;
  /* 127b481d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b481f jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b4824:;
  /* 127b4824 cmp dword ptr [0x127d0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b482b jne 0x127b4864 */
  if (!C.zf) goto L_127b4864;
  /* 127b482d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 127b4832 push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b4837 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b4839 push 4 */
  push32((uint32_t)(0x4u));
  /* 127b483b call 0x127a4780 */
  push32(0x127b4840u); f_127a4780();
  /* 127b4840 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4843 mov dword ptr [0x127d0534], eax */
  w32((uint32_t)(0x127d0534), (EAX));
  /* 127b4848 cmp dword ptr [0x127d0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b484f jne 0x127b4859 */
  if (!C.zf) goto L_127b4859;
  /* 127b4851 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b4854 jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b4859:;
  /* 127b4859 mov eax, dword ptr [0x127d0534] */
  EAX = (r32((uint32_t)(0x127d0534)));
  /* 127b485e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127b4864:;
  /* 127b4864 cmp dword ptr [0x127d053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b486b jne 0x127b48a5 */
  if (!C.zf) goto L_127b48a5;
  /* 127b486d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 127b4872 push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b4877 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b4879 push 4 */
  push32((uint32_t)(0x4u));
  /* 127b487b call 0x127a4780 */
  push32(0x127b4880u); f_127a4780();
  /* 127b4880 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4883 mov dword ptr [0x127d053c], eax */
  w32((uint32_t)(0x127d053c), (EAX));
  /* 127b4888 cmp dword ptr [0x127d053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b488f jne 0x127b4899 */
  if (!C.zf) goto L_127b4899;
  /* 127b4891 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b4894 jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b4899:;
  /* 127b4899 mov ecx, dword ptr [0x127d053c] */
  ECX = (r32((uint32_t)(0x127d053c)));
  /* 127b489f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_127b48a5:;
  /* 127b48a5 mov edx, dword ptr [0x127d0534] */
  EDX = (r32((uint32_t)(0x127d0534)));
  /* 127b48ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127b48ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b48b1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b48b4 push eax */
  push32((uint32_t)(EAX));
  /* 127b48b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b48b8 push ecx */
  push32((uint32_t)(ECX));
  /* 127b48b9 call 0x127b4a60 */
  push32(0x127b48beu); f_127b4a60();
  /* 127b48be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b48c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b48c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b48c8 jl 0x127b4961 */
  if ((C.sf!=C.of)) goto L_127b4961;
  /* 127b48ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b48d1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b48d4 je 0x127b4961 */
  if (C.zf) goto L_127b4961;
  /* 127b48da cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b48de je 0x127b4953 */
  if (C.zf) goto L_127b4953;
  /* 127b48e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b48e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b48e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b48e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127b48eb push edx */
  push32((uint32_t)(EDX));
  /* 127b48ec call 0x127a5210 */
  push32(0x127b48f1u); f_127a5210();
  /* 127b48f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b48f4 jmp 0x127b48ff */
  goto L_127b48ff;
L_127b48f6:;
  /* 127b48f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b48f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b48fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127b48ff:;
  /* 127b48ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4902 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4905 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4909 je 0x127b4920 */
  if (C.zf) goto L_127b4920;
  /* 127b490b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b490e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4911 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4914 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4917 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 127b491b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 127b491e jmp 0x127b48f6 */
  goto L_127b48f6;
L_127b4920:;
  /* 127b4920 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 127b4925 push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b492a push 2 */
  push32((uint32_t)(0x2u));
  /* 127b492c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b492f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127b4932 push eax */
  push32((uint32_t)(EAX));
  /* 127b4933 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4936 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4937 call 0x127a4c10 */
  push32(0x127b493cu); f_127a4c10();
  /* 127b493c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b493f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b4942 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4946 je 0x127b4951 */
  if (C.zf) goto L_127b4951;
  /* 127b4948 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b494b mov dword ptr [0x127d0534], edx */
  w32((uint32_t)(0x127d0534), (EDX));
L_127b4951:;
  /* 127b4951 jmp 0x127b495f */
  goto L_127b495f;
L_127b4953:;
  /* 127b4953 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4956 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b495c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_127b495f:;
  /* 127b495f jmp 0x127b49d4 */
  goto L_127b49d4;
L_127b4961:;
  /* 127b4961 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4965 jne 0x127b49cd */
  if (!C.zf) goto L_127b49cd;
  /* 127b4967 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b496b jge 0x127b4975 */
  if ((C.sf==C.of)) goto L_127b4975;
  /* 127b496d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4970 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b4972 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127b4975:;
  /* 127b4975 push 0xce */
  push32((uint32_t)(0xceu));
  /* 127b497a push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b497f push 2 */
  push32((uint32_t)(0x2u));
  /* 127b4981 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4984 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 127b498b push edx */
  push32((uint32_t)(EDX));
  /* 127b498c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b498f push eax */
  push32((uint32_t)(EAX));
  /* 127b4990 call 0x127a4c10 */
  push32(0x127b4995u); f_127a4c10();
  /* 127b4995 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4998 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b499b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b499f jne 0x127b49a9 */
  if (!C.zf) goto L_127b49a9;
  /* 127b49a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b49a4 jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b49a9:;
  /* 127b49a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b49ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b49af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b49b2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 127b49b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b49b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b49bb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 127b49c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b49c6 mov dword ptr [0x127d0534], eax */
  w32((uint32_t)(0x127d0534), (EAX));
  /* 127b49cb jmp 0x127b49d4 */
  goto L_127b49d4;
L_127b49cd:;
  /* 127b49cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b49cf jmp 0x127b4a5b */
  goto L_127b4a5b;
L_127b49d4:;
  /* 127b49d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b49d8 je 0x127b4a59 */
  if (C.zf) goto L_127b4a59;
  /* 127b49da push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 127b49df push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b49e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b49e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b49e9 push ecx */
  push32((uint32_t)(ECX));
  /* 127b49ea call 0x127a75b0 */
  push32(0x127b49efu); f_127a75b0();
  /* 127b49ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b49f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b49f5 push eax */
  push32((uint32_t)(EAX));
  /* 127b49f6 call 0x127a4780 */
  push32(0x127b49fbu); f_127a4780();
  /* 127b49fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b49fe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127b4a01 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4a05 je 0x127b4a59 */
  if (C.zf) goto L_127b4a59;
  /* 127b4a07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4a0a push edx */
  push32((uint32_t)(EDX));
  /* 127b4a0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b4a0e push eax */
  push32((uint32_t)(EAX));
  /* 127b4a0f call 0x127a7730 */
  push32(0x127b4a14u); f_127a7730();
  /* 127b4a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4a17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b4a1a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4a1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b4a20 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4a22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127b4a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4a28 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127b4a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4a31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b4a34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b4a37 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b4a39 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4a3b not edx */
  EDX = (~(EDX));
  /* 127b4a3d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 127b4a40 push edx */
  push32((uint32_t)(EDX));
  /* 127b4a41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b4a44 push eax */
  push32((uint32_t)(EAX));
  /* 127b4a45 call dword ptr [0x127d3244] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3244))), 0x127b4a4bu);
  /* 127b4a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 127b4a4d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b4a50 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4a51 call 0x127a5210 */
  push32(0x127b4a56u); f_127a5210();
  /* 127b4a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b4a59:;
  /* 127b4a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b4a5b:;
  /* 127b4a5b pop esi */
  ESI = (pop32());
  /* 127b4a5c mov esp, ebp */
  ESP = (EBP);
  /* 127b4a5e pop ebp */
  EBP = (pop32());
  /* 127b4a5f ret  */
  ESPCHK(0x127b4780u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x127b4a60 (124 bytes, 47 insns) */
void f_127b4a60(void) {
  FTRACE(0x127b4a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4a60 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4a61 mov ebp, esp */
  EBP = (ESP);
  /* 127b4a63 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4a64 mov eax, dword ptr [0x127d0534] */
  EAX = (r32((uint32_t)(0x127d0534)));
  /* 127b4a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b4a6c jmp 0x127b4a77 */
  goto L_127b4a77;
L_127b4a6e:;
  /* 127b4a6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4a71 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4a74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127b4a77:;
  /* 127b4a77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4a7a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4a7d je 0x127b4aca */
  if (C.zf) goto L_127b4aca;
  /* 127b4a7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4a82 push eax */
  push32((uint32_t)(EAX));
  /* 127b4a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4a86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b4a88 push edx */
  push32((uint32_t)(EDX));
  /* 127b4a89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4a8c push eax */
  push32((uint32_t)(EAX));
  /* 127b4a8d call 0x127b4230 */
  push32(0x127b4a92u); f_127b4230();
  /* 127b4a92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b4a97 jne 0x127b4ac8 */
  if (!C.zf) goto L_127b4ac8;
  /* 127b4a99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4a9c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b4a9e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4aa1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 127b4aa5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4aa8 je 0x127b4aba */
  if (C.zf) goto L_127b4aba;
  /* 127b4aaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4aad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b4aaf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4ab2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 127b4ab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b4ab8 jne 0x127b4ac8 */
  if (!C.zf) goto L_127b4ac8;
L_127b4aba:;
  /* 127b4aba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4abd sub eax, dword ptr [0x127d0534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d0534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4ac3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127b4ac6 jmp 0x127b4ad8 */
  goto L_127b4ad8;
L_127b4ac8:;
  /* 127b4ac8 jmp 0x127b4a6e */
  goto L_127b4a6e;
L_127b4aca:;
  /* 127b4aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4acd sub eax, dword ptr [0x127d0534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d0534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4ad3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 127b4ad6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_127b4ad8:;
  /* 127b4ad8 mov esp, ebp */
  ESP = (EBP);
  /* 127b4ada pop ebp */
  EBP = (pop32());
  /* 127b4adb ret  */
  ESPCHK(0x127b4a60u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x127b4ae0 (238 bytes, 80 insns) */
void f_127b4ae0(void) {
  FTRACE(0x127b4ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4ae1 mov ebp, esp */
  EBP = (ESP);
  /* 127b4ae3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4ae6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b4aed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4af0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b4af3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4af7 jne 0x127b4b00 */
  if (!C.zf) goto L_127b4b00;
  /* 127b4af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4afb jmp 0x127b4bca */
  goto L_127b4bca;
L_127b4b00:;
  /* 127b4b00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4b03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b4b05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4b08 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4b0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b4b0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b4b10 je 0x127b4b1d */
  if (C.zf) goto L_127b4b1d;
  /* 127b4b12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b4b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4b18 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127b4b1b jmp 0x127b4b00 */
  goto L_127b4b00;
L_127b4b1d:;
  /* 127b4b1d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 127b4b22 push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b4b27 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b4b29 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b4b2c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 127b4b33 push eax */
  push32((uint32_t)(EAX));
  /* 127b4b34 call 0x127a4780 */
  push32(0x127b4b39u); f_127a4780();
  /* 127b4b39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4b3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b4b3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4b42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b4b45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4b49 jne 0x127b4b55 */
  if (!C.zf) goto L_127b4b55;
  /* 127b4b4b push 9 */
  push32((uint32_t)(0x9u));
  /* 127b4b4d call 0x127a36f0 */
  push32(0x127b4b52u); f_127a36f0();
  /* 127b4b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b4b55:;
  /* 127b4b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4b58 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127b4b5b:;
  /* 127b4b5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4b5e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4b61 je 0x127b4bbe */
  if (C.zf) goto L_127b4bbe;
  /* 127b4b63 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 127b4b68 push 0x127cc9a0 */
  push32((uint32_t)(0x127cc9a0u));
  /* 127b4b6d push 2 */
  push32((uint32_t)(0x2u));
  /* 127b4b6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4b72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b4b74 push edx */
  push32((uint32_t)(EDX));
  /* 127b4b75 call 0x127a75b0 */
  push32(0x127b4b7au); f_127a75b0();
  /* 127b4b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4b80 push eax */
  push32((uint32_t)(EAX));
  /* 127b4b81 call 0x127a4780 */
  push32(0x127b4b86u); f_127a4780();
  /* 127b4b86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4b89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4b8c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127b4b8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4b91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4b94 je 0x127b4baa */
  if (C.zf) goto L_127b4baa;
  /* 127b4b96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4b99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127b4b9b push ecx */
  push32((uint32_t)(ECX));
  /* 127b4b9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4b9f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b4ba1 push eax */
  push32((uint32_t)(EAX));
  /* 127b4ba2 call 0x127a7730 */
  push32(0x127b4ba7u); f_127a7730();
  /* 127b4ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b4baa:;
  /* 127b4baa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b4bad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4bb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127b4bb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4bb6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4bb9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b4bbc jmp 0x127b4b5b */
  goto L_127b4b5b;
L_127b4bbe:;
  /* 127b4bbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b4bc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127b4bc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127b4bca:;
  /* 127b4bca mov esp, ebp */
  ESP = (EBP);
  /* 127b4bcc pop ebp */
  EBP = (pop32());
  /* 127b4bcd ret  */
  ESPCHK(0x127b4ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bd0 @ 0x127b4bd0 (237 bytes, 81 insns) */
void f_127b4bd0(void) {
  FTRACE(0x127b4bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b4bd1 mov ebp, esp */
  EBP = (ESP);
  /* 127b4bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4bd4 cmp dword ptr [0x127d1c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4bdb jne 0x127b4bf2 */
  if (!C.zf) goto L_127b4bf2;
  /* 127b4bdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b4be0 push eax */
  push32((uint32_t)(EAX));
  /* 127b4be1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4be4 push ecx */
  push32((uint32_t)(ECX));
  /* 127b4be5 call 0x127b4cd0 */
  push32(0x127b4beau); f_127b4cd0();
  /* 127b4bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4bed jmp 0x127b4cb9 */
  goto L_127b4cb9;
L_127b4bf2:;
  /* 127b4bf2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127b4bf4 call 0x127a8180 */
  push32(0x127b4bf9u); f_127a8180();
  /* 127b4bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4bfc jmp 0x127b4c07 */
  goto L_127b4c07;
L_127b4bfe:;
  /* 127b4bfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4c01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4c04 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_127b4c07:;
  /* 127b4c07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4c0a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 127b4c0e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 127b4c12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4c15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b4c1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b4c1d je 0x127b4c9b */
  if (C.zf) goto L_127b4c9b;
  /* 127b4c1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4c22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b4c27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b4c29 mov cl, byte ptr [eax + 0x127d1da1] */
  CL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127b4c2f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127b4c32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b4c34 je 0x127b4c86 */
  if (C.zf) goto L_127b4c86;
  /* 127b4c36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4c39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4c3c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127b4c3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4c42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b4c44 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b4c46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b4c48 jne 0x127b4c58 */
  if (!C.zf) goto L_127b4c58;
  /* 127b4c4a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127b4c4c call 0x127a8220 */
  push32(0x127b4c51u); f_127a8220();
  /* 127b4c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4c56 jmp 0x127b4cb9 */
  goto L_127b4cb9;
L_127b4c58:;
  /* 127b4c58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4c5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b4c61 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 127b4c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4c67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b4c69 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b4c6b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127b4c6d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4c70 jne 0x127b4c84 */
  if (!C.zf) goto L_127b4c84;
  /* 127b4c72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127b4c74 call 0x127a8220 */
  push32(0x127b4c79u); f_127a8220();
  /* 127b4c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4c7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4c7f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b4c82 jmp 0x127b4cb9 */
  goto L_127b4cb9;
L_127b4c84:;
  /* 127b4c84 jmp 0x127b4c96 */
  goto L_127b4c96;
L_127b4c86:;
  /* 127b4c86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4c89 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b4c8f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4c92 jne 0x127b4c96 */
  if (!C.zf) goto L_127b4c96;
  /* 127b4c94 jmp 0x127b4c9b */
  goto L_127b4c9b;
L_127b4c96:;
  /* 127b4c96 jmp 0x127b4bfe */
  goto L_127b4bfe;
L_127b4c9b:;
  /* 127b4c9b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127b4c9d call 0x127a8220 */
  push32(0x127b4ca2u); f_127a8220();
  /* 127b4ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b4ca8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b4cad cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b4cb0 jne 0x127b4cb7 */
  if (!C.zf) goto L_127b4cb7;
  /* 127b4cb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b4cb5 jmp 0x127b4cb9 */
  goto L_127b4cb9;
L_127b4cb7:;
  /* 127b4cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b4cb9:;
  /* 127b4cb9 mov esp, ebp */
  ESP = (EBP);
  /* 127b4cbb pop ebp */
  EBP = (pop32());
  /* 127b4cbc ret  */
  ESPCHK(0x127b4bd0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x127b4cd0 (193 bytes, 87 insns) */
void f_127b4cd0(void) {
  FTRACE(0x127b4cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4cd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4cd2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 127b4cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 127b4cd7 mov ebx, eax */
  EBX = (EAX);
  /* 127b4cd9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 127b4cdc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 127b4ce0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 127b4ce6 je 0x127b4cfb */
  if (C.zf) goto L_127b4cfb;
L_127b4ce8:;
  /* 127b4ce8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 127b4cea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127b4ceb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b4ced je 0x127b4cc0 */
  if (C.zf) { jmp_ind(0x127b4cc0u); return; }
  /* 127b4cef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 127b4cf1 je 0x127b4d44 */
  if (C.zf) goto L_127b4d44;
  /* 127b4cf3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 127b4cf9 jne 0x127b4ce8 */
  if (!C.zf) goto L_127b4ce8;
L_127b4cfb:;
  /* 127b4cfb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 127b4cfd push edi */
  push32((uint32_t)(EDI));
  /* 127b4cfe mov eax, ebx */
  EAX = (EBX);
  /* 127b4d00 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 127b4d03 push esi */
  push32((uint32_t)(ESI));
  /* 127b4d04 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_127b4d06:;
  /* 127b4d06 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 127b4d08 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 127b4d0d mov eax, ecx */
  EAX = (ECX);
  /* 127b4d0f mov esi, edi */
  ESI = (EDI);
  /* 127b4d11 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 127b4d13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4d15 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4d17 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127b4d1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b4d1d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 127b4d1f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 127b4d21 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b4d24 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 127b4d2a jne 0x127b4d48 */
  if (!C.zf) goto L_127b4d48;
  /* 127b4d2c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 127b4d31 je 0x127b4d06 */
  if (C.zf) goto L_127b4d06;
  /* 127b4d33 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 127b4d38 jne 0x127b4d42 */
  if (!C.zf) goto L_127b4d42;
  /* 127b4d3a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 127b4d40 jne 0x127b4d06 */
  if (!C.zf) goto L_127b4d06;
L_127b4d42:;
  /* 127b4d42 pop esi */
  ESI = (pop32());
  /* 127b4d43 pop edi */
  EDI = (pop32());
L_127b4d44:;
  /* 127b4d44 pop ebx */
  EBX = (pop32());
  /* 127b4d45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b4d47 ret  */
  ESPCHK(0x127b4cd0u, _esp0);
  ESP += 4; return;
L_127b4d48:;
  /* 127b4d48 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 127b4d4b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b4d4d je 0x127b4d85 */
  if (C.zf) goto L_127b4d85;
  /* 127b4d4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127b4d51 je 0x127b4d42 */
  if (C.zf) goto L_127b4d42;
  /* 127b4d53 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b4d55 je 0x127b4d7e */
  if (C.zf) goto L_127b4d7e;
  /* 127b4d57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127b4d59 je 0x127b4d42 */
  if (C.zf) goto L_127b4d42;
  /* 127b4d5b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127b4d5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b4d60 je 0x127b4d77 */
  if (C.zf) goto L_127b4d77;
  /* 127b4d62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 127b4d64 je 0x127b4d42 */
  if (C.zf) goto L_127b4d42;
  /* 127b4d66 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b4d68 je 0x127b4d70 */
  if (C.zf) goto L_127b4d70;
  /* 127b4d6a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 127b4d6c je 0x127b4d42 */
  if (C.zf) goto L_127b4d42;
  /* 127b4d6e jmp 0x127b4d06 */
  goto L_127b4d06;
L_127b4d70:;
  /* 127b4d70 pop esi */
  ESI = (pop32());
  /* 127b4d71 pop edi */
  EDI = (pop32());
  /* 127b4d72 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 127b4d75 pop ebx */
  EBX = (pop32());
  /* 127b4d76 ret  */
  ESPCHK(0x127b4cd0u, _esp0);
  ESP += 4; return;
L_127b4d77:;
  /* 127b4d77 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 127b4d7a pop esi */
  ESI = (pop32());
  /* 127b4d7b pop edi */
  EDI = (pop32());
  /* 127b4d7c pop ebx */
  EBX = (pop32());
  /* 127b4d7d ret  */
  ESPCHK(0x127b4cd0u, _esp0);
  ESP += 4; return;
L_127b4d7e:;
  /* 127b4d7e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 127b4d81 pop esi */
  ESI = (pop32());
  /* 127b4d82 pop edi */
  EDI = (pop32());
  /* 127b4d83 pop ebx */
  EBX = (pop32());
  /* 127b4d84 ret  */
  ESPCHK(0x127b4cd0u, _esp0);
  ESP += 4; return;
L_127b4d85:;
  /* 127b4d85 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 127b4d88 pop esi */
  ESI = (pop32());
  /* 127b4d89 pop edi */
  EDI = (pop32());
  /* 127b4d8a pop ebx */
  EBX = (pop32());
  /* 127b4d8b ret  */
  ESPCHK(0x127b4cd0u, _esp0);
  ESP += 4; return;
  /* 127b4d8c jmp dword ptr [0x127d328c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x127d328c)))); return;
}

/* RtlUnwind @ 0x127b4edc (6 bytes, 1 insns) */
void f_127b4edc(void) {
  FTRACE(0x127b4edcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b4edc jmp dword ptr [0x127d3280] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x127d3280)))); return;
}

