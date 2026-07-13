#include "recomp.h"

/* FUN_10011c00 @ 0x123a1c00 (393 bytes, 123 insns) */
void f_123a1c00(void) {
  FTRACE(0x123a1c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1c00 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1c01 mov ebp, esp */
  EBP = (ESP);
  /* 123a1c03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1c06 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1c0a jne 0x123a1c16 */
  if (!C.zf) goto L_123a1c16;
  /* 123a1c0c mov eax, dword ptr [0x123bfc98] */
  EAX = (r32((uint32_t)(0x123bfc98)));
  /* 123a1c11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123a1c14 jmp 0x123a1c1c */
  goto L_123a1c1c;
L_123a1c16:;
  /* 123a1c16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1c19 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123a1c1c:;
  /* 123a1c1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1c1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a1c22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1c25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a1c28 push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 123a1c2d call dword ptr [0x123c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ec))), 0x123a1c33u);
  /* 123a1c33 cmp dword ptr [0x123c0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1c3a je 0x123a1c5a */
  if (C.zf) goto L_123a1c5a;
  /* 123a1c3c push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 123a1c41 call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x123a1c47u);
  /* 123a1c47 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a1c49 call 0x123982c0 */
  push32(0x123a1c4eu); f_123982c0();
  /* 123a1c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1c51 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123a1c58 jmp 0x123a1c61 */
  goto L_123a1c61;
L_123a1c5a:;
  /* 123a1c5a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123a1c61:;
  /* 123a1c61 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1c65 jbe 0x123a1d52 */
  if ((C.cf||C.zf)) goto L_123a1d52;
  /* 123a1c6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1c6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a1c70 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 123a1c73 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a1c77 je 0x123a1c81 */
  if (C.zf) goto L_123a1c81;
  /* 123a1c79 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a1c7d je 0x123a1c86 */
  if (C.zf) goto L_123a1c86;
  /* 123a1c7f jmp 0x123a1ce0 */
  goto L_123a1ce0;
L_123a1c81:;
  /* 123a1c81 jmp 0x123a1d52 */
  goto L_123a1d52;
L_123a1c86:;
  /* 123a1c86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1c8c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 123a1c8f mov dword ptr [0x123c0850], 0 */
  w32((uint32_t)(0x123c0850), (0x0u));
  /* 123a1c99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1c9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a1c9f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1ca2 jne 0x123a1cb7 */
  if (!C.zf) goto L_123a1cb7;
  /* 123a1ca4 mov dword ptr [0x123c0850], 1 */
  w32((uint32_t)(0x123c0850), (0x1u));
  /* 123a1cae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1cb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1cb4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123a1cb7:;
  /* 123a1cb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a1cba push ecx */
  push32((uint32_t)(ECX));
  /* 123a1cbb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 123a1cbe push edx */
  push32((uint32_t)(EDX));
  /* 123a1cbf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 123a1cc2 push eax */
  push32((uint32_t)(EAX));
  /* 123a1cc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1cc7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1cca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a1ccc push eax */
  push32((uint32_t)(EAX));
  /* 123a1ccd call 0x123a1d90 */
  push32(0x123a1cd2u); f_123a1d90();
  /* 123a1cd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1cd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1cd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1cdb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123a1cde jmp 0x123a1d4d */
  goto L_123a1d4d;
L_123a1ce0:;
  /* 123a1ce0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a1ce5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a1ce7 mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a1ced xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a1cef mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a1cf3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123a1cf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a1cfb je 0x123a1d28 */
  if (C.zf) goto L_123a1d28;
  /* 123a1cfd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1d01 jbe 0x123a1d28 */
  if ((C.cf||C.zf)) goto L_123a1d28;
  /* 123a1d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1d06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1d09 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a1d0b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123a1d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1d10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1d13 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a1d16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1d19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1d1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123a1d1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1d22 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1d25 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123a1d28:;
  /* 123a1d28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1d2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1d2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a1d30 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123a1d32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1d35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1d38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a1d3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1d41 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123a1d44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1d47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1d4a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123a1d4d:;
  /* 123a1d4d jmp 0x123a1c61 */
  goto L_123a1c61;
L_123a1d52:;
  /* 123a1d52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1d56 je 0x123a1d64 */
  if (C.zf) goto L_123a1d64;
  /* 123a1d58 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a1d5a call 0x12398360 */
  push32(0x123a1d5fu); f_12398360();
  /* 123a1d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1d62 jmp 0x123a1d6f */
  goto L_123a1d6f;
L_123a1d64:;
  /* 123a1d64 push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 123a1d69 call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x123a1d6fu);
L_123a1d6f:;
  /* 123a1d6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1d73 jbe 0x123a1d83 */
  if ((C.cf||C.zf)) goto L_123a1d83;
  /* 123a1d75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1d78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123a1d7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1d7e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1d81 jmp 0x123a1d85 */
  goto L_123a1d85;
L_123a1d83:;
  /* 123a1d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a1d85:;
  /* 123a1d85 mov esp, ebp */
  ESP = (EBP);
  /* 123a1d87 pop ebp */
  EBP = (pop32());
  /* 123a1d88 ret  */
  ESPCHK(0x123a1c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x123a1d90 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_123a1d90(void) {
  FTRACE(0x123a1d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1d90 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1d91 mov ebp, esp */
  EBP = (ESP);
  /* 123a1d93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1d96 push esi */
  push32((uint32_t)(ESI));
  /* 123a1d97 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 123a1d9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a1d9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1da1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1da4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a1da7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1dab ja 0x123a22f8 */
  if ((!C.cf&&!C.zf)) goto L_123a22f8;
  /* 123a1db1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a1db6 mov dl, byte ptr [eax + 0x123a2359] */
  DL = (r8((uint32_t)(EAX + 0x123a2359)));
  /* 123a1dbc jmp dword ptr [edx*4 + 0x123a22fd] */
  switch (EDX) {
    case 0: goto L_123a22d6;
    case 1: goto L_123a1de5;
    case 2: goto L_123a1e2b;
    case 3: goto L_123a1f78;
    case 4: goto L_123a1fa0;
    case 5: goto L_123a203f;
    case 6: goto L_123a20ab;
    case 7: goto L_123a20d4;
    case 8: goto L_123a2115;
    case 9: goto L_123a21f7;
    case 10: goto L_123a225e;
    case 11: goto L_123a22ab;
    case 12: goto L_123a1dc3;
    case 13: goto L_123a1e08;
    case 14: goto L_123a1e4e;
    case 15: goto L_123a1f4e;
    case 16: goto L_123a1fe5;
    case 17: goto L_123a2012;
    case 18: goto L_123a2067;
    case 19: goto L_123a20eb;
    case 20: goto L_123a2199;
    case 21: goto L_123a2228;
    case 22: goto L_123a22f8;
    default: x86_unimpl("switch@0x123a1dbc out of table"); return;
  }
L_123a1dc3:;
  /* 123a1dc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1dc7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1dca push edx */
  push32((uint32_t)(EDX));
  /* 123a1dcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1dce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123a1dd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1dd4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 123a1dd7 push eax */
  push32((uint32_t)(EAX));
  /* 123a1dd8 call 0x123a23b0 */
  push32(0x123a1dddu); f_123a23b0();
  /* 123a1ddd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1de0 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1de5:;
  /* 123a1de5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1de8 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1de9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1dec push edx */
  push32((uint32_t)(EDX));
  /* 123a1ded mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1df0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123a1df3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1df6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 123a1dfa push eax */
  push32((uint32_t)(EAX));
  /* 123a1dfb call 0x123a23b0 */
  push32(0x123a1e00u); f_123a23b0();
  /* 123a1e00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1e03 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1e08:;
  /* 123a1e08 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1e0b push ecx */
  push32((uint32_t)(ECX));
  /* 123a1e0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1e0f push edx */
  push32((uint32_t)(EDX));
  /* 123a1e10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1e13 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123a1e16 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1e19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123a1e1d push eax */
  push32((uint32_t)(EAX));
  /* 123a1e1e call 0x123a23b0 */
  push32(0x123a1e23u); f_123a23b0();
  /* 123a1e23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1e26 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1e2b:;
  /* 123a1e2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1e2e push ecx */
  push32((uint32_t)(ECX));
  /* 123a1e2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1e32 push edx */
  push32((uint32_t)(EDX));
  /* 123a1e33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1e36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123a1e39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1e3c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123a1e40 push eax */
  push32((uint32_t)(EAX));
  /* 123a1e41 call 0x123a23b0 */
  push32(0x123a1e46u); f_123a23b0();
  /* 123a1e46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1e49 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1e4e:;
  /* 123a1e4e cmp dword ptr [0x123c0850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1e55 je 0x123a1ed6 */
  if (C.zf) goto L_123a1ed6;
  /* 123a1e57 mov dword ptr [0x123c0850], 0 */
  w32((uint32_t)(0x123c0850), (0x0u));
  /* 123a1e61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1e64 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1e65 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1e68 push edx */
  push32((uint32_t)(EDX));
  /* 123a1e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1e6c push eax */
  push32((uint32_t)(EAX));
  /* 123a1e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1e70 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1e71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1e74 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 123a1e7a push eax */
  push32((uint32_t)(EAX));
  /* 123a1e7b call 0x123a2560 */
  push32(0x123a1e80u); f_123a2560();
  /* 123a1e80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1e83 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1e86 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1e89 jne 0x123a1e90 */
  if (!C.zf) goto L_123a1e90;
  /* 123a1e8b jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1e90:;
  /* 123a1e90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1e93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a1e95 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 123a1e98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1e9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a1e9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1ea0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1ea3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a1ea5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1ea8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a1eaa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1ead mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1eb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a1eb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1eb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1eb9 push edx */
  push32((uint32_t)(EDX));
  /* 123a1eba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1ebd push eax */
  push32((uint32_t)(EAX));
  /* 123a1ebe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1ec2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1ec5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 123a1ecb push eax */
  push32((uint32_t)(EAX));
  /* 123a1ecc call 0x123a2560 */
  push32(0x123a1ed1u); f_123a2560();
  /* 123a1ed1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1ed4 jmp 0x123a1f49 */
  goto L_123a1f49;
L_123a1ed6:;
  /* 123a1ed6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1eda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1edd push edx */
  push32((uint32_t)(EDX));
  /* 123a1ede mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1ee1 push eax */
  push32((uint32_t)(EAX));
  /* 123a1ee2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1ee6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1ee9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 123a1eef push eax */
  push32((uint32_t)(EAX));
  /* 123a1ef0 call 0x123a2560 */
  push32(0x123a1ef5u); f_123a2560();
  /* 123a1ef5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1ef8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1efb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1efe jne 0x123a1f05 */
  if (!C.zf) goto L_123a1f05;
  /* 123a1f00 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1f05:;
  /* 123a1f05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1f08 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a1f0a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 123a1f0d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1f10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a1f12 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1f15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1f18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a1f1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1f1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a1f1f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1f22 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1f25 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a1f27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1f2a push ecx */
  push32((uint32_t)(ECX));
  /* 123a1f2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1f2e push edx */
  push32((uint32_t)(EDX));
  /* 123a1f2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1f32 push eax */
  push32((uint32_t)(EAX));
  /* 123a1f33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1f36 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1f37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a1f3a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 123a1f40 push eax */
  push32((uint32_t)(EAX));
  /* 123a1f41 call 0x123a2560 */
  push32(0x123a1f46u); f_123a2560();
  /* 123a1f46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a1f49:;
  /* 123a1f49 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1f4e:;
  /* 123a1f4e mov ecx, dword ptr [0x123c0850] */
  ECX = (r32((uint32_t)(0x123c0850)));
  /* 123a1f54 mov dword ptr [0x123c0860], ecx */
  w32((uint32_t)(0x123c0860), (ECX));
  /* 123a1f5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1f5d push edx */
  push32((uint32_t)(EDX));
  /* 123a1f5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1f61 push eax */
  push32((uint32_t)(EAX));
  /* 123a1f62 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a1f64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1f67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123a1f6a push edx */
  push32((uint32_t)(EDX));
  /* 123a1f6b call 0x123a2400 */
  push32(0x123a1f70u); f_123a2400();
  /* 123a1f70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1f73 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1f78:;
  /* 123a1f78 mov eax, dword ptr [0x123c0850] */
  EAX = (r32((uint32_t)(0x123c0850)));
  /* 123a1f7d mov dword ptr [0x123c0860], eax */
  w32((uint32_t)(0x123c0860), (EAX));
  /* 123a1f82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1f85 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1f86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1f89 push edx */
  push32((uint32_t)(EDX));
  /* 123a1f8a push 2 */
  push32((uint32_t)(0x2u));
  /* 123a1f8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1f8f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123a1f92 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1f93 call 0x123a2400 */
  push32(0x123a1f98u); f_123a2400();
  /* 123a1f98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1f9b jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1fa0:;
  /* 123a1fa0 mov edx, dword ptr [0x123c0850] */
  EDX = (r32((uint32_t)(0x123c0850)));
  /* 123a1fa6 mov dword ptr [0x123c0860], edx */
  w32((uint32_t)(0x123c0860), (EDX));
  /* 123a1fac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1faf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 123a1fb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a1fb3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 123a1fb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a1fba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a1fbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1fc1 jne 0x123a1fca */
  if (!C.zf) goto L_123a1fca;
  /* 123a1fc3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_123a1fca:;
  /* 123a1fca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1fcd push edx */
  push32((uint32_t)(EDX));
  /* 123a1fce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1fd1 push eax */
  push32((uint32_t)(EAX));
  /* 123a1fd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a1fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a1fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1fd8 call 0x123a2400 */
  push32(0x123a1fddu); f_123a2400();
  /* 123a1fdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1fe0 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a1fe5:;
  /* 123a1fe5 mov edx, dword ptr [0x123c0850] */
  EDX = (r32((uint32_t)(0x123c0850)));
  /* 123a1feb mov dword ptr [0x123c0860], edx */
  w32((uint32_t)(0x123c0860), (EDX));
  /* 123a1ff1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1ff4 push eax */
  push32((uint32_t)(EAX));
  /* 123a1ff5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1ff9 push 3 */
  push32((uint32_t)(0x3u));
  /* 123a1ffb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1ffe mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123a2001 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2004 push eax */
  push32((uint32_t)(EAX));
  /* 123a2005 call 0x123a2400 */
  push32(0x123a200au); f_123a2400();
  /* 123a200a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a200d jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a2012:;
  /* 123a2012 mov ecx, dword ptr [0x123c0850] */
  ECX = (r32((uint32_t)(0x123c0850)));
  /* 123a2018 mov dword ptr [0x123c0860], ecx */
  w32((uint32_t)(0x123c0860), (ECX));
  /* 123a201e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2021 push edx */
  push32((uint32_t)(EDX));
  /* 123a2022 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2025 push eax */
  push32((uint32_t)(EAX));
  /* 123a2026 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2028 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a202b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123a202e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2031 push edx */
  push32((uint32_t)(EDX));
  /* 123a2032 call 0x123a2400 */
  push32(0x123a2037u); f_123a2400();
  /* 123a2037 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a203a jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a203f:;
  /* 123a203f mov eax, dword ptr [0x123c0850] */
  EAX = (r32((uint32_t)(0x123c0850)));
  /* 123a2044 mov dword ptr [0x123c0860], eax */
  w32((uint32_t)(0x123c0860), (EAX));
  /* 123a2049 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a204c push ecx */
  push32((uint32_t)(ECX));
  /* 123a204d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2050 push edx */
  push32((uint32_t)(EDX));
  /* 123a2051 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2056 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123a2059 push ecx */
  push32((uint32_t)(ECX));
  /* 123a205a call 0x123a2400 */
  push32(0x123a205fu); f_123a2400();
  /* 123a205f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2062 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a2067:;
  /* 123a2067 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a206a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a206e jg 0x123a208c */
  if ((!C.zf&&C.sf==C.of)) goto L_123a208c;
  /* 123a2070 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2073 push eax */
  push32((uint32_t)(EAX));
  /* 123a2074 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2077 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2078 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a207b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 123a2081 push eax */
  push32((uint32_t)(EAX));
  /* 123a2082 call 0x123a23b0 */
  push32(0x123a2087u); f_123a23b0();
  /* 123a2087 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a208a jmp 0x123a20a6 */
  goto L_123a20a6;
L_123a208c:;
  /* 123a208c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a208f push ecx */
  push32((uint32_t)(ECX));
  /* 123a2090 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2093 push edx */
  push32((uint32_t)(EDX));
  /* 123a2094 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2097 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 123a209d push ecx */
  push32((uint32_t)(ECX));
  /* 123a209e call 0x123a23b0 */
  push32(0x123a20a3u); f_123a23b0();
  /* 123a20a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a20a6:;
  /* 123a20a6 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a20ab:;
  /* 123a20ab mov edx, dword ptr [0x123c0850] */
  EDX = (r32((uint32_t)(0x123c0850)));
  /* 123a20b1 mov dword ptr [0x123c0860], edx */
  w32((uint32_t)(0x123c0860), (EDX));
  /* 123a20b7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a20ba push eax */
  push32((uint32_t)(EAX));
  /* 123a20bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a20be push ecx */
  push32((uint32_t)(ECX));
  /* 123a20bf push 2 */
  push32((uint32_t)(0x2u));
  /* 123a20c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a20c4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a20c6 push eax */
  push32((uint32_t)(EAX));
  /* 123a20c7 call 0x123a2400 */
  push32(0x123a20ccu); f_123a2400();
  /* 123a20cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a20cf jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a20d4:;
  /* 123a20d4 mov ecx, dword ptr [0x123c0850] */
  ECX = (r32((uint32_t)(0x123c0850)));
  /* 123a20da mov dword ptr [0x123c0860], ecx */
  w32((uint32_t)(0x123c0860), (ECX));
  /* 123a20e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a20e3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 123a20e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a20e9 jmp 0x123a213d */
  goto L_123a213d;
L_123a20eb:;
  /* 123a20eb mov ecx, dword ptr [0x123c0850] */
  ECX = (r32((uint32_t)(0x123c0850)));
  /* 123a20f1 mov dword ptr [0x123c0860], ecx */
  w32((uint32_t)(0x123c0860), (ECX));
  /* 123a20f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a20fa push edx */
  push32((uint32_t)(EDX));
  /* 123a20fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a20fe push eax */
  push32((uint32_t)(EAX));
  /* 123a20ff push 1 */
  push32((uint32_t)(0x1u));
  /* 123a2101 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2104 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123a2107 push edx */
  push32((uint32_t)(EDX));
  /* 123a2108 call 0x123a2400 */
  push32(0x123a210du); f_123a2400();
  /* 123a210d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2110 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a2115:;
  /* 123a2115 mov eax, dword ptr [0x123c0850] */
  EAX = (r32((uint32_t)(0x123c0850)));
  /* 123a211a mov dword ptr [0x123c0860], eax */
  w32((uint32_t)(0x123c0860), (EAX));
  /* 123a211f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2122 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2126 jne 0x123a2131 */
  if (!C.zf) goto L_123a2131;
  /* 123a2128 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 123a212f jmp 0x123a213d */
  goto L_123a213d;
L_123a2131:;
  /* 123a2131 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2134 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 123a2137 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a213a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123a213d:;
  /* 123a213d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2140 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123a2143 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2146 jge 0x123a2151 */
  if ((C.sf==C.of)) goto L_123a2151;
  /* 123a2148 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a214f jmp 0x123a217e */
  goto L_123a217e;
L_123a2151:;
  /* 123a2151 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2154 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123a2157 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a2158 mov ecx, 7 */
  ECX = (0x7u);
  /* 123a215d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a215f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a2162 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2165 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123a2168 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a2169 mov ecx, 7 */
  ECX = (0x7u);
  /* 123a216e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a2170 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2173 jl 0x123a217e */
  if ((C.sf!=C.of)) goto L_123a217e;
  /* 123a2175 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2178 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a217b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123a217e:;
  /* 123a217e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2181 push eax */
  push32((uint32_t)(EAX));
  /* 123a2182 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2185 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2186 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a218b push edx */
  push32((uint32_t)(EDX));
  /* 123a218c call 0x123a2400 */
  push32(0x123a2191u); f_123a2400();
  /* 123a2191 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2194 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a2199:;
  /* 123a2199 cmp dword ptr [0x123c0850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a21a0 je 0x123a21d0 */
  if (C.zf) goto L_123a21d0;
  /* 123a21a2 mov dword ptr [0x123c0850], 0 */
  w32((uint32_t)(0x123c0850), (0x0u));
  /* 123a21ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a21af push eax */
  push32((uint32_t)(EAX));
  /* 123a21b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a21b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a21b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a21b7 push edx */
  push32((uint32_t)(EDX));
  /* 123a21b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a21bb push eax */
  push32((uint32_t)(EAX));
  /* 123a21bc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a21bf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 123a21c5 push edx */
  push32((uint32_t)(EDX));
  /* 123a21c6 call 0x123a2560 */
  push32(0x123a21cbu); f_123a2560();
  /* 123a21cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a21ce jmp 0x123a21f2 */
  goto L_123a21f2;
L_123a21d0:;
  /* 123a21d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a21d3 push eax */
  push32((uint32_t)(EAX));
  /* 123a21d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a21d7 push ecx */
  push32((uint32_t)(ECX));
  /* 123a21d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a21db push edx */
  push32((uint32_t)(EDX));
  /* 123a21dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a21df push eax */
  push32((uint32_t)(EAX));
  /* 123a21e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a21e3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 123a21e9 push edx */
  push32((uint32_t)(EDX));
  /* 123a21ea call 0x123a2560 */
  push32(0x123a21efu); f_123a2560();
  /* 123a21ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a21f2:;
  /* 123a21f2 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a21f7:;
  /* 123a21f7 mov dword ptr [0x123c0850], 0 */
  w32((uint32_t)(0x123c0850), (0x0u));
  /* 123a2201 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2204 push eax */
  push32((uint32_t)(EAX));
  /* 123a2205 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2208 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2209 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a220c push edx */
  push32((uint32_t)(EDX));
  /* 123a220d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2210 push eax */
  push32((uint32_t)(EAX));
  /* 123a2211 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2214 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 123a221a push edx */
  push32((uint32_t)(EDX));
  /* 123a221b call 0x123a2560 */
  push32(0x123a2220u); f_123a2560();
  /* 123a2220 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2223 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a2228:;
  /* 123a2228 mov eax, dword ptr [0x123c0850] */
  EAX = (r32((uint32_t)(0x123c0850)));
  /* 123a222d mov dword ptr [0x123c0860], eax */
  w32((uint32_t)(0x123c0860), (EAX));
  /* 123a2232 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2235 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 123a2238 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a2239 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 123a223e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a2240 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a2243 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2246 push edx */
  push32((uint32_t)(EDX));
  /* 123a2247 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a224a push eax */
  push32((uint32_t)(EAX));
  /* 123a224b push 2 */
  push32((uint32_t)(0x2u));
  /* 123a224d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2250 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2251 call 0x123a2400 */
  push32(0x123a2256u); f_123a2400();
  /* 123a2256 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2259 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a225e:;
  /* 123a225e mov edx, dword ptr [0x123c0850] */
  EDX = (r32((uint32_t)(0x123c0850)));
  /* 123a2264 mov dword ptr [0x123c0860], edx */
  w32((uint32_t)(0x123c0860), (EDX));
  /* 123a226a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a226d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 123a2270 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a2271 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 123a2276 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a2278 mov ecx, eax */
  ECX = (EAX);
  /* 123a227a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a227d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a2280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2283 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123a2286 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a2287 mov esi, 0x64 */
  ESI = (0x64u);
  /* 123a228c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a228e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2290 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a2293 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2296 push eax */
  push32((uint32_t)(EAX));
  /* 123a2297 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a229a push ecx */
  push32((uint32_t)(ECX));
  /* 123a229b push 4 */
  push32((uint32_t)(0x4u));
  /* 123a229d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a22a0 push edx */
  push32((uint32_t)(EDX));
  /* 123a22a1 call 0x123a2400 */
  push32(0x123a22a6u); f_123a2400();
  /* 123a22a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a22a9 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a22ab:;
  /* 123a22ab call 0x123a33c0 */
  push32(0x123a22b0u); f_123a33c0();
  /* 123a22b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a22b3 push eax */
  push32((uint32_t)(EAX));
  /* 123a22b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a22b7 push ecx */
  push32((uint32_t)(ECX));
  /* 123a22b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a22bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a22bd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a22c1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 123a22c4 mov ecx, dword ptr [eax*4 + 0x123bfe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123bfe1c)));
  /* 123a22cb push ecx */
  push32((uint32_t)(ECX));
  /* 123a22cc call 0x123a23b0 */
  push32(0x123a22d1u); f_123a23b0();
  /* 123a22d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a22d4 jmp 0x123a22f8 */
  goto L_123a22f8;
L_123a22d6:;
  /* 123a22d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a22d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a22db mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 123a22de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a22e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a22e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a22e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a22e9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a22eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a22ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a22f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a22f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a22f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123a22f8:;
  /* 123a22f8 pop esi */
  ESI = (pop32());
  /* 123a22f9 mov esp, ebp */
  ESP = (EBP);
  /* 123a22fb pop ebp */
  EBP = (pop32());
  /* 123a22fc ret  */
  ESPCHK(0x123a1d90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x123a23b0 (72 bytes, 30 insns) */
void f_123a23b0(void) {
  FTRACE(0x123a23b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a23b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a23b1 mov ebp, esp */
  EBP = (ESP);
L_123a23b3:;
  /* 123a23b3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a23b6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a23b9 je 0x123a23f6 */
  if (C.zf) goto L_123a23f6;
  /* 123a23bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a23be movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a23c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a23c3 je 0x123a23f6 */
  if (C.zf) goto L_123a23f6;
  /* 123a23c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a23c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a23ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a23cd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a23cf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123a23d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a23d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a23d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a23d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a23dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a23de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a23e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a23e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123a23e7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a23ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a23ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a23ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a23f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123a23f4 jmp 0x123a23b3 */
  goto L_123a23b3;
L_123a23f6:;
  /* 123a23f6 pop ebp */
  EBP = (pop32());
  /* 123a23f7 ret  */
  ESPCHK(0x123a23b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x123a2400 (173 bytes, 64 insns) */
void f_123a2400(void) {
  FTRACE(0x123a2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a2400 push ebp */
  push32((uint32_t)(EBP));
  /* 123a2401 mov ebp, esp */
  EBP = (ESP);
  /* 123a2403 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a240b cmp dword ptr [0x123c0860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2412 je 0x123a242a */
  if (C.zf) goto L_123a242a;
  /* 123a2414 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2417 push eax */
  push32((uint32_t)(EAX));
  /* 123a2418 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a241b push ecx */
  push32((uint32_t)(ECX));
  /* 123a241c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a241f push edx */
  push32((uint32_t)(EDX));
  /* 123a2420 call 0x123a24b0 */
  push32(0x123a2425u); f_123a24b0();
  /* 123a2425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2428 jmp 0x123a24a9 */
  goto L_123a24a9;
L_123a242a:;
  /* 123a242a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a242d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2430 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2432 jae 0x123a24a0 */
  if (!C.cf) goto L_123a24a0;
  /* 123a2434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2437 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a243a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 123a243d jmp 0x123a2448 */
  goto L_123a2448;
L_123a243f:;
  /* 123a243f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2442 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2445 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_123a2448:;
  /* 123a2448 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a244b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a244e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a2450 je 0x123a2484 */
  if (C.zf) goto L_123a2484;
  /* 123a2452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2455 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a2456 mov ecx, 0xa */
  ECX = (0xau);
  /* 123a245b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a245d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2460 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2463 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a2465 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2468 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 123a246b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a246e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a246f mov ecx, 0xa */
  ECX = (0xau);
  /* 123a2474 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a2476 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a2479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a247c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a247f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a2482 jmp 0x123a243f */
  goto L_123a243f;
L_123a2484:;
  /* 123a2484 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2487 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a2489 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a248c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a248f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123a2491 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2494 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a2496 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2499 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a249c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123a249e jmp 0x123a24a9 */
  goto L_123a24a9;
L_123a24a0:;
  /* 123a24a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a24a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123a24a9:;
  /* 123a24a9 mov esp, ebp */
  ESP = (EBP);
  /* 123a24ab pop ebp */
  EBP = (pop32());
  /* 123a24ac ret  */
  ESPCHK(0x123a2400u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x123a24b0 (172 bytes, 65 insns) */
void f_123a24b0(void) {
  FTRACE(0x123a24b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a24b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a24b1 mov ebp, esp */
  EBP = (ESP);
  /* 123a24b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a24b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a24b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a24bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a24be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a24c1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a24c4 jbe 0x123a250b */
  if ((C.cf||C.zf)) goto L_123a250b;
L_123a24c6:;
  /* 123a24c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a24c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a24ca mov ecx, 0xa */
  ECX = (0xau);
  /* 123a24cf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a24d1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a24d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a24d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123a24d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a24dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a24df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a24e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a24e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a24e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a24ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a24ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123a24ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a24f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a24f3 mov ecx, 0xa */
  ECX = (0xau);
  /* 123a24f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a24fa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a24fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2501 jle 0x123a250b */
  if ((C.zf||C.sf!=C.of)) goto L_123a250b;
  /* 123a2503 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2506 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2509 ja 0x123a24c6 */
  if ((!C.cf&&!C.zf)) goto L_123a24c6;
L_123a250b:;
  /* 123a250b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a250e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a2510 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a2513 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2519 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123a251b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a251e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2521 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123a2524:;
  /* 123a2524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2527 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a2529 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 123a252c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a252f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a2532 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a2534 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123a2536 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2539 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a253c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a253f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a2542 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 123a2545 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 123a2547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a254a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a254d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a2550 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a2553 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2556 jb 0x123a2524 */
  if (C.cf) goto L_123a2524;
  /* 123a2558 mov esp, ebp */
  ESP = (EBP);
  /* 123a255a pop ebp */
  EBP = (pop32());
  /* 123a255b ret  */
  ESPCHK(0x123a24b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x123a2560 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_123a2560(void) {
  FTRACE(0x123a2560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a2560 push ebp */
  push32((uint32_t)(EBP));
  /* 123a2561 mov ebp, esp */
  EBP = (ESP);
  /* 123a2563 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_123a2566:;
  /* 123a2566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2569 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a256c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a256e je 0x123a29dc */
  if (C.zf) goto L_123a29dc;
  /* 123a2574 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2577 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a257a je 0x123a29dc */
  if (C.zf) goto L_123a29dc;
  /* 123a2580 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 123a2584 mov dword ptr [0x123c0860], 0 */
  w32((uint32_t)(0x123c0860), (0x0u));
  /* 123a258e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123a2595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2598 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a259b jmp 0x123a25a6 */
  goto L_123a25a6;
L_123a259d:;
  /* 123a259d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a25a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a25a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123a25a6:;
  /* 123a25a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a25a9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a25ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a25af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a25b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a25b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a25b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a25bb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a25bd jne 0x123a25c1 */
  if (!C.zf) goto L_123a25c1;
  /* 123a25bf jmp 0x123a259d */
  goto L_123a259d;
L_123a25c1:;
  /* 123a25c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a25c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a25c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a25ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a25cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a25d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a25d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a25d6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a25d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a25dc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a25e0 ja 0x123a2930 */
  if ((!C.cf&&!C.zf)) goto L_123a2930;
  /* 123a25e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a25e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a25eb mov al, byte ptr [ecx + 0x123a2a0c] */
  AL = (r8((uint32_t)(ECX + 0x123a2a0c)));
  /* 123a25f1 jmp dword ptr [eax*4 + 0x123a29e0] */
  switch (EAX) {
    case 0: goto L_123a284f;
    case 1: goto L_123a2733;
    case 2: goto L_123a26be;
    case 3: goto L_123a25f8;
    case 4: goto L_123a2636;
    case 5: goto L_123a2697;
    case 6: goto L_123a26e5;
    case 7: goto L_123a270c;
    case 8: goto L_123a277a;
    case 9: goto L_123a2674;
    case 10: goto L_123a2930;
    default: x86_unimpl("switch@0x123a25f1 out of table"); return;
  }
L_123a25f8:;
  /* 123a25f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a25fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123a25fe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a2601 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2604 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123a2607 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a260b ja 0x123a2631 */
  if ((!C.cf&&!C.zf)) goto L_123a2631;
  /* 123a260d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a2610 jmp dword ptr [ecx*4 + 0x123a2a5f] */
  switch (ECX) {
    case 0: goto L_123a2617;
    case 1: goto L_123a2621;
    case 2: goto L_123a2627;
    case 3: goto L_123a262d;
    case 4: goto L_123a2655;
    case 5: goto L_123a265f;
    case 6: goto L_123a2665;
    case 7: goto L_123a266b;
    default: x86_unimpl("switch@0x123a2610 out of table"); return;
  }
L_123a2617:;
  /* 123a2617 mov dword ptr [0x123c0860], 1 */
  w32((uint32_t)(0x123c0860), (0x1u));
L_123a2621:;
  /* 123a2621 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 123a2625 jmp 0x123a2631 */
  goto L_123a2631;
L_123a2627:;
  /* 123a2627 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 123a262b jmp 0x123a2631 */
  goto L_123a2631;
L_123a262d:;
  /* 123a262d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_123a2631:;
  /* 123a2631 jmp 0x123a2930 */
  goto L_123a2930;
L_123a2636:;
  /* 123a2636 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2639 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123a263c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a263f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2642 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123a2645 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2649 ja 0x123a266f */
  if ((!C.cf&&!C.zf)) goto L_123a266f;
  /* 123a264b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a264e jmp dword ptr [ecx*4 + 0x123a2a6f] */
  switch (ECX) {
    case 0: goto L_123a2655;
    case 1: goto L_123a265f;
    case 2: goto L_123a2665;
    case 3: goto L_123a266b;
    default: x86_unimpl("switch@0x123a264e out of table"); return;
  }
L_123a2655:;
  /* 123a2655 mov dword ptr [0x123c0860], 1 */
  w32((uint32_t)(0x123c0860), (0x1u));
L_123a265f:;
  /* 123a265f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 123a2663 jmp 0x123a266f */
  goto L_123a266f;
L_123a2665:;
  /* 123a2665 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 123a2669 jmp 0x123a266f */
  goto L_123a266f;
L_123a266b:;
  /* 123a266b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_123a266f:;
  /* 123a266f jmp 0x123a2930 */
  goto L_123a2930;
L_123a2674:;
  /* 123a2674 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2677 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 123a267a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a267e je 0x123a2688 */
  if (C.zf) goto L_123a2688;
  /* 123a2680 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2684 je 0x123a268e */
  if (C.zf) goto L_123a268e;
  /* 123a2686 jmp 0x123a2692 */
  goto L_123a2692;
L_123a2688:;
  /* 123a2688 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 123a268c jmp 0x123a2692 */
  goto L_123a2692;
L_123a268e:;
  /* 123a268e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_123a2692:;
  /* 123a2692 jmp 0x123a2930 */
  goto L_123a2930;
L_123a2697:;
  /* 123a2697 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a269a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123a269d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a26a1 je 0x123a26ab */
  if (C.zf) goto L_123a26ab;
  /* 123a26a3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a26a7 je 0x123a26b5 */
  if (C.zf) goto L_123a26b5;
  /* 123a26a9 jmp 0x123a26b9 */
  goto L_123a26b9;
L_123a26ab:;
  /* 123a26ab mov dword ptr [0x123c0860], 1 */
  w32((uint32_t)(0x123c0860), (0x1u));
L_123a26b5:;
  /* 123a26b5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_123a26b9:;
  /* 123a26b9 jmp 0x123a2930 */
  goto L_123a2930;
L_123a26be:;
  /* 123a26be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a26c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123a26c4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a26c8 je 0x123a26d2 */
  if (C.zf) goto L_123a26d2;
  /* 123a26ca cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a26ce je 0x123a26dc */
  if (C.zf) goto L_123a26dc;
  /* 123a26d0 jmp 0x123a26e0 */
  goto L_123a26e0;
L_123a26d2:;
  /* 123a26d2 mov dword ptr [0x123c0860], 1 */
  w32((uint32_t)(0x123c0860), (0x1u));
L_123a26dc:;
  /* 123a26dc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_123a26e0:;
  /* 123a26e0 jmp 0x123a2930 */
  goto L_123a2930;
L_123a26e5:;
  /* 123a26e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a26e8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 123a26eb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a26ef je 0x123a26f9 */
  if (C.zf) goto L_123a26f9;
  /* 123a26f1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a26f5 je 0x123a2703 */
  if (C.zf) goto L_123a2703;
  /* 123a26f7 jmp 0x123a2707 */
  goto L_123a2707;
L_123a26f9:;
  /* 123a26f9 mov dword ptr [0x123c0860], 1 */
  w32((uint32_t)(0x123c0860), (0x1u));
L_123a2703:;
  /* 123a2703 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_123a2707:;
  /* 123a2707 jmp 0x123a2930 */
  goto L_123a2930;
L_123a270c:;
  /* 123a270c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a270f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 123a2712 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2716 je 0x123a2720 */
  if (C.zf) goto L_123a2720;
  /* 123a2718 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a271c je 0x123a272a */
  if (C.zf) goto L_123a272a;
  /* 123a271e jmp 0x123a272e */
  goto L_123a272e;
L_123a2720:;
  /* 123a2720 mov dword ptr [0x123c0860], 1 */
  w32((uint32_t)(0x123c0860), (0x1u));
L_123a272a:;
  /* 123a272a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_123a272e:;
  /* 123a272e jmp 0x123a2930 */
  goto L_123a2930;
L_123a2733:;
  /* 123a2733 push 0x123bca34 */
  push32((uint32_t)(0x123bca34u));
  /* 123a2738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a273b push ecx */
  push32((uint32_t)(ECX));
  /* 123a273c call 0x123a2f90 */
  push32(0x123a2741u); f_123a2f90();
  /* 123a2741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a2746 jne 0x123a2753 */
  if (!C.zf) goto L_123a2753;
  /* 123a2748 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a274b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a274e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a2751 jmp 0x123a2771 */
  goto L_123a2771;
L_123a2753:;
  /* 123a2753 push 0x123bca30 */
  push32((uint32_t)(0x123bca30u));
  /* 123a2758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a275b push eax */
  push32((uint32_t)(EAX));
  /* 123a275c call 0x123a2f90 */
  push32(0x123a2761u); f_123a2f90();
  /* 123a2761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a2766 jne 0x123a2771 */
  if (!C.zf) goto L_123a2771;
  /* 123a2768 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a276b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a276e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123a2771:;
  /* 123a2771 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 123a2775 jmp 0x123a2930 */
  goto L_123a2930;
L_123a277a:;
  /* 123a277a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a277d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2781 jg 0x123a2791 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a2791;
  /* 123a2783 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2786 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 123a278c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123a278f jmp 0x123a279d */
  goto L_123a279d;
L_123a2791:;
  /* 123a2791 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2794 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 123a279a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123a279d:;
  /* 123a279d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a27a1 jle 0x123a2844 */
  if ((C.zf||C.sf!=C.of)) goto L_123a2844;
  /* 123a27a7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a27aa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a27ad jbe 0x123a2844 */
  if ((C.cf||C.zf)) goto L_123a2844;
  /* 123a27b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a27b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a27b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a27ba mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a27c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a27c2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a27c6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123a27cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a27ce je 0x123a2807 */
  if (C.zf) goto L_123a2807;
  /* 123a27d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a27d3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a27d6 jbe 0x123a2807 */
  if ((C.cf||C.zf)) goto L_123a2807;
  /* 123a27d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a27db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a27dd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a27e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a27e2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123a27e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a27e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a27e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a27ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a27ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123a27f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a27f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a27f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123a27fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a27fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a27ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2802 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2805 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123a2807:;
  /* 123a2807 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a280a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a280c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a280f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a2811 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123a2813 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2816 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a2818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a281b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a281e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a2820 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a2823 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2826 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123a2829 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a282c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a282e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2831 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2834 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123a2836 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2839 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a283c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123a283f jmp 0x123a279d */
  goto L_123a279d;
L_123a2844:;
  /* 123a2844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2847 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a284a jmp 0x123a2566 */
  goto L_123a2566;
L_123a284f:;
  /* 123a284f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2852 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123a2855 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a2857 je 0x123a2922 */
  if (C.zf) goto L_123a2922;
  /* 123a285d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2860 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2863 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_123a2866:;
  /* 123a2866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a286c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a286e je 0x123a2920 */
  if (C.zf) goto L_123a2920;
  /* 123a2874 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2877 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a287a je 0x123a2920 */
  if (C.zf) goto L_123a2920;
  /* 123a2880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2883 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a2886 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2889 jne 0x123a2899 */
  if (!C.zf) goto L_123a2899;
  /* 123a288b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a288e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2891 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123a2894 jmp 0x123a2920 */
  goto L_123a2920;
L_123a2899:;
  /* 123a2899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a289c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a289e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a28a0 mov edx, dword ptr [0x123bec98] */
  EDX = (r32((uint32_t)(0x123bec98)));
  /* 123a28a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a28a8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 123a28ac and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 123a28b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a28b3 je 0x123a28ec */
  if (C.zf) goto L_123a28ec;
  /* 123a28b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a28b8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a28bb jbe 0x123a28ec */
  if ((C.cf||C.zf)) goto L_123a28ec;
  /* 123a28bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a28c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a28c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a28c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a28c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123a28c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a28cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a28ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a28d1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a28d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123a28d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a28d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a28dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a28df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a28e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a28e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a28e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a28ea mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123a28ec:;
  /* 123a28ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a28ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a28f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a28f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a28f6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123a28f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a28fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a28fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2900 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2903 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123a2905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2908 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a290b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123a290e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2911 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a2913 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2916 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2919 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123a291b jmp 0x123a2866 */
  goto L_123a2866;
L_123a2920:;
  /* 123a2920 jmp 0x123a292b */
  goto L_123a292b;
L_123a2922:;
  /* 123a2922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2925 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2928 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123a292b:;
  /* 123a292b jmp 0x123a2566 */
  goto L_123a2566;
L_123a2930:;
  /* 123a2930 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a2934 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a2936 je 0x123a295c */
  if (C.zf) goto L_123a295c;
  /* 123a2938 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a293b push edx */
  push32((uint32_t)(EDX));
  /* 123a293c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a293f push eax */
  push32((uint32_t)(EAX));
  /* 123a2940 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2943 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2944 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2947 push edx */
  push32((uint32_t)(EDX));
  /* 123a2948 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 123a294b push eax */
  push32((uint32_t)(EAX));
  /* 123a294c call 0x123a1d90 */
  push32(0x123a2951u); f_123a1d90();
  /* 123a2951 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2954 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a2957 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123a295a jmp 0x123a29d7 */
  goto L_123a29d7;
L_123a295c:;
  /* 123a295c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a295f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2961 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a2963 mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a2969 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a296b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a296f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 123a2975 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a2977 je 0x123a29a8 */
  if (C.zf) goto L_123a29a8;
  /* 123a2979 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a297c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a297e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2981 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a2983 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123a2985 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2988 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a298a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a298d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2990 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a2992 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2998 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123a299b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a299e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a29a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a29a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a29a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123a29a8:;
  /* 123a29a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a29ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a29ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a29b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a29b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123a29b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a29b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a29b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a29bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a29bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123a29c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a29c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a29c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a29ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a29cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a29cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a29d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a29d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123a29d7:;
  /* 123a29d7 jmp 0x123a2566 */
  goto L_123a2566;
L_123a29dc:;
  /* 123a29dc mov esp, ebp */
  ESP = (EBP);
  /* 123a29de pop ebp */
  EBP = (pop32());
  /* 123a29df ret  */
  ESPCHK(0x123a2560u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x123a2a80 (650 bytes, 178 insns) */
void f_123a2a80(void) {
  FTRACE(0x123a2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 123a2a81 mov ebp, esp */
  EBP = (ESP);
  /* 123a2a83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a2a89 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2a8d jne 0x123a2be9 */
  if (!C.zf) goto L_123a2be9;
  /* 123a2a93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2a96 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 123a2a9c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 123a2aa2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a2aa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a2aac mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 123a2ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2ab8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 123a2abe push edx */
  push32((uint32_t)(EDX));
  /* 123a2abf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2ac2 push eax */
  push32((uint32_t)(EAX));
  /* 123a2ac3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2ac7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2aca push edx */
  push32((uint32_t)(EDX));
  /* 123a2acb call 0x123a3ea0 */
  push32(0x123a2ad0u); f_123a3ea0();
  /* 123a2ad0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2ad3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a2ad6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2ada jne 0x123a2b6f */
  if (!C.zf) goto L_123a2b6f;
  /* 123a2ae0 call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x123a2ae6u);
  /* 123a2ae6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2ae9 je 0x123a2af0 */
  if (C.zf) goto L_123a2af0;
  /* 123a2aeb jmp 0x123a2bcd */
  goto L_123a2bcd;
L_123a2af0:;
  /* 123a2af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2af6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2af9 push eax */
  push32((uint32_t)(EAX));
  /* 123a2afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2afd push ecx */
  push32((uint32_t)(ECX));
  /* 123a2afe call 0x123a3ea0 */
  push32(0x123a2b03u); f_123a3ea0();
  /* 123a2b03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2b06 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 123a2b0c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2b13 jne 0x123a2b1a */
  if (!C.zf) goto L_123a2b1a;
  /* 123a2b15 jmp 0x123a2bcd */
  goto L_123a2bcd;
L_123a2b1a:;
  /* 123a2b1a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 123a2b1c push 0x123bca3c */
  push32((uint32_t)(0x123bca3cu));
  /* 123a2b21 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2b23 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 123a2b29 push edx */
  push32((uint32_t)(EDX));
  /* 123a2b2a call 0x123948c0 */
  push32(0x123a2b2fu); f_123948c0();
  /* 123a2b2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2b32 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a2b35 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2b39 jne 0x123a2b40 */
  if (!C.zf) goto L_123a2b40;
  /* 123a2b3b jmp 0x123a2bcd */
  goto L_123a2bcd;
L_123a2b40:;
  /* 123a2b40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123a2b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2b49 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 123a2b4f push eax */
  push32((uint32_t)(EAX));
  /* 123a2b50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2b53 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2b54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2b57 push edx */
  push32((uint32_t)(EDX));
  /* 123a2b58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2b5b push eax */
  push32((uint32_t)(EAX));
  /* 123a2b5c call 0x123a3ea0 */
  push32(0x123a2b61u); f_123a3ea0();
  /* 123a2b61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2b64 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a2b67 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2b6b jne 0x123a2b6f */
  if (!C.zf) goto L_123a2b6f;
  /* 123a2b6d jmp 0x123a2bcd */
  goto L_123a2bcd;
L_123a2b6f:;
  /* 123a2b6f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 123a2b71 push 0x123bca3c */
  push32((uint32_t)(0x123bca3cu));
  /* 123a2b76 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2b78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a2b7b push ecx */
  push32((uint32_t)(ECX));
  /* 123a2b7c call 0x123948c0 */
  push32(0x123a2b81u); f_123948c0();
  /* 123a2b81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2b84 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 123a2b8a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123a2b8c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123a2b92 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2b95 jne 0x123a2b99 */
  if (!C.zf) goto L_123a2b99;
  /* 123a2b97 jmp 0x123a2bcd */
  goto L_123a2bcd;
L_123a2b99:;
  /* 123a2b99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a2b9c push ecx */
  push32((uint32_t)(ECX));
  /* 123a2b9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2ba0 push edx */
  push32((uint32_t)(EDX));
  /* 123a2ba1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 123a2ba7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a2ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2baa call 0x123980e0 */
  push32(0x123a2bafu); f_123980e0();
  /* 123a2baf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2bb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2bb6 je 0x123a2bc6 */
  if (C.zf) goto L_123a2bc6;
  /* 123a2bb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2bba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2bbd push edx */
  push32((uint32_t)(EDX));
  /* 123a2bbe call 0x12395350 */
  push32(0x123a2bc3u); f_12395350();
  /* 123a2bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a2bc6:;
  /* 123a2bc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2bc8 jmp 0x123a2d06 */
  goto L_123a2d06;
L_123a2bcd:;
  /* 123a2bcd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2bd1 je 0x123a2be1 */
  if (C.zf) goto L_123a2be1;
  /* 123a2bd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a2bd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a2bd8 push eax */
  push32((uint32_t)(EAX));
  /* 123a2bd9 call 0x12395350 */
  push32(0x123a2bdeu); f_12395350();
  /* 123a2bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a2be1:;
  /* 123a2be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a2be4 jmp 0x123a2d06 */
  goto L_123a2d06;
L_123a2be9:;
  /* 123a2be9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2bed jne 0x123a2d03 */
  if (!C.zf) goto L_123a2d03;
  /* 123a2bf3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 123a2bfd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2c00 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 123a2c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2c08 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 123a2c0e push edx */
  push32((uint32_t)(EDX));
  /* 123a2c0f push 0x123c0778 */
  push32((uint32_t)(0x123c0778u));
  /* 123a2c14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2c17 push eax */
  push32((uint32_t)(EAX));
  /* 123a2c18 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2c1b push ecx */
  push32((uint32_t)(ECX));
  /* 123a2c1c call 0x123a3d00 */
  push32(0x123a2c21u); f_123a3d00();
  /* 123a2c21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a2c26 jne 0x123a2c30 */
  if (!C.zf) goto L_123a2c30;
  /* 123a2c28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a2c2b jmp 0x123a2d06 */
  goto L_123a2d06;
L_123a2c30:;
  /* 123a2c30 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123a2c36 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123a2c39 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 123a2c43 jmp 0x123a2c54 */
  goto L_123a2c54;
L_123a2c45:;
  /* 123a2c45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123a2c4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2c4e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_123a2c54:;
  /* 123a2c54 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2c5b jge 0x123a2cff */
  if ((C.sf==C.of)) goto L_123a2cff;
  /* 123a2c61 cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2c68 jle 0x123a2c9b */
  if ((C.zf||C.sf!=C.of)) goto L_123a2c9b;
  /* 123a2c6a push 4 */
  push32((uint32_t)(0x4u));
  /* 123a2c6c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123a2c72 mov dl, byte ptr [ecx*2 + 0x123c0778] */
  DL = (r8((uint32_t)(ECX*2 + 0x123c0778)));
  /* 123a2c79 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 123a2c7f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123a2c85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a2c8a push eax */
  push32((uint32_t)(EAX));
  /* 123a2c8b call 0x1239a8d0 */
  push32(0x123a2c90u); f_1239a8d0();
  /* 123a2c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2c93 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 123a2c99 jmp 0x123a2cce */
  goto L_123a2cce;
L_123a2c9b:;
  /* 123a2c9b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 123a2ca1 mov dl, byte ptr [ecx*2 + 0x123c0778] */
  DL = (r8((uint32_t)(ECX*2 + 0x123c0778)));
  /* 123a2ca8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 123a2cae mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123a2cb4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a2cb9 mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a2cbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a2cc1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a2cc5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123a2cc8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_123a2cce:;
  /* 123a2cce cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2cd5 je 0x123a2cf8 */
  if (C.zf) goto L_123a2cf8;
  /* 123a2cd7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123a2cdd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a2ce0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a2ce3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 123a2cea lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 123a2cee mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 123a2cf4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123a2cf6 jmp 0x123a2cfa */
  goto L_123a2cfa;
L_123a2cf8:;
  /* 123a2cf8 jmp 0x123a2cff */
  goto L_123a2cff;
L_123a2cfa:;
  /* 123a2cfa jmp 0x123a2c45 */
  goto L_123a2c45;
L_123a2cff:;
  /* 123a2cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2d01 jmp 0x123a2d06 */
  goto L_123a2d06;
L_123a2d03:;
  /* 123a2d03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123a2d06:;
  /* 123a2d06 mov esp, ebp */
  ESP = (EBP);
  /* 123a2d08 pop ebp */
  EBP = (pop32());
  /* 123a2d09 ret  */
  ESPCHK(0x123a2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d10 @ 0x123a2d10 (10 bytes, 5 insns) */
void f_123a2d10(void) {
  FTRACE(0x123a2d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a2d10 push ebp */
  push32((uint32_t)(EBP));
  /* 123a2d11 mov ebp, esp */
  EBP = (ESP);
  /* 123a2d13 mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 123a2d18 pop ebp */
  EBP = (pop32());
  /* 123a2d19 ret  */
  ESPCHK(0x123a2d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x123a2d20 (575 bytes, 196 insns) */
void f_123a2d20(void) {
  FTRACE(0x123a2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a2d20 push ebp */
  push32((uint32_t)(EBP));
  /* 123a2d21 mov ebp, esp */
  EBP = (ESP);
  /* 123a2d23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a2d25 push 0x123bca48 */
  push32((uint32_t)(0x123bca48u));
  /* 123a2d2a push 0x1239d9c8 */
  push32((uint32_t)(0x1239d9c8u));
  /* 123a2d2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123a2d35 push eax */
  push32((uint32_t)(EAX));
  /* 123a2d36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123a2d3d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2d40 push ebx */
  push32((uint32_t)(EBX));
  /* 123a2d41 push esi */
  push32((uint32_t)(ESI));
  /* 123a2d42 push edi */
  push32((uint32_t)(EDI));
  /* 123a2d43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a2d46 cmp dword ptr [0x123c0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2d4d jne 0x123a2d9e */
  if (!C.zf) goto L_123a2d9e;
  /* 123a2d4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 123a2d52 push eax */
  push32((uint32_t)(EAX));
  /* 123a2d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a2d55 push 0x123bc17c */
  push32((uint32_t)(0x123bc17cu));
  /* 123a2d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 123a2d5c call dword ptr [0x123c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b4))), 0x123a2d62u);
  /* 123a2d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a2d64 je 0x123a2d72 */
  if (C.zf) goto L_123a2d72;
  /* 123a2d66 mov dword ptr [0x123c0784], 1 */
  w32((uint32_t)(0x123c0784), (0x1u));
  /* 123a2d70 jmp 0x123a2d9e */
  goto L_123a2d9e;
L_123a2d72:;
  /* 123a2d72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 123a2d75 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2d76 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a2d78 push 0x123bc178 */
  push32((uint32_t)(0x123bc178u));
  /* 123a2d7d push 1 */
  push32((uint32_t)(0x1u));
  /* 123a2d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2d81 call dword ptr [0x123c32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32c4))), 0x123a2d87u);
  /* 123a2d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a2d89 je 0x123a2d97 */
  if (C.zf) goto L_123a2d97;
  /* 123a2d8b mov dword ptr [0x123c0784], 2 */
  w32((uint32_t)(0x123c0784), (0x2u));
  /* 123a2d95 jmp 0x123a2d9e */
  goto L_123a2d9e;
L_123a2d97:;
  /* 123a2d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2d99 jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2d9e:;
  /* 123a2d9e cmp dword ptr [0x123c0784], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c0784))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2da5 jne 0x123a2dc2 */
  if (!C.zf) goto L_123a2dc2;
  /* 123a2da7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2daa push edx */
  push32((uint32_t)(EDX));
  /* 123a2dab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2dae push eax */
  push32((uint32_t)(EAX));
  /* 123a2daf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2db2 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2db3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2db6 push edx */
  push32((uint32_t)(EDX));
  /* 123a2db7 call dword ptr [0x123c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b4))), 0x123a2dbdu);
  /* 123a2dbd jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2dc2:;
  /* 123a2dc2 cmp dword ptr [0x123c0784], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c0784))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2dc9 jne 0x123a2f77 */
  if (!C.zf) goto L_123a2f77;
  /* 123a2dcf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2dd3 jne 0x123a2ddd */
  if (!C.zf) goto L_123a2ddd;
  /* 123a2dd5 mov eax, dword ptr [0x123c06f8] */
  EAX = (r32((uint32_t)(0x123c06f8)));
  /* 123a2dda mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_123a2ddd:;
  /* 123a2ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2de5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2de8 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2de9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2dec push edx */
  push32((uint32_t)(EDX));
  /* 123a2ded push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123a2df2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2df5 push eax */
  push32((uint32_t)(EAX));
  /* 123a2df6 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a2dfcu);
  /* 123a2dfc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123a2dff cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2e03 jne 0x123a2e0c */
  if (!C.zf) goto L_123a2e0c;
  /* 123a2e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2e07 jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2e0c:;
  /* 123a2e0c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a2e13 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a2e16 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2e19 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123a2e1b call 0x12397a60 */
  push32(0x123a2e20u); f_12397a60();
  /* 123a2e20 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 123a2e23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a2e26 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a2e29 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123a2e2c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a2e2f push edx */
  push32((uint32_t)(EDX));
  /* 123a2e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2e32 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a2e35 push eax */
  push32((uint32_t)(EAX));
  /* 123a2e36 call 0x12398630 */
  push32(0x123a2e3bu); f_12398630();
  /* 123a2e3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2e3e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123a2e45 jmp 0x123a2e5e */
  goto L_123a2e5e;
  /* 123a2e47 mov eax, 1 */
  EAX = (0x1u);
  /* 123a2e4c ret  */
  ESPCHK(0x123a2d20u, _esp0);
  ESP += 4; return;
  /* 123a2e4d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123a2e50 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 123a2e57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123a2e5e:;
  /* 123a2e5e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2e62 jne 0x123a2e6b */
  if (!C.zf) goto L_123a2e6b;
  /* 123a2e64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2e66 jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2e6b:;
  /* 123a2e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2e6f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a2e72 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2e73 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a2e76 push edx */
  push32((uint32_t)(EDX));
  /* 123a2e77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2e7a push eax */
  push32((uint32_t)(EAX));
  /* 123a2e7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2e7e push ecx */
  push32((uint32_t)(ECX));
  /* 123a2e7f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123a2e84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a2e87 push edx */
  push32((uint32_t)(EDX));
  /* 123a2e88 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a2e8eu);
  /* 123a2e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a2e90 jne 0x123a2e99 */
  if (!C.zf) goto L_123a2e99;
  /* 123a2e92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2e94 jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2e99:;
  /* 123a2e99 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123a2ea0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a2ea3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 123a2ea7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2eaa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123a2eac call 0x12397a60 */
  push32(0x123a2eb1u); f_12397a60();
  /* 123a2eb1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 123a2eb4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a2eb7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 123a2eba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123a2ebd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123a2ec4 jmp 0x123a2edd */
  goto L_123a2edd;
  /* 123a2ec6 mov eax, 1 */
  EAX = (0x1u);
  /* 123a2ecb ret  */
  ESPCHK(0x123a2d20u, _esp0);
  ESP += 4; return;
  /* 123a2ecc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123a2ecf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123a2ed6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123a2edd:;
  /* 123a2edd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2ee1 jne 0x123a2eea */
  if (!C.zf) goto L_123a2eea;
  /* 123a2ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2ee5 jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2eea:;
  /* 123a2eea cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2eee jne 0x123a2ef9 */
  if (!C.zf) goto L_123a2ef9;
  /* 123a2ef0 mov edx, dword ptr [0x123c06e8] */
  EDX = (r32((uint32_t)(0x123c06e8)));
  /* 123a2ef6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_123a2ef9:;
  /* 123a2ef9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2efc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a2eff mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 123a2f05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2f08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a2f0b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 123a2f12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a2f15 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2f16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a2f19 push edx */
  push32((uint32_t)(EDX));
  /* 123a2f1a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a2f1d push eax */
  push32((uint32_t)(EAX));
  /* 123a2f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2f21 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2f22 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a2f25 push edx */
  push32((uint32_t)(EDX));
  /* 123a2f26 call dword ptr [0x123c32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32c4))), 0x123a2f2cu);
  /* 123a2f2c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123a2f2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a2f35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a2f37 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 123a2f3c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2f42 je 0x123a2f58 */
  if (C.zf) goto L_123a2f58;
  /* 123a2f44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2f47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a2f4a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a2f4c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a2f50 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2f56 je 0x123a2f5c */
  if (C.zf) goto L_123a2f5c;
L_123a2f58:;
  /* 123a2f58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a2f5a jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2f5c:;
  /* 123a2f5c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a2f5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a2f61 push eax */
  push32((uint32_t)(EAX));
  /* 123a2f62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a2f65 push ecx */
  push32((uint32_t)(ECX));
  /* 123a2f66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a2f69 push edx */
  push32((uint32_t)(EDX));
  /* 123a2f6a call 0x1239c7b0 */
  push32(0x123a2f6fu); f_1239c7b0();
  /* 123a2f6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a2f72 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a2f75 jmp 0x123a2f79 */
  goto L_123a2f79;
L_123a2f77:;
  /* 123a2f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a2f79:;
  /* 123a2f79 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 123a2f7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a2f7f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123a2f86 pop edi */
  EDI = (pop32());
  /* 123a2f87 pop esi */
  ESI = (pop32());
  /* 123a2f88 pop ebx */
  EBX = (pop32());
  /* 123a2f89 mov esp, ebp */
  ESP = (EBP);
  /* 123a2f8b pop ebp */
  EBP = (pop32());
  /* 123a2f8c ret  */
  ESPCHK(0x123a2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x123a2f90 (208 bytes, 85 insns) */
void f_123a2f90(void) {
  FTRACE(0x123a2f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a2f90 push ebp */
  push32((uint32_t)(EBP));
  /* 123a2f91 mov ebp, esp */
  EBP = (ESP);
  /* 123a2f93 push edi */
  push32((uint32_t)(EDI));
  /* 123a2f94 push esi */
  push32((uint32_t)(ESI));
  /* 123a2f95 push ebx */
  push32((uint32_t)(EBX));
  /* 123a2f96 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123a2f99 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 123a2f9c lea eax, [0x123c06e0] */
  EAX = ((uint32_t)(0x123c06e0));
  /* 123a2fa2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2fa6 jne 0x123a2fe3 */
  if (!C.zf) goto L_123a2fe3;
  /* 123a2fa8 mov al, 0xff */
  AL = (0xffu);
  /* 123a2faa mov edi, edi */
  EDI = (EDI);
L_123a2fac:;
  /* 123a2fac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a2fae je 0x123a2fde */
  if (C.zf) goto L_123a2fde;
  /* 123a2fb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123a2fb2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123a2fb3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 123a2fb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123a2fb6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a2fb8 je 0x123a2fac */
  if (C.zf) goto L_123a2fac;
  /* 123a2fba sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123a2fbc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a2fbe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123a2fc0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 123a2fc3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123a2fc5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123a2fc7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 123a2fc9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123a2fcb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a2fcd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123a2fcf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 123a2fd2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123a2fd4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123a2fd6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a2fd8 je 0x123a2fac */
  if (C.zf) goto L_123a2fac;
  /* 123a2fda sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 123a2fdc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_123a2fde:;
  /* 123a2fde movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 123a2fe1 jmp 0x123a305b */
  goto L_123a305b;
L_123a2fe3:;
  /* 123a2fe3 lock inc dword ptr [0x123c0874] */
  x86_unimpl("lock inc @ 0x123a2fe3");
  /* 123a2fea cmp dword ptr [0x123c0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a2ff1 jg 0x123a2ff7 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a2ff7;
  /* 123a2ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a2ff5 jmp 0x123a300c */
  goto L_123a300c;
L_123a2ff7:;
  /* 123a2ff7 lock dec dword ptr [0x123c0874] */
  x86_unimpl("lock dec @ 0x123a2ff7");
  /* 123a2ffe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a3000 call 0x123982c0 */
  push32(0x123a3005u); f_123982c0();
  /* 123a3005 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_123a300c:;
  /* 123a300c mov eax, 0xff */
  EAX = (0xffu);
  /* 123a3011 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 123a3013 nop  */
  /* nop */
L_123a3014:;
  /* 123a3014 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a3016 je 0x123a303f */
  if (C.zf) goto L_123a303f;
  /* 123a3018 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123a301a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123a301b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 123a301d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123a301e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a3020 je 0x123a3014 */
  if (C.zf) goto L_123a3014;
  /* 123a3022 push eax */
  push32((uint32_t)(EAX));
  /* 123a3023 push ebx */
  push32((uint32_t)(EBX));
  /* 123a3024 call 0x123a4100 */
  push32(0x123a3029u); f_123a4100();
  /* 123a3029 mov ebx, eax */
  EBX = (EAX);
  /* 123a302b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a302e call 0x123a4100 */
  push32(0x123a3033u); f_123a4100();
  /* 123a3033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3036 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a3038 je 0x123a3014 */
  if (C.zf) goto L_123a3014;
  /* 123a303a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a303c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_123a303f:;
  /* 123a303f mov ebx, eax */
  EBX = (EAX);
  /* 123a3041 pop eax */
  EAX = (pop32());
  /* 123a3042 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3044 jne 0x123a304f */
  if (!C.zf) goto L_123a304f;
  /* 123a3046 lock dec dword ptr [0x123c0874] */
  x86_unimpl("lock dec @ 0x123a3046");
  /* 123a304d jmp 0x123a3059 */
  goto L_123a3059;
L_123a304f:;
  /* 123a304f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a3051 call 0x12398360 */
  push32(0x123a3056u); f_12398360();
  /* 123a3056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a3059:;
  /* 123a3059 mov eax, ebx */
  EAX = (EBX);
L_123a305b:;
  /* 123a305b pop ebx */
  EBX = (pop32());
  /* 123a305c pop esi */
  ESI = (pop32());
  /* 123a305d pop edi */
  EDI = (pop32());
  /* 123a305e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123a305f ret  */
  ESPCHK(0x123a2f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013060 @ 0x123a3060 (257 bytes, 103 insns) */
void f_123a3060(void) {
  FTRACE(0x123a3060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3060 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3061 mov ebp, esp */
  EBP = (ESP);
  /* 123a3063 push edi */
  push32((uint32_t)(EDI));
  /* 123a3064 push esi */
  push32((uint32_t)(ESI));
  /* 123a3065 push ebx */
  push32((uint32_t)(EBX));
  /* 123a3066 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3069 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a306b je 0x123a315a */
  if (C.zf) goto L_123a315a;
  /* 123a3071 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3074 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3077 lea eax, [0x123c06e0] */
  EAX = ((uint32_t)(0x123c06e0));
  /* 123a307d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3081 jne 0x123a30d1 */
  if (!C.zf) goto L_123a30d1;
  /* 123a3083 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 123a3085 mov bl, 0x5a */
  BL = (0x5au);
  /* 123a3087 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 123a3089 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123a308c:;
  /* 123a308c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 123a308e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123a3090 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 123a3092 je 0x123a30b5 */
  if (C.zf) goto L_123a30b5;
  /* 123a3094 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a3096 je 0x123a30b5 */
  if (C.zf) goto L_123a30b5;
  /* 123a3098 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123a3099 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123a309a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a309c jb 0x123a30a4 */
  if (C.cf) goto L_123a30a4;
  /* 123a309e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a30a0 ja 0x123a30a4 */
  if ((!C.cf&&!C.zf)) goto L_123a30a4;
  /* 123a30a2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_123a30a4:;
  /* 123a30a4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a30a6 jb 0x123a30ae */
  if (C.cf) goto L_123a30ae;
  /* 123a30a8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a30aa ja 0x123a30ae */
  if ((!C.cf&&!C.zf)) goto L_123a30ae;
  /* 123a30ac add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_123a30ae:;
  /* 123a30ae cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a30b0 jne 0x123a30bf */
  if (!C.zf) goto L_123a30bf;
  /* 123a30b2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123a30b3 jne 0x123a308c */
  if (!C.zf) goto L_123a308c;
L_123a30b5:;
  /* 123a30b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a30b7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a30b9 je 0x123a315a */
  if (C.zf) goto L_123a315a;
L_123a30bf:;
  /* 123a30bf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 123a30c4 jb 0x123a315a */
  if (C.cf) goto L_123a315a;
  /* 123a30ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a30cc jmp 0x123a315a */
  goto L_123a315a;
L_123a30d1:;
  /* 123a30d1 lock inc dword ptr [0x123c0874] */
  x86_unimpl("lock inc @ 0x123a30d1");
  /* 123a30d8 cmp dword ptr [0x123c0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a30df jg 0x123a30e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a30e5;
  /* 123a30e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a30e3 jmp 0x123a30fe */
  goto L_123a30fe;
L_123a30e5:;
  /* 123a30e5 lock dec dword ptr [0x123c0874] */
  x86_unimpl("lock dec @ 0x123a30e5");
  /* 123a30ec mov ebx, ecx */
  EBX = (ECX);
  /* 123a30ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a30f0 call 0x123982c0 */
  push32(0x123a30f5u); f_123982c0();
  /* 123a30f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 123a30fc mov ecx, ebx */
  ECX = (EBX);
L_123a30fe:;
  /* 123a30fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3100 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 123a3102 mov edi, edi */
  EDI = (EDI);
L_123a3104:;
  /* 123a3104 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123a3106 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3108 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 123a310a je 0x123a312f */
  if (C.zf) goto L_123a312f;
  /* 123a310c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 123a310e je 0x123a312f */
  if (C.zf) goto L_123a312f;
  /* 123a3110 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123a3111 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123a3112 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3113 push eax */
  push32((uint32_t)(EAX));
  /* 123a3114 push ebx */
  push32((uint32_t)(EBX));
  /* 123a3115 call 0x123a4100 */
  push32(0x123a311au); f_123a4100();
  /* 123a311a mov ebx, eax */
  EBX = (EAX);
  /* 123a311c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a311f call 0x123a4100 */
  push32(0x123a3124u); f_123a4100();
  /* 123a3124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3127 pop ecx */
  ECX = (pop32());
  /* 123a3128 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a312a jne 0x123a3135 */
  if (!C.zf) goto L_123a3135;
  /* 123a312c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123a312d jne 0x123a3104 */
  if (!C.zf) goto L_123a3104;
L_123a312f:;
  /* 123a312f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3131 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3133 je 0x123a313e */
  if (C.zf) goto L_123a313e;
L_123a3135:;
  /* 123a3135 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 123a313a jb 0x123a313e */
  if (C.cf) goto L_123a313e;
  /* 123a313c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_123a313e:;
  /* 123a313e pop eax */
  EAX = (pop32());
  /* 123a313f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3141 jne 0x123a314c */
  if (!C.zf) goto L_123a314c;
  /* 123a3143 lock dec dword ptr [0x123c0874] */
  x86_unimpl("lock dec @ 0x123a3143");
  /* 123a314a jmp 0x123a315a */
  goto L_123a315a;
L_123a314c:;
  /* 123a314c mov ebx, ecx */
  EBX = (ECX);
  /* 123a314e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a3150 call 0x12398360 */
  push32(0x123a3155u); f_12398360();
  /* 123a3155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3158 mov ecx, ebx */
  ECX = (EBX);
L_123a315a:;
  /* 123a315a mov eax, ecx */
  EAX = (ECX);
  /* 123a315c pop ebx */
  EBX = (pop32());
  /* 123a315d pop esi */
  ESI = (pop32());
  /* 123a315e pop edi */
  EDI = (pop32());
  /* 123a315f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123a3160 ret  */
  ESPCHK(0x123a3060u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x123a3170 (255 bytes, 88 insns) */
void f_123a3170(void) {
  FTRACE(0x123a3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3170 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3171 mov ebp, esp */
  EBP = (ESP);
  /* 123a3173 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_123a3176:;
  /* 123a3176 cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a317d jle 0x123a3196 */
  if ((C.zf||C.sf!=C.of)) goto L_123a3196;
  /* 123a317f push 8 */
  push32((uint32_t)(0x8u));
  /* 123a3181 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3184 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3186 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a3188 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3189 call 0x1239a8d0 */
  push32(0x123a318eu); f_1239a8d0();
  /* 123a318e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3191 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123a3194 jmp 0x123a31af */
  goto L_123a31af;
L_123a3196:;
  /* 123a3196 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a319b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a319d mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a31a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a31a5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a31a9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 123a31ac mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123a31af:;
  /* 123a31af cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a31b3 je 0x123a31c0 */
  if (C.zf) goto L_123a31c0;
  /* 123a31b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a31b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a31bb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a31be jmp 0x123a3176 */
  goto L_123a3176;
L_123a31c0:;
  /* 123a31c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a31c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a31c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a31c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a31ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a31cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a31d0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a31d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a31d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a31d9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a31dd je 0x123a31e5 */
  if (C.zf) goto L_123a31e5;
  /* 123a31df cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a31e3 jne 0x123a31f8 */
  if (!C.zf) goto L_123a31f8;
L_123a31e5:;
  /* 123a31e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a31e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a31ea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a31ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a31ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a31f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a31f5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123a31f8:;
  /* 123a31f8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123a31ff:;
  /* 123a31ff cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3206 jle 0x123a321b */
  if ((C.zf||C.sf!=C.of)) goto L_123a321b;
  /* 123a3208 push 4 */
  push32((uint32_t)(0x4u));
  /* 123a320a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a320d push edx */
  push32((uint32_t)(EDX));
  /* 123a320e call 0x1239a8d0 */
  push32(0x123a3213u); f_1239a8d0();
  /* 123a3213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3216 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a3219 jmp 0x123a3230 */
  goto L_123a3230;
L_123a321b:;
  /* 123a321b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a321e mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a3224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3226 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a322a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123a322d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_123a3230:;
  /* 123a3230 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3234 je 0x123a325b */
  if (C.zf) goto L_123a325b;
  /* 123a3236 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3239 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a323c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a323f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 123a3243 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a3246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3249 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a324b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a324d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a3250 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3253 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3256 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123a3259 jmp 0x123a31ff */
  goto L_123a31ff;
L_123a325b:;
  /* 123a325b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a325f jne 0x123a3268 */
  if (!C.zf) goto L_123a3268;
  /* 123a3261 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3264 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a3266 jmp 0x123a326b */
  goto L_123a326b;
L_123a3268:;
  /* 123a3268 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123a326b:;
  /* 123a326b mov esp, ebp */
  ESP = (EBP);
  /* 123a326d pop ebp */
  EBP = (pop32());
  /* 123a326e ret  */
  ESPCHK(0x123a3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x123a3270 (17 bytes, 8 insns) */
void f_123a3270(void) {
  FTRACE(0x123a3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3270 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3271 mov ebp, esp */
  EBP = (ESP);
  /* 123a3273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3276 push eax */
  push32((uint32_t)(EAX));
  /* 123a3277 call 0x123a3170 */
  push32(0x123a327cu); f_123a3170();
  /* 123a327c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a327f pop ebp */
  EBP = (pop32());
  /* 123a3280 ret  */
  ESPCHK(0x123a3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013290 @ 0x123a3290 (297 bytes, 106 insns) */
void f_123a3290(void) {
  FTRACE(0x123a3290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3290 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3291 mov ebp, esp */
  EBP = (ESP);
  /* 123a3293 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3296 push esi */
  push32((uint32_t)(ESI));
L_123a3297:;
  /* 123a3297 cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a329e jle 0x123a32b7 */
  if ((C.zf||C.sf!=C.of)) goto L_123a32b7;
  /* 123a32a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 123a32a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a32a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a32a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a32a9 push ecx */
  push32((uint32_t)(ECX));
  /* 123a32aa call 0x1239a8d0 */
  push32(0x123a32afu); f_1239a8d0();
  /* 123a32af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a32b2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a32b5 jmp 0x123a32d0 */
  goto L_123a32d0;
L_123a32b7:;
  /* 123a32b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a32ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a32bc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a32be mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a32c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a32c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a32ca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 123a32cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_123a32d0:;
  /* 123a32d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a32d4 je 0x123a32e1 */
  if (C.zf) goto L_123a32e1;
  /* 123a32d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a32d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a32dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a32df jmp 0x123a3297 */
  goto L_123a3297;
L_123a32e1:;
  /* 123a32e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a32e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a32e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a32e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a32eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a32ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a32f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a32f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a32f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123a32fa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a32fe je 0x123a3306 */
  if (C.zf) goto L_123a3306;
  /* 123a3300 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3304 jne 0x123a3319 */
  if (!C.zf) goto L_123a3319;
L_123a3306:;
  /* 123a3306 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a330b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a330d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a3310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3313 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3316 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123a3319:;
  /* 123a3319 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123a3320 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123a3327:;
  /* 123a3327 cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a332e jle 0x123a3343 */
  if ((C.zf||C.sf!=C.of)) goto L_123a3343;
  /* 123a3330 push 4 */
  push32((uint32_t)(0x4u));
  /* 123a3332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a3335 push edx */
  push32((uint32_t)(EDX));
  /* 123a3336 call 0x1239a8d0 */
  push32(0x123a333bu); f_1239a8d0();
  /* 123a333b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a333e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123a3341 jmp 0x123a3358 */
  goto L_123a3358;
L_123a3343:;
  /* 123a3343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a3346 mov ecx, dword ptr [0x123bec98] */
  ECX = (r32((uint32_t)(0x123bec98)));
  /* 123a334c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a334e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 123a3352 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123a3355 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_123a3358:;
  /* 123a3358 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a335c je 0x123a3399 */
  if (C.zf) goto L_123a3399;
  /* 123a335e push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3360 push 0xa */
  push32((uint32_t)(0xau));
  /* 123a3362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3365 push eax */
  push32((uint32_t)(EAX));
  /* 123a3366 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3369 push ecx */
  push32((uint32_t)(ECX));
  /* 123a336a call 0x123a4230 */
  push32(0x123a336fu); f_123a4230();
  /* 123a336f mov ecx, eax */
  ECX = (EAX);
  /* 123a3371 mov esi, edx */
  ESI = (EDX);
  /* 123a3373 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a3376 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3379 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a337a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a337c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123a337e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a3381 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 123a3384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3389 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a338b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a338e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3391 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3394 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123a3397 jmp 0x123a3327 */
  goto L_123a3327;
L_123a3399:;
  /* 123a3399 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a339d jne 0x123a33ae */
  if (!C.zf) goto L_123a33ae;
  /* 123a339f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a33a2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a33a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a33a7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a33aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a33ac jmp 0x123a33b4 */
  goto L_123a33b4;
L_123a33ae:;
  /* 123a33ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a33b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_123a33b4:;
  /* 123a33b4 pop esi */
  ESI = (pop32());
  /* 123a33b5 mov esp, ebp */
  ESP = (EBP);
  /* 123a33b7 pop ebp */
  EBP = (pop32());
  /* 123a33b8 ret  */
  ESPCHK(0x123a3290u, _esp0);
  ESP += 4; return;
}

/* FUN_100133c0 @ 0x123a33c0 (61 bytes, 18 insns) */
void f_123a33c0(void) {
  FTRACE(0x123a33c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a33c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a33c1 mov ebp, esp */
  EBP = (ESP);
  /* 123a33c3 cmp dword ptr [0x123c0840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a33ca jne 0x123a33fb */
  if (!C.zf) goto L_123a33fb;
  /* 123a33cc push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a33ce call 0x123982c0 */
  push32(0x123a33d3u); f_123982c0();
  /* 123a33d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a33d6 cmp dword ptr [0x123c0840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a33dd jne 0x123a33f1 */
  if (!C.zf) goto L_123a33f1;
  /* 123a33df call 0x123a3420 */
  push32(0x123a33e4u); f_123a3420();
  /* 123a33e4 mov eax, dword ptr [0x123c0840] */
  EAX = (r32((uint32_t)(0x123c0840)));
  /* 123a33e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a33ec mov dword ptr [0x123c0840], eax */
  w32((uint32_t)(0x123c0840), (EAX));
L_123a33f1:;
  /* 123a33f1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a33f3 call 0x12398360 */
  push32(0x123a33f8u); f_12398360();
  /* 123a33f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a33fb:;
  /* 123a33fb pop ebp */
  EBP = (pop32());
  /* 123a33fc ret  */
  ESPCHK(0x123a33c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x123a3400 (30 bytes, 11 insns) */
void f_123a3400(void) {
  FTRACE(0x123a3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3400 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3401 mov ebp, esp */
  EBP = (ESP);
  /* 123a3403 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a3405 call 0x123982c0 */
  push32(0x123a340au); f_123982c0();
  /* 123a340a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a340d call 0x123a3420 */
  push32(0x123a3412u); f_123a3420();
  /* 123a3412 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a3414 call 0x12398360 */
  push32(0x123a3419u); f_12398360();
  /* 123a3419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a341c pop ebp */
  EBP = (pop32());
  /* 123a341d ret  */
  ESPCHK(0x123a3400u, _esp0);
  ESP += 4; return;
}

/* FUN_10013420 @ 0x123a3420 (939 bytes, 266 insns) */
void f_123a3420(void) {
  FTRACE(0x123a3420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3420 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3421 mov ebp, esp */
  EBP = (ESP);
  /* 123a3423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3426 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a342d push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a342f call 0x123982c0 */
  push32(0x123a3434u); f_123982c0();
  /* 123a3434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3437 mov dword ptr [0x123c0788], 0 */
  w32((uint32_t)(0x123c0788), (0x0u));
  /* 123a3441 mov dword ptr [0x123bfe38], 0xffffffff */
  w32((uint32_t)(0x123bfe38), (0xffffffffu));
  /* 123a344b mov eax, dword ptr [0x123bfe38] */
  EAX = (r32((uint32_t)(0x123bfe38)));
  /* 123a3450 mov dword ptr [0x123bfe28], eax */
  w32((uint32_t)(0x123bfe28), (EAX));
  /* 123a3455 push 0x123bcaa8 */
  push32((uint32_t)(0x123bcaa8u));
  /* 123a345a call 0x123a42a0 */
  push32(0x123a345fu); f_123a42a0();
  /* 123a345f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3462 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a3465 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3469 jne 0x123a35a3 */
  if (!C.zf) goto L_123a35a3;
  /* 123a346f push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a3471 call 0x12398360 */
  push32(0x123a3476u); f_12398360();
  /* 123a3476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3479 push 0x123c0790 */
  push32((uint32_t)(0x123c0790u));
  /* 123a347e call dword ptr [0x123c3278] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3278))), 0x123a3484u);
  /* 123a3484 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3487 je 0x123a359e */
  if (C.zf) goto L_123a359e;
  /* 123a348d mov dword ptr [0x123c0788], 1 */
  w32((uint32_t)(0x123c0788), (0x1u));
  /* 123a3497 mov ecx, dword ptr [0x123c0790] */
  ECX = (r32((uint32_t)(0x123c0790)));
  /* 123a349d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a34a0 mov dword ptr [0x123bfd90], ecx */
  w32((uint32_t)(0x123bfd90), (ECX));
  /* 123a34a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a34a8 mov dx, word ptr [0x123c07d6] */
  DX = (r16((uint32_t)(0x123c07d6)));
  /* 123a34af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a34b1 je 0x123a34c9 */
  if (C.zf) goto L_123a34c9;
  /* 123a34b3 mov eax, dword ptr [0x123c07e4] */
  EAX = (r32((uint32_t)(0x123c07e4)));
  /* 123a34b8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a34bb mov ecx, dword ptr [0x123bfd90] */
  ECX = (r32((uint32_t)(0x123bfd90)));
  /* 123a34c1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a34c3 mov dword ptr [0x123bfd90], ecx */
  w32((uint32_t)(0x123bfd90), (ECX));
L_123a34c9:;
  /* 123a34c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a34cb mov dx, word ptr [0x123c082a] */
  DX = (r16((uint32_t)(0x123c082a)));
  /* 123a34d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a34d4 je 0x123a34fe */
  if (C.zf) goto L_123a34fe;
  /* 123a34d6 cmp dword ptr [0x123c0838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a34dd je 0x123a34fe */
  if (C.zf) goto L_123a34fe;
  /* 123a34df mov dword ptr [0x123bfd94], 1 */
  w32((uint32_t)(0x123bfd94), (0x1u));
  /* 123a34e9 mov eax, dword ptr [0x123c0838] */
  EAX = (r32((uint32_t)(0x123c0838)));
  /* 123a34ee sub eax, dword ptr [0x123c07e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c07e4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a34f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a34f7 mov dword ptr [0x123bfd98], eax */
  w32((uint32_t)(0x123bfd98), (EAX));
  /* 123a34fc jmp 0x123a3512 */
  goto L_123a3512;
L_123a34fe:;
  /* 123a34fe mov dword ptr [0x123bfd94], 0 */
  w32((uint32_t)(0x123bfd94), (0x0u));
  /* 123a3508 mov dword ptr [0x123bfd98], 0 */
  w32((uint32_t)(0x123bfd98), (0x0u));
L_123a3512:;
  /* 123a3512 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123a3515 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3516 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3518 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 123a351a mov edx, dword ptr [0x123bfe1c] */
  EDX = (r32((uint32_t)(0x123bfe1c)));
  /* 123a3520 push edx */
  push32((uint32_t)(EDX));
  /* 123a3521 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3523 push 0x123c0794 */
  push32((uint32_t)(0x123c0794u));
  /* 123a3528 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123a352d mov eax, dword ptr [0x123c06f8] */
  EAX = (r32((uint32_t)(0x123c06f8)));
  /* 123a3532 push eax */
  push32((uint32_t)(EAX));
  /* 123a3533 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a3539u);
  /* 123a3539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a353b je 0x123a354f */
  if (C.zf) goto L_123a354f;
  /* 123a353d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3541 jne 0x123a354f */
  if (!C.zf) goto L_123a354f;
  /* 123a3543 mov ecx, dword ptr [0x123bfe1c] */
  ECX = (r32((uint32_t)(0x123bfe1c)));
  /* 123a3549 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 123a354d jmp 0x123a3558 */
  goto L_123a3558;
L_123a354f:;
  /* 123a354f mov edx, dword ptr [0x123bfe1c] */
  EDX = (r32((uint32_t)(0x123bfe1c)));
  /* 123a3555 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_123a3558:;
  /* 123a3558 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123a355b push eax */
  push32((uint32_t)(EAX));
  /* 123a355c push 0 */
  push32((uint32_t)(0x0u));
  /* 123a355e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 123a3560 mov ecx, dword ptr [0x123bfe20] */
  ECX = (r32((uint32_t)(0x123bfe20)));
  /* 123a3566 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3567 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3569 push 0x123c07e8 */
  push32((uint32_t)(0x123c07e8u));
  /* 123a356e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123a3573 mov edx, dword ptr [0x123c06f8] */
  EDX = (r32((uint32_t)(0x123c06f8)));
  /* 123a3579 push edx */
  push32((uint32_t)(EDX));
  /* 123a357a call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a3580u);
  /* 123a3580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3582 je 0x123a3595 */
  if (C.zf) goto L_123a3595;
  /* 123a3584 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3588 jne 0x123a3595 */
  if (!C.zf) goto L_123a3595;
  /* 123a358a mov eax, dword ptr [0x123bfe20] */
  EAX = (r32((uint32_t)(0x123bfe20)));
  /* 123a358f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 123a3593 jmp 0x123a359e */
  goto L_123a359e;
L_123a3595:;
  /* 123a3595 mov ecx, dword ptr [0x123bfe20] */
  ECX = (r32((uint32_t)(0x123bfe20)));
  /* 123a359b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_123a359e:;
  /* 123a359e jmp 0x123a37c7 */
  goto L_123a37c7;
L_123a35a3:;
  /* 123a35a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a35a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a35a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a35ab je 0x123a35cd */
  if (C.zf) goto L_123a35cd;
  /* 123a35ad cmp dword ptr [0x123c083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a35b4 je 0x123a35dc */
  if (C.zf) goto L_123a35dc;
  /* 123a35b6 mov ecx, dword ptr [0x123c083c] */
  ECX = (r32((uint32_t)(0x123c083c)));
  /* 123a35bc push ecx */
  push32((uint32_t)(ECX));
  /* 123a35bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a35c0 push edx */
  push32((uint32_t)(EDX));
  /* 123a35c1 call 0x123a0550 */
  push32(0x123a35c6u); f_123a0550();
  /* 123a35c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a35c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a35cb jne 0x123a35dc */
  if (!C.zf) goto L_123a35dc;
L_123a35cd:;
  /* 123a35cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a35cf call 0x12398360 */
  push32(0x123a35d4u); f_12398360();
  /* 123a35d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a35d7 jmp 0x123a37c7 */
  goto L_123a37c7;
L_123a35dc:;
  /* 123a35dc push 2 */
  push32((uint32_t)(0x2u));
  /* 123a35de mov eax, dword ptr [0x123c083c] */
  EAX = (r32((uint32_t)(0x123c083c)));
  /* 123a35e3 push eax */
  push32((uint32_t)(EAX));
  /* 123a35e4 call 0x12395350 */
  push32(0x123a35e9u); f_12395350();
  /* 123a35e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a35ec push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 123a35f1 push 0x123bcaa0 */
  push32((uint32_t)(0x123bcaa0u));
  /* 123a35f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a35f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a35fb push ecx */
  push32((uint32_t)(ECX));
  /* 123a35fc call 0x123976f0 */
  push32(0x123a3601u); f_123976f0();
  /* 123a3601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3604 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3607 push eax */
  push32((uint32_t)(EAX));
  /* 123a3608 call 0x123948c0 */
  push32(0x123a360du); f_123948c0();
  /* 123a360d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3610 mov dword ptr [0x123c083c], eax */
  w32((uint32_t)(0x123c083c), (EAX));
  /* 123a3615 cmp dword ptr [0x123c083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a361c jne 0x123a362d */
  if (!C.zf) goto L_123a362d;
  /* 123a361e push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a3620 call 0x12398360 */
  push32(0x123a3625u); f_12398360();
  /* 123a3625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3628 jmp 0x123a37c7 */
  goto L_123a37c7;
L_123a362d:;
  /* 123a362d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3630 push edx */
  push32((uint32_t)(EDX));
  /* 123a3631 mov eax, dword ptr [0x123c083c] */
  EAX = (r32((uint32_t)(0x123c083c)));
  /* 123a3636 push eax */
  push32((uint32_t)(EAX));
  /* 123a3637 call 0x12397870 */
  push32(0x123a363cu); f_12397870();
  /* 123a363c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a363f push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a3641 call 0x12398360 */
  push32(0x123a3646u); f_12398360();
  /* 123a3646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3649 push 3 */
  push32((uint32_t)(0x3u));
  /* 123a364b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a364e push ecx */
  push32((uint32_t)(ECX));
  /* 123a364f mov edx, dword ptr [0x123bfe1c] */
  EDX = (r32((uint32_t)(0x123bfe1c)));
  /* 123a3655 push edx */
  push32((uint32_t)(EDX));
  /* 123a3656 call 0x123980e0 */
  push32(0x123a365bu); f_123980e0();
  /* 123a365b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a365e mov eax, dword ptr [0x123bfe1c] */
  EAX = (r32((uint32_t)(0x123bfe1c)));
  /* 123a3663 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 123a3667 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a366a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a366d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a3670 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3673 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a3676 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3679 jne 0x123a368d */
  if (!C.zf) goto L_123a368d;
  /* 123a367b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a367e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3681 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a3684 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3687 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a368a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123a368d:;
  /* 123a368d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3690 push eax */
  push32((uint32_t)(EAX));
  /* 123a3691 call 0x123a3170 */
  push32(0x123a3696u); f_123a3170();
  /* 123a3696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3699 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a369f mov dword ptr [0x123bfd90], eax */
  w32((uint32_t)(0x123bfd90), (EAX));
L_123a36a4:;
  /* 123a36a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a36aa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a36ad je 0x123a36c5 */
  if (C.zf) goto L_123a36c5;
  /* 123a36af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36b2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a36b5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a36b8 jl 0x123a36d0 */
  if ((C.sf!=C.of)) goto L_123a36d0;
  /* 123a36ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a36c0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a36c3 jg 0x123a36d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a36d0;
L_123a36c5:;
  /* 123a36c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a36cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a36ce jmp 0x123a36a4 */
  goto L_123a36a4;
L_123a36d0:;
  /* 123a36d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a36d6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a36d9 jne 0x123a3775 */
  if (!C.zf) goto L_123a3775;
  /* 123a36df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a36e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a36e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a36eb push edx */
  push32((uint32_t)(EDX));
  /* 123a36ec call 0x123a3170 */
  push32(0x123a36f1u); f_123a3170();
  /* 123a36f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a36f4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a36f7 mov ecx, dword ptr [0x123bfd90] */
  ECX = (r32((uint32_t)(0x123bfd90)));
  /* 123a36fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a36ff mov dword ptr [0x123bfd90], ecx */
  w32((uint32_t)(0x123bfd90), (ECX));
L_123a3705:;
  /* 123a3705 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3708 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a370b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a370e jl 0x123a3726 */
  if ((C.sf!=C.of)) goto L_123a3726;
  /* 123a3710 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3713 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a3716 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3719 jg 0x123a3726 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a3726;
  /* 123a371b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a371e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3721 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a3724 jmp 0x123a3705 */
  goto L_123a3705;
L_123a3726:;
  /* 123a3726 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3729 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a372c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a372f jne 0x123a3775 */
  if (!C.zf) goto L_123a3775;
  /* 123a3731 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3734 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3737 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a373a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a373d push ecx */
  push32((uint32_t)(ECX));
  /* 123a373e call 0x123a3170 */
  push32(0x123a3743u); f_123a3170();
  /* 123a3743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3746 mov edx, dword ptr [0x123bfd90] */
  EDX = (r32((uint32_t)(0x123bfd90)));
  /* 123a374c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a374e mov dword ptr [0x123bfd90], edx */
  w32((uint32_t)(0x123bfd90), (EDX));
L_123a3754:;
  /* 123a3754 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3757 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a375a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a375d jl 0x123a3775 */
  if ((C.sf!=C.of)) goto L_123a3775;
  /* 123a375f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3762 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a3765 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3768 jg 0x123a3775 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a3775;
  /* 123a376a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a376d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3770 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a3773 jmp 0x123a3754 */
  goto L_123a3754;
L_123a3775:;
  /* 123a3775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3779 je 0x123a3789 */
  if (C.zf) goto L_123a3789;
  /* 123a377b mov edx, dword ptr [0x123bfd90] */
  EDX = (r32((uint32_t)(0x123bfd90)));
  /* 123a3781 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a3783 mov dword ptr [0x123bfd90], edx */
  w32((uint32_t)(0x123bfd90), (EDX));
L_123a3789:;
  /* 123a3789 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a378c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a378f mov dword ptr [0x123bfd94], ecx */
  w32((uint32_t)(0x123bfd94), (ECX));
  /* 123a3795 cmp dword ptr [0x123bfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123bfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a379c je 0x123a37be */
  if (C.zf) goto L_123a37be;
  /* 123a379e push 3 */
  push32((uint32_t)(0x3u));
  /* 123a37a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a37a3 push edx */
  push32((uint32_t)(EDX));
  /* 123a37a4 mov eax, dword ptr [0x123bfe20] */
  EAX = (r32((uint32_t)(0x123bfe20)));
  /* 123a37a9 push eax */
  push32((uint32_t)(EAX));
  /* 123a37aa call 0x123980e0 */
  push32(0x123a37afu); f_123980e0();
  /* 123a37af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a37b2 mov ecx, dword ptr [0x123bfe20] */
  ECX = (r32((uint32_t)(0x123bfe20)));
  /* 123a37b8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 123a37bc jmp 0x123a37c7 */
  goto L_123a37c7;
L_123a37be:;
  /* 123a37be mov edx, dword ptr [0x123bfe20] */
  EDX = (r32((uint32_t)(0x123bfe20)));
  /* 123a37c4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_123a37c7:;
  /* 123a37c7 mov esp, ebp */
  ESP = (EBP);
  /* 123a37c9 pop ebp */
  EBP = (pop32());
  /* 123a37ca ret  */
  ESPCHK(0x123a3420u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x123a37d0 (46 bytes, 18 insns) */
void f_123a37d0(void) {
  FTRACE(0x123a37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a37d1 mov ebp, esp */
  EBP = (ESP);
  /* 123a37d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a37d4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a37d6 call 0x123982c0 */
  push32(0x123a37dbu); f_123982c0();
  /* 123a37db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a37de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a37e1 push eax */
  push32((uint32_t)(EAX));
  /* 123a37e2 call 0x123a3800 */
  push32(0x123a37e7u); f_123a3800();
  /* 123a37e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a37ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a37ed push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a37ef call 0x12398360 */
  push32(0x123a37f4u); f_12398360();
  /* 123a37f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a37f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a37fa mov esp, ebp */
  ESP = (EBP);
  /* 123a37fc pop ebp */
  EBP = (pop32());
  /* 123a37fd ret  */
  ESPCHK(0x123a37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x123a3800 (762 bytes, 246 insns) */
void f_123a3800(void) {
  FTRACE(0x123a3800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3800 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3801 mov ebp, esp */
  EBP = (ESP);
  /* 123a3803 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3804 cmp dword ptr [0x123bfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123bfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a380b jne 0x123a3814 */
  if (!C.zf) goto L_123a3814;
  /* 123a380d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a380f jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3814:;
  /* 123a3814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3817 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123a381a cmp ecx, dword ptr [0x123bfe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bfe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3820 jne 0x123a3834 */
  if (!C.zf) goto L_123a3834;
  /* 123a3822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3825 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123a3828 cmp eax, dword ptr [0x123bfe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bfe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a382e je 0x123a39fb */
  if (C.zf) goto L_123a39fb;
L_123a3834:;
  /* 123a3834 cmp dword ptr [0x123c0788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a383b je 0x123a39b5 */
  if (C.zf) goto L_123a39b5;
  /* 123a3841 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3843 mov cx, word ptr [0x123c0828] */
  CX = (r16((uint32_t)(0x123c0828)));
  /* 123a384a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a384c jne 0x123a38a9 */
  if (!C.zf) goto L_123a38a9;
  /* 123a384e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3850 mov dx, word ptr [0x123c0836] */
  DX = (r16((uint32_t)(0x123c0836)));
  /* 123a3857 push edx */
  push32((uint32_t)(EDX));
  /* 123a3858 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a385a mov ax, word ptr [0x123c0834] */
  AX = (r16((uint32_t)(0x123c0834)));
  /* 123a3860 push eax */
  push32((uint32_t)(EAX));
  /* 123a3861 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3863 mov cx, word ptr [0x123c0832] */
  CX = (r16((uint32_t)(0x123c0832)));
  /* 123a386a push ecx */
  push32((uint32_t)(ECX));
  /* 123a386b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a386d mov dx, word ptr [0x123c0830] */
  DX = (r16((uint32_t)(0x123c0830)));
  /* 123a3874 push edx */
  push32((uint32_t)(EDX));
  /* 123a3875 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3877 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3879 mov ax, word ptr [0x123c082c] */
  AX = (r16((uint32_t)(0x123c082c)));
  /* 123a387f push eax */
  push32((uint32_t)(EAX));
  /* 123a3880 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3882 mov cx, word ptr [0x123c082e] */
  CX = (r16((uint32_t)(0x123c082e)));
  /* 123a3889 push ecx */
  push32((uint32_t)(ECX));
  /* 123a388a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a388c mov dx, word ptr [0x123c082a] */
  DX = (r16((uint32_t)(0x123c082a)));
  /* 123a3893 push edx */
  push32((uint32_t)(EDX));
  /* 123a3894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3897 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123a389a push ecx */
  push32((uint32_t)(ECX));
  /* 123a389b push 1 */
  push32((uint32_t)(0x1u));
  /* 123a389d push 1 */
  push32((uint32_t)(0x1u));
  /* 123a389f call 0x123a3b00 */
  push32(0x123a38a4u); f_123a3b00();
  /* 123a38a4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a38a7 jmp 0x123a38fa */
  goto L_123a38fa;
L_123a38a9:;
  /* 123a38a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a38ab mov dx, word ptr [0x123c0836] */
  DX = (r16((uint32_t)(0x123c0836)));
  /* 123a38b2 push edx */
  push32((uint32_t)(EDX));
  /* 123a38b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a38b5 mov ax, word ptr [0x123c0834] */
  AX = (r16((uint32_t)(0x123c0834)));
  /* 123a38bb push eax */
  push32((uint32_t)(EAX));
  /* 123a38bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a38be mov cx, word ptr [0x123c0832] */
  CX = (r16((uint32_t)(0x123c0832)));
  /* 123a38c5 push ecx */
  push32((uint32_t)(ECX));
  /* 123a38c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a38c8 mov dx, word ptr [0x123c0830] */
  DX = (r16((uint32_t)(0x123c0830)));
  /* 123a38cf push edx */
  push32((uint32_t)(EDX));
  /* 123a38d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a38d2 mov ax, word ptr [0x123c082e] */
  AX = (r16((uint32_t)(0x123c082e)));
  /* 123a38d8 push eax */
  push32((uint32_t)(EAX));
  /* 123a38d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a38db push 0 */
  push32((uint32_t)(0x0u));
  /* 123a38dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a38df mov cx, word ptr [0x123c082a] */
  CX = (r16((uint32_t)(0x123c082a)));
  /* 123a38e6 push ecx */
  push32((uint32_t)(ECX));
  /* 123a38e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a38ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123a38ed push eax */
  push32((uint32_t)(EAX));
  /* 123a38ee push 0 */
  push32((uint32_t)(0x0u));
  /* 123a38f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a38f2 call 0x123a3b00 */
  push32(0x123a38f7u); f_123a3b00();
  /* 123a38f7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a38fa:;
  /* 123a38fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a38fc mov cx, word ptr [0x123c07d4] */
  CX = (r16((uint32_t)(0x123c07d4)));
  /* 123a3903 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a3905 jne 0x123a3962 */
  if (!C.zf) goto L_123a3962;
  /* 123a3907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3909 mov dx, word ptr [0x123c07e2] */
  DX = (r16((uint32_t)(0x123c07e2)));
  /* 123a3910 push edx */
  push32((uint32_t)(EDX));
  /* 123a3911 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3913 mov ax, word ptr [0x123c07e0] */
  AX = (r16((uint32_t)(0x123c07e0)));
  /* 123a3919 push eax */
  push32((uint32_t)(EAX));
  /* 123a391a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a391c mov cx, word ptr [0x123c07de] */
  CX = (r16((uint32_t)(0x123c07de)));
  /* 123a3923 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3924 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3926 mov dx, word ptr [0x123c07dc] */
  DX = (r16((uint32_t)(0x123c07dc)));
  /* 123a392d push edx */
  push32((uint32_t)(EDX));
  /* 123a392e push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3932 mov ax, word ptr [0x123c07d8] */
  AX = (r16((uint32_t)(0x123c07d8)));
  /* 123a3938 push eax */
  push32((uint32_t)(EAX));
  /* 123a3939 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a393b mov cx, word ptr [0x123c07da] */
  CX = (r16((uint32_t)(0x123c07da)));
  /* 123a3942 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3943 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3945 mov dx, word ptr [0x123c07d6] */
  DX = (r16((uint32_t)(0x123c07d6)));
  /* 123a394c push edx */
  push32((uint32_t)(EDX));
  /* 123a394d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3950 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123a3953 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3954 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3956 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3958 call 0x123a3b00 */
  push32(0x123a395du); f_123a3b00();
  /* 123a395d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3960 jmp 0x123a39b3 */
  goto L_123a39b3;
L_123a3962:;
  /* 123a3962 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3964 mov dx, word ptr [0x123c07e2] */
  DX = (r16((uint32_t)(0x123c07e2)));
  /* 123a396b push edx */
  push32((uint32_t)(EDX));
  /* 123a396c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a396e mov ax, word ptr [0x123c07e0] */
  AX = (r16((uint32_t)(0x123c07e0)));
  /* 123a3974 push eax */
  push32((uint32_t)(EAX));
  /* 123a3975 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3977 mov cx, word ptr [0x123c07de] */
  CX = (r16((uint32_t)(0x123c07de)));
  /* 123a397e push ecx */
  push32((uint32_t)(ECX));
  /* 123a397f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a3981 mov dx, word ptr [0x123c07dc] */
  DX = (r16((uint32_t)(0x123c07dc)));
  /* 123a3988 push edx */
  push32((uint32_t)(EDX));
  /* 123a3989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a398b mov ax, word ptr [0x123c07da] */
  AX = (r16((uint32_t)(0x123c07da)));
  /* 123a3991 push eax */
  push32((uint32_t)(EAX));
  /* 123a3992 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3994 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3996 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a3998 mov cx, word ptr [0x123c07d6] */
  CX = (r16((uint32_t)(0x123c07d6)));
  /* 123a399f push ecx */
  push32((uint32_t)(ECX));
  /* 123a39a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a39a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123a39a6 push eax */
  push32((uint32_t)(EAX));
  /* 123a39a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39ab call 0x123a3b00 */
  push32(0x123a39b0u); f_123a3b00();
  /* 123a39b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a39b3:;
  /* 123a39b3 jmp 0x123a39fb */
  goto L_123a39fb;
L_123a39b5:;
  /* 123a39b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39bb push 2 */
  push32((uint32_t)(0x2u));
  /* 123a39bd push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39bf push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a39c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 123a39c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a39c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123a39cb push edx */
  push32((uint32_t)(EDX));
  /* 123a39cc push 1 */
  push32((uint32_t)(0x1u));
  /* 123a39ce push 1 */
  push32((uint32_t)(0x1u));
  /* 123a39d0 call 0x123a3b00 */
  push32(0x123a39d5u); f_123a3b00();
  /* 123a39d5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a39d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39da push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39de push 2 */
  push32((uint32_t)(0x2u));
  /* 123a39e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 123a39e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 123a39e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a39eb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123a39ee push ecx */
  push32((uint32_t)(ECX));
  /* 123a39ef push 1 */
  push32((uint32_t)(0x1u));
  /* 123a39f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a39f3 call 0x123a3b00 */
  push32(0x123a39f8u); f_123a3b00();
  /* 123a39f8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a39fb:;
  /* 123a39fb mov edx, dword ptr [0x123bfe2c] */
  EDX = (r32((uint32_t)(0x123bfe2c)));
  /* 123a3a01 cmp edx, dword ptr [0x123bfe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a07 jge 0x123a3a54 */
  if ((C.sf==C.of)) goto L_123a3a54;
  /* 123a3a09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a0c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123a3a0f cmp ecx, dword ptr [0x123bfe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a15 jl 0x123a3a25 */
  if ((C.sf!=C.of)) goto L_123a3a25;
  /* 123a3a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a1a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123a3a1d cmp eax, dword ptr [0x123bfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a23 jle 0x123a3a2c */
  if ((C.zf||C.sf!=C.of)) goto L_123a3a2c;
L_123a3a25:;
  /* 123a3a25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3a27 jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3a2c:;
  /* 123a3a2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a2f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123a3a32 cmp edx, dword ptr [0x123bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a38 jle 0x123a3a52 */
  if ((C.zf||C.sf!=C.of)) goto L_123a3a52;
  /* 123a3a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a3d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123a3a40 cmp ecx, dword ptr [0x123bfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a46 jge 0x123a3a52 */
  if ((C.sf==C.of)) goto L_123a3a52;
  /* 123a3a48 mov eax, 1 */
  EAX = (0x1u);
  /* 123a3a4d jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3a52:;
  /* 123a3a52 jmp 0x123a3a97 */
  goto L_123a3a97;
L_123a3a54:;
  /* 123a3a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a57 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123a3a5a cmp eax, dword ptr [0x123bfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a60 jl 0x123a3a70 */
  if ((C.sf!=C.of)) goto L_123a3a70;
  /* 123a3a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a65 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123a3a68 cmp edx, dword ptr [0x123bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a6e jle 0x123a3a77 */
  if ((C.zf||C.sf!=C.of)) goto L_123a3a77;
L_123a3a70:;
  /* 123a3a70 mov eax, 1 */
  EAX = (0x1u);
  /* 123a3a75 jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3a77:;
  /* 123a3a77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a7a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123a3a7d cmp ecx, dword ptr [0x123bfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a83 jle 0x123a3a97 */
  if ((C.zf||C.sf!=C.of)) goto L_123a3a97;
  /* 123a3a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a88 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 123a3a8b cmp eax, dword ptr [0x123bfe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3a91 jge 0x123a3a97 */
  if ((C.sf==C.of)) goto L_123a3a97;
  /* 123a3a93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3a95 jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3a97:;
  /* 123a3a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3a9a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123a3a9d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3aa3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a3aa5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3aa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3aaa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123a3aad imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3ab3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3ab5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3abb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a3abe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3ac1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 123a3ac4 cmp edx, dword ptr [0x123bfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123bfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3aca jne 0x123a3ae2 */
  if (!C.zf) goto L_123a3ae2;
  /* 123a3acc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a3acf cmp eax, dword ptr [0x123bfe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bfe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3ad5 jl 0x123a3ade */
  if ((C.sf!=C.of)) goto L_123a3ade;
  /* 123a3ad7 mov eax, 1 */
  EAX = (0x1u);
  /* 123a3adc jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3ade:;
  /* 123a3ade xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3ae0 jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3ae2:;
  /* 123a3ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a3ae5 cmp ecx, dword ptr [0x123bfe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bfe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3aeb jge 0x123a3af4 */
  if ((C.sf==C.of)) goto L_123a3af4;
  /* 123a3aed mov eax, 1 */
  EAX = (0x1u);
  /* 123a3af2 jmp 0x123a3af6 */
  goto L_123a3af6;
L_123a3af4:;
  /* 123a3af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a3af6:;
  /* 123a3af6 mov esp, ebp */
  ESP = (EBP);
  /* 123a3af8 pop ebp */
  EBP = (pop32());
  /* 123a3af9 ret  */
  ESPCHK(0x123a3800u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x123a3b00 (504 bytes, 145 insns) */
void f_123a3b00(void) {
  FTRACE(0x123a3b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3b00 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3b01 mov ebp, esp */
  EBP = (ESP);
  /* 123a3b03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3b06 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3b0a jne 0x123a3bdc */
  if (!C.zf) goto L_123a3bdc;
  /* 123a3b10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3b13 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 123a3b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3b18 jne 0x123a3b29 */
  if (!C.zf) goto L_123a3b29;
  /* 123a3b1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3b1d mov edx, dword ptr [ecx*4 + 0x123bfe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bfe4c)));
  /* 123a3b24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123a3b27 jmp 0x123a3b36 */
  goto L_123a3b36;
L_123a3b29:;
  /* 123a3b29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3b2c mov ecx, dword ptr [eax*4 + 0x123bfe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123bfe80)));
  /* 123a3b33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123a3b36:;
  /* 123a3b36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a3b39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3b3c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a3b3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3b42 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3b45 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3b4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3b4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3b50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3b53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3b56 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 123a3b59 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 123a3b5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a3b5e mov ecx, 7 */
  ECX = (0x7u);
  /* 123a3b63 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123a3b65 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a3b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a3b6b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3b6e jge 0x123a3b89 */
  if ((C.sf==C.of)) goto L_123a3b89;
  /* 123a3b70 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a3b73 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3b76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a3b79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3b7c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3b7f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3b82 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3b84 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a3b87 jmp 0x123a3b9d */
  goto L_123a3b9d;
L_123a3b89:;
  /* 123a3b89 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a3b8c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3b8f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a3b92 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3b95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3b98 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3b9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123a3b9d:;
  /* 123a3b9d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3ba1 jne 0x123a3bda */
  if (!C.zf) goto L_123a3bda;
  /* 123a3ba3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3ba6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 123a3ba9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a3bab jne 0x123a3bbc */
  if (!C.zf) goto L_123a3bbc;
  /* 123a3bad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3bb0 mov eax, dword ptr [edx*4 + 0x123bfe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123bfe50)));
  /* 123a3bb7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123a3bba jmp 0x123a3bc9 */
  goto L_123a3bc9;
L_123a3bbc:;
  /* 123a3bbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3bbf mov edx, dword ptr [ecx*4 + 0x123bfe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bfe84)));
  /* 123a3bc6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123a3bc9:;
  /* 123a3bc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3bcc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3bcf jle 0x123a3bda */
  if ((C.zf||C.sf!=C.of)) goto L_123a3bda;
  /* 123a3bd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3bd4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3bd7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123a3bda:;
  /* 123a3bda jmp 0x123a3c11 */
  goto L_123a3c11;
L_123a3bdc:;
  /* 123a3bdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3bdf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123a3be2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a3be4 jne 0x123a3bf5 */
  if (!C.zf) goto L_123a3bf5;
  /* 123a3be6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3be9 mov ecx, dword ptr [eax*4 + 0x123bfe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123bfe4c)));
  /* 123a3bf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a3bf3 jmp 0x123a3c02 */
  goto L_123a3c02;
L_123a3bf5:;
  /* 123a3bf5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3bf8 mov eax, dword ptr [edx*4 + 0x123bfe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123bfe80)));
  /* 123a3bff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_123a3c02:;
  /* 123a3c02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a3c05 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a3c08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3c0b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123a3c11:;
  /* 123a3c11 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3c15 jne 0x123a3c51 */
  if (!C.zf) goto L_123a3c51;
  /* 123a3c17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3c1a mov dword ptr [0x123bfe2c], eax */
  w32((uint32_t)(0x123bfe2c), (EAX));
  /* 123a3c1f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 123a3c22 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c25 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 123a3c28 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c2a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c2d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 123a3c30 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c32 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c38 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 123a3c3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c3d mov dword ptr [0x123bfe30], ecx */
  w32((uint32_t)(0x123bfe30), (ECX));
  /* 123a3c43 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3c46 mov dword ptr [0x123bfe28], edx */
  w32((uint32_t)(0x123bfe28), (EDX));
  /* 123a3c4c jmp 0x123a3cf4 */
  goto L_123a3cf4;
L_123a3c51:;
  /* 123a3c51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a3c54 mov dword ptr [0x123bfe3c], eax */
  w32((uint32_t)(0x123bfe3c), (EAX));
  /* 123a3c59 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 123a3c5c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c5f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 123a3c62 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c64 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c67 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 123a3c6a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c6c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c72 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 123a3c75 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c77 mov dword ptr [0x123bfe40], ecx */
  w32((uint32_t)(0x123bfe40), (ECX));
  /* 123a3c7d mov edx, dword ptr [0x123bfd98] */
  EDX = (r32((uint32_t)(0x123bfd98)));
  /* 123a3c83 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a3c89 mov eax, dword ptr [0x123bfe40] */
  EAX = (r32((uint32_t)(0x123bfe40)));
  /* 123a3c8e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3c90 mov dword ptr [0x123bfe40], eax */
  w32((uint32_t)(0x123bfe40), (EAX));
  /* 123a3c95 cmp dword ptr [0x123bfe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123bfe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3c9c jge 0x123a3cc1 */
  if ((C.sf==C.of)) goto L_123a3cc1;
  /* 123a3c9e mov ecx, dword ptr [0x123bfe40] */
  ECX = (r32((uint32_t)(0x123bfe40)));
  /* 123a3ca4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3caa mov dword ptr [0x123bfe40], ecx */
  w32((uint32_t)(0x123bfe40), (ECX));
  /* 123a3cb0 mov edx, dword ptr [0x123bfe3c] */
  EDX = (r32((uint32_t)(0x123bfe3c)));
  /* 123a3cb6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3cb9 mov dword ptr [0x123bfe3c], edx */
  w32((uint32_t)(0x123bfe3c), (EDX));
  /* 123a3cbf jmp 0x123a3ceb */
  goto L_123a3ceb;
L_123a3cc1:;
  /* 123a3cc1 cmp dword ptr [0x123bfe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x123bfe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3ccb jl 0x123a3ceb */
  if ((C.sf!=C.of)) goto L_123a3ceb;
  /* 123a3ccd mov eax, dword ptr [0x123bfe40] */
  EAX = (r32((uint32_t)(0x123bfe40)));
  /* 123a3cd2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a3cd7 mov dword ptr [0x123bfe40], eax */
  w32((uint32_t)(0x123bfe40), (EAX));
  /* 123a3cdc mov ecx, dword ptr [0x123bfe3c] */
  ECX = (r32((uint32_t)(0x123bfe3c)));
  /* 123a3ce2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3ce5 mov dword ptr [0x123bfe3c], ecx */
  w32((uint32_t)(0x123bfe3c), (ECX));
L_123a3ceb:;
  /* 123a3ceb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3cee mov dword ptr [0x123bfe38], edx */
  w32((uint32_t)(0x123bfe38), (EDX));
L_123a3cf4:;
  /* 123a3cf4 mov esp, ebp */
  ESP = (EBP);
  /* 123a3cf6 pop ebp */
  EBP = (pop32());
  /* 123a3cf7 ret  */
  ESPCHK(0x123a3b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d00 @ 0x123a3d00 (382 bytes, 135 insns) */
void f_123a3d00(void) {
  FTRACE(0x123a3d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3d00 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3d01 mov ebp, esp */
  EBP = (ESP);
  /* 123a3d03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3d05 push 0x123bcab0 */
  push32((uint32_t)(0x123bcab0u));
  /* 123a3d0a push 0x1239d9c8 */
  push32((uint32_t)(0x1239d9c8u));
  /* 123a3d0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123a3d15 push eax */
  push32((uint32_t)(EAX));
  /* 123a3d16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123a3d1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3d20 push ebx */
  push32((uint32_t)(EBX));
  /* 123a3d21 push esi */
  push32((uint32_t)(ESI));
  /* 123a3d22 push edi */
  push32((uint32_t)(EDI));
  /* 123a3d23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a3d26 cmp dword ptr [0x123c0844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3d2d jne 0x123a3d72 */
  if (!C.zf) goto L_123a3d72;
  /* 123a3d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3d37 call dword ptr [0x123c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3274))), 0x123a3d3du);
  /* 123a3d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3d3f je 0x123a3d4d */
  if (C.zf) goto L_123a3d4d;
  /* 123a3d41 mov dword ptr [0x123c0844], 1 */
  w32((uint32_t)(0x123c0844), (0x1u));
  /* 123a3d4b jmp 0x123a3d72 */
  goto L_123a3d72;
L_123a3d4d:;
  /* 123a3d4d push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3d55 call dword ptr [0x123c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c328c))), 0x123a3d5bu);
  /* 123a3d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3d5d je 0x123a3d6b */
  if (C.zf) goto L_123a3d6b;
  /* 123a3d5f mov dword ptr [0x123c0844], 2 */
  w32((uint32_t)(0x123c0844), (0x2u));
  /* 123a3d69 jmp 0x123a3d72 */
  goto L_123a3d72;
L_123a3d6b:;
  /* 123a3d6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3d6d jmp 0x123a3e81 */
  goto L_123a3e81;
L_123a3d72:;
  /* 123a3d72 cmp dword ptr [0x123c0844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c0844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3d79 jne 0x123a3d96 */
  if (!C.zf) goto L_123a3d96;
  /* 123a3d7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3d7e push eax */
  push32((uint32_t)(EAX));
  /* 123a3d7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3d82 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3d83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3d86 push edx */
  push32((uint32_t)(EDX));
  /* 123a3d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3d8a push eax */
  push32((uint32_t)(EAX));
  /* 123a3d8b call dword ptr [0x123c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3274))), 0x123a3d91u);
  /* 123a3d91 jmp 0x123a3e81 */
  goto L_123a3e81;
L_123a3d96:;
  /* 123a3d96 cmp dword ptr [0x123c0844], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c0844))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3d9d jne 0x123a3e7f */
  if (!C.zf) goto L_123a3e7f;
  /* 123a3da3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3da7 jne 0x123a3db2 */
  if (!C.zf) goto L_123a3db2;
  /* 123a3da9 mov ecx, dword ptr [0x123c06f8] */
  ECX = (r32((uint32_t)(0x123c06f8)));
  /* 123a3daf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_123a3db2:;
  /* 123a3db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3db6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3db9 push edx */
  push32((uint32_t)(EDX));
  /* 123a3dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3dbd push eax */
  push32((uint32_t)(EAX));
  /* 123a3dbe call dword ptr [0x123c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c328c))), 0x123a3dc4u);
  /* 123a3dc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123a3dc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3dcb jne 0x123a3dd4 */
  if (!C.zf) goto L_123a3dd4;
  /* 123a3dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3dcf jmp 0x123a3e81 */
  goto L_123a3e81;
L_123a3dd4:;
  /* 123a3dd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a3ddb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a3dde add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3de1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123a3de3 call 0x12397a60 */
  push32(0x123a3de8u); f_12397a60();
  /* 123a3de8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 123a3deb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a3dee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a3df1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123a3df4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123a3dfb jmp 0x123a3e14 */
  goto L_123a3e14;
  /* 123a3dfd mov eax, 1 */
  EAX = (0x1u);
  /* 123a3e02 ret  */
  ESPCHK(0x123a3d00u, _esp0);
  ESP += 4; return;
  /* 123a3e03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123a3e06 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123a3e0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123a3e14:;
  /* 123a3e14 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3e18 jne 0x123a3e1e */
  if (!C.zf) goto L_123a3e1e;
  /* 123a3e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3e1c jmp 0x123a3e81 */
  goto L_123a3e81;
L_123a3e1e:;
  /* 123a3e1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a3e21 push edx */
  push32((uint32_t)(EDX));
  /* 123a3e22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a3e25 push eax */
  push32((uint32_t)(EAX));
  /* 123a3e26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3e29 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3e2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3e2d push edx */
  push32((uint32_t)(EDX));
  /* 123a3e2e call dword ptr [0x123c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c328c))), 0x123a3e34u);
  /* 123a3e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3e36 jne 0x123a3e3c */
  if (!C.zf) goto L_123a3e3c;
  /* 123a3e38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3e3a jmp 0x123a3e81 */
  goto L_123a3e81;
L_123a3e3c:;
  /* 123a3e3c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3e40 jne 0x123a3e5d */
  if (!C.zf) goto L_123a3e5d;
  /* 123a3e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3e46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3e48 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a3e4b push eax */
  push32((uint32_t)(EAX));
  /* 123a3e4c push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3e4e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a3e51 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3e52 call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x123a3e58u);
  /* 123a3e58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123a3e5b jmp 0x123a3e7a */
  goto L_123a3e7a;
L_123a3e5d:;
  /* 123a3e5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3e60 push edx */
  push32((uint32_t)(EDX));
  /* 123a3e61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3e64 push eax */
  push32((uint32_t)(EAX));
  /* 123a3e65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3e67 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a3e6a push ecx */
  push32((uint32_t)(ECX));
  /* 123a3e6b push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3e6d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a3e70 push edx */
  push32((uint32_t)(EDX));
  /* 123a3e71 call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x123a3e77u);
  /* 123a3e77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123a3e7a:;
  /* 123a3e7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a3e7d jmp 0x123a3e81 */
  goto L_123a3e81;
L_123a3e7f:;
  /* 123a3e7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a3e81:;
  /* 123a3e81 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 123a3e84 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a3e87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123a3e8e pop edi */
  EDI = (pop32());
  /* 123a3e8f pop esi */
  ESI = (pop32());
  /* 123a3e90 pop ebx */
  EBX = (pop32());
  /* 123a3e91 mov esp, ebp */
  ESP = (EBP);
  /* 123a3e93 pop ebp */
  EBP = (pop32());
  /* 123a3e94 ret  */
  ESPCHK(0x123a3d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ea0 @ 0x123a3ea0 (398 bytes, 140 insns) */
void f_123a3ea0(void) {
  FTRACE(0x123a3ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a3ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a3ea1 mov ebp, esp */
  EBP = (ESP);
  /* 123a3ea3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3ea5 push 0x123bcac0 */
  push32((uint32_t)(0x123bcac0u));
  /* 123a3eaa push 0x1239d9c8 */
  push32((uint32_t)(0x1239d9c8u));
  /* 123a3eaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123a3eb5 push eax */
  push32((uint32_t)(EAX));
  /* 123a3eb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123a3ebd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3ec0 push ebx */
  push32((uint32_t)(EBX));
  /* 123a3ec1 push esi */
  push32((uint32_t)(ESI));
  /* 123a3ec2 push edi */
  push32((uint32_t)(EDI));
  /* 123a3ec3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a3ec6 cmp dword ptr [0x123c0848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3ecd jne 0x123a3f12 */
  if (!C.zf) goto L_123a3f12;
  /* 123a3ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3ed7 call dword ptr [0x123c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3274))), 0x123a3eddu);
  /* 123a3edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3edf je 0x123a3eed */
  if (C.zf) goto L_123a3eed;
  /* 123a3ee1 mov dword ptr [0x123c0848], 1 */
  w32((uint32_t)(0x123c0848), (0x1u));
  /* 123a3eeb jmp 0x123a3f12 */
  goto L_123a3f12;
L_123a3eed:;
  /* 123a3eed push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3eef push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3ef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a3ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3ef5 call dword ptr [0x123c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c328c))), 0x123a3efbu);
  /* 123a3efb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3efd je 0x123a3f0b */
  if (C.zf) goto L_123a3f0b;
  /* 123a3eff mov dword ptr [0x123c0848], 2 */
  w32((uint32_t)(0x123c0848), (0x2u));
  /* 123a3f09 jmp 0x123a3f12 */
  goto L_123a3f12;
L_123a3f0b:;
  /* 123a3f0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3f0d jmp 0x123a4031 */
  goto L_123a4031;
L_123a3f12:;
  /* 123a3f12 cmp dword ptr [0x123c0848], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c0848))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3f19 jne 0x123a3f36 */
  if (!C.zf) goto L_123a3f36;
  /* 123a3f1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a3f1e push eax */
  push32((uint32_t)(EAX));
  /* 123a3f1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a3f22 push ecx */
  push32((uint32_t)(ECX));
  /* 123a3f23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3f26 push edx */
  push32((uint32_t)(EDX));
  /* 123a3f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3f2a push eax */
  push32((uint32_t)(EAX));
  /* 123a3f2b call dword ptr [0x123c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c328c))), 0x123a3f31u);
  /* 123a3f31 jmp 0x123a4031 */
  goto L_123a4031;
L_123a3f36:;
  /* 123a3f36 cmp dword ptr [0x123c0848], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c0848))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3f3d jne 0x123a402f */
  if (!C.zf) goto L_123a402f;
  /* 123a3f43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3f47 jne 0x123a3f52 */
  if (!C.zf) goto L_123a3f52;
  /* 123a3f49 mov ecx, dword ptr [0x123c06f8] */
  ECX = (r32((uint32_t)(0x123c06f8)));
  /* 123a3f4f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_123a3f52:;
  /* 123a3f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3f56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3f59 push edx */
  push32((uint32_t)(EDX));
  /* 123a3f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3f5d push eax */
  push32((uint32_t)(EAX));
  /* 123a3f5e call dword ptr [0x123c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3274))), 0x123a3f64u);
  /* 123a3f64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123a3f67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3f6b jne 0x123a3f74 */
  if (!C.zf) goto L_123a3f74;
  /* 123a3f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3f6f jmp 0x123a4031 */
  goto L_123a4031;
L_123a3f74:;
  /* 123a3f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a3f7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a3f7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a3f80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a3f83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123a3f85 call 0x12397a60 */
  push32(0x123a3f8au); f_12397a60();
  /* 123a3f8a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 123a3f8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a3f90 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a3f93 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123a3f96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123a3f9d jmp 0x123a3fb6 */
  goto L_123a3fb6;
  /* 123a3f9f mov eax, 1 */
  EAX = (0x1u);
  /* 123a3fa4 ret  */
  ESPCHK(0x123a3ea0u, _esp0);
  ESP += 4; return;
  /* 123a3fa5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123a3fa8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123a3faf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123a3fb6:;
  /* 123a3fb6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3fba jne 0x123a3fc0 */
  if (!C.zf) goto L_123a3fc0;
  /* 123a3fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3fbe jmp 0x123a4031 */
  goto L_123a4031;
L_123a3fc0:;
  /* 123a3fc0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a3fc3 push edx */
  push32((uint32_t)(EDX));
  /* 123a3fc4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a3fc7 push eax */
  push32((uint32_t)(EAX));
  /* 123a3fc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a3fcb push ecx */
  push32((uint32_t)(ECX));
  /* 123a3fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a3fcf push edx */
  push32((uint32_t)(EDX));
  /* 123a3fd0 call dword ptr [0x123c3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3274))), 0x123a3fd6u);
  /* 123a3fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a3fd8 jne 0x123a3fde */
  if (!C.zf) goto L_123a3fde;
  /* 123a3fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a3fdc jmp 0x123a4031 */
  goto L_123a4031;
L_123a3fde:;
  /* 123a3fde cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a3fe2 jne 0x123a4006 */
  if (!C.zf) goto L_123a4006;
  /* 123a3fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3fea push 0 */
  push32((uint32_t)(0x0u));
  /* 123a3fec push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a3fee mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a3ff1 push eax */
  push32((uint32_t)(EAX));
  /* 123a3ff2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123a3ff7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a3ffa push ecx */
  push32((uint32_t)(ECX));
  /* 123a3ffb call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a4001u);
  /* 123a4001 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123a4004 jmp 0x123a402a */
  goto L_123a402a;
L_123a4006:;
  /* 123a4006 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a4008 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a400a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a400d push edx */
  push32((uint32_t)(EDX));
  /* 123a400e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a4011 push eax */
  push32((uint32_t)(EAX));
  /* 123a4012 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a4014 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a4017 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4018 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 123a401d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a4020 push edx */
  push32((uint32_t)(EDX));
  /* 123a4021 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a4027u);
  /* 123a4027 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123a402a:;
  /* 123a402a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a402d jmp 0x123a4031 */
  goto L_123a4031;
L_123a402f:;
  /* 123a402f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a4031:;
  /* 123a4031 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 123a4034 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4037 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123a403e pop edi */
  EDI = (pop32());
  /* 123a403f pop esi */
  ESI = (pop32());
  /* 123a4040 pop ebx */
  EBX = (pop32());
  /* 123a4041 mov esp, ebp */
  ESP = (EBP);
  /* 123a4043 pop ebp */
  EBP = (pop32());
  /* 123a4044 ret  */
  ESPCHK(0x123a3ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014050 @ 0x123a4050 (11 bytes, 6 insns) */
void f_123a4050(void) {
  FTRACE(0x123a4050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4050 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4051 mov ebp, esp */
  EBP = (ESP);
  /* 123a4053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4056 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4059 pop ebp */
  EBP = (pop32());
  /* 123a405a ret  */
  ESPCHK(0x123a4050u, _esp0);
  ESP += 4; return;
}

/* FUN_10014060 @ 0x123a4060 (147 bytes, 43 insns) */
void f_123a4060(void) {
  FTRACE(0x123a4060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4060 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4061 mov ebp, esp */
  EBP = (ESP);
  /* 123a4063 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4064 cmp dword ptr [0x123c06e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a406b jne 0x123a4087 */
  if (!C.zf) goto L_123a4087;
  /* 123a406d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4071 jl 0x123a4082 */
  if ((C.sf!=C.of)) goto L_123a4082;
  /* 123a4073 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4077 jg 0x123a4082 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a4082;
  /* 123a4079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a407c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a407f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123a4082:;
  /* 123a4082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4085 jmp 0x123a40ef */
  goto L_123a40ef;
L_123a4087:;
  /* 123a4087 push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 123a408c call dword ptr [0x123c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ec))), 0x123a4092u);
  /* 123a4092 cmp dword ptr [0x123c0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4099 je 0x123a40b9 */
  if (C.zf) goto L_123a40b9;
  /* 123a409b push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 123a40a0 call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x123a40a6u);
  /* 123a40a6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a40a8 call 0x123982c0 */
  push32(0x123a40adu); f_123982c0();
  /* 123a40ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a40b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123a40b7 jmp 0x123a40c0 */
  goto L_123a40c0;
L_123a40b9:;
  /* 123a40b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123a40c0:;
  /* 123a40c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a40c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a40c4 call 0x123a4100 */
  push32(0x123a40c9u); f_123a4100();
  /* 123a40c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a40cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a40cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a40d3 je 0x123a40e1 */
  if (C.zf) goto L_123a40e1;
  /* 123a40d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123a40d7 call 0x12398360 */
  push32(0x123a40dcu); f_12398360();
  /* 123a40dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a40df jmp 0x123a40ec */
  goto L_123a40ec;
L_123a40e1:;
  /* 123a40e1 push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 123a40e6 call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x123a40ecu);
L_123a40ec:;
  /* 123a40ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_123a40ef:;
  /* 123a40ef mov esp, ebp */
  ESP = (EBP);
  /* 123a40f1 pop ebp */
  EBP = (pop32());
  /* 123a40f2 ret  */
  ESPCHK(0x123a4060u, _esp0);
  ESP += 4; return;
}

/* FUN_10014100 @ 0x123a4100 (299 bytes, 91 insns) */
void f_123a4100(void) {
  FTRACE(0x123a4100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4100 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4101 mov ebp, esp */
  EBP = (ESP);
  /* 123a4103 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4106 cmp dword ptr [0x123c06e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a410d jne 0x123a412c */
  if (!C.zf) goto L_123a412c;
  /* 123a410f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4113 jl 0x123a4124 */
  if ((C.sf!=C.of)) goto L_123a4124;
  /* 123a4115 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4119 jg 0x123a4124 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a4124;
  /* 123a411b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a411e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4121 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123a4124:;
  /* 123a4124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4127 jmp 0x123a4227 */
  goto L_123a4227;
L_123a412c:;
  /* 123a412c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4133 jge 0x123a4173 */
  if ((C.sf==C.of)) goto L_123a4173;
  /* 123a4135 cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a413c jle 0x123a4151 */
  if ((C.zf||C.sf!=C.of)) goto L_123a4151;
  /* 123a413e push 1 */
  push32((uint32_t)(0x1u));
  /* 123a4140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4143 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4144 call 0x1239a8d0 */
  push32(0x123a4149u); f_1239a8d0();
  /* 123a4149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a414c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123a414f jmp 0x123a4165 */
  goto L_123a4165;
L_123a4151:;
  /* 123a4151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4154 mov eax, dword ptr [0x123bec98] */
  EAX = (r32((uint32_t)(0x123bec98)));
  /* 123a4159 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a415b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 123a415f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123a4162 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123a4165:;
  /* 123a4165 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4169 jne 0x123a4173 */
  if (!C.zf) goto L_123a4173;
  /* 123a416b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a416e jmp 0x123a4227 */
  goto L_123a4227;
L_123a4173:;
  /* 123a4173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4176 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123a4179 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a417f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a4185 mov eax, dword ptr [0x123bec98] */
  EAX = (r32((uint32_t)(0x123bec98)));
  /* 123a418a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a418c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 123a4190 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 123a4196 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a4198 je 0x123a41bc */
  if (C.zf) goto L_123a41bc;
  /* 123a419a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a419d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123a41a0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a41a6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 123a41a9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 123a41ac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 123a41af mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 123a41b3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123a41ba jmp 0x123a41cd */
  goto L_123a41cd;
L_123a41bc:;
  /* 123a41bc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 123a41bf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 123a41c2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 123a41c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_123a41cd:;
  /* 123a41cd push 1 */
  push32((uint32_t)(0x1u));
  /* 123a41cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123a41d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 123a41d3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 123a41d6 push edx */
  push32((uint32_t)(EDX));
  /* 123a41d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a41da push eax */
  push32((uint32_t)(EAX));
  /* 123a41db lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123a41de push ecx */
  push32((uint32_t)(ECX));
  /* 123a41df push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123a41e4 mov edx, dword ptr [0x123c06e8] */
  EDX = (r32((uint32_t)(0x123c06e8)));
  /* 123a41ea push edx */
  push32((uint32_t)(EDX));
  /* 123a41eb call 0x1239ccb0 */
  push32(0x123a41f0u); f_1239ccb0();
  /* 123a41f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a41f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a41f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a41fa jne 0x123a4201 */
  if (!C.zf) goto L_123a4201;
  /* 123a41fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a41ff jmp 0x123a4227 */
  goto L_123a4227;
L_123a4201:;
  /* 123a4201 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4205 jne 0x123a4211 */
  if (!C.zf) goto L_123a4211;
  /* 123a4207 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a420a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a420f jmp 0x123a4227 */
  goto L_123a4227;
L_123a4211:;
  /* 123a4211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4219 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 123a421c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123a4222 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 123a4225 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_123a4227:;
  /* 123a4227 mov esp, ebp */
  ESP = (EBP);
  /* 123a4229 pop ebp */
  EBP = (pop32());
  /* 123a422a ret  */
  ESPCHK(0x123a4100u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x123a4230 (52 bytes, 19 insns) */
void f_123a4230(void) {
  FTRACE(0x123a4230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4230 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123a4234 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 123a4238 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123a423a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123a423e jne 0x123a4249 */
  if (!C.zf) goto L_123a4249;
  /* 123a4240 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 123a4244 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123a4246 ret 0x10 */
  ESPCHK(0x123a4230u, _esp0);
  ESP += 20; return;
L_123a4249:;
  /* 123a4249 push ebx */
  push32((uint32_t)(EBX));
  /* 123a424a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123a424c mov ebx, eax */
  EBX = (EAX);
  /* 123a424e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123a4252 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123a4256 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4258 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123a425c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 123a425e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4260 pop ebx */
  EBX = (pop32());
  /* 123a4261 ret 0x10 */
  ESPCHK(0x123a4230u, _esp0);
  ESP += 20; return;
}

/* FUN_10014270 @ 0x123a4270 (46 bytes, 18 insns) */
void f_123a4270(void) {
  FTRACE(0x123a4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4270 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4271 mov ebp, esp */
  EBP = (ESP);
  /* 123a4273 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4274 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a4276 call 0x123982c0 */
  push32(0x123a427bu); f_123982c0();
  /* 123a427b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a427e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4281 push eax */
  push32((uint32_t)(EAX));
  /* 123a4282 call 0x123a42a0 */
  push32(0x123a4287u); f_123a42a0();
  /* 123a4287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a428a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a428d push 0xc */
  push32((uint32_t)(0xcu));
  /* 123a428f call 0x12398360 */
  push32(0x123a4294u); f_12398360();
  /* 123a4294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a429a mov esp, ebp */
  ESP = (EBP);
  /* 123a429c pop ebp */
  EBP = (pop32());
  /* 123a429d ret  */
  ESPCHK(0x123a4270u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x123a42a0 (198 bytes, 69 insns) */
void f_123a42a0(void) {
  FTRACE(0x123a42a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a42a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a42a1 mov ebp, esp */
  EBP = (ESP);
  /* 123a42a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a42a6 mov eax, dword ptr [0x123c0504] */
  EAX = (r32((uint32_t)(0x123c0504)));
  /* 123a42ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a42ae cmp dword ptr [0x123c2000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c2000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a42b5 jne 0x123a42be */
  if (!C.zf) goto L_123a42be;
  /* 123a42b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a42b9 jmp 0x123a4362 */
  goto L_123a4362;
L_123a42be:;
  /* 123a42be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a42c2 jne 0x123a42e6 */
  if (!C.zf) goto L_123a42e6;
  /* 123a42c4 cmp dword ptr [0x123c050c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c050c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a42cb je 0x123a42e6 */
  if (C.zf) goto L_123a42e6;
  /* 123a42cd call 0x123a43c0 */
  push32(0x123a42d2u); f_123a43c0();
  /* 123a42d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a42d4 je 0x123a42dd */
  if (C.zf) goto L_123a42dd;
  /* 123a42d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a42d8 jmp 0x123a4362 */
  goto L_123a4362;
L_123a42dd:;
  /* 123a42dd mov ecx, dword ptr [0x123c0504] */
  ECX = (r32((uint32_t)(0x123c0504)));
  /* 123a42e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123a42e6:;
  /* 123a42e6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a42ea je 0x123a4360 */
  if (C.zf) goto L_123a4360;
  /* 123a42ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a42f0 je 0x123a4360 */
  if (C.zf) goto L_123a4360;
  /* 123a42f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a42f5 push edx */
  push32((uint32_t)(EDX));
  /* 123a42f6 call 0x123976f0 */
  push32(0x123a42fbu); f_123976f0();
  /* 123a42fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a42fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123a4301:;
  /* 123a4301 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4304 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4307 je 0x123a4360 */
  if (C.zf) goto L_123a4360;
  /* 123a4309 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a430c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a430e push edx */
  push32((uint32_t)(EDX));
  /* 123a430f call 0x123976f0 */
  push32(0x123a4314u); f_123976f0();
  /* 123a4314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4317 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a431a jbe 0x123a4355 */
  if ((C.cf||C.zf)) goto L_123a4355;
  /* 123a431c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a431f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a4321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4324 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 123a4328 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a432b jne 0x123a4355 */
  if (!C.zf) goto L_123a4355;
  /* 123a432d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4330 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4334 push edx */
  push32((uint32_t)(EDX));
  /* 123a4335 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4338 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a433a push ecx */
  push32((uint32_t)(ECX));
  /* 123a433b call 0x123a4370 */
  push32(0x123a4340u); f_123a4370();
  /* 123a4340 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a4345 jne 0x123a4355 */
  if (!C.zf) goto L_123a4355;
  /* 123a4347 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a434a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a434c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a434f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 123a4353 jmp 0x123a4362 */
  goto L_123a4362;
L_123a4355:;
  /* 123a4355 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4358 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a435b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a435e jmp 0x123a4301 */
  goto L_123a4301;
L_123a4360:;
  /* 123a4360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a4362:;
  /* 123a4362 mov esp, ebp */
  ESP = (EBP);
  /* 123a4364 pop ebp */
  EBP = (pop32());
  /* 123a4365 ret  */
  ESPCHK(0x123a42a0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x123a4370 (79 bytes, 32 insns) */
void f_123a4370(void) {
  FTRACE(0x123a4370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4370 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4371 mov ebp, esp */
  EBP = (ESP);
  /* 123a4373 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4374 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4378 jne 0x123a437e */
  if (!C.zf) goto L_123a437e;
  /* 123a437a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a437c jmp 0x123a43bb */
  goto L_123a43bb;
L_123a437e:;
  /* 123a437e mov eax, dword ptr [0x123c1bc4] */
  EAX = (r32((uint32_t)(0x123c1bc4)));
  /* 123a4383 push eax */
  push32((uint32_t)(EAX));
  /* 123a4384 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a4387 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4388 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a438b push edx */
  push32((uint32_t)(EDX));
  /* 123a438c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a438f push eax */
  push32((uint32_t)(EAX));
  /* 123a4390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4393 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4394 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a4396 mov edx, dword ptr [0x123c1e64] */
  EDX = (r32((uint32_t)(0x123c1e64)));
  /* 123a439c push edx */
  push32((uint32_t)(EDX));
  /* 123a439d call 0x123a4470 */
  push32(0x123a43a2u); f_123a4470();
  /* 123a43a2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a43a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a43a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a43ac jne 0x123a43b5 */
  if (!C.zf) goto L_123a43b5;
  /* 123a43ae mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 123a43b3 jmp 0x123a43bb */
  goto L_123a43bb;
L_123a43b5:;
  /* 123a43b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a43b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_123a43bb:;
  /* 123a43bb mov esp, ebp */
  ESP = (EBP);
  /* 123a43bd pop ebp */
  EBP = (pop32());
  /* 123a43be ret  */
  ESPCHK(0x123a4370u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x123a43c0 (174 bytes, 66 insns) */
void f_123a43c0(void) {
  FTRACE(0x123a43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a43c1 mov ebp, esp */
  EBP = (ESP);
  /* 123a43c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a43c6 mov eax, dword ptr [0x123c050c] */
  EAX = (r32((uint32_t)(0x123c050c)));
  /* 123a43cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123a43ce:;
  /* 123a43ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a43d1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a43d4 je 0x123a4468 */
  if (C.zf) goto L_123a4468;
  /* 123a43da push 0 */
  push32((uint32_t)(0x0u));
  /* 123a43dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123a43de push 0 */
  push32((uint32_t)(0x0u));
  /* 123a43e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a43e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a43e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a43e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a43e9 push eax */
  push32((uint32_t)(EAX));
  /* 123a43ea push 0 */
  push32((uint32_t)(0x0u));
  /* 123a43ec push 1 */
  push32((uint32_t)(0x1u));
  /* 123a43ee call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a43f4u);
  /* 123a43f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a43f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a43fb jne 0x123a4402 */
  if (!C.zf) goto L_123a4402;
  /* 123a43fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4400 jmp 0x123a446a */
  goto L_123a446a;
L_123a4402:;
  /* 123a4402 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123a4404 push 0x123bcacc */
  push32((uint32_t)(0x123bcaccu));
  /* 123a4409 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a440b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a440e push ecx */
  push32((uint32_t)(ECX));
  /* 123a440f call 0x123948c0 */
  push32(0x123a4414u); f_123948c0();
  /* 123a4414 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4417 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a441a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a441e jne 0x123a4425 */
  if (!C.zf) goto L_123a4425;
  /* 123a4420 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4423 jmp 0x123a446a */
  goto L_123a446a;
L_123a4425:;
  /* 123a4425 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a4427 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a4429 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a442c push edx */
  push32((uint32_t)(EDX));
  /* 123a442d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4430 push eax */
  push32((uint32_t)(EAX));
  /* 123a4431 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a4433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4436 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a4438 push edx */
  push32((uint32_t)(EDX));
  /* 123a4439 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a443b push 1 */
  push32((uint32_t)(0x1u));
  /* 123a443d call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x123a4443u);
  /* 123a4443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a4445 jne 0x123a444c */
  if (!C.zf) goto L_123a444c;
  /* 123a4447 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a444a jmp 0x123a446a */
  goto L_123a446a;
L_123a444c:;
  /* 123a444c push 0 */
  push32((uint32_t)(0x0u));
  /* 123a444e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4451 push eax */
  push32((uint32_t)(EAX));
  /* 123a4452 call 0x123a48c0 */
  push32(0x123a4457u); f_123a48c0();
  /* 123a4457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a445a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a445d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4460 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a4463 jmp 0x123a43ce */
  goto L_123a43ce;
L_123a4468:;
  /* 123a4468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a446a:;
  /* 123a446a mov esp, ebp */
  ESP = (EBP);
  /* 123a446c pop ebp */
  EBP = (pop32());
  /* 123a446d ret  */
  ESPCHK(0x123a43c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014470 @ 0x123a4470 (970 bytes, 340 insns) */
void f_123a4470(void) {
  FTRACE(0x123a4470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4470 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4471 mov ebp, esp */
  EBP = (ESP);
  /* 123a4473 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123a4475 push 0x123bcb20 */
  push32((uint32_t)(0x123bcb20u));
  /* 123a447a push 0x1239d9c8 */
  push32((uint32_t)(0x1239d9c8u));
  /* 123a447f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 123a4485 push eax */
  push32((uint32_t)(EAX));
  /* 123a4486 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 123a448d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4490 push ebx */
  push32((uint32_t)(EBX));
  /* 123a4491 push esi */
  push32((uint32_t)(ESI));
  /* 123a4492 push edi */
  push32((uint32_t)(EDI));
  /* 123a4493 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a4496 cmp dword ptr [0x123c084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a449d jne 0x123a44f6 */
  if (!C.zf) goto L_123a44f6;
  /* 123a449f push 1 */
  push32((uint32_t)(0x1u));
  /* 123a44a1 push 0x123bc17c */
  push32((uint32_t)(0x123bc17cu));
  /* 123a44a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a44a8 push 0x123bc17c */
  push32((uint32_t)(0x123bc17cu));
  /* 123a44ad push 0 */
  push32((uint32_t)(0x0u));
  /* 123a44af push 0 */
  push32((uint32_t)(0x0u));
  /* 123a44b1 call dword ptr [0x123c3270] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3270))), 0x123a44b7u);
  /* 123a44b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a44b9 je 0x123a44c7 */
  if (C.zf) goto L_123a44c7;
  /* 123a44bb mov dword ptr [0x123c084c], 1 */
  w32((uint32_t)(0x123c084c), (0x1u));
  /* 123a44c5 jmp 0x123a44f6 */
  goto L_123a44f6;
L_123a44c7:;
  /* 123a44c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a44c9 push 0x123bc178 */
  push32((uint32_t)(0x123bc178u));
  /* 123a44ce push 1 */
  push32((uint32_t)(0x1u));
  /* 123a44d0 push 0x123bc178 */
  push32((uint32_t)(0x123bc178u));
  /* 123a44d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a44d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a44d9 call dword ptr [0x123c327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c327c))), 0x123a44dfu);
  /* 123a44df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a44e1 je 0x123a44ef */
  if (C.zf) goto L_123a44ef;
  /* 123a44e3 mov dword ptr [0x123c084c], 2 */
  w32((uint32_t)(0x123c084c), (0x2u));
  /* 123a44ed jmp 0x123a44f6 */
  goto L_123a44f6;
L_123a44ef:;
  /* 123a44ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a44f1 jmp 0x123a4854 */
  goto L_123a4854;
L_123a44f6:;
  /* 123a44f6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a44fa jle 0x123a450f */
  if ((C.zf||C.sf!=C.of)) goto L_123a450f;
  /* 123a44fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a44ff push eax */
  push32((uint32_t)(EAX));
  /* 123a4500 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a4503 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4504 call 0x123a4870 */
  push32(0x123a4509u); f_123a4870();
  /* 123a4509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a450c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_123a450f:;
  /* 123a450f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4513 jle 0x123a4528 */
  if ((C.zf||C.sf!=C.of)) goto L_123a4528;
  /* 123a4515 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a4518 push edx */
  push32((uint32_t)(EDX));
  /* 123a4519 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a451c push eax */
  push32((uint32_t)(EAX));
  /* 123a451d call 0x123a4870 */
  push32(0x123a4522u); f_123a4870();
  /* 123a4522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4525 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_123a4528:;
  /* 123a4528 cmp dword ptr [0x123c084c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c084c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a452f jne 0x123a4554 */
  if (!C.zf) goto L_123a4554;
  /* 123a4531 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a4534 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4535 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a4538 push edx */
  push32((uint32_t)(EDX));
  /* 123a4539 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a453c push eax */
  push32((uint32_t)(EAX));
  /* 123a453d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a4540 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4541 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4544 push edx */
  push32((uint32_t)(EDX));
  /* 123a4545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4548 push eax */
  push32((uint32_t)(EAX));
  /* 123a4549 call dword ptr [0x123c327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c327c))), 0x123a454fu);
  /* 123a454f jmp 0x123a4854 */
  goto L_123a4854;
L_123a4554:;
  /* 123a4554 cmp dword ptr [0x123c084c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c084c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a455b jne 0x123a4852 */
  if (!C.zf) goto L_123a4852;
  /* 123a4561 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4565 jne 0x123a4570 */
  if (!C.zf) goto L_123a4570;
  /* 123a4567 mov ecx, dword ptr [0x123c06f8] */
  ECX = (r32((uint32_t)(0x123c06f8)));
  /* 123a456d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_123a4570:;
  /* 123a4570 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4574 je 0x123a4580 */
  if (C.zf) goto L_123a4580;
  /* 123a4576 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a457a jne 0x123a46fc */
  if (!C.zf) goto L_123a46fc;
L_123a4580:;
  /* 123a4580 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a4583 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4586 jne 0x123a4592 */
  if (!C.zf) goto L_123a4592;
  /* 123a4588 mov eax, 2 */
  EAX = (0x2u);
  /* 123a458d jmp 0x123a4854 */
  goto L_123a4854;
L_123a4592:;
  /* 123a4592 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4596 jle 0x123a45a2 */
  if ((C.zf||C.sf!=C.of)) goto L_123a45a2;
  /* 123a4598 mov eax, 1 */
  EAX = (0x1u);
  /* 123a459d jmp 0x123a4854 */
  goto L_123a4854;
L_123a45a2:;
  /* 123a45a2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a45a6 jle 0x123a45b2 */
  if ((C.zf||C.sf!=C.of)) goto L_123a45b2;
  /* 123a45a8 mov eax, 3 */
  EAX = (0x3u);
  /* 123a45ad jmp 0x123a4854 */
  goto L_123a4854;
L_123a45b2:;
  /* 123a45b2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 123a45b5 push eax */
  push32((uint32_t)(EAX));
  /* 123a45b6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 123a45b9 push ecx */
  push32((uint32_t)(ECX));
  /* 123a45ba call dword ptr [0x123c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3354))), 0x123a45c0u);
  /* 123a45c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a45c2 jne 0x123a45cb */
  if (!C.zf) goto L_123a45cb;
  /* 123a45c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a45c6 jmp 0x123a4854 */
  goto L_123a4854;
L_123a45cb:;
  /* 123a45cb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a45cf jne 0x123a45d7 */
  if (!C.zf) goto L_123a45d7;
  /* 123a45d1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a45d5 je 0x123a4604 */
  if (C.zf) goto L_123a4604;
L_123a45d7:;
  /* 123a45d7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a45db jne 0x123a45e3 */
  if (!C.zf) goto L_123a45e3;
  /* 123a45dd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a45e1 je 0x123a4604 */
  if (C.zf) goto L_123a4604;
L_123a45e3:;
  /* 123a45e3 push 0x123bcae0 */
  push32((uint32_t)(0x123bcae0u));
  /* 123a45e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a45ea push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 123a45ef push 0x123bcad8 */
  push32((uint32_t)(0x123bcad8u));
  /* 123a45f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a45f6 call 0x12393980 */
  push32(0x123a45fbu); f_12393980();
  /* 123a45fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a45fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4601 jne 0x123a4604 */
  if (!C.zf) goto L_123a4604;
  /* 123a4603 int3  */
  x86_unimpl("int3 @ 0x123a4603");
L_123a4604:;
  /* 123a4604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a4606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a4608 jne 0x123a45cb */
  if (!C.zf) goto L_123a45cb;
  /* 123a460a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a460e jle 0x123a4683 */
  if ((C.zf||C.sf!=C.of)) goto L_123a4683;
  /* 123a4610 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4614 jae 0x123a4620 */
  if (!C.cf) goto L_123a4620;
  /* 123a4616 mov eax, 3 */
  EAX = (0x3u);
  /* 123a461b jmp 0x123a4854 */
  goto L_123a4854;
L_123a4620:;
  /* 123a4620 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 123a4623 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 123a4626 jmp 0x123a4631 */
  goto L_123a4631;
L_123a4628:;
  /* 123a4628 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a462b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a462e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_123a4631:;
  /* 123a4631 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a4634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4636 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a4638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a463a je 0x123a4679 */
  if (C.zf) goto L_123a4679;
  /* 123a463c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a463f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a4641 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 123a4644 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a4646 je 0x123a4679 */
  if (C.zf) goto L_123a4679;
  /* 123a4648 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a464b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a464d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a464f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a4652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4654 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a4656 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4658 jl 0x123a4677 */
  if ((C.sf!=C.of)) goto L_123a4677;
  /* 123a465a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a465d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a465f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a4661 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a4664 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a4666 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123a4669 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a466b jg 0x123a4677 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a4677;
  /* 123a466d mov eax, 2 */
  EAX = (0x2u);
  /* 123a4672 jmp 0x123a4854 */
  goto L_123a4854;
L_123a4677:;
  /* 123a4677 jmp 0x123a4628 */
  goto L_123a4628;
L_123a4679:;
  /* 123a4679 mov eax, 3 */
  EAX = (0x3u);
  /* 123a467e jmp 0x123a4854 */
  goto L_123a4854;
L_123a4683:;
  /* 123a4683 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4687 jle 0x123a46fc */
  if ((C.zf||C.sf!=C.of)) goto L_123a46fc;
  /* 123a4689 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a468d jae 0x123a4699 */
  if (!C.cf) goto L_123a4699;
  /* 123a468f mov eax, 1 */
  EAX = (0x1u);
  /* 123a4694 jmp 0x123a4854 */
  goto L_123a4854;
L_123a4699:;
  /* 123a4699 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 123a469c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 123a469f jmp 0x123a46aa */
  goto L_123a46aa;
L_123a46a1:;
  /* 123a46a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a46a4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a46a7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_123a46aa:;
  /* 123a46aa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a46ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a46af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a46b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a46b3 je 0x123a46f2 */
  if (C.zf) goto L_123a46f2;
  /* 123a46b5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a46b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a46ba mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123a46bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a46bf je 0x123a46f2 */
  if (C.zf) goto L_123a46f2;
  /* 123a46c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a46c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a46c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a46c8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a46cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a46cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a46cf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a46d1 jl 0x123a46f0 */
  if ((C.sf!=C.of)) goto L_123a46f0;
  /* 123a46d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a46d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a46d8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a46da mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 123a46dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a46df mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123a46e2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a46e4 jg 0x123a46f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a46f0;
  /* 123a46e6 mov eax, 2 */
  EAX = (0x2u);
  /* 123a46eb jmp 0x123a4854 */
  goto L_123a4854;
L_123a46f0:;
  /* 123a46f0 jmp 0x123a46a1 */
  goto L_123a46a1;
L_123a46f2:;
  /* 123a46f2 mov eax, 1 */
  EAX = (0x1u);
  /* 123a46f7 jmp 0x123a4854 */
  goto L_123a4854;
L_123a46fc:;
  /* 123a46fc push 0 */
  push32((uint32_t)(0x0u));
  /* 123a46fe push 0 */
  push32((uint32_t)(0x0u));
  /* 123a4700 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a4703 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4704 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a4707 push edx */
  push32((uint32_t)(EDX));
  /* 123a4708 push 9 */
  push32((uint32_t)(0x9u));
  /* 123a470a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123a470d push eax */
  push32((uint32_t)(EAX));
  /* 123a470e call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x123a4714u);
  /* 123a4714 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123a4717 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a471b jne 0x123a4724 */
  if (!C.zf) goto L_123a4724;
  /* 123a471d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a471f jmp 0x123a4854 */
  goto L_123a4854;
L_123a4724:;
  /* 123a4724 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a472b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a472e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a4730 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4733 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123a4735 call 0x12397a60 */
  push32(0x123a473au); f_12397a60();
  /* 123a473a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 123a473d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a4740 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 123a4743 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123a4746 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123a474d jmp 0x123a4766 */
  goto L_123a4766;
  /* 123a474f mov eax, 1 */
  EAX = (0x1u);
  /* 123a4754 ret  */
  ESPCHK(0x123a4470u, _esp0);
  ESP += 4; return;
  /* 123a4755 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123a4758 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123a475f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123a4766:;
  /* 123a4766 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a476a jne 0x123a4773 */
  if (!C.zf) goto L_123a4773;
  /* 123a476c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a476e jmp 0x123a4854 */
  goto L_123a4854;
L_123a4773:;
  /* 123a4773 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a4776 push edx */
  push32((uint32_t)(EDX));
  /* 123a4777 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a477a push eax */
  push32((uint32_t)(EAX));
  /* 123a477b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a477e push ecx */
  push32((uint32_t)(ECX));
  /* 123a477f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a4782 push edx */
  push32((uint32_t)(EDX));
  /* 123a4783 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a4785 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123a4788 push eax */
  push32((uint32_t)(EAX));
  /* 123a4789 call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x123a478fu);
  /* 123a478f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a4791 jne 0x123a479a */
  if (!C.zf) goto L_123a479a;
  /* 123a4793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4795 jmp 0x123a4854 */
  goto L_123a4854;
L_123a479a:;
  /* 123a479a push 0 */
  push32((uint32_t)(0x0u));
  /* 123a479c push 0 */
  push32((uint32_t)(0x0u));
  /* 123a479e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a47a1 push ecx */
  push32((uint32_t)(ECX));
  /* 123a47a2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a47a5 push edx */
  push32((uint32_t)(EDX));
  /* 123a47a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 123a47a8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123a47ab push eax */
  push32((uint32_t)(EAX));
  /* 123a47ac call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x123a47b2u);
  /* 123a47b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123a47b5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a47b9 jne 0x123a47c2 */
  if (!C.zf) goto L_123a47c2;
  /* 123a47bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a47bd jmp 0x123a4854 */
  goto L_123a4854;
L_123a47c2:;
  /* 123a47c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123a47c9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a47cc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a47ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a47d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 123a47d3 call 0x12397a60 */
  push32(0x123a47d8u); f_12397a60();
  /* 123a47d8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 123a47db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 123a47de mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 123a47e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 123a47e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 123a47eb jmp 0x123a4804 */
  goto L_123a4804;
  /* 123a47ed mov eax, 1 */
  EAX = (0x1u);
  /* 123a47f2 ret  */
  ESPCHK(0x123a4470u, _esp0);
  ESP += 4; return;
  /* 123a47f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 123a47f6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 123a47fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_123a4804:;
  /* 123a4804 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4808 jne 0x123a480e */
  if (!C.zf) goto L_123a480e;
  /* 123a480a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a480c jmp 0x123a4854 */
  goto L_123a4854;
L_123a480e:;
  /* 123a480e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a4811 push edx */
  push32((uint32_t)(EDX));
  /* 123a4812 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a4815 push eax */
  push32((uint32_t)(EAX));
  /* 123a4816 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 123a4819 push ecx */
  push32((uint32_t)(ECX));
  /* 123a481a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123a481d push edx */
  push32((uint32_t)(EDX));
  /* 123a481e push 1 */
  push32((uint32_t)(0x1u));
  /* 123a4820 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 123a4823 push eax */
  push32((uint32_t)(EAX));
  /* 123a4824 call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x123a482au);
  /* 123a482a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a482c jne 0x123a4832 */
  if (!C.zf) goto L_123a4832;
  /* 123a482e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4830 jmp 0x123a4854 */
  goto L_123a4854;
L_123a4832:;
  /* 123a4832 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a4835 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4836 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a4839 push edx */
  push32((uint32_t)(EDX));
  /* 123a483a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a483d push eax */
  push32((uint32_t)(EAX));
  /* 123a483e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a4841 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4842 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4845 push edx */
  push32((uint32_t)(EDX));
  /* 123a4846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4849 push eax */
  push32((uint32_t)(EAX));
  /* 123a484a call dword ptr [0x123c3270] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3270))), 0x123a4850u);
  /* 123a4850 jmp 0x123a4854 */
  goto L_123a4854;
L_123a4852:;
  /* 123a4852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a4854:;
  /* 123a4854 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 123a4857 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a485a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 123a4861 pop edi */
  EDI = (pop32());
  /* 123a4862 pop esi */
  ESI = (pop32());
  /* 123a4863 pop ebx */
  EBX = (pop32());
  /* 123a4864 mov esp, ebp */
  ESP = (EBP);
  /* 123a4866 pop ebp */
  EBP = (pop32());
  /* 123a4867 ret  */
  ESPCHK(0x123a4470u, _esp0);
  ESP += 4; return;
}

/* FUN_10014870 @ 0x123a4870 (80 bytes, 32 insns) */
void f_123a4870(void) {
  FTRACE(0x123a4870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4870 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4871 mov ebp, esp */
  EBP = (ESP);
  /* 123a4873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4876 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4879 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a487c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a487f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123a4882:;
  /* 123a4882 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4885 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4888 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a488b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a488e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a4890 je 0x123a48a7 */
  if (C.zf) goto L_123a48a7;
  /* 123a4892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4895 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a4898 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a489a je 0x123a48a7 */
  if (C.zf) goto L_123a48a7;
  /* 123a489c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a489f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a48a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a48a5 jmp 0x123a4882 */
  goto L_123a4882;
L_123a48a7:;
  /* 123a48a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a48aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a48ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a48af jne 0x123a48b9 */
  if (!C.zf) goto L_123a48b9;
  /* 123a48b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a48b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a48b7 jmp 0x123a48bc */
  goto L_123a48bc;
L_123a48b9:;
  /* 123a48b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_123a48bc:;
  /* 123a48bc mov esp, ebp */
  ESP = (EBP);
  /* 123a48be pop ebp */
  EBP = (pop32());
  /* 123a48bf ret  */
  ESPCHK(0x123a4870u, _esp0);
  ESP += 4; return;
}

/* FUN_100148c0 @ 0x123a48c0 (736 bytes, 224 insns) */
void f_123a48c0(void) {
  FTRACE(0x123a48c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a48c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a48c1 mov ebp, esp */
  EBP = (ESP);
  /* 123a48c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a48c6 push esi */
  push32((uint32_t)(ESI));
  /* 123a48c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a48cb je 0x123a48ec */
  if (C.zf) goto L_123a48ec;
  /* 123a48cd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 123a48cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a48d2 push eax */
  push32((uint32_t)(EAX));
  /* 123a48d3 call 0x123a4d10 */
  push32(0x123a48d8u); f_123a4d10();
  /* 123a48d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a48db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123a48de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a48e2 je 0x123a48ec */
  if (C.zf) goto L_123a48ec;
  /* 123a48e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a48e7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a48ea jne 0x123a48f4 */
  if (!C.zf) goto L_123a48f4;
L_123a48ec:;
  /* 123a48ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a48ef jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a48f4:;
  /* 123a48f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a48f7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123a48fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a48fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a48ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 123a4900 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a4903 mov ecx, dword ptr [0x123c0504] */
  ECX = (r32((uint32_t)(0x123c0504)));
  /* 123a4909 cmp ecx, dword ptr [0x123c0508] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c0508))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a490f jne 0x123a4925 */
  if (!C.zf) goto L_123a4925;
  /* 123a4911 mov edx, dword ptr [0x123c0504] */
  EDX = (r32((uint32_t)(0x123c0504)));
  /* 123a4917 push edx */
  push32((uint32_t)(EDX));
  /* 123a4918 call 0x123a4c20 */
  push32(0x123a491du); f_123a4c20();
  /* 123a491d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4920 mov dword ptr [0x123c0504], eax */
  w32((uint32_t)(0x123c0504), (EAX));
L_123a4925:;
  /* 123a4925 cmp dword ptr [0x123c0504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a492c jne 0x123a49e5 */
  if (!C.zf) goto L_123a49e5;
  /* 123a4932 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4936 je 0x123a4957 */
  if (C.zf) goto L_123a4957;
  /* 123a4938 cmp dword ptr [0x123c050c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c050c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a493f je 0x123a4957 */
  if (C.zf) goto L_123a4957;
  /* 123a4941 call 0x123a43c0 */
  push32(0x123a4946u); f_123a43c0();
  /* 123a4946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a4948 je 0x123a4952 */
  if (C.zf) goto L_123a4952;
  /* 123a494a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a494d jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a4952:;
  /* 123a4952 jmp 0x123a49e5 */
  goto L_123a49e5;
L_123a4957:;
  /* 123a4957 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a495b je 0x123a4964 */
  if (C.zf) goto L_123a4964;
  /* 123a495d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a495f jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a4964:;
  /* 123a4964 cmp dword ptr [0x123c0504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a496b jne 0x123a49a4 */
  if (!C.zf) goto L_123a49a4;
  /* 123a496d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 123a4972 push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a4977 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4979 push 4 */
  push32((uint32_t)(0x4u));
  /* 123a497b call 0x123948c0 */
  push32(0x123a4980u); f_123948c0();
  /* 123a4980 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4983 mov dword ptr [0x123c0504], eax */
  w32((uint32_t)(0x123c0504), (EAX));
  /* 123a4988 cmp dword ptr [0x123c0504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a498f jne 0x123a4999 */
  if (!C.zf) goto L_123a4999;
  /* 123a4991 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4994 jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a4999:;
  /* 123a4999 mov eax, dword ptr [0x123c0504] */
  EAX = (r32((uint32_t)(0x123c0504)));
  /* 123a499e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123a49a4:;
  /* 123a49a4 cmp dword ptr [0x123c050c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c050c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a49ab jne 0x123a49e5 */
  if (!C.zf) goto L_123a49e5;
  /* 123a49ad push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 123a49b2 push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a49b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a49b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 123a49bb call 0x123948c0 */
  push32(0x123a49c0u); f_123948c0();
  /* 123a49c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a49c3 mov dword ptr [0x123c050c], eax */
  w32((uint32_t)(0x123c050c), (EAX));
  /* 123a49c8 cmp dword ptr [0x123c050c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c050c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a49cf jne 0x123a49d9 */
  if (!C.zf) goto L_123a49d9;
  /* 123a49d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a49d4 jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a49d9:;
  /* 123a49d9 mov ecx, dword ptr [0x123c050c] */
  ECX = (r32((uint32_t)(0x123c050c)));
  /* 123a49df mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_123a49e5:;
  /* 123a49e5 mov edx, dword ptr [0x123c0504] */
  EDX = (r32((uint32_t)(0x123c0504)));
  /* 123a49eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123a49ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a49f1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a49f4 push eax */
  push32((uint32_t)(EAX));
  /* 123a49f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a49f8 push ecx */
  push32((uint32_t)(ECX));
  /* 123a49f9 call 0x123a4ba0 */
  push32(0x123a49feu); f_123a4ba0();
  /* 123a49fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4a01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a4a04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4a08 jl 0x123a4aa1 */
  if ((C.sf!=C.of)) goto L_123a4aa1;
  /* 123a4a0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4a14 je 0x123a4aa1 */
  if (C.zf) goto L_123a4aa1;
  /* 123a4a1a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4a1e je 0x123a4a93 */
  if (C.zf) goto L_123a4a93;
  /* 123a4a20 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4a22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a28 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123a4a2b push edx */
  push32((uint32_t)(EDX));
  /* 123a4a2c call 0x12395350 */
  push32(0x123a4a31u); f_12395350();
  /* 123a4a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4a34 jmp 0x123a4a3f */
  goto L_123a4a3f;
L_123a4a36:;
  /* 123a4a36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4a3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123a4a3f:;
  /* 123a4a3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a42 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a45 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4a49 je 0x123a4a60 */
  if (C.zf) goto L_123a4a60;
  /* 123a4a4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a54 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a57 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 123a4a5b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 123a4a5e jmp 0x123a4a36 */
  goto L_123a4a36;
L_123a4a60:;
  /* 123a4a60 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 123a4a65 push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a4a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4a6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a6f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 123a4a72 push eax */
  push32((uint32_t)(EAX));
  /* 123a4a73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a76 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4a77 call 0x12394d50 */
  push32(0x123a4a7cu); f_12394d50();
  /* 123a4a7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4a7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a4a82 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4a86 je 0x123a4a91 */
  if (C.zf) goto L_123a4a91;
  /* 123a4a88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a8b mov dword ptr [0x123c0504], edx */
  w32((uint32_t)(0x123c0504), (EDX));
L_123a4a91:;
  /* 123a4a91 jmp 0x123a4a9f */
  goto L_123a4a9f;
L_123a4a93:;
  /* 123a4a93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4a96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4a99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4a9c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_123a4a9f:;
  /* 123a4a9f jmp 0x123a4b14 */
  goto L_123a4b14;
L_123a4aa1:;
  /* 123a4aa1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4aa5 jne 0x123a4b0d */
  if (!C.zf) goto L_123a4b0d;
  /* 123a4aa7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4aab jge 0x123a4ab5 */
  if ((C.sf==C.of)) goto L_123a4ab5;
  /* 123a4aad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4ab0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a4ab2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123a4ab5:;
  /* 123a4ab5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 123a4aba push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a4abf push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4ac1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4ac4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 123a4acb push edx */
  push32((uint32_t)(EDX));
  /* 123a4acc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4acf push eax */
  push32((uint32_t)(EAX));
  /* 123a4ad0 call 0x12394d50 */
  push32(0x123a4ad5u); f_12394d50();
  /* 123a4ad5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4ad8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a4adb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4adf jne 0x123a4ae9 */
  if (!C.zf) goto L_123a4ae9;
  /* 123a4ae1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4ae4 jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a4ae9:;
  /* 123a4ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4aec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4af2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 123a4af5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4af8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4afb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 123a4b03 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4b06 mov dword ptr [0x123c0504], eax */
  w32((uint32_t)(0x123c0504), (EAX));
  /* 123a4b0b jmp 0x123a4b14 */
  goto L_123a4b14;
L_123a4b0d:;
  /* 123a4b0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4b0f jmp 0x123a4b9b */
  goto L_123a4b9b;
L_123a4b14:;
  /* 123a4b14 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4b18 je 0x123a4b99 */
  if (C.zf) goto L_123a4b99;
  /* 123a4b1a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 123a4b1f push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a4b24 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4b26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4b29 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4b2a call 0x123976f0 */
  push32(0x123a4b2fu); f_123976f0();
  /* 123a4b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4b32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4b35 push eax */
  push32((uint32_t)(EAX));
  /* 123a4b36 call 0x123948c0 */
  push32(0x123a4b3bu); f_123948c0();
  /* 123a4b3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4b3e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123a4b41 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4b45 je 0x123a4b99 */
  if (C.zf) goto L_123a4b99;
  /* 123a4b47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4b4a push edx */
  push32((uint32_t)(EDX));
  /* 123a4b4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4b4e push eax */
  push32((uint32_t)(EAX));
  /* 123a4b4f call 0x12397870 */
  push32(0x123a4b54u); f_12397870();
  /* 123a4b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4b57 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a4b5a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4b5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4b60 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4b62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123a4b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4b68 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123a4b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4b6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4b71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a4b74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a4b77 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a4b79 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4b7b not edx */
  EDX = (~(EDX));
  /* 123a4b7d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 123a4b80 push edx */
  push32((uint32_t)(EDX));
  /* 123a4b81 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4b84 push eax */
  push32((uint32_t)(EAX));
  /* 123a4b85 call dword ptr [0x123c326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c326c))), 0x123a4b8bu);
  /* 123a4b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4b8d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4b90 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4b91 call 0x12395350 */
  push32(0x123a4b96u); f_12395350();
  /* 123a4b96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a4b99:;
  /* 123a4b99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a4b9b:;
  /* 123a4b9b pop esi */
  ESI = (pop32());
  /* 123a4b9c mov esp, ebp */
  ESP = (EBP);
  /* 123a4b9e pop ebp */
  EBP = (pop32());
  /* 123a4b9f ret  */
  ESPCHK(0x123a48c0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x123a4ba0 (124 bytes, 47 insns) */
void f_123a4ba0(void) {
  FTRACE(0x123a4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 123a4ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4ba4 mov eax, dword ptr [0x123c0504] */
  EAX = (r32((uint32_t)(0x123c0504)));
  /* 123a4ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a4bac jmp 0x123a4bb7 */
  goto L_123a4bb7;
L_123a4bae:;
  /* 123a4bae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4bb1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4bb4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123a4bb7:;
  /* 123a4bb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4bba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4bbd je 0x123a4c0a */
  if (C.zf) goto L_123a4c0a;
  /* 123a4bbf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4bc2 push eax */
  push32((uint32_t)(EAX));
  /* 123a4bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4bc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a4bc8 push edx */
  push32((uint32_t)(EDX));
  /* 123a4bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4bcc push eax */
  push32((uint32_t)(EAX));
  /* 123a4bcd call 0x123a4370 */
  push32(0x123a4bd2u); f_123a4370();
  /* 123a4bd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4bd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a4bd7 jne 0x123a4c08 */
  if (!C.zf) goto L_123a4c08;
  /* 123a4bd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4bdc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a4bde mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4be1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 123a4be5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4be8 je 0x123a4bfa */
  if (C.zf) goto L_123a4bfa;
  /* 123a4bea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4bed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a4bef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4bf2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 123a4bf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a4bf8 jne 0x123a4c08 */
  if (!C.zf) goto L_123a4c08;
L_123a4bfa:;
  /* 123a4bfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4bfd sub eax, dword ptr [0x123c0504] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c0504))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4c03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 123a4c06 jmp 0x123a4c18 */
  goto L_123a4c18;
L_123a4c08:;
  /* 123a4c08 jmp 0x123a4bae */
  goto L_123a4bae;
L_123a4c0a:;
  /* 123a4c0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4c0d sub eax, dword ptr [0x123c0504] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c0504))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4c13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 123a4c16 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_123a4c18:;
  /* 123a4c18 mov esp, ebp */
  ESP = (EBP);
  /* 123a4c1a pop ebp */
  EBP = (pop32());
  /* 123a4c1b ret  */
  ESPCHK(0x123a4ba0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x123a4c20 (238 bytes, 80 insns) */
void f_123a4c20(void) {
  FTRACE(0x123a4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4c21 mov ebp, esp */
  EBP = (ESP);
  /* 123a4c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4c26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a4c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4c30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a4c33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4c37 jne 0x123a4c40 */
  if (!C.zf) goto L_123a4c40;
  /* 123a4c39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4c3b jmp 0x123a4d0a */
  goto L_123a4d0a;
L_123a4c40:;
  /* 123a4c40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4c43 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a4c45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4c48 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4c4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a4c4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a4c50 je 0x123a4c5d */
  if (C.zf) goto L_123a4c5d;
  /* 123a4c52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4c58 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123a4c5b jmp 0x123a4c40 */
  goto L_123a4c40;
L_123a4c5d:;
  /* 123a4c5d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 123a4c62 push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a4c67 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4c69 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a4c6c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 123a4c73 push eax */
  push32((uint32_t)(EAX));
  /* 123a4c74 call 0x123948c0 */
  push32(0x123a4c79u); f_123948c0();
  /* 123a4c79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4c7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a4c7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4c82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a4c85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4c89 jne 0x123a4c95 */
  if (!C.zf) goto L_123a4c95;
  /* 123a4c8b push 9 */
  push32((uint32_t)(0x9u));
  /* 123a4c8d call 0x12393830 */
  push32(0x123a4c92u); f_12393830();
  /* 123a4c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a4c95:;
  /* 123a4c95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4c98 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123a4c9b:;
  /* 123a4c9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4c9e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4ca1 je 0x123a4cfe */
  if (C.zf) goto L_123a4cfe;
  /* 123a4ca3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 123a4ca8 push 0x123bcb38 */
  push32((uint32_t)(0x123bcb38u));
  /* 123a4cad push 2 */
  push32((uint32_t)(0x2u));
  /* 123a4caf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4cb2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a4cb4 push edx */
  push32((uint32_t)(EDX));
  /* 123a4cb5 call 0x123976f0 */
  push32(0x123a4cbau); f_123976f0();
  /* 123a4cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4cbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4cc0 push eax */
  push32((uint32_t)(EAX));
  /* 123a4cc1 call 0x123948c0 */
  push32(0x123a4cc6u); f_123948c0();
  /* 123a4cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4cc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4ccc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123a4cce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4cd1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4cd4 je 0x123a4cea */
  if (C.zf) goto L_123a4cea;
  /* 123a4cd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4cd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123a4cdb push ecx */
  push32((uint32_t)(ECX));
  /* 123a4cdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4cdf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a4ce1 push eax */
  push32((uint32_t)(EAX));
  /* 123a4ce2 call 0x12397870 */
  push32(0x123a4ce7u); f_12397870();
  /* 123a4ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a4cea:;
  /* 123a4cea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a4ced add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4cf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123a4cf3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4cf6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4cf9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a4cfc jmp 0x123a4c9b */
  goto L_123a4c9b;
L_123a4cfe:;
  /* 123a4cfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a4d01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123a4d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123a4d0a:;
  /* 123a4d0a mov esp, ebp */
  ESP = (EBP);
  /* 123a4d0c pop ebp */
  EBP = (pop32());
  /* 123a4d0d ret  */
  ESPCHK(0x123a4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d10 @ 0x123a4d10 (237 bytes, 81 insns) */
void f_123a4d10(void) {
  FTRACE(0x123a4d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4d10 push ebp */
  push32((uint32_t)(EBP));
  /* 123a4d11 mov ebp, esp */
  EBP = (ESP);
  /* 123a4d13 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4d14 cmp dword ptr [0x123c1c4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1c4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4d1b jne 0x123a4d32 */
  if (!C.zf) goto L_123a4d32;
  /* 123a4d1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a4d20 push eax */
  push32((uint32_t)(EAX));
  /* 123a4d21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4d24 push ecx */
  push32((uint32_t)(ECX));
  /* 123a4d25 call 0x123a4e10 */
  push32(0x123a4d2au); f_123a4e10();
  /* 123a4d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4d2d jmp 0x123a4df9 */
  goto L_123a4df9;
L_123a4d32:;
  /* 123a4d32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123a4d34 call 0x123982c0 */
  push32(0x123a4d39u); f_123982c0();
  /* 123a4d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4d3c jmp 0x123a4d47 */
  goto L_123a4d47;
L_123a4d3e:;
  /* 123a4d3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4d41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4d44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_123a4d47:;
  /* 123a4d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4d4a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 123a4d4e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 123a4d52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4d55 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a4d5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a4d5d je 0x123a4ddb */
  if (C.zf) goto L_123a4ddb;
  /* 123a4d5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4d62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4d67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a4d69 mov cl, byte ptr [eax + 0x123c1d61] */
  CL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 123a4d6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123a4d72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a4d74 je 0x123a4dc6 */
  if (C.zf) goto L_123a4dc6;
  /* 123a4d76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4d79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4d7c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123a4d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4d82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a4d84 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a4d86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a4d88 jne 0x123a4d98 */
  if (!C.zf) goto L_123a4d98;
  /* 123a4d8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123a4d8c call 0x12398360 */
  push32(0x123a4d91u); f_12398360();
  /* 123a4d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4d96 jmp 0x123a4df9 */
  goto L_123a4df9;
L_123a4d98:;
  /* 123a4d98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4d9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a4da1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123a4da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4da7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a4da9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a4dab or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 123a4dad cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4db0 jne 0x123a4dc4 */
  if (!C.zf) goto L_123a4dc4;
  /* 123a4db2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123a4db4 call 0x12398360 */
  push32(0x123a4db9u); f_12398360();
  /* 123a4db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4dbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4dbf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a4dc2 jmp 0x123a4df9 */
  goto L_123a4df9;
L_123a4dc4:;
  /* 123a4dc4 jmp 0x123a4dd6 */
  goto L_123a4dd6;
L_123a4dc6:;
  /* 123a4dc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4dc9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a4dcf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4dd2 jne 0x123a4dd6 */
  if (!C.zf) goto L_123a4dd6;
  /* 123a4dd4 jmp 0x123a4ddb */
  goto L_123a4ddb;
L_123a4dd6:;
  /* 123a4dd6 jmp 0x123a4d3e */
  goto L_123a4d3e;
L_123a4ddb:;
  /* 123a4ddb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123a4ddd call 0x12398360 */
  push32(0x123a4de2u); f_12398360();
  /* 123a4de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a4de8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4ded cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a4df0 jne 0x123a4df7 */
  if (!C.zf) goto L_123a4df7;
  /* 123a4df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a4df5 jmp 0x123a4df9 */
  goto L_123a4df9;
L_123a4df7:;
  /* 123a4df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a4df9:;
  /* 123a4df9 mov esp, ebp */
  ESP = (EBP);
  /* 123a4dfb pop ebp */
  EBP = (pop32());
  /* 123a4dfc ret  */
  ESPCHK(0x123a4d10u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x123a4e10 (193 bytes, 87 insns) */
void f_123a4e10(void) {
  FTRACE(0x123a4e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a4e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4e12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 123a4e16 push ebx */
  push32((uint32_t)(EBX));
  /* 123a4e17 mov ebx, eax */
  EBX = (EAX);
  /* 123a4e19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 123a4e1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 123a4e20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 123a4e26 je 0x123a4e3b */
  if (C.zf) goto L_123a4e3b;
L_123a4e28:;
  /* 123a4e28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 123a4e2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123a4e2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a4e2d je 0x123a4e00 */
  if (C.zf) { jmp_ind(0x123a4e00u); return; }
  /* 123a4e2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 123a4e31 je 0x123a4e84 */
  if (C.zf) goto L_123a4e84;
  /* 123a4e33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 123a4e39 jne 0x123a4e28 */
  if (!C.zf) goto L_123a4e28;
L_123a4e3b:;
  /* 123a4e3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 123a4e3d push edi */
  push32((uint32_t)(EDI));
  /* 123a4e3e mov eax, ebx */
  EAX = (EBX);
  /* 123a4e40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 123a4e43 push esi */
  push32((uint32_t)(ESI));
  /* 123a4e44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_123a4e46:;
  /* 123a4e46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 123a4e48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 123a4e4d mov eax, ecx */
  EAX = (ECX);
  /* 123a4e4f mov esi, edi */
  ESI = (EDI);
  /* 123a4e51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 123a4e53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4e55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4e57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123a4e5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a4e5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 123a4e5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 123a4e61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a4e64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 123a4e6a jne 0x123a4e88 */
  if (!C.zf) goto L_123a4e88;
  /* 123a4e6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 123a4e71 je 0x123a4e46 */
  if (C.zf) goto L_123a4e46;
  /* 123a4e73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 123a4e78 jne 0x123a4e82 */
  if (!C.zf) goto L_123a4e82;
  /* 123a4e7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 123a4e80 jne 0x123a4e46 */
  if (!C.zf) goto L_123a4e46;
L_123a4e82:;
  /* 123a4e82 pop esi */
  ESI = (pop32());
  /* 123a4e83 pop edi */
  EDI = (pop32());
L_123a4e84:;
  /* 123a4e84 pop ebx */
  EBX = (pop32());
  /* 123a4e85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a4e87 ret  */
  ESPCHK(0x123a4e10u, _esp0);
  ESP += 4; return;
L_123a4e88:;
  /* 123a4e88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 123a4e8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a4e8d je 0x123a4ec5 */
  if (C.zf) goto L_123a4ec5;
  /* 123a4e8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123a4e91 je 0x123a4e82 */
  if (C.zf) goto L_123a4e82;
  /* 123a4e93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a4e95 je 0x123a4ebe */
  if (C.zf) goto L_123a4ebe;
  /* 123a4e97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123a4e99 je 0x123a4e82 */
  if (C.zf) goto L_123a4e82;
  /* 123a4e9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123a4e9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a4ea0 je 0x123a4eb7 */
  if (C.zf) goto L_123a4eb7;
  /* 123a4ea2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123a4ea4 je 0x123a4e82 */
  if (C.zf) goto L_123a4e82;
  /* 123a4ea6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a4ea8 je 0x123a4eb0 */
  if (C.zf) goto L_123a4eb0;
  /* 123a4eaa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123a4eac je 0x123a4e82 */
  if (C.zf) goto L_123a4e82;
  /* 123a4eae jmp 0x123a4e46 */
  goto L_123a4e46;
L_123a4eb0:;
  /* 123a4eb0 pop esi */
  ESI = (pop32());
  /* 123a4eb1 pop edi */
  EDI = (pop32());
  /* 123a4eb2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 123a4eb5 pop ebx */
  EBX = (pop32());
  /* 123a4eb6 ret  */
  ESPCHK(0x123a4e10u, _esp0);
  ESP += 4; return;
L_123a4eb7:;
  /* 123a4eb7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 123a4eba pop esi */
  ESI = (pop32());
  /* 123a4ebb pop edi */
  EDI = (pop32());
  /* 123a4ebc pop ebx */
  EBX = (pop32());
  /* 123a4ebd ret  */
  ESPCHK(0x123a4e10u, _esp0);
  ESP += 4; return;
L_123a4ebe:;
  /* 123a4ebe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 123a4ec1 pop esi */
  ESI = (pop32());
  /* 123a4ec2 pop edi */
  EDI = (pop32());
  /* 123a4ec3 pop ebx */
  EBX = (pop32());
  /* 123a4ec4 ret  */
  ESPCHK(0x123a4e10u, _esp0);
  ESP += 4; return;
L_123a4ec5:;
  /* 123a4ec5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 123a4ec8 pop esi */
  ESI = (pop32());
  /* 123a4ec9 pop edi */
  EDI = (pop32());
  /* 123a4eca pop ebx */
  EBX = (pop32());
  /* 123a4ecb ret  */
  ESPCHK(0x123a4e10u, _esp0);
  ESP += 4; return;
  /* 123a4ecc jmp dword ptr [0x123c32c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x123c32c8)))); return;
}

/* RtlUnwind @ 0x123a501c (6 bytes, 1 insns) */
void f_123a501c(void) {
  FTRACE(0x123a501cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a501c jmp dword ptr [0x123c32a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x123c32a4)))); return;
}

