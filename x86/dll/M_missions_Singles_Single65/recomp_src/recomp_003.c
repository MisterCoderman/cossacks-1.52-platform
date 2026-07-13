#include "recomp.h"

/* getSystemCP @ 0x11a91ad0 (89 bytes, 21 insns) */
void f_11a91ad0(void) {
  FTRACE(0x11a91ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11a91ad3 mov dword ptr [0x11aba2b0], 0 */
  w32((uint32_t)(0x11aba2b0), (0x0u));
  /* 11a91add cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91ae1 jne 0x11a91af5 */
  if (!C.zf) goto L_11a91af5;
  /* 11a91ae3 mov dword ptr [0x11aba2b0], 1 */
  w32((uint32_t)(0x11aba2b0), (0x1u));
  /* 11a91aed call dword ptr [0x11abc328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc328))), 0x11a91af3u);
  /* 11a91af3 jmp 0x11a91b27 */
  goto L_11a91b27;
L_11a91af5:;
  /* 11a91af5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91af9 jne 0x11a91b0d */
  if (!C.zf) goto L_11a91b0d;
  /* 11a91afb mov dword ptr [0x11aba2b0], 1 */
  w32((uint32_t)(0x11aba2b0), (0x1u));
  /* 11a91b05 call dword ptr [0x11abc338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc338))), 0x11a91b0bu);
  /* 11a91b0b jmp 0x11a91b27 */
  goto L_11a91b27;
L_11a91b0d:;
  /* 11a91b0d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91b11 jne 0x11a91b24 */
  if (!C.zf) goto L_11a91b24;
  /* 11a91b13 mov dword ptr [0x11aba2b0], 1 */
  w32((uint32_t)(0x11aba2b0), (0x1u));
  /* 11a91b1d mov eax, dword ptr [0x11aba2d8] */
  EAX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a91b22 jmp 0x11a91b27 */
  goto L_11a91b27;
L_11a91b24:;
  /* 11a91b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11a91b27:;
  /* 11a91b27 pop ebp */
  EBP = (pop32());
  /* 11a91b28 ret  */
  ESPCHK(0x11a91ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b30 @ 0x11a91b30 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11a91b30(void) {
  FTRACE(0x11a91b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91b31 mov ebp, esp */
  EBP = (ESP);
  /* 11a91b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a91b37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a91b3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91b3d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91b43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a91b46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91b4a ja 0x11a91b7a */
  if ((!C.cf&&!C.zf)) goto L_11a91b7a;
  /* 11a91b4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91b4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a91b51 mov dl, byte ptr [eax + 0x11a91b94] */
  DL = (r8((uint32_t)(EAX + 0x11a91b94)));
  /* 11a91b57 jmp dword ptr [edx*4 + 0x11a91b80] */
  switch (EDX) {
    case 0: goto L_11a91b5e;
    case 1: goto L_11a91b65;
    case 2: goto L_11a91b6c;
    case 3: goto L_11a91b73;
    case 4: goto L_11a91b7a;
    default: x86_unimpl("switch@0x11a91b57 out of table"); return;
  }
L_11a91b5e:;
  /* 11a91b5e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a91b63 jmp 0x11a91b7c */
  goto L_11a91b7c;
L_11a91b65:;
  /* 11a91b65 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a91b6a jmp 0x11a91b7c */
  goto L_11a91b7c;
L_11a91b6c:;
  /* 11a91b6c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a91b71 jmp 0x11a91b7c */
  goto L_11a91b7c;
L_11a91b73:;
  /* 11a91b73 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a91b78 jmp 0x11a91b7c */
  goto L_11a91b7c;
L_11a91b7a:;
  /* 11a91b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a91b7c:;
  /* 11a91b7c mov esp, ebp */
  ESP = (EBP);
  /* 11a91b7e pop ebp */
  EBP = (pop32());
  /* 11a91b7f ret  */
  ESPCHK(0x11a91b30u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11a91bb0 (116 bytes, 29 insns) */
void f_11a91bb0(void) {
  FTRACE(0x11a91bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a91bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91bb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a91bbb jmp 0x11a91bc6 */
  goto L_11a91bc6;
L_11a91bbd:;
  /* 11a91bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91bc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a91bc6:;
  /* 11a91bc6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91bcd jge 0x11a91bdb */
  if ((C.sf==C.of)) goto L_11a91bdb;
  /* 11a91bcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91bd2 mov byte ptr [ecx + 0x11aba5e0], 0 */
  w8((uint32_t)(ECX + 0x11aba5e0), (0x0u));
  /* 11a91bd9 jmp 0x11a91bbd */
  goto L_11a91bbd;
L_11a91bdb:;
  /* 11a91bdb mov dword ptr [0x11aba450], 0 */
  w32((uint32_t)(0x11aba450), (0x0u));
  /* 11a91be5 mov dword ptr [0x11aba4dc], 0 */
  w32((uint32_t)(0x11aba4dc), (0x0u));
  /* 11a91bef mov dword ptr [0x11aba6e4], 0 */
  w32((uint32_t)(0x11aba6e4), (0x0u));
  /* 11a91bf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a91c00 jmp 0x11a91c0b */
  goto L_11a91c0b;
L_11a91c02:;
  /* 11a91c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91c05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a91c0b:;
  /* 11a91c0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91c0f jge 0x11a91c20 */
  if ((C.sf==C.of)) goto L_11a91c20;
  /* 11a91c11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91c14 mov word ptr [eax*2 + 0x11aba4d0], 0 */
  w16((uint32_t)(EAX*2 + 0x11aba4d0), (0x0u));
  /* 11a91c1e jmp 0x11a91c02 */
  goto L_11a91c02;
L_11a91c20:;
  /* 11a91c20 mov esp, ebp */
  ESP = (EBP);
  /* 11a91c22 pop ebp */
  EBP = (pop32());
  /* 11a91c23 ret  */
  ESPCHK(0x11a91bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c30 @ 0x11a91c30 (770 bytes, 175 insns) */
void f_11a91c30(void) {
  FTRACE(0x11a91c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91c31 mov ebp, esp */
  EBP = (ESP);
  /* 11a91c33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91c39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11a91c3f push eax */
  push32((uint32_t)(EAX));
  /* 11a91c40 mov ecx, dword ptr [0x11aba450] */
  ECX = (r32((uint32_t)(0x11aba450)));
  /* 11a91c46 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91c47 call dword ptr [0x11abc330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc330))), 0x11a91c4du);
  /* 11a91c4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91c50 jne 0x11a91e69 */
  if (!C.zf) goto L_11a91e69;
  /* 11a91c56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11a91c60 jmp 0x11a91c71 */
  goto L_11a91c71;
L_11a91c62:;
  /* 11a91c62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91c68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91c6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11a91c71:;
  /* 11a91c71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91c7b jae 0x11a91c92 */
  if (!C.cf) goto L_11a91c92;
  /* 11a91c7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91c83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11a91c89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11a91c90 jmp 0x11a91c62 */
  goto L_11a91c62;
L_11a91c92:;
  /* 11a91c92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11a91c99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11a91c9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a91ca2 jmp 0x11a91cad */
  goto L_11a91cad;
L_11a91ca4:;
  /* 11a91ca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91ca7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a91cad:;
  /* 11a91cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91cb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a91cb2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a91cb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a91cb6 je 0x11a91cf8 */
  if (C.zf) goto L_11a91cf8;
  /* 11a91cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91cbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a91cbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a91cbf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11a91cc5 jmp 0x11a91cd6 */
  goto L_11a91cd6;
L_11a91cc7:;
  /* 11a91cc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91ccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91cd0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11a91cd6:;
  /* 11a91cd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91cd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a91cdb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a91cde cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91ce4 ja 0x11a91cf6 */
  if ((!C.cf&&!C.zf)) goto L_11a91cf6;
  /* 11a91ce6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91cec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11a91cf4 jmp 0x11a91cc7 */
  goto L_11a91cc7;
L_11a91cf6:;
  /* 11a91cf6 jmp 0x11a91ca4 */
  goto L_11a91ca4;
L_11a91cf8:;
  /* 11a91cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a91cfa mov eax, dword ptr [0x11aba6e4] */
  EAX = (r32((uint32_t)(0x11aba6e4)));
  /* 11a91cff push eax */
  push32((uint32_t)(EAX));
  /* 11a91d00 mov ecx, dword ptr [0x11aba450] */
  ECX = (r32((uint32_t)(0x11aba450)));
  /* 11a91d06 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91d07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11a91d0d push edx */
  push32((uint32_t)(EDX));
  /* 11a91d0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a91d13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11a91d19 push eax */
  push32((uint32_t)(EAX));
  /* 11a91d1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a91d1c call 0x11a944a0 */
  push32(0x11a91d21u); f_11a944a0();
  /* 11a91d21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a91d26 mov ecx, dword ptr [0x11aba450] */
  ECX = (r32((uint32_t)(0x11aba450)));
  /* 11a91d2c push ecx */
  push32((uint32_t)(ECX));
  /* 11a91d2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a91d32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11a91d38 push edx */
  push32((uint32_t)(EDX));
  /* 11a91d39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a91d3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11a91d44 push eax */
  push32((uint32_t)(EAX));
  /* 11a91d45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a91d4a mov ecx, dword ptr [0x11aba6e4] */
  ECX = (r32((uint32_t)(0x11aba6e4)));
  /* 11a91d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91d51 call 0x11a94660 */
  push32(0x11a91d56u); f_11a94660();
  /* 11a91d56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a91d5b mov edx, dword ptr [0x11aba450] */
  EDX = (r32((uint32_t)(0x11aba450)));
  /* 11a91d61 push edx */
  push32((uint32_t)(EDX));
  /* 11a91d62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a91d67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11a91d6d push eax */
  push32((uint32_t)(EAX));
  /* 11a91d6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a91d73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11a91d79 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91d7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a91d7f mov edx, dword ptr [0x11aba6e4] */
  EDX = (r32((uint32_t)(0x11aba6e4)));
  /* 11a91d85 push edx */
  push32((uint32_t)(EDX));
  /* 11a91d86 call 0x11a94660 */
  push32(0x11a91d8bu); f_11a94660();
  /* 11a91d8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91d8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11a91d98 jmp 0x11a91da9 */
  goto L_11a91da9;
L_11a91d9a:;
  /* 11a91d9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91da0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91da3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11a91da9:;
  /* 11a91da9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91db3 jae 0x11a91e64 */
  if (!C.cf) goto L_11a91e64;
  /* 11a91db9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91dbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a91dc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11a91dc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a91dcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a91dce je 0x11a91e06 */
  if (C.zf) goto L_11a91e06;
  /* 11a91dd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91dd6 mov cl, byte ptr [eax + 0x11aba5e1] */
  CL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a91ddc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11a91ddf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91de5 mov byte ptr [edx + 0x11aba5e1], cl */
  w8((uint32_t)(EDX + 0x11aba5e1), (CL));
  /* 11a91deb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91df1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91df7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11a91dfe mov byte ptr [eax + 0x11aba4e0], dl */
  w8((uint32_t)(EAX + 0x11aba4e0), (DL));
  /* 11a91e04 jmp 0x11a91e5f */
  goto L_11a91e5f;
L_11a91e06:;
  /* 11a91e06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a91e0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11a91e16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a91e19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a91e1b je 0x11a91e52 */
  if (C.zf) goto L_11a91e52;
  /* 11a91e1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e23 mov al, byte ptr [edx + 0x11aba5e1] */
  AL = (r8((uint32_t)(EDX + 0x11aba5e1)));
  /* 11a91e29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11a91e2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e31 mov byte ptr [ecx + 0x11aba5e1], al */
  w8((uint32_t)(ECX + 0x11aba5e1), (AL));
  /* 11a91e37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11a91e4a mov byte ptr [edx + 0x11aba4e0], cl */
  w8((uint32_t)(EDX + 0x11aba4e0), (CL));
  /* 11a91e50 jmp 0x11a91e5f */
  goto L_11a91e5f;
L_11a91e52:;
  /* 11a91e52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e58 mov byte ptr [edx + 0x11aba4e0], 0 */
  w8((uint32_t)(EDX + 0x11aba4e0), (0x0u));
L_11a91e5f:;
  /* 11a91e5f jmp 0x11a91d9a */
  goto L_11a91d9a;
L_11a91e64:;
  /* 11a91e64 jmp 0x11a91f2e */
  goto L_11a91f2e;
L_11a91e69:;
  /* 11a91e69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11a91e73 jmp 0x11a91e84 */
  goto L_11a91e84;
L_11a91e75:;
  /* 11a91e75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91e7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91e7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11a91e84:;
  /* 11a91e84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91e8e jae 0x11a91f2e */
  if (!C.cf) goto L_11a91f2e;
  /* 11a91e94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91e9b jb 0x11a91ed8 */
  if (C.cf) goto L_11a91ed8;
  /* 11a91e9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91ea4 ja 0x11a91ed8 */
  if ((!C.cf&&!C.zf)) goto L_11a91ed8;
  /* 11a91ea6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91eac mov dl, byte ptr [ecx + 0x11aba5e1] */
  DL = (r8((uint32_t)(ECX + 0x11aba5e1)));
  /* 11a91eb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11a91eb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91ebb mov byte ptr [eax + 0x11aba5e1], dl */
  w8((uint32_t)(EAX + 0x11aba5e1), (DL));
  /* 11a91ec1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91ec7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91eca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91ed0 mov byte ptr [edx + 0x11aba4e0], cl */
  w8((uint32_t)(EDX + 0x11aba4e0), (CL));
  /* 11a91ed6 jmp 0x11a91f29 */
  goto L_11a91f29;
L_11a91ed8:;
  /* 11a91ed8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91edf jb 0x11a91f1c */
  if (C.cf) goto L_11a91f1c;
  /* 11a91ee1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91ee8 ja 0x11a91f1c */
  if ((!C.cf&&!C.zf)) goto L_11a91f1c;
  /* 11a91eea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91ef0 mov cl, byte ptr [eax + 0x11aba5e1] */
  CL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a91ef6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a91ef9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91eff mov byte ptr [edx + 0x11aba5e1], cl */
  w8((uint32_t)(EDX + 0x11aba5e1), (CL));
  /* 11a91f05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91f0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91f0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91f14 mov byte ptr [ecx + 0x11aba4e0], al */
  w8((uint32_t)(ECX + 0x11aba4e0), (AL));
  /* 11a91f1a jmp 0x11a91f29 */
  goto L_11a91f29;
L_11a91f1c:;
  /* 11a91f1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11a91f22 mov byte ptr [edx + 0x11aba4e0], 0 */
  w8((uint32_t)(EDX + 0x11aba4e0), (0x0u));
L_11a91f29:;
  /* 11a91f29 jmp 0x11a91e75 */
  goto L_11a91e75;
L_11a91f2e:;
  /* 11a91f2e mov esp, ebp */
  ESP = (EBP);
  /* 11a91f30 pop ebp */
  EBP = (pop32());
  /* 11a91f31 ret  */
  ESPCHK(0x11a91c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f40 @ 0x11a91f40 (23 bytes, 9 insns) */
void f_11a91f40(void) {
  FTRACE(0x11a91f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91f41 mov ebp, esp */
  EBP = (ESP);
  /* 11a91f43 cmp dword ptr [0x11aba4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91f4a je 0x11a91f53 */
  if (C.zf) goto L_11a91f53;
  /* 11a91f4c mov eax, dword ptr [0x11aba450] */
  EAX = (r32((uint32_t)(0x11aba450)));
  /* 11a91f51 jmp 0x11a91f55 */
  goto L_11a91f55;
L_11a91f53:;
  /* 11a91f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a91f55:;
  /* 11a91f55 pop ebp */
  EBP = (pop32());
  /* 11a91f56 ret  */
  ESPCHK(0x11a91f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x11a91f60 (34 bytes, 10 insns) */
void f_11a91f60(void) {
  FTRACE(0x11a91f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91f61 mov ebp, esp */
  EBP = (ESP);
  /* 11a91f63 cmp dword ptr [0x11abbbd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91f6a jne 0x11a91f80 */
  if (!C.zf) goto L_11a91f80;
  /* 11a91f6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a91f6e call 0x11a91780 */
  push32(0x11a91f73u); f_11a91780();
  /* 11a91f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91f76 mov dword ptr [0x11abbbd0], 1 */
  w32((uint32_t)(0x11abbbd0), (0x1u));
L_11a91f80:;
  /* 11a91f80 pop ebp */
  EBP = (pop32());
  /* 11a91f81 ret  */
  ESPCHK(0x11a91f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x11a91f90 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11a91f90(void) {
  FTRACE(0x11a91f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91f91 mov ebp, esp */
  EBP = (ESP);
  /* 11a91f93 push edi */
  push32((uint32_t)(EDI));
  /* 11a91f94 push esi */
  push32((uint32_t)(ESI));
  /* 11a91f95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a91f98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a91f9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a91f9e mov eax, ecx */
  EAX = (ECX);
  /* 11a91fa0 mov edx, ecx */
  EDX = (ECX);
  /* 11a91fa2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91fa4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91fa6 jbe 0x11a91fb0 */
  if ((C.cf||C.zf)) goto L_11a91fb0;
  /* 11a91fa8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91faa jb 0x11a92128 */
  if (C.cf) goto L_11a92128;
L_11a91fb0:;
  /* 11a91fb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a91fb6 jne 0x11a91fcc */
  if (!C.zf) goto L_11a91fcc;
  /* 11a91fb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a91fbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a91fbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91fc1 jb 0x11a91fec */
  if (C.cf) goto L_11a91fec;
  /* 11a91fc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a91fc5 jmp dword ptr [edx*4 + 0x11a920d8] */
  switch (EDX) {
    case 0: goto L_11a920e8;
    case 1: goto L_11a920f0;
    case 2: goto L_11a920fc;
    case 3: goto L_11a92110;
    default: x86_unimpl("switch@0x11a91fc5 out of table"); return;
  }
L_11a91fcc:;
  /* 11a91fcc mov eax, edi */
  EAX = (EDI);
  /* 11a91fce mov edx, 3 */
  EDX = (0x3u);
  /* 11a91fd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91fd6 jb 0x11a91fe4 */
  if (C.cf) goto L_11a91fe4;
  /* 11a91fd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a91fdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91fdd jmp dword ptr [eax*4 + 0x11a91ff0] */
  switch (EAX) {
    case 1: goto L_11a92000;
    case 2: goto L_11a9202c;
    case 3: goto L_11a92050;
    default: x86_unimpl("switch@0x11a91fdd out of table"); return;
  }
L_11a91fe4:;
  /* 11a91fe4 jmp dword ptr [ecx*4 + 0x11a920e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a920e8)))); return;
  /* 11a91feb nop  */
  /* nop */
L_11a91fec:;
  /* 11a91fec jmp dword ptr [ecx*4 + 0x11a9206c] */
  switch (ECX) {
    case 0: goto L_11a920cf;
    case 1: goto L_11a920bc;
    case 2: goto L_11a920b4;
    case 3: goto L_11a920ac;
    case 4: goto L_11a920a4;
    case 5: goto L_11a9209c;
    case 6: goto L_11a92094;
    case 7: goto L_11a9208c;
    default: x86_unimpl("switch@0x11a91fec out of table"); return;
  }
  /* 11a91ff3 nop  */
  /* nop */
L_11a92000:;
  /* 11a92000 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a92002 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a92004 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a92006 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a92009 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a9200c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a9200f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a92012 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a92015 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92018 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9201b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9201e jb 0x11a91fec */
  if (C.cf) goto L_11a91fec;
  /* 11a92020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a92022 jmp dword ptr [edx*4 + 0x11a920d8] */
  switch (EDX) {
    case 0: goto L_11a920e8;
    case 1: goto L_11a920f0;
    case 2: goto L_11a920fc;
    case 3: goto L_11a92110;
    default: x86_unimpl("switch@0x11a92022 out of table"); return;
  }
  /* 11a92029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a9202c:;
  /* 11a9202c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9202e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a92030 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a92032 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a92035 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a92038 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a9203b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9203e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92041 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92044 jb 0x11a91fec */
  if (C.cf) goto L_11a91fec;
  /* 11a92046 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a92048 jmp dword ptr [edx*4 + 0x11a920d8] */
  switch (EDX) {
    case 0: goto L_11a920e8;
    case 1: goto L_11a920f0;
    case 2: goto L_11a920fc;
    case 3: goto L_11a92110;
    default: x86_unimpl("switch@0x11a92048 out of table"); return;
  }
  /* 11a9204f nop  */
  /* nop */
L_11a92050:;
  /* 11a92050 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a92052 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a92054 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a92056 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a92057 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a9205a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a9205b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9205e jb 0x11a91fec */
  if (C.cf) goto L_11a91fec;
  /* 11a92060 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a92062 jmp dword ptr [edx*4 + 0x11a920d8] */
  switch (EDX) {
    case 0: goto L_11a920e8;
    case 1: goto L_11a920f0;
    case 2: goto L_11a920fc;
    case 3: goto L_11a92110;
    default: x86_unimpl("switch@0x11a92062 out of table"); return;
  }
  /* 11a92069 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a9208c:;
  /* 11a9208c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a92090 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a92094:;
  /* 11a92094 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a92098 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a9209c:;
  /* 11a9209c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a920a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a920a4:;
  /* 11a920a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a920a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a920ac:;
  /* 11a920ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a920b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a920b4:;
  /* 11a920b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a920b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a920bc:;
  /* 11a920bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a920c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a920c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a920cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a920cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a920cf:;
  /* 11a920cf jmp dword ptr [edx*4 + 0x11a920d8] */
  switch (EDX) {
    case 0: goto L_11a920e8;
    case 1: goto L_11a920f0;
    case 2: goto L_11a920fc;
    case 3: goto L_11a92110;
    default: x86_unimpl("switch@0x11a920cf out of table"); return;
  }
  /* 11a920d6 mov edi, edi */
  EDI = (EDI);
L_11a920e8:;
  /* 11a920e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a920eb pop esi */
  ESI = (pop32());
  /* 11a920ec pop edi */
  EDI = (pop32());
  /* 11a920ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a920ee ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a920ef nop  */
  /* nop */
L_11a920f0:;
  /* 11a920f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a920f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a920f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a920f7 pop esi */
  ESI = (pop32());
  /* 11a920f8 pop edi */
  EDI = (pop32());
  /* 11a920f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a920fa ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a920fb nop  */
  /* nop */
L_11a920fc:;
  /* 11a920fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a920fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a92100 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a92103 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a92106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92109 pop esi */
  ESI = (pop32());
  /* 11a9210a pop edi */
  EDI = (pop32());
  /* 11a9210b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a9210c ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a9210d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a92110:;
  /* 11a92110 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a92112 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a92114 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a92117 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a9211a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a9211d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a92120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92123 pop esi */
  ESI = (pop32());
  /* 11a92124 pop edi */
  EDI = (pop32());
  /* 11a92125 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a92126 ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a92127 nop  */
  /* nop */
L_11a92128:;
  /* 11a92128 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a9212c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a92130 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a92136 jne 0x11a9215c */
  if (!C.zf) goto L_11a9215c;
  /* 11a92138 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a9213b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9213e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92141 jb 0x11a92150 */
  if (C.cf) goto L_11a92150;
  /* 11a92143 std  */
  C.df=1;
  /* 11a92144 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a92146 cld  */
  C.df=0;
  /* 11a92147 jmp dword ptr [edx*4 + 0x11a92270] */
  switch (EDX) {
    case 0: goto L_11a92280;
    case 1: goto L_11a92288;
    case 2: goto L_11a92298;
    case 3: goto L_11a922ac;
    default: x86_unimpl("switch@0x11a92147 out of table"); return;
  }
  /* 11a9214e mov edi, edi */
  EDI = (EDI);
L_11a92150:;
  /* 11a92150 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a92152 jmp dword ptr [ecx*4 + 0x11a92220] */
  switch (ECX) {
    case 0: goto L_11a92267;
    default: x86_unimpl("switch@0x11a92152 out of table"); return;
  }
  /* 11a92159 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a9215c:;
  /* 11a9215c mov eax, edi */
  EAX = (EDI);
  /* 11a9215e mov edx, 3 */
  EDX = (0x3u);
  /* 11a92163 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92166 jb 0x11a92174 */
  if (C.cf) goto L_11a92174;
  /* 11a92168 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9216b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9216d jmp dword ptr [eax*4 + 0x11a92178] */
  switch (EAX) {
    case 1: goto L_11a92188;
    case 2: goto L_11a921a8;
    case 3: goto L_11a921d0;
    default: x86_unimpl("switch@0x11a9216d out of table"); return;
  }
L_11a92174:;
  /* 11a92174 jmp dword ptr [ecx*4 + 0x11a92270] */
  switch (ECX) {
    case 0: goto L_11a92280;
    case 1: goto L_11a92288;
    case 2: goto L_11a92298;
    case 3: goto L_11a922ac;
    default: x86_unimpl("switch@0x11a92174 out of table"); return;
  }
  /* 11a9217b nop  */
  /* nop */
L_11a92188:;
  /* 11a92188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a9218b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9218d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a92190 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a92191 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a92194 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a92195 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92198 jb 0x11a92150 */
  if (C.cf) goto L_11a92150;
  /* 11a9219a std  */
  C.df=1;
  /* 11a9219b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a9219d cld  */
  C.df=0;
  /* 11a9219e jmp dword ptr [edx*4 + 0x11a92270] */
  switch (EDX) {
    case 0: goto L_11a92280;
    case 1: goto L_11a92288;
    case 2: goto L_11a92298;
    case 3: goto L_11a922ac;
    default: x86_unimpl("switch@0x11a9219e out of table"); return;
  }
  /* 11a921a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a921a8:;
  /* 11a921a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a921ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a921ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a921b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a921b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a921b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a921b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a921bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a921bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a921c2 jb 0x11a92150 */
  if (C.cf) goto L_11a92150;
  /* 11a921c4 std  */
  C.df=1;
  /* 11a921c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a921c7 cld  */
  C.df=0;
  /* 11a921c8 jmp dword ptr [edx*4 + 0x11a92270] */
  switch (EDX) {
    case 0: goto L_11a92280;
    case 1: goto L_11a92288;
    case 2: goto L_11a92298;
    case 3: goto L_11a922ac;
    default: x86_unimpl("switch@0x11a921c8 out of table"); return;
  }
  /* 11a921cf nop  */
  /* nop */
L_11a921d0:;
  /* 11a921d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a921d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a921d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a921d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a921db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a921de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a921e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a921e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a921e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a921ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a921ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a921f0 jb 0x11a92150 */
  if (C.cf) goto L_11a92150;
  /* 11a921f6 std  */
  C.df=1;
  /* 11a921f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a921f9 cld  */
  C.df=0;
  /* 11a921fa jmp dword ptr [edx*4 + 0x11a92270] */
  switch (EDX) {
    case 0: goto L_11a92280;
    case 1: goto L_11a92288;
    case 2: goto L_11a92298;
    case 3: goto L_11a922ac;
    default: x86_unimpl("switch@0x11a921fa out of table"); return;
  }
  /* 11a92201 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a92204 and al, 0x22 */
  { uint32_t _r=(AL)&(0x22u); AL = (_r); fl_logic(_r,8); }
  /* 11a92206 test eax, 0xa9222c11 */
  { uint32_t _r=(EAX)&(0xa9222c11u); fl_logic(_r,32); }
  /* 11a9220b adc dword ptr [edx], esi */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a9220e test eax, 0xa9223c11 */
  { uint32_t _r=(EAX)&(0xa9223c11u); fl_logic(_r,32); }
  /* 11a92213 adc dword ptr [edx - 0x57], eax */
  { uint32_t _a=(r32((uint32_t)(EDX + -0x57))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + -0x57), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a92217 adc dword ptr [edx - 0x57], ecx */
  { uint32_t _a=(r32((uint32_t)(EDX + -0x57))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + -0x57), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a9221b adc dword ptr [edx - 0x57], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + -0x57))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + -0x57), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a92224 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a92228 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a9222c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a92230 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a92234 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a92238 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a9223c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a92240 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a92244 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a92248 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a9224c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a92250 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a92254 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a92258 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a9225c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a92263 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92265 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a92267:;
  /* 11a92267 jmp dword ptr [edx*4 + 0x11a92270] */
  switch (EDX) {
    case 0: goto L_11a92280;
    case 1: goto L_11a92288;
    case 2: goto L_11a92298;
    case 3: goto L_11a922ac;
    default: x86_unimpl("switch@0x11a92267 out of table"); return;
  }
  /* 11a9226e mov edi, edi */
  EDI = (EDI);
L_11a92280:;
  /* 11a92280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92283 pop esi */
  ESI = (pop32());
  /* 11a92284 pop edi */
  EDI = (pop32());
  /* 11a92285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a92286 ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a92287 nop  */
  /* nop */
L_11a92288:;
  /* 11a92288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a9228b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a9228e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92291 pop esi */
  ESI = (pop32());
  /* 11a92292 pop edi */
  EDI = (pop32());
  /* 11a92293 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a92294 ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a92295 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a92298:;
  /* 11a92298 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a9229b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a9229e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a922a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a922a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a922a7 pop esi */
  ESI = (pop32());
  /* 11a922a8 pop edi */
  EDI = (pop32());
  /* 11a922a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a922aa ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
  /* 11a922ab nop  */
  /* nop */
L_11a922ac:;
  /* 11a922ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a922af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a922b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a922b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a922b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a922bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a922be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a922c1 pop esi */
  ESI = (pop32());
  /* 11a922c2 pop edi */
  EDI = (pop32());
  /* 11a922c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a922c4 ret  */
  ESPCHK(0x11a91f90u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11a922d0 (145 bytes, 42 insns) */
void f_11a922d0(void) {
  FTRACE(0x11a922d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a922d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a922d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a922d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a922d4 call 0x11a92380 */
  push32(0x11a922d9u); f_11a92380();
  /* 11a922d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a922dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a922de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a922e5 jmp 0x11a922f0 */
  goto L_11a922f0;
L_11a922e7:;
  /* 11a922e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a922ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a922ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a922f0:;
  /* 11a922f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a922f4 jae 0x11a9231a */
  if (!C.cf) goto L_11a9231a;
  /* 11a922f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a922f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a922fc cmp ecx, dword ptr [eax*8 + 0x11ab8360] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11ab8360))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92303 jne 0x11a92318 */
  if (!C.zf) goto L_11a92318;
  /* 11a92305 call 0x11a92370 */
  push32(0x11a9230au); f_11a92370();
  /* 11a9230a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9230d mov ecx, dword ptr [edx*8 + 0x11ab8364] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11ab8364)));
  /* 11a92314 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a92316 jmp 0x11a9235d */
  goto L_11a9235d;
L_11a92318:;
  /* 11a92318 jmp 0x11a922e7 */
  goto L_11a922e7;
L_11a9231a:;
  /* 11a9231a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9231e jb 0x11a92333 */
  if (C.cf) goto L_11a92333;
  /* 11a92320 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92324 ja 0x11a92333 */
  if ((!C.cf&&!C.zf)) goto L_11a92333;
  /* 11a92326 call 0x11a92370 */
  push32(0x11a9232bu); f_11a92370();
  /* 11a9232b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11a92331 jmp 0x11a9235d */
  goto L_11a9235d;
L_11a92333:;
  /* 11a92333 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9233a jb 0x11a92352 */
  if (C.cf) goto L_11a92352;
  /* 11a9233c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92343 ja 0x11a92352 */
  if ((!C.cf&&!C.zf)) goto L_11a92352;
  /* 11a92345 call 0x11a92370 */
  push32(0x11a9234au); f_11a92370();
  /* 11a9234a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11a92350 jmp 0x11a9235d */
  goto L_11a9235d;
L_11a92352:;
  /* 11a92352 call 0x11a92370 */
  push32(0x11a92357u); f_11a92370();
  /* 11a92357 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11a9235d:;
  /* 11a9235d mov esp, ebp */
  ESP = (EBP);
  /* 11a9235f pop ebp */
  EBP = (pop32());
  /* 11a92360 ret  */
  ESPCHK(0x11a922d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x11a92370 (13 bytes, 6 insns) */
void f_11a92370(void) {
  FTRACE(0x11a92370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92370 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92371 mov ebp, esp */
  EBP = (ESP);
  /* 11a92373 call 0x11a89220 */
  push32(0x11a92378u); f_11a89220();
  /* 11a92378 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9237b pop ebp */
  EBP = (pop32());
  /* 11a9237c ret  */
  ESPCHK(0x11a92370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012380 @ 0x11a92380 (13 bytes, 6 insns) */
void f_11a92380(void) {
  FTRACE(0x11a92380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92380 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92381 mov ebp, esp */
  EBP = (ESP);
  /* 11a92383 call 0x11a89220 */
  push32(0x11a92388u); f_11a89220();
  /* 11a92388 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9238b pop ebp */
  EBP = (pop32());
  /* 11a9238c ret  */
  ESPCHK(0x11a92380u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x11a92390 (482 bytes, 138 insns) */
void f_11a92390(void) {
  FTRACE(0x11a92390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92390 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92391 mov ebp, esp */
  EBP = (ESP);
  /* 11a92393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92396 push esi */
  push32((uint32_t)(ESI));
  /* 11a92397 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11a9239e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a923a0 call 0x11a8f2d0 */
  push32(0x11a923a5u); f_11a8f2d0();
  /* 11a923a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a923a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a923af jmp 0x11a923ba */
  goto L_11a923ba;
L_11a923b1:;
  /* 11a923b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a923b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a923b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a923ba:;
  /* 11a923ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a923be jge 0x11a92560 */
  if ((C.sf==C.of)) goto L_11a92560;
  /* 11a923c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a923c7 cmp dword ptr [ecx*4 + 0x11abba80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11abba80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a923cf je 0x11a924c6 */
  if (C.zf) goto L_11a924c6;
  /* 11a923d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a923d8 mov eax, dword ptr [edx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a923df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a923e2 jmp 0x11a923ed */
  goto L_11a923ed;
L_11a923e4:;
  /* 11a923e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a923e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a923ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a923ed:;
  /* 11a923ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a923f0 mov eax, dword ptr [edx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a923f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a923fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a923ff jae 0x11a924b6 */
  if (!C.cf) goto L_11a924b6;
  /* 11a92405 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92408 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a9240c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9240f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a92411 jne 0x11a924b1 */
  if (!C.zf) goto L_11a924b1;
  /* 11a92417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9241a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9241e jne 0x11a92459 */
  if (!C.zf) goto L_11a92459;
  /* 11a92420 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a92422 call 0x11a8f2d0 */
  push32(0x11a92427u); f_11a8f2d0();
  /* 11a92427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9242a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9242d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92431 jne 0x11a9244f */
  if (!C.zf) goto L_11a9244f;
  /* 11a92433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92436 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92439 push edx */
  push32((uint32_t)(EDX));
  /* 11a9243a call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a92440u);
  /* 11a92440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92443 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a92446 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9244c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11a9244f:;
  /* 11a9244f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a92451 call 0x11a8f370 */
  push32(0x11a92456u); f_11a8f370();
  /* 11a92456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a92459:;
  /* 11a92459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9245c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9245f push eax */
  push32((uint32_t)(EAX));
  /* 11a92460 call dword ptr [0x11abc35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc35c))), 0x11a92466u);
  /* 11a92466 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92469 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a9246d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a92470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a92472 je 0x11a92486 */
  if (C.zf) goto L_11a92486;
  /* 11a92474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92477 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9247a push eax */
  push32((uint32_t)(EAX));
  /* 11a9247b call dword ptr [0x11abc34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc34c))), 0x11a92481u);
  /* 11a92481 jmp 0x11a923e4 */
  goto L_11a923e4;
L_11a92486:;
  /* 11a92486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92489 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11a9248f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92492 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a92495 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9249b sub eax, dword ptr [edx*4 + 0x11abba80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11abba80))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a924a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a924a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11a924a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a924aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a924ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a924af jmp 0x11a924b6 */
  goto L_11a924b6;
L_11a924b1:;
  /* 11a924b1 jmp 0x11a923e4 */
  goto L_11a923e4;
L_11a924b6:;
  /* 11a924b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a924ba je 0x11a924c1 */
  if (C.zf) goto L_11a924c1;
  /* 11a924bc jmp 0x11a92560 */
  goto L_11a92560;
L_11a924c1:;
  /* 11a924c1 jmp 0x11a9255b */
  goto L_11a9255b;
L_11a924c6:;
  /* 11a924c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11a924c8 push 0x11ab528c */
  push32((uint32_t)(0x11ab528cu));
  /* 11a924cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a924cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a924d4 call 0x11a897e0 */
  push32(0x11a924d9u); f_11a897e0();
  /* 11a924d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a924dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a924df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a924e3 je 0x11a92559 */
  if (C.zf) goto L_11a92559;
  /* 11a924e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a924e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a924eb mov dword ptr [eax*4 + 0x11abba80], ecx */
  w32((uint32_t)(EAX*4 + 0x11abba80), (ECX));
  /* 11a924f2 mov edx, dword ptr [0x11abbbbc] */
  EDX = (r32((uint32_t)(0x11abbbbc)));
  /* 11a924f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a924fb mov dword ptr [0x11abbbbc], edx */
  w32((uint32_t)(0x11abbbbc), (EDX));
  /* 11a92501 jmp 0x11a9250c */
  goto L_11a9250c;
L_11a92503:;
  /* 11a92503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92506 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a9250c:;
  /* 11a9250c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9250f mov edx, dword ptr [ecx*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a92516 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9251c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9251f jae 0x11a92544 */
  if (!C.cf) goto L_11a92544;
  /* 11a92521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92524 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a92528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9252b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11a92531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92534 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11a92538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9253b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11a92542 jmp 0x11a92503 */
  goto L_11a92503;
L_11a92544:;
  /* 11a92544 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92547 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a9254a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9254d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92550 push edx */
  push32((uint32_t)(EDX));
  /* 11a92551 call 0x11a928a0 */
  push32(0x11a92556u); f_11a928a0();
  /* 11a92556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a92559:;
  /* 11a92559 jmp 0x11a92560 */
  goto L_11a92560;
L_11a9255b:;
  /* 11a9255b jmp 0x11a923b1 */
  goto L_11a923b1;
L_11a92560:;
  /* 11a92560 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a92562 call 0x11a8f370 */
  push32(0x11a92567u); f_11a8f370();
  /* 11a92567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9256a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9256d pop esi */
  ESI = (pop32());
  /* 11a9256e mov esp, ebp */
  ESP = (EBP);
  /* 11a92570 pop ebp */
  EBP = (pop32());
  /* 11a92571 ret  */
  ESPCHK(0x11a92390u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11a92580 (183 bytes, 57 insns) */
void f_11a92580(void) {
  FTRACE(0x11a92580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92580 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92581 mov ebp, esp */
  EBP = (ESP);
  /* 11a92583 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92587 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9258d jae 0x11a9261a */
  if (!C.cf) goto L_11a9261a;
  /* 11a92593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92596 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a92599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9259c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9259f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a925a2 mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a925a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a925ad jne 0x11a9261a */
  if (!C.zf) goto L_11a9261a;
  /* 11a925af cmp dword ptr [0x11aba0b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a925b6 jne 0x11a925fa */
  if (!C.zf) goto L_11a925fa;
  /* 11a925b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a925bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a925be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a925c2 je 0x11a925d2 */
  if (C.zf) goto L_11a925d2;
  /* 11a925c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a925c8 je 0x11a925e0 */
  if (C.zf) goto L_11a925e0;
  /* 11a925ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a925ce je 0x11a925ee */
  if (C.zf) goto L_11a925ee;
  /* 11a925d0 jmp 0x11a925fa */
  goto L_11a925fa;
L_11a925d2:;
  /* 11a925d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a925d5 push edx */
  push32((uint32_t)(EDX));
  /* 11a925d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a925d8 call dword ptr [0x11abc324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc324))), 0x11a925deu);
  /* 11a925de jmp 0x11a925fa */
  goto L_11a925fa;
L_11a925e0:;
  /* 11a925e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a925e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a925e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a925e6 call dword ptr [0x11abc324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc324))), 0x11a925ecu);
  /* 11a925ec jmp 0x11a925fa */
  goto L_11a925fa;
L_11a925ee:;
  /* 11a925ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a925f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a925f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a925f4 call dword ptr [0x11abc324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc324))), 0x11a925fau);
L_11a925fa:;
  /* 11a925fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a925fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11a92600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92603 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a92606 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92609 mov ecx, dword ptr [edx*4 + 0x11abba80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a92610 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92613 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11a92616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a92618 jmp 0x11a92633 */
  goto L_11a92633;
L_11a9261a:;
  /* 11a9261a call 0x11a92370 */
  push32(0x11a9261fu); f_11a92370();
  /* 11a9261f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a92625 call 0x11a92380 */
  push32(0x11a9262au); f_11a92380();
  /* 11a9262a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a92630 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a92633:;
  /* 11a92633 mov esp, ebp */
  ESP = (EBP);
  /* 11a92635 pop ebp */
  EBP = (pop32());
  /* 11a92636 ret  */
  ESPCHK(0x11a92580u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x11a92640 (216 bytes, 63 insns) */
void f_11a92640(void) {
  FTRACE(0x11a92640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92640 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92641 mov ebp, esp */
  EBP = (ESP);
  /* 11a92643 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92647 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9264d jae 0x11a926fb */
  if (!C.cf) goto L_11a926fb;
  /* 11a92653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92656 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a92659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9265c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9265f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92662 mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a92669 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a9266e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a92671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a92673 je 0x11a926fb */
  if (C.zf) goto L_11a926fb;
  /* 11a92679 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9267c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11a9267f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92682 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a92685 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92688 mov ecx, dword ptr [edx*4 + 0x11abba80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a9268f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92693 je 0x11a926fb */
  if (C.zf) goto L_11a926fb;
  /* 11a92695 cmp dword ptr [0x11aba0b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9269c jne 0x11a926da */
  if (!C.zf) goto L_11a926da;
  /* 11a9269e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a926a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a926a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a926a8 je 0x11a926b8 */
  if (C.zf) goto L_11a926b8;
  /* 11a926aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a926ae je 0x11a926c4 */
  if (C.zf) goto L_11a926c4;
  /* 11a926b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a926b4 je 0x11a926d0 */
  if (C.zf) goto L_11a926d0;
  /* 11a926b6 jmp 0x11a926da */
  goto L_11a926da;
L_11a926b8:;
  /* 11a926b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a926ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a926bc call dword ptr [0x11abc324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc324))), 0x11a926c2u);
  /* 11a926c2 jmp 0x11a926da */
  goto L_11a926da;
L_11a926c4:;
  /* 11a926c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a926c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11a926c8 call dword ptr [0x11abc324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc324))), 0x11a926ceu);
  /* 11a926ce jmp 0x11a926da */
  goto L_11a926da;
L_11a926d0:;
  /* 11a926d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a926d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a926d4 call dword ptr [0x11abc324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc324))), 0x11a926dau);
L_11a926da:;
  /* 11a926da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a926dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a926e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a926e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a926e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a926e9 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a926f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11a926f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a926f9 jmp 0x11a92714 */
  goto L_11a92714;
L_11a926fb:;
  /* 11a926fb call 0x11a92370 */
  push32(0x11a92700u); f_11a92370();
  /* 11a92700 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a92706 call 0x11a92380 */
  push32(0x11a9270bu); f_11a92380();
  /* 11a9270b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a92711 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a92714:;
  /* 11a92714 mov esp, ebp */
  ESP = (EBP);
  /* 11a92716 pop ebp */
  EBP = (pop32());
  /* 11a92717 ret  */
  ESPCHK(0x11a92640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012720 @ 0x11a92720 (102 bytes, 30 insns) */
void f_11a92720(void) {
  FTRACE(0x11a92720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92720 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92721 mov ebp, esp */
  EBP = (ESP);
  /* 11a92723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92726 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9272c jae 0x11a9276b */
  if (!C.cf) goto L_11a9276b;
  /* 11a9272e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92731 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a92734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92737 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9273a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9273d mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a92744 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a92749 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9274c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9274e je 0x11a9276b */
  if (C.zf) goto L_11a9276b;
  /* 11a92750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92753 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11a92756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92759 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9275c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9275f mov ecx, dword ptr [edx*4 + 0x11abba80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a92766 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11a92769 jmp 0x11a92784 */
  goto L_11a92784;
L_11a9276b:;
  /* 11a9276b call 0x11a92370 */
  push32(0x11a92770u); f_11a92370();
  /* 11a92770 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a92776 call 0x11a92380 */
  push32(0x11a9277bu); f_11a92380();
  /* 11a9277b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a92781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a92784:;
  /* 11a92784 pop ebp */
  EBP = (pop32());
  /* 11a92785 ret  */
  ESPCHK(0x11a92720u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x11a92790 (260 bytes, 83 insns) */
void f_11a92790(void) {
  FTRACE(0x11a92790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92790 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92791 mov ebp, esp */
  EBP = (ESP);
  /* 11a92793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92796 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a9279a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9279d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a927a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a927a2 je 0x11a927ad */
  if (C.zf) goto L_11a927ad;
  /* 11a927a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a927a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a927aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11a927ad:;
  /* 11a927ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a927b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a927b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a927b8 je 0x11a927c2 */
  if (C.zf) goto L_11a927c2;
  /* 11a927ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a927bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11a927bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11a927c2:;
  /* 11a927c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a927c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11a927cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a927cd je 0x11a927d8 */
  if (C.zf) goto L_11a927d8;
  /* 11a927cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a927d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11a927d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11a927d8:;
  /* 11a927d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a927db push eax */
  push32((uint32_t)(EAX));
  /* 11a927dc call dword ptr [0x11abc3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3dc))), 0x11a927e2u);
  /* 11a927e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a927e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a927e9 jne 0x11a92802 */
  if (!C.zf) goto L_11a92802;
  /* 11a927eb call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a927f1u);
  /* 11a927f1 push eax */
  push32((uint32_t)(EAX));
  /* 11a927f2 call 0x11a922d0 */
  push32(0x11a927f7u); f_11a922d0();
  /* 11a927f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a927fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a927fd jmp 0x11a92890 */
  goto L_11a92890;
L_11a92802:;
  /* 11a92802 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92806 jne 0x11a92813 */
  if (!C.zf) goto L_11a92813;
  /* 11a92808 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a9280b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11a9280e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11a92811 jmp 0x11a92822 */
  goto L_11a92822;
L_11a92813:;
  /* 11a92813 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92817 jne 0x11a92822 */
  if (!C.zf) goto L_11a92822;
  /* 11a92819 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a9281c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11a9281f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11a92822:;
  /* 11a92822 call 0x11a92390 */
  push32(0x11a92827u); f_11a92390();
  /* 11a92827 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9282a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9282e jne 0x11a9284b */
  if (!C.zf) goto L_11a9284b;
  /* 11a92830 call 0x11a92370 */
  push32(0x11a92835u); f_11a92370();
  /* 11a92835 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11a9283b call 0x11a92380 */
  push32(0x11a92840u); f_11a92380();
  /* 11a92840 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a92846 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a92849 jmp 0x11a92890 */
  goto L_11a92890;
L_11a9284b:;
  /* 11a9284b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9284e push eax */
  push32((uint32_t)(EAX));
  /* 11a9284f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92852 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92853 call 0x11a92580 */
  push32(0x11a92858u); f_11a92580();
  /* 11a92858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9285b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a9285e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11a92861 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11a92864 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92867 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a9286a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9286d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a92870 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92873 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a9287a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a9287d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11a92881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92884 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92885 call 0x11a92930 */
  push32(0x11a9288au); f_11a92930();
  /* 11a9288a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9288d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a92890:;
  /* 11a92890 mov esp, ebp */
  ESP = (EBP);
  /* 11a92892 pop ebp */
  EBP = (pop32());
  /* 11a92893 ret  */
  ESPCHK(0x11a92790u, _esp0);
  ESP += 4; return;
}

/* FUN_100128a0 @ 0x11a928a0 (134 bytes, 44 insns) */
void f_11a928a0(void) {
  FTRACE(0x11a928a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a928a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a928a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a928a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a928a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a928a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a928aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a928ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a928b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a928b3 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a928ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a928bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a928bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a928c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a928c6 jne 0x11a92901 */
  if (!C.zf) goto L_11a92901;
  /* 11a928c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a928ca call 0x11a8f2d0 */
  push32(0x11a928cfu); f_11a8f2d0();
  /* 11a928cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a928d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a928d5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a928d9 jne 0x11a928f7 */
  if (!C.zf) goto L_11a928f7;
  /* 11a928db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a928de add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a928e1 push edx */
  push32((uint32_t)(EDX));
  /* 11a928e2 call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a928e8u);
  /* 11a928e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a928eb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a928ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a928f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a928f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11a928f7:;
  /* 11a928f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a928f9 call 0x11a8f370 */
  push32(0x11a928feu); f_11a8f370();
  /* 11a928fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a92901:;
  /* 11a92901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92904 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a92907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9290a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a9290d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92910 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a92917 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11a9291b push eax */
  push32((uint32_t)(EAX));
  /* 11a9291c call dword ptr [0x11abc35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc35c))), 0x11a92922u);
  /* 11a92922 mov esp, ebp */
  ESP = (EBP);
  /* 11a92924 pop ebp */
  EBP = (pop32());
  /* 11a92925 ret  */
  ESPCHK(0x11a928a0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11a92930 (38 bytes, 13 insns) */
void f_11a92930(void) {
  FTRACE(0x11a92930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92930 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92931 mov ebp, esp */
  EBP = (ESP);
  /* 11a92933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92936 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a92939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9293c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a9293f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92942 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a92949 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11a9294d push eax */
  push32((uint32_t)(EAX));
  /* 11a9294e call dword ptr [0x11abc34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc34c))), 0x11a92954u);
  /* 11a92954 pop ebp */
  EBP = (pop32());
  /* 11a92955 ret  */
  ESPCHK(0x11a92930u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x11a92960 (218 bytes, 63 insns) */
void f_11a92960(void) {
  FTRACE(0x11a92960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92960 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92961 mov ebp, esp */
  EBP = (ESP);
  /* 11a92963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9296d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9296f call 0x11a8f2d0 */
  push32(0x11a92974u); f_11a8f2d0();
  /* 11a92974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92977 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11a9297e jmp 0x11a92989 */
  goto L_11a92989;
L_11a92980:;
  /* 11a92980 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92983 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92986 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a92989:;
  /* 11a92989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9298c cmp ecx, dword ptr [0x11abba60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11abba60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92992 jge 0x11a92a29 */
  if ((C.sf==C.of)) goto L_11a92a29;
  /* 11a92998 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9299b mov eax, dword ptr [0x11aba70c] */
  EAX = (r32((uint32_t)(0x11aba70c)));
  /* 11a929a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a929a4 je 0x11a92a24 */
  if (C.zf) goto L_11a92a24;
  /* 11a929a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a929a9 mov edx, dword ptr [0x11aba70c] */
  EDX = (r32((uint32_t)(0x11aba70c)));
  /* 11a929af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a929b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a929b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11a929bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a929bd je 0x11a929e1 */
  if (C.zf) goto L_11a929e1;
  /* 11a929bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a929c2 mov eax, dword ptr [0x11aba70c] */
  EAX = (r32((uint32_t)(0x11aba70c)));
  /* 11a929c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11a929ca push ecx */
  push32((uint32_t)(ECX));
  /* 11a929cb call 0x11a95d60 */
  push32(0x11a929d0u); f_11a95d60();
  /* 11a929d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a929d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a929d6 je 0x11a929e1 */
  if (C.zf) goto L_11a929e1;
  /* 11a929d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a929db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a929de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a929e1:;
  /* 11a929e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a929e5 jl 0x11a92a24 */
  if ((C.sf!=C.of)) goto L_11a92a24;
  /* 11a929e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a929ea mov ecx, dword ptr [0x11aba70c] */
  ECX = (r32((uint32_t)(0x11aba70c)));
  /* 11a929f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a929f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a929f6 push edx */
  push32((uint32_t)(EDX));
  /* 11a929f7 call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a929fdu);
  /* 11a929fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a929ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92a02 mov ecx, dword ptr [0x11aba70c] */
  ECX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92a08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a92a0b push edx */
  push32((uint32_t)(EDX));
  /* 11a92a0c call 0x11a8a270 */
  push32(0x11a92a11u); f_11a8a270();
  /* 11a92a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92a17 mov ecx, dword ptr [0x11aba70c] */
  ECX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92a1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11a92a24:;
  /* 11a92a24 jmp 0x11a92980 */
  goto L_11a92980;
L_11a92a29:;
  /* 11a92a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a92a2b call 0x11a8f370 */
  push32(0x11a92a30u); f_11a8f370();
  /* 11a92a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92a36 mov esp, ebp */
  ESP = (EBP);
  /* 11a92a38 pop ebp */
  EBP = (pop32());
  /* 11a92a39 ret  */
  ESPCHK(0x11a92960u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a40 @ 0x11a92a40 (68 bytes, 26 insns) */
void f_11a92a40(void) {
  FTRACE(0x11a92a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92a41 mov ebp, esp */
  EBP = (ESP);
  /* 11a92a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92a44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92a48 jne 0x11a92a56 */
  if (!C.zf) goto L_11a92a56;
  /* 11a92a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a92a4c call 0x11a92bb0 */
  push32(0x11a92a51u); f_11a92bb0();
  /* 11a92a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a54 jmp 0x11a92a80 */
  goto L_11a92a80;
L_11a92a56:;
  /* 11a92a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92a59 push eax */
  push32((uint32_t)(EAX));
  /* 11a92a5a call 0x11a8d7c0 */
  push32(0x11a92a5fu); f_11a8d7c0();
  /* 11a92a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92a65 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92a66 call 0x11a92a90 */
  push32(0x11a92a6bu); f_11a92a90();
  /* 11a92a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a92a71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92a74 push edx */
  push32((uint32_t)(EDX));
  /* 11a92a75 call 0x11a8d830 */
  push32(0x11a92a7au); f_11a8d830();
  /* 11a92a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a92a80:;
  /* 11a92a80 mov esp, ebp */
  ESP = (EBP);
  /* 11a92a82 pop ebp */
  EBP = (pop32());
  /* 11a92a83 ret  */
  ESPCHK(0x11a92a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a90 @ 0x11a92a90 (65 bytes, 26 insns) */
void f_11a92a90(void) {
  FTRACE(0x11a92a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92a91 mov ebp, esp */
  EBP = (ESP);
  /* 11a92a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92a96 push eax */
  push32((uint32_t)(EAX));
  /* 11a92a97 call 0x11a92ae0 */
  push32(0x11a92a9cu); f_11a92ae0();
  /* 11a92a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a92aa1 je 0x11a92aa8 */
  if (C.zf) goto L_11a92aa8;
  /* 11a92aa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a92aa6 jmp 0x11a92acf */
  goto L_11a92acf;
L_11a92aa8:;
  /* 11a92aa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92aab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a92aae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a92ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a92ab6 je 0x11a92acd */
  if (C.zf) goto L_11a92acd;
  /* 11a92ab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92abb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a92abe push ecx */
  push32((uint32_t)(ECX));
  /* 11a92abf call 0x11a95eb0 */
  push32(0x11a92ac4u); f_11a95eb0();
  /* 11a92ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92ac7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a92ac9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92acb jmp 0x11a92acf */
  goto L_11a92acf;
L_11a92acd:;
  /* 11a92acd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a92acf:;
  /* 11a92acf pop ebp */
  EBP = (pop32());
  /* 11a92ad0 ret  */
  ESPCHK(0x11a92a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ae0 @ 0x11a92ae0 (183 bytes, 62 insns) */
void f_11a92ae0(void) {
  FTRACE(0x11a92ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11a92ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92ae6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a92aed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92af0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a92af3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92af6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a92af9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a92afc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92aff jne 0x11a92b7b */
  if (!C.zf) goto L_11a92b7b;
  /* 11a92b01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a92b07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11a92b0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a92b0f je 0x11a92b7b */
  if (C.zf) goto L_11a92b7b;
  /* 11a92b11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a92b19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92b1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a92b1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92b23 jle 0x11a92b7b */
  if ((C.zf||C.sf!=C.of)) goto L_11a92b7b;
  /* 11a92b25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92b28 push edx */
  push32((uint32_t)(EDX));
  /* 11a92b29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a92b2f push ecx */
  push32((uint32_t)(ECX));
  /* 11a92b30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a92b36 push eax */
  push32((uint32_t)(EAX));
  /* 11a92b37 call 0x11a8d250 */
  push32(0x11a92b3cu); f_11a8d250();
  /* 11a92b3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92b3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92b42 jne 0x11a92b65 */
  if (!C.zf) goto L_11a92b65;
  /* 11a92b44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a92b4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11a92b50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a92b52 je 0x11a92b63 */
  if (C.zf) goto L_11a92b63;
  /* 11a92b54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a92b5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11a92b5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11a92b63:;
  /* 11a92b63 jmp 0x11a92b7b */
  goto L_11a92b7b;
L_11a92b65:;
  /* 11a92b65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a92b6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a92b6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11a92b74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a92b7b:;
  /* 11a92b7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a92b84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a92b86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a92b89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a92b90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92b93 mov esp, ebp */
  ESP = (EBP);
  /* 11a92b95 pop ebp */
  EBP = (pop32());
  /* 11a92b96 ret  */
  ESPCHK(0x11a92ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ba0 @ 0x11a92ba0 (15 bytes, 7 insns) */
void f_11a92ba0(void) {
  FTRACE(0x11a92ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11a92ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a92ba5 call 0x11a92bb0 */
  push32(0x11a92baau); f_11a92bb0();
  /* 11a92baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92bad pop ebp */
  EBP = (pop32());
  /* 11a92bae ret  */
  ESPCHK(0x11a92ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bb0 @ 0x11a92bb0 (319 bytes, 94 insns) */
void f_11a92bb0(void) {
  FTRACE(0x11a92bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a92bb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92bb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a92bbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a92bc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a92bc6 call 0x11a8f2d0 */
  push32(0x11a92bcbu); f_11a8f2d0();
  /* 11a92bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92bce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a92bd5 jmp 0x11a92be0 */
  goto L_11a92be0;
L_11a92bd7:;
  /* 11a92bd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92bda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92bdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a92be0:;
  /* 11a92be0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92be3 cmp ecx, dword ptr [0x11abba60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11abba60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92be9 jge 0x11a92cd3 */
  if ((C.sf==C.of)) goto L_11a92cd3;
  /* 11a92bef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92bf2 mov eax, dword ptr [0x11aba70c] */
  EAX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92bf7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92bfb je 0x11a92cce */
  if (C.zf) goto L_11a92cce;
  /* 11a92c01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c04 mov edx, dword ptr [0x11aba70c] */
  EDX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92c0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a92c0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a92c10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11a92c16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a92c18 je 0x11a92cce */
  if (C.zf) goto L_11a92cce;
  /* 11a92c1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c21 mov eax, dword ptr [0x11aba70c] */
  EAX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92c26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11a92c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92c2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c2d push edx */
  push32((uint32_t)(EDX));
  /* 11a92c2e call 0x11a8d800 */
  push32(0x11a92c33u); f_11a8d800();
  /* 11a92c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92c36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c39 mov ecx, dword ptr [0x11aba70c] */
  ECX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92c3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a92c42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a92c45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11a92c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a92c4c je 0x11a92cb5 */
  if (C.zf) goto L_11a92cb5;
  /* 11a92c4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92c52 jne 0x11a92c79 */
  if (!C.zf) goto L_11a92c79;
  /* 11a92c54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c57 mov edx, dword ptr [0x11aba70c] */
  EDX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92c5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a92c60 push eax */
  push32((uint32_t)(EAX));
  /* 11a92c61 call 0x11a92a90 */
  push32(0x11a92c66u); f_11a92a90();
  /* 11a92c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92c69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92c6c je 0x11a92c77 */
  if (C.zf) goto L_11a92c77;
  /* 11a92c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92c71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92c74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a92c77:;
  /* 11a92c77 jmp 0x11a92cb5 */
  goto L_11a92cb5;
L_11a92c79:;
  /* 11a92c79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92c7d jne 0x11a92cb5 */
  if (!C.zf) goto L_11a92cb5;
  /* 11a92c7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c82 mov eax, dword ptr [0x11aba70c] */
  EAX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92c87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11a92c8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a92c8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a92c90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a92c92 je 0x11a92cb5 */
  if (C.zf) goto L_11a92cb5;
  /* 11a92c94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92c97 mov ecx, dword ptr [0x11aba70c] */
  ECX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92c9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a92ca0 push edx */
  push32((uint32_t)(EDX));
  /* 11a92ca1 call 0x11a92a90 */
  push32(0x11a92ca6u); f_11a92a90();
  /* 11a92ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92ca9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92cac jne 0x11a92cb5 */
  if (!C.zf) goto L_11a92cb5;
  /* 11a92cae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11a92cb5:;
  /* 11a92cb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92cb8 mov ecx, dword ptr [0x11aba70c] */
  ECX = (r32((uint32_t)(0x11aba70c)));
  /* 11a92cbe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a92cc1 push edx */
  push32((uint32_t)(EDX));
  /* 11a92cc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92cc5 push eax */
  push32((uint32_t)(EAX));
  /* 11a92cc6 call 0x11a8d870 */
  push32(0x11a92ccbu); f_11a8d870();
  /* 11a92ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a92cce:;
  /* 11a92cce jmp 0x11a92bd7 */
  goto L_11a92bd7;
L_11a92cd3:;
  /* 11a92cd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a92cd5 call 0x11a8f370 */
  push32(0x11a92cdau); f_11a8f370();
  /* 11a92cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92cdd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92ce1 jne 0x11a92ce8 */
  if (!C.zf) goto L_11a92ce8;
  /* 11a92ce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a92ce6 jmp 0x11a92ceb */
  goto L_11a92ceb;
L_11a92ce8:;
  /* 11a92ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a92ceb:;
  /* 11a92ceb mov esp, ebp */
  ESP = (EBP);
  /* 11a92ced pop ebp */
  EBP = (pop32());
  /* 11a92cee ret  */
  ESPCHK(0x11a92bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x11a92cf0 (1007 bytes, 269 insns) */
void f_11a92cf0(void) {
  FTRACE(0x11a92cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a92cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a92cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11a92cf3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92cfd jl 0x11a92d05 */
  if ((C.sf!=C.of)) goto L_11a92d05;
  /* 11a92cff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92d03 jle 0x11a92d0c */
  if ((C.zf||C.sf!=C.of)) goto L_11a92d0c;
L_11a92d05:;
  /* 11a92d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a92d07 jmp 0x11a930db */
  goto L_11a930db;
L_11a92d0c:;
  /* 11a92d0c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a92d0e call 0x11a8f2d0 */
  push32(0x11a92d13u); f_11a8f2d0();
  /* 11a92d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92d16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a92d1d mov eax, dword ptr [0x11aba43c] */
  EAX = (r32((uint32_t)(0x11aba43c)));
  /* 11a92d22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92d25 mov dword ptr [0x11aba43c], eax */
  w32((uint32_t)(0x11aba43c), (EAX));
L_11a92d2a:;
  /* 11a92d2a cmp dword ptr [0x11aba44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92d31 je 0x11a92d3d */
  if (C.zf) goto L_11a92d3d;
  /* 11a92d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a92d35 call dword ptr [0x11abc32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc32c))), 0x11a92d3bu);
  /* 11a92d3b jmp 0x11a92d2a */
  goto L_11a92d2a;
L_11a92d3d:;
  /* 11a92d3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92d41 je 0x11a92d81 */
  if (C.zf) goto L_11a92d81;
  /* 11a92d43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92d47 je 0x11a92d61 */
  if (C.zf) goto L_11a92d61;
  /* 11a92d49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92d4c push ecx */
  push32((uint32_t)(ECX));
  /* 11a92d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92d50 push edx */
  push32((uint32_t)(EDX));
  /* 11a92d51 call 0x11a930e0 */
  push32(0x11a92d56u); f_11a930e0();
  /* 11a92d56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92d59 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11a92d5f jmp 0x11a92d73 */
  goto L_11a92d73;
L_11a92d61:;
  /* 11a92d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92d64 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92d67 mov ecx, dword ptr [eax + 0x11ab85dc] */
  ECX = (r32((uint32_t)(EAX + 0x11ab85dc)));
  /* 11a92d6d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11a92d73:;
  /* 11a92d73 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11a92d79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a92d7c jmp 0x11a930bb */
  goto L_11a930bb;
L_11a92d81:;
  /* 11a92d81 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11a92d88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a92d8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92d93 je 0x11a930b3 */
  if (C.zf) goto L_11a930b3;
  /* 11a92d99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92d9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a92d9f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92da2 jne 0x11a92fc4 */
  if (!C.zf) goto L_11a92fc4;
  /* 11a92da8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92dab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11a92daf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92db2 jne 0x11a92fc4 */
  if (!C.zf) goto L_11a92fc4;
  /* 11a92db8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92dbb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11a92dbf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92dc2 jne 0x11a92fc4 */
  if (!C.zf) goto L_11a92fc4;
  /* 11a92dc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92dcb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11a92dd1:;
  /* 11a92dd1 push 0x11ab52dc */
  push32((uint32_t)(0x11ab52dcu));
  /* 11a92dd6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a92ddc push ecx */
  push32((uint32_t)(ECX));
  /* 11a92ddd call 0x11a97560 */
  push32(0x11a92de2u); f_11a97560();
  /* 11a92de2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92de5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11a92deb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92df2 je 0x11a92e1d */
  if (C.zf) goto L_11a92e1d;
  /* 11a92df4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92dfa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92e00 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11a92e06 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92e0d je 0x11a92e1d */
  if (C.zf) goto L_11a92e1d;
  /* 11a92e0f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92e15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a92e18 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92e1b jne 0x11a92e43 */
  if (!C.zf) goto L_11a92e43;
L_11a92e1d:;
  /* 11a92e1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92e21 je 0x11a92e3c */
  if (C.zf) goto L_11a92e3c;
  /* 11a92e23 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a92e25 call 0x11a8f370 */
  push32(0x11a92e2au); f_11a8f370();
  /* 11a92e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92e2d mov edx, dword ptr [0x11aba43c] */
  EDX = (r32((uint32_t)(0x11aba43c)));
  /* 11a92e33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92e36 mov dword ptr [0x11aba43c], edx */
  w32((uint32_t)(0x11aba43c), (EDX));
L_11a92e3c:;
  /* 11a92e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a92e3e jmp 0x11a930db */
  goto L_11a930db;
L_11a92e43:;
  /* 11a92e43 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11a92e4a jmp 0x11a92e55 */
  goto L_11a92e55;
L_11a92e4c:;
  /* 11a92e4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a92e4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92e52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a92e55:;
  /* 11a92e55 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92e59 jg 0x11a92ea3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a92ea3;
  /* 11a92e5b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11a92e61 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92e62 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a92e68 push edx */
  push32((uint32_t)(EDX));
  /* 11a92e69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a92e6c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92e6f mov ecx, dword ptr [eax + 0x11ab85d8] */
  ECX = (r32((uint32_t)(EAX + 0x11ab85d8)));
  /* 11a92e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92e76 call 0x11a97520 */
  push32(0x11a92e7bu); f_11a97520();
  /* 11a92e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a92e80 jne 0x11a92ea1 */
  if (!C.zf) goto L_11a92ea1;
  /* 11a92e82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a92e85 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a92e88 mov eax, dword ptr [edx + 0x11ab85d8] */
  EAX = (r32((uint32_t)(EDX + 0x11ab85d8)));
  /* 11a92e8e push eax */
  push32((uint32_t)(EAX));
  /* 11a92e8f call 0x11a8c610 */
  push32(0x11a92e94u); f_11a8c610();
  /* 11a92e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92e97 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92e9d jne 0x11a92ea1 */
  if (!C.zf) goto L_11a92ea1;
  /* 11a92e9f jmp 0x11a92ea3 */
  goto L_11a92ea3;
L_11a92ea1:;
  /* 11a92ea1 jmp 0x11a92e4c */
  goto L_11a92e4c;
L_11a92ea3:;
  /* 11a92ea3 push 0x11ab52d8 */
  push32((uint32_t)(0x11ab52d8u));
  /* 11a92ea8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92eb1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11a92eb7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92ebd push edx */
  push32((uint32_t)(EDX));
  /* 11a92ebe call 0x11a974e0 */
  push32(0x11a92ec3u); f_11a974e0();
  /* 11a92ec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92ec6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11a92ecc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92ed3 jne 0x11a92f09 */
  if (!C.zf) goto L_11a92f09;
  /* 11a92ed5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92edb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a92ede cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92ee1 je 0x11a92f09 */
  if (C.zf) goto L_11a92f09;
  /* 11a92ee3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92ee7 je 0x11a92f02 */
  if (C.zf) goto L_11a92f02;
  /* 11a92ee9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a92eeb call 0x11a8f370 */
  push32(0x11a92ef0u); f_11a8f370();
  /* 11a92ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92ef3 mov edx, dword ptr [0x11aba43c] */
  EDX = (r32((uint32_t)(0x11aba43c)));
  /* 11a92ef9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a92efc mov dword ptr [0x11aba43c], edx */
  w32((uint32_t)(0x11aba43c), (EDX));
L_11a92f02:;
  /* 11a92f02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a92f04 jmp 0x11a930db */
  goto L_11a930db;
L_11a92f09:;
  /* 11a92f09 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92f0d jg 0x11a92f5a */
  if ((!C.zf&&C.sf==C.of)) goto L_11a92f5a;
  /* 11a92f0f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11a92f15 push eax */
  push32((uint32_t)(EAX));
  /* 11a92f16 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92f1c push ecx */
  push32((uint32_t)(ECX));
  /* 11a92f1d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11a92f23 push edx */
  push32((uint32_t)(EDX));
  /* 11a92f24 call 0x11a8d000 */
  push32(0x11a92f29u); f_11a8d000();
  /* 11a92f29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92f2c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11a92f32 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11a92f3a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11a92f40 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92f41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a92f44 push edx */
  push32((uint32_t)(EDX));
  /* 11a92f45 call 0x11a930e0 */
  push32(0x11a92f4au); f_11a930e0();
  /* 11a92f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a92f4f je 0x11a92f5a */
  if (C.zf) goto L_11a92f5a;
  /* 11a92f51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a92f54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92f57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a92f5a:;
  /* 11a92f5a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a92f60 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92f66 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11a92f6c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a92f72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a92f75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a92f77 je 0x11a92f88 */
  if (C.zf) goto L_11a92f88;
  /* 11a92f79 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a92f7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92f82 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11a92f88:;
  /* 11a92f88 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a92f8e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a92f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a92f93 jne 0x11a92dd1 */
  if (!C.zf) goto L_11a92dd1;
  /* 11a92f99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92f9d je 0x11a92fac */
  if (C.zf) goto L_11a92fac;
  /* 11a92f9f call 0x11a93280 */
  push32(0x11a92fa4u); f_11a93280();
  /* 11a92fa4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11a92faa jmp 0x11a92fb6 */
  goto L_11a92fb6;
L_11a92fac:;
  /* 11a92fac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11a92fb6:;
  /* 11a92fb6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11a92fbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a92fbf jmp 0x11a930b1 */
  goto L_11a930b1;
L_11a92fc4:;
  /* 11a92fc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a92fc7 push edx */
  push32((uint32_t)(EDX));
  /* 11a92fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a92fca push 0 */
  push32((uint32_t)(0x0u));
  /* 11a92fcc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11a92fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11a92fd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a92fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a92fd7 call 0x11a93380 */
  push32(0x11a92fdcu); f_11a93380();
  /* 11a92fdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92fdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a92fe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a92fe6 je 0x11a930b1 */
  if (C.zf) goto L_11a930b1;
  /* 11a92fec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a92ff3 jmp 0x11a92ffe */
  goto L_11a92ffe;
L_11a92ff5:;
  /* 11a92ff5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a92ff8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a92ffb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a92ffe:;
  /* 11a92ffe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93002 jg 0x11a93060 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a93060;
  /* 11a93004 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93008 je 0x11a9305e */
  if (C.zf) goto L_11a9305e;
  /* 11a9300a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9300d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a93010 mov ecx, dword ptr [eax + 0x11ab85dc] */
  ECX = (r32((uint32_t)(EAX + 0x11ab85dc)));
  /* 11a93016 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93017 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11a9301d push edx */
  push32((uint32_t)(EDX));
  /* 11a9301e call 0x11a97450 */
  push32(0x11a93023u); f_11a97450();
  /* 11a93023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93028 je 0x11a93055 */
  if (C.zf) goto L_11a93055;
  /* 11a9302a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11a93030 push eax */
  push32((uint32_t)(EAX));
  /* 11a93031 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a93034 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93035 call 0x11a930e0 */
  push32(0x11a9303au); f_11a930e0();
  /* 11a9303a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9303d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9303f je 0x11a9304c */
  if (C.zf) goto L_11a9304c;
  /* 11a93041 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a93044 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93047 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a9304a jmp 0x11a93053 */
  goto L_11a93053;
L_11a9304c:;
  /* 11a9304c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11a93053:;
  /* 11a93053 jmp 0x11a9305e */
  goto L_11a9305e;
L_11a93055:;
  /* 11a93055 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a93058 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9305b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a9305e:;
  /* 11a9305e jmp 0x11a92ff5 */
  goto L_11a92ff5;
L_11a93060:;
  /* 11a93060 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93064 je 0x11a9308b */
  if (C.zf) goto L_11a9308b;
  /* 11a93066 call 0x11a93280 */
  push32(0x11a9306bu); f_11a93280();
  /* 11a9306b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9306e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a93070 mov ecx, dword ptr [0x11ab85dc] */
  ECX = (r32((uint32_t)(0x11ab85dc)));
  /* 11a93076 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93077 call 0x11a8a270 */
  push32(0x11a9307cu); f_11a8a270();
  /* 11a9307c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9307f mov dword ptr [0x11ab85dc], 0 */
  w32((uint32_t)(0x11ab85dc), (0x0u));
  /* 11a93089 jmp 0x11a930b1 */
  goto L_11a930b1;
L_11a9308b:;
  /* 11a9308b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9308f je 0x11a9309e */
  if (C.zf) goto L_11a9309e;
  /* 11a93091 call 0x11a93280 */
  push32(0x11a93096u); f_11a93280();
  /* 11a93096 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11a9309c jmp 0x11a930a8 */
  goto L_11a930a8;
L_11a9309e:;
  /* 11a9309e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11a930a8:;
  /* 11a930a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11a930ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a930b1:;
  /* 11a930b1 jmp 0x11a930bb */
  goto L_11a930bb;
L_11a930b3:;
  /* 11a930b3 call 0x11a93280 */
  push32(0x11a930b8u); f_11a93280();
  /* 11a930b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a930bb:;
  /* 11a930bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a930bf je 0x11a930d8 */
  if (C.zf) goto L_11a930d8;
  /* 11a930c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a930c3 call 0x11a8f370 */
  push32(0x11a930c8u); f_11a8f370();
  /* 11a930c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a930cb mov eax, dword ptr [0x11aba43c] */
  EAX = (r32((uint32_t)(0x11aba43c)));
  /* 11a930d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a930d3 mov dword ptr [0x11aba43c], eax */
  w32((uint32_t)(0x11aba43c), (EAX));
L_11a930d8:;
  /* 11a930d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a930db:;
  /* 11a930db mov esp, ebp */
  ESP = (EBP);
  /* 11a930dd pop ebp */
  EBP = (pop32());
  /* 11a930de ret  */
  ESPCHK(0x11a92cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x11a930e0 (403 bytes, 117 insns) */
void f_11a930e0(void) {
  FTRACE(0x11a930e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a930e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a930e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a930e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a930e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a930ec push eax */
  push32((uint32_t)(EAX));
  /* 11a930ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11a930f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a930f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11a930fa push edx */
  push32((uint32_t)(EDX));
  /* 11a930fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11a93101 push eax */
  push32((uint32_t)(EAX));
  /* 11a93102 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93105 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93106 call 0x11a93380 */
  push32(0x11a9310bu); f_11a93380();
  /* 11a9310b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9310e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93110 jne 0x11a93119 */
  if (!C.zf) goto L_11a93119;
  /* 11a93112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a93114 jmp 0x11a9326f */
  goto L_11a9326f;
L_11a93119:;
  /* 11a93119 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11a9311e push 0x11ab52e0 */
  push32((uint32_t)(0x11ab52e0u));
  /* 11a93123 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a93125 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11a9312b push edx */
  push32((uint32_t)(EDX));
  /* 11a9312c call 0x11a8c610 */
  push32(0x11a93131u); f_11a8c610();
  /* 11a93131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93137 push eax */
  push32((uint32_t)(EAX));
  /* 11a93138 call 0x11a897e0 */
  push32(0x11a9313du); f_11a897e0();
  /* 11a9313d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93140 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a93143 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93147 jne 0x11a93150 */
  if (!C.zf) goto L_11a93150;
  /* 11a93149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9314b jmp 0x11a9326f */
  goto L_11a9326f;
L_11a93150:;
  /* 11a93150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93153 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a93156 mov ecx, dword ptr [eax + 0x11ab85dc] */
  ECX = (r32((uint32_t)(EAX + 0x11ab85dc)));
  /* 11a9315c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9315f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93162 mov eax, dword ptr [edx*4 + 0x11aba2c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11aba2c0)));
  /* 11a93169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9316c push 6 */
  push32((uint32_t)(0x6u));
  /* 11a9316e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93171 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a93174 add ecx, 0x11aba304 */
  { uint32_t _a=(ECX),_b=(0x11aba304u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9317a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9317b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11a9317e push edx */
  push32((uint32_t)(EDX));
  /* 11a9317f call 0x11a91f90 */
  push32(0x11a93184u); f_11a91f90();
  /* 11a93184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93187 mov eax, dword ptr [0x11aba2d8] */
  EAX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9318c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a9318f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11a93195 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93196 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93199 push edx */
  push32((uint32_t)(EDX));
  /* 11a9319a call 0x11a8c790 */
  push32(0x11a9319fu); f_11a8c790();
  /* 11a9319f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a931a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a931a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a931a8 mov dword ptr [ecx + 0x11ab85dc], eax */
  w32((uint32_t)(ECX + 0x11ab85dc), (EAX));
  /* 11a931ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11a931b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a931ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a931bd mov dword ptr [eax*4 + 0x11aba2c0], edx */
  w32((uint32_t)(EAX*4 + 0x11aba2c0), (EDX));
  /* 11a931c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a931c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11a931cc push ecx */
  push32((uint32_t)(ECX));
  /* 11a931cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a931d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a931d3 add edx, 0x11aba304 */
  { uint32_t _a=(EDX),_b=(0x11aba304u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a931d9 push edx */
  push32((uint32_t)(EDX));
  /* 11a931da call 0x11a91f90 */
  push32(0x11a931dfu); f_11a91f90();
  /* 11a931df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a931e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a931e6 jne 0x11a931f3 */
  if (!C.zf) goto L_11a931f3;
  /* 11a931e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a931ee mov dword ptr [0x11aba2d8], eax */
  w32((uint32_t)(0x11aba2d8), (EAX));
L_11a931f3:;
  /* 11a931f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a931f7 jne 0x11a93205 */
  if (!C.zf) goto L_11a93205;
  /* 11a931f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a931ff mov dword ptr [0x11aba2dc], ecx */
  w32((uint32_t)(0x11aba2dc), (ECX));
L_11a93205:;
  /* 11a93205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93208 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9320b call dword ptr [edx + 0x11ab85e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11ab85e0))), 0x11a93211u);
  /* 11a93211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93213 je 0x11a9324c */
  if (C.zf) goto L_11a9324c;
  /* 11a93215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93218 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9321b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9321e mov dword ptr [eax + 0x11ab85dc], ecx */
  w32((uint32_t)(EAX + 0x11ab85dc), (ECX));
  /* 11a93224 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a93226 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93229 push edx */
  push32((uint32_t)(EDX));
  /* 11a9322a call 0x11a8a270 */
  push32(0x11a9322fu); f_11a8a270();
  /* 11a9322f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93235 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93238 mov dword ptr [eax*4 + 0x11aba2c0], ecx */
  w32((uint32_t)(EAX*4 + 0x11aba2c0), (ECX));
  /* 11a9323f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a93242 mov dword ptr [0x11aba2d8], edx */
  w32((uint32_t)(0x11aba2d8), (EDX));
  /* 11a93248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9324a jmp 0x11a9326f */
  goto L_11a9326f;
L_11a9324c:;
  /* 11a9324c cmp dword ptr [ebp - 0xc], 0x11ab84c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11ab84c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93253 je 0x11a93263 */
  if (C.zf) goto L_11a93263;
  /* 11a93255 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a93257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9325a push eax */
  push32((uint32_t)(EAX));
  /* 11a9325b call 0x11a8a270 */
  push32(0x11a93260u); f_11a8a270();
  /* 11a93260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a93263:;
  /* 11a93263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93266 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a93269 mov eax, dword ptr [ecx + 0x11ab85dc] */
  EAX = (r32((uint32_t)(ECX + 0x11ab85dc)));
L_11a9326f:;
  /* 11a9326f mov esp, ebp */
  ESP = (EBP);
  /* 11a93271 pop ebp */
  EBP = (pop32());
  /* 11a93272 ret  */
  ESPCHK(0x11a930e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x11a93280 (256 bytes, 72 insns) */
void f_11a93280(void) {
  FTRACE(0x11a93280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93280 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93281 mov ebp, esp */
  EBP = (ESP);
  /* 11a93283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93286 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a9328d cmp dword ptr [0x11ab85dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab85dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93294 jne 0x11a932b4 */
  if (!C.zf) goto L_11a932b4;
  /* 11a93296 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11a9329b push 0x11ab52e0 */
  push32((uint32_t)(0x11ab52e0u));
  /* 11a932a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a932a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11a932a7 call 0x11a897e0 */
  push32(0x11a932acu); f_11a897e0();
  /* 11a932ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a932af mov dword ptr [0x11ab85dc], eax */
  w32((uint32_t)(0x11ab85dc), (EAX));
L_11a932b4:;
  /* 11a932b4 mov eax, dword ptr [0x11ab85dc] */
  EAX = (r32((uint32_t)(0x11ab85dc)));
  /* 11a932b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a932bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a932c3 jmp 0x11a932ce */
  goto L_11a932ce;
L_11a932c5:;
  /* 11a932c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a932c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a932cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a932ce:;
  /* 11a932ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a932d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a932d4 mov eax, dword ptr [edx + 0x11ab85dc] */
  EAX = (r32((uint32_t)(EDX + 0x11ab85dc)));
  /* 11a932da push eax */
  push32((uint32_t)(EAX));
  /* 11a932db push 0x11ab52ec */
  push32((uint32_t)(0x11ab52ecu));
  /* 11a932e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a932e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a932e6 mov edx, dword ptr [ecx + 0x11ab85d8] */
  EDX = (r32((uint32_t)(ECX + 0x11ab85d8)));
  /* 11a932ec push edx */
  push32((uint32_t)(EDX));
  /* 11a932ed push 3 */
  push32((uint32_t)(0x3u));
  /* 11a932ef mov eax, dword ptr [0x11ab85dc] */
  EAX = (r32((uint32_t)(0x11ab85dc)));
  /* 11a932f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a932f5 call 0x11a93520 */
  push32(0x11a932fau); f_11a93520();
  /* 11a932fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a932fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93301 jge 0x11a93349 */
  if ((C.sf==C.of)) goto L_11a93349;
  /* 11a93303 push 0x11ab52d8 */
  push32((uint32_t)(0x11ab52d8u));
  /* 11a93308 mov ecx, dword ptr [0x11ab85dc] */
  ECX = (r32((uint32_t)(0x11ab85dc)));
  /* 11a9330e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9330f call 0x11a8c7a0 */
  push32(0x11a93314u); f_11a8c7a0();
  /* 11a93314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9331a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9331d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a93320 mov eax, dword ptr [edx + 0x11ab85dc] */
  EAX = (r32((uint32_t)(EDX + 0x11ab85dc)));
  /* 11a93326 push eax */
  push32((uint32_t)(EAX));
  /* 11a93327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9332a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9332d mov edx, dword ptr [ecx + 0x11ab85dc] */
  EDX = (r32((uint32_t)(ECX + 0x11ab85dc)));
  /* 11a93333 push edx */
  push32((uint32_t)(EDX));
  /* 11a93334 call 0x11a97450 */
  push32(0x11a93339u); f_11a97450();
  /* 11a93339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9333c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9333e je 0x11a93347 */
  if (C.zf) goto L_11a93347;
  /* 11a93340 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a93347:;
  /* 11a93347 jmp 0x11a93377 */
  goto L_11a93377;
L_11a93349:;
  /* 11a93349 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9334d jne 0x11a93356 */
  if (!C.zf) goto L_11a93356;
  /* 11a9334f mov eax, dword ptr [0x11ab85dc] */
  EAX = (r32((uint32_t)(0x11ab85dc)));
  /* 11a93354 jmp 0x11a9337c */
  goto L_11a9337c;
L_11a93356:;
  /* 11a93356 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a93358 mov eax, dword ptr [0x11ab85dc] */
  EAX = (r32((uint32_t)(0x11ab85dc)));
  /* 11a9335d push eax */
  push32((uint32_t)(EAX));
  /* 11a9335e call 0x11a8a270 */
  push32(0x11a93363u); f_11a8a270();
  /* 11a93363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93366 mov dword ptr [0x11ab85dc], 0 */
  w32((uint32_t)(0x11ab85dc), (0x0u));
  /* 11a93370 mov eax, dword ptr [0x11ab85f4] */
  EAX = (r32((uint32_t)(0x11ab85f4)));
  /* 11a93375 jmp 0x11a9337c */
  goto L_11a9337c;
L_11a93377:;
  /* 11a93377 jmp 0x11a932c5 */
  goto L_11a932c5;
L_11a9337c:;
  /* 11a9337c mov esp, ebp */
  ESP = (EBP);
  /* 11a9337e pop ebp */
  EBP = (pop32());
  /* 11a9337f ret  */
  ESPCHK(0x11a93280u, _esp0);
  ESP += 4; return;
}

/* FUN_10013380 @ 0x11a93380 (388 bytes, 115 insns) */
void f_11a93380(void) {
  FTRACE(0x11a93380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93380 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93381 mov ebp, esp */
  EBP = (ESP);
  /* 11a93383 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93389 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9338d jne 0x11a93396 */
  if (!C.zf) goto L_11a93396;
  /* 11a9338f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a93391 jmp 0x11a93500 */
  goto L_11a93500;
L_11a93396:;
  /* 11a93396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93399 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9339c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9339f jne 0x11a933f0 */
  if (!C.zf) goto L_11a933f0;
  /* 11a933a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a933a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11a933a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a933aa jne 0x11a933f0 */
  if (!C.zf) goto L_11a933f0;
  /* 11a933ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a933af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11a933b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a933b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11a933b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a933bd je 0x11a933d9 */
  if (C.zf) goto L_11a933d9;
  /* 11a933bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a933c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11a933c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a933ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11a933d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a933d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11a933d9:;
  /* 11a933d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a933dd je 0x11a933e8 */
  if (C.zf) goto L_11a933e8;
  /* 11a933df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a933e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11a933e8:;
  /* 11a933e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a933eb jmp 0x11a93500 */
  goto L_11a93500;
L_11a933f0:;
  /* 11a933f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a933f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a933f4 push 0x11ab8550 */
  push32((uint32_t)(0x11ab8550u));
  /* 11a933f9 call 0x11a97450 */
  push32(0x11a933feu); f_11a97450();
  /* 11a933fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93403 je 0x11a934b8 */
  if (C.zf) goto L_11a934b8;
  /* 11a93409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9340c push edx */
  push32((uint32_t)(EDX));
  /* 11a9340d push 0x11ab84cc */
  push32((uint32_t)(0x11ab84ccu));
  /* 11a93412 call 0x11a97450 */
  push32(0x11a93417u); f_11a97450();
  /* 11a93417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9341a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9341c je 0x11a934b8 */
  if (C.zf) goto L_11a934b8;
  /* 11a93422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93425 push eax */
  push32((uint32_t)(EAX));
  /* 11a93426 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11a9342c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9342d call 0x11a93570 */
  push32(0x11a93432u); f_11a93570();
  /* 11a93432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93437 je 0x11a93440 */
  if (C.zf) goto L_11a93440;
  /* 11a93439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9343b jmp 0x11a93500 */
  goto L_11a93500;
L_11a93440:;
  /* 11a93440 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11a93446 push edx */
  push32((uint32_t)(EDX));
  /* 11a93447 push 0x11aba2b4 */
  push32((uint32_t)(0x11aba2b4u));
  /* 11a9344c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11a93452 push eax */
  push32((uint32_t)(EAX));
  /* 11a93453 call 0x11a975a0 */
  push32(0x11a93458u); f_11a975a0();
  /* 11a93458 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9345b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9345d jne 0x11a93466 */
  if (!C.zf) goto L_11a93466;
  /* 11a9345f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a93461 jmp 0x11a93500 */
  goto L_11a93500;
L_11a93466:;
  /* 11a93466 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a93468 mov cx, word ptr [0x11aba2b8] */
  CX = (r16((uint32_t)(0x11aba2b8)));
  /* 11a9346f mov dword ptr [0x11aba2bc], ecx */
  w32((uint32_t)(0x11aba2bc), (ECX));
  /* 11a93475 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11a9347b push edx */
  push32((uint32_t)(EDX));
  /* 11a9347c push 0x11ab8550 */
  push32((uint32_t)(0x11ab8550u));
  /* 11a93481 call 0x11a936d0 */
  push32(0x11a93486u); f_11a936d0();
  /* 11a93486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9348c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9348f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93491 je 0x11a934a6 */
  if (C.zf) goto L_11a934a6;
  /* 11a93493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93496 push edx */
  push32((uint32_t)(EDX));
  /* 11a93497 push 0x11ab84cc */
  push32((uint32_t)(0x11ab84ccu));
  /* 11a9349c call 0x11a8c790 */
  push32(0x11a934a1u); f_11a8c790();
  /* 11a934a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a934a4 jmp 0x11a934b8 */
  goto L_11a934b8;
L_11a934a6:;
  /* 11a934a6 push 0x11ab8550 */
  push32((uint32_t)(0x11ab8550u));
  /* 11a934ab push 0x11ab84cc */
  push32((uint32_t)(0x11ab84ccu));
  /* 11a934b0 call 0x11a8c790 */
  push32(0x11a934b5u); f_11a8c790();
  /* 11a934b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a934b8:;
  /* 11a934b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a934bc je 0x11a934d1 */
  if (C.zf) goto L_11a934d1;
  /* 11a934be push 6 */
  push32((uint32_t)(0x6u));
  /* 11a934c0 push 0x11aba2b4 */
  push32((uint32_t)(0x11aba2b4u));
  /* 11a934c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a934c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a934c9 call 0x11a91f90 */
  push32(0x11a934ceu); f_11a91f90();
  /* 11a934ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a934d1:;
  /* 11a934d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a934d5 je 0x11a934ea */
  if (C.zf) goto L_11a934ea;
  /* 11a934d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a934d9 push 0x11aba2bc */
  push32((uint32_t)(0x11aba2bcu));
  /* 11a934de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a934e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a934e2 call 0x11a91f90 */
  push32(0x11a934e7u); f_11a91f90();
  /* 11a934e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a934ea:;
  /* 11a934ea push 0x11ab8550 */
  push32((uint32_t)(0x11ab8550u));
  /* 11a934ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a934f2 push edx */
  push32((uint32_t)(EDX));
  /* 11a934f3 call 0x11a8c790 */
  push32(0x11a934f8u); f_11a8c790();
  /* 11a934f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a934fb mov eax, 0x11ab8550 */
  EAX = (0x11ab8550u);
L_11a93500:;
  /* 11a93500 mov esp, ebp */
  ESP = (EBP);
  /* 11a93502 pop ebp */
  EBP = (pop32());
  /* 11a93503 ret  */
  ESPCHK(0x11a93380u, _esp0);
  ESP += 4; return;
}

/* FUN_10013510 @ 0x11a93510 (7 bytes, 5 insns) */
void f_11a93510(void) {
  FTRACE(0x11a93510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93510 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93511 mov ebp, esp */
  EBP = (ESP);
  /* 11a93513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a93515 pop ebp */
  EBP = (pop32());
  /* 11a93516 ret  */
  ESPCHK(0x11a93510u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11a93520 (79 bytes, 28 insns) */
void f_11a93520(void) {
  FTRACE(0x11a93520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93520 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93521 mov ebp, esp */
  EBP = (ESP);
  /* 11a93523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93526 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11a93529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9352c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a93533 jmp 0x11a9353e */
  goto L_11a9353e;
L_11a93535:;
  /* 11a93535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9353b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a9353e:;
  /* 11a9353e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93541 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93544 jge 0x11a93564 */
  if ((C.sf==C.of)) goto L_11a93564;
  /* 11a93546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93549 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9354c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9354f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93552 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a93555 push edx */
  push32((uint32_t)(EDX));
  /* 11a93556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93559 push eax */
  push32((uint32_t)(EAX));
  /* 11a9355a call 0x11a8c7a0 */
  push32(0x11a9355fu); f_11a8c7a0();
  /* 11a9355f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93562 jmp 0x11a93535 */
  goto L_11a93535;
L_11a93564:;
  /* 11a93564 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9356b mov esp, ebp */
  ESP = (EBP);
  /* 11a9356d pop ebp */
  EBP = (pop32());
  /* 11a9356e ret  */
  ESPCHK(0x11a93520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x11a93570 (349 bytes, 122 insns) */
void f_11a93570(void) {
  FTRACE(0x11a93570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93570 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93571 mov ebp, esp */
  EBP = (ESP);
  /* 11a93573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93576 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11a9357b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9357d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93580 push eax */
  push32((uint32_t)(EAX));
  /* 11a93581 call 0x11a8ee40 */
  push32(0x11a93586u); f_11a8ee40();
  /* 11a93586 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93589 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9358c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9358f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93591 jne 0x11a9359a */
  if (!C.zf) goto L_11a9359a;
  /* 11a93593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a93595 jmp 0x11a936c9 */
  goto L_11a936c9;
L_11a9359a:;
  /* 11a9359a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9359d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a935a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a935a3 jne 0x11a935d0 */
  if (!C.zf) goto L_11a935d0;
  /* 11a935a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a935a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11a935ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a935ae je 0x11a935d0 */
  if (C.zf) goto L_11a935d0;
  /* 11a935b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a935b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a935b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a935b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a935ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a935c0 push edx */
  push32((uint32_t)(EDX));
  /* 11a935c1 call 0x11a8c790 */
  push32(0x11a935c6u); f_11a8c790();
  /* 11a935c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a935c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a935cb jmp 0x11a936c9 */
  goto L_11a936c9;
L_11a935d0:;
  /* 11a935d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a935d7 jmp 0x11a935e2 */
  goto L_11a935e2;
L_11a935d9:;
  /* 11a935d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a935dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a935df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a935e2:;
  /* 11a935e2 push 0x11ab52f0 */
  push32((uint32_t)(0x11ab52f0u));
  /* 11a935e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a935ea push ecx */
  push32((uint32_t)(ECX));
  /* 11a935eb call 0x11a974e0 */
  push32(0x11a935f0u); f_11a974e0();
  /* 11a935f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a935f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a935f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a935fa jne 0x11a93604 */
  if (!C.zf) goto L_11a93604;
  /* 11a935fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a935ff jmp 0x11a936c9 */
  goto L_11a936c9;
L_11a93604:;
  /* 11a93604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93607 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9360a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9360c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11a9360f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93613 jne 0x11a9363a */
  if (!C.zf) goto L_11a9363a;
  /* 11a93615 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93619 jge 0x11a9363a */
  if ((C.sf==C.of)) goto L_11a9363a;
  /* 11a9361b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a9361f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93622 je 0x11a9363a */
  if (C.zf) goto L_11a9363a;
  /* 11a93624 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a93627 push edx */
  push32((uint32_t)(EDX));
  /* 11a93628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9362b push eax */
  push32((uint32_t)(EAX));
  /* 11a9362c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9362f push ecx */
  push32((uint32_t)(ECX));
  /* 11a93630 call 0x11a8d000 */
  push32(0x11a93635u); f_11a8d000();
  /* 11a93635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93638 jmp 0x11a936a0 */
  goto L_11a936a0;
L_11a9363a:;
  /* 11a9363a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9363e jne 0x11a93668 */
  if (!C.zf) goto L_11a93668;
  /* 11a93640 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93644 jge 0x11a93668 */
  if ((C.sf==C.of)) goto L_11a93668;
  /* 11a93646 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a9364a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9364d je 0x11a93668 */
  if (C.zf) goto L_11a93668;
  /* 11a9364f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a93652 push eax */
  push32((uint32_t)(EAX));
  /* 11a93653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93656 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9365a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9365d push edx */
  push32((uint32_t)(EDX));
  /* 11a9365e call 0x11a8d000 */
  push32(0x11a93663u); f_11a8d000();
  /* 11a93663 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93666 jmp 0x11a936a0 */
  goto L_11a936a0;
L_11a93668:;
  /* 11a93668 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9366c jne 0x11a9369b */
  if (!C.zf) goto L_11a9369b;
  /* 11a9366e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a93672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93674 je 0x11a9367f */
  if (C.zf) goto L_11a9367f;
  /* 11a93676 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a9367a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9367d jne 0x11a9369b */
  if (!C.zf) goto L_11a9369b;
L_11a9367f:;
  /* 11a9367f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a93682 push edx */
  push32((uint32_t)(EDX));
  /* 11a93683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93686 push eax */
  push32((uint32_t)(EAX));
  /* 11a93687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9368a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93690 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93691 call 0x11a8d000 */
  push32(0x11a93696u); f_11a8d000();
  /* 11a93696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93699 jmp 0x11a936a0 */
  goto L_11a936a0;
L_11a9369b:;
  /* 11a9369b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9369e jmp 0x11a936c9 */
  goto L_11a936c9;
L_11a936a0:;
  /* 11a936a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a936a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a936a7 jne 0x11a936ab */
  if (!C.zf) goto L_11a936ab;
  /* 11a936a9 jmp 0x11a936c7 */
  goto L_11a936c7;
L_11a936ab:;
  /* 11a936ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a936af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a936b1 jne 0x11a936b5 */
  if (!C.zf) goto L_11a936b5;
  /* 11a936b3 jmp 0x11a936c7 */
  goto L_11a936c7;
L_11a936b5:;
  /* 11a936b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a936b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a936bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11a936bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a936c2 jmp 0x11a935d9 */
  goto L_11a935d9;
L_11a936c7:;
  /* 11a936c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a936c9:;
  /* 11a936c9 mov esp, ebp */
  ESP = (EBP);
  /* 11a936cb pop ebp */
  EBP = (pop32());
  /* 11a936cc ret  */
  ESPCHK(0x11a93570u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11a936d0 (101 bytes, 36 insns) */
void f_11a936d0(void) {
  FTRACE(0x11a936d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a936d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a936d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a936d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a936d6 push eax */
  push32((uint32_t)(EAX));
  /* 11a936d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a936da push ecx */
  push32((uint32_t)(ECX));
  /* 11a936db call 0x11a8c790 */
  push32(0x11a936e0u); f_11a8c790();
  /* 11a936e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a936e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a936e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11a936ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a936ec je 0x11a93708 */
  if (C.zf) goto L_11a93708;
  /* 11a936ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a936f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a936f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a936f5 push 0x11ab52f8 */
  push32((uint32_t)(0x11ab52f8u));
  /* 11a936fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11a936fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a936ff push edx */
  push32((uint32_t)(EDX));
  /* 11a93700 call 0x11a93520 */
  push32(0x11a93705u); f_11a93520();
  /* 11a93705 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a93708:;
  /* 11a93708 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9370b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11a93712 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93714 je 0x11a93733 */
  if (C.zf) goto L_11a93733;
  /* 11a93716 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93719 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9371f push edx */
  push32((uint32_t)(EDX));
  /* 11a93720 push 0x11ab52f4 */
  push32((uint32_t)(0x11ab52f4u));
  /* 11a93725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a93727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9372a push eax */
  push32((uint32_t)(EAX));
  /* 11a9372b call 0x11a93520 */
  push32(0x11a93730u); f_11a93520();
  /* 11a93730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a93733:;
  /* 11a93733 pop ebp */
  EBP = (pop32());
  /* 11a93734 ret  */
  ESPCHK(0x11a936d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013740 @ 0x11a93740 (85 bytes, 32 insns) */
void f_11a93740(void) {
  FTRACE(0x11a93740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93740 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93741 mov ebp, esp */
  EBP = (ESP);
  /* 11a93743 cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9374a jne 0x11a93774 */
  if (!C.zf) goto L_11a93774;
  /* 11a9374c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9374f push eax */
  push32((uint32_t)(EAX));
  /* 11a93750 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93753 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93754 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93757 push edx */
  push32((uint32_t)(EDX));
  /* 11a93758 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9375a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9375c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9375f push eax */
  push32((uint32_t)(EAX));
  /* 11a93760 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93763 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93767 push edx */
  push32((uint32_t)(EDX));
  /* 11a93768 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9376a call 0x11a941f0 */
  push32(0x11a9376fu); f_11a941f0();
  /* 11a9376f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93772 jmp 0x11a93793 */
  goto L_11a93793;
L_11a93774:;
  /* 11a93774 call 0x11a92370 */
  push32(0x11a93779u); f_11a92370();
  /* 11a93779 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11a9377f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a93784 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a93787 push eax */
  push32((uint32_t)(EAX));
  /* 11a93788 call 0x11a943e0 */
  push32(0x11a9378du); f_11a943e0();
  /* 11a9378d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93790 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11a93793:;
  /* 11a93793 pop ebp */
  EBP = (pop32());
  /* 11a93794 ret  */
  ESPCHK(0x11a93740u, _esp0);
  ESP += 4; return;
}

/* FUN_100137a0 @ 0x11a937a0 (103 bytes, 39 insns) */
void f_11a937a0(void) {
  FTRACE(0x11a937a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a937a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a937a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a937a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a937a6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11a937a9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11a937ac fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11a937af cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a937b6 jne 0x11a937e4 */
  if (!C.zf) goto L_11a937e4;
  /* 11a937b8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a937bb push eax */
  push32((uint32_t)(EAX));
  /* 11a937bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a937bf push ecx */
  push32((uint32_t)(ECX));
  /* 11a937c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a937c3 push edx */
  push32((uint32_t)(EDX));
  /* 11a937c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a937c7 push eax */
  push32((uint32_t)(EAX));
  /* 11a937c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a937cb push ecx */
  push32((uint32_t)(ECX));
  /* 11a937cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a937cf push edx */
  push32((uint32_t)(EDX));
  /* 11a937d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a937d3 push eax */
  push32((uint32_t)(EAX));
  /* 11a937d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a937d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a937d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a937da call 0x11a941f0 */
  push32(0x11a937dfu); f_11a941f0();
  /* 11a937df add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a937e2 jmp 0x11a93803 */
  goto L_11a93803;
L_11a937e4:;
  /* 11a937e4 call 0x11a92370 */
  push32(0x11a937e9u); f_11a92370();
  /* 11a937e9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11a937ef push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a937f4 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a937f7 push edx */
  push32((uint32_t)(EDX));
  /* 11a937f8 call 0x11a943e0 */
  push32(0x11a937fdu); f_11a943e0();
  /* 11a937fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93800 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11a93803:;
  /* 11a93803 mov esp, ebp */
  ESP = (EBP);
  /* 11a93805 pop ebp */
  EBP = (pop32());
  /* 11a93806 ret  */
  ESPCHK(0x11a937a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013810 @ 0x11a93810 (178 bytes, 71 insns) */
void f_11a93810(void) {
  FTRACE(0x11a93810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93810 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93811 mov ebp, esp */
  EBP = (ESP);
  /* 11a93813 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93816 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a93819 push eax */
  push32((uint32_t)(EAX));
  /* 11a9381a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11a9381d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9381e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93821 push edx */
  push32((uint32_t)(EDX));
  /* 11a93822 call 0x11a93e70 */
  push32(0x11a93827u); f_11a93e70();
  /* 11a93827 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9382a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9382c jne 0x11a93856 */
  if (!C.zf) goto L_11a93856;
  /* 11a9382e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a93831 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11a93833 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a93836 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11a93839 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9383a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a9383d push edx */
  push32((uint32_t)(EDX));
  /* 11a9383e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93841 push eax */
  push32((uint32_t)(EAX));
  /* 11a93842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93845 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93846 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11a93849 push edx */
  push32((uint32_t)(EDX));
  /* 11a9384a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11a9384d push eax */
  push32((uint32_t)(EAX));
  /* 11a9384e call 0x11a939a0 */
  push32(0x11a93853u); f_11a939a0();
  /* 11a93853 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a93856:;
  /* 11a93856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93859 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9385a call 0x11a94310 */
  push32(0x11a9385fu); f_11a94310();
  /* 11a9385f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a93865 cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9386c jne 0x11a9389e */
  if (!C.zf) goto L_11a9389e;
  /* 11a9386e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93872 je 0x11a9389e */
  if (C.zf) goto L_11a9389e;
  /* 11a93874 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a93877 push edx */
  push32((uint32_t)(EDX));
  /* 11a93878 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9387b push eax */
  push32((uint32_t)(EAX));
  /* 11a9387c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9387f push ecx */
  push32((uint32_t)(ECX));
  /* 11a93880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a93882 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a93884 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a93887 push edx */
  push32((uint32_t)(EDX));
  /* 11a93888 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9388b push eax */
  push32((uint32_t)(EAX));
  /* 11a9388c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9388f push ecx */
  push32((uint32_t)(ECX));
  /* 11a93890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93893 push edx */
  push32((uint32_t)(EDX));
  /* 11a93894 call 0x11a941f0 */
  push32(0x11a93899u); f_11a941f0();
  /* 11a93899 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9389c jmp 0x11a938be */
  goto L_11a938be;
L_11a9389e:;
  /* 11a9389e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a938a1 push eax */
  push32((uint32_t)(EAX));
  /* 11a938a2 call 0x11a94290 */
  push32(0x11a938a7u); f_11a94290();
  /* 11a938a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a938aa push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a938af mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a938b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a938b3 call 0x11a943e0 */
  push32(0x11a938b8u); f_11a943e0();
  /* 11a938b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a938bb fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11a938be:;
  /* 11a938be mov esp, ebp */
  ESP = (EBP);
  /* 11a938c0 pop ebp */
  EBP = (pop32());
  /* 11a938c1 ret  */
  ESPCHK(0x11a93810u, _esp0);
  ESP += 4; return;
}

/* FUN_100138d0 @ 0x11a938d0 (206 bytes, 81 insns) */
void f_11a938d0(void) {
  FTRACE(0x11a938d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a938d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a938d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a938d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a938d6 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a938d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a938da lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11a938dd push ecx */
  push32((uint32_t)(ECX));
  /* 11a938de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a938e1 push edx */
  push32((uint32_t)(EDX));
  /* 11a938e2 call 0x11a93e70 */
  push32(0x11a938e7u); f_11a93e70();
  /* 11a938e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a938ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a938ec jne 0x11a9392e */
  if (!C.zf) goto L_11a9392e;
  /* 11a938ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a938f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a938f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a938f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a938f9 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a938fc or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a938ff mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a93902 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a93905 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11a93908 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9390b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11a9390e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11a93911 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93912 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11a93915 push edx */
  push32((uint32_t)(EDX));
  /* 11a93916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93919 push eax */
  push32((uint32_t)(EAX));
  /* 11a9391a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9391d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9391e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11a93921 push edx */
  push32((uint32_t)(EDX));
  /* 11a93922 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11a93925 push eax */
  push32((uint32_t)(EAX));
  /* 11a93926 call 0x11a939a0 */
  push32(0x11a9392bu); f_11a939a0();
  /* 11a9392b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9392e:;
  /* 11a9392e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93931 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93932 call 0x11a94310 */
  push32(0x11a93937u); f_11a94310();
  /* 11a93937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9393a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9393d cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93944 jne 0x11a9397a */
  if (!C.zf) goto L_11a9397a;
  /* 11a93946 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9394a je 0x11a9397a */
  if (C.zf) goto L_11a9397a;
  /* 11a9394c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a9394f push edx */
  push32((uint32_t)(EDX));
  /* 11a93950 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a93953 push eax */
  push32((uint32_t)(EAX));
  /* 11a93954 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a93957 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93958 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9395b push edx */
  push32((uint32_t)(EDX));
  /* 11a9395c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9395f push eax */
  push32((uint32_t)(EAX));
  /* 11a93960 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a93963 push ecx */
  push32((uint32_t)(ECX));
  /* 11a93964 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93967 push edx */
  push32((uint32_t)(EDX));
  /* 11a93968 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9396b push eax */
  push32((uint32_t)(EAX));
  /* 11a9396c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9396f push ecx */
  push32((uint32_t)(ECX));
  /* 11a93970 call 0x11a941f0 */
  push32(0x11a93975u); f_11a941f0();
  /* 11a93975 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93978 jmp 0x11a9399a */
  goto L_11a9399a;
L_11a9397a:;
  /* 11a9397a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9397d push edx */
  push32((uint32_t)(EDX));
  /* 11a9397e call 0x11a94290 */
  push32(0x11a93983u); f_11a94290();
  /* 11a93983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93986 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a9398b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a9398e push eax */
  push32((uint32_t)(EAX));
  /* 11a9398f call 0x11a943e0 */
  push32(0x11a93994u); f_11a943e0();
  /* 11a93994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93997 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11a9399a:;
  /* 11a9399a mov esp, ebp */
  ESP = (EBP);
  /* 11a9399c pop ebp */
  EBP = (pop32());
  /* 11a9399d ret  */
  ESPCHK(0x11a938d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x11a939a0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11a939a0(void) {
  FTRACE(0x11a939a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a939a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a939a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a939a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a939a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a939a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a939b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a939b3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11a939ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a939bd mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11a939c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a939c7 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a939ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a939cc je 0x11a939e4 */
  if (C.zf) goto L_11a939e4;
  /* 11a939ce mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11a939d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a939d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a939db or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a939de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a939e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a939e4:;
  /* 11a939e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a939e7 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a939ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a939ec je 0x11a93a03 */
  if (C.zf) goto L_11a93a03;
  /* 11a939ee mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11a939f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a939f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a939fb or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a939fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a00 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11a93a03:;
  /* 11a93a03 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93a06 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93a09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93a0b je 0x11a93a23 */
  if (C.zf) goto L_11a93a23;
  /* 11a93a0d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11a93a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a93a1a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93a1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a20 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11a93a23:;
  /* 11a93a23 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93a26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93a2b je 0x11a93a43 */
  if (C.zf) goto L_11a93a43;
  /* 11a93a2d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11a93a34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a93a3a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a40 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a93a43:;
  /* 11a93a43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93a46 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93a49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93a4b je 0x11a93a62 */
  if (C.zf) goto L_11a93a62;
  /* 11a93a4d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11a93a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a57 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a93a5a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11a93a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a5f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11a93a62:;
  /* 11a93a62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93a65 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93a67 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93a6a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a93a6c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93a6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a93a6f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93a72 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a93a75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a93a7b and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11a93a7e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a93a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a83 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a93a86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93a89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93a8b and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93a8e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a93a90 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93a92 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a93a93 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93a96 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a93a99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93a9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a93a9f and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93aa2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a93aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93aa7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a93aaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93aad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a93aaf and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93ab2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a93ab4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93ab6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a93ab7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93aba shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a93abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93ac0 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a93ac3 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11a93ac5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a93ac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93aca mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a93acd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93ad0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93ad2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93ad5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a93ad7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93ad9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a93ada and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93add shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a93adf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93ae2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a93ae5 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11a93ae8 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a93aea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93aed mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a93af0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93af3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93af5 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93af8 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a93afa sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93afc inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a93afd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b03 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a93b06 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a93b09 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a93b0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b0e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a93b11 call 0x11a943a0 */
  push32(0x11a93b16u); f_11a943a0();
  /* 11a93b16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a93b19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93b1c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93b21 je 0x11a93b32 */
  if (C.zf) goto L_11a93b32;
  /* 11a93b23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b26 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a93b29 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93b2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b2f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11a93b32:;
  /* 11a93b32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93b35 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93b38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93b3a je 0x11a93b4a */
  if (C.zf) goto L_11a93b4a;
  /* 11a93b3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b3f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a93b42 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11a93b44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b47 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11a93b4a:;
  /* 11a93b4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93b4d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93b50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93b52 je 0x11a93b63 */
  if (C.zf) goto L_11a93b63;
  /* 11a93b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a93b5a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93b5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11a93b63:;
  /* 11a93b63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93b66 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93b6b je 0x11a93b7c */
  if (C.zf) goto L_11a93b7c;
  /* 11a93b6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b70 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a93b73 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b79 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11a93b7c:;
  /* 11a93b7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a93b7f and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93b82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93b84 je 0x11a93b94 */
  if (C.zf) goto L_11a93b94;
  /* 11a93b86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b89 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a93b8c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a93b8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93b91 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11a93b94:;
  /* 11a93b94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93b97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93b99 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93b9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a93ba1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93ba8 ja 0x11a93bc4 */
  if ((!C.cf&&!C.zf)) goto L_11a93bc4;
  /* 11a93baa cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93bb1 je 0x11a93bde */
  if (C.zf) goto L_11a93bde;
  /* 11a93bb3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93bb7 je 0x11a93c02 */
  if (C.zf) goto L_11a93c02;
  /* 11a93bb9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93bc0 je 0x11a93bf0 */
  if (C.zf) goto L_11a93bf0;
  /* 11a93bc2 jmp 0x11a93c0f */
  goto L_11a93c0f;
L_11a93bc4:;
  /* 11a93bc4 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93bcb je 0x11a93bcf */
  if (C.zf) goto L_11a93bcf;
  /* 11a93bcd jmp 0x11a93c0f */
  goto L_11a93c0f;
L_11a93bcf:;
  /* 11a93bcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93bd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93bd4 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93bda mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a93bdc jmp 0x11a93c0f */
  goto L_11a93c0f;
L_11a93bde:;
  /* 11a93bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93be1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93be3 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11a93be6 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93bec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a93bee jmp 0x11a93c0f */
  goto L_11a93c0f;
L_11a93bf0:;
  /* 11a93bf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93bf3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93bf5 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11a93bf8 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93bfe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a93c00 jmp 0x11a93c0f */
  goto L_11a93c0f;
L_11a93c02:;
  /* 11a93c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93c07 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11a93c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a93c0f:;
  /* 11a93c0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93c12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93c14 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93c1a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a93c1d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93c21 je 0x11a93c58 */
  if (C.zf) goto L_11a93c58;
  /* 11a93c23 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93c2a je 0x11a93c46 */
  if (C.zf) goto L_11a93c46;
  /* 11a93c2c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93c33 je 0x11a93c37 */
  if (C.zf) goto L_11a93c37;
  /* 11a93c35 jmp 0x11a93c68 */
  goto L_11a93c68;
L_11a93c37:;
  /* 11a93c37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a93c3c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93c3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c42 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a93c44 jmp 0x11a93c68 */
  goto L_11a93c68;
L_11a93c46:;
  /* 11a93c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a93c4b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93c4e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a93c56 jmp 0x11a93c68 */
  goto L_11a93c68;
L_11a93c58:;
  /* 11a93c58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a93c5d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93c60 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c66 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a93c68:;
  /* 11a93c68 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a93c6b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a93c70 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a93c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93c78 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a93c7e or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a93c80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a93c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c88 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11a93c8b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93c8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c91 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11a93c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93c97 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11a93c9a and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93c9d or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93ca3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11a93ca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93ca9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a93cac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93cae mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11a93cb1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a93cb4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11a93cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93cba mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11a93cbd or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93cc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93cc3 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11a93cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93cc9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11a93ccc and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93ccf or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93cd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93cd5 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11a93cd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93cdb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a93cde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93ce0 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11a93ce3 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a93ce6 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11a93ce9 call 0x11a943c0 */
  push32(0x11a93ceeu); f_11a943c0();
  /* 11a93cee lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11a93cf1 push edx */
  push32((uint32_t)(EDX));
  /* 11a93cf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a93cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a93cf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93cf9 push eax */
  push32((uint32_t)(EAX));
  /* 11a93cfa call dword ptr [0x11abc31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc31c))), 0x11a93d00u);
  /* 11a93d00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93d03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a93d06 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a93d09 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93d0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93d0e je 0x11a93d1d */
  if (C.zf) goto L_11a93d1d;
  /* 11a93d10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a93d15 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a93d18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d1b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a93d1d:;
  /* 11a93d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93d20 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a93d23 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11a93d26 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93d29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93d2b je 0x11a93d39 */
  if (C.zf) goto L_11a93d39;
  /* 11a93d2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93d32 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11a93d34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d37 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a93d39:;
  /* 11a93d39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93d3c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a93d3f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a93d42 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a93d47 je 0x11a93d56 */
  if (C.zf) goto L_11a93d56;
  /* 11a93d49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93d4e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93d51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d54 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a93d56:;
  /* 11a93d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93d59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a93d5c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a93d5e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93d61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93d63 je 0x11a93d72 */
  if (C.zf) goto L_11a93d72;
  /* 11a93d65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a93d6a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11a93d6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a93d72:;
  /* 11a93d72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93d75 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a93d78 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93d7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93d7d je 0x11a93d8b */
  if (C.zf) goto L_11a93d8b;
  /* 11a93d7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93d84 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11a93d86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93d89 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a93d8b:;
  /* 11a93d8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93d8e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93d90 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93d93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a93d96 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93d9a ja 0x11a93de9 */
  if ((!C.cf&&!C.zf)) goto L_11a93de9;
  /* 11a93d9c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a93d9f jmp dword ptr [ecx*4 + 0x11a93e51] */
  switch (ECX) {
    case 0: goto L_11a93ddc;
    case 1: goto L_11a93dca;
    case 2: goto L_11a93db8;
    case 3: goto L_11a93da6;
    default: x86_unimpl("switch@0x11a93d9f out of table"); return;
  }
L_11a93da6:;
  /* 11a93da6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93da9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93dab and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11a93dae or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11a93db1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93db4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a93db6 jmp 0x11a93de9 */
  goto L_11a93de9;
L_11a93db8:;
  /* 11a93db8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93dbb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93dbd and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11a93dc0 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11a93dc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93dc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a93dc8 jmp 0x11a93de9 */
  goto L_11a93de9;
L_11a93dca:;
  /* 11a93dca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93dcd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93dcf and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11a93dd2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11a93dd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93dd8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a93dda jmp 0x11a93de9 */
  goto L_11a93de9;
L_11a93ddc:;
  /* 11a93ddc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93ddf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93de1 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11a93de4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93de7 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a93de9:;
  /* 11a93de9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93dec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a93dee shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a93df1 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93df4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a93df7 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93dfb je 0x11a93e0b */
  if (C.zf) goto L_11a93e0b;
  /* 11a93dfd cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93e01 je 0x11a93e1d */
  if (C.zf) goto L_11a93e1d;
  /* 11a93e03 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93e07 je 0x11a93e2f */
  if (C.zf) goto L_11a93e2f;
  /* 11a93e09 jmp 0x11a93e3c */
  goto L_11a93e3c;
L_11a93e0b:;
  /* 11a93e0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93e0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93e10 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a93e13 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a93e16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93e19 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a93e1b jmp 0x11a93e3c */
  goto L_11a93e3c;
L_11a93e1d:;
  /* 11a93e1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93e20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93e22 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a93e25 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a93e28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93e2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a93e2d jmp 0x11a93e3c */
  goto L_11a93e3c;
L_11a93e2f:;
  /* 11a93e2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93e32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a93e34 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a93e37 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93e3a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a93e3c:;
  /* 11a93e3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93e3f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a93e42 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11a93e45 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a93e47 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11a93e4a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a93e4d mov esp, ebp */
  ESP = (EBP);
  /* 11a93e4f pop ebp */
  EBP = (pop32());
  /* 11a93e50 ret  */
  ESPCHK(0x11a939a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e70 @ 0x11a93e70 (882 bytes, 268 insns) */
void f_11a93e70(void) {
  FTRACE(0x11a93e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a93e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a93e71 mov ebp, esp */
  EBP = (ESP);
  /* 11a93e73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a93e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93e79 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a93e7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a93e7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93e82 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93e85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93e87 je 0x11a93eaa */
  if (C.zf) goto L_11a93eaa;
  /* 11a93e89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93e8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93e8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93e91 je 0x11a93eaa */
  if (C.zf) goto L_11a93eaa;
  /* 11a93e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a93e95 call 0x11a94420 */
  push32(0x11a93e9au); f_11a94420();
  /* 11a93e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93ea0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11a93ea2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a93ea5 jmp 0x11a941ae */
  goto L_11a941ae;
L_11a93eaa:;
  /* 11a93eaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93ead and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93eb0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93eb2 je 0x11a93ed5 */
  if (C.zf) goto L_11a93ed5;
  /* 11a93eb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93eb7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93eba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93ebc je 0x11a93ed5 */
  if (C.zf) goto L_11a93ed5;
  /* 11a93ebe push 4 */
  push32((uint32_t)(0x4u));
  /* 11a93ec0 call 0x11a94420 */
  push32(0x11a93ec5u); f_11a94420();
  /* 11a93ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a93ecb and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11a93ecd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a93ed0 jmp 0x11a941ae */
  goto L_11a941ae;
L_11a93ed5:;
  /* 11a93ed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a93ed8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a93edb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a93edd je 0x11a94051 */
  if (C.zf) goto L_11a94051;
  /* 11a93ee3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93ee6 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a93ee9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a93eeb je 0x11a94051 */
  if (C.zf) goto L_11a94051;
  /* 11a93ef1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a93ef3 call 0x11a94420 */
  push32(0x11a93ef8u); f_11a94420();
  /* 11a93ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a93efb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a93efe and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11a93f03 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a93f06 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93f0d ja 0x11a93f30 */
  if ((!C.cf&&!C.zf)) goto L_11a93f30;
  /* 11a93f0f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93f16 je 0x11a93f85 */
  if (C.zf) goto L_11a93f85;
  /* 11a93f18 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93f1c je 0x11a93f42 */
  if (C.zf) goto L_11a93f42;
  /* 11a93f1e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93f25 je 0x11a93fc5 */
  if (C.zf) goto L_11a93fc5;
  /* 11a93f2b jmp 0x11a94043 */
  goto L_11a94043;
L_11a93f30:;
  /* 11a93f30 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a93f37 je 0x11a94005 */
  if (C.zf) goto L_11a94005;
  /* 11a93f3d jmp 0x11a94043 */
  goto L_11a94043;
L_11a93f42:;
  /* 11a93f42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93f45 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11a93f47 fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a93f4d fnstsw ax */
  AX = fpu_status();
  /* 11a93f4f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11a93f52 jne 0x11a93f67 */
  if (!C.zf) goto L_11a93f67;
  /* 11a93f54 mov edx, dword ptr [0x11ab8e98] */
  EDX = (r32((uint32_t)(0x11ab8e98)));
  /* 11a93f5a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11a93f5d mov eax, dword ptr [0x11ab8e9c] */
  EAX = (r32((uint32_t)(0x11ab8e9c)));
  /* 11a93f62 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a93f65 jmp 0x11a93f72 */
  goto L_11a93f72;
L_11a93f67:;
  /* 11a93f67 fld qword ptr [0x11ab8e98] */
  fpu_push(rf64((uint32_t)(0x11ab8e98)));
  /* 11a93f6d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11a93f6f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11a93f72:;
  /* 11a93f72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93f75 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a93f78 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a93f7a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a93f7d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a93f80 jmp 0x11a94043 */
  goto L_11a94043;
L_11a93f85:;
  /* 11a93f85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93f88 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11a93f8a fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a93f90 fnstsw ax */
  AX = fpu_status();
  /* 11a93f92 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11a93f95 jne 0x11a93faa */
  if (!C.zf) goto L_11a93faa;
  /* 11a93f97 mov edx, dword ptr [0x11ab8e98] */
  EDX = (r32((uint32_t)(0x11ab8e98)));
  /* 11a93f9d mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11a93fa0 mov eax, dword ptr [0x11ab8e9c] */
  EAX = (r32((uint32_t)(0x11ab8e9c)));
  /* 11a93fa5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11a93fa8 jmp 0x11a93fb5 */
  goto L_11a93fb5;
L_11a93faa:;
  /* 11a93faa fld qword ptr [0x11ab8ea8] */
  fpu_push(rf64((uint32_t)(0x11ab8ea8)));
  /* 11a93fb0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11a93fb2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11a93fb5:;
  /* 11a93fb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93fb8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a93fbb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a93fbd mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a93fc0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a93fc3 jmp 0x11a94043 */
  goto L_11a94043;
L_11a93fc5:;
  /* 11a93fc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93fc8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11a93fca fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a93fd0 fnstsw ax */
  AX = fpu_status();
  /* 11a93fd2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11a93fd5 jne 0x11a93fea */
  if (!C.zf) goto L_11a93fea;
  /* 11a93fd7 mov edx, dword ptr [0x11ab8ea8] */
  EDX = (r32((uint32_t)(0x11ab8ea8)));
  /* 11a93fdd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11a93fe0 mov eax, dword ptr [0x11ab8eac] */
  EAX = (r32((uint32_t)(0x11ab8eac)));
  /* 11a93fe5 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11a93fe8 jmp 0x11a93ff5 */
  goto L_11a93ff5;
L_11a93fea:;
  /* 11a93fea fld qword ptr [0x11ab8e98] */
  fpu_push(rf64((uint32_t)(0x11ab8e98)));
  /* 11a93ff0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11a93ff2 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11a93ff5:;
  /* 11a93ff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a93ff8 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a93ffb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a93ffd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a94000 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a94003 jmp 0x11a94043 */
  goto L_11a94043;
L_11a94005:;
  /* 11a94005 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94008 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11a9400a fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a94010 fnstsw ax */
  AX = fpu_status();
  /* 11a94012 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11a94015 jne 0x11a9402a */
  if (!C.zf) goto L_11a9402a;
  /* 11a94017 mov edx, dword ptr [0x11ab8ea8] */
  EDX = (r32((uint32_t)(0x11ab8ea8)));
  /* 11a9401d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11a94020 mov eax, dword ptr [0x11ab8eac] */
  EAX = (r32((uint32_t)(0x11ab8eac)));
  /* 11a94025 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11a94028 jmp 0x11a94035 */
  goto L_11a94035;
L_11a9402a:;
  /* 11a9402a fld qword ptr [0x11ab8ea8] */
  fpu_push(rf64((uint32_t)(0x11ab8ea8)));
  /* 11a94030 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11a94032 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11a94035:;
  /* 11a94035 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94038 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a9403b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a9403d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a94040 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11a94043:;
  /* 11a94043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94046 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a94049 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9404c jmp 0x11a941ae */
  goto L_11a941ae;
L_11a94051:;
  /* 11a94051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94054 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a94057 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a94059 je 0x11a941ae */
  if (C.zf) goto L_11a941ae;
  /* 11a9405f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94062 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94067 je 0x11a941ae */
  if (C.zf) goto L_11a941ae;
  /* 11a9406d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a94074 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94077 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9407a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9407c je 0x11a94085 */
  if (C.zf) goto L_11a94085;
  /* 11a9407e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a94085:;
  /* 11a94085 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94088 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11a9408a fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a94090 fnstsw ax */
  AX = fpu_status();
  /* 11a94092 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11a94095 jne 0x11a9418e */
  if (!C.zf) goto L_11a9418e;
  /* 11a9409b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a9409e push eax */
  push32((uint32_t)(EAX));
  /* 11a9409f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a940a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a940a5 push edx */
  push32((uint32_t)(EDX));
  /* 11a940a6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a940a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a940a9 call 0x11a984b0 */
  push32(0x11a940aeu); f_11a984b0();
  /* 11a940ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a940b1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11a940b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a940b7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a940bd mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a940c0 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a940c7 jge 0x11a940e1 */
  if ((C.sf==C.of)) goto L_11a940e1;
  /* 11a940c9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11a940cc fmul qword ptr [0x11ab47a0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11ab47a0)));
  /* 11a940d2 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11a940d5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a940dc jmp 0x11a9417e */
  goto L_11a9417e;
L_11a940e1:;
  /* 11a940e1 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11a940e4 fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a940ea fnstsw ax */
  AX = fpu_status();
  /* 11a940ec test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11a940ef je 0x11a940fa */
  if (C.zf) goto L_11a940fa;
  /* 11a940f1 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11a940f8 jmp 0x11a94101 */
  goto L_11a94101;
L_11a940fa:;
  /* 11a940fa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11a94101:;
  /* 11a94101 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a94104 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a94107 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11a9410b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11a9410f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11a94113 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11a94117 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11a9411a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11a9411e jmp 0x11a94129 */
  goto L_11a94129;
L_11a94120:;
  /* 11a94120 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a94123 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94126 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11a94129:;
  /* 11a94129 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94130 jge 0x11a94170 */
  if ((C.sf==C.of)) goto L_11a94170;
  /* 11a94132 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a94135 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9413a je 0x11a94149 */
  if (C.zf) goto L_11a94149;
  /* 11a9413c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94140 jne 0x11a94149 */
  if (!C.zf) goto L_11a94149;
  /* 11a94142 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a94149:;
  /* 11a94149 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9414c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a9414e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a94151 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a94154 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a94157 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a94159 je 0x11a94166 */
  if (C.zf) goto L_11a94166;
  /* 11a9415b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9415e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94163 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a94166:;
  /* 11a94166 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a94169 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a9416b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9416e jmp 0x11a94120 */
  goto L_11a94120;
L_11a94170:;
  /* 11a94170 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94174 je 0x11a9417e */
  if (C.zf) goto L_11a9417e;
  /* 11a94176 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11a94179 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11a9417b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11a9417e:;
  /* 11a9417e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94181 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a94184 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a94186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a94189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a9418c jmp 0x11a94195 */
  goto L_11a94195;
L_11a9418e:;
  /* 11a9418e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a94195:;
  /* 11a94195 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94199 je 0x11a941a5 */
  if (C.zf) goto L_11a941a5;
  /* 11a9419b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a9419d call 0x11a94420 */
  push32(0x11a941a2u); f_11a94420();
  /* 11a941a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a941a5:;
  /* 11a941a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a941a8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11a941ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a941ae:;
  /* 11a941ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a941b1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a941b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a941b6 je 0x11a941d5 */
  if (C.zf) goto L_11a941d5;
  /* 11a941b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a941bb and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a941be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a941c0 je 0x11a941d5 */
  if (C.zf) goto L_11a941d5;
  /* 11a941c2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a941c4 call 0x11a94420 */
  push32(0x11a941c9u); f_11a94420();
  /* 11a941c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a941cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a941cf and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11a941d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a941d5:;
  /* 11a941d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a941d7 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a941db sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a941de mov esp, ebp */
  ESP = (EBP);
  /* 11a941e0 pop ebp */
  EBP = (pop32());
  /* 11a941e1 ret  */
  ESPCHK(0x11a93e70u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11a941f0 (155 bytes, 54 insns) */
void f_11a941f0(void) {
  FTRACE(0x11a941f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a941f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a941f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a941f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a941f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a941f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a941fa call 0x11a942d0 */
  push32(0x11a941ffu); f_11a942d0();
  /* 11a941ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94202 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a94205 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94209 je 0x11a94267 */
  if (C.zf) goto L_11a94267;
  /* 11a9420b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9420e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a94211 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94214 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a94217 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9421a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a9421d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a94220 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a94223 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a94226 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a94229 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a9422c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9422f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a94232 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a94235 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a9423a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a9423d push edx */
  push32((uint32_t)(EDX));
  /* 11a9423e call 0x11a943e0 */
  push32(0x11a94243u); f_11a943e0();
  /* 11a94243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94246 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a94249 push eax */
  push32((uint32_t)(EAX));
  /* 11a9424a call 0x11a94390 */
  push32(0x11a9424fu); f_11a94390();
  /* 11a9424f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94254 jne 0x11a94262 */
  if (!C.zf) goto L_11a94262;
  /* 11a94256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94259 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9425a call 0x11a94290 */
  push32(0x11a9425fu); f_11a94290();
  /* 11a9425f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a94262:;
  /* 11a94262 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11a94265 jmp 0x11a94287 */
  goto L_11a94287;
L_11a94267:;
  /* 11a94267 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a9426c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11a9426f push edx */
  push32((uint32_t)(EDX));
  /* 11a94270 call 0x11a943e0 */
  push32(0x11a94275u); f_11a943e0();
  /* 11a94275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9427b push eax */
  push32((uint32_t)(EAX));
  /* 11a9427c call 0x11a94290 */
  push32(0x11a94281u); f_11a94290();
  /* 11a94281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94284 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11a94287:;
  /* 11a94287 mov esp, ebp */
  ESP = (EBP);
  /* 11a94289 pop ebp */
  EBP = (pop32());
  /* 11a9428a ret  */
  ESPCHK(0x11a941f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11a94290 (58 bytes, 20 insns) */
void f_11a94290(void) {
  FTRACE(0x11a94290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94290 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94291 mov ebp, esp */
  EBP = (ESP);
  /* 11a94293 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94297 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9429a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9429e je 0x11a942ae */
  if (C.zf) goto L_11a942ae;
  /* 11a942a0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a942a4 jle 0x11a942c6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a942c6;
  /* 11a942a6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a942aa jle 0x11a942bb */
  if ((C.zf||C.sf!=C.of)) goto L_11a942bb;
  /* 11a942ac jmp 0x11a942c6 */
  goto L_11a942c6;
L_11a942ae:;
  /* 11a942ae call 0x11a92370 */
  push32(0x11a942b3u); f_11a92370();
  /* 11a942b3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11a942b9 jmp 0x11a942c6 */
  goto L_11a942c6;
L_11a942bb:;
  /* 11a942bb call 0x11a92370 */
  push32(0x11a942c0u); f_11a92370();
  /* 11a942c0 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11a942c6:;
  /* 11a942c6 mov esp, ebp */
  ESP = (EBP);
  /* 11a942c8 pop ebp */
  EBP = (pop32());
  /* 11a942c9 ret  */
  ESPCHK(0x11a94290u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11a942d0 (63 bytes, 22 insns) */
void f_11a942d0(void) {
  FTRACE(0x11a942d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a942d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a942d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a942d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a942d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a942db jmp 0x11a942e6 */
  goto L_11a942e6;
L_11a942dd:;
  /* 11a942dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a942e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a942e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a942e6:;
  /* 11a942e6 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a942ea jge 0x11a94309 */
  if ((C.sf==C.of)) goto L_11a94309;
  /* 11a942ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a942ef mov edx, dword ptr [ecx*8 + 0x11ab8620] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11ab8620)));
  /* 11a942f6 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a942f9 jne 0x11a94307 */
  if (!C.zf) goto L_11a94307;
  /* 11a942fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a942fe mov eax, dword ptr [eax*8 + 0x11ab8624] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11ab8624)));
  /* 11a94305 jmp 0x11a9430b */
  goto L_11a9430b;
L_11a94307:;
  /* 11a94307 jmp 0x11a942dd */
  goto L_11a942dd;
L_11a94309:;
  /* 11a94309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9430b:;
  /* 11a9430b mov esp, ebp */
  ESP = (EBP);
  /* 11a9430d pop ebp */
  EBP = (pop32());
  /* 11a9430e ret  */
  ESPCHK(0x11a942d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014310 @ 0x11a94310 (113 bytes, 38 insns) */
void f_11a94310(void) {
  FTRACE(0x11a94310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94310 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94311 mov ebp, esp */
  EBP = (ESP);
  /* 11a94313 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94317 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9431a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9431c je 0x11a94327 */
  if (C.zf) goto L_11a94327;
  /* 11a9431e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11a94325 jmp 0x11a9437a */
  goto L_11a9437a;
L_11a94327:;
  /* 11a94327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9432a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9432d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9432f je 0x11a9433a */
  if (C.zf) goto L_11a9433a;
  /* 11a94331 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a94338 jmp 0x11a9437a */
  goto L_11a9437a;
L_11a9433a:;
  /* 11a9433a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9433d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a94340 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a94342 je 0x11a9434d */
  if (C.zf) goto L_11a9434d;
  /* 11a94344 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11a9434b jmp 0x11a9437a */
  goto L_11a9437a;
L_11a9434d:;
  /* 11a9434d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94350 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94355 je 0x11a94360 */
  if (C.zf) goto L_11a94360;
  /* 11a94357 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11a9435e jmp 0x11a9437a */
  goto L_11a9437a;
L_11a94360:;
  /* 11a94360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94363 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a94366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a94368 je 0x11a94373 */
  if (C.zf) goto L_11a94373;
  /* 11a9436a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11a94371 jmp 0x11a9437a */
  goto L_11a9437a;
L_11a94373:;
  /* 11a94373 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a9437a:;
  /* 11a9437a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9437d mov esp, ebp */
  ESP = (EBP);
  /* 11a9437f pop ebp */
  EBP = (pop32());
  /* 11a94380 ret  */
  ESPCHK(0x11a94310u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11a94390 (7 bytes, 5 insns) */
void f_11a94390(void) {
  FTRACE(0x11a94390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94390 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94391 mov ebp, esp */
  EBP = (ESP);
  /* 11a94393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94395 pop ebp */
  EBP = (pop32());
  /* 11a94396 ret  */
  ESPCHK(0x11a94390u, _esp0);
  ESP += 4; return;
}

/* FUN_100143a0 @ 0x11a943a0 (22 bytes, 15 insns) */
void f_11a943a0(void) {
  FTRACE(0x11a943a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a943a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a943a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a943a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a943a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a943a5 push esi */
  push32((uint32_t)(ESI));
  /* 11a943a6 push edi */
  push32((uint32_t)(EDI));
  /* 11a943a7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a943a8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11a943ab movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11a943af pop edi */
  EDI = (pop32());
  /* 11a943b0 pop esi */
  ESI = (pop32());
  /* 11a943b1 pop ebx */
  EBX = (pop32());
  /* 11a943b2 mov esp, ebp */
  ESP = (EBP);
  /* 11a943b4 pop ebp */
  EBP = (pop32());
  /* 11a943b5 ret  */
  ESPCHK(0x11a943a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x11a943c0 (23 bytes, 15 insns) */
void f_11a943c0(void) {
  FTRACE(0x11a943c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a943c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a943c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a943c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a943c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a943c5 push esi */
  push32((uint32_t)(ESI));
  /* 11a943c6 push edi */
  push32((uint32_t)(EDI));
  /* 11a943c7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11a943ca fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11a943cc movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11a943d0 pop edi */
  EDI = (pop32());
  /* 11a943d1 pop esi */
  ESI = (pop32());
  /* 11a943d2 pop ebx */
  EBX = (pop32());
  /* 11a943d3 mov esp, ebp */
  ESP = (EBP);
  /* 11a943d5 pop ebp */
  EBP = (pop32());
  /* 11a943d6 ret  */
  ESPCHK(0x11a943c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100143e0 @ 0x11a943e0 (50 bytes, 24 insns) */
void f_11a943e0(void) {
  FTRACE(0x11a943e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a943e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a943e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a943e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a943e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a943e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a943e8 push edi */
  push32((uint32_t)(EDI));
  /* 11a943e9 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a943ea fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11a943ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a943f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11a943f3 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11a943f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a943fa not edx */
  EDX = (~(EDX));
  /* 11a943fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a943fe or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94400 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a94404 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11a94407 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11a9440b pop edi */
  EDI = (pop32());
  /* 11a9440c pop esi */
  ESI = (pop32());
  /* 11a9440d pop ebx */
  EBX = (pop32());
  /* 11a9440e mov esp, ebp */
  ESP = (EBP);
  /* 11a94410 pop ebp */
  EBP = (pop32());
  /* 11a94411 ret  */
  ESPCHK(0x11a943e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014420 @ 0x11a94420 (117 bytes, 53 insns) */
void f_11a94420(void) {
  FTRACE(0x11a94420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94420 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94421 mov ebp, esp */
  EBP = (ESP);
  /* 11a94423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94426 push ebx */
  push32((uint32_t)(EBX));
  /* 11a94427 push esi */
  push32((uint32_t)(ESI));
  /* 11a94428 push edi */
  push32((uint32_t)(EDI));
  /* 11a94429 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9442c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9442f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94431 je 0x11a9443d */
  if (C.zf) goto L_11a9443d;
  /* 11a94433 fld xword ptr [0x11ab86fc] */
  fpu_push(rf80((uint32_t)(0x11ab86fc)));
  /* 11a94439 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11a9443c wait  */
  /* wait (no observable integer/reg state) */
L_11a9443d:;
  /* 11a9443d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94440 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a94443 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a94445 je 0x11a94457 */
  if (C.zf) goto L_11a94457;
  /* 11a94447 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a94448 fnstsw ax */
  AX = fpu_status();
  /* 11a9444a fld xword ptr [0x11ab86fc] */
  fpu_push(rf80((uint32_t)(0x11ab86fc)));
  /* 11a94450 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11a94453 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a94454 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a94455 fnstsw ax */
  AX = fpu_status();
L_11a94457:;
  /* 11a94457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9445a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9445d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9445f je 0x11a9446b */
  if (C.zf) goto L_11a9446b;
  /* 11a94461 fld xword ptr [0x11ab8708] */
  fpu_push(rf80((uint32_t)(0x11ab8708)));
  /* 11a94467 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11a9446a wait  */
  /* wait (no observable integer/reg state) */
L_11a9446b:;
  /* 11a9446b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9446e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94473 je 0x11a9447e */
  if (C.zf) goto L_11a9447e;
  /* 11a94475 fldz  */
  fpu_push(0.0);
  /* 11a94477 fld1  */
  fpu_push(1.0);
  /* 11a94479 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11a9447b fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11a9447d wait  */
  /* wait (no observable integer/reg state) */
L_11a9447e:;
  /* 11a9447e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94481 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a94484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a94486 je 0x11a9448e */
  if (C.zf) goto L_11a9448e;
  /* 11a94488 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11a9448a fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11a9448d wait  */
  /* wait (no observable integer/reg state) */
L_11a9448e:;
  /* 11a9448e pop edi */
  EDI = (pop32());
  /* 11a9448f pop esi */
  ESI = (pop32());
  /* 11a94490 pop ebx */
  EBX = (pop32());
  /* 11a94491 mov esp, ebp */
  ESP = (EBP);
  /* 11a94493 pop ebp */
  EBP = (pop32());
  /* 11a94494 ret  */
  ESPCHK(0x11a94420u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x11a944a0 (421 bytes, 148 insns) */
void f_11a944a0(void) {
  FTRACE(0x11a944a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a944a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a944a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a944a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a944a5 push 0x11ab53b8 */
  push32((uint32_t)(0x11ab53b8u));
  /* 11a944aa push 0x11a986e4 */
  push32((uint32_t)(0x11a986e4u));
  /* 11a944af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a944b5 push eax */
  push32((uint32_t)(EAX));
  /* 11a944b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a944bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a944c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a944c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a944c2 push edi */
  push32((uint32_t)(EDI));
  /* 11a944c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a944c6 cmp dword ptr [0x11aba2e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a944cd jne 0x11a9451e */
  if (!C.zf) goto L_11a9451e;
  /* 11a944cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a944d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a944d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a944d5 push 0x11ab53b4 */
  push32((uint32_t)(0x11ab53b4u));
  /* 11a944da push 1 */
  push32((uint32_t)(0x1u));
  /* 11a944dc call dword ptr [0x11abc310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc310))), 0x11a944e2u);
  /* 11a944e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a944e4 je 0x11a944f2 */
  if (C.zf) goto L_11a944f2;
  /* 11a944e6 mov dword ptr [0x11aba2e0], 1 */
  w32((uint32_t)(0x11aba2e0), (0x1u));
  /* 11a944f0 jmp 0x11a9451e */
  goto L_11a9451e;
L_11a944f2:;
  /* 11a944f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11a944f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a944f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a944f8 push 0x11ab53b0 */
  push32((uint32_t)(0x11ab53b0u));
  /* 11a944fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a944ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11a94501 call dword ptr [0x11abc320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc320))), 0x11a94507u);
  /* 11a94507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94509 je 0x11a94517 */
  if (C.zf) goto L_11a94517;
  /* 11a9450b mov dword ptr [0x11aba2e0], 2 */
  w32((uint32_t)(0x11aba2e0), (0x2u));
  /* 11a94515 jmp 0x11a9451e */
  goto L_11a9451e;
L_11a94517:;
  /* 11a94517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94519 jmp 0x11a94648 */
  goto L_11a94648;
L_11a9451e:;
  /* 11a9451e cmp dword ptr [0x11aba2e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94525 jne 0x11a94555 */
  if (!C.zf) goto L_11a94555;
  /* 11a94527 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9452b jne 0x11a94536 */
  if (!C.zf) goto L_11a94536;
  /* 11a9452d mov edx, dword ptr [0x11aba2c8] */
  EDX = (r32((uint32_t)(0x11aba2c8)));
  /* 11a94533 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11a94536:;
  /* 11a94536 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a94539 push eax */
  push32((uint32_t)(EAX));
  /* 11a9453a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9453d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9453e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94541 push edx */
  push32((uint32_t)(EDX));
  /* 11a94542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94545 push eax */
  push32((uint32_t)(EAX));
  /* 11a94546 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a94549 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9454a call dword ptr [0x11abc320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc320))), 0x11a94550u);
  /* 11a94550 jmp 0x11a94648 */
  goto L_11a94648;
L_11a94555:;
  /* 11a94555 cmp dword ptr [0x11aba2e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9455c jne 0x11a94646 */
  if (!C.zf) goto L_11a94646;
  /* 11a94562 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94566 jne 0x11a94571 */
  if (!C.zf) goto L_11a94571;
  /* 11a94568 mov edx, dword ptr [0x11aba2d8] */
  EDX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9456e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a94571:;
  /* 11a94571 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a94573 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a94575 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94578 push eax */
  push32((uint32_t)(EAX));
  /* 11a94579 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9457c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9457d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a94580 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94582 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94584 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a94587 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9458a push edx */
  push32((uint32_t)(EDX));
  /* 11a9458b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9458e push eax */
  push32((uint32_t)(EAX));
  /* 11a9458f call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a94595u);
  /* 11a94595 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a94598 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9459c jne 0x11a945a5 */
  if (!C.zf) goto L_11a945a5;
  /* 11a9459e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a945a0 jmp 0x11a94648 */
  goto L_11a94648;
L_11a945a5:;
  /* 11a945a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a945ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a945af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a945b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a945b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a945b6 call 0x11a8c980 */
  push32(0x11a945bbu); f_11a8c980();
  /* 11a945bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11a945be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a945c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a945c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a945c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a945ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a945cc push edx */
  push32((uint32_t)(EDX));
  /* 11a945cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a945cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a945d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a945d3 call 0x11a8ee40 */
  push32(0x11a945d8u); f_11a8ee40();
  /* 11a945d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a945db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a945e2 jmp 0x11a945fb */
  goto L_11a945fb;
  /* 11a945e4 mov eax, 1 */
  EAX = (0x1u);
  /* 11a945e9 ret  */
  ESPCHK(0x11a944a0u, _esp0);
  ESP += 4; return;
  /* 11a945ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a945ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a945f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a945fb:;
  /* 11a945fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a945ff jne 0x11a94605 */
  if (!C.zf) goto L_11a94605;
  /* 11a94601 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94603 jmp 0x11a94648 */
  goto L_11a94648;
L_11a94605:;
  /* 11a94605 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a94608 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94609 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9460c push edx */
  push32((uint32_t)(EDX));
  /* 11a9460d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94610 push eax */
  push32((uint32_t)(EAX));
  /* 11a94611 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94614 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94615 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a94617 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9461a push edx */
  push32((uint32_t)(EDX));
  /* 11a9461b call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a94621u);
  /* 11a94621 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a94624 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94628 jne 0x11a9462e */
  if (!C.zf) goto L_11a9462e;
  /* 11a9462a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9462c jmp 0x11a94648 */
  goto L_11a94648;
L_11a9462e:;
  /* 11a9462e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a94631 push eax */
  push32((uint32_t)(EAX));
  /* 11a94632 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a94635 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94636 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a94639 push edx */
  push32((uint32_t)(EDX));
  /* 11a9463a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9463d push eax */
  push32((uint32_t)(EAX));
  /* 11a9463e call dword ptr [0x11abc310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc310))), 0x11a94644u);
  /* 11a94644 jmp 0x11a94648 */
  goto L_11a94648;
L_11a94646:;
  /* 11a94646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a94648:;
  /* 11a94648 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a9464b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9464e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a94655 pop edi */
  EDI = (pop32());
  /* 11a94656 pop esi */
  ESI = (pop32());
  /* 11a94657 pop ebx */
  EBX = (pop32());
  /* 11a94658 mov esp, ebp */
  ESP = (EBP);
  /* 11a9465a pop ebp */
  EBP = (pop32());
  /* 11a9465b ret  */
  ESPCHK(0x11a944a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014660 @ 0x11a94660 (727 bytes, 263 insns) */
void f_11a94660(void) {
  FTRACE(0x11a94660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94660 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94661 mov ebp, esp */
  EBP = (ESP);
  /* 11a94663 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a94665 push 0x11ab53c8 */
  push32((uint32_t)(0x11ab53c8u));
  /* 11a9466a push 0x11a986e4 */
  push32((uint32_t)(0x11a986e4u));
  /* 11a9466f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a94675 push eax */
  push32((uint32_t)(EAX));
  /* 11a94676 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a9467d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94680 push ebx */
  push32((uint32_t)(EBX));
  /* 11a94681 push esi */
  push32((uint32_t)(ESI));
  /* 11a94682 push edi */
  push32((uint32_t)(EDI));
  /* 11a94683 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a94686 cmp dword ptr [0x11aba2e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9468d jne 0x11a946e6 */
  if (!C.zf) goto L_11a946e6;
  /* 11a9468f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a94691 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a94693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a94695 push 0x11ab53b4 */
  push32((uint32_t)(0x11ab53b4u));
  /* 11a9469a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a9469f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a946a1 call dword ptr [0x11abc314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc314))), 0x11a946a7u);
  /* 11a946a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a946a9 je 0x11a946b7 */
  if (C.zf) goto L_11a946b7;
  /* 11a946ab mov dword ptr [0x11aba2e4], 1 */
  w32((uint32_t)(0x11aba2e4), (0x1u));
  /* 11a946b5 jmp 0x11a946e6 */
  goto L_11a946e6;
L_11a946b7:;
  /* 11a946b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a946b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a946bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a946bd push 0x11ab53b0 */
  push32((uint32_t)(0x11ab53b0u));
  /* 11a946c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a946c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a946c9 call dword ptr [0x11abc30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc30c))), 0x11a946cfu);
  /* 11a946cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a946d1 je 0x11a946df */
  if (C.zf) goto L_11a946df;
  /* 11a946d3 mov dword ptr [0x11aba2e4], 2 */
  w32((uint32_t)(0x11aba2e4), (0x2u));
  /* 11a946dd jmp 0x11a946e6 */
  goto L_11a946e6;
L_11a946df:;
  /* 11a946df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a946e1 jmp 0x11a94951 */
  goto L_11a94951;
L_11a946e6:;
  /* 11a946e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a946ea jle 0x11a946ff */
  if ((C.zf||C.sf!=C.of)) goto L_11a946ff;
  /* 11a946ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a946ef push eax */
  push32((uint32_t)(EAX));
  /* 11a946f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a946f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a946f4 call 0x11a94970 */
  push32(0x11a946f9u); f_11a94970();
  /* 11a946f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a946fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a946ff:;
  /* 11a946ff cmp dword ptr [0x11aba2e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94706 jne 0x11a9472b */
  if (!C.zf) goto L_11a9472b;
  /* 11a94708 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9470b push edx */
  push32((uint32_t)(EDX));
  /* 11a9470c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9470f push eax */
  push32((uint32_t)(EAX));
  /* 11a94710 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a94713 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94714 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94717 push edx */
  push32((uint32_t)(EDX));
  /* 11a94718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9471b push eax */
  push32((uint32_t)(EAX));
  /* 11a9471c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9471f push ecx */
  push32((uint32_t)(ECX));
  /* 11a94720 call dword ptr [0x11abc30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc30c))), 0x11a94726u);
  /* 11a94726 jmp 0x11a94951 */
  goto L_11a94951;
L_11a9472b:;
  /* 11a9472b cmp dword ptr [0x11aba2e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94732 jne 0x11a9494f */
  if (!C.zf) goto L_11a9494f;
  /* 11a94738 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9473c jne 0x11a94747 */
  if (!C.zf) goto L_11a94747;
  /* 11a9473e mov edx, dword ptr [0x11aba2d8] */
  EDX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a94744 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11a94747:;
  /* 11a94747 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a94749 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9474b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9474e push eax */
  push32((uint32_t)(EAX));
  /* 11a9474f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94752 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94753 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a94756 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94758 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9475a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9475d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94760 push edx */
  push32((uint32_t)(EDX));
  /* 11a94761 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a94764 push eax */
  push32((uint32_t)(EAX));
  /* 11a94765 call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a9476bu);
  /* 11a9476b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a9476e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94772 jne 0x11a9477b */
  if (!C.zf) goto L_11a9477b;
  /* 11a94774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94776 jmp 0x11a94951 */
  goto L_11a94951;
L_11a9477b:;
  /* 11a9477b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a94782 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a94785 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a94787 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9478a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9478c call 0x11a8c980 */
  push32(0x11a94791u); f_11a8c980();
  /* 11a94791 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11a94794 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a94797 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a9479a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a9479d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a947a4 jmp 0x11a947bd */
  goto L_11a947bd;
  /* 11a947a6 mov eax, 1 */
  EAX = (0x1u);
  /* 11a947ab ret  */
  ESPCHK(0x11a94660u, _esp0);
  ESP += 4; return;
  /* 11a947ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a947af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a947b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a947bd:;
  /* 11a947bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a947c1 jne 0x11a947ca */
  if (!C.zf) goto L_11a947ca;
  /* 11a947c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a947c5 jmp 0x11a94951 */
  goto L_11a94951;
L_11a947ca:;
  /* 11a947ca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a947cd push edx */
  push32((uint32_t)(EDX));
  /* 11a947ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a947d1 push eax */
  push32((uint32_t)(EAX));
  /* 11a947d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a947d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a947d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a947d9 push edx */
  push32((uint32_t)(EDX));
  /* 11a947da push 1 */
  push32((uint32_t)(0x1u));
  /* 11a947dc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a947df push eax */
  push32((uint32_t)(EAX));
  /* 11a947e0 call dword ptr [0x11abc318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc318))), 0x11a947e6u);
  /* 11a947e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a947e8 jne 0x11a947f1 */
  if (!C.zf) goto L_11a947f1;
  /* 11a947ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a947ec jmp 0x11a94951 */
  goto L_11a94951;
L_11a947f1:;
  /* 11a947f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a947f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a947f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a947f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a947f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a947fc push edx */
  push32((uint32_t)(EDX));
  /* 11a947fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94800 push eax */
  push32((uint32_t)(EAX));
  /* 11a94801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94804 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94805 call dword ptr [0x11abc314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc314))), 0x11a9480bu);
  /* 11a9480b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a9480e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94812 jne 0x11a9481b */
  if (!C.zf) goto L_11a9481b;
  /* 11a94814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94816 jmp 0x11a94951 */
  goto L_11a94951;
L_11a9481b:;
  /* 11a9481b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9481e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11a94824 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a94826 je 0x11a9486b */
  if (C.zf) goto L_11a9486b;
  /* 11a94828 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9482c je 0x11a94866 */
  if (C.zf) goto L_11a94866;
  /* 11a9482e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a94831 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94834 jle 0x11a9483d */
  if ((C.zf||C.sf!=C.of)) goto L_11a9483d;
  /* 11a94836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94838 jmp 0x11a94951 */
  goto L_11a94951;
L_11a9483d:;
  /* 11a9483d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a94840 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94841 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a94844 push edx */
  push32((uint32_t)(EDX));
  /* 11a94845 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a94848 push eax */
  push32((uint32_t)(EAX));
  /* 11a94849 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9484c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9484d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94850 push edx */
  push32((uint32_t)(EDX));
  /* 11a94851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94854 push eax */
  push32((uint32_t)(EAX));
  /* 11a94855 call dword ptr [0x11abc314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc314))), 0x11a9485bu);
  /* 11a9485b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9485d jne 0x11a94866 */
  if (!C.zf) goto L_11a94866;
  /* 11a9485f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94861 jmp 0x11a94951 */
  goto L_11a94951;
L_11a94866:;
  /* 11a94866 jmp 0x11a9494a */
  goto L_11a9494a;
L_11a9486b:;
  /* 11a9486b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9486e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11a94871 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a94878 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a9487b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a9487d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94880 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a94882 call 0x11a8c980 */
  push32(0x11a94887u); f_11a8c980();
  /* 11a94887 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11a9488a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9488d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a94890 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a94893 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9489a jmp 0x11a948b3 */
  goto L_11a948b3;
  /* 11a9489c mov eax, 1 */
  EAX = (0x1u);
  /* 11a948a1 ret  */
  ESPCHK(0x11a94660u, _esp0);
  ESP += 4; return;
  /* 11a948a2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a948a5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a948ac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a948b3:;
  /* 11a948b3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a948b7 jne 0x11a948c0 */
  if (!C.zf) goto L_11a948c0;
  /* 11a948b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a948bb jmp 0x11a94951 */
  goto L_11a94951;
L_11a948c0:;
  /* 11a948c0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a948c3 push eax */
  push32((uint32_t)(EAX));
  /* 11a948c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a948c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a948c8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a948cb push edx */
  push32((uint32_t)(EDX));
  /* 11a948cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a948cf push eax */
  push32((uint32_t)(EAX));
  /* 11a948d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a948d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a948d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a948d7 push edx */
  push32((uint32_t)(EDX));
  /* 11a948d8 call dword ptr [0x11abc314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc314))), 0x11a948deu);
  /* 11a948de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a948e0 jne 0x11a948e6 */
  if (!C.zf) goto L_11a948e6;
  /* 11a948e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a948e4 jmp 0x11a94951 */
  goto L_11a94951;
L_11a948e6:;
  /* 11a948e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a948ea jne 0x11a9491a */
  if (!C.zf) goto L_11a9491a;
  /* 11a948ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a948ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11a948f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a948f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a948f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a948f7 push eax */
  push32((uint32_t)(EAX));
  /* 11a948f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a948fb push ecx */
  push32((uint32_t)(ECX));
  /* 11a948fc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a94901 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a94904 push edx */
  push32((uint32_t)(EDX));
  /* 11a94905 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9490bu);
  /* 11a9490b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a9490e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94912 jne 0x11a94918 */
  if (!C.zf) goto L_11a94918;
  /* 11a94914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94916 jmp 0x11a94951 */
  goto L_11a94951;
L_11a94918:;
  /* 11a94918 jmp 0x11a9494a */
  goto L_11a9494a;
L_11a9491a:;
  /* 11a9491a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9491c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9491e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a94921 push eax */
  push32((uint32_t)(EAX));
  /* 11a94922 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a94925 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94926 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a94929 push edx */
  push32((uint32_t)(EDX));
  /* 11a9492a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9492d push eax */
  push32((uint32_t)(EAX));
  /* 11a9492e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a94933 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a94936 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94937 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9493du);
  /* 11a9493d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a94940 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94944 jne 0x11a9494a */
  if (!C.zf) goto L_11a9494a;
  /* 11a94946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94948 jmp 0x11a94951 */
  goto L_11a94951;
L_11a9494a:;
  /* 11a9494a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9494d jmp 0x11a94951 */
  goto L_11a94951;
L_11a9494f:;
  /* 11a9494f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a94951:;
  /* 11a94951 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11a94954 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a94957 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a9495e pop edi */
  EDI = (pop32());
  /* 11a9495f pop esi */
  ESI = (pop32());
  /* 11a94960 pop ebx */
  EBX = (pop32());
  /* 11a94961 mov esp, ebp */
  ESP = (EBP);
  /* 11a94963 pop ebp */
  EBP = (pop32());
  /* 11a94964 ret  */
  ESPCHK(0x11a94660u, _esp0);
  ESP += 4; return;
}

/* FUN_10014970 @ 0x11a94970 (80 bytes, 32 insns) */
void f_11a94970(void) {
  FTRACE(0x11a94970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94970 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94971 mov ebp, esp */
  EBP = (ESP);
  /* 11a94973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94979 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9497c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9497f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a94982:;
  /* 11a94982 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a94985 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a94988 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9498b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9498e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a94990 je 0x11a949a7 */
  if (C.zf) goto L_11a949a7;
  /* 11a94992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94995 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a94998 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9499a je 0x11a949a7 */
  if (C.zf) goto L_11a949a7;
  /* 11a9499c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9499f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a949a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a949a5 jmp 0x11a94982 */
  goto L_11a94982;
L_11a949a7:;
  /* 11a949a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a949aa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a949ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a949af jne 0x11a949b9 */
  if (!C.zf) goto L_11a949b9;
  /* 11a949b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a949b4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a949b7 jmp 0x11a949bc */
  goto L_11a949bc;
L_11a949b9:;
  /* 11a949b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a949bc:;
  /* 11a949bc mov esp, ebp */
  ESP = (EBP);
  /* 11a949be pop ebp */
  EBP = (pop32());
  /* 11a949bf ret  */
  ESPCHK(0x11a94970u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11a949c0 (62 bytes, 23 insns) */
void f_11a949c0(void) {
  FTRACE(0x11a949c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a949c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a949c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a949c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a949c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a949cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a949d0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a949d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a949d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a949d9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a949dc jb 0x11a949e6 */
  if (C.cf) goto L_11a949e6;
  /* 11a949de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a949e1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a949e4 jae 0x11a949ef */
  if (!C.cf) goto L_11a949ef;
L_11a949e6:;
  /* 11a949e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a949e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a949ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a949ef:;
  /* 11a949ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a949f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a949f5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a949f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a949fa mov esp, ebp */
  ESP = (EBP);
  /* 11a949fc pop ebp */
  EBP = (pop32());
  /* 11a949fd ret  */
  ESPCHK(0x11a949c0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11a94a00 (173 bytes, 66 insns) */
void f_11a94a00(void) {
  FTRACE(0x11a94a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94a01 mov ebp, esp */
  EBP = (ESP);
  /* 11a94a03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a09 push eax */
  push32((uint32_t)(EAX));
  /* 11a94a0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94a0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a94a0f push edx */
  push32((uint32_t)(EDX));
  /* 11a94a10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a94a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94a16 call 0x11a949c0 */
  push32(0x11a94a1bu); f_11a949c0();
  /* 11a94a1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a94a21 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94a25 je 0x11a94a57 */
  if (C.zf) goto L_11a94a57;
  /* 11a94a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a2a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a2d push edx */
  push32((uint32_t)(EDX));
  /* 11a94a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a94a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a33 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a94a36 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94a37 call 0x11a949c0 */
  push32(0x11a94a3cu); f_11a949c0();
  /* 11a94a3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a3f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a94a42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94a46 je 0x11a94a57 */
  if (C.zf) goto L_11a94a57;
  /* 11a94a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a4b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a94a4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a54 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11a94a57:;
  /* 11a94a57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a5a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a5d push edx */
  push32((uint32_t)(EDX));
  /* 11a94a5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94a61 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a94a64 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94a65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a94a6b push eax */
  push32((uint32_t)(EAX));
  /* 11a94a6c call 0x11a949c0 */
  push32(0x11a94a71u); f_11a949c0();
  /* 11a94a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a94a77 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94a7b je 0x11a94a8c */
  if (C.zf) goto L_11a94a8c;
  /* 11a94a7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a80 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a94a83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a89 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11a94a8c:;
  /* 11a94a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94a92 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94a93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94a96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a94a99 push eax */
  push32((uint32_t)(EAX));
  /* 11a94a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94a9d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a94aa0 push edx */
  push32((uint32_t)(EDX));
  /* 11a94aa1 call 0x11a949c0 */
  push32(0x11a94aa6u); f_11a949c0();
  /* 11a94aa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94aa9 mov esp, ebp */
  ESP = (EBP);
  /* 11a94aab pop ebp */
  EBP = (pop32());
  /* 11a94aac ret  */
  ESPCHK(0x11a94a00u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11a94ab0 (96 bytes, 37 insns) */
void f_11a94ab0(void) {
  FTRACE(0x11a94ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11a94ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94ab9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a94abb and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a94ac1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94ac3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94ac5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94ac7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a94aca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94acd mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a94ad0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94ad5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94ad7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94ad9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94adb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a94ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94ae1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a94ae3 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a94ae5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94ae8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a94aea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94aed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a94af0 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a94af2 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11a94af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94af8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a94afb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94afe mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a94b01 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a94b03 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a94b06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b09 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a94b0c mov esp, ebp */
  ESP = (EBP);
  /* 11a94b0e pop ebp */
  EBP = (pop32());
  /* 11a94b0f ret  */
  ESPCHK(0x11a94ab0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11a94b10 (99 bytes, 37 insns) */
void f_11a94b10(void) {
  FTRACE(0x11a94b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94b11 mov ebp, esp */
  EBP = (ESP);
  /* 11a94b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a94b1c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a94b1f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94b21 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94b23 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a94b29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a94b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a94b32 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94b35 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a94b37 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94b39 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94b3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a94b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b44 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a94b47 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a94b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a94b4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a94b55 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a94b57 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a94b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b5d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a94b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a94b65 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a94b67 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11a94b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94b6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a94b6f mov esp, ebp */
  ESP = (EBP);
  /* 11a94b71 pop ebp */
  EBP = (pop32());
  /* 11a94b72 ret  */
  ESPCHK(0x11a94b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b80 @ 0x11a94b80 (315 bytes, 101 insns) */
void f_11a94b80(void) {
  FTRACE(0x11a94b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94b81 mov ebp, esp */
  EBP = (ESP);
  /* 11a94b83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94b86 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11a94b8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94b8f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a94b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94b98 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a94b9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94ba2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11a94ba9 jmp 0x11a94bbd */
  goto L_11a94bbd;
L_11a94bab:;
  /* 11a94bab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a94bae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94bb1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a94bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94bb7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94bba mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11a94bbd:;
  /* 11a94bbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94bc1 jbe 0x11a94c37 */
  if ((C.cf||C.zf)) goto L_11a94c37;
  /* 11a94bc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94bc6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a94bc8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a94bcb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a94bce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a94bd1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a94bd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a94bd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94bda push eax */
  push32((uint32_t)(EAX));
  /* 11a94bdb call 0x11a94ab0 */
  push32(0x11a94be0u); f_11a94ab0();
  /* 11a94be0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94be3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94be6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94be7 call 0x11a94ab0 */
  push32(0x11a94becu); f_11a94ab0();
  /* 11a94bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94bef lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a94bf2 push edx */
  push32((uint32_t)(EDX));
  /* 11a94bf3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11a94bf7 call 0x11a94a00 */
  push32(0x11a94bfcu); f_11a94a00();
  /* 11a94bfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94bff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c02 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94c03 call 0x11a94ab0 */
  push32(0x11a94c08u); f_11a94ab0();
  /* 11a94c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94c0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a94c0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a94c11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a94c14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a94c1b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a94c22 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a94c25 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94c26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c29 push edx */
  push32((uint32_t)(EDX));
  /* 11a94c2a call 0x11a94a00 */
  push32(0x11a94c2fu); f_11a94a00();
  /* 11a94c2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94c32 jmp 0x11a94bab */
  goto L_11a94bab;
L_11a94c37:;
  /* 11a94c37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94c3e jne 0x11a94c83 */
  if (!C.zf) goto L_11a94c83;
  /* 11a94c40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a94c46 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11a94c49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a94c4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a94c55 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11a94c58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a94c5d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11a94c60 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a94c62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c65 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a94c68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a94c6d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11a94c70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a94c75 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11a94c79 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a94c7d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11a94c81 jmp 0x11a94c37 */
  goto L_11a94c37;
L_11a94c83:;
  /* 11a94c83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c86 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a94c89 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94c8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a94c90 jne 0x11a94cac */
  if (!C.zf) goto L_11a94cac;
  /* 11a94c92 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94c95 push ecx */
  push32((uint32_t)(ECX));
  /* 11a94c96 call 0x11a94ab0 */
  push32(0x11a94c9bu); f_11a94ab0();
  /* 11a94c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94c9e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11a94ca2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a94ca6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11a94caa jmp 0x11a94c83 */
  goto L_11a94c83;
L_11a94cac:;
  /* 11a94cac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94caf mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11a94cb3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11a94cb7 mov esp, ebp */
  ESP = (EBP);
  /* 11a94cb9 pop ebp */
  EBP = (pop32());
  /* 11a94cba ret  */
  ESPCHK(0x11a94b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cc0 @ 0x11a94cc0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11a94cc0(void) {
  FTRACE(0x11a94cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a94cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a94cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11a94cc3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94cc9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11a94ccc mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11a94ccf mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a94cd5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11a94cdc mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11a94ce3 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11a94cea mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a94cf1 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11a94cf8 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11a94cff mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11a94d06 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11a94d0d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11a94d14 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11a94d1b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11a94d22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a94d25 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a94d28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d2b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11a94d2e jmp 0x11a94d39 */
  goto L_11a94d39;
L_11a94d30:;
  /* 11a94d30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d33 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94d36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a94d39:;
  /* 11a94d39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a94d3f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94d42 je 0x11a94d65 */
  if (C.zf) goto L_11a94d65;
  /* 11a94d44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a94d4a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94d4d je 0x11a94d65 */
  if (C.zf) goto L_11a94d65;
  /* 11a94d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a94d55 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94d58 je 0x11a94d65 */
  if (C.zf) goto L_11a94d65;
  /* 11a94d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d5d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a94d60 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94d63 jne 0x11a94d67 */
  if (!C.zf) goto L_11a94d67;
L_11a94d65:;
  /* 11a94d65 jmp 0x11a94d30 */
  goto L_11a94d30;
L_11a94d67:;
  /* 11a94d67 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94d6b je 0x11a954c8 */
  if (C.zf) goto L_11a954c8;
  /* 11a94d71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a94d76 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11a94d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94d7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94d7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a94d82 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a94d85 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11a94d88 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94d8c ja 0x11a954c3 */
  if ((!C.cf&&!C.zf)) goto L_11a954c3;
  /* 11a94d92 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11a94d95 jmp dword ptr [ecx*4 + 0x11a956da] */
  switch (ECX) {
    case 0: goto L_11a94d9c;
    case 1: goto L_11a94e3a;
    case 2: goto L_11a94ef0;
    case 3: goto L_11a94f5b;
    case 4: goto L_11a95073;
    case 5: goto L_11a951a5;
    case 6: goto L_11a9521b;
    case 7: goto L_11a95300;
    case 8: goto L_11a952a2;
    case 9: goto L_11a95353;
    case 10: goto L_11a954c3;
    case 11: goto L_11a9545f;
    case 12: goto L_11a94ec9;
    case 13: goto L_11a94eb7;
    case 14: goto L_11a94ec0;
    case 15: goto L_11a94edb;
    default: x86_unimpl("switch@0x11a94d95 out of table"); return;
  }
L_11a94d9c:;
  /* 11a94d9c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94da0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94da3 jl 0x11a94dc0 */
  if ((C.sf!=C.of)) goto L_11a94dc0;
  /* 11a94da5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94da9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94dac jg 0x11a94dc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a94dc0;
  /* 11a94dae mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11a94db5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94db8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94dbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a94dbe jmp 0x11a94e35 */
  goto L_11a94e35;
L_11a94dc0:;
  /* 11a94dc0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94dc4 movsx eax, byte ptr [0x11ab80d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ab80d4))));
  /* 11a94dcb cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94dcd jne 0x11a94dd8 */
  if (!C.zf) goto L_11a94dd8;
  /* 11a94dcf mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11a94dd6 jmp 0x11a94e35 */
  goto L_11a94e35;
L_11a94dd8:;
  /* 11a94dd8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11a94ddb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11a94de1 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a94de8 je 0x11a94e07 */
  if (C.zf) goto L_11a94e07;
  /* 11a94dea cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a94df1 je 0x11a94e16 */
  if (C.zf) goto L_11a94e16;
  /* 11a94df3 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a94dfa je 0x11a94dfe */
  if (C.zf) goto L_11a94dfe;
  /* 11a94dfc jmp 0x11a94e25 */
  goto L_11a94e25;
L_11a94dfe:;
  /* 11a94dfe mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11a94e05 jmp 0x11a94e35 */
  goto L_11a94e35;
L_11a94e07:;
  /* 11a94e07 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11a94e0e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a94e14 jmp 0x11a94e35 */
  goto L_11a94e35;
L_11a94e16:;
  /* 11a94e16 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11a94e1d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11a94e23 jmp 0x11a94e35 */
  goto L_11a94e35;
L_11a94e25:;
  /* 11a94e25 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a94e2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94e2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94e32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a94e35:;
  /* 11a94e35 jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a94e3a:;
  /* 11a94e3a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11a94e41 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94e45 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94e48 jl 0x11a94e68 */
  if ((C.sf!=C.of)) goto L_11a94e68;
  /* 11a94e4a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94e4e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94e51 jg 0x11a94e68 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a94e68;
  /* 11a94e53 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11a94e5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94e5d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94e60 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a94e63 jmp 0x11a94eeb */
  goto L_11a94eeb;
L_11a94e68:;
  /* 11a94e68 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94e6c movsx ecx, byte ptr [0x11ab80d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ab80d4))));
  /* 11a94e73 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94e75 jne 0x11a94e80 */
  if (!C.zf) goto L_11a94e80;
  /* 11a94e77 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11a94e7e jmp 0x11a94eeb */
  goto L_11a94eeb;
L_11a94e80:;
  /* 11a94e80 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94e84 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11a94e8a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11a94e90 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94e93 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11a94e99 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94ea0 ja 0x11a94edb */
  if ((!C.cf&&!C.zf)) goto L_11a94edb;
  /* 11a94ea2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11a94ea8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a94eaa mov cl, byte ptr [edx + 0x11a9571a] */
  CL = (r8((uint32_t)(EDX + 0x11a9571a)));
  /* 11a94eb0 jmp dword ptr [ecx*4 + 0x11a9570a] */
  switch (ECX) {
    case 0: goto L_11a94ec9;
    case 1: goto L_11a94eb7;
    case 2: goto L_11a94ec0;
    case 3: goto L_11a94edb;
    default: x86_unimpl("switch@0x11a94eb0 out of table"); return;
  }
L_11a94eb7:;
  /* 11a94eb7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11a94ebe jmp 0x11a94eeb */
  goto L_11a94eeb;
L_11a94ec0:;
  /* 11a94ec0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11a94ec7 jmp 0x11a94eeb */
  goto L_11a94eeb;
L_11a94ec9:;
  /* 11a94ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94ecc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94ecf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a94ed2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11a94ed9 jmp 0x11a94eeb */
  goto L_11a94eeb;
L_11a94edb:;
  /* 11a94edb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a94ee2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94ee5 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94ee8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a94eeb:;
  /* 11a94eeb jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a94ef0:;
  /* 11a94ef0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94ef4 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94ef7 jl 0x11a94f14 */
  if ((C.sf!=C.of)) goto L_11a94f14;
  /* 11a94ef9 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94efd cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94f00 jg 0x11a94f14 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a94f14;
  /* 11a94f02 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11a94f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94f0c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94f0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a94f12 jmp 0x11a94f56 */
  goto L_11a94f56;
L_11a94f14:;
  /* 11a94f14 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94f18 movsx eax, byte ptr [0x11ab80d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ab80d4))));
  /* 11a94f1f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94f21 jne 0x11a94f2c */
  if (!C.zf) goto L_11a94f2c;
  /* 11a94f23 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11a94f2a jmp 0x11a94f56 */
  goto L_11a94f56;
L_11a94f2c:;
  /* 11a94f2c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11a94f2f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11a94f35 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a94f3c je 0x11a94f40 */
  if (C.zf) goto L_11a94f40;
  /* 11a94f3e jmp 0x11a94f49 */
  goto L_11a94f49;
L_11a94f40:;
  /* 11a94f40 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11a94f47 jmp 0x11a94f56 */
  goto L_11a94f56;
L_11a94f49:;
  /* 11a94f49 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a94f50 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a94f53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a94f56:;
  /* 11a94f56 jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a94f5b:;
  /* 11a94f5b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11a94f62 jmp 0x11a94f75 */
  goto L_11a94f75;
L_11a94f64:;
  /* 11a94f64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94f67 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a94f69 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11a94f6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a94f6f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94f72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a94f75:;
  /* 11a94f75 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94f7c jle 0x11a94f99 */
  if ((C.zf||C.sf!=C.of)) goto L_11a94f99;
  /* 11a94f7e push 4 */
  push32((uint32_t)(0x4u));
  /* 11a94f80 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a94f83 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a94f88 push eax */
  push32((uint32_t)(EAX));
  /* 11a94f89 call 0x11a8e0d0 */
  push32(0x11a94f8eu); f_11a8e0d0();
  /* 11a94f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94f91 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11a94f97 jmp 0x11a94fb7 */
  goto L_11a94fb7;
L_11a94f99:;
  /* 11a94f99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a94f9c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a94fa2 mov edx, dword ptr [0x11ab7ec0] */
  EDX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a94fa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a94faa mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11a94fae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a94fb1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11a94fb7:;
  /* 11a94fb7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94fbe je 0x11a94ff4 */
  if (C.zf) goto L_11a94ff4;
  /* 11a94fc0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a94fc4 jae 0x11a94fe6 */
  if (!C.cf) goto L_11a94fe6;
  /* 11a94fc6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a94fc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94fcc mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11a94fcf movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94fd3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a94fd6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a94fd9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a94fdb mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a94fde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94fe1 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11a94fe4 jmp 0x11a94fef */
  goto L_11a94fef;
L_11a94fe6:;
  /* 11a94fe6 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a94fe9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a94fec mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11a94fef:;
  /* 11a94fef jmp 0x11a94f64 */
  goto L_11a94f64;
L_11a94ff4:;
  /* 11a94ff4 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a94ff8 movsx ecx, byte ptr [0x11ab80d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11ab80d4))));
  /* 11a94fff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95001 jne 0x11a9500c */
  if (!C.zf) goto L_11a9500c;
  /* 11a95003 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11a9500a jmp 0x11a9506e */
  goto L_11a9506e;
L_11a9500c:;
  /* 11a9500c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a95010 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11a95016 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a9501c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9501f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11a95025 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9502c ja 0x11a9505e */
  if ((!C.cf&&!C.zf)) goto L_11a9505e;
  /* 11a9502e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a95034 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a95036 mov cl, byte ptr [edx + 0x11a95761] */
  CL = (r8((uint32_t)(EDX + 0x11a95761)));
  /* 11a9503c jmp dword ptr [ecx*4 + 0x11a95755] */
  switch (ECX) {
    case 0: goto L_11a9504c;
    case 1: goto L_11a95043;
    case 2: goto L_11a9505e;
    default: x86_unimpl("switch@0x11a9503c out of table"); return;
  }
L_11a95043:;
  /* 11a95043 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11a9504a jmp 0x11a9506e */
  goto L_11a9506e;
L_11a9504c:;
  /* 11a9504c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9504f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a95055 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11a9505c jmp 0x11a9506e */
  goto L_11a9506e;
L_11a9505e:;
  /* 11a9505e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a95065 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95068 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9506b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a9506e:;
  /* 11a9506e jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a95073:;
  /* 11a95073 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11a9507a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11a95081 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95085 jne 0x11a950ae */
  if (!C.zf) goto L_11a950ae;
  /* 11a95087 jmp 0x11a9509a */
  goto L_11a9509a;
L_11a95089:;
  /* 11a95089 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9508c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9508e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11a95091 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95094 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95097 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a9509a:;
  /* 11a9509a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a9509e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a950a1 jne 0x11a950ae */
  if (!C.zf) goto L_11a950ae;
  /* 11a950a3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a950a6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a950a9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11a950ac jmp 0x11a95089 */
  goto L_11a95089;
L_11a950ae:;
  /* 11a950ae jmp 0x11a950c1 */
  goto L_11a950c1;
L_11a950b0:;
  /* 11a950b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a950b3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a950b5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11a950b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a950bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a950be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a950c1:;
  /* 11a950c1 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a950c8 jle 0x11a950e6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a950e6;
  /* 11a950ca push 4 */
  push32((uint32_t)(0x4u));
  /* 11a950cc mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a950cf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a950d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a950d6 call 0x11a8e0d0 */
  push32(0x11a950dbu); f_11a8e0d0();
  /* 11a950db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a950de mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11a950e4 jmp 0x11a95103 */
  goto L_11a95103;
L_11a950e6:;
  /* 11a950e6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a950e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a950ef mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a950f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a950f6 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a950fa and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a950fd mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11a95103:;
  /* 11a95103 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9510a je 0x11a9513e */
  if (C.zf) goto L_11a9513e;
  /* 11a9510c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95110 jae 0x11a95139 */
  if (!C.cf) goto L_11a95139;
  /* 11a95112 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a95115 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95118 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11a9511b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a9511f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95122 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a95125 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a95127 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a9512a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9512d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11a95130 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a95133 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95136 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11a95139:;
  /* 11a95139 jmp 0x11a950b0 */
  goto L_11a950b0;
L_11a9513e:;
  /* 11a9513e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a95142 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11a95148 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a9514e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95151 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11a95157 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9515e ja 0x11a95190 */
  if ((!C.cf&&!C.zf)) goto L_11a95190;
  /* 11a95160 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a95166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a95168 mov al, byte ptr [ecx + 0x11a957a8] */
  AL = (r8((uint32_t)(ECX + 0x11a957a8)));
  /* 11a9516e jmp dword ptr [eax*4 + 0x11a9579c] */
  switch (EAX) {
    case 0: goto L_11a9517e;
    case 1: goto L_11a95175;
    case 2: goto L_11a95190;
    default: x86_unimpl("switch@0x11a9516e out of table"); return;
  }
L_11a95175:;
  /* 11a95175 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11a9517c jmp 0x11a951a0 */
  goto L_11a951a0;
L_11a9517e:;
  /* 11a9517e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95181 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95184 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a95187 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11a9518e jmp 0x11a951a0 */
  goto L_11a951a0;
L_11a95190:;
  /* 11a95190 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a95197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9519a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9519d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a951a0:;
  /* 11a951a0 jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a951a5:;
  /* 11a951a5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11a951ac cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a951b3 jle 0x11a951d1 */
  if ((C.zf||C.sf!=C.of)) goto L_11a951d1;
  /* 11a951b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a951b7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a951ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a951c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a951c1 call 0x11a8e0d0 */
  push32(0x11a951c6u); f_11a8e0d0();
  /* 11a951c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a951c9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11a951cf jmp 0x11a951ee */
  goto L_11a951ee;
L_11a951d1:;
  /* 11a951d1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a951d4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a951da mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a951df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a951e1 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a951e5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a951e8 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11a951ee:;
  /* 11a951ee cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a951f5 je 0x11a95209 */
  if (C.zf) goto L_11a95209;
  /* 11a951f7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11a951fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95201 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95204 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a95207 jmp 0x11a95216 */
  goto L_11a95216;
L_11a95209:;
  /* 11a95209 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a95210 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a95213 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a95216:;
  /* 11a95216 jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a9521b:;
  /* 11a9521b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9521e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95221 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11a95224 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a95228 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9522b jl 0x11a95248 */
  if ((C.sf!=C.of)) goto L_11a95248;
  /* 11a9522d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a95231 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95234 jg 0x11a95248 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a95248;
  /* 11a95236 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11a9523d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95240 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95243 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a95246 jmp 0x11a9529d */
  goto L_11a9529d;
L_11a95248:;
  /* 11a95248 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11a9524b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11a95251 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a95258 je 0x11a95287 */
  if (C.zf) goto L_11a95287;
  /* 11a9525a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a95261 je 0x11a95277 */
  if (C.zf) goto L_11a95277;
  /* 11a95263 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9526a je 0x11a9526e */
  if (C.zf) goto L_11a9526e;
  /* 11a9526c jmp 0x11a95290 */
  goto L_11a95290;
L_11a9526e:;
  /* 11a9526e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11a95275 jmp 0x11a9529d */
  goto L_11a9529d;
L_11a95277:;
  /* 11a95277 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11a9527e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11a95285 jmp 0x11a9529d */
  goto L_11a9529d;
L_11a95287:;
  /* 11a95287 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11a9528e jmp 0x11a9529d */
  goto L_11a9529d;
L_11a95290:;
  /* 11a95290 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a95297 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a9529a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a9529d:;
  /* 11a9529d jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a952a2:;
  /* 11a952a2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11a952a9 jmp 0x11a952bc */
  goto L_11a952bc;
L_11a952ab:;
  /* 11a952ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a952ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a952b0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11a952b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a952b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a952b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a952bc:;
  /* 11a952bc movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a952c0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a952c3 jne 0x11a952c7 */
  if (!C.zf) goto L_11a952c7;
  /* 11a952c5 jmp 0x11a952ab */
  goto L_11a952ab;
L_11a952c7:;
  /* 11a952c7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a952cb cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a952ce jl 0x11a952eb */
  if ((C.sf!=C.of)) goto L_11a952eb;
  /* 11a952d0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a952d4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a952d7 jg 0x11a952eb */
  if ((!C.zf&&C.sf==C.of)) goto L_11a952eb;
  /* 11a952d9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11a952e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a952e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a952e6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a952e9 jmp 0x11a952fb */
  goto L_11a952fb;
L_11a952eb:;
  /* 11a952eb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a952f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a952f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a952f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a952fb:;
  /* 11a952fb jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a95300:;
  /* 11a95300 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a95304 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95307 jl 0x11a95324 */
  if ((C.sf!=C.of)) goto L_11a95324;
  /* 11a95309 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a9530d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95310 jg 0x11a95324 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a95324;
  /* 11a95312 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11a95319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9531c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9531f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a95322 jmp 0x11a9534e */
  goto L_11a9534e;
L_11a95324:;
  /* 11a95324 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11a95327 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11a9532d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a95334 je 0x11a95338 */
  if (C.zf) goto L_11a95338;
  /* 11a95336 jmp 0x11a95341 */
  goto L_11a95341;
L_11a95338:;
  /* 11a95338 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11a9533f jmp 0x11a9534e */
  goto L_11a9534e;
L_11a95341:;
  /* 11a95341 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a95348 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a9534b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a9534e:;
  /* 11a9534e jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a95353:;
  /* 11a95353 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11a9535a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11a95361 jmp 0x11a95374 */
  goto L_11a95374;
L_11a95363:;
  /* 11a95363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95366 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a95368 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11a9536b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9536e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95371 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a95374:;
  /* 11a95374 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9537b jle 0x11a95399 */
  if ((C.zf||C.sf!=C.of)) goto L_11a95399;
  /* 11a9537d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9537f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a95382 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95388 push edx */
  push32((uint32_t)(EDX));
  /* 11a95389 call 0x11a8e0d0 */
  push32(0x11a9538eu); f_11a8e0d0();
  /* 11a9538e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95391 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11a95397 jmp 0x11a953b6 */
  goto L_11a953b6;
L_11a95399:;
  /* 11a95399 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a9539c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a953a1 mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a953a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a953a9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a953ad and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a953b0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11a953b6:;
  /* 11a953b6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a953bd je 0x11a953e7 */
  if (C.zf) goto L_11a953e7;
  /* 11a953bf mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a953c2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a953c5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11a953c9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11a953cd mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11a953d0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a953d7 jle 0x11a953e2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a953e2;
  /* 11a953d9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11a953e0 jmp 0x11a953e7 */
  goto L_11a953e7;
L_11a953e2:;
  /* 11a953e2 jmp 0x11a95363 */
  goto L_11a95363;
L_11a953e7:;
  /* 11a953e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a953ea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a953ed jmp 0x11a95400 */
  goto L_11a95400;
L_11a953ef:;
  /* 11a953ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a953f2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a953f4 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11a953f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a953fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a953fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a95400:;
  /* 11a95400 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95407 jle 0x11a95425 */
  if ((C.zf||C.sf!=C.of)) goto L_11a95425;
  /* 11a95409 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9540b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a9540e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a95414 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95415 call 0x11a8e0d0 */
  push32(0x11a9541au); f_11a8e0d0();
  /* 11a9541a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9541d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11a95423 jmp 0x11a95442 */
  goto L_11a95442;
L_11a95425:;
  /* 11a95425 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a95428 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9542e mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a95433 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a95435 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a95439 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9543c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11a95442:;
  /* 11a95442 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95449 je 0x11a9544d */
  if (C.zf) goto L_11a9544d;
  /* 11a9544b jmp 0x11a953ef */
  goto L_11a953ef;
L_11a9544d:;
  /* 11a9544d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a95454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95457 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9545a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9545d jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a9545f:;
  /* 11a9545f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95463 je 0x11a954b3 */
  if (C.zf) goto L_11a954b3;
  /* 11a95465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95468 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9546b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11a9546e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11a95471 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11a95477 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9547e je 0x11a9549b */
  if (C.zf) goto L_11a9549b;
  /* 11a95480 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a95487 je 0x11a9548b */
  if (C.zf) goto L_11a9548b;
  /* 11a95489 jmp 0x11a954a4 */
  goto L_11a954a4;
L_11a9548b:;
  /* 11a9548b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11a95492 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11a95499 jmp 0x11a954b1 */
  goto L_11a954b1;
L_11a9549b:;
  /* 11a9549b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11a954a2 jmp 0x11a954b1 */
  goto L_11a954b1;
L_11a954a4:;
  /* 11a954a4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a954ab mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a954ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a954b1:;
  /* 11a954b1 jmp 0x11a954c3 */
  goto L_11a954c3;
L_11a954b3:;
  /* 11a954b3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11a954ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a954bd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a954c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a954c3:;
  /* 11a954c3 jmp 0x11a94d67 */
  goto L_11a94d67;
L_11a954c8:;
  /* 11a954c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a954cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a954ce mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a954d0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a954d4 je 0x11a95617 */
  if (C.zf) goto L_11a95617;
  /* 11a954da cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a954de jne 0x11a95617 */
  if (!C.zf) goto L_11a95617;
  /* 11a954e4 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a954e8 jne 0x11a95617 */
  if (!C.zf) goto L_11a95617;
  /* 11a954ee cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a954f2 jbe 0x11a9551f */
  if ((C.cf||C.zf)) goto L_11a9551f;
  /* 11a954f4 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11a954f8 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a954fb jl 0x11a95506 */
  if ((C.sf!=C.of)) goto L_11a95506;
  /* 11a954fd mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11a95500 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a95503 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11a95506:;
  /* 11a95506 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11a9550d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a95510 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95513 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11a95516 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a95519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9551c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11a9551f:;
  /* 11a9551f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95523 jbe 0x11a955fa */
  if ((C.cf||C.zf)) goto L_11a955fa;
  /* 11a95529 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a9552c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9552f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11a95532 jmp 0x11a9553d */
  goto L_11a9553d;
L_11a95534:;
  /* 11a95534 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a95537 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9553a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11a9553d:;
  /* 11a9553d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a95540 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a95543 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a95545 jne 0x11a9555b */
  if (!C.zf) goto L_11a9555b;
  /* 11a95547 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a9554a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9554d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11a95550 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a95553 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95556 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11a95559 jmp 0x11a95534 */
  goto L_11a95534;
L_11a9555b:;
  /* 11a9555b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11a9555e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9555f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a95562 push edx */
  push32((uint32_t)(EDX));
  /* 11a95563 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11a95566 push eax */
  push32((uint32_t)(EAX));
  /* 11a95567 call 0x11a94b80 */
  push32(0x11a9556cu); f_11a94b80();
  /* 11a9556c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9556f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95573 jge 0x11a9557d */
  if ((C.sf==C.of)) goto L_11a9557d;
  /* 11a95575 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a95578 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9557a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11a9557d:;
  /* 11a9557d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a95580 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95583 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a95586 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9558a jne 0x11a95595 */
  if (!C.zf) goto L_11a95595;
  /* 11a9558c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9558f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95592 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11a95595:;
  /* 11a95595 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95599 jne 0x11a955a4 */
  if (!C.zf) goto L_11a955a4;
  /* 11a9559b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9559e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a955a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11a955a4:;
  /* 11a955a4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a955ab jle 0x11a955b6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a955b6;
  /* 11a955ad mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11a955b4 jmp 0x11a955f8 */
  goto L_11a955f8;
L_11a955b6:;
  /* 11a955b6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a955bd jge 0x11a955c8 */
  if ((C.sf==C.of)) goto L_11a955c8;
  /* 11a955bf mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11a955c6 jmp 0x11a955f8 */
  goto L_11a955f8;
L_11a955c8:;
  /* 11a955c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a955cb push edx */
  push32((uint32_t)(EDX));
  /* 11a955cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a955cf push eax */
  push32((uint32_t)(EAX));
  /* 11a955d0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11a955d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a955d4 call 0x11a98c00 */
  push32(0x11a955d9u); f_11a98c00();
  /* 11a955d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a955dc mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11a955e0 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11a955e4 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11a955e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a955ea mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11a955ed mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a955f0 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11a955f4 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11a955f8:;
  /* 11a955f8 jmp 0x11a95617 */
  goto L_11a95617;
L_11a955fa:;
  /* 11a955fa mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11a95600 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11a95606 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a95609 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9560e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a95611 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a95614 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a95617:;
  /* 11a95617 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9561b jne 0x11a95646 */
  if (!C.zf) goto L_11a95646;
  /* 11a9561d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11a95623 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11a95629 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a9562c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95632 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a95635 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a95638 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9563b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a9563e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a95641 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11a95644 jmp 0x11a9569d */
  goto L_11a9569d;
L_11a95646:;
  /* 11a95646 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9564a je 0x11a95671 */
  if (C.zf) goto L_11a95671;
  /* 11a9564c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11a95652 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11a95659 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a95660 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11a95666 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a95669 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9566c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11a9566f jmp 0x11a9569d */
  goto L_11a9569d;
L_11a95671:;
  /* 11a95671 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95675 je 0x11a9569d */
  if (C.zf) goto L_11a9569d;
  /* 11a95677 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11a9567d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11a95683 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a95686 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9568b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a9568e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a95691 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a95694 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a95697 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9569a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11a9569d:;
  /* 11a9569d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a956a0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11a956a4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11a956a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a956aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a956ad mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11a956b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a956b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a956b6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11a956b9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a956bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a956c1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a956c4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a956ca or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a956cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a956cf mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11a956d3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a956d6 mov esp, ebp */
  ESP = (EBP);
  /* 11a956d8 pop ebp */
  EBP = (pop32());
  /* 11a956d9 ret  */
  ESPCHK(0x11a94cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157f0 @ 0x11a957f0 (79 bytes, 33 insns) */
void f_11a957f0(void) {
  FTRACE(0x11a957f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a957f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a957f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a957f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a957f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a957f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a957fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a957fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a957ff push eax */
  push32((uint32_t)(EAX));
  /* 11a95800 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a95803 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95804 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a95807 push edx */
  push32((uint32_t)(EDX));
  /* 11a95808 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a9580b push eax */
  push32((uint32_t)(EAX));
  /* 11a9580c call 0x11a94cc0 */
  push32(0x11a95811u); f_11a94cc0();
  /* 11a95811 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95814 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a95817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9581a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9581b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a9581e push edx */
  push32((uint32_t)(EDX));
  /* 11a9581f call 0x11a8e9d0 */
  push32(0x11a95824u); f_11a8e9d0();
  /* 11a95824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95827 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a9582a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9582e jne 0x11a95838 */
  if (!C.zf) goto L_11a95838;
  /* 11a95830 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a95833 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a95835 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11a95838:;
  /* 11a95838 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9583b mov esp, ebp */
  ESP = (EBP);
  /* 11a9583d pop ebp */
  EBP = (pop32());
  /* 11a9583e ret  */
  ESPCHK(0x11a957f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015840 @ 0x11a95840 (1302 bytes, 386 insns) */
void f_11a95840(void) {
  FTRACE(0x11a95840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a95840 push ebp */
  push32((uint32_t)(EBP));
  /* 11a95841 mov ebp, esp */
  EBP = (ESP);
  /* 11a95843 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95846 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11a9584c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11a95852 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11a95858 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11a9585f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11a95863 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11a95867 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11a9586b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11a9586f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11a95873 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11a95877 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11a9587b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11a9587f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11a95883 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11a95887 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11a9588b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11a9588f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11a95896 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11a9589a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11a9589e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a958a1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a958a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a958a7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11a958aa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a958ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a958b2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a958b7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11a958bb mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11a958bf and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11a958c4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11a958c8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a958cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a958d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a958d3 je 0x11a958de */
  if (C.zf) goto L_11a958de;
  /* 11a958d5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a958d8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11a958dc jmp 0x11a958e5 */
  goto L_11a958e5;
L_11a958de:;
  /* 11a958de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a958e1 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11a958e5:;
  /* 11a958e5 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a958e8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a958ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a958f0 jne 0x11a9592c */
  if (!C.zf) goto L_11a9592c;
  /* 11a958f2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a958f6 jne 0x11a9592c */
  if (!C.zf) goto L_11a9592c;
  /* 11a958f8 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a958fc jne 0x11a9592c */
  if (!C.zf) goto L_11a9592c;
  /* 11a958fe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95901 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11a95906 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95909 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11a9590d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95910 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11a95914 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95917 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11a9591b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9591e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11a95922 mov eax, 1 */
  EAX = (0x1u);
  /* 11a95927 jmp 0x11a95d52 */
  goto L_11a95d52;
L_11a9592c:;
  /* 11a9592c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a9592f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95935 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9593b jne 0x11a95a26 */
  if (!C.zf) goto L_11a95a26;
  /* 11a95941 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95944 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11a95949 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95950 jne 0x11a95958 */
  if (!C.zf) goto L_11a95958;
  /* 11a95952 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95956 je 0x11a9598c */
  if (C.zf) goto L_11a9598c;
L_11a95958:;
  /* 11a95958 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9595b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a95961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a95963 jne 0x11a9598c */
  if (!C.zf) goto L_11a9598c;
  /* 11a95965 push 0x11ab53f8 */
  push32((uint32_t)(0x11ab53f8u));
  /* 11a9596a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9596d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95970 push edx */
  push32((uint32_t)(EDX));
  /* 11a95971 call 0x11a8c790 */
  push32(0x11a95976u); f_11a8c790();
  /* 11a95976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95979 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9597c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11a95980 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11a95987 jmp 0x11a95a21 */
  goto L_11a95a21;
L_11a9598c:;
  /* 11a9598c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11a9598f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a95995 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a95997 je 0x11a959cc */
  if (C.zf) goto L_11a959cc;
  /* 11a95999 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a959a0 jne 0x11a959cc */
  if (!C.zf) goto L_11a959cc;
  /* 11a959a2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a959a6 jne 0x11a959cc */
  if (!C.zf) goto L_11a959cc;
  /* 11a959a8 push 0x11ab53f0 */
  push32((uint32_t)(0x11ab53f0u));
  /* 11a959ad mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a959b0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a959b3 push edx */
  push32((uint32_t)(EDX));
  /* 11a959b4 call 0x11a8c790 */
  push32(0x11a959b9u); f_11a8c790();
  /* 11a959b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a959bc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a959bf mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11a959c3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11a959ca jmp 0x11a95a21 */
  goto L_11a95a21;
L_11a959cc:;
  /* 11a959cc cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a959d3 jne 0x11a959ff */
  if (!C.zf) goto L_11a959ff;
  /* 11a959d5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a959d9 jne 0x11a959ff */
  if (!C.zf) goto L_11a959ff;
  /* 11a959db push 0x11ab53e8 */
  push32((uint32_t)(0x11ab53e8u));
  /* 11a959e0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a959e3 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a959e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a959e7 call 0x11a8c790 */
  push32(0x11a959ecu); f_11a8c790();
  /* 11a959ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a959ef mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a959f2 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11a959f6 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11a959fd jmp 0x11a95a21 */
  goto L_11a95a21;
L_11a959ff:;
  /* 11a959ff push 0x11ab53e0 */
  push32((uint32_t)(0x11ab53e0u));
  /* 11a95a04 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95a07 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95a0a push eax */
  push32((uint32_t)(EAX));
  /* 11a95a0b call 0x11a8c790 */
  push32(0x11a95a10u); f_11a8c790();
  /* 11a95a10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95a13 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95a16 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11a95a1a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11a95a21:;
  /* 11a95a21 jmp 0x11a95d4f */
  goto L_11a95d4f;
L_11a95a26:;
  /* 11a95a26 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a95a29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95a2f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11a95a32 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11a95a36 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a95a39 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95a3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95a43 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11a95a47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a95a4a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11a95a4d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11a95a51 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11a95a54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95a5a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11a95a5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95a62 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a95a65 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a95a68 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a95a6e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a95a71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95a76 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a95a79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95a7b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11a95a7e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a95a84 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a95a87 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95a8c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a95a8f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95a91 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95a94 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a95a97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95a9a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11a95a9d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11a95aa1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11a95aa5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11a95aa9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a95aac mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11a95aaf mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11a95ab2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11a95ab5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11a95abb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a95abd movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11a95ac1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a95ac3 push edx */
  push32((uint32_t)(EDX));
  /* 11a95ac4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11a95ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11a95ac8 call 0x11a98c00 */
  push32(0x11a95acdu); f_11a98c00();
  /* 11a95acd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95ad0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11a95ad3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a95ad9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95adf jl 0x11a95afd */
  if ((C.sf!=C.of)) goto L_11a95afd;
  /* 11a95ae1 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11a95ae5 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a95ae9 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11a95aed lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11a95af0 push eax */
  push32((uint32_t)(EAX));
  /* 11a95af1 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11a95af4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95af5 call 0x11a987c0 */
  push32(0x11a95afau); f_11a987c0();
  /* 11a95afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a95afd:;
  /* 11a95afd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95b00 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11a95b04 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11a95b07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a95b0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a95b0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a95b0f je 0x11a95b51 */
  if (C.zf) goto L_11a95b51;
  /* 11a95b11 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11a95b15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a95b18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95b1a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11a95b1d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95b21 jg 0x11a95b51 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a95b51;
  /* 11a95b23 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95b26 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11a95b2b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95b2e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11a95b32 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95b35 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11a95b39 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95b3c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11a95b40 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95b43 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11a95b47 mov eax, 1 */
  EAX = (0x1u);
  /* 11a95b4c jmp 0x11a95d52 */
  goto L_11a95d52;
L_11a95b51:;
  /* 11a95b51 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95b55 jle 0x11a95b5e */
  if ((C.zf||C.sf!=C.of)) goto L_11a95b5e;
  /* 11a95b57 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11a95b5e:;
  /* 11a95b5e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11a95b61 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95b66 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95b6b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11a95b6e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11a95b74 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11a95b7b jmp 0x11a95b86 */
  goto L_11a95b86;
L_11a95b7d:;
  /* 11a95b7d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a95b80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95b83 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11a95b86:;
  /* 11a95b86 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95b8a jge 0x11a95b9a */
  if ((C.sf==C.of)) goto L_11a95b9a;
  /* 11a95b8c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11a95b8f push edx */
  push32((uint32_t)(EDX));
  /* 11a95b90 call 0x11a94ab0 */
  push32(0x11a95b95u); f_11a94ab0();
  /* 11a95b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95b98 jmp 0x11a95b7d */
  goto L_11a95b7d;
L_11a95b9a:;
  /* 11a95b9a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95b9e jge 0x11a95bcc */
  if ((C.sf==C.of)) goto L_11a95bcc;
  /* 11a95ba0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a95ba3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a95ba5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95baa mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11a95bad jmp 0x11a95bb8 */
  goto L_11a95bb8;
L_11a95baf:;
  /* 11a95baf mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11a95bb2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95bb5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11a95bb8:;
  /* 11a95bb8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95bbc jle 0x11a95bcc */
  if ((C.zf||C.sf!=C.of)) goto L_11a95bcc;
  /* 11a95bbe lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11a95bc1 push edx */
  push32((uint32_t)(EDX));
  /* 11a95bc2 call 0x11a94b10 */
  push32(0x11a95bc7u); f_11a94b10();
  /* 11a95bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95bca jmp 0x11a95baf */
  goto L_11a95baf;
L_11a95bcc:;
  /* 11a95bcc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95bcf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95bd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a95bd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a95bd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95bdb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a95bde jmp 0x11a95be9 */
  goto L_11a95be9;
L_11a95be0:;
  /* 11a95be0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a95be3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95be6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a95be9:;
  /* 11a95be9 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95bed jle 0x11a95c55 */
  if ((C.zf||C.sf!=C.of)) goto L_11a95c55;
  /* 11a95bef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a95bf2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a95bf5 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a95bf8 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a95bfb mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a95bfe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a95c01 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11a95c04 push eax */
  push32((uint32_t)(EAX));
  /* 11a95c05 call 0x11a94ab0 */
  push32(0x11a95c0au); f_11a94ab0();
  /* 11a95c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c0d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11a95c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95c11 call 0x11a94ab0 */
  push32(0x11a95c16u); f_11a94ab0();
  /* 11a95c16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c19 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11a95c1c push edx */
  push32((uint32_t)(EDX));
  /* 11a95c1d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11a95c20 push eax */
  push32((uint32_t)(EAX));
  /* 11a95c21 call 0x11a94a00 */
  push32(0x11a95c26u); f_11a94a00();
  /* 11a95c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c29 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11a95c2c push ecx */
  push32((uint32_t)(ECX));
  /* 11a95c2d call 0x11a94ab0 */
  push32(0x11a95c32u); f_11a94ab0();
  /* 11a95c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c35 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11a95c38 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95c3e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c44 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a95c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a95c4f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11a95c53 jmp 0x11a95be0 */
  goto L_11a95be0;
L_11a95c55:;
  /* 11a95c55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c58 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95c5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a95c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c61 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a95c63 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11a95c66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95c6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a95c6f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11a95c73 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95c76 jl 0x11a95cd3 */
  if ((C.sf!=C.of)) goto L_11a95cd3;
  /* 11a95c78 jmp 0x11a95c83 */
  goto L_11a95c83;
L_11a95c7a:;
  /* 11a95c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c7d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95c80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a95c83:;
  /* 11a95c83 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95c86 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95c89 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95c8c jb 0x11a95ca1 */
  if (C.cf) goto L_11a95ca1;
  /* 11a95c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a95c94 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95c97 jne 0x11a95ca1 */
  if (!C.zf) goto L_11a95ca1;
  /* 11a95c99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95c9c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11a95c9f jmp 0x11a95c7a */
  goto L_11a95c7a;
L_11a95ca1:;
  /* 11a95ca1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95ca4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95ca7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95caa jae 0x11a95cc5 */
  if (!C.cf) goto L_11a95cc5;
  /* 11a95cac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95caf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95cb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a95cb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95cb8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a95cbb add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a95cbf mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95cc2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11a95cc5:;
  /* 11a95cc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95cc8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a95cca add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a95ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95ccf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a95cd1 jmp 0x11a95d2c */
  goto L_11a95d2c;
L_11a95cd3:;
  /* 11a95cd3 jmp 0x11a95cde */
  goto L_11a95cde;
L_11a95cd5:;
  /* 11a95cd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95cd8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95cdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a95cde:;
  /* 11a95cde mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95ce1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95ce4 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95ce7 jb 0x11a95cf6 */
  if (C.cf) goto L_11a95cf6;
  /* 11a95ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95cec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a95cef cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95cf2 jne 0x11a95cf6 */
  if (!C.zf) goto L_11a95cf6;
  /* 11a95cf4 jmp 0x11a95cd5 */
  goto L_11a95cd5;
L_11a95cf6:;
  /* 11a95cf6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95cf9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95cfc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95cff jae 0x11a95d2c */
  if (!C.cf) goto L_11a95d2c;
  /* 11a95d01 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d04 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11a95d09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d0c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11a95d10 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d13 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11a95d17 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d1a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11a95d1e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d21 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11a95d25 mov eax, 1 */
  EAX = (0x1u);
  /* 11a95d2a jmp 0x11a95d52 */
  goto L_11a95d52;
L_11a95d2c:;
  /* 11a95d2c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d2f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95d35 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95d37 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95d3a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d3d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11a95d40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d43 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11a95d47 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a95d4a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11a95d4f:;
  /* 11a95d4f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11a95d52:;
  /* 11a95d52 mov esp, ebp */
  ESP = (EBP);
  /* 11a95d54 pop ebp */
  EBP = (pop32());
  /* 11a95d55 ret  */
  ESPCHK(0x11a95840u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d60 @ 0x11a95d60 (130 bytes, 50 insns) */
void f_11a95d60(void) {
  FTRACE(0x11a95d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a95d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a95d61 mov ebp, esp */
  EBP = (ESP);
  /* 11a95d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95d64 push ebx */
  push32((uint32_t)(EBX));
  /* 11a95d65 push esi */
  push32((uint32_t)(ESI));
  /* 11a95d66 push edi */
  push32((uint32_t)(EDI));
  /* 11a95d67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a95d6e:;
  /* 11a95d6e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95d72 jne 0x11a95d92 */
  if (!C.zf) goto L_11a95d92;
  /* 11a95d74 push 0x11ab540c */
  push32((uint32_t)(0x11ab540cu));
  /* 11a95d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a95d7b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a95d7d push 0x11ab5400 */
  push32((uint32_t)(0x11ab5400u));
  /* 11a95d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a95d84 call 0x11a868a0 */
  push32(0x11a95d89u); f_11a868a0();
  /* 11a95d89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95d8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95d8f jne 0x11a95d92 */
  if (!C.zf) goto L_11a95d92;
  /* 11a95d91 int3  */
  x86_unimpl("int3 @ 0x11a95d91");
L_11a95d92:;
  /* 11a95d92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a95d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a95d96 jne 0x11a95d6e */
  if (!C.zf) goto L_11a95d6e;
  /* 11a95d98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95d9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a95d9e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11a95da1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a95da3 je 0x11a95db1 */
  if (C.zf) goto L_11a95db1;
  /* 11a95da5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95da8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11a95daf jmp 0x11a95dd8 */
  goto L_11a95dd8;
L_11a95db1:;
  /* 11a95db1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95db5 call 0x11a8d7c0 */
  push32(0x11a95dbau); f_11a8d7c0();
  /* 11a95dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95dc0 push edx */
  push32((uint32_t)(EDX));
  /* 11a95dc1 call 0x11a95df0 */
  push32(0x11a95dc6u); f_11a95df0();
  /* 11a95dc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95dc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a95dcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95dcf push eax */
  push32((uint32_t)(EAX));
  /* 11a95dd0 call 0x11a8d830 */
  push32(0x11a95dd5u); f_11a8d830();
  /* 11a95dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a95dd8:;
  /* 11a95dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95ddb pop edi */
  EDI = (pop32());
  /* 11a95ddc pop esi */
  ESI = (pop32());
  /* 11a95ddd pop ebx */
  EBX = (pop32());
  /* 11a95dde mov esp, ebp */
  ESP = (EBP);
  /* 11a95de0 pop ebp */
  EBP = (pop32());
  /* 11a95de1 ret  */
  ESPCHK(0x11a95d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015df0 @ 0x11a95df0 (190 bytes, 67 insns) */
void f_11a95df0(void) {
  FTRACE(0x11a95df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a95df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a95df1 mov ebp, esp */
  EBP = (ESP);
  /* 11a95df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a95df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a95df7 push esi */
  push32((uint32_t)(ESI));
  /* 11a95df8 push edi */
  push32((uint32_t)(EDI));
  /* 11a95df9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a95e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95e03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a95e06:;
  /* 11a95e06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95e0a jne 0x11a95e2a */
  if (!C.zf) goto L_11a95e2a;
  /* 11a95e0c push 0x11ab46a0 */
  push32((uint32_t)(0x11ab46a0u));
  /* 11a95e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a95e13 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11a95e15 push 0x11ab5400 */
  push32((uint32_t)(0x11ab5400u));
  /* 11a95e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a95e1c call 0x11a868a0 */
  push32(0x11a95e21u); f_11a868a0();
  /* 11a95e21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95e27 jne 0x11a95e2a */
  if (!C.zf) goto L_11a95e2a;
  /* 11a95e29 int3  */
  x86_unimpl("int3 @ 0x11a95e29");
L_11a95e2a:;
  /* 11a95e2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a95e2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a95e2e jne 0x11a95e06 */
  if (!C.zf) goto L_11a95e06;
  /* 11a95e30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e33 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a95e36 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11a95e3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a95e3d je 0x11a95e9a */
  if (C.zf) goto L_11a95e9a;
  /* 11a95e3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e42 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95e43 call 0x11a92ae0 */
  push32(0x11a95e48u); f_11a92ae0();
  /* 11a95e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95e4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a95e4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e51 push edx */
  push32((uint32_t)(EDX));
  /* 11a95e52 call 0x11a98e00 */
  push32(0x11a95e57u); f_11a98e00();
  /* 11a95e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95e5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a95e60 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95e61 call 0x11a98cd0 */
  push32(0x11a95e66u); f_11a98cd0();
  /* 11a95e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a95e6b jge 0x11a95e76 */
  if ((C.sf==C.of)) goto L_11a95e76;
  /* 11a95e6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a95e74 jmp 0x11a95e9a */
  goto L_11a95e9a;
L_11a95e76:;
  /* 11a95e76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e79 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95e7d je 0x11a95e9a */
  if (C.zf) goto L_11a95e9a;
  /* 11a95e7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a95e81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e84 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11a95e87 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95e88 call 0x11a8a270 */
  push32(0x11a95e8du); f_11a8a270();
  /* 11a95e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95e90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e93 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11a95e9a:;
  /* 11a95e9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a95e9d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11a95ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95ea7 pop edi */
  EDI = (pop32());
  /* 11a95ea8 pop esi */
  ESI = (pop32());
  /* 11a95ea9 pop ebx */
  EBX = (pop32());
  /* 11a95eaa mov esp, ebp */
  ESP = (EBP);
  /* 11a95eac pop ebp */
  EBP = (pop32());
  /* 11a95ead ret  */
  ESPCHK(0x11a95df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015eb0 @ 0x11a95eb0 (210 bytes, 63 insns) */
void f_11a95eb0(void) {
  FTRACE(0x11a95eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a95eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a95eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a95eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95eb7 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95ebd jae 0x11a95ee1 */
  if (!C.cf) goto L_11a95ee1;
  /* 11a95ebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95ec2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a95ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95ec8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a95ecb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a95ece mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a95ed5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a95eda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a95edd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a95edf jne 0x11a95ef4 */
  if (!C.zf) goto L_11a95ef4;
L_11a95ee1:;
  /* 11a95ee1 call 0x11a92370 */
  push32(0x11a95ee6u); f_11a92370();
  /* 11a95ee6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a95eec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a95eef jmp 0x11a95f7e */
  goto L_11a95f7e;
L_11a95ef4:;
  /* 11a95ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11a95ef8 call 0x11a928a0 */
  push32(0x11a95efdu); f_11a928a0();
  /* 11a95efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95f03 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a95f06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95f09 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a95f0c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a95f0f mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a95f16 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11a95f1b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a95f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a95f20 je 0x11a95f5d */
  if (C.zf) goto L_11a95f5d;
  /* 11a95f22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95f25 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95f26 call 0x11a92720 */
  push32(0x11a95f2bu); f_11a92720();
  /* 11a95f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95f2e push eax */
  push32((uint32_t)(EAX));
  /* 11a95f2f call dword ptr [0x11abc304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc304))), 0x11a95f35u);
  /* 11a95f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a95f37 jne 0x11a95f44 */
  if (!C.zf) goto L_11a95f44;
  /* 11a95f39 call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a95f3fu);
  /* 11a95f3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a95f42 jmp 0x11a95f4b */
  goto L_11a95f4b;
L_11a95f44:;
  /* 11a95f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a95f4b:;
  /* 11a95f4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95f4f jne 0x11a95f53 */
  if (!C.zf) goto L_11a95f53;
  /* 11a95f51 jmp 0x11a95f6f */
  goto L_11a95f6f;
L_11a95f53:;
  /* 11a95f53 call 0x11a92380 */
  push32(0x11a95f58u); f_11a92380();
  /* 11a95f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95f5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a95f5d:;
  /* 11a95f5d call 0x11a92370 */
  push32(0x11a95f62u); f_11a92370();
  /* 11a95f62 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a95f68 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a95f6f:;
  /* 11a95f6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a95f72 push eax */
  push32((uint32_t)(EAX));
  /* 11a95f73 call 0x11a92930 */
  push32(0x11a95f78u); f_11a92930();
  /* 11a95f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a95f7e:;
  /* 11a95f7e mov esp, ebp */
  ESP = (EBP);
  /* 11a95f80 pop ebp */
  EBP = (pop32());
  /* 11a95f81 ret  */
  ESPCHK(0x11a95eb0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11a95f90 (219 bytes, 64 insns) */
void f_11a95f90(void) {
  FTRACE(0x11a95f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a95f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a95f91 mov ebp, esp */
  EBP = (ESP);
  /* 11a95f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11a95f94 cmp dword ptr [0x11aba2d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95f9b je 0x11a96031 */
  if (C.zf) goto L_11a96031;
  /* 11a95fa1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11a95fa3 push 0x11ab541c */
  push32((uint32_t)(0x11ab541cu));
  /* 11a95fa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a95faa push 0xac */
  push32((uint32_t)(0xacu));
  /* 11a95faf push 1 */
  push32((uint32_t)(0x1u));
  /* 11a95fb1 call 0x11a89bf0 */
  push32(0x11a95fb6u); f_11a89bf0();
  /* 11a95fb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95fb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a95fbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a95fc0 jne 0x11a95fcc */
  if (!C.zf) goto L_11a95fcc;
  /* 11a95fc2 mov eax, 1 */
  EAX = (0x1u);
  /* 11a95fc7 jmp 0x11a96067 */
  goto L_11a96067;
L_11a95fcc:;
  /* 11a95fcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95fcf push eax */
  push32((uint32_t)(EAX));
  /* 11a95fd0 call 0x11a96070 */
  push32(0x11a95fd5u); f_11a96070();
  /* 11a95fd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a95fda je 0x11a95ffd */
  if (C.zf) goto L_11a95ffd;
  /* 11a95fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11a95fe0 call 0x11a96600 */
  push32(0x11a95fe5u); f_11a96600();
  /* 11a95fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95fe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a95fea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a95fed push edx */
  push32((uint32_t)(EDX));
  /* 11a95fee call 0x11a8a270 */
  push32(0x11a95ff3u); f_11a8a270();
  /* 11a95ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a95ff6 mov eax, 1 */
  EAX = (0x1u);
  /* 11a95ffb jmp 0x11a96067 */
  goto L_11a96067;
L_11a95ffd:;
  /* 11a95ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96000 mov dword ptr [0x11ab8ed0], eax */
  w32((uint32_t)(0x11ab8ed0), (EAX));
  /* 11a96005 mov ecx, dword ptr [0x11aba2e8] */
  ECX = (r32((uint32_t)(0x11aba2e8)));
  /* 11a9600b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9600c call 0x11a96600 */
  push32(0x11a96011u); f_11a96600();
  /* 11a96011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96014 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96016 mov edx, dword ptr [0x11aba2e8] */
  EDX = (r32((uint32_t)(0x11aba2e8)));
  /* 11a9601c push edx */
  push32((uint32_t)(EDX));
  /* 11a9601d call 0x11a8a270 */
  push32(0x11a96022u); f_11a8a270();
  /* 11a96022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96028 mov dword ptr [0x11aba2e8], eax */
  w32((uint32_t)(0x11aba2e8), (EAX));
  /* 11a9602d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9602f jmp 0x11a96067 */
  goto L_11a96067;
L_11a96031:;
  /* 11a96031 mov dword ptr [0x11ab8ed0], 0x11ab8ed8 */
  w32((uint32_t)(0x11ab8ed0), (0x11ab8ed8u));
  /* 11a9603b mov ecx, dword ptr [0x11aba2e8] */
  ECX = (r32((uint32_t)(0x11aba2e8)));
  /* 11a96041 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96042 call 0x11a96600 */
  push32(0x11a96047u); f_11a96600();
  /* 11a96047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9604a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9604c mov edx, dword ptr [0x11aba2e8] */
  EDX = (r32((uint32_t)(0x11aba2e8)));
  /* 11a96052 push edx */
  push32((uint32_t)(EDX));
  /* 11a96053 call 0x11a8a270 */
  push32(0x11a96058u); f_11a8a270();
  /* 11a96058 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9605b mov dword ptr [0x11aba2e8], 0 */
  w32((uint32_t)(0x11aba2e8), (0x0u));
  /* 11a96065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a96067:;
  /* 11a96067 mov esp, ebp */
  ESP = (EBP);
  /* 11a96069 pop ebp */
  EBP = (pop32());
  /* 11a9606a ret  */
  ESPCHK(0x11a95f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10016070 @ 0x11a96070 (1423 bytes, 533 insns) */
void f_11a96070(void) {
  FTRACE(0x11a96070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96070 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96071 mov ebp, esp */
  EBP = (ESP);
  /* 11a96073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a96076 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a9607d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9607f mov ax, word ptr [0x11aba322] */
  AX = (r16((uint32_t)(0x11aba322)));
  /* 11a96085 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a96088 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9608a mov cx, word ptr [0x11aba324] */
  CX = (r16((uint32_t)(0x11aba324)));
  /* 11a96091 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96094 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96098 jne 0x11a960a2 */
  if (!C.zf) goto L_11a960a2;
  /* 11a9609a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9609d jmp 0x11a965fb */
  goto L_11a965fb;
L_11a960a2:;
  /* 11a960a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a960a5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a960a8 push edx */
  push32((uint32_t)(EDX));
  /* 11a960a9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11a960ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a960ae push eax */
  push32((uint32_t)(EAX));
  /* 11a960af push 1 */
  push32((uint32_t)(0x1u));
  /* 11a960b1 call 0x11a9a310 */
  push32(0x11a960b6u); f_11a9a310();
  /* 11a960b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a960b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a960bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a960be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a960c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a960c4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a960c7 push edx */
  push32((uint32_t)(EDX));
  /* 11a960c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a960ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a960cd push eax */
  push32((uint32_t)(EAX));
  /* 11a960ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11a960d0 call 0x11a9a310 */
  push32(0x11a960d5u); f_11a9a310();
  /* 11a960d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a960d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a960db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a960dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a960e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a960e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a960e6 push edx */
  push32((uint32_t)(EDX));
  /* 11a960e7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a960e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a960ec push eax */
  push32((uint32_t)(EAX));
  /* 11a960ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11a960ef call 0x11a9a310 */
  push32(0x11a960f4u); f_11a9a310();
  /* 11a960f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a960f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a960fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a960fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a960ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96102 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96105 push edx */
  push32((uint32_t)(EDX));
  /* 11a96106 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a96108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9610b push eax */
  push32((uint32_t)(EAX));
  /* 11a9610c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9610e call 0x11a9a310 */
  push32(0x11a96113u); f_11a9a310();
  /* 11a96113 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96116 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96119 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9611b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9611e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96121 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96124 push edx */
  push32((uint32_t)(EDX));
  /* 11a96125 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11a96127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9612a push eax */
  push32((uint32_t)(EAX));
  /* 11a9612b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9612d call 0x11a9a310 */
  push32(0x11a96132u); f_11a9a310();
  /* 11a96132 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96135 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96138 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9613a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9613d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96140 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96143 push edx */
  push32((uint32_t)(EDX));
  /* 11a96144 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11a96146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96149 push eax */
  push32((uint32_t)(EAX));
  /* 11a9614a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9614c call 0x11a9a310 */
  push32(0x11a96151u); f_11a9a310();
  /* 11a96151 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96154 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96157 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96159 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9615c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9615f push edx */
  push32((uint32_t)(EDX));
  /* 11a96160 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11a96162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96165 push eax */
  push32((uint32_t)(EAX));
  /* 11a96166 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96168 call 0x11a9a310 */
  push32(0x11a9616du); f_11a9a310();
  /* 11a9616d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96170 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96173 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96175 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96178 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9617b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9617e push edx */
  push32((uint32_t)(EDX));
  /* 11a9617f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11a96181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96184 push eax */
  push32((uint32_t)(EAX));
  /* 11a96185 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96187 call 0x11a9a310 */
  push32(0x11a9618cu); f_11a9a310();
  /* 11a9618c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9618f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96192 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96194 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9619a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9619d push edx */
  push32((uint32_t)(EDX));
  /* 11a9619e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11a961a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a961a3 push eax */
  push32((uint32_t)(EAX));
  /* 11a961a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a961a6 call 0x11a9a310 */
  push32(0x11a961abu); f_11a9a310();
  /* 11a961ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a961ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a961b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a961b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a961b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a961b9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a961bc push edx */
  push32((uint32_t)(EDX));
  /* 11a961bd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11a961bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a961c2 push eax */
  push32((uint32_t)(EAX));
  /* 11a961c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a961c5 call 0x11a9a310 */
  push32(0x11a961cau); f_11a9a310();
  /* 11a961ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a961cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a961d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a961d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a961d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a961d8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a961db push edx */
  push32((uint32_t)(EDX));
  /* 11a961dc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11a961de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a961e1 push eax */
  push32((uint32_t)(EAX));
  /* 11a961e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a961e4 call 0x11a9a310 */
  push32(0x11a961e9u); f_11a9a310();
  /* 11a961e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a961ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a961ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a961f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a961f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a961f7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a961fa push edx */
  push32((uint32_t)(EDX));
  /* 11a961fb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11a961fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96200 push eax */
  push32((uint32_t)(EAX));
  /* 11a96201 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96203 call 0x11a9a310 */
  push32(0x11a96208u); f_11a9a310();
  /* 11a96208 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9620b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9620e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96210 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96216 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96219 push edx */
  push32((uint32_t)(EDX));
  /* 11a9621a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11a9621c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9621f push eax */
  push32((uint32_t)(EAX));
  /* 11a96220 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96222 call 0x11a9a310 */
  push32(0x11a96227u); f_11a9a310();
  /* 11a96227 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9622a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9622d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9622f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96232 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96235 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96238 push edx */
  push32((uint32_t)(EDX));
  /* 11a96239 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11a9623b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9623e push eax */
  push32((uint32_t)(EAX));
  /* 11a9623f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96241 call 0x11a9a310 */
  push32(0x11a96246u); f_11a9a310();
  /* 11a96246 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96249 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9624c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9624e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96254 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96257 push edx */
  push32((uint32_t)(EDX));
  /* 11a96258 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11a9625a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9625d push eax */
  push32((uint32_t)(EAX));
  /* 11a9625e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96260 call 0x11a9a310 */
  push32(0x11a96265u); f_11a9a310();
  /* 11a96265 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96268 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9626b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9626d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96270 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96273 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96276 push edx */
  push32((uint32_t)(EDX));
  /* 11a96277 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11a96279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9627c push eax */
  push32((uint32_t)(EAX));
  /* 11a9627d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9627f call 0x11a9a310 */
  push32(0x11a96284u); f_11a9a310();
  /* 11a96284 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96287 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9628a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9628c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9628f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96292 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96295 push edx */
  push32((uint32_t)(EDX));
  /* 11a96296 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a96298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9629b push eax */
  push32((uint32_t)(EAX));
  /* 11a9629c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9629e call 0x11a9a310 */
  push32(0x11a962a3u); f_11a9a310();
  /* 11a962a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a962a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a962a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a962ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a962ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a962b1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a962b4 push edx */
  push32((uint32_t)(EDX));
  /* 11a962b5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11a962b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a962ba push eax */
  push32((uint32_t)(EAX));
  /* 11a962bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a962bd call 0x11a9a310 */
  push32(0x11a962c2u); f_11a9a310();
  /* 11a962c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a962c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a962c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a962ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a962cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a962d0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a962d3 push edx */
  push32((uint32_t)(EDX));
  /* 11a962d4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11a962d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a962d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a962da push 1 */
  push32((uint32_t)(0x1u));
  /* 11a962dc call 0x11a9a310 */
  push32(0x11a962e1u); f_11a9a310();
  /* 11a962e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a962e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a962e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a962e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a962ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a962ef add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a962f2 push edx */
  push32((uint32_t)(EDX));
  /* 11a962f3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11a962f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a962f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a962f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a962fb call 0x11a9a310 */
  push32(0x11a96300u); f_11a9a310();
  /* 11a96300 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96303 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96306 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96308 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9630b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9630e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96311 push edx */
  push32((uint32_t)(EDX));
  /* 11a96312 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11a96314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96317 push eax */
  push32((uint32_t)(EAX));
  /* 11a96318 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9631a call 0x11a9a310 */
  push32(0x11a9631fu); f_11a9a310();
  /* 11a9631f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96322 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96325 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96327 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9632a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9632d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96330 push edx */
  push32((uint32_t)(EDX));
  /* 11a96331 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11a96333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96336 push eax */
  push32((uint32_t)(EAX));
  /* 11a96337 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96339 call 0x11a9a310 */
  push32(0x11a9633eu); f_11a9a310();
  /* 11a9633e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96341 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96344 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96346 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9634c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9634f push edx */
  push32((uint32_t)(EDX));
  /* 11a96350 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11a96352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96355 push eax */
  push32((uint32_t)(EAX));
  /* 11a96356 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96358 call 0x11a9a310 */
  push32(0x11a9635du); f_11a9a310();
  /* 11a9635d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96363 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96365 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96368 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9636b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9636e push edx */
  push32((uint32_t)(EDX));
  /* 11a9636f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11a96371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96374 push eax */
  push32((uint32_t)(EAX));
  /* 11a96375 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96377 call 0x11a9a310 */
  push32(0x11a9637cu); f_11a9a310();
  /* 11a9637c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9637f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96382 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96384 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9638a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9638d push edx */
  push32((uint32_t)(EDX));
  /* 11a9638e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11a96390 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96393 push eax */
  push32((uint32_t)(EAX));
  /* 11a96394 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96396 call 0x11a9a310 */
  push32(0x11a9639bu); f_11a9a310();
  /* 11a9639b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9639e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a963a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a963a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a963a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a963a9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a963ac push edx */
  push32((uint32_t)(EDX));
  /* 11a963ad push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11a963af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a963b2 push eax */
  push32((uint32_t)(EAX));
  /* 11a963b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a963b5 call 0x11a9a310 */
  push32(0x11a963bau); f_11a9a310();
  /* 11a963ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a963bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a963c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a963c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a963c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a963c8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a963cb push edx */
  push32((uint32_t)(EDX));
  /* 11a963cc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11a963ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a963d1 push eax */
  push32((uint32_t)(EAX));
  /* 11a963d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a963d4 call 0x11a9a310 */
  push32(0x11a963d9u); f_11a9a310();
  /* 11a963d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a963dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a963df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a963e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a963e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a963e7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a963ea push edx */
  push32((uint32_t)(EDX));
  /* 11a963eb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11a963ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a963f0 push eax */
  push32((uint32_t)(EAX));
  /* 11a963f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a963f3 call 0x11a9a310 */
  push32(0x11a963f8u); f_11a9a310();
  /* 11a963f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a963fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a963fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96400 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96406 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96409 push edx */
  push32((uint32_t)(EDX));
  /* 11a9640a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a9640c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9640f push eax */
  push32((uint32_t)(EAX));
  /* 11a96410 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96412 call 0x11a9a310 */
  push32(0x11a96417u); f_11a9a310();
  /* 11a96417 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9641a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9641d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9641f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96425 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96428 push edx */
  push32((uint32_t)(EDX));
  /* 11a96429 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11a9642b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9642e push eax */
  push32((uint32_t)(EAX));
  /* 11a9642f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96431 call 0x11a9a310 */
  push32(0x11a96436u); f_11a9a310();
  /* 11a96436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96439 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9643c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9643e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96444 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96447 push edx */
  push32((uint32_t)(EDX));
  /* 11a96448 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11a9644a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9644d push eax */
  push32((uint32_t)(EAX));
  /* 11a9644e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96450 call 0x11a9a310 */
  push32(0x11a96455u); f_11a9a310();
  /* 11a96455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96458 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9645b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9645d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96463 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96466 push edx */
  push32((uint32_t)(EDX));
  /* 11a96467 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11a96469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9646c push eax */
  push32((uint32_t)(EAX));
  /* 11a9646d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9646f call 0x11a9a310 */
  push32(0x11a96474u); f_11a9a310();
  /* 11a96474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96477 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9647a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9647c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9647f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96482 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96488 push edx */
  push32((uint32_t)(EDX));
  /* 11a96489 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11a9648b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9648e push eax */
  push32((uint32_t)(EAX));
  /* 11a9648f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96491 call 0x11a9a310 */
  push32(0x11a96496u); f_11a9a310();
  /* 11a96496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96499 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9649c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9649e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a964a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a964a4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a964aa push edx */
  push32((uint32_t)(EDX));
  /* 11a964ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a964ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a964b0 push eax */
  push32((uint32_t)(EAX));
  /* 11a964b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a964b3 call 0x11a9a310 */
  push32(0x11a964b8u); f_11a9a310();
  /* 11a964b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a964bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a964be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a964c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a964c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a964c6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a964cc push edx */
  push32((uint32_t)(EDX));
  /* 11a964cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a964cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a964d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a964d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a964d5 call 0x11a9a310 */
  push32(0x11a964dau); f_11a9a310();
  /* 11a964da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a964dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a964e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a964e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a964e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a964e8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a964ee push edx */
  push32((uint32_t)(EDX));
  /* 11a964ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11a964f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a964f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a964f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a964f7 call 0x11a9a310 */
  push32(0x11a964fcu); f_11a9a310();
  /* 11a964fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a964ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96502 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96504 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9650a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96510 push edx */
  push32((uint32_t)(EDX));
  /* 11a96511 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11a96513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96516 push eax */
  push32((uint32_t)(EAX));
  /* 11a96517 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96519 call 0x11a9a310 */
  push32(0x11a9651eu); f_11a9a310();
  /* 11a9651e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96521 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96524 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96526 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a96529 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9652c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96532 push edx */
  push32((uint32_t)(EDX));
  /* 11a96533 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11a96535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96538 push eax */
  push32((uint32_t)(EAX));
  /* 11a96539 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9653b call 0x11a9a310 */
  push32(0x11a96540u); f_11a9a310();
  /* 11a96540 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96543 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96546 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96548 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9654b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9654e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96554 push edx */
  push32((uint32_t)(EDX));
  /* 11a96555 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11a96557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9655a push eax */
  push32((uint32_t)(EAX));
  /* 11a9655b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9655d call 0x11a9a310 */
  push32(0x11a96562u); f_11a9a310();
  /* 11a96562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a96568 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9656a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9656d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96570 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96576 push edx */
  push32((uint32_t)(EDX));
  /* 11a96577 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11a96579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9657c push eax */
  push32((uint32_t)(EAX));
  /* 11a9657d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9657f call 0x11a9a310 */
  push32(0x11a96584u); f_11a9a310();
  /* 11a96584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96587 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9658a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9658c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9658f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96592 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96598 push edx */
  push32((uint32_t)(EDX));
  /* 11a96599 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11a9659b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9659e push eax */
  push32((uint32_t)(EAX));
  /* 11a9659f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a965a1 call 0x11a9a310 */
  push32(0x11a965a6u); f_11a9a310();
  /* 11a965a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a965a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a965ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a965ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a965b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a965b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a965ba push edx */
  push32((uint32_t)(EDX));
  /* 11a965bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a965bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a965c0 push eax */
  push32((uint32_t)(EAX));
  /* 11a965c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a965c3 call 0x11a9a310 */
  push32(0x11a965c8u); f_11a9a310();
  /* 11a965c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a965cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a965ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a965d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a965d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a965d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a965dc push edx */
  push32((uint32_t)(EDX));
  /* 11a965dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11a965e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a965e5 push eax */
  push32((uint32_t)(EAX));
  /* 11a965e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a965e8 call 0x11a9a310 */
  push32(0x11a965edu); f_11a9a310();
  /* 11a965ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a965f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a965f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a965f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a965f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11a965fb:;
  /* 11a965fb mov esp, ebp */
  ESP = (EBP);
  /* 11a965fd pop ebp */
  EBP = (pop32());
  /* 11a965fe ret  */
  ESPCHK(0x11a96070u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11a96600 (779 bytes, 265 insns) */
void f_11a96600(void) {
  FTRACE(0x11a96600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96600 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96601 mov ebp, esp */
  EBP = (ESP);
  /* 11a96603 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96607 jne 0x11a9660e */
  if (!C.zf) goto L_11a9660e;
  /* 11a96609 jmp 0x11a96909 */
  goto L_11a96909;
L_11a9660e:;
  /* 11a9660e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96613 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a96616 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96617 call 0x11a8a270 */
  push32(0x11a9661cu); f_11a8a270();
  /* 11a9661c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9661f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96624 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a96627 push eax */
  push32((uint32_t)(EAX));
  /* 11a96628 call 0x11a8a270 */
  push32(0x11a9662du); f_11a8a270();
  /* 11a9662d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96630 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96635 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a96638 push edx */
  push32((uint32_t)(EDX));
  /* 11a96639 call 0x11a8a270 */
  push32(0x11a9663eu); f_11a8a270();
  /* 11a9663e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96641 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96646 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a96649 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9664a call 0x11a8a270 */
  push32(0x11a9664fu); f_11a8a270();
  /* 11a9664f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96652 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96657 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a9665a push eax */
  push32((uint32_t)(EAX));
  /* 11a9665b call 0x11a8a270 */
  push32(0x11a96660u); f_11a8a270();
  /* 11a96660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96663 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96668 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a9666b push edx */
  push32((uint32_t)(EDX));
  /* 11a9666c call 0x11a8a270 */
  push32(0x11a96671u); f_11a8a270();
  /* 11a96671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96674 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96679 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9667b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9667c call 0x11a8a270 */
  push32(0x11a96681u); f_11a8a270();
  /* 11a96681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96684 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96686 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96689 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11a9668c push eax */
  push32((uint32_t)(EAX));
  /* 11a9668d call 0x11a8a270 */
  push32(0x11a96692u); f_11a8a270();
  /* 11a96692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96695 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9669a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11a9669d push edx */
  push32((uint32_t)(EDX));
  /* 11a9669e call 0x11a8a270 */
  push32(0x11a966a3u); f_11a8a270();
  /* 11a966a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a966a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a966a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a966ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11a966ae push ecx */
  push32((uint32_t)(ECX));
  /* 11a966af call 0x11a8a270 */
  push32(0x11a966b4u); f_11a8a270();
  /* 11a966b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a966b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a966b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a966bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11a966bf push eax */
  push32((uint32_t)(EAX));
  /* 11a966c0 call 0x11a8a270 */
  push32(0x11a966c5u); f_11a8a270();
  /* 11a966c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a966c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a966ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a966cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11a966d0 push edx */
  push32((uint32_t)(EDX));
  /* 11a966d1 call 0x11a8a270 */
  push32(0x11a966d6u); f_11a8a270();
  /* 11a966d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a966d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a966db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a966de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11a966e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a966e2 call 0x11a8a270 */
  push32(0x11a966e7u); f_11a8a270();
  /* 11a966e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a966ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11a966ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a966ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a966f2 push eax */
  push32((uint32_t)(EAX));
  /* 11a966f3 call 0x11a8a270 */
  push32(0x11a966f8u); f_11a8a270();
  /* 11a966f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a966fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a966fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96700 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11a96703 push edx */
  push32((uint32_t)(EDX));
  /* 11a96704 call 0x11a8a270 */
  push32(0x11a96709u); f_11a8a270();
  /* 11a96709 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9670c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9670e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96711 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11a96714 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96715 call 0x11a8a270 */
  push32(0x11a9671au); f_11a8a270();
  /* 11a9671a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9671d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9671f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96722 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11a96725 push eax */
  push32((uint32_t)(EAX));
  /* 11a96726 call 0x11a8a270 */
  push32(0x11a9672bu); f_11a8a270();
  /* 11a9672b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9672e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96730 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96733 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11a96736 push edx */
  push32((uint32_t)(EDX));
  /* 11a96737 call 0x11a8a270 */
  push32(0x11a9673cu); f_11a8a270();
  /* 11a9673c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9673f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96744 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11a96747 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96748 call 0x11a8a270 */
  push32(0x11a9674du); f_11a8a270();
  /* 11a9674d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96750 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96752 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96755 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11a96758 push eax */
  push32((uint32_t)(EAX));
  /* 11a96759 call 0x11a8a270 */
  push32(0x11a9675eu); f_11a8a270();
  /* 11a9675e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96763 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96766 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11a96769 push edx */
  push32((uint32_t)(EDX));
  /* 11a9676a call 0x11a8a270 */
  push32(0x11a9676fu); f_11a8a270();
  /* 11a9676f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96772 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96777 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11a9677a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9677b call 0x11a8a270 */
  push32(0x11a96780u); f_11a8a270();
  /* 11a96780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96783 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96788 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11a9678b push eax */
  push32((uint32_t)(EAX));
  /* 11a9678c call 0x11a8a270 */
  push32(0x11a96791u); f_11a8a270();
  /* 11a96791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96794 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96796 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96799 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11a9679c push edx */
  push32((uint32_t)(EDX));
  /* 11a9679d call 0x11a8a270 */
  push32(0x11a967a2u); f_11a8a270();
  /* 11a967a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a967a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a967a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a967aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11a967ad push ecx */
  push32((uint32_t)(ECX));
  /* 11a967ae call 0x11a8a270 */
  push32(0x11a967b3u); f_11a8a270();
  /* 11a967b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a967b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a967b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a967bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11a967be push eax */
  push32((uint32_t)(EAX));
  /* 11a967bf call 0x11a8a270 */
  push32(0x11a967c4u); f_11a8a270();
  /* 11a967c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a967c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a967c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a967cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11a967cf push edx */
  push32((uint32_t)(EDX));
  /* 11a967d0 call 0x11a8a270 */
  push32(0x11a967d5u); f_11a8a270();
  /* 11a967d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a967d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a967da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a967dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11a967e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a967e1 call 0x11a8a270 */
  push32(0x11a967e6u); f_11a8a270();
  /* 11a967e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a967e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a967eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a967ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11a967f1 push eax */
  push32((uint32_t)(EAX));
  /* 11a967f2 call 0x11a8a270 */
  push32(0x11a967f7u); f_11a8a270();
  /* 11a967f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a967fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11a967fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a967ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11a96802 push edx */
  push32((uint32_t)(EDX));
  /* 11a96803 call 0x11a8a270 */
  push32(0x11a96808u); f_11a8a270();
  /* 11a96808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9680b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9680d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96810 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11a96813 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96814 call 0x11a8a270 */
  push32(0x11a96819u); f_11a8a270();
  /* 11a96819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9681c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9681e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96821 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11a96824 push eax */
  push32((uint32_t)(EAX));
  /* 11a96825 call 0x11a8a270 */
  push32(0x11a9682au); f_11a8a270();
  /* 11a9682a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9682d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9682f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96832 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11a96838 push edx */
  push32((uint32_t)(EDX));
  /* 11a96839 call 0x11a8a270 */
  push32(0x11a9683eu); f_11a8a270();
  /* 11a9683e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96841 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96846 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11a9684c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9684d call 0x11a8a270 */
  push32(0x11a96852u); f_11a8a270();
  /* 11a96852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96855 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9685a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11a96860 push eax */
  push32((uint32_t)(EAX));
  /* 11a96861 call 0x11a8a270 */
  push32(0x11a96866u); f_11a8a270();
  /* 11a96866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96869 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9686b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9686e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11a96874 push edx */
  push32((uint32_t)(EDX));
  /* 11a96875 call 0x11a8a270 */
  push32(0x11a9687au); f_11a8a270();
  /* 11a9687a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9687d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9687f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96882 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11a96888 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96889 call 0x11a8a270 */
  push32(0x11a9688eu); f_11a8a270();
  /* 11a9688e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96891 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96896 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11a9689c push eax */
  push32((uint32_t)(EAX));
  /* 11a9689d call 0x11a8a270 */
  push32(0x11a968a2u); f_11a8a270();
  /* 11a968a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a968a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a968a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a968aa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11a968b0 push edx */
  push32((uint32_t)(EDX));
  /* 11a968b1 call 0x11a8a270 */
  push32(0x11a968b6u); f_11a8a270();
  /* 11a968b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a968b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a968bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a968be mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11a968c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a968c5 call 0x11a8a270 */
  push32(0x11a968cau); f_11a8a270();
  /* 11a968ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a968cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a968cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a968d2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11a968d8 push eax */
  push32((uint32_t)(EAX));
  /* 11a968d9 call 0x11a8a270 */
  push32(0x11a968deu); f_11a8a270();
  /* 11a968de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a968e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a968e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a968e6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11a968ec push edx */
  push32((uint32_t)(EDX));
  /* 11a968ed call 0x11a8a270 */
  push32(0x11a968f2u); f_11a8a270();
  /* 11a968f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a968f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a968f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a968fa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11a96900 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96901 call 0x11a8a270 */
  push32(0x11a96906u); f_11a8a270();
  /* 11a96906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a96909:;
  /* 11a96909 pop ebp */
  EBP = (pop32());
  /* 11a9690a ret  */
  ESPCHK(0x11a96600u, _esp0);
  ESP += 4; return;
}

/* FUN_10016910 @ 0x11a96910 (678 bytes, 180 insns) */
void f_11a96910(void) {
  FTRACE(0x11a96910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96910 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96911 mov ebp, esp */
  EBP = (ESP);
  /* 11a96913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a96916 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a9691d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9691f mov ax, word ptr [0x11aba31e] */
  AX = (r16((uint32_t)(0x11aba31e)));
  /* 11a96925 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a96928 cmp dword ptr [0x11aba2d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9692f je 0x11a96a8a */
  if (C.zf) goto L_11a96a8a;
  /* 11a96935 push 0x11aba2ec */
  push32((uint32_t)(0x11aba2ecu));
  /* 11a9693a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a9693c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9693f push ecx */
  push32((uint32_t)(ECX));
  /* 11a96940 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96942 call 0x11a9a310 */
  push32(0x11a96947u); f_11a9a310();
  /* 11a96947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9694a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9694d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9694f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a96952 push 0x11aba2f0 */
  push32((uint32_t)(0x11aba2f0u));
  /* 11a96957 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a96959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9695c push eax */
  push32((uint32_t)(EAX));
  /* 11a9695d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9695f call 0x11a9a310 */
  push32(0x11a96964u); f_11a9a310();
  /* 11a96964 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96967 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9696a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9696c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9696f push 0x11aba2f4 */
  push32((uint32_t)(0x11aba2f4u));
  /* 11a96974 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a96976 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96979 push edx */
  push32((uint32_t)(EDX));
  /* 11a9697a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9697c call 0x11a9a310 */
  push32(0x11a96981u); f_11a9a310();
  /* 11a96981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96984 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96987 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96989 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9698c mov edx, dword ptr [0x11aba2f4] */
  EDX = (r32((uint32_t)(0x11aba2f4)));
  /* 11a96992 push edx */
  push32((uint32_t)(EDX));
  /* 11a96993 call 0x11a96bc0 */
  push32(0x11a96998u); f_11a96bc0();
  /* 11a96998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9699b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9699f je 0x11a969f9 */
  if (C.zf) goto L_11a969f9;
  /* 11a969a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a969a3 mov eax, dword ptr [0x11aba2ec] */
  EAX = (r32((uint32_t)(0x11aba2ec)));
  /* 11a969a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a969a9 call 0x11a8a270 */
  push32(0x11a969aeu); f_11a8a270();
  /* 11a969ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a969b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a969b3 mov ecx, dword ptr [0x11aba2f0] */
  ECX = (r32((uint32_t)(0x11aba2f0)));
  /* 11a969b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a969ba call 0x11a8a270 */
  push32(0x11a969bfu); f_11a8a270();
  /* 11a969bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a969c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a969c4 mov edx, dword ptr [0x11aba2f4] */
  EDX = (r32((uint32_t)(0x11aba2f4)));
  /* 11a969ca push edx */
  push32((uint32_t)(EDX));
  /* 11a969cb call 0x11a8a270 */
  push32(0x11a969d0u); f_11a8a270();
  /* 11a969d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a969d3 mov dword ptr [0x11aba2ec], 0 */
  w32((uint32_t)(0x11aba2ec), (0x0u));
  /* 11a969dd mov dword ptr [0x11aba2f0], 0 */
  w32((uint32_t)(0x11aba2f0), (0x0u));
  /* 11a969e7 mov dword ptr [0x11aba2f4], 0 */
  w32((uint32_t)(0x11aba2f4), (0x0u));
  /* 11a969f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a969f4 jmp 0x11a96bb2 */
  goto L_11a96bb2;
L_11a969f9:;
  /* 11a969f9 mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a969fe cmp dword ptr [eax], 0x11ab8f88 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11ab8f88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96a04 je 0x11a96a40 */
  if (C.zf) goto L_11a96a40;
  /* 11a96a06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96a08 mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a96a10 push edx */
  push32((uint32_t)(EDX));
  /* 11a96a11 call 0x11a8a270 */
  push32(0x11a96a16u); f_11a8a270();
  /* 11a96a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96a19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96a1b mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a20 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a96a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96a24 call 0x11a8a270 */
  push32(0x11a96a29u); f_11a8a270();
  /* 11a96a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96a2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96a2e mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a96a37 push eax */
  push32((uint32_t)(EAX));
  /* 11a96a38 call 0x11a8a270 */
  push32(0x11a96a3du); f_11a8a270();
  /* 11a96a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a96a40:;
  /* 11a96a40 mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a46 mov edx, dword ptr [0x11aba2ec] */
  EDX = (r32((uint32_t)(0x11aba2ec)));
  /* 11a96a4c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a96a4e mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a53 mov ecx, dword ptr [0x11aba2f0] */
  ECX = (r32((uint32_t)(0x11aba2f0)));
  /* 11a96a59 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a96a5c mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a62 mov eax, dword ptr [0x11aba2f4] */
  EAX = (r32((uint32_t)(0x11aba2f4)));
  /* 11a96a67 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a96a6a mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96a70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a96a72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a96a74 mov byte ptr [0x11ab80d4], al */
  w8((uint32_t)(0x11ab80d4), (AL));
  /* 11a96a79 mov dword ptr [0x11ab80d8], 1 */
  w32((uint32_t)(0x11ab80d8), (0x1u));
  /* 11a96a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a96a85 jmp 0x11a96bb2 */
  goto L_11a96bb2;
L_11a96a8a:;
  /* 11a96a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96a8c mov ecx, dword ptr [0x11aba2ec] */
  ECX = (r32((uint32_t)(0x11aba2ec)));
  /* 11a96a92 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96a93 call 0x11a8a270 */
  push32(0x11a96a98u); f_11a8a270();
  /* 11a96a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96a9d mov edx, dword ptr [0x11aba2f0] */
  EDX = (r32((uint32_t)(0x11aba2f0)));
  /* 11a96aa3 push edx */
  push32((uint32_t)(EDX));
  /* 11a96aa4 call 0x11a8a270 */
  push32(0x11a96aa9u); f_11a8a270();
  /* 11a96aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96aac push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96aae mov eax, dword ptr [0x11aba2f4] */
  EAX = (r32((uint32_t)(0x11aba2f4)));
  /* 11a96ab3 push eax */
  push32((uint32_t)(EAX));
  /* 11a96ab4 call 0x11a8a270 */
  push32(0x11a96ab9u); f_11a8a270();
  /* 11a96ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96abc mov dword ptr [0x11aba2ec], 0 */
  w32((uint32_t)(0x11aba2ec), (0x0u));
  /* 11a96ac6 mov dword ptr [0x11aba2f0], 0 */
  w32((uint32_t)(0x11aba2f0), (0x0u));
  /* 11a96ad0 mov dword ptr [0x11aba2f4], 0 */
  w32((uint32_t)(0x11aba2f4), (0x0u));
  /* 11a96ada push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11a96adf push 0x11ab5428 */
  push32((uint32_t)(0x11ab5428u));
  /* 11a96ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96ae8 call 0x11a897e0 */
  push32(0x11a96aedu); f_11a897e0();
  /* 11a96aed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96af0 mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96af6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a96af8 mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96afe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96b01 jne 0x11a96b0b */
  if (!C.zf) goto L_11a96b0b;
  /* 11a96b03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a96b06 jmp 0x11a96bb2 */
  goto L_11a96bb2;
L_11a96b0b:;
  /* 11a96b0b push 0x11ab52f4 */
  push32((uint32_t)(0x11ab52f4u));
  /* 11a96b10 mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b15 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a96b17 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96b18 call 0x11a8c790 */
  push32(0x11a96b1du); f_11a8c790();
  /* 11a96b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96b20 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11a96b25 push 0x11ab5428 */
  push32((uint32_t)(0x11ab5428u));
  /* 11a96b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96b2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96b2e call 0x11a897e0 */
  push32(0x11a96b33u); f_11a897e0();
  /* 11a96b33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96b36 mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b3c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11a96b3f mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b44 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96b48 jne 0x11a96b4f */
  if (!C.zf) goto L_11a96b4f;
  /* 11a96b4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a96b4d jmp 0x11a96bb2 */
  goto L_11a96bb2;
L_11a96b4f:;
  /* 11a96b4f mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a96b58 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a96b5b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11a96b60 push 0x11ab5428 */
  push32((uint32_t)(0x11ab5428u));
  /* 11a96b65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96b67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96b69 call 0x11a897e0 */
  push32(0x11a96b6eu); f_11a897e0();
  /* 11a96b6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96b71 mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b77 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a96b7a mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b80 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96b84 jne 0x11a96b8b */
  if (!C.zf) goto L_11a96b8b;
  /* 11a96b86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a96b89 jmp 0x11a96bb2 */
  goto L_11a96bb2;
L_11a96b8b:;
  /* 11a96b8b mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b90 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a96b93 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11a96b96 mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96b9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a96b9e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a96ba0 mov byte ptr [0x11ab80d4], cl */
  w8((uint32_t)(0x11ab80d4), (CL));
  /* 11a96ba6 mov dword ptr [0x11ab80d8], 1 */
  w32((uint32_t)(0x11ab80d8), (0x1u));
  /* 11a96bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a96bb2:;
  /* 11a96bb2 mov esp, ebp */
  ESP = (EBP);
  /* 11a96bb4 pop ebp */
  EBP = (pop32());
  /* 11a96bb5 ret  */
  ESPCHK(0x11a96910u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11a96bc0 (125 bytes, 49 insns) */
void f_11a96bc0(void) {
  FTRACE(0x11a96bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11a96bc3 push ecx */
  push32((uint32_t)(ECX));
L_11a96bc4:;
  /* 11a96bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96bc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a96bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a96bcc je 0x11a96c39 */
  if (C.zf) goto L_11a96c39;
  /* 11a96bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96bd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a96bd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96bd7 jl 0x11a96bfd */
  if ((C.sf!=C.of)) goto L_11a96bfd;
  /* 11a96bd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96bdc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a96bdf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96be2 jg 0x11a96bfd */
  if ((!C.zf&&C.sf==C.of)) goto L_11a96bfd;
  /* 11a96be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96be7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a96bea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a96bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96bf0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a96bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96bf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96bf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a96bfb jmp 0x11a96c37 */
  goto L_11a96c37;
L_11a96bfd:;
  /* 11a96bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96c00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a96c03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96c06 jne 0x11a96c2e */
  if (!C.zf) goto L_11a96c2e;
  /* 11a96c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96c0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a96c0e:;
  /* 11a96c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a96c17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a96c19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96c1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a96c22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a96c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a96c2a jne 0x11a96c0e */
  if (!C.zf) goto L_11a96c0e;
  /* 11a96c2c jmp 0x11a96c37 */
  goto L_11a96c37;
L_11a96c2e:;
  /* 11a96c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96c31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96c34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11a96c37:;
  /* 11a96c37 jmp 0x11a96bc4 */
  goto L_11a96bc4;
L_11a96c39:;
  /* 11a96c39 mov esp, ebp */
  ESP = (EBP);
  /* 11a96c3b pop ebp */
  EBP = (pop32());
  /* 11a96c3c ret  */
  ESPCHK(0x11a96bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c40 @ 0x11a96c40 (304 bytes, 85 insns) */
void f_11a96c40(void) {
  FTRACE(0x11a96c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96c41 mov ebp, esp */
  EBP = (ESP);
  /* 11a96c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96c44 cmp dword ptr [0x11aba2cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96c4b je 0x11a96d0c */
  if (C.zf) goto L_11a96d0c;
  /* 11a96c51 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11a96c53 push 0x11ab5434 */
  push32((uint32_t)(0x11ab5434u));
  /* 11a96c58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96c5a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11a96c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96c5e call 0x11a89bf0 */
  push32(0x11a96c63u); f_11a89bf0();
  /* 11a96c63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96c66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a96c69 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96c6d jne 0x11a96c79 */
  if (!C.zf) goto L_11a96c79;
  /* 11a96c6f mov eax, 1 */
  EAX = (0x1u);
  /* 11a96c74 jmp 0x11a96d6c */
  goto L_11a96d6c;
L_11a96c79:;
  /* 11a96c79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c7c push eax */
  push32((uint32_t)(EAX));
  /* 11a96c7d call 0x11a96d70 */
  push32(0x11a96c82u); f_11a96d70();
  /* 11a96c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96c85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a96c87 je 0x11a96cad */
  if (C.zf) goto L_11a96cad;
  /* 11a96c89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c8c push ecx */
  push32((uint32_t)(ECX));
  /* 11a96c8d call 0x11a97000 */
  push32(0x11a96c92u); f_11a97000();
  /* 11a96c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96c95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96c97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96c9a push edx */
  push32((uint32_t)(EDX));
  /* 11a96c9b call 0x11a8a270 */
  push32(0x11a96ca0u); f_11a8a270();
  /* 11a96ca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ca3 mov eax, 1 */
  EAX = (0x1u);
  /* 11a96ca8 jmp 0x11a96d6c */
  goto L_11a96d6c;
L_11a96cad:;
  /* 11a96cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96cb0 mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96cb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a96cb8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a96cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96cbd mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96cc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a96cc6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a96cc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96ccc mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96cd2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a96cd5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a96cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96cdb mov dword ptr [0x11ab8fc0], eax */
  w32((uint32_t)(0x11ab8fc0), (EAX));
  /* 11a96ce0 mov ecx, dword ptr [0x11aba2f8] */
  ECX = (r32((uint32_t)(0x11aba2f8)));
  /* 11a96ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96ce7 call 0x11a97000 */
  push32(0x11a96cecu); f_11a97000();
  /* 11a96cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96cef push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96cf1 mov edx, dword ptr [0x11aba2f8] */
  EDX = (r32((uint32_t)(0x11aba2f8)));
  /* 11a96cf7 push edx */
  push32((uint32_t)(EDX));
  /* 11a96cf8 call 0x11a8a270 */
  push32(0x11a96cfdu); f_11a8a270();
  /* 11a96cfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96d03 mov dword ptr [0x11aba2f8], eax */
  w32((uint32_t)(0x11aba2f8), (EAX));
  /* 11a96d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a96d0a jmp 0x11a96d6c */
  goto L_11a96d6c;
L_11a96d0c:;
  /* 11a96d0c mov ecx, dword ptr [0x11ab8fc0] */
  ECX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96d12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a96d14 mov dword ptr [0x11ab8f90], edx */
  w32((uint32_t)(0x11ab8f90), (EDX));
  /* 11a96d1a mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96d1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a96d22 mov dword ptr [0x11ab8f94], ecx */
  w32((uint32_t)(0x11ab8f94), (ECX));
  /* 11a96d28 mov edx, dword ptr [0x11ab8fc0] */
  EDX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a96d2e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a96d31 mov dword ptr [0x11ab8f98], eax */
  w32((uint32_t)(0x11ab8f98), (EAX));
  /* 11a96d36 mov dword ptr [0x11ab8fc0], 0x11ab8f90 */
  w32((uint32_t)(0x11ab8fc0), (0x11ab8f90u));
  /* 11a96d40 mov ecx, dword ptr [0x11aba2f8] */
  ECX = (r32((uint32_t)(0x11aba2f8)));
  /* 11a96d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96d47 call 0x11a97000 */
  push32(0x11a96d4cu); f_11a97000();
  /* 11a96d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a96d51 mov edx, dword ptr [0x11aba2f8] */
  EDX = (r32((uint32_t)(0x11aba2f8)));
  /* 11a96d57 push edx */
  push32((uint32_t)(EDX));
  /* 11a96d58 call 0x11a8a270 */
  push32(0x11a96d5du); f_11a8a270();
  /* 11a96d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96d60 mov dword ptr [0x11aba2f8], 0 */
  w32((uint32_t)(0x11aba2f8), (0x0u));
  /* 11a96d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a96d6c:;
  /* 11a96d6c mov esp, ebp */
  ESP = (EBP);
  /* 11a96d6e pop ebp */
  EBP = (pop32());
  /* 11a96d6f ret  */
  ESPCHK(0x11a96c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d70 @ 0x11a96d70 (525 bytes, 200 insns) */
void f_11a96d70(void) {
  FTRACE(0x11a96d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96d71 mov ebp, esp */
  EBP = (ESP);
  /* 11a96d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a96d76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a96d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a96d7f mov ax, word ptr [0x11aba318] */
  AX = (r16((uint32_t)(0x11aba318)));
  /* 11a96d85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a96d88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96d8c jne 0x11a96d96 */
  if (!C.zf) goto L_11a96d96;
  /* 11a96d8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a96d91 jmp 0x11a96f79 */
  goto L_11a96f79;
L_11a96d96:;
  /* 11a96d96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96d99 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96d9c push ecx */
  push32((uint32_t)(ECX));
  /* 11a96d9d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a96d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96da2 push edx */
  push32((uint32_t)(EDX));
  /* 11a96da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96da5 call 0x11a9a310 */
  push32(0x11a96daau); f_11a9a310();
  /* 11a96daa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96dad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96db0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96db2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96db8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96dbb push edx */
  push32((uint32_t)(EDX));
  /* 11a96dbc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11a96dbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11a96dc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96dc4 call 0x11a9a310 */
  push32(0x11a96dc9u); f_11a9a310();
  /* 11a96dc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96dcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96dcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96dd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96dd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96dda push edx */
  push32((uint32_t)(EDX));
  /* 11a96ddb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a96ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96de0 push eax */
  push32((uint32_t)(EAX));
  /* 11a96de1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96de3 call 0x11a9a310 */
  push32(0x11a96de8u); f_11a9a310();
  /* 11a96de8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96deb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96dee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96df0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96df6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96df9 push edx */
  push32((uint32_t)(EDX));
  /* 11a96dfa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a96dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96dff push eax */
  push32((uint32_t)(EAX));
  /* 11a96e00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96e02 call 0x11a9a310 */
  push32(0x11a96e07u); f_11a9a310();
  /* 11a96e07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96e0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96e0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96e12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96e15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e18 push edx */
  push32((uint32_t)(EDX));
  /* 11a96e19 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a96e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96e1e push eax */
  push32((uint32_t)(EAX));
  /* 11a96e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96e21 call 0x11a9a310 */
  push32(0x11a96e26u); f_11a9a310();
  /* 11a96e26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96e2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96e2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96e31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96e34 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a96e37 push eax */
  push32((uint32_t)(EAX));
  /* 11a96e38 call 0x11a96f80 */
  push32(0x11a96e3du); f_11a96f80();
  /* 11a96e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96e43 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e46 push ecx */
  push32((uint32_t)(ECX));
  /* 11a96e47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11a96e49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96e4c push edx */
  push32((uint32_t)(EDX));
  /* 11a96e4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96e4f call 0x11a9a310 */
  push32(0x11a96e54u); f_11a9a310();
  /* 11a96e54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96e5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96e5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96e5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96e62 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e65 push edx */
  push32((uint32_t)(EDX));
  /* 11a96e66 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11a96e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96e6b push eax */
  push32((uint32_t)(EAX));
  /* 11a96e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a96e6e call 0x11a9a310 */
  push32(0x11a96e73u); f_11a9a310();
  /* 11a96e73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96e79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96e7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96e7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96e81 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e84 push edx */
  push32((uint32_t)(EDX));
  /* 11a96e85 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a96e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96e8a push eax */
  push32((uint32_t)(EAX));
  /* 11a96e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96e8d call 0x11a9a310 */
  push32(0x11a96e92u); f_11a9a310();
  /* 11a96e92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96e98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96e9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96ea0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ea3 push edx */
  push32((uint32_t)(EDX));
  /* 11a96ea4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a96ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96ea9 push eax */
  push32((uint32_t)(EAX));
  /* 11a96eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96eac call 0x11a9a310 */
  push32(0x11a96eb1u); f_11a9a310();
  /* 11a96eb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96eb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96eb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96eb9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96ebf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ec2 push edx */
  push32((uint32_t)(EDX));
  /* 11a96ec3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11a96ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96ec8 push eax */
  push32((uint32_t)(EAX));
  /* 11a96ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96ecb call 0x11a9a310 */
  push32(0x11a96ed0u); f_11a9a310();
  /* 11a96ed0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ed3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96ed6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96ed8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96edb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96ede add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ee1 push edx */
  push32((uint32_t)(EDX));
  /* 11a96ee2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11a96ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96ee7 push eax */
  push32((uint32_t)(EAX));
  /* 11a96ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96eea call 0x11a9a310 */
  push32(0x11a96eefu); f_11a9a310();
  /* 11a96eef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ef2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96ef5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96ef7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96efa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96efd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f00 push edx */
  push32((uint32_t)(EDX));
  /* 11a96f01 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11a96f03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96f06 push eax */
  push32((uint32_t)(EAX));
  /* 11a96f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96f09 call 0x11a9a310 */
  push32(0x11a96f0eu); f_11a9a310();
  /* 11a96f0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96f14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96f16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96f19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96f1c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f1f push edx */
  push32((uint32_t)(EDX));
  /* 11a96f20 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11a96f22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96f25 push eax */
  push32((uint32_t)(EAX));
  /* 11a96f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96f28 call 0x11a9a310 */
  push32(0x11a96f2du); f_11a9a310();
  /* 11a96f2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96f33 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96f35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96f38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96f3b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f3e push edx */
  push32((uint32_t)(EDX));
  /* 11a96f3f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11a96f41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96f44 push eax */
  push32((uint32_t)(EAX));
  /* 11a96f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96f47 call 0x11a9a310 */
  push32(0x11a96f4cu); f_11a9a310();
  /* 11a96f4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96f52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96f54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96f57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96f5a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f5d push edx */
  push32((uint32_t)(EDX));
  /* 11a96f5e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11a96f60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96f63 push eax */
  push32((uint32_t)(EAX));
  /* 11a96f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a96f66 call 0x11a9a310 */
  push32(0x11a96f6bu); f_11a9a310();
  /* 11a96f6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96f6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a96f71 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a96f73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a96f76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a96f79:;
  /* 11a96f79 mov esp, ebp */
  ESP = (EBP);
  /* 11a96f7b pop ebp */
  EBP = (pop32());
  /* 11a96f7c ret  */
  ESPCHK(0x11a96d70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11a96f80 (125 bytes, 49 insns) */
void f_11a96f80(void) {
  FTRACE(0x11a96f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a96f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a96f81 mov ebp, esp */
  EBP = (ESP);
  /* 11a96f83 push ecx */
  push32((uint32_t)(ECX));
L_11a96f84:;
  /* 11a96f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96f87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a96f8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a96f8c je 0x11a96ff9 */
  if (C.zf) goto L_11a96ff9;
  /* 11a96f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96f91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a96f94 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96f97 jl 0x11a96fbd */
  if ((C.sf!=C.of)) goto L_11a96fbd;
  /* 11a96f99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96f9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a96f9f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96fa2 jg 0x11a96fbd */
  if ((!C.zf&&C.sf==C.of)) goto L_11a96fbd;
  /* 11a96fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96fa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a96faa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a96fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96fb0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a96fb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96fb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96fb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a96fbb jmp 0x11a96ff7 */
  goto L_11a96ff7;
L_11a96fbd:;
  /* 11a96fbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96fc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a96fc3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a96fc6 jne 0x11a96fee */
  if (!C.zf) goto L_11a96fee;
  /* 11a96fc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96fcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a96fce:;
  /* 11a96fce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96fd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96fd4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a96fd7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a96fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96fdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96fdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a96fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a96fe5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a96fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a96fea jne 0x11a96fce */
  if (!C.zf) goto L_11a96fce;
  /* 11a96fec jmp 0x11a96ff7 */
  goto L_11a96ff7;
L_11a96fee:;
  /* 11a96fee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a96ff1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a96ff4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11a96ff7:;
  /* 11a96ff7 jmp 0x11a96f84 */
  goto L_11a96f84;
L_11a96ff9:;
  /* 11a96ff9 mov esp, ebp */
  ESP = (EBP);
  /* 11a96ffb pop ebp */
  EBP = (pop32());
  /* 11a96ffc ret  */
  ESPCHK(0x11a96f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017000 @ 0x11a97000 (147 bytes, 52 insns) */
void f_11a97000(void) {
  FTRACE(0x11a97000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97000 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97001 mov ebp, esp */
  EBP = (ESP);
  /* 11a97003 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97007 jne 0x11a9700e */
  if (!C.zf) goto L_11a9700e;
  /* 11a97009 jmp 0x11a97091 */
  goto L_11a97091;
L_11a9700e:;
  /* 11a9700e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97011 cmp dword ptr [eax + 0xc], 0x11aba354 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11aba354u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97018 je 0x11a97091 */
  if (C.zf) goto L_11a97091;
  /* 11a9701a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9701c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9701f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a97022 push edx */
  push32((uint32_t)(EDX));
  /* 11a97023 call 0x11a8a270 */
  push32(0x11a97028u); f_11a8a270();
  /* 11a97028 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9702b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9702d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97030 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a97033 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97034 call 0x11a8a270 */
  push32(0x11a97039u); f_11a8a270();
  /* 11a97039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9703c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9703e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97041 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a97044 push eax */
  push32((uint32_t)(EAX));
  /* 11a97045 call 0x11a8a270 */
  push32(0x11a9704au); f_11a8a270();
  /* 11a9704a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9704d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9704f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97052 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a97055 push edx */
  push32((uint32_t)(EDX));
  /* 11a97056 call 0x11a8a270 */
  push32(0x11a9705bu); f_11a8a270();
  /* 11a9705b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9705e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97063 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11a97066 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97067 call 0x11a8a270 */
  push32(0x11a9706cu); f_11a8a270();
  /* 11a9706c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9706f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97074 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11a97077 push eax */
  push32((uint32_t)(EAX));
  /* 11a97078 call 0x11a8a270 */
  push32(0x11a9707du); f_11a8a270();
  /* 11a9707d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97080 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97085 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11a97088 push edx */
  push32((uint32_t)(EDX));
  /* 11a97089 call 0x11a8a270 */
  push32(0x11a9708eu); f_11a8a270();
  /* 11a9708e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97091:;
  /* 11a97091 pop ebp */
  EBP = (pop32());
  /* 11a97092 ret  */
  ESPCHK(0x11a97000u, _esp0);
  ESP += 4; return;
}

/* FUN_100170a0 @ 0x11a970a0 (928 bytes, 284 insns) */
void f_11a970a0(void) {
  FTRACE(0x11a970a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a970a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a970a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a970a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a970a6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11a970ad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11a970b4 cmp dword ptr [0x11aba2c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a970bb je 0x11a973f1 */
  if (C.zf) goto L_11a973f1;
  /* 11a970c1 cmp dword ptr [0x11aba2d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a970c8 jne 0x11a970f0 */
  if (!C.zf) goto L_11a970f0;
  /* 11a970ca push 0x11aba2d8 */
  push32((uint32_t)(0x11aba2d8u));
  /* 11a970cf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11a970d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a970d6 mov ax, word ptr [0x11aba310] */
  AX = (r16((uint32_t)(0x11aba310)));
  /* 11a970dc push eax */
  push32((uint32_t)(EAX));
  /* 11a970dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a970df call 0x11a9a310 */
  push32(0x11a970e4u); f_11a9a310();
  /* 11a970e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a970e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a970e9 je 0x11a970f0 */
  if (C.zf) goto L_11a970f0;
  /* 11a970eb jmp 0x11a973b2 */
  goto L_11a973b2;
L_11a970f0:;
  /* 11a970f0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a970f2 push 0x11ab5440 */
  push32((uint32_t)(0x11ab5440u));
  /* 11a970f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a970f9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11a970fe call 0x11a897e0 */
  push32(0x11a97103u); f_11a897e0();
  /* 11a97103 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97106 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11a97109 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a9710b push 0x11ab5440 */
  push32((uint32_t)(0x11ab5440u));
  /* 11a97110 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97112 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11a97117 call 0x11a897e0 */
  push32(0x11a9711cu); f_11a897e0();
  /* 11a9711c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9711f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a97122 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11a97124 push 0x11ab5440 */
  push32((uint32_t)(0x11ab5440u));
  /* 11a97129 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9712b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a97130 call 0x11a897e0 */
  push32(0x11a97135u); f_11a897e0();
  /* 11a97135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97138 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11a9713b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11a9713d push 0x11ab5440 */
  push32((uint32_t)(0x11ab5440u));
  /* 11a97142 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97144 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11a97149 call 0x11a897e0 */
  push32(0x11a9714eu); f_11a897e0();
  /* 11a9714e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97151 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a97154 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97158 je 0x11a9716c */
  if (C.zf) goto L_11a9716c;
  /* 11a9715a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9715e je 0x11a9716c */
  if (C.zf) goto L_11a9716c;
  /* 11a97160 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97164 je 0x11a9716c */
  if (C.zf) goto L_11a9716c;
  /* 11a97166 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9716a jne 0x11a97171 */
  if (!C.zf) goto L_11a97171;
L_11a9716c:;
  /* 11a9716c jmp 0x11a973b2 */
  goto L_11a973b2;
L_11a97171:;
  /* 11a97171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a97174 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a97177 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a9717e jmp 0x11a97189 */
  goto L_11a97189;
L_11a97180:;
  /* 11a97180 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a97183 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97186 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11a97189:;
  /* 11a97189 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97190 jge 0x11a971a5 */
  if ((C.sf==C.of)) goto L_11a971a5;
  /* 11a97192 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a97195 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11a97198 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11a9719a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9719d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a971a0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a971a3 jmp 0x11a97180 */
  goto L_11a97180;
L_11a971a5:;
  /* 11a971a5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a971a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a971a9 mov ecx, dword ptr [0x11aba2d8] */
  ECX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a971af push ecx */
  push32((uint32_t)(ECX));
  /* 11a971b0 call dword ptr [0x11abc330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc330))), 0x11a971b6u);
  /* 11a971b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a971b8 jne 0x11a971bf */
  if (!C.zf) goto L_11a971bf;
  /* 11a971ba jmp 0x11a973b2 */
  goto L_11a973b2;
L_11a971bf:;
  /* 11a971bf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a971c3 jbe 0x11a971ca */
  if ((C.cf||C.zf)) goto L_11a971ca;
  /* 11a971c5 jmp 0x11a973b2 */
  goto L_11a973b2;
L_11a971ca:;
  /* 11a971ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a971cd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a971d3 mov dword ptr [0x11ab80d0], edx */
  w32((uint32_t)(0x11ab80d0), (EDX));
  /* 11a971d9 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a971e0 jle 0x11a97239 */
  if ((C.zf||C.sf!=C.of)) goto L_11a97239;
  /* 11a971e2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11a971e5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a971e8 jmp 0x11a971f3 */
  goto L_11a971f3;
L_11a971ea:;
  /* 11a971ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a971ed add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a971f0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11a971f3:;
  /* 11a971f3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a971f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a971f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a971fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a971fc je 0x11a97239 */
  if (C.zf) goto L_11a97239;
  /* 11a971fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a97201 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a97203 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a97206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a97208 je 0x11a97239 */
  if (C.zf) goto L_11a97239;
  /* 11a9720a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9720d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9720f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a97211 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a97214 jmp 0x11a9721f */
  goto L_11a9721f;
L_11a97216:;
  /* 11a97216 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a97219 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9721c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11a9721f:;
  /* 11a9721f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a97222 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97224 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a97227 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9722a jg 0x11a97237 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a97237;
  /* 11a9722c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a9722f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97232 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a97235 jmp 0x11a97216 */
  goto L_11a97216;
L_11a97237:;
  /* 11a97237 jmp 0x11a971ea */
  goto L_11a971ea;
L_11a97239:;
  /* 11a97239 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9723b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9723d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9723f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a97242 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97245 push eax */
  push32((uint32_t)(EAX));
  /* 11a97246 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a9724b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a9724e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9724f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a97251 call 0x11a944a0 */
  push32(0x11a97256u); f_11a944a0();
  /* 11a97256 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9725b jne 0x11a97262 */
  if (!C.zf) goto L_11a97262;
  /* 11a9725d jmp 0x11a973b2 */
  goto L_11a973b2;
L_11a97262:;
  /* 11a97262 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a97265 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11a9726a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9726d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a97270 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a97277 jmp 0x11a97282 */
  goto L_11a97282;
L_11a97279:;
  /* 11a97279 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9727c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9727f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11a97282:;
  /* 11a97282 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97289 jge 0x11a972a0 */
  if ((C.sf==C.of)) goto L_11a972a0;
  /* 11a9728b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9728e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11a97292 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11a97295 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a97298 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9729b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a9729e jmp 0x11a97279 */
  goto L_11a97279;
L_11a972a0:;
  /* 11a972a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a972a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a972a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a972a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a972aa push edx */
  push32((uint32_t)(EDX));
  /* 11a972ab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a972b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a972b3 push eax */
  push32((uint32_t)(EAX));
  /* 11a972b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a972b6 call 0x11a9a5b0 */
  push32(0x11a972bbu); f_11a9a5b0();
  /* 11a972bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a972be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a972c0 jne 0x11a972c7 */
  if (!C.zf) goto L_11a972c7;
  /* 11a972c2 jmp 0x11a973b2 */
  goto L_11a973b2;
L_11a972c7:;
  /* 11a972c7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a972ca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11a972cf cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a972d6 jle 0x11a97333 */
  if ((C.zf||C.sf!=C.of)) goto L_11a97333;
  /* 11a972d8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11a972db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a972de jmp 0x11a972e9 */
  goto L_11a972e9;
L_11a972e0:;
  /* 11a972e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a972e3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a972e6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11a972e9:;
  /* 11a972e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a972ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a972ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a972f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a972f2 je 0x11a97333 */
  if (C.zf) goto L_11a97333;
  /* 11a972f4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a972f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a972f9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a972fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a972fe je 0x11a97333 */
  if (C.zf) goto L_11a97333;
  /* 11a97300 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a97303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97305 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a97307 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a9730a jmp 0x11a97315 */
  goto L_11a97315;
L_11a9730c:;
  /* 11a9730c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9730f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97312 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11a97315:;
  /* 11a97315 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a97318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9731a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a9731d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97320 jg 0x11a97331 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a97331;
  /* 11a97322 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a97325 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a97328 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11a9732f jmp 0x11a9730c */
  goto L_11a9730c;
L_11a97331:;
  /* 11a97331 jmp 0x11a972e0 */
  goto L_11a972e0;
L_11a97333:;
  /* 11a97333 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a97336 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97339 mov dword ptr [0x11ab7ec0], eax */
  w32((uint32_t)(0x11ab7ec0), (EAX));
  /* 11a9733e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a97341 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97344 mov dword ptr [0x11ab7ec4], ecx */
  w32((uint32_t)(0x11ab7ec4), (ECX));
  /* 11a9734a cmp dword ptr [0x11aba2fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97351 je 0x11a97364 */
  if (C.zf) goto L_11a97364;
  /* 11a97353 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97355 mov edx, dword ptr [0x11aba2fc] */
  EDX = (r32((uint32_t)(0x11aba2fc)));
  /* 11a9735b push edx */
  push32((uint32_t)(EDX));
  /* 11a9735c call 0x11a8a270 */
  push32(0x11a97361u); f_11a8a270();
  /* 11a97361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97364:;
  /* 11a97364 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a97367 mov dword ptr [0x11aba2fc], eax */
  w32((uint32_t)(0x11aba2fc), (EAX));
  /* 11a9736c cmp dword ptr [0x11aba300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97373 je 0x11a97386 */
  if (C.zf) goto L_11a97386;
  /* 11a97375 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97377 mov ecx, dword ptr [0x11aba300] */
  ECX = (r32((uint32_t)(0x11aba300)));
  /* 11a9737d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9737e call 0x11a8a270 */
  push32(0x11a97383u); f_11a8a270();
  /* 11a97383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97386:;
  /* 11a97386 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a97389 mov dword ptr [0x11aba300], edx */
  w32((uint32_t)(0x11aba300), (EDX));
  /* 11a9738f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97391 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a97394 push eax */
  push32((uint32_t)(EAX));
  /* 11a97395 call 0x11a8a270 */
  push32(0x11a9739au); f_11a8a270();
  /* 11a9739a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9739d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9739f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a973a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a973a3 call 0x11a8a270 */
  push32(0x11a973a8u); f_11a8a270();
  /* 11a973a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a973ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a973ad jmp 0x11a9743c */
  goto L_11a9743c;
L_11a973b2:;
  /* 11a973b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a973b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a973b7 push edx */
  push32((uint32_t)(EDX));
  /* 11a973b8 call 0x11a8a270 */
  push32(0x11a973bdu); f_11a8a270();
  /* 11a973bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a973c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a973c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a973c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a973c6 call 0x11a8a270 */
  push32(0x11a973cbu); f_11a8a270();
  /* 11a973cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a973ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11a973d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a973d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a973d4 call 0x11a8a270 */
  push32(0x11a973d9u); f_11a8a270();
  /* 11a973d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a973dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11a973de mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a973e1 push edx */
  push32((uint32_t)(EDX));
  /* 11a973e2 call 0x11a8a270 */
  push32(0x11a973e7u); f_11a8a270();
  /* 11a973e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a973ea mov eax, 1 */
  EAX = (0x1u);
  /* 11a973ef jmp 0x11a9743c */
  goto L_11a9743c;
L_11a973f1:;
  /* 11a973f1 mov dword ptr [0x11ab7ec0], 0x11ab7eca */
  w32((uint32_t)(0x11ab7ec0), (0x11ab7ecau));
  /* 11a973fb mov dword ptr [0x11ab7ec4], 0x11ab7eca */
  w32((uint32_t)(0x11ab7ec4), (0x11ab7ecau));
  /* 11a97405 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97407 mov eax, dword ptr [0x11aba2fc] */
  EAX = (r32((uint32_t)(0x11aba2fc)));
  /* 11a9740c push eax */
  push32((uint32_t)(EAX));
  /* 11a9740d call 0x11a8a270 */
  push32(0x11a97412u); f_11a8a270();
  /* 11a97412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97415 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a97417 mov ecx, dword ptr [0x11aba300] */
  ECX = (r32((uint32_t)(0x11aba300)));
  /* 11a9741d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9741e call 0x11a8a270 */
  push32(0x11a97423u); f_11a8a270();
  /* 11a97423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97426 mov dword ptr [0x11aba2fc], 0 */
  w32((uint32_t)(0x11aba2fc), (0x0u));
  /* 11a97430 mov dword ptr [0x11aba300], 0 */
  w32((uint32_t)(0x11aba300), (0x0u));
  /* 11a9743a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9743c:;
  /* 11a9743c mov esp, ebp */
  ESP = (EBP);
  /* 11a9743e pop ebp */
  EBP = (pop32());
  /* 11a9743f ret  */
  ESPCHK(0x11a970a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017440 @ 0x11a97440 (7 bytes, 5 insns) */
void f_11a97440(void) {
  FTRACE(0x11a97440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97440 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97441 mov ebp, esp */
  EBP = (ESP);
  /* 11a97443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97445 pop ebp */
  EBP = (pop32());
  /* 11a97446 ret  */
  ESPCHK(0x11a97440u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11a97450 (129 bytes, 56 insns) */
void f_11a97450(void) {
  FTRACE(0x11a97450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97450 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a97454 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a97458 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a9745e jne 0x11a9749c */
  if (!C.zf) goto L_11a9749c;
L_11a97460:;
  /* 11a97460 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a97462 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a97464 jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a97466 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a97468 je 0x11a97490 */
  if (C.zf) goto L_11a97490;
  /* 11a9746a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9746d jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a9746f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a97471 je 0x11a97490 */
  if (C.zf) goto L_11a97490;
  /* 11a97473 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a97476 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a97479 jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a9747b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a9747d je 0x11a97490 */
  if (C.zf) goto L_11a97490;
  /* 11a9747f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a97482 jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a97484 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97487 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9748a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a9748c jne 0x11a97460 */
  if (!C.zf) goto L_11a97460;
  /* 11a9748e mov edi, edi */
  EDI = (EDI);
L_11a97490:;
  /* 11a97490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97492 ret  */
  ESPCHK(0x11a97450u, _esp0);
  ESP += 4; return;
  /* 11a97493 nop  */
  /* nop */
L_11a97494:;
  /* 11a97494 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97496 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a97498 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a97499 ret  */
  ESPCHK(0x11a97450u, _esp0);
  ESP += 4; return;
  /* 11a9749a mov edi, edi */
  EDI = (EDI);
L_11a9749c:;
  /* 11a9749c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11a974a2 je 0x11a974b8 */
  if (C.zf) goto L_11a974b8;
  /* 11a974a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a974a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a974a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a974a9 jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a974ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a974ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a974ae je 0x11a97490 */
  if (C.zf) goto L_11a97490;
  /* 11a974b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11a974b6 je 0x11a97460 */
  if (C.zf) goto L_11a97460;
L_11a974b8:;
  /* 11a974b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a974bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a974be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a974c0 jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a974c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a974c4 je 0x11a97490 */
  if (C.zf) goto L_11a97490;
  /* 11a974c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a974c9 jne 0x11a97494 */
  if (!C.zf) goto L_11a97494;
  /* 11a974cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11a974cd je 0x11a97490 */
  if (C.zf) goto L_11a97490;
  /* 11a974cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a974d2 jmp 0x11a97460 */
  goto L_11a97460;
}

/* FUN_100174e0 @ 0x11a974e0 (62 bytes, 35 insns) */
void f_11a974e0(void) {
  FTRACE(0x11a974e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a974e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a974e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a974e3 push esi */
  push32((uint32_t)(ESI));
  /* 11a974e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a974e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a974e7 push eax */
  push32((uint32_t)(EAX));
  /* 11a974e8 push eax */
  push32((uint32_t)(EAX));
  /* 11a974e9 push eax */
  push32((uint32_t)(EAX));
  /* 11a974ea push eax */
  push32((uint32_t)(EAX));
  /* 11a974eb push eax */
  push32((uint32_t)(EAX));
  /* 11a974ec push eax */
  push32((uint32_t)(EAX));
  /* 11a974ed push eax */
  push32((uint32_t)(EAX));
  /* 11a974ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a974f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a974f4:;
  /* 11a974f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a974f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a974f8 je 0x11a97501 */
  if (C.zf) goto L_11a97501;
  /* 11a974fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a974fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a974fb");
  /* 11a974ff jmp 0x11a974f4 */
  goto L_11a974f4;
L_11a97501:;
  /* 11a97501 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97504 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a97507 nop  */
  /* nop */
L_11a97508:;
  /* 11a97508 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a97509 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a9750b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a9750d je 0x11a97516 */
  if (C.zf) goto L_11a97516;
  /* 11a9750f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a97510 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a97510");
  /* 11a97514 jae 0x11a97508 */
  if (!C.cf) goto L_11a97508;
L_11a97516:;
  /* 11a97516 mov eax, ecx */
  EAX = (ECX);
  /* 11a97518 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9751b pop esi */
  ESI = (pop32());
  /* 11a9751c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a9751d ret  */
  ESPCHK(0x11a974e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11a97520 (56 bytes, 31 insns) */
void f_11a97520(void) {
  FTRACE(0x11a97520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97520 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97521 mov ebp, esp */
  EBP = (ESP);
  /* 11a97523 push edi */
  push32((uint32_t)(EDI));
  /* 11a97524 push esi */
  push32((uint32_t)(ESI));
  /* 11a97525 push ebx */
  push32((uint32_t)(EBX));
  /* 11a97526 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a97529 jecxz 0x11a97551 */
  x86_unimpl("jecxz @ 0x11a97529");
  /* 11a9752b mov ebx, ecx */
  EBX = (ECX);
  /* 11a9752d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97530 mov esi, edi */
  ESI = (EDI);
  /* 11a97532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97534 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a97536 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97538 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9753a mov edi, esi */
  EDI = (ESI);
  /* 11a9753c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9753f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11a97541 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11a97544 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97546 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a97549 ja 0x11a9754f */
  if ((!C.cf&&!C.zf)) goto L_11a9754f;
  /* 11a9754b je 0x11a97551 */
  if (C.zf) goto L_11a97551;
  /* 11a9754d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a9754e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11a9754f:;
  /* 11a9754f not ecx */
  ECX = (~(ECX));
L_11a97551:;
  /* 11a97551 mov eax, ecx */
  EAX = (ECX);
  /* 11a97553 pop ebx */
  EBX = (pop32());
  /* 11a97554 pop esi */
  ESI = (pop32());
  /* 11a97555 pop edi */
  EDI = (pop32());
  /* 11a97556 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a97557 ret  */
  ESPCHK(0x11a97520u, _esp0);
  ESP += 4; return;
}

/* FUN_10017560 @ 0x11a97560 (58 bytes, 32 insns) */
void f_11a97560(void) {
  FTRACE(0x11a97560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97560 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97561 mov ebp, esp */
  EBP = (ESP);
  /* 11a97563 push esi */
  push32((uint32_t)(ESI));
  /* 11a97564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97566 push eax */
  push32((uint32_t)(EAX));
  /* 11a97567 push eax */
  push32((uint32_t)(EAX));
  /* 11a97568 push eax */
  push32((uint32_t)(EAX));
  /* 11a97569 push eax */
  push32((uint32_t)(EAX));
  /* 11a9756a push eax */
  push32((uint32_t)(EAX));
  /* 11a9756b push eax */
  push32((uint32_t)(EAX));
  /* 11a9756c push eax */
  push32((uint32_t)(EAX));
  /* 11a9756d push eax */
  push32((uint32_t)(EAX));
  /* 11a9756e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a97571 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a97574:;
  /* 11a97574 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a97576 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a97578 je 0x11a97581 */
  if (C.zf) goto L_11a97581;
  /* 11a9757a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a9757b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a9757b");
  /* 11a9757f jmp 0x11a97574 */
  goto L_11a97574;
L_11a97581:;
  /* 11a97581 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11a97584:;
  /* 11a97584 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a97586 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a97588 je 0x11a97594 */
  if (C.zf) goto L_11a97594;
  /* 11a9758a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a9758b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a9758b");
  /* 11a9758f jae 0x11a97584 */
  if (!C.cf) goto L_11a97584;
  /* 11a97591 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11a97594:;
  /* 11a97594 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97597 pop esi */
  ESI = (pop32());
  /* 11a97598 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a97599 ret  */
  ESPCHK(0x11a97560u, _esp0);
  ESP += 4; return;
}

/* FUN_100175a0 @ 0x11a975a0 (512 bytes, 147 insns) */
void f_11a975a0(void) {
  FTRACE(0x11a975a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a975a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a975a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a975a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a975a6 cmp dword ptr [0x11aba348], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba348))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a975ad jne 0x11a975d2 */
  if (!C.zf) goto L_11a975d2;
  /* 11a975af call 0x11a98070 */
  push32(0x11a975b4u); f_11a98070();
  /* 11a975b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a975b6 je 0x11a975c2 */
  if (C.zf) goto L_11a975c2;
  /* 11a975b8 mov eax, dword ptr [0x11abc2f8] */
  EAX = (r32((uint32_t)(0x11abc2f8)));
  /* 11a975bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a975c0 jmp 0x11a975c9 */
  goto L_11a975c9;
L_11a975c2:;
  /* 11a975c2 mov dword ptr [ebp - 8], 0x11a980c0 */
  w32((uint32_t)(EBP + -0x8), (0x11a980c0u));
L_11a975c9:;
  /* 11a975c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a975cc mov dword ptr [0x11aba348], ecx */
  w32((uint32_t)(0x11aba348), (ECX));
L_11a975d2:;
  /* 11a975d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a975d6 jne 0x11a975e2 */
  if (!C.zf) goto L_11a975e2;
  /* 11a975d8 call 0x11a97ec0 */
  push32(0x11a975ddu); f_11a97ec0();
  /* 11a975dd jmp 0x11a976ae */
  goto L_11a976ae;
L_11a975e2:;
  /* 11a975e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a975e5 mov dword ptr [0x11aba338], edx */
  w32((uint32_t)(0x11aba338), (EDX));
  /* 11a975eb cmp dword ptr [0x11aba338], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba338))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a975f2 je 0x11a97614 */
  if (C.zf) goto L_11a97614;
  /* 11a975f4 mov eax, dword ptr [0x11aba338] */
  EAX = (r32((uint32_t)(0x11aba338)));
  /* 11a975f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a975fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a975fe je 0x11a97614 */
  if (C.zf) goto L_11a97614;
  /* 11a97600 push 0x11aba338 */
  push32((uint32_t)(0x11aba338u));
  /* 11a97605 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a97607 push 0x11ab8c90 */
  push32((uint32_t)(0x11ab8c90u));
  /* 11a9760c call 0x11a977a0 */
  push32(0x11a97611u); f_11a977a0();
  /* 11a97611 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97614:;
  /* 11a97614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97617 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9761a mov dword ptr [0x11aba33c], edx */
  w32((uint32_t)(0x11aba33c), (EDX));
  /* 11a97620 cmp dword ptr [0x11aba33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97627 je 0x11a97649 */
  if (C.zf) goto L_11a97649;
  /* 11a97629 mov eax, dword ptr [0x11aba33c] */
  EAX = (r32((uint32_t)(0x11aba33c)));
  /* 11a9762e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a97631 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a97633 je 0x11a97649 */
  if (C.zf) goto L_11a97649;
  /* 11a97635 push 0x11aba33c */
  push32((uint32_t)(0x11aba33cu));
  /* 11a9763a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a9763c push 0x11ab8bd8 */
  push32((uint32_t)(0x11ab8bd8u));
  /* 11a97641 call 0x11a977a0 */
  push32(0x11a97646u); f_11a977a0();
  /* 11a97646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97649:;
  /* 11a97649 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
  /* 11a97653 cmp dword ptr [0x11aba338], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba338))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9765a je 0x11a9768d */
  if (C.zf) goto L_11a9768d;
  /* 11a9765c mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a97662 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a97665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97667 je 0x11a9768d */
  if (C.zf) goto L_11a9768d;
  /* 11a97669 cmp dword ptr [0x11aba33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97670 je 0x11a97686 */
  if (C.zf) goto L_11a97686;
  /* 11a97672 mov ecx, dword ptr [0x11aba33c] */
  ECX = (r32((uint32_t)(0x11aba33c)));
  /* 11a97678 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9767b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9767d je 0x11a97686 */
  if (C.zf) goto L_11a97686;
  /* 11a9767f call 0x11a97830 */
  push32(0x11a97684u); f_11a97830();
  /* 11a97684 jmp 0x11a9768b */
  goto L_11a9768b;
L_11a97686:;
  /* 11a97686 call 0x11a97c20 */
  push32(0x11a9768bu); f_11a97c20();
L_11a9768b:;
  /* 11a9768b jmp 0x11a976ae */
  goto L_11a976ae;
L_11a9768d:;
  /* 11a9768d cmp dword ptr [0x11aba33c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba33c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97694 je 0x11a976a9 */
  if (C.zf) goto L_11a976a9;
  /* 11a97696 mov eax, dword ptr [0x11aba33c] */
  EAX = (r32((uint32_t)(0x11aba33c)));
  /* 11a9769b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9769e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a976a0 je 0x11a976a9 */
  if (C.zf) goto L_11a976a9;
  /* 11a976a2 call 0x11a97dc0 */
  push32(0x11a976a7u); f_11a97dc0();
  /* 11a976a7 jmp 0x11a976ae */
  goto L_11a976ae;
L_11a976a9:;
  /* 11a976a9 call 0x11a97ec0 */
  push32(0x11a976aeu); f_11a97ec0();
L_11a976ae:;
  /* 11a976ae cmp dword ptr [0x11aba340], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba340))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a976b5 jne 0x11a976be */
  if (!C.zf) goto L_11a976be;
  /* 11a976b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a976b9 jmp 0x11a9779c */
  goto L_11a9779c;
L_11a976be:;
  /* 11a976be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a976c1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a976c7 push edx */
  push32((uint32_t)(EDX));
  /* 11a976c8 call 0x11a97ef0 */
  push32(0x11a976cdu); f_11a97ef0();
  /* 11a976cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a976d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a976d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a976d7 je 0x11a976ec */
  if (C.zf) goto L_11a976ec;
  /* 11a976d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a976dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a976e1 push eax */
  push32((uint32_t)(EAX));
  /* 11a976e2 call dword ptr [0x11abc308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc308))), 0x11a976e8u);
  /* 11a976e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a976ea jne 0x11a976f3 */
  if (!C.zf) goto L_11a976f3;
L_11a976ec:;
  /* 11a976ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a976ee jmp 0x11a9779c */
  goto L_11a9779c;
L_11a976f3:;
  /* 11a976f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a976f5 mov ecx, dword ptr [0x11aba328] */
  ECX = (r32((uint32_t)(0x11aba328)));
  /* 11a976fb push ecx */
  push32((uint32_t)(ECX));
  /* 11a976fc call dword ptr [0x11abc300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc300))), 0x11a97702u);
  /* 11a97702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97704 jne 0x11a9770d */
  if (!C.zf) goto L_11a9770d;
  /* 11a97706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97708 jmp 0x11a9779c */
  goto L_11a9779c;
L_11a9770d:;
  /* 11a9770d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97711 je 0x11a97738 */
  if (C.zf) goto L_11a97738;
  /* 11a97713 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a97716 mov ax, word ptr [0x11aba328] */
  AX = (r16((uint32_t)(0x11aba328)));
  /* 11a9771c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11a9771f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a97722 mov dx, word ptr [0x11aba344] */
  DX = (r16((uint32_t)(0x11aba344)));
  /* 11a97729 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11a9772d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a97730 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a97734 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11a97738:;
  /* 11a97738 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9773c je 0x11a97797 */
  if (C.zf) goto L_11a97797;
  /* 11a9773e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a97740 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a97743 push edx */
  push32((uint32_t)(EDX));
  /* 11a97744 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11a97749 mov eax, dword ptr [0x11aba328] */
  EAX = (r32((uint32_t)(0x11aba328)));
  /* 11a9774e push eax */
  push32((uint32_t)(EAX));
  /* 11a9774f call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97755u);
  /* 11a97755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97757 jne 0x11a9775d */
  if (!C.zf) goto L_11a9775d;
  /* 11a97759 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9775b jmp 0x11a9779c */
  goto L_11a9779c;
L_11a9775d:;
  /* 11a9775d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a9775f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a97762 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97765 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97766 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11a9776b mov edx, dword ptr [0x11aba344] */
  EDX = (r32((uint32_t)(0x11aba344)));
  /* 11a97771 push edx */
  push32((uint32_t)(EDX));
  /* 11a97772 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97778u);
  /* 11a97778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9777a jne 0x11a97780 */
  if (!C.zf) goto L_11a97780;
  /* 11a9777c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9777e jmp 0x11a9779c */
  goto L_11a9779c;
L_11a97780:;
  /* 11a97780 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a97782 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a97785 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9778a push eax */
  push32((uint32_t)(EAX));
  /* 11a9778b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9778e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9778f call 0x11a8c320 */
  push32(0x11a97794u); f_11a8c320();
  /* 11a97794 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97797:;
  /* 11a97797 mov eax, 1 */
  EAX = (0x1u);
L_11a9779c:;
  /* 11a9779c mov esp, ebp */
  ESP = (EBP);
  /* 11a9779e pop ebp */
  EBP = (pop32());
  /* 11a9779f ret  */
  ESPCHK(0x11a975a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100177a0 @ 0x11a977a0 (130 bytes, 47 insns) */
void f_11a977a0(void) {
  FTRACE(0x11a977a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a977a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a977a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a977a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a977a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a977ad mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11a977b4:;
  /* 11a977b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a977b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a977ba jg 0x11a9781e */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9781e;
  /* 11a977bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a977c0 je 0x11a9781e */
  if (C.zf) goto L_11a9781e;
  /* 11a977c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a977c5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a977c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a977c9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a977cb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a977cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a977d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a977d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a977d6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11a977d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a977da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a977dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a977df push edx */
  push32((uint32_t)(EDX));
  /* 11a977e0 call 0x11a9a820 */
  push32(0x11a977e5u); f_11a9a820();
  /* 11a977e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a977e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a977eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a977ef jne 0x11a97802 */
  if (!C.zf) goto L_11a97802;
  /* 11a977f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a977f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a977f7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11a977fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a977fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a97800 jmp 0x11a9781c */
  goto L_11a9781c;
L_11a97802:;
  /* 11a97802 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97806 jge 0x11a97813 */
  if ((C.sf==C.of)) goto L_11a97813;
  /* 11a97808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9780b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9780e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a97811 jmp 0x11a9781c */
  goto L_11a9781c;
L_11a97813:;
  /* 11a97813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a97816 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97819 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a9781c:;
  /* 11a9781c jmp 0x11a977b4 */
  goto L_11a977b4;
L_11a9781e:;
  /* 11a9781e mov esp, ebp */
  ESP = (EBP);
  /* 11a97820 pop ebp */
  EBP = (pop32());
  /* 11a97821 ret  */
  ESPCHK(0x11a977a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017830 @ 0x11a97830 (186 bytes, 50 insns) */
void f_11a97830(void) {
  FTRACE(0x11a97830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97830 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97831 mov ebp, esp */
  EBP = (ESP);
  /* 11a97833 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97834 mov eax, dword ptr [0x11aba338] */
  EAX = (r32((uint32_t)(0x11aba338)));
  /* 11a97839 push eax */
  push32((uint32_t)(EAX));
  /* 11a9783a call 0x11a8c610 */
  push32(0x11a9783fu); f_11a8c610();
  /* 11a9783f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97842 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97844 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97847 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a9784a mov dword ptr [0x11aba334], ecx */
  w32((uint32_t)(0x11aba334), (ECX));
  /* 11a97850 mov edx, dword ptr [0x11aba33c] */
  EDX = (r32((uint32_t)(0x11aba33c)));
  /* 11a97856 push edx */
  push32((uint32_t)(EDX));
  /* 11a97857 call 0x11a8c610 */
  push32(0x11a9785cu); f_11a8c610();
  /* 11a9785c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9785f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97861 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97864 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a97867 mov dword ptr [0x11aba32c], ecx */
  w32((uint32_t)(0x11aba32c), (ECX));
  /* 11a9786d mov dword ptr [0x11aba328], 0 */
  w32((uint32_t)(0x11aba328), (0x0u));
  /* 11a97877 cmp dword ptr [0x11aba334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9787e je 0x11a97889 */
  if (C.zf) goto L_11a97889;
  /* 11a97880 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11a97887 jmp 0x11a9789b */
  goto L_11a9789b;
L_11a97889:;
  /* 11a97889 mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a9788f push edx */
  push32((uint32_t)(EDX));
  /* 11a97890 call 0x11a982d0 */
  push32(0x11a97895u); f_11a982d0();
  /* 11a97895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a9789b:;
  /* 11a9789b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9789e mov dword ptr [0x11aba330], eax */
  w32((uint32_t)(0x11aba330), (EAX));
  /* 11a978a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a978a5 push 0x11a978f0 */
  push32((uint32_t)(0x11a978f0u));
  /* 11a978aa call dword ptr [0x11abc2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f4))), 0x11a978b0u);
  /* 11a978b0 mov ecx, dword ptr [0x11aba340] */
  ECX = (r32((uint32_t)(0x11aba340)));
  /* 11a978b6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11a978bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a978be je 0x11a978dc */
  if (C.zf) goto L_11a978dc;
  /* 11a978c0 mov edx, dword ptr [0x11aba340] */
  EDX = (r32((uint32_t)(0x11aba340)));
  /* 11a978c6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11a978cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a978ce je 0x11a978dc */
  if (C.zf) goto L_11a978dc;
  /* 11a978d0 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a978d5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11a978d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a978da jne 0x11a978e6 */
  if (!C.zf) goto L_11a978e6;
L_11a978dc:;
  /* 11a978dc mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
L_11a978e6:;
  /* 11a978e6 mov esp, ebp */
  ESP = (EBP);
  /* 11a978e8 pop ebp */
  EBP = (pop32());
  /* 11a978e9 ret  */
  ESPCHK(0x11a97830u, _esp0);
  ESP += 4; return;
}

/* FUN_100178f0 @ 0x11a978f0 (804 bytes, 220 insns) */
void f_11a978f0(void) {
  FTRACE(0x11a978f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a978f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a978f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a978f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a978f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a978f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a978fa call 0x11a98250 */
  push32(0x11a978ffu); f_11a98250();
  /* 11a978ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97902 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11a97905 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a97907 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a9790a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9790b mov edx, dword ptr [0x11aba32c] */
  EDX = (r32((uint32_t)(0x11aba32c)));
  /* 11a97911 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97913 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97915 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9791b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97921 push edx */
  push32((uint32_t)(EDX));
  /* 11a97922 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97925 push eax */
  push32((uint32_t)(EAX));
  /* 11a97926 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a9792cu);
  /* 11a9792c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9792e jne 0x11a97944 */
  if (!C.zf) goto L_11a97944;
  /* 11a97930 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
  /* 11a9793a mov eax, 1 */
  EAX = (0x1u);
  /* 11a9793f jmp 0x11a97c0e */
  goto L_11a97c0e;
L_11a97944:;
  /* 11a97944 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a97947 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97948 mov edx, dword ptr [0x11aba33c] */
  EDX = (r32((uint32_t)(0x11aba33c)));
  /* 11a9794e push edx */
  push32((uint32_t)(EDX));
  /* 11a9794f call 0x11a9a820 */
  push32(0x11a97954u); f_11a9a820();
  /* 11a97954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97959 jne 0x11a97a7f */
  if (!C.zf) goto L_11a97a7f;
  /* 11a9795f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a97961 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11a97964 push eax */
  push32((uint32_t)(EAX));
  /* 11a97965 mov ecx, dword ptr [0x11aba334] */
  ECX = (r32((uint32_t)(0x11aba334)));
  /* 11a9796b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a9796d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9796f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11a97975 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9797b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9797c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a9797f push edx */
  push32((uint32_t)(EDX));
  /* 11a97980 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97986u);
  /* 11a97986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97988 jne 0x11a9799e */
  if (!C.zf) goto L_11a9799e;
  /* 11a9798a mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
  /* 11a97994 mov eax, 1 */
  EAX = (0x1u);
  /* 11a97999 jmp 0x11a97c0e */
  goto L_11a97c0e;
L_11a9799e:;
  /* 11a9799e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11a979a1 push eax */
  push32((uint32_t)(EAX));
  /* 11a979a2 mov ecx, dword ptr [0x11aba338] */
  ECX = (r32((uint32_t)(0x11aba338)));
  /* 11a979a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a979a9 call 0x11a9a820 */
  push32(0x11a979aeu); f_11a9a820();
  /* 11a979ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a979b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a979b3 jne 0x11a979e0 */
  if (!C.zf) goto L_11a979e0;
  /* 11a979b5 mov edx, dword ptr [0x11aba340] */
  EDX = (r32((uint32_t)(0x11aba340)));
  /* 11a979bb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11a979c1 mov dword ptr [0x11aba340], edx */
  w32((uint32_t)(0x11aba340), (EDX));
  /* 11a979c7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a979ca mov dword ptr [0x11aba344], eax */
  w32((uint32_t)(0x11aba344), (EAX));
  /* 11a979cf mov ecx, dword ptr [0x11aba344] */
  ECX = (r32((uint32_t)(0x11aba344)));
  /* 11a979d5 mov dword ptr [0x11aba328], ecx */
  w32((uint32_t)(0x11aba328), (ECX));
  /* 11a979db jmp 0x11a97a7f */
  goto L_11a97a7f;
L_11a979e0:;
  /* 11a979e0 mov edx, dword ptr [0x11aba340] */
  EDX = (r32((uint32_t)(0x11aba340)));
  /* 11a979e6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a979e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a979eb jne 0x11a97a7f */
  if (!C.zf) goto L_11a97a7f;
  /* 11a979f1 cmp dword ptr [0x11aba330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a979f8 je 0x11a97a4d */
  if (C.zf) goto L_11a97a4d;
  /* 11a979fa mov eax, dword ptr [0x11aba330] */
  EAX = (r32((uint32_t)(0x11aba330)));
  /* 11a979ff push eax */
  push32((uint32_t)(EAX));
  /* 11a97a00 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a97a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97a04 mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a97a0a push edx */
  push32((uint32_t)(EDX));
  /* 11a97a0b call 0x11a9a8f0 */
  push32(0x11a97a10u); f_11a9a8f0();
  /* 11a97a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97a15 jne 0x11a97a4d */
  if (!C.zf) goto L_11a97a4d;
  /* 11a97a17 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97a1c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a97a1e mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
  /* 11a97a23 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97a26 mov dword ptr [0x11aba344], ecx */
  w32((uint32_t)(0x11aba344), (ECX));
  /* 11a97a2c mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a97a32 push edx */
  push32((uint32_t)(EDX));
  /* 11a97a33 call 0x11a8c610 */
  push32(0x11a97a38u); f_11a8c610();
  /* 11a97a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97a3b cmp eax, dword ptr [0x11aba330] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba330))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97a41 jne 0x11a97a4b */
  if (!C.zf) goto L_11a97a4b;
  /* 11a97a43 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97a46 mov dword ptr [0x11aba328], eax */
  w32((uint32_t)(0x11aba328), (EAX));
L_11a97a4b:;
  /* 11a97a4b jmp 0x11a97a7f */
  goto L_11a97a7f;
L_11a97a4d:;
  /* 11a97a4d mov ecx, dword ptr [0x11aba340] */
  ECX = (r32((uint32_t)(0x11aba340)));
  /* 11a97a53 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a97a56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a97a58 jne 0x11a97a7f */
  if (!C.zf) goto L_11a97a7f;
  /* 11a97a5a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97a5d push edx */
  push32((uint32_t)(EDX));
  /* 11a97a5e call 0x11a97f90 */
  push32(0x11a97a63u); f_11a97f90();
  /* 11a97a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97a68 je 0x11a97a7f */
  if (C.zf) goto L_11a97a7f;
  /* 11a97a6a mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97a6f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a97a71 mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
  /* 11a97a76 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97a79 mov dword ptr [0x11aba344], ecx */
  w32((uint32_t)(0x11aba344), (ECX));
L_11a97a7f:;
  /* 11a97a7f mov edx, dword ptr [0x11aba340] */
  EDX = (r32((uint32_t)(0x11aba340)));
  /* 11a97a85 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11a97a8b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97a91 je 0x11a97c01 */
  if (C.zf) goto L_11a97c01;
  /* 11a97a97 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a97a99 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11a97a9c push eax */
  push32((uint32_t)(EAX));
  /* 11a97a9d mov ecx, dword ptr [0x11aba334] */
  ECX = (r32((uint32_t)(0x11aba334)));
  /* 11a97aa3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97aa5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97aa7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11a97aad add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97ab4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97ab7 push edx */
  push32((uint32_t)(EDX));
  /* 11a97ab8 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97abeu);
  /* 11a97abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97ac0 jne 0x11a97ad6 */
  if (!C.zf) goto L_11a97ad6;
  /* 11a97ac2 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
  /* 11a97acc mov eax, 1 */
  EAX = (0x1u);
  /* 11a97ad1 jmp 0x11a97c0e */
  goto L_11a97c0e;
L_11a97ad6:;
  /* 11a97ad6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11a97ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11a97ada mov ecx, dword ptr [0x11aba338] */
  ECX = (r32((uint32_t)(0x11aba338)));
  /* 11a97ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97ae1 call 0x11a9a820 */
  push32(0x11a97ae6u); f_11a9a820();
  /* 11a97ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97aeb jne 0x11a97ba0 */
  if (!C.zf) goto L_11a97ba0;
  /* 11a97af1 mov edx, dword ptr [0x11aba340] */
  EDX = (r32((uint32_t)(0x11aba340)));
  /* 11a97af7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a97afa mov dword ptr [0x11aba340], edx */
  w32((uint32_t)(0x11aba340), (EDX));
  /* 11a97b00 cmp dword ptr [0x11aba334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97b07 je 0x11a97b2a */
  if (C.zf) goto L_11a97b2a;
  /* 11a97b09 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97b0e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11a97b11 mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
  /* 11a97b16 cmp dword ptr [0x11aba328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97b1d jne 0x11a97b28 */
  if (!C.zf) goto L_11a97b28;
  /* 11a97b1f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97b22 mov dword ptr [0x11aba328], ecx */
  w32((uint32_t)(0x11aba328), (ECX));
L_11a97b28:;
  /* 11a97b28 jmp 0x11a97b9e */
  goto L_11a97b9e;
L_11a97b2a:;
  /* 11a97b2a cmp dword ptr [0x11aba330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97b31 je 0x11a97b7f */
  if (C.zf) goto L_11a97b7f;
  /* 11a97b33 mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a97b39 push edx */
  push32((uint32_t)(EDX));
  /* 11a97b3a call 0x11a8c610 */
  push32(0x11a97b3fu); f_11a8c610();
  /* 11a97b3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97b42 cmp eax, dword ptr [0x11aba330] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba330))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97b48 jne 0x11a97b7f */
  if (!C.zf) goto L_11a97b7f;
  /* 11a97b4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a97b4c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97b4f push eax */
  push32((uint32_t)(EAX));
  /* 11a97b50 call 0x11a97fe0 */
  push32(0x11a97b55u); f_11a97fe0();
  /* 11a97b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97b5a je 0x11a97b7d */
  if (C.zf) goto L_11a97b7d;
  /* 11a97b5c mov ecx, dword ptr [0x11aba340] */
  ECX = (r32((uint32_t)(0x11aba340)));
  /* 11a97b62 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a97b65 mov dword ptr [0x11aba340], ecx */
  w32((uint32_t)(0x11aba340), (ECX));
  /* 11a97b6b cmp dword ptr [0x11aba328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97b72 jne 0x11a97b7d */
  if (!C.zf) goto L_11a97b7d;
  /* 11a97b74 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97b77 mov dword ptr [0x11aba328], edx */
  w32((uint32_t)(0x11aba328), (EDX));
L_11a97b7d:;
  /* 11a97b7d jmp 0x11a97b9e */
  goto L_11a97b9e;
L_11a97b7f:;
  /* 11a97b7f mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97b84 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11a97b87 mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
  /* 11a97b8c cmp dword ptr [0x11aba328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97b93 jne 0x11a97b9e */
  if (!C.zf) goto L_11a97b9e;
  /* 11a97b95 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97b98 mov dword ptr [0x11aba328], ecx */
  w32((uint32_t)(0x11aba328), (ECX));
L_11a97b9e:;
  /* 11a97b9e jmp 0x11a97c01 */
  goto L_11a97c01;
L_11a97ba0:;
  /* 11a97ba0 cmp dword ptr [0x11aba334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97ba7 jne 0x11a97c01 */
  if (!C.zf) goto L_11a97c01;
  /* 11a97ba9 cmp dword ptr [0x11aba330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97bb0 je 0x11a97c01 */
  if (C.zf) goto L_11a97c01;
  /* 11a97bb2 mov edx, dword ptr [0x11aba330] */
  EDX = (r32((uint32_t)(0x11aba330)));
  /* 11a97bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11a97bb9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11a97bbc push eax */
  push32((uint32_t)(EAX));
  /* 11a97bbd mov ecx, dword ptr [0x11aba338] */
  ECX = (r32((uint32_t)(0x11aba338)));
  /* 11a97bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97bc4 call 0x11a9a8f0 */
  push32(0x11a97bc9u); f_11a9a8f0();
  /* 11a97bc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97bce jne 0x11a97c01 */
  if (!C.zf) goto L_11a97c01;
  /* 11a97bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a97bd2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97bd5 push edx */
  push32((uint32_t)(EDX));
  /* 11a97bd6 call 0x11a97fe0 */
  push32(0x11a97bdbu); f_11a97fe0();
  /* 11a97bdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97bde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97be0 je 0x11a97c01 */
  if (C.zf) goto L_11a97c01;
  /* 11a97be2 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97be7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11a97bea mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
  /* 11a97bef cmp dword ptr [0x11aba328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97bf6 jne 0x11a97c01 */
  if (!C.zf) goto L_11a97c01;
  /* 11a97bf8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97bfb mov dword ptr [0x11aba328], ecx */
  w32((uint32_t)(0x11aba328), (ECX));
L_11a97c01:;
  /* 11a97c01 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97c06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a97c09 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97c0b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97c0d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a97c0e:;
  /* 11a97c0e mov esp, ebp */
  ESP = (EBP);
  /* 11a97c10 pop ebp */
  EBP = (pop32());
  /* 11a97c11 ret 4 */
  ESPCHK(0x11a978f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10017c20 @ 0x11a97c20 (116 bytes, 33 insns) */
void f_11a97c20(void) {
  FTRACE(0x11a97c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97c21 mov ebp, esp */
  EBP = (ESP);
  /* 11a97c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97c24 mov eax, dword ptr [0x11aba338] */
  EAX = (r32((uint32_t)(0x11aba338)));
  /* 11a97c29 push eax */
  push32((uint32_t)(EAX));
  /* 11a97c2a call 0x11a8c610 */
  push32(0x11a97c2fu); f_11a8c610();
  /* 11a97c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97c32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97c34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97c37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a97c3a mov dword ptr [0x11aba334], ecx */
  w32((uint32_t)(0x11aba334), (ECX));
  /* 11a97c40 cmp dword ptr [0x11aba334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97c47 je 0x11a97c52 */
  if (C.zf) goto L_11a97c52;
  /* 11a97c49 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11a97c50 jmp 0x11a97c64 */
  goto L_11a97c64;
L_11a97c52:;
  /* 11a97c52 mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a97c58 push edx */
  push32((uint32_t)(EDX));
  /* 11a97c59 call 0x11a982d0 */
  push32(0x11a97c5eu); f_11a982d0();
  /* 11a97c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97c61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a97c64:;
  /* 11a97c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a97c67 mov dword ptr [0x11aba330], eax */
  w32((uint32_t)(0x11aba330), (EAX));
  /* 11a97c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a97c6e push 0x11a97ca0 */
  push32((uint32_t)(0x11a97ca0u));
  /* 11a97c73 call dword ptr [0x11abc2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f4))), 0x11a97c79u);
  /* 11a97c79 mov ecx, dword ptr [0x11aba340] */
  ECX = (r32((uint32_t)(0x11aba340)));
  /* 11a97c7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a97c82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a97c84 jne 0x11a97c90 */
  if (!C.zf) goto L_11a97c90;
  /* 11a97c86 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
L_11a97c90:;
  /* 11a97c90 mov esp, ebp */
  ESP = (EBP);
  /* 11a97c92 pop ebp */
  EBP = (pop32());
  /* 11a97c93 ret  */
  ESPCHK(0x11a97c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ca0 @ 0x11a97ca0 (287 bytes, 86 insns) */
void f_11a97ca0(void) {
  FTRACE(0x11a97ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11a97ca3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97ca9 push eax */
  push32((uint32_t)(EAX));
  /* 11a97caa call 0x11a98250 */
  push32(0x11a97cafu); f_11a98250();
  /* 11a97caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97cb2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11a97cb5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a97cb7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a97cba push ecx */
  push32((uint32_t)(ECX));
  /* 11a97cbb mov edx, dword ptr [0x11aba334] */
  EDX = (r32((uint32_t)(0x11aba334)));
  /* 11a97cc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97cc3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97cc5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11a97ccb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97cd1 push edx */
  push32((uint32_t)(EDX));
  /* 11a97cd2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11a97cd6 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97cdcu);
  /* 11a97cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97cde jne 0x11a97cf4 */
  if (!C.zf) goto L_11a97cf4;
  /* 11a97ce0 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
  /* 11a97cea mov eax, 1 */
  EAX = (0x1u);
  /* 11a97cef jmp 0x11a97db9 */
  goto L_11a97db9;
L_11a97cf4:;
  /* 11a97cf4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a97cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97cf8 mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a97cfe push edx */
  push32((uint32_t)(EDX));
  /* 11a97cff call 0x11a9a820 */
  push32(0x11a97d04u); f_11a9a820();
  /* 11a97d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97d09 jne 0x11a97d49 */
  if (!C.zf) goto L_11a97d49;
  /* 11a97d0b cmp dword ptr [0x11aba334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97d12 jne 0x11a97d26 */
  if (!C.zf) goto L_11a97d26;
  /* 11a97d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a97d16 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97d19 push eax */
  push32((uint32_t)(EAX));
  /* 11a97d1a call 0x11a97fe0 */
  push32(0x11a97d1fu); f_11a97fe0();
  /* 11a97d1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97d24 je 0x11a97d47 */
  if (C.zf) goto L_11a97d47;
L_11a97d26:;
  /* 11a97d26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97d29 mov dword ptr [0x11aba344], ecx */
  w32((uint32_t)(0x11aba344), (ECX));
  /* 11a97d2f mov edx, dword ptr [0x11aba344] */
  EDX = (r32((uint32_t)(0x11aba344)));
  /* 11a97d35 mov dword ptr [0x11aba328], edx */
  w32((uint32_t)(0x11aba328), (EDX));
  /* 11a97d3b mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97d40 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11a97d42 mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
L_11a97d47:;
  /* 11a97d47 jmp 0x11a97dac */
  goto L_11a97dac;
L_11a97d49:;
  /* 11a97d49 cmp dword ptr [0x11aba334], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba334))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97d50 jne 0x11a97dac */
  if (!C.zf) goto L_11a97dac;
  /* 11a97d52 cmp dword ptr [0x11aba330], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba330))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97d59 je 0x11a97dac */
  if (C.zf) goto L_11a97dac;
  /* 11a97d5b mov ecx, dword ptr [0x11aba330] */
  ECX = (r32((uint32_t)(0x11aba330)));
  /* 11a97d61 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97d62 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11a97d65 push edx */
  push32((uint32_t)(EDX));
  /* 11a97d66 mov eax, dword ptr [0x11aba338] */
  EAX = (r32((uint32_t)(0x11aba338)));
  /* 11a97d6b push eax */
  push32((uint32_t)(EAX));
  /* 11a97d6c call 0x11a9a8f0 */
  push32(0x11a97d71u); f_11a9a8f0();
  /* 11a97d71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97d76 jne 0x11a97dac */
  if (!C.zf) goto L_11a97dac;
  /* 11a97d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a97d7a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97d7d push ecx */
  push32((uint32_t)(ECX));
  /* 11a97d7e call 0x11a97fe0 */
  push32(0x11a97d83u); f_11a97fe0();
  /* 11a97d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97d88 je 0x11a97dac */
  if (C.zf) goto L_11a97dac;
  /* 11a97d8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97d8d mov dword ptr [0x11aba344], edx */
  w32((uint32_t)(0x11aba344), (EDX));
  /* 11a97d93 mov eax, dword ptr [0x11aba344] */
  EAX = (r32((uint32_t)(0x11aba344)));
  /* 11a97d98 mov dword ptr [0x11aba328], eax */
  w32((uint32_t)(0x11aba328), (EAX));
  /* 11a97d9d mov ecx, dword ptr [0x11aba340] */
  ECX = (r32((uint32_t)(0x11aba340)));
  /* 11a97da3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a97da6 mov dword ptr [0x11aba340], ecx */
  w32((uint32_t)(0x11aba340), (ECX));
L_11a97dac:;
  /* 11a97dac mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97db1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a97db4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97db6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97db8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a97db9:;
  /* 11a97db9 mov esp, ebp */
  ESP = (EBP);
  /* 11a97dbb pop ebp */
  EBP = (pop32());
  /* 11a97dbc ret 4 */
  ESPCHK(0x11a97ca0u, _esp0);
  ESP += 8; return;
}

/* FUN_10017dc0 @ 0x11a97dc0 (69 bytes, 20 insns) */
void f_11a97dc0(void) {
  FTRACE(0x11a97dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11a97dc3 mov eax, dword ptr [0x11aba33c] */
  EAX = (r32((uint32_t)(0x11aba33c)));
  /* 11a97dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11a97dc9 call 0x11a8c610 */
  push32(0x11a97dceu); f_11a8c610();
  /* 11a97dce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97dd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97dd3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97dd6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a97dd9 mov dword ptr [0x11aba32c], ecx */
  w32((uint32_t)(0x11aba32c), (ECX));
  /* 11a97ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 11a97de1 push 0x11a97e10 */
  push32((uint32_t)(0x11a97e10u));
  /* 11a97de6 call dword ptr [0x11abc2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f4))), 0x11a97decu);
  /* 11a97dec mov edx, dword ptr [0x11aba340] */
  EDX = (r32((uint32_t)(0x11aba340)));
  /* 11a97df2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a97df5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a97df7 jne 0x11a97e03 */
  if (!C.zf) goto L_11a97e03;
  /* 11a97df9 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
L_11a97e03:;
  /* 11a97e03 pop ebp */
  EBP = (pop32());
  /* 11a97e04 ret  */
  ESPCHK(0x11a97dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e10 @ 0x11a97e10 (172 bytes, 54 insns) */
void f_11a97e10(void) {
  FTRACE(0x11a97e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97e11 mov ebp, esp */
  EBP = (ESP);
  /* 11a97e13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97e16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97e19 push eax */
  push32((uint32_t)(EAX));
  /* 11a97e1a call 0x11a98250 */
  push32(0x11a97e1fu); f_11a98250();
  /* 11a97e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97e22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11a97e25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a97e27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a97e2a push ecx */
  push32((uint32_t)(ECX));
  /* 11a97e2b mov edx, dword ptr [0x11aba32c] */
  EDX = (r32((uint32_t)(0x11aba32c)));
  /* 11a97e31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97e33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97e35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11a97e3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97e41 push edx */
  push32((uint32_t)(EDX));
  /* 11a97e42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97e45 push eax */
  push32((uint32_t)(EAX));
  /* 11a97e46 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97e4cu);
  /* 11a97e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97e4e jne 0x11a97e61 */
  if (!C.zf) goto L_11a97e61;
  /* 11a97e50 mov dword ptr [0x11aba340], 0 */
  w32((uint32_t)(0x11aba340), (0x0u));
  /* 11a97e5a mov eax, 1 */
  EAX = (0x1u);
  /* 11a97e5f jmp 0x11a97eb6 */
  goto L_11a97eb6;
L_11a97e61:;
  /* 11a97e61 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11a97e64 push ecx */
  push32((uint32_t)(ECX));
  /* 11a97e65 mov edx, dword ptr [0x11aba33c] */
  EDX = (r32((uint32_t)(0x11aba33c)));
  /* 11a97e6b push edx */
  push32((uint32_t)(EDX));
  /* 11a97e6c call 0x11a9a820 */
  push32(0x11a97e71u); f_11a9a820();
  /* 11a97e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97e76 jne 0x11a97ea9 */
  if (!C.zf) goto L_11a97ea9;
  /* 11a97e78 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97e7b push eax */
  push32((uint32_t)(EAX));
  /* 11a97e7c call 0x11a97f90 */
  push32(0x11a97e81u); f_11a97f90();
  /* 11a97e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97e86 je 0x11a97ea9 */
  if (C.zf) goto L_11a97ea9;
  /* 11a97e88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11a97e8b mov dword ptr [0x11aba344], ecx */
  w32((uint32_t)(0x11aba344), (ECX));
  /* 11a97e91 mov edx, dword ptr [0x11aba344] */
  EDX = (r32((uint32_t)(0x11aba344)));
  /* 11a97e97 mov dword ptr [0x11aba328], edx */
  w32((uint32_t)(0x11aba328), (EDX));
  /* 11a97e9d mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97ea2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11a97ea4 mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
L_11a97ea9:;
  /* 11a97ea9 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97eae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a97eb1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a97eb3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97eb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a97eb6:;
  /* 11a97eb6 mov esp, ebp */
  ESP = (EBP);
  /* 11a97eb8 pop ebp */
  EBP = (pop32());
  /* 11a97eb9 ret 4 */
  ESPCHK(0x11a97e10u, _esp0);
  ESP += 8; return;
}

/* FUN_10017ec0 @ 0x11a97ec0 (43 bytes, 11 insns) */
void f_11a97ec0(void) {
  FTRACE(0x11a97ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11a97ec3 mov eax, dword ptr [0x11aba340] */
  EAX = (r32((uint32_t)(0x11aba340)));
  /* 11a97ec8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11a97ecd mov dword ptr [0x11aba340], eax */
  w32((uint32_t)(0x11aba340), (EAX));
  /* 11a97ed2 call dword ptr [0x11abc2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2fc))), 0x11a97ed8u);
  /* 11a97ed8 mov dword ptr [0x11aba344], eax */
  w32((uint32_t)(0x11aba344), (EAX));
  /* 11a97edd mov ecx, dword ptr [0x11aba344] */
  ECX = (r32((uint32_t)(0x11aba344)));
  /* 11a97ee3 mov dword ptr [0x11aba328], ecx */
  w32((uint32_t)(0x11aba328), (ECX));
  /* 11a97ee9 pop ebp */
  EBP = (pop32());
  /* 11a97eea ret  */
  ESPCHK(0x11a97ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ef0 @ 0x11a97ef0 (155 bytes, 57 insns) */
void f_11a97ef0(void) {
  FTRACE(0x11a97ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11a97ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97ef6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97efa je 0x11a97f1b */
  if (C.zf) goto L_11a97f1b;
  /* 11a97efc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97eff movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a97f02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a97f04 je 0x11a97f1b */
  if (C.zf) goto L_11a97f1b;
  /* 11a97f06 push 0x11ab5ad0 */
  push32((uint32_t)(0x11ab5ad0u));
  /* 11a97f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97f0e push edx */
  push32((uint32_t)(EDX));
  /* 11a97f0f call 0x11a97450 */
  push32(0x11a97f14u); f_11a97450();
  /* 11a97f14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97f19 jne 0x11a97f43 */
  if (!C.zf) goto L_11a97f43;
L_11a97f1b:;
  /* 11a97f1b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a97f1d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a97f20 push eax */
  push32((uint32_t)(EAX));
  /* 11a97f21 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11a97f26 mov ecx, dword ptr [0x11aba344] */
  ECX = (r32((uint32_t)(0x11aba344)));
  /* 11a97f2c push ecx */
  push32((uint32_t)(ECX));
  /* 11a97f2d call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97f33u);
  /* 11a97f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97f35 jne 0x11a97f3b */
  if (!C.zf) goto L_11a97f3b;
  /* 11a97f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97f39 jmp 0x11a97f87 */
  goto L_11a97f87;
L_11a97f3b:;
  /* 11a97f3b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11a97f3e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a97f41 jmp 0x11a97f7b */
  goto L_11a97f7b;
L_11a97f43:;
  /* 11a97f43 push 0x11ab5acc */
  push32((uint32_t)(0x11ab5accu));
  /* 11a97f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97f4b push eax */
  push32((uint32_t)(EAX));
  /* 11a97f4c call 0x11a97450 */
  push32(0x11a97f51u); f_11a97450();
  /* 11a97f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97f56 jne 0x11a97f7b */
  if (!C.zf) goto L_11a97f7b;
  /* 11a97f58 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a97f5a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11a97f5d push ecx */
  push32((uint32_t)(ECX));
  /* 11a97f5e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a97f60 mov edx, dword ptr [0x11aba344] */
  EDX = (r32((uint32_t)(0x11aba344)));
  /* 11a97f66 push edx */
  push32((uint32_t)(EDX));
  /* 11a97f67 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a97f6du);
  /* 11a97f6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a97f6f jne 0x11a97f75 */
  if (!C.zf) goto L_11a97f75;
  /* 11a97f71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97f73 jmp 0x11a97f87 */
  goto L_11a97f87;
L_11a97f75:;
  /* 11a97f75 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a97f78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a97f7b:;
  /* 11a97f7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97f7e push ecx */
  push32((uint32_t)(ECX));
  /* 11a97f7f call 0x11a9aa00 */
  push32(0x11a97f84u); f_11a9aa00();
  /* 11a97f84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a97f87:;
  /* 11a97f87 mov esp, ebp */
  ESP = (EBP);
  /* 11a97f89 pop ebp */
  EBP = (pop32());
  /* 11a97f8a ret  */
  ESPCHK(0x11a97ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f90 @ 0x11a97f90 (79 bytes, 26 insns) */
void f_11a97f90(void) {
  FTRACE(0x11a97f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97f91 mov ebp, esp */
  EBP = (ESP);
  /* 11a97f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97f96 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11a97f9a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a97f9e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a97fa5 jmp 0x11a97fb0 */
  goto L_11a97fb0;
L_11a97fa7:;
  /* 11a97fa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a97faa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a97fad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a97fb0:;
  /* 11a97fb0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97fb4 jae 0x11a97fd6 */
  if (!C.cf) goto L_11a97fd6;
  /* 11a97fb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a97fb9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a97fbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a97fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a97fc4 mov cx, word ptr [eax*2 + 0x11ab8bc4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11ab8bc4)));
  /* 11a97fcc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a97fce jne 0x11a97fd4 */
  if (!C.zf) goto L_11a97fd4;
  /* 11a97fd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a97fd2 jmp 0x11a97fdb */
  goto L_11a97fdb;
L_11a97fd4:;
  /* 11a97fd4 jmp 0x11a97fa7 */
  goto L_11a97fa7;
L_11a97fd6:;
  /* 11a97fd6 mov eax, 1 */
  EAX = (0x1u);
L_11a97fdb:;
  /* 11a97fdb mov esp, ebp */
  ESP = (EBP);
  /* 11a97fdd pop ebp */
  EBP = (pop32());
  /* 11a97fde ret  */
  ESPCHK(0x11a97f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fe0 @ 0x11a97fe0 (135 bytes, 48 insns) */
void f_11a97fe0(void) {
  FTRACE(0x11a97fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a97fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a97fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11a97fe3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a97fe6 push esi */
  push32((uint32_t)(ESI));
  /* 11a97fe7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a97fea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a97fef and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a97ff4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a97ff9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11a97ffc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98001 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a98004 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a98006 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11a98009 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9800a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9800c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9800f push edx */
  push32((uint32_t)(EDX));
  /* 11a98010 call dword ptr [0x11aba348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba348))), 0x11a98016u);
  /* 11a98016 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98018 jne 0x11a9801e */
  if (!C.zf) goto L_11a9801e;
  /* 11a9801a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9801c jmp 0x11a98062 */
  goto L_11a98062;
L_11a9801e:;
  /* 11a9801e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11a98021 push eax */
  push32((uint32_t)(EAX));
  /* 11a98022 call 0x11a98250 */
  push32(0x11a98027u); f_11a98250();
  /* 11a98027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9802a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9802d je 0x11a9805d */
  if (C.zf) goto L_11a9805d;
  /* 11a9802f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98033 je 0x11a9805d */
  if (C.zf) goto L_11a9805d;
  /* 11a98035 mov ecx, dword ptr [0x11aba338] */
  ECX = (r32((uint32_t)(0x11aba338)));
  /* 11a9803b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9803c call 0x11a982d0 */
  push32(0x11a98041u); f_11a982d0();
  /* 11a98041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98044 mov esi, eax */
  ESI = (EAX);
  /* 11a98046 mov edx, dword ptr [0x11aba338] */
  EDX = (r32((uint32_t)(0x11aba338)));
  /* 11a9804c push edx */
  push32((uint32_t)(EDX));
  /* 11a9804d call 0x11a8c610 */
  push32(0x11a98052u); f_11a8c610();
  /* 11a98052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98055 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98057 jne 0x11a9805d */
  if (!C.zf) goto L_11a9805d;
  /* 11a98059 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9805b jmp 0x11a98062 */
  goto L_11a98062;
L_11a9805d:;
  /* 11a9805d mov eax, 1 */
  EAX = (0x1u);
L_11a98062:;
  /* 11a98062 pop esi */
  ESI = (pop32());
  /* 11a98063 mov esp, ebp */
  ESP = (EBP);
  /* 11a98065 pop ebp */
  EBP = (pop32());
  /* 11a98066 ret  */
  ESPCHK(0x11a97fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018070 @ 0x11a98070 (77 bytes, 18 insns) */
void f_11a98070(void) {
  FTRACE(0x11a98070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98070 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98071 mov ebp, esp */
  EBP = (ESP);
  /* 11a98073 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98079 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11a98083 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11a98089 push eax */
  push32((uint32_t)(EAX));
  /* 11a9808a call dword ptr [0x11abc2ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2ec))), 0x11a98090u);
  /* 11a98090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98092 je 0x11a980a9 */
  if (C.zf) goto L_11a980a9;
  /* 11a98094 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9809b jne 0x11a980a9 */
  if (!C.zf) goto L_11a980a9;
  /* 11a9809d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11a980a7 jmp 0x11a980b3 */
  goto L_11a980b3;
L_11a980a9:;
  /* 11a980a9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11a980b3:;
  /* 11a980b3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11a980b9 mov esp, ebp */
  ESP = (EBP);
  /* 11a980bb pop ebp */
  EBP = (pop32());
  /* 11a980bc ret  */
  ESPCHK(0x11a98070u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11a980c0 (388 bytes, 118 insns) */
void f_11a980c0(void) {
  FTRACE(0x11a980c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a980c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a980c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a980c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a980c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a980cd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11a980d4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a980db:;
  /* 11a980db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a980de cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a980e1 jg 0x11a98228 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a98228;
  /* 11a980e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a980ea add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a980ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a980ee sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a980f0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a980f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a980f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a980f8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a980fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a980fe cmp edx, dword ptr [ecx + 0x11ab8720] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11ab8720))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98104 jne 0x11a981fe */
  if (!C.zf) goto L_11a981fe;
  /* 11a9810a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9810d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a98110 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98114 ja 0x11a98137 */
  if ((!C.cf&&!C.zf)) goto L_11a98137;
  /* 11a98116 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9811a je 0x11a981a9 */
  if (C.zf) goto L_11a981a9;
  /* 11a98120 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98124 je 0x11a98154 */
  if (C.zf) goto L_11a98154;
  /* 11a98126 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9812a je 0x11a98176 */
  if (C.zf) goto L_11a98176;
  /* 11a9812c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98130 je 0x11a98198 */
  if (C.zf) goto L_11a98198;
  /* 11a98132 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a98137:;
  /* 11a98137 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9813e je 0x11a98165 */
  if (C.zf) goto L_11a98165;
  /* 11a98140 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98147 je 0x11a98187 */
  if (C.zf) goto L_11a98187;
  /* 11a98149 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98150 je 0x11a981ba */
  if (C.zf) goto L_11a981ba;
  /* 11a98152 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a98154:;
  /* 11a98154 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98157 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9815a add ecx, 0x11ab8724 */
  { uint32_t _a=(ECX),_b=(0x11ab8724u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98160 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a98163 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a98165:;
  /* 11a98165 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98168 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9816b mov eax, dword ptr [edx + 0x11ab872c] */
  EAX = (r32((uint32_t)(EDX + 0x11ab872c)));
  /* 11a98171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a98174 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a98176:;
  /* 11a98176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98179 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9817c add ecx, 0x11ab8730 */
  { uint32_t _a=(ECX),_b=(0x11ab8730u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98182 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a98185 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a98187:;
  /* 11a98187 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9818a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9818d mov eax, dword ptr [edx + 0x11ab8734] */
  EAX = (r32((uint32_t)(EDX + 0x11ab8734)));
  /* 11a98193 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a98196 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a98198:;
  /* 11a98198 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9819b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9819e add ecx, 0x11ab8738 */
  { uint32_t _a=(ECX),_b=(0x11ab8738u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a981a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a981a7 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a981a9:;
  /* 11a981a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a981ac imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a981af add edx, 0x11ab873c */
  { uint32_t _a=(EDX),_b=(0x11ab873cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a981b5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a981b8 jmp 0x11a981c8 */
  goto L_11a981c8;
L_11a981ba:;
  /* 11a981ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a981bd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a981c0 add eax, 0x11ab8744 */
  { uint32_t _a=(EAX),_b=(0x11ab8744u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a981c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a981c8:;
  /* 11a981c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a981cc je 0x11a981d4 */
  if (C.zf) goto L_11a981d4;
  /* 11a981ce cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a981d2 jge 0x11a981d6 */
  if ((C.sf==C.of)) goto L_11a981d6;
L_11a981d4:;
  /* 11a981d4 jmp 0x11a98228 */
  goto L_11a98228;
L_11a981d6:;
  /* 11a981d6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a981d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a981dc push ecx */
  push32((uint32_t)(ECX));
  /* 11a981dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a981e0 push edx */
  push32((uint32_t)(EDX));
  /* 11a981e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a981e4 push eax */
  push32((uint32_t)(EAX));
  /* 11a981e5 call 0x11a8d000 */
  push32(0x11a981eau); f_11a8d000();
  /* 11a981ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a981ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a981f0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a981f3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11a981f7 mov eax, 1 */
  EAX = (0x1u);
  /* 11a981fc jmp 0x11a9823e */
  goto L_11a9823e;
L_11a981fe:;
  /* 11a981fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98201 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a98204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98207 cmp eax, dword ptr [edx + 0x11ab8720] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11ab8720))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9820d jae 0x11a9821a */
  if (!C.cf) goto L_11a9821a;
  /* 11a9820f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98212 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98215 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a98218 jmp 0x11a98223 */
  goto L_11a98223;
L_11a9821a:;
  /* 11a9821a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9821d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98220 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a98223:;
  /* 11a98223 jmp 0x11a980db */
  goto L_11a980db;
L_11a98228:;
  /* 11a98228 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9822b push eax */
  push32((uint32_t)(EAX));
  /* 11a9822c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9822f push ecx */
  push32((uint32_t)(ECX));
  /* 11a98230 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98233 push edx */
  push32((uint32_t)(EDX));
  /* 11a98234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98237 push eax */
  push32((uint32_t)(EAX));
  /* 11a98238 call dword ptr [0x11abc2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f8))), 0x11a9823eu);
L_11a9823e:;
  /* 11a9823e mov esp, ebp */
  ESP = (EBP);
  /* 11a98240 pop ebp */
  EBP = (pop32());
  /* 11a98241 ret 0x10 */
  ESPCHK(0x11a980c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10018250 @ 0x11a98250 (118 bytes, 42 insns) */
void f_11a98250(void) {
  FTRACE(0x11a98250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98250 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98251 mov ebp, esp */
  EBP = (ESP);
  /* 11a98253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98256 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a9825d:;
  /* 11a9825d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98260 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a98262 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11a98265 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a98269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9826c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9826f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a98272 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a98274 je 0x11a982bf */
  if (C.zf) goto L_11a982bf;
  /* 11a98276 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a9827a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9827d jl 0x11a98292 */
  if ((C.sf!=C.of)) goto L_11a98292;
  /* 11a9827f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a98283 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98286 jg 0x11a98292 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a98292;
  /* 11a98288 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11a9828b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9828d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11a98290 jmp 0x11a982ac */
  goto L_11a982ac;
L_11a98292:;
  /* 11a98292 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a98296 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98299 jl 0x11a982ac */
  if ((C.sf!=C.of)) goto L_11a982ac;
  /* 11a9829b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a9829f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a982a2 jg 0x11a982ac */
  if ((!C.zf&&C.sf==C.of)) goto L_11a982ac;
  /* 11a982a4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11a982a7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a982a9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11a982ac:;
  /* 11a982ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a982af shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a982b2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a982b6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11a982ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a982bd jmp 0x11a9825d */
  goto L_11a9825d;
L_11a982bf:;
  /* 11a982bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a982c2 mov esp, ebp */
  ESP = (EBP);
  /* 11a982c4 pop ebp */
  EBP = (pop32());
  /* 11a982c5 ret  */
  ESPCHK(0x11a98250u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11a982d0 (101 bytes, 36 insns) */
void f_11a982d0(void) {
  FTRACE(0x11a982d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a982d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a982d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a982d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a982d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a982dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a982e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a982e2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11a982e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a982e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a982eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11a982ee:;
  /* 11a982ee movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a982f2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a982f5 jl 0x11a98300 */
  if ((C.sf!=C.of)) goto L_11a98300;
  /* 11a982f7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a982fb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a982fe jle 0x11a98312 */
  if ((C.zf||C.sf!=C.of)) goto L_11a98312;
L_11a98300:;
  /* 11a98300 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a98304 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98307 jl 0x11a9832e */
  if ((C.sf!=C.of)) goto L_11a9832e;
  /* 11a98309 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11a9830d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98310 jg 0x11a9832e */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9832e;
L_11a98312:;
  /* 11a98312 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98318 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9831b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9831e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a98320 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11a98323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98326 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98329 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a9832c jmp 0x11a982ee */
  goto L_11a982ee;
L_11a9832e:;
  /* 11a9832e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98331 mov esp, ebp */
  ESP = (EBP);
  /* 11a98333 pop ebp */
  EBP = (pop32());
  /* 11a98334 ret  */
  ESPCHK(0x11a982d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018340 @ 0x11a98340 (62 bytes, 21 insns) */
void f_11a98340(void) {
  FTRACE(0x11a98340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98340 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98341 mov ebp, esp */
  EBP = (ESP);
  /* 11a98343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98349 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9834c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9834f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a98352 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a98355 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9835b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9835e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a98361 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98366 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9836b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9836e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a98371 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a98373 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11a98377 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11a9837a mov esp, ebp */
  ESP = (EBP);
  /* 11a9837c pop ebp */
  EBP = (pop32());
  /* 11a9837d ret  */
  ESPCHK(0x11a98340u, _esp0);
  ESP += 4; return;
}

/* FUN_10018380 @ 0x11a98380 (45 bytes, 15 insns) */
void f_11a98380(void) {
  FTRACE(0x11a98380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98380 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98381 mov ebp, esp */
  EBP = (ESP);
  /* 11a98383 push ecx */
  push32((uint32_t)(ECX));
  /* 11a98384 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a98387 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9838c and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a98391 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a98394 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a98398 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a9839c sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a983a1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11a983a5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11a983a9 mov esp, ebp */
  ESP = (EBP);
  /* 11a983ab pop ebp */
  EBP = (pop32());
  /* 11a983ac ret  */
  ESPCHK(0x11a98380u, _esp0);
  ESP += 4; return;
}

/* FUN_100183b0 @ 0x11a983b0 (51 bytes, 18 insns) */
void f_11a983b0(void) {
  FTRACE(0x11a983b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a983b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a983b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a983b3 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a983b6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a983bb and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a983c0 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a983c3 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11a983c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a983c9 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11a983d0 push eax */
  push32((uint32_t)(EAX));
  /* 11a983d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a983d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a983d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a983d8 push edx */
  push32((uint32_t)(EDX));
  /* 11a983d9 call 0x11a98340 */
  push32(0x11a983deu); f_11a98340();
  /* 11a983de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a983e1 pop ebp */
  EBP = (pop32());
  /* 11a983e2 ret  */
  ESPCHK(0x11a983b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100183f0 @ 0x11a983f0 (52 bytes, 18 insns) */
void f_11a983f0(void) {
  FTRACE(0x11a983f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a983f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a983f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a983f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a983f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a983f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a983fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a983ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a98402 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a98405 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9840b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a98411 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a98414 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a98417 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a98419 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11a9841d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11a98420 mov esp, ebp */
  ESP = (EBP);
  /* 11a98422 pop ebp */
  EBP = (pop32());
  /* 11a98423 ret  */
  ESPCHK(0x11a983f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018430 @ 0x11a98430 (124 bytes, 37 insns) */
void f_11a98430(void) {
  FTRACE(0x11a98430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98430 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98431 mov ebp, esp */
  EBP = (ESP);
  /* 11a98433 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9843a jne 0x11a98449 */
  if (!C.zf) goto L_11a98449;
  /* 11a9843c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98440 jne 0x11a98449 */
  if (!C.zf) goto L_11a98449;
  /* 11a98442 mov eax, 1 */
  EAX = (0x1u);
  /* 11a98447 jmp 0x11a984aa */
  goto L_11a984aa;
L_11a98449:;
  /* 11a98449 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98450 jne 0x11a9845f */
  if (!C.zf) goto L_11a9845f;
  /* 11a98452 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98456 jne 0x11a9845f */
  if (!C.zf) goto L_11a9845f;
  /* 11a98458 mov eax, 2 */
  EAX = (0x2u);
  /* 11a9845d jmp 0x11a984aa */
  goto L_11a984aa;
L_11a9845f:;
  /* 11a9845f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a98462 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98467 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9846c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98471 jne 0x11a9847a */
  if (!C.zf) goto L_11a9847a;
  /* 11a98473 mov eax, 3 */
  EAX = (0x3u);
  /* 11a98478 jmp 0x11a984aa */
  goto L_11a984aa;
L_11a9847a:;
  /* 11a9847a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a9847d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98483 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98489 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9848f jne 0x11a984a8 */
  if (!C.zf) goto L_11a984a8;
  /* 11a98491 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98494 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11a98497 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a98499 jne 0x11a984a1 */
  if (!C.zf) goto L_11a984a1;
  /* 11a9849b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9849f je 0x11a984a8 */
  if (C.zf) goto L_11a984a8;
L_11a984a1:;
  /* 11a984a1 mov eax, 4 */
  EAX = (0x4u);
  /* 11a984a6 jmp 0x11a984aa */
  goto L_11a984aa;
L_11a984a8:;
  /* 11a984a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a984aa:;
  /* 11a984aa pop ebp */
  EBP = (pop32());
  /* 11a984ab ret  */
  ESPCHK(0x11a98430u, _esp0);
  ESP += 4; return;
}

/* FUN_100184b0 @ 0x11a984b0 (313 bytes, 95 insns) */
void f_11a984b0(void) {
  FTRACE(0x11a984b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a984b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a984b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a984b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a984b6 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11a984b9 fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a984bf fnstsw ax */
  AX = fpu_status();
  /* 11a984c1 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11a984c4 je 0x11a984e0 */
  if (C.zf) goto L_11a984e0;
  /* 11a984c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a984cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a984d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a984db jmp 0x11a985da */
  goto L_11a985da;
L_11a984e0:;
  /* 11a984e0 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a984e3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a984e8 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a984ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a984ef jne 0x11a985a9 */
  if (!C.zf) goto L_11a985a9;
  /* 11a984f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a984f8 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11a984fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a984fd jne 0x11a98509 */
  if (!C.zf) goto L_11a98509;
  /* 11a984ff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98503 je 0x11a985a9 */
  if (C.zf) goto L_11a985a9;
L_11a98509:;
  /* 11a98509 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11a98510 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11a98513 fcomp qword ptr [0x11ab47a0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11ab47a0)));
  (void)fpu_pop();
  /* 11a98519 fnstsw ax */
  AX = fpu_status();
  /* 11a9851b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11a9851e je 0x11a98529 */
  if (C.zf) goto L_11a98529;
  /* 11a98520 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11a98527 jmp 0x11a98530 */
  goto L_11a98530;
L_11a98529:;
  /* 11a98529 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11a98530:;
  /* 11a98530 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98533 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a98536:;
  /* 11a98536 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a98539 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9853e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a98541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98543 jne 0x11a98575 */
  if (!C.zf) goto L_11a98575;
  /* 11a98545 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98548 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a9854a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a9854d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98550 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a98556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a98558 je 0x11a98562 */
  if (C.zf) goto L_11a98562;
  /* 11a9855a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9855d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a9855f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a98562:;
  /* 11a98562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98565 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a98567 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a9856a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9856d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98570 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a98573 jmp 0x11a98536 */
  goto L_11a98536;
L_11a98575:;
  /* 11a98575 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11a98579 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11a9857d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11a98581 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98585 je 0x11a98592 */
  if (C.zf) goto L_11a98592;
  /* 11a98587 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11a9858b or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a9858e mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11a98592:;
  /* 11a98592 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a98594 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98597 push edx */
  push32((uint32_t)(EDX));
  /* 11a98598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9859b push eax */
  push32((uint32_t)(EAX));
  /* 11a9859c call 0x11a98340 */
  push32(0x11a985a1u); f_11a98340();
  /* 11a985a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a985a4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11a985a7 jmp 0x11a985da */
  goto L_11a985da;
L_11a985a9:;
  /* 11a985a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a985ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a985ae push ecx */
  push32((uint32_t)(ECX));
  /* 11a985af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a985b2 push edx */
  push32((uint32_t)(EDX));
  /* 11a985b3 call 0x11a98340 */
  push32(0x11a985b8u); f_11a98340();
  /* 11a985b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a985bb fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11a985be mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11a985c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a985c6 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a985cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a985ce movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11a985d1 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a985d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a985da:;
  /* 11a985da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a985dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a985e0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a985e2 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11a985e5 mov esp, ebp */
  ESP = (EBP);
  /* 11a985e7 pop ebp */
  EBP = (pop32());
  /* 11a985e8 ret  */
  ESPCHK(0x11a984b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a985ec (32 bytes, 18 insns) */
void f_11a985ec(void) {
  FTRACE(0x11a985ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a985ec push ebp */
  push32((uint32_t)(EBP));
  /* 11a985ed mov ebp, esp */
  EBP = (ESP);
  /* 11a985ef push ebx */
  push32((uint32_t)(EBX));
  /* 11a985f0 push esi */
  push32((uint32_t)(ESI));
  /* 11a985f1 push edi */
  push32((uint32_t)(EDI));
  /* 11a985f2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a985f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a985f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a985f7 push 0x11a98604 */
  push32((uint32_t)(0x11a98604u));
  /* 11a985fc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a985ff call 0x11a9c70e */
  push32(0x11a98604u); f_11a9c70e();
  /* 11a98604 pop ebp */
  EBP = (pop32());
  /* 11a98605 pop edi */
  EDI = (pop32());
  /* 11a98606 pop esi */
  ESI = (pop32());
  /* 11a98607 pop ebx */
  EBX = (pop32());
  /* 11a98608 mov esp, ebp */
  ESP = (EBP);
  /* 11a9860a pop ebp */
  EBP = (pop32());
  /* 11a9860b ret  */
  ESPCHK(0x11a985ecu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11a9862e (104 bytes, 33 insns) */
void f_11a9862e(void) {
  FTRACE(0x11a9862eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9862e push ebx */
  push32((uint32_t)(EBX));
  /* 11a9862f push esi */
  push32((uint32_t)(ESI));
  /* 11a98630 push edi */
  push32((uint32_t)(EDI));
  /* 11a98631 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a98635 push eax */
  push32((uint32_t)(EAX));
  /* 11a98636 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a98638 push 0x11a9860c */
  push32((uint32_t)(0x11a9860cu));
  /* 11a9863d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a98644 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a9864b:;
  /* 11a9864b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a9864f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a98652 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a98655 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98658 je 0x11a98688 */
  if (C.zf) goto L_11a98688;
  /* 11a9865a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9865e je 0x11a98688 */
  if (C.zf) goto L_11a98688;
  /* 11a98660 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a98663 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a98666 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a9866a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a9866d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98672 jne 0x11a98686 */
  if (!C.zf) goto L_11a98686;
  /* 11a98674 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a98679 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a9867d call 0x11a986c2 */
  push32(0x11a98682u); f_11a986c2();
  /* 11a98682 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a98686u);
L_11a98686:;
  /* 11a98686 jmp 0x11a9864b */
  goto L_11a9864b;
L_11a98688:;
  /* 11a98688 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a9868f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98692 pop edi */
  EDI = (pop32());
  /* 11a98693 pop esi */
  ESI = (pop32());
  /* 11a98694 pop ebx */
  EBX = (pop32());
  /* 11a98695 ret  */
  ESPCHK(0x11a9862eu, _esp0);
  ESP += 4; return;
}

/* FUN_100186c2 @ 0x11a986c2 (24 bytes, 10 insns) */
void f_11a986c2(void) {
  FTRACE(0x11a986c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a986c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a986c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a986c4 mov ebx, 0x11ab8ec0 */
  EBX = (0x11ab8ec0u);
  /* 11a986c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a986cc mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a986cf mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a986d2 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a986d5 pop ecx */
  ECX = (pop32());
  /* 11a986d6 pop ebx */
  EBX = (pop32());
  /* 11a986d7 ret 4 */
  ESPCHK(0x11a986c2u, _esp0);
  ESP += 8; return;
}

/* FUN_100187a1 @ 0x11a987a1 (27 bytes, 11 insns) */
void f_11a987a1(void) {
  FTRACE(0x11a987a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a987a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a987a2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a987a6 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a987a8 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a987ab push eax */
  push32((uint32_t)(EAX));
  /* 11a987ac mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a987af push eax */
  push32((uint32_t)(EAX));
  /* 11a987b0 call 0x11a9862e */
  push32(0x11a987b5u); f_11a9862e();
  /* 11a987b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a987b8 pop ebp */
  EBP = (pop32());
  /* 11a987b9 ret 4 */
  ESPCHK(0x11a987a1u, _esp0);
  ESP += 8; return;
}

/* FUN_100187c0 @ 0x11a987c0 (1085 bytes, 299 insns) */
void f_11a987c0(void) {
  FTRACE(0x11a987c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a987c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a987c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a987c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a987c6 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11a987cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a987d3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11a987da mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a987e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a987e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a987eb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11a987ef mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11a987f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a987f6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11a987fa mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11a987fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a98801 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98807 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9880a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a98810 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a98812 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98818 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11a9881c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11a98820 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11a98824 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11a98828 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11a9882c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11a98831 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11a98835 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a98838 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9883e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a98841 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98846 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98848 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11a9884c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9884f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98855 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9885b jge 0x11a9887d */
  if ((C.sf==C.of)) goto L_11a9887d;
  /* 11a9885d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a98860 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a98866 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9886c jge 0x11a9887d */
  if ((C.sf==C.of)) goto L_11a9887d;
  /* 11a9886e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a98871 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98876 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9887b jle 0x11a988b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a988b4;
L_11a9887d:;
  /* 11a9887d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a98880 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98886 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a98888 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9888a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98890 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98896 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98899 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a9889c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9889f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a988a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a988a9 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11a988af jmp 0x11a98bf9 */
  goto L_11a98bf9;
L_11a988b4:;
  /* 11a988b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a988b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a988bd cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a988c3 jg 0x11a988e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a988e7;
  /* 11a988c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a988c8 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11a988cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a988d2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a988d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a988dc mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11a988e2 jmp 0x11a98bf9 */
  goto L_11a98bf9;
L_11a988e7:;
  /* 11a988e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a988ea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a988ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a988f1 jne 0x11a9892d */
  if (!C.zf) goto L_11a9892d;
  /* 11a988f3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a988f7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a988fb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11a988ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98902 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a98905 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9890a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9890c jne 0x11a9892d */
  if (!C.zf) goto L_11a9892d;
  /* 11a9890e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98911 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98915 jne 0x11a9892d */
  if (!C.zf) goto L_11a9892d;
  /* 11a98917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9891a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9891d jne 0x11a9892d */
  if (!C.zf) goto L_11a9892d;
  /* 11a9891f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98922 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11a98928 jmp 0x11a98bf9 */
  goto L_11a98bf9;
L_11a9892d:;
  /* 11a9892d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a98930 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98936 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98938 jne 0x11a98989 */
  if (!C.zf) goto L_11a98989;
  /* 11a9893a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a9893e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a98942 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11a98946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98949 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a9894c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98952 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98954 jne 0x11a98989 */
  if (!C.zf) goto L_11a98989;
  /* 11a98956 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98959 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9895d jne 0x11a98989 */
  if (!C.zf) goto L_11a98989;
  /* 11a9895f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98962 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98965 jne 0x11a98989 */
  if (!C.zf) goto L_11a98989;
  /* 11a98967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9896a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11a98971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98974 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11a9897b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9897e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a98984 jmp 0x11a98bf9 */
  goto L_11a98bf9;
L_11a98989:;
  /* 11a98989 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11a98990 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a98997 jmp 0x11a989a2 */
  goto L_11a989a2;
L_11a98999:;
  /* 11a98999 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9899c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9899f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11a989a2:;
  /* 11a989a2 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a989a6 jge 0x11a98a61 */
  if ((C.sf==C.of)) goto L_11a98a61;
  /* 11a989ac mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a989af shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a989b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a989b4 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11a989bb mov eax, 5 */
  EAX = (0x5u);
  /* 11a989c0 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a989c3 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11a989c6 jmp 0x11a989d1 */
  goto L_11a989d1;
L_11a989c8:;
  /* 11a989c8 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a989cb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a989ce mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11a989d1:;
  /* 11a989d1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a989d5 jle 0x11a98a53 */
  if ((C.zf||C.sf!=C.of)) goto L_11a98a53;
  /* 11a989d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a989da add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a989dd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11a989e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a989e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a989e6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11a989e9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a989ec lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11a989f0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11a989f3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a989f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a989f8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11a989fb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a989fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a98a00 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a98a03 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a98a06 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11a98a09 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a98a0c push ecx */
  push32((uint32_t)(ECX));
  /* 11a98a0d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11a98a10 push edx */
  push32((uint32_t)(EDX));
  /* 11a98a11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11a98a14 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a98a16 push ecx */
  push32((uint32_t)(ECX));
  /* 11a98a17 call 0x11a949c0 */
  push32(0x11a98a1cu); f_11a949c0();
  /* 11a98a1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98a1f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11a98a22 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98a26 je 0x11a98a3c */
  if (C.zf) goto L_11a98a3c;
  /* 11a98a28 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a98a2b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11a98a30 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a98a34 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a98a37 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11a98a3c:;
  /* 11a98a3c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a98a3f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98a42 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a98a45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98a48 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98a4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a98a4e jmp 0x11a989c8 */
  goto L_11a989c8;
L_11a98a53:;
  /* 11a98a53 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a98a56 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98a59 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11a98a5c jmp 0x11a98999 */
  goto L_11a98999;
L_11a98a61:;
  /* 11a98a61 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a98a65 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a98a6a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11a98a6e:;
  /* 11a98a6e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11a98a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98a74 jle 0x11a98a9d */
  if ((C.zf||C.sf!=C.of)) goto L_11a98a9d;
  /* 11a98a76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98a79 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98a7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98a81 jne 0x11a98a9d */
  if (!C.zf) goto L_11a98a9d;
  /* 11a98a83 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11a98a86 push edx */
  push32((uint32_t)(EDX));
  /* 11a98a87 call 0x11a94ab0 */
  push32(0x11a98a8cu); f_11a94ab0();
  /* 11a98a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98a8f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a98a93 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a98a97 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11a98a9b jmp 0x11a98a6e */
  goto L_11a98a6e;
L_11a98a9d:;
  /* 11a98a9d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11a98aa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98aa3 jg 0x11a98afd */
  if ((!C.zf&&C.sf==C.of)) goto L_11a98afd;
  /* 11a98aa5 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a98aa9 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a98aad mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11a98ab1:;
  /* 11a98ab1 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11a98ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98ab7 jge 0x11a98aec */
  if ((C.sf==C.of)) goto L_11a98aec;
  /* 11a98ab9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98abc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98ac2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98ac5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98ac7 je 0x11a98ad2 */
  if (C.zf) goto L_11a98ad2;
  /* 11a98ac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a98acc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98acf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a98ad2:;
  /* 11a98ad2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a98ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11a98ad6 call 0x11a94b10 */
  push32(0x11a98adbu); f_11a94b10();
  /* 11a98adb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ade mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a98ae2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a98ae6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11a98aea jmp 0x11a98ab1 */
  goto L_11a98ab1;
L_11a98aec:;
  /* 11a98aec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98af0 je 0x11a98afd */
  if (C.zf) goto L_11a98afd;
  /* 11a98af2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11a98af6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11a98af9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11a98afd:;
  /* 11a98afd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98b00 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98b05 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98b0a jg 0x11a98b1d */
  if ((!C.zf&&C.sf==C.of)) goto L_11a98b1d;
  /* 11a98b0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98b0f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98b15 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98b1b jne 0x11a98b7e */
  if (!C.zf) goto L_11a98b7e;
L_11a98b1d:;
  /* 11a98b1d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98b21 jne 0x11a98b75 */
  if (!C.zf) goto L_11a98b75;
  /* 11a98b23 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11a98b2a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98b2e jne 0x11a98b6a */
  if (!C.zf) goto L_11a98b6a;
  /* 11a98b30 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11a98b37 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11a98b3a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a98b40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98b46 jne 0x11a98b5c */
  if (!C.zf) goto L_11a98b5c;
  /* 11a98b48 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11a98b4e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11a98b52 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a98b56 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11a98b5a jmp 0x11a98b68 */
  goto L_11a98b68;
L_11a98b5c:;
  /* 11a98b5c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11a98b60 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a98b64 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11a98b68:;
  /* 11a98b68 jmp 0x11a98b73 */
  goto L_11a98b73;
L_11a98b6a:;
  /* 11a98b6a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11a98b6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98b70 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11a98b73:;
  /* 11a98b73 jmp 0x11a98b7e */
  goto L_11a98b7e;
L_11a98b75:;
  /* 11a98b75 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11a98b78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98b7b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11a98b7e:;
  /* 11a98b7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a98b81 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98b87 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98b8d jl 0x11a98bc3 */
  if ((C.sf!=C.of)) goto L_11a98bc3;
  /* 11a98b8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a98b92 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a98b98 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a98b9a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98b9c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a98ba2 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a98bae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bb1 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a98bb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bbb mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11a98bc1 jmp 0x11a98bf9 */
  goto L_11a98bf9;
L_11a98bc3:;
  /* 11a98bc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bc6 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11a98bca mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11a98bcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bd0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98bd3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11a98bd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98bdc mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11a98bdf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a98be2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98be7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a98bea and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98bf0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a98bf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98bf5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11a98bf9:;
  /* 11a98bf9 mov esp, ebp */
  ESP = (EBP);
  /* 11a98bfb pop ebp */
  EBP = (pop32());
  /* 11a98bfc ret  */
  ESPCHK(0x11a987c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c00 @ 0x11a98c00 (195 bytes, 67 insns) */
void f_11a98c00(void) {
  FTRACE(0x11a98c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98c01 mov ebp, esp */
  EBP = (ESP);
  /* 11a98c03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98c06 mov eax, 0x11ab8fd0 */
  EAX = (0x11ab8fd0u);
  /* 11a98c0b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98c0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a98c11 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98c15 jne 0x11a98c1c */
  if (!C.zf) goto L_11a98c1c;
  /* 11a98c17 jmp 0x11a98cbf */
  goto L_11a98cbf;
L_11a98c1c:;
  /* 11a98c1c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98c20 jge 0x11a98c35 */
  if ((C.sf==C.of)) goto L_11a98c35;
  /* 11a98c22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98c25 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a98c27 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a98c2a mov edx, 0x11ab9130 */
  EDX = (0x11ab9130u);
  /* 11a98c2f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98c32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a98c35:;
  /* 11a98c35 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98c39 jne 0x11a98c43 */
  if (!C.zf) goto L_11a98c43;
  /* 11a98c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98c3e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11a98c43:;
  /* 11a98c43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98c47 je 0x11a98cbf */
  if (C.zf) goto L_11a98cbf;
  /* 11a98c49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a98c4c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98c4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a98c52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98c55 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11a98c58 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a98c5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a98c5e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a98c61 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a98c64 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98c68 jne 0x11a98c6c */
  if (!C.zf) goto L_11a98c6c;
  /* 11a98c6a jmp 0x11a98c43 */
  goto L_11a98c43;
L_11a98c6c:;
  /* 11a98c6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a98c6f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a98c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a98c75 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98c77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a98c7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98c7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a98c7f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11a98c82 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98c88 jl 0x11a98cad */
  if ((C.sf!=C.of)) goto L_11a98cad;
  /* 11a98c8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98c8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a98c8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a98c92 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a98c95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a98c98 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a98c9b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a98c9e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11a98ca1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98ca4 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11a98ca7 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11a98caa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a98cad:;
  /* 11a98cad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98cb0 push edx */
  push32((uint32_t)(EDX));
  /* 11a98cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98cb4 push eax */
  push32((uint32_t)(EAX));
  /* 11a98cb5 call 0x11a987c0 */
  push32(0x11a98cbau); f_11a987c0();
  /* 11a98cba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98cbd jmp 0x11a98c43 */
  goto L_11a98c43;
L_11a98cbf:;
  /* 11a98cbf mov esp, ebp */
  ESP = (EBP);
  /* 11a98cc1 pop ebp */
  EBP = (pop32());
  /* 11a98cc2 ret  */
  ESPCHK(0x11a98c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10018cd0 @ 0x11a98cd0 (122 bytes, 39 insns) */
void f_11a98cd0(void) {
  FTRACE(0x11a98cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11a98cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a98cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98cd7 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98cdd jae 0x11a98d01 */
  if (!C.cf) goto L_11a98d01;
  /* 11a98cdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98ce2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a98ce5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98ce8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a98ceb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a98cee mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a98cf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a98cfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98cfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98cff jne 0x11a98d1c */
  if (!C.zf) goto L_11a98d1c;
L_11a98d01:;
  /* 11a98d01 call 0x11a92370 */
  push32(0x11a98d06u); f_11a92370();
  /* 11a98d06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a98d0c call 0x11a92380 */
  push32(0x11a98d11u); f_11a92380();
  /* 11a98d11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a98d17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98d1a jmp 0x11a98d46 */
  goto L_11a98d46;
L_11a98d1c:;
  /* 11a98d1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98d1f push edx */
  push32((uint32_t)(EDX));
  /* 11a98d20 call 0x11a928a0 */
  push32(0x11a98d25u); f_11a928a0();
  /* 11a98d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98d2b push eax */
  push32((uint32_t)(EAX));
  /* 11a98d2c call 0x11a98d50 */
  push32(0x11a98d31u); f_11a98d50();
  /* 11a98d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a98d37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11a98d3b call 0x11a92930 */
  push32(0x11a98d40u); f_11a92930();
  /* 11a98d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a98d46:;
  /* 11a98d46 mov esp, ebp */
  ESP = (EBP);
  /* 11a98d48 pop ebp */
  EBP = (pop32());
  /* 11a98d49 ret  */
  ESPCHK(0x11a98cd0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11a98d50 (170 bytes, 59 insns) */
void f_11a98d50(void) {
  FTRACE(0x11a98d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98d51 mov ebp, esp */
  EBP = (ESP);
  /* 11a98d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11a98d54 push esi */
  push32((uint32_t)(ESI));
  /* 11a98d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98d58 push eax */
  push32((uint32_t)(EAX));
  /* 11a98d59 call 0x11a92720 */
  push32(0x11a98d5eu); f_11a92720();
  /* 11a98d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d61 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98d64 je 0x11a98da3 */
  if (C.zf) goto L_11a98da3;
  /* 11a98d66 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98d6a je 0x11a98d72 */
  if (C.zf) goto L_11a98d72;
  /* 11a98d6c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98d70 jne 0x11a98d8c */
  if (!C.zf) goto L_11a98d8c;
L_11a98d72:;
  /* 11a98d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a98d74 call 0x11a92720 */
  push32(0x11a98d79u); f_11a92720();
  /* 11a98d79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d7c mov esi, eax */
  ESI = (EAX);
  /* 11a98d7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a98d80 call 0x11a92720 */
  push32(0x11a98d85u); f_11a92720();
  /* 11a98d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d88 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98d8a je 0x11a98da3 */
  if (C.zf) goto L_11a98da3;
L_11a98d8c:;
  /* 11a98d8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98d8f push ecx */
  push32((uint32_t)(ECX));
  /* 11a98d90 call 0x11a92720 */
  push32(0x11a98d95u); f_11a92720();
  /* 11a98d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98d98 push eax */
  push32((uint32_t)(EAX));
  /* 11a98d99 call dword ptr [0x11abc2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc2f0))), 0x11a98d9fu);
  /* 11a98d9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98da1 je 0x11a98dac */
  if (C.zf) goto L_11a98dac;
L_11a98da3:;
  /* 11a98da3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a98daa jmp 0x11a98db5 */
  goto L_11a98db5;
L_11a98dac:;
  /* 11a98dac call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a98db2u);
  /* 11a98db2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a98db5:;
  /* 11a98db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98db8 push edx */
  push32((uint32_t)(EDX));
  /* 11a98db9 call 0x11a92640 */
  push32(0x11a98dbeu); f_11a92640();
  /* 11a98dbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98dc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a98dc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98dca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a98dcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a98dd0 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a98dd7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11a98ddc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98de0 je 0x11a98df3 */
  if (C.zf) goto L_11a98df3;
  /* 11a98de2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a98de5 push eax */
  push32((uint32_t)(EAX));
  /* 11a98de6 call 0x11a922d0 */
  push32(0x11a98debu); f_11a922d0();
  /* 11a98deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98dee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a98df1 jmp 0x11a98df5 */
  goto L_11a98df5;
L_11a98df3:;
  /* 11a98df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a98df5:;
  /* 11a98df5 pop esi */
  ESI = (pop32());
  /* 11a98df6 mov esp, ebp */
  ESP = (EBP);
  /* 11a98df8 pop ebp */
  EBP = (pop32());
  /* 11a98df9 ret  */
  ESPCHK(0x11a98d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018e00 @ 0x11a98e00 (146 bytes, 52 insns) */
void f_11a98e00(void) {
  FTRACE(0x11a98e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98e01 mov ebp, esp */
  EBP = (ESP);
  /* 11a98e03 push ebx */
  push32((uint32_t)(EBX));
  /* 11a98e04 push esi */
  push32((uint32_t)(ESI));
  /* 11a98e05 push edi */
  push32((uint32_t)(EDI));
L_11a98e06:;
  /* 11a98e06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98e0a jne 0x11a98e2a */
  if (!C.zf) goto L_11a98e2a;
  /* 11a98e0c push 0x11ab540c */
  push32((uint32_t)(0x11ab540cu));
  /* 11a98e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a98e13 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11a98e15 push 0x11ab5ad4 */
  push32((uint32_t)(0x11ab5ad4u));
  /* 11a98e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a98e1c call 0x11a868a0 */
  push32(0x11a98e21u); f_11a868a0();
  /* 11a98e21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98e27 jne 0x11a98e2a */
  if (!C.zf) goto L_11a98e2a;
  /* 11a98e29 int3  */
  x86_unimpl("int3 @ 0x11a98e29");
L_11a98e2a:;
  /* 11a98e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a98e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a98e2e jne 0x11a98e06 */
  if (!C.zf) goto L_11a98e06;
  /* 11a98e30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e33 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a98e36 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11a98e3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a98e3e je 0x11a98e8d */
  if (C.zf) goto L_11a98e8d;
  /* 11a98e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e43 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a98e46 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a98e49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a98e4b je 0x11a98e8d */
  if (C.zf) goto L_11a98e8d;
  /* 11a98e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a98e4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e52 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a98e55 push eax */
  push32((uint32_t)(EAX));
  /* 11a98e56 call 0x11a8a270 */
  push32(0x11a98e5bu); f_11a8a270();
  /* 11a98e5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98e5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e61 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a98e64 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11a98e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e6d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11a98e70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e73 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11a98e79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e7c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11a98e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a98e86 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11a98e8d:;
  /* 11a98e8d pop edi */
  EDI = (pop32());
  /* 11a98e8e pop esi */
  ESI = (pop32());
  /* 11a98e8f pop ebx */
  EBX = (pop32());
  /* 11a98e90 pop ebp */
  EBP = (pop32());
  /* 11a98e91 ret  */
  ESPCHK(0x11a98e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ea0 @ 0x11a98ea0 (289 bytes, 97 insns) */
void f_11a98ea0(void) {
  FTRACE(0x11a98ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11a98ea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98ea6 push esi */
  push32((uint32_t)(ESI));
  /* 11a98ea7 mov eax, dword ptr [0x11ab8ed0] */
  EAX = (r32((uint32_t)(0x11ab8ed0)));
  /* 11a98eac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a98eaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a98eb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a98ebd jmp 0x11a98ec8 */
  goto L_11a98ec8;
L_11a98ebf:;
  /* 11a98ebf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98ec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ec5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a98ec8:;
  /* 11a98ec8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98ecc jae 0x11a98f01 */
  if (!C.cf) goto L_11a98f01;
  /* 11a98ece mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98ed1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98ed4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11a98ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a98ed8 call 0x11a8c610 */
  push32(0x11a98eddu); f_11a8c610();
  /* 11a98edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ee0 mov esi, eax */
  ESI = (EAX);
  /* 11a98ee2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98ee5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98ee8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11a98eec push ecx */
  push32((uint32_t)(ECX));
  /* 11a98eed call 0x11a8c610 */
  push32(0x11a98ef2u); f_11a8c610();
  /* 11a98ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ef5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ef8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11a98efc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a98eff jmp 0x11a98ebf */
  goto L_11a98ebf;
L_11a98f01:;
  /* 11a98f01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a98f04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f07 push eax */
  push32((uint32_t)(EAX));
  /* 11a98f08 call 0x11a897c0 */
  push32(0x11a98f0du); f_11a897c0();
  /* 11a98f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a98f13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98f17 je 0x11a98fb9 */
  if (C.zf) goto L_11a98fb9;
  /* 11a98f1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a98f20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a98f23 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a98f2a jmp 0x11a98f35 */
  goto L_11a98f35;
L_11a98f2c:;
  /* 11a98f2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98f2f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f32 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a98f35:;
  /* 11a98f35 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98f39 jae 0x11a98faa */
  if (!C.cf) goto L_11a98faa;
  /* 11a98f3b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f3e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11a98f41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f44 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f47 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a98f4a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98f4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98f50 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11a98f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11a98f54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f57 push edx */
  push32((uint32_t)(EDX));
  /* 11a98f58 call 0x11a8c790 */
  push32(0x11a98f5du); f_11a8c790();
  /* 11a98f5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f60 push eax */
  push32((uint32_t)(EAX));
  /* 11a98f61 call 0x11a8c610 */
  push32(0x11a98f66u); f_11a8c610();
  /* 11a98f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f69 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f6c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f6e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a98f71 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f74 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11a98f77 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a98f80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98f83 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a98f86 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11a98f8a push eax */
  push32((uint32_t)(EAX));
  /* 11a98f8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98f8e push ecx */
  push32((uint32_t)(ECX));
  /* 11a98f8f call 0x11a8c790 */
  push32(0x11a98f94u); f_11a8c790();
  /* 11a98f94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98f97 push eax */
  push32((uint32_t)(EAX));
  /* 11a98f98 call 0x11a8c610 */
  push32(0x11a98f9du); f_11a8c610();
  /* 11a98f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98fa0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98fa3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98fa5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a98fa8 jmp 0x11a98f2c */
  goto L_11a98f2c;
L_11a98faa:;
  /* 11a98faa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98fad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a98fb0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a98fb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98fb6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11a98fb9:;
  /* 11a98fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a98fbc pop esi */
  ESI = (pop32());
  /* 11a98fbd mov esp, ebp */
  ESP = (EBP);
  /* 11a98fbf pop ebp */
  EBP = (pop32());
  /* 11a98fc0 ret  */
  ESPCHK(0x11a98ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x11a98fd0 (291 bytes, 97 insns) */
void f_11a98fd0(void) {
  FTRACE(0x11a98fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a98fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a98fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11a98fd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a98fd6 push esi */
  push32((uint32_t)(ESI));
  /* 11a98fd7 mov eax, dword ptr [0x11ab8ed0] */
  EAX = (r32((uint32_t)(0x11ab8ed0)));
  /* 11a98fdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a98fdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a98fe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a98fed jmp 0x11a98ff8 */
  goto L_11a98ff8;
L_11a98fef:;
  /* 11a98fef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a98ff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a98ff5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a98ff8:;
  /* 11a98ff8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a98ffc jae 0x11a99032 */
  if (!C.cf) goto L_11a99032;
  /* 11a98ffe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99004 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11a99008 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99009 call 0x11a8c610 */
  push32(0x11a9900eu); f_11a8c610();
  /* 11a9900e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99011 mov esi, eax */
  ESI = (EAX);
  /* 11a99013 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99016 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99019 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11a9901d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9901e call 0x11a8c610 */
  push32(0x11a99023u); f_11a8c610();
  /* 11a99023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99026 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99029 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11a9902d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a99030 jmp 0x11a98fef */
  goto L_11a98fef;
L_11a99032:;
  /* 11a99032 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a99035 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99038 push eax */
  push32((uint32_t)(EAX));
  /* 11a99039 call 0x11a897c0 */
  push32(0x11a9903eu); f_11a897c0();
  /* 11a9903e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99041 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a99044 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99048 je 0x11a990eb */
  if (C.zf) goto L_11a990eb;
  /* 11a9904e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99051 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a99054 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a9905b jmp 0x11a99066 */
  goto L_11a99066;
L_11a9905d:;
  /* 11a9905d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99060 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99063 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a99066:;
  /* 11a99066 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9906a jae 0x11a990dc */
  if (!C.cf) goto L_11a990dc;
  /* 11a9906c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9906f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11a99072 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99078 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a9907b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9907e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99081 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11a99085 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99086 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99089 push edx */
  push32((uint32_t)(EDX));
  /* 11a9908a call 0x11a8c790 */
  push32(0x11a9908fu); f_11a8c790();
  /* 11a9908f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99092 push eax */
  push32((uint32_t)(EAX));
  /* 11a99093 call 0x11a8c610 */
  push32(0x11a99098u); f_11a8c610();
  /* 11a99098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9909b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9909e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a990a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a990a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a990a6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11a990a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a990ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a990af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a990b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a990b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a990b8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11a990bc push eax */
  push32((uint32_t)(EAX));
  /* 11a990bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a990c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a990c1 call 0x11a8c790 */
  push32(0x11a990c6u); f_11a8c790();
  /* 11a990c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a990c9 push eax */
  push32((uint32_t)(EAX));
  /* 11a990ca call 0x11a8c610 */
  push32(0x11a990cfu); f_11a8c610();
  /* 11a990cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a990d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a990d5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a990d7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a990da jmp 0x11a9905d */
  goto L_11a9905d;
L_11a990dc:;
  /* 11a990dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a990df mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a990e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a990e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a990e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11a990eb:;
  /* 11a990eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a990ee pop esi */
  ESI = (pop32());
  /* 11a990ef mov esp, ebp */
  ESP = (EBP);
  /* 11a990f1 pop ebp */
  EBP = (pop32());
  /* 11a990f2 ret  */
  ESPCHK(0x11a98fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019100 @ 0x11a99100 (878 bytes, 273 insns) */
void f_11a99100(void) {
  FTRACE(0x11a99100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99100 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99101 mov ebp, esp */
  EBP = (ESP);
  /* 11a99103 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99106 push esi */
  push32((uint32_t)(ESI));
  /* 11a99107 mov eax, dword ptr [0x11ab8ed0] */
  EAX = (r32((uint32_t)(0x11ab8ed0)));
  /* 11a9910c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9910f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a99116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a9911d jmp 0x11a99128 */
  goto L_11a99128;
L_11a9911f:;
  /* 11a9911f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99125 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a99128:;
  /* 11a99128 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9912c jae 0x11a99161 */
  if (!C.cf) goto L_11a99161;
  /* 11a9912e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99134 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11a99137 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99138 call 0x11a8c610 */
  push32(0x11a9913du); f_11a8c610();
  /* 11a9913d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99140 mov esi, eax */
  ESI = (EAX);
  /* 11a99142 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99145 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99148 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11a9914c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9914d call 0x11a8c610 */
  push32(0x11a99152u); f_11a8c610();
  /* 11a99152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99155 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99158 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11a9915c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a9915f jmp 0x11a9911f */
  goto L_11a9911f;
L_11a99161:;
  /* 11a99161 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a99168 jmp 0x11a99173 */
  goto L_11a99173;
L_11a9916a:;
  /* 11a9916a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9916d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99170 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a99173:;
  /* 11a99173 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99177 jae 0x11a991ad */
  if (!C.cf) goto L_11a991ad;
  /* 11a99179 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9917c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9917f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11a99183 push eax */
  push32((uint32_t)(EAX));
  /* 11a99184 call 0x11a8c610 */
  push32(0x11a99189u); f_11a8c610();
  /* 11a99189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9918c mov esi, eax */
  ESI = (EAX);
  /* 11a9918e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99191 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99194 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11a99198 push eax */
  push32((uint32_t)(EAX));
  /* 11a99199 call 0x11a8c610 */
  push32(0x11a9919eu); f_11a8c610();
  /* 11a9919e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a991a1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a991a4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11a991a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a991ab jmp 0x11a9916a */
  goto L_11a9916a;
L_11a991ad:;
  /* 11a991ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a991b0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11a991b6 push eax */
  push32((uint32_t)(EAX));
  /* 11a991b7 call 0x11a8c610 */
  push32(0x11a991bcu); f_11a8c610();
  /* 11a991bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a991bf mov esi, eax */
  ESI = (EAX);
  /* 11a991c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a991c4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11a991ca push edx */
  push32((uint32_t)(EDX));
  /* 11a991cb call 0x11a8c610 */
  push32(0x11a991d0u); f_11a8c610();
  /* 11a991d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a991d3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a991d6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11a991da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a991dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a991e0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11a991e6 push edx */
  push32((uint32_t)(EDX));
  /* 11a991e7 call 0x11a8c610 */
  push32(0x11a991ecu); f_11a8c610();
  /* 11a991ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a991ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a991f2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a991f6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a991f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a991fc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11a99202 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99203 call 0x11a8c610 */
  push32(0x11a99208u); f_11a8c610();
  /* 11a99208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9920b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9920e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11a99212 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a99215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99218 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11a9921e push edx */
  push32((uint32_t)(EDX));
  /* 11a9921f call 0x11a8c610 */
  push32(0x11a99224u); f_11a8c610();
  /* 11a99224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9922a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a9922e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a99231 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a99234 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99239 push eax */
  push32((uint32_t)(EAX));
  /* 11a9923a call 0x11a897c0 */
  push32(0x11a9923fu); f_11a897c0();
  /* 11a9923f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a99245 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99249 je 0x11a99466 */
  if (C.zf) goto L_11a99466;
  /* 11a9924f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99252 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a99255 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99258 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9925e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a99261 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11a99266 mov eax, dword ptr [0x11ab8ed0] */
  EAX = (r32((uint32_t)(0x11ab8ed0)));
  /* 11a9926b push eax */
  push32((uint32_t)(EAX));
  /* 11a9926c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9926f push ecx */
  push32((uint32_t)(ECX));
  /* 11a99270 call 0x11a91f90 */
  push32(0x11a99275u); f_11a91f90();
  /* 11a99275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99278 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a9927f jmp 0x11a9928a */
  goto L_11a9928a;
L_11a99281:;
  /* 11a99281 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99284 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99287 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11a9928a:;
  /* 11a9928a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9928e jae 0x11a992fe */
  if (!C.cf) goto L_11a992fe;
  /* 11a99290 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99293 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a99296 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99299 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11a9929c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9929f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a992a2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a992a5 push edx */
  push32((uint32_t)(EDX));
  /* 11a992a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a992a9 push eax */
  push32((uint32_t)(EAX));
  /* 11a992aa call 0x11a8c790 */
  push32(0x11a992afu); f_11a8c790();
  /* 11a992af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a992b2 push eax */
  push32((uint32_t)(EAX));
  /* 11a992b3 call 0x11a8c610 */
  push32(0x11a992b8u); f_11a8c610();
  /* 11a992b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a992bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a992be lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a992c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a992c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a992c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a992cb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a992ce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11a992d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a992d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a992d8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11a992dc push edx */
  push32((uint32_t)(EDX));
  /* 11a992dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a992e0 push eax */
  push32((uint32_t)(EAX));
  /* 11a992e1 call 0x11a8c790 */
  push32(0x11a992e6u); f_11a8c790();
  /* 11a992e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a992e9 push eax */
  push32((uint32_t)(EAX));
  /* 11a992ea call 0x11a8c610 */
  push32(0x11a992efu); f_11a8c610();
  /* 11a992ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a992f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a992f5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a992f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a992fc jmp 0x11a99281 */
  goto L_11a99281;
L_11a992fe:;
  /* 11a992fe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a99305 jmp 0x11a99310 */
  goto L_11a99310;
L_11a99307:;
  /* 11a99307 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9930a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9930d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a99310:;
  /* 11a99310 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99314 jae 0x11a99386 */
  if (!C.cf) goto L_11a99386;
  /* 11a99316 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99319 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9931c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9931f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11a99323 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99329 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11a9932d push eax */
  push32((uint32_t)(EAX));
  /* 11a9932e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99331 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99332 call 0x11a8c790 */
  push32(0x11a99337u); f_11a8c790();
  /* 11a99337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9933a push eax */
  push32((uint32_t)(EAX));
  /* 11a9933b call 0x11a8c610 */
  push32(0x11a99340u); f_11a8c610();
  /* 11a99340 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99343 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99346 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11a9934a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a9934d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a99350 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a99353 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99356 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11a9935a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9935d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99360 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11a99364 push eax */
  push32((uint32_t)(EAX));
  /* 11a99365 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99368 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99369 call 0x11a8c790 */
  push32(0x11a9936eu); f_11a8c790();
  /* 11a9936e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99371 push eax */
  push32((uint32_t)(EAX));
  /* 11a99372 call 0x11a8c610 */
  push32(0x11a99377u); f_11a8c610();
  /* 11a99377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9937a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9937d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11a99381 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a99384 jmp 0x11a99307 */
  goto L_11a99307;
L_11a99386:;
  /* 11a99386 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a99389 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9938c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11a99392 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99395 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11a9939b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9939c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9939f push edx */
  push32((uint32_t)(EDX));
  /* 11a993a0 call 0x11a8c790 */
  push32(0x11a993a5u); f_11a8c790();
  /* 11a993a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a993a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a993a9 call 0x11a8c610 */
  push32(0x11a993aeu); f_11a8c610();
  /* 11a993ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a993b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a993b4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a993b8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a993bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a993be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a993c1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11a993c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a993ca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11a993d0 push eax */
  push32((uint32_t)(EAX));
  /* 11a993d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a993d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a993d5 call 0x11a8c790 */
  push32(0x11a993dau); f_11a8c790();
  /* 11a993da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a993dd push eax */
  push32((uint32_t)(EAX));
  /* 11a993de call 0x11a8c610 */
  push32(0x11a993e3u); f_11a8c610();
  /* 11a993e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a993e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a993e9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11a993ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a993f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a993f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a993f6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11a993fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a993ff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11a99405 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99406 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99409 push edx */
  push32((uint32_t)(EDX));
  /* 11a9940a call 0x11a8c790 */
  push32(0x11a9940fu); f_11a8c790();
  /* 11a9940f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99412 push eax */
  push32((uint32_t)(EAX));
  /* 11a99413 call 0x11a8c610 */
  push32(0x11a99418u); f_11a8c610();
  /* 11a99418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9941b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9941e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a99422 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a99425 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a99428 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9942b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11a99431 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99434 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11a9943a push eax */
  push32((uint32_t)(EAX));
  /* 11a9943b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9943e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9943f call 0x11a8c790 */
  push32(0x11a99444u); f_11a8c790();
  /* 11a99444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99447 push eax */
  push32((uint32_t)(EAX));
  /* 11a99448 call 0x11a8c610 */
  push32(0x11a9944du); f_11a8c610();
  /* 11a9944d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99450 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99453 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11a99457 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a9945a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9945d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99460 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11a99466:;
  /* 11a99466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99469 pop esi */
  ESI = (pop32());
  /* 11a9946a mov esp, ebp */
  ESP = (EBP);
  /* 11a9946c pop ebp */
  EBP = (pop32());
  /* 11a9946d ret  */
  ESPCHK(0x11a99100u, _esp0);
  ESP += 4; return;
}

/* FUN_10019470 @ 0x11a99470 (31 bytes, 15 insns) */
void f_11a99470(void) {
  FTRACE(0x11a99470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99470 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99471 mov ebp, esp */
  EBP = (ESP);
  /* 11a99473 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a99475 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99478 push eax */
  push32((uint32_t)(EAX));
  /* 11a99479 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9947c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9947d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99480 push edx */
  push32((uint32_t)(EDX));
  /* 11a99481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99484 push eax */
  push32((uint32_t)(EAX));
  /* 11a99485 call 0x11a99490 */
  push32(0x11a9948au); f_11a99490();
  /* 11a9948a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9948d pop ebp */
  EBP = (pop32());
  /* 11a9948e ret  */
  ESPCHK(0x11a99470u, _esp0);
  ESP += 4; return;
}

/* FUN_10019490 @ 0x11a99490 (393 bytes, 123 insns) */
void f_11a99490(void) {
  FTRACE(0x11a99490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99490 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99491 mov ebp, esp */
  EBP = (ESP);
  /* 11a99493 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99496 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9949a jne 0x11a994a6 */
  if (!C.zf) goto L_11a994a6;
  /* 11a9949c mov eax, dword ptr [0x11ab8ed0] */
  EAX = (r32((uint32_t)(0x11ab8ed0)));
  /* 11a994a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a994a4 jmp 0x11a994ac */
  goto L_11a994ac;
L_11a994a6:;
  /* 11a994a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a994a9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a994ac:;
  /* 11a994ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a994af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a994b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a994b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a994b8 push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a994bd call dword ptr [0x11abc3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a4))), 0x11a994c3u);
  /* 11a994c3 cmp dword ptr [0x11aba43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a994ca je 0x11a994ea */
  if (C.zf) goto L_11a994ea;
  /* 11a994cc push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a994d1 call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a994d7u);
  /* 11a994d7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a994d9 call 0x11a8f2d0 */
  push32(0x11a994deu); f_11a8f2d0();
  /* 11a994de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a994e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a994e8 jmp 0x11a994f1 */
  goto L_11a994f1;
L_11a994ea:;
  /* 11a994ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a994f1:;
  /* 11a994f1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a994f5 jbe 0x11a995e2 */
  if ((C.cf||C.zf)) goto L_11a995e2;
  /* 11a994fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a994fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a99500 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11a99503 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a99507 je 0x11a99511 */
  if (C.zf) goto L_11a99511;
  /* 11a99509 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9950d je 0x11a99516 */
  if (C.zf) goto L_11a99516;
  /* 11a9950f jmp 0x11a99570 */
  goto L_11a99570;
L_11a99511:;
  /* 11a99511 jmp 0x11a995e2 */
  goto L_11a995e2;
L_11a99516:;
  /* 11a99516 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9951c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11a9951f mov dword ptr [0x11aba428], 0 */
  w32((uint32_t)(0x11aba428), (0x0u));
  /* 11a99529 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9952c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a9952f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99532 jne 0x11a99547 */
  if (!C.zf) goto L_11a99547;
  /* 11a99534 mov dword ptr [0x11aba428], 1 */
  w32((uint32_t)(0x11aba428), (0x1u));
  /* 11a9953e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99541 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99544 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11a99547:;
  /* 11a99547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9954a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9954b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a9954e push edx */
  push32((uint32_t)(EDX));
  /* 11a9954f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a99552 push eax */
  push32((uint32_t)(EAX));
  /* 11a99553 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99556 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99557 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9955a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9955c push eax */
  push32((uint32_t)(EAX));
  /* 11a9955d call 0x11a99620 */
  push32(0x11a99562u); f_11a99620();
  /* 11a99562 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99565 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99568 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9956b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a9956e jmp 0x11a995dd */
  goto L_11a995dd;
L_11a99570:;
  /* 11a99570 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a99575 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a99577 mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9957d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9957f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a99583 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a99589 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9958b je 0x11a995b8 */
  if (C.zf) goto L_11a995b8;
  /* 11a9958d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99591 jbe 0x11a995b8 */
  if ((C.cf||C.zf)) goto L_11a995b8;
  /* 11a99593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99596 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99599 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9959b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a9959d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a995a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a995a3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a995a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a995a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a995ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a995af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a995b2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a995b5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a995b8:;
  /* 11a995b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a995bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a995be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a995c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a995c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a995c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a995c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a995cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a995ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a995d1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a995d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a995d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a995da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a995dd:;
  /* 11a995dd jmp 0x11a994f1 */
  goto L_11a994f1;
L_11a995e2:;
  /* 11a995e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a995e6 je 0x11a995f4 */
  if (C.zf) goto L_11a995f4;
  /* 11a995e8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a995ea call 0x11a8f370 */
  push32(0x11a995efu); f_11a8f370();
  /* 11a995ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a995f2 jmp 0x11a995ff */
  goto L_11a995ff;
L_11a995f4:;
  /* 11a995f4 push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a995f9 call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a995ffu);
L_11a995ff:;
  /* 11a995ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99603 jbe 0x11a99613 */
  if ((C.cf||C.zf)) goto L_11a99613;
  /* 11a99605 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99608 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a9960b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9960e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99611 jmp 0x11a99615 */
  goto L_11a99615;
L_11a99613:;
  /* 11a99613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a99615:;
  /* 11a99615 mov esp, ebp */
  ESP = (EBP);
  /* 11a99617 pop ebp */
  EBP = (pop32());
  /* 11a99618 ret  */
  ESPCHK(0x11a99490u, _esp0);
  ESP += 4; return;
}

/* FUN_10019620 @ 0x11a99620 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11a99620(void) {
  FTRACE(0x11a99620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99620 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99621 mov ebp, esp */
  EBP = (ESP);
  /* 11a99623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99626 push esi */
  push32((uint32_t)(ESI));
  /* 11a99627 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11a9962b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9962e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99631 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99634 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a99637 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9963b ja 0x11a99b88 */
  if ((!C.cf&&!C.zf)) goto L_11a99b88;
  /* 11a99641 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a99646 mov dl, byte ptr [eax + 0x11a99be9] */
  DL = (r8((uint32_t)(EAX + 0x11a99be9)));
  /* 11a9964c jmp dword ptr [edx*4 + 0x11a99b8d] */
  switch (EDX) {
    case 0: goto L_11a99b66;
    case 1: goto L_11a99675;
    case 2: goto L_11a996bb;
    case 3: goto L_11a99808;
    case 4: goto L_11a99830;
    case 5: goto L_11a998cf;
    case 6: goto L_11a9993b;
    case 7: goto L_11a99964;
    case 8: goto L_11a999a5;
    case 9: goto L_11a99a87;
    case 10: goto L_11a99aee;
    case 11: goto L_11a99b3b;
    case 12: goto L_11a99653;
    case 13: goto L_11a99698;
    case 14: goto L_11a996de;
    case 15: goto L_11a997de;
    case 16: goto L_11a99875;
    case 17: goto L_11a998a2;
    case 18: goto L_11a998f7;
    case 19: goto L_11a9997b;
    case 20: goto L_11a99a29;
    case 21: goto L_11a99ab8;
    case 22: goto L_11a99b88;
    default: x86_unimpl("switch@0x11a9964c out of table"); return;
  }
L_11a99653:;
  /* 11a99653 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99656 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99657 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9965a push edx */
  push32((uint32_t)(EDX));
  /* 11a9965b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9965e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11a99661 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99664 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a99667 push eax */
  push32((uint32_t)(EAX));
  /* 11a99668 call 0x11a99c40 */
  push32(0x11a9966du); f_11a99c40();
  /* 11a9966d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99670 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99675:;
  /* 11a99675 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99678 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99679 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9967c push edx */
  push32((uint32_t)(EDX));
  /* 11a9967d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99680 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11a99683 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99686 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11a9968a push eax */
  push32((uint32_t)(EAX));
  /* 11a9968b call 0x11a99c40 */
  push32(0x11a99690u); f_11a99c40();
  /* 11a99690 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99693 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99698:;
  /* 11a99698 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9969b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9969c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9969f push edx */
  push32((uint32_t)(EDX));
  /* 11a996a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a996a3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a996a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a996a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11a996ad push eax */
  push32((uint32_t)(EAX));
  /* 11a996ae call 0x11a99c40 */
  push32(0x11a996b3u); f_11a99c40();
  /* 11a996b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a996b6 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a996bb:;
  /* 11a996bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a996be push ecx */
  push32((uint32_t)(ECX));
  /* 11a996bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a996c2 push edx */
  push32((uint32_t)(EDX));
  /* 11a996c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a996c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a996c9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a996cc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11a996d0 push eax */
  push32((uint32_t)(EAX));
  /* 11a996d1 call 0x11a99c40 */
  push32(0x11a996d6u); f_11a99c40();
  /* 11a996d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a996d9 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a996de:;
  /* 11a996de cmp dword ptr [0x11aba428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a996e5 je 0x11a99766 */
  if (C.zf) goto L_11a99766;
  /* 11a996e7 mov dword ptr [0x11aba428], 0 */
  w32((uint32_t)(0x11aba428), (0x0u));
  /* 11a996f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a996f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a996f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a996f8 push edx */
  push32((uint32_t)(EDX));
  /* 11a996f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a996fc push eax */
  push32((uint32_t)(EAX));
  /* 11a996fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99700 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99701 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99704 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11a9970a push eax */
  push32((uint32_t)(EAX));
  /* 11a9970b call 0x11a99df0 */
  push32(0x11a99710u); f_11a99df0();
  /* 11a99710 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99713 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99716 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99719 jne 0x11a99720 */
  if (!C.zf) goto L_11a99720;
  /* 11a9971b jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99720:;
  /* 11a99720 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99723 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a99725 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11a99728 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9972b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9972d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99730 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99733 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a99735 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99738 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9973a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9973d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99740 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a99742 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99745 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99746 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99749 push edx */
  push32((uint32_t)(EDX));
  /* 11a9974a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9974d push eax */
  push32((uint32_t)(EAX));
  /* 11a9974e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99751 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99752 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99755 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11a9975b push eax */
  push32((uint32_t)(EAX));
  /* 11a9975c call 0x11a99df0 */
  push32(0x11a99761u); f_11a99df0();
  /* 11a99761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99764 jmp 0x11a997d9 */
  goto L_11a997d9;
L_11a99766:;
  /* 11a99766 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99769 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9976a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9976d push edx */
  push32((uint32_t)(EDX));
  /* 11a9976e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99771 push eax */
  push32((uint32_t)(EAX));
  /* 11a99772 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99775 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99776 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99779 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11a9977f push eax */
  push32((uint32_t)(EAX));
  /* 11a99780 call 0x11a99df0 */
  push32(0x11a99785u); f_11a99df0();
  /* 11a99785 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99788 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9978b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9978e jne 0x11a99795 */
  if (!C.zf) goto L_11a99795;
  /* 11a99790 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99795:;
  /* 11a99795 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99798 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9979a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11a9979d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a997a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a997a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a997a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a997a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a997aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a997ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a997af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a997b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a997b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a997b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a997ba push ecx */
  push32((uint32_t)(ECX));
  /* 11a997bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a997be push edx */
  push32((uint32_t)(EDX));
  /* 11a997bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a997c2 push eax */
  push32((uint32_t)(EAX));
  /* 11a997c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a997c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a997c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a997ca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11a997d0 push eax */
  push32((uint32_t)(EAX));
  /* 11a997d1 call 0x11a99df0 */
  push32(0x11a997d6u); f_11a99df0();
  /* 11a997d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a997d9:;
  /* 11a997d9 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a997de:;
  /* 11a997de mov ecx, dword ptr [0x11aba428] */
  ECX = (r32((uint32_t)(0x11aba428)));
  /* 11a997e4 mov dword ptr [0x11aba438], ecx */
  w32((uint32_t)(0x11aba438), (ECX));
  /* 11a997ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a997ed push edx */
  push32((uint32_t)(EDX));
  /* 11a997ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a997f1 push eax */
  push32((uint32_t)(EAX));
  /* 11a997f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a997f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a997f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a997fa push edx */
  push32((uint32_t)(EDX));
  /* 11a997fb call 0x11a99c90 */
  push32(0x11a99800u); f_11a99c90();
  /* 11a99800 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99803 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99808:;
  /* 11a99808 mov eax, dword ptr [0x11aba428] */
  EAX = (r32((uint32_t)(0x11aba428)));
  /* 11a9980d mov dword ptr [0x11aba438], eax */
  w32((uint32_t)(0x11aba438), (EAX));
  /* 11a99812 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99815 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99816 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99819 push edx */
  push32((uint32_t)(EDX));
  /* 11a9981a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9981c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9981f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a99822 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99823 call 0x11a99c90 */
  push32(0x11a99828u); f_11a99c90();
  /* 11a99828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9982b jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99830:;
  /* 11a99830 mov edx, dword ptr [0x11aba428] */
  EDX = (r32((uint32_t)(0x11aba428)));
  /* 11a99836 mov dword ptr [0x11aba438], edx */
  w32((uint32_t)(0x11aba438), (EDX));
  /* 11a9983c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9983f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a99842 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99843 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11a99848 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a9984a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9984d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99851 jne 0x11a9985a */
  if (!C.zf) goto L_11a9985a;
  /* 11a99853 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11a9985a:;
  /* 11a9985a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9985d push edx */
  push32((uint32_t)(EDX));
  /* 11a9985e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99861 push eax */
  push32((uint32_t)(EAX));
  /* 11a99862 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a99864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99867 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99868 call 0x11a99c90 */
  push32(0x11a9986du); f_11a99c90();
  /* 11a9986d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99870 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99875:;
  /* 11a99875 mov edx, dword ptr [0x11aba428] */
  EDX = (r32((uint32_t)(0x11aba428)));
  /* 11a9987b mov dword ptr [0x11aba438], edx */
  w32((uint32_t)(0x11aba438), (EDX));
  /* 11a99881 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99884 push eax */
  push32((uint32_t)(EAX));
  /* 11a99885 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99888 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99889 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a9988b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9988e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a99891 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99894 push eax */
  push32((uint32_t)(EAX));
  /* 11a99895 call 0x11a99c90 */
  push32(0x11a9989au); f_11a99c90();
  /* 11a9989a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9989d jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a998a2:;
  /* 11a998a2 mov ecx, dword ptr [0x11aba428] */
  ECX = (r32((uint32_t)(0x11aba428)));
  /* 11a998a8 mov dword ptr [0x11aba438], ecx */
  w32((uint32_t)(0x11aba438), (ECX));
  /* 11a998ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a998b1 push edx */
  push32((uint32_t)(EDX));
  /* 11a998b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a998b5 push eax */
  push32((uint32_t)(EAX));
  /* 11a998b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a998b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a998bb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a998be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a998c1 push edx */
  push32((uint32_t)(EDX));
  /* 11a998c2 call 0x11a99c90 */
  push32(0x11a998c7u); f_11a99c90();
  /* 11a998c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a998ca jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a998cf:;
  /* 11a998cf mov eax, dword ptr [0x11aba428] */
  EAX = (r32((uint32_t)(0x11aba428)));
  /* 11a998d4 mov dword ptr [0x11aba438], eax */
  w32((uint32_t)(0x11aba438), (EAX));
  /* 11a998d9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a998dc push ecx */
  push32((uint32_t)(ECX));
  /* 11a998dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a998e0 push edx */
  push32((uint32_t)(EDX));
  /* 11a998e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a998e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a998e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a998e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a998ea call 0x11a99c90 */
  push32(0x11a998efu); f_11a99c90();
  /* 11a998ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a998f2 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a998f7:;
  /* 11a998f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a998fa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a998fe jg 0x11a9991c */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9991c;
  /* 11a99900 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99903 push eax */
  push32((uint32_t)(EAX));
  /* 11a99904 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99907 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99908 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9990b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11a99911 push eax */
  push32((uint32_t)(EAX));
  /* 11a99912 call 0x11a99c40 */
  push32(0x11a99917u); f_11a99c40();
  /* 11a99917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9991a jmp 0x11a99936 */
  goto L_11a99936;
L_11a9991c:;
  /* 11a9991c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9991f push ecx */
  push32((uint32_t)(ECX));
  /* 11a99920 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99923 push edx */
  push32((uint32_t)(EDX));
  /* 11a99924 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99927 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11a9992d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9992e call 0x11a99c40 */
  push32(0x11a99933u); f_11a99c40();
  /* 11a99933 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a99936:;
  /* 11a99936 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a9993b:;
  /* 11a9993b mov edx, dword ptr [0x11aba428] */
  EDX = (r32((uint32_t)(0x11aba428)));
  /* 11a99941 mov dword ptr [0x11aba438], edx */
  w32((uint32_t)(0x11aba438), (EDX));
  /* 11a99947 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9994a push eax */
  push32((uint32_t)(EAX));
  /* 11a9994b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9994e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9994f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a99951 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99954 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a99956 push eax */
  push32((uint32_t)(EAX));
  /* 11a99957 call 0x11a99c90 */
  push32(0x11a9995cu); f_11a99c90();
  /* 11a9995c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9995f jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99964:;
  /* 11a99964 mov ecx, dword ptr [0x11aba428] */
  ECX = (r32((uint32_t)(0x11aba428)));
  /* 11a9996a mov dword ptr [0x11aba438], ecx */
  w32((uint32_t)(0x11aba438), (ECX));
  /* 11a99970 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99973 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11a99976 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a99979 jmp 0x11a999cd */
  goto L_11a999cd;
L_11a9997b:;
  /* 11a9997b mov ecx, dword ptr [0x11aba428] */
  ECX = (r32((uint32_t)(0x11aba428)));
  /* 11a99981 mov dword ptr [0x11aba438], ecx */
  w32((uint32_t)(0x11aba438), (ECX));
  /* 11a99987 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9998a push edx */
  push32((uint32_t)(EDX));
  /* 11a9998b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9998e push eax */
  push32((uint32_t)(EAX));
  /* 11a9998f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a99991 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99994 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a99997 push edx */
  push32((uint32_t)(EDX));
  /* 11a99998 call 0x11a99c90 */
  push32(0x11a9999du); f_11a99c90();
  /* 11a9999d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a999a0 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a999a5:;
  /* 11a999a5 mov eax, dword ptr [0x11aba428] */
  EAX = (r32((uint32_t)(0x11aba428)));
  /* 11a999aa mov dword ptr [0x11aba438], eax */
  w32((uint32_t)(0x11aba438), (EAX));
  /* 11a999af mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a999b2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a999b6 jne 0x11a999c1 */
  if (!C.zf) goto L_11a999c1;
  /* 11a999b8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11a999bf jmp 0x11a999cd */
  goto L_11a999cd;
L_11a999c1:;
  /* 11a999c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a999c4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11a999c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a999ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a999cd:;
  /* 11a999cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a999d0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a999d3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a999d6 jge 0x11a999e1 */
  if ((C.sf==C.of)) goto L_11a999e1;
  /* 11a999d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a999df jmp 0x11a99a0e */
  goto L_11a99a0e;
L_11a999e1:;
  /* 11a999e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a999e4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11a999e7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a999e8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11a999ed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a999ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a999f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a999f5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11a999f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a999f9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11a999fe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99a00 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99a03 jl 0x11a99a0e */
  if ((C.sf!=C.of)) goto L_11a99a0e;
  /* 11a99a05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99a08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99a0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a99a0e:;
  /* 11a99a0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99a11 push eax */
  push32((uint32_t)(EAX));
  /* 11a99a12 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99a16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a99a18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99a1b push edx */
  push32((uint32_t)(EDX));
  /* 11a99a1c call 0x11a99c90 */
  push32(0x11a99a21u); f_11a99c90();
  /* 11a99a21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99a24 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99a29:;
  /* 11a99a29 cmp dword ptr [0x11aba428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99a30 je 0x11a99a60 */
  if (C.zf) goto L_11a99a60;
  /* 11a99a32 mov dword ptr [0x11aba428], 0 */
  w32((uint32_t)(0x11aba428), (0x0u));
  /* 11a99a3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99a3f push eax */
  push32((uint32_t)(EAX));
  /* 11a99a40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99a43 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99a44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99a47 push edx */
  push32((uint32_t)(EDX));
  /* 11a99a48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99a4b push eax */
  push32((uint32_t)(EAX));
  /* 11a99a4c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99a4f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11a99a55 push edx */
  push32((uint32_t)(EDX));
  /* 11a99a56 call 0x11a99df0 */
  push32(0x11a99a5bu); f_11a99df0();
  /* 11a99a5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99a5e jmp 0x11a99a82 */
  goto L_11a99a82;
L_11a99a60:;
  /* 11a99a60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99a63 push eax */
  push32((uint32_t)(EAX));
  /* 11a99a64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99a67 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99a68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99a6b push edx */
  push32((uint32_t)(EDX));
  /* 11a99a6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99a6f push eax */
  push32((uint32_t)(EAX));
  /* 11a99a70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99a73 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11a99a79 push edx */
  push32((uint32_t)(EDX));
  /* 11a99a7a call 0x11a99df0 */
  push32(0x11a99a7fu); f_11a99df0();
  /* 11a99a7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a99a82:;
  /* 11a99a82 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99a87:;
  /* 11a99a87 mov dword ptr [0x11aba428], 0 */
  w32((uint32_t)(0x11aba428), (0x0u));
  /* 11a99a91 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99a94 push eax */
  push32((uint32_t)(EAX));
  /* 11a99a95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99a98 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99a99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99a9c push edx */
  push32((uint32_t)(EDX));
  /* 11a99a9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99aa0 push eax */
  push32((uint32_t)(EAX));
  /* 11a99aa1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a99aa4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11a99aaa push edx */
  push32((uint32_t)(EDX));
  /* 11a99aab call 0x11a99df0 */
  push32(0x11a99ab0u); f_11a99df0();
  /* 11a99ab0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99ab3 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99ab8:;
  /* 11a99ab8 mov eax, dword ptr [0x11aba428] */
  EAX = (r32((uint32_t)(0x11aba428)));
  /* 11a99abd mov dword ptr [0x11aba438], eax */
  w32((uint32_t)(0x11aba438), (EAX));
  /* 11a99ac2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99ac5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a99ac8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99ac9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11a99ace idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99ad0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a99ad3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99ad6 push edx */
  push32((uint32_t)(EDX));
  /* 11a99ad7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99ada push eax */
  push32((uint32_t)(EAX));
  /* 11a99adb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a99add mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99ae1 call 0x11a99c90 */
  push32(0x11a99ae6u); f_11a99c90();
  /* 11a99ae6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99ae9 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99aee:;
  /* 11a99aee mov edx, dword ptr [0x11aba428] */
  EDX = (r32((uint32_t)(0x11aba428)));
  /* 11a99af4 mov dword ptr [0x11aba438], edx */
  w32((uint32_t)(0x11aba438), (EDX));
  /* 11a99afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99afd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a99b00 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99b01 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11a99b06 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99b08 mov ecx, eax */
  ECX = (EAX);
  /* 11a99b0a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99b0d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a99b10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99b13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a99b16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99b17 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11a99b1c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99b1e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99b20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a99b23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99b26 push eax */
  push32((uint32_t)(EAX));
  /* 11a99b27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99b2a push ecx */
  push32((uint32_t)(ECX));
  /* 11a99b2b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a99b2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99b30 push edx */
  push32((uint32_t)(EDX));
  /* 11a99b31 call 0x11a99c90 */
  push32(0x11a99b36u); f_11a99c90();
  /* 11a99b36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99b39 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99b3b:;
  /* 11a99b3b call 0x11a9ac50 */
  push32(0x11a99b40u); f_11a9ac50();
  /* 11a99b40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99b43 push eax */
  push32((uint32_t)(EAX));
  /* 11a99b44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99b47 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99b48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a99b4d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99b51 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11a99b54 mov ecx, dword ptr [eax*4 + 0x11ab9318] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab9318)));
  /* 11a99b5b push ecx */
  push32((uint32_t)(ECX));
  /* 11a99b5c call 0x11a99c40 */
  push32(0x11a99b61u); f_11a99c40();
  /* 11a99b61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99b64 jmp 0x11a99b88 */
  goto L_11a99b88;
L_11a99b66:;
  /* 11a99b66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99b69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a99b6b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11a99b6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99b71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a99b73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99b76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99b79 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a99b7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99b7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a99b80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99b83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99b86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a99b88:;
  /* 11a99b88 pop esi */
  ESI = (pop32());
  /* 11a99b89 mov esp, ebp */
  ESP = (EBP);
  /* 11a99b8b pop ebp */
  EBP = (pop32());
  /* 11a99b8c ret  */
  ESPCHK(0x11a99620u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11a99c40 (72 bytes, 30 insns) */
void f_11a99c40(void) {
  FTRACE(0x11a99c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99c41 mov ebp, esp */
  EBP = (ESP);
L_11a99c43:;
  /* 11a99c43 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99c46 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99c49 je 0x11a99c86 */
  if (C.zf) goto L_11a99c86;
  /* 11a99c4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99c4e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a99c51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a99c53 je 0x11a99c86 */
  if (C.zf) goto L_11a99c86;
  /* 11a99c55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99c58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a99c5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99c5d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a99c5f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a99c61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99c64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a99c66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99c69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99c6c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a99c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99c71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99c74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a99c77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99c7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a99c7c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99c7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99c82 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a99c84 jmp 0x11a99c43 */
  goto L_11a99c43;
L_11a99c86:;
  /* 11a99c86 pop ebp */
  EBP = (pop32());
  /* 11a99c87 ret  */
  ESPCHK(0x11a99c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c90 @ 0x11a99c90 (173 bytes, 64 insns) */
void f_11a99c90(void) {
  FTRACE(0x11a99c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99c91 mov ebp, esp */
  EBP = (ESP);
  /* 11a99c93 push ecx */
  push32((uint32_t)(ECX));
  /* 11a99c94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a99c9b cmp dword ptr [0x11aba438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99ca2 je 0x11a99cba */
  if (C.zf) goto L_11a99cba;
  /* 11a99ca4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99ca7 push eax */
  push32((uint32_t)(EAX));
  /* 11a99ca8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99cab push ecx */
  push32((uint32_t)(ECX));
  /* 11a99cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99caf push edx */
  push32((uint32_t)(EDX));
  /* 11a99cb0 call 0x11a99d40 */
  push32(0x11a99cb5u); f_11a99d40();
  /* 11a99cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99cb8 jmp 0x11a99d39 */
  goto L_11a99d39;
L_11a99cba:;
  /* 11a99cba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99cbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99cc0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99cc2 jae 0x11a99d30 */
  if (!C.cf) goto L_11a99d30;
  /* 11a99cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99cc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99cca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11a99ccd jmp 0x11a99cd8 */
  goto L_11a99cd8;
L_11a99ccf:;
  /* 11a99ccf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99cd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99cd5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a99cd8:;
  /* 11a99cd8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99cdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99cde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a99ce0 je 0x11a99d14 */
  if (C.zf) goto L_11a99d14;
  /* 11a99ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99ce5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99ce6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11a99ceb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99ced add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99cf0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99cf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a99cf5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99cf8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11a99cfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99cfe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99cff mov ecx, 0xa */
  ECX = (0xau);
  /* 11a99d04 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99d06 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a99d09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99d0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99d0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a99d12 jmp 0x11a99ccf */
  goto L_11a99ccf;
L_11a99d14:;
  /* 11a99d14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99d17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a99d19 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99d1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99d1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a99d21 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99d24 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a99d26 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99d29 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99d2c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a99d2e jmp 0x11a99d39 */
  goto L_11a99d39;
L_11a99d30:;
  /* 11a99d30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99d33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11a99d39:;
  /* 11a99d39 mov esp, ebp */
  ESP = (EBP);
  /* 11a99d3b pop ebp */
  EBP = (pop32());
  /* 11a99d3c ret  */
  ESPCHK(0x11a99c90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11a99d40 (172 bytes, 65 insns) */
void f_11a99d40(void) {
  FTRACE(0x11a99d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99d41 mov ebp, esp */
  EBP = (ESP);
  /* 11a99d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99d49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a99d4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a99d4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99d51 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99d54 jbe 0x11a99d9b */
  if ((C.cf||C.zf)) goto L_11a99d9b;
L_11a99d56:;
  /* 11a99d56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99d59 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99d5a mov ecx, 0xa */
  ECX = (0xau);
  /* 11a99d5f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99d61 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99d67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a99d69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99d6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99d6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a99d72 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99d75 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a99d77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99d7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99d7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a99d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99d82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a99d83 mov ecx, 0xa */
  ECX = (0xau);
  /* 11a99d88 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a99d8a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a99d8d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99d91 jle 0x11a99d9b */
  if ((C.zf||C.sf!=C.of)) goto L_11a99d9b;
  /* 11a99d93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a99d96 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99d99 ja 0x11a99d56 */
  if ((!C.cf&&!C.zf)) goto L_11a99d56;
L_11a99d9b:;
  /* 11a99d9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99d9e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a99da0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a99da3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a99da6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99da9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a99dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99dae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99db1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a99db4:;
  /* 11a99db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99db7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a99db9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11a99dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99dbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a99dc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a99dc4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a99dc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99dc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99dcc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a99dcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a99dd2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a99dd5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11a99dd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a99dda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99ddd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a99de0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a99de3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99de6 jb 0x11a99db4 */
  if (C.cf) goto L_11a99db4;
  /* 11a99de8 mov esp, ebp */
  ESP = (EBP);
  /* 11a99dea pop ebp */
  EBP = (pop32());
  /* 11a99deb ret  */
  ESPCHK(0x11a99d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019df0 @ 0x11a99df0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11a99df0(void) {
  FTRACE(0x11a99df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a99df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a99df1 mov ebp, esp */
  EBP = (ESP);
  /* 11a99df3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11a99df6:;
  /* 11a99df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99df9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a99dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a99dfe je 0x11a9a26c */
  if (C.zf) goto L_11a9a26c;
  /* 11a99e04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a99e07 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99e0a je 0x11a9a26c */
  if (C.zf) goto L_11a9a26c;
  /* 11a99e10 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a99e14 mov dword ptr [0x11aba438], 0 */
  w32((uint32_t)(0x11aba438), (0x0u));
  /* 11a99e1e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a99e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99e28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a99e2b jmp 0x11a99e36 */
  goto L_11a99e36;
L_11a99e2d:;
  /* 11a99e2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99e30 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99e33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11a99e36:;
  /* 11a99e36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99e39 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a99e3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99e3f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a99e42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99e45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99e48 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a99e4b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99e4d jne 0x11a99e51 */
  if (!C.zf) goto L_11a99e51;
  /* 11a99e4f jmp 0x11a99e2d */
  goto L_11a99e2d;
L_11a99e51:;
  /* 11a99e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a99e54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99e57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a99e5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99e5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a99e60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a99e63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99e66 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99e69 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a99e6c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99e70 ja 0x11a9a1c0 */
  if ((!C.cf&&!C.zf)) goto L_11a9a1c0;
  /* 11a99e76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a99e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a99e7b mov al, byte ptr [ecx + 0x11a9a29c] */
  AL = (r8((uint32_t)(ECX + 0x11a9a29c)));
  /* 11a99e81 jmp dword ptr [eax*4 + 0x11a9a270] */
  switch (EAX) {
    case 0: goto L_11a9a0df;
    case 1: goto L_11a99fc3;
    case 2: goto L_11a99f4e;
    case 3: goto L_11a99e88;
    case 4: goto L_11a99ec6;
    case 5: goto L_11a99f27;
    case 6: goto L_11a99f75;
    case 7: goto L_11a99f9c;
    case 8: goto L_11a9a00a;
    case 9: goto L_11a99f04;
    case 10: goto L_11a9a1c0;
    default: x86_unimpl("switch@0x11a99e81 out of table"); return;
  }
L_11a99e88:;
  /* 11a99e88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99e8b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a99e8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a99e91 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99e94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a99e97 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99e9b ja 0x11a99ec1 */
  if ((!C.cf&&!C.zf)) goto L_11a99ec1;
  /* 11a99e9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a99ea0 jmp dword ptr [ecx*4 + 0x11a9a2ef] */
  switch (ECX) {
    case 0: goto L_11a99ea7;
    case 1: goto L_11a99eb1;
    case 2: goto L_11a99eb7;
    case 3: goto L_11a99ebd;
    case 4: goto L_11a99ee5;
    case 5: goto L_11a99eef;
    case 6: goto L_11a99ef5;
    case 7: goto L_11a99efb;
    default: x86_unimpl("switch@0x11a99ea0 out of table"); return;
  }
L_11a99ea7:;
  /* 11a99ea7 mov dword ptr [0x11aba438], 1 */
  w32((uint32_t)(0x11aba438), (0x1u));
L_11a99eb1:;
  /* 11a99eb1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11a99eb5 jmp 0x11a99ec1 */
  goto L_11a99ec1;
L_11a99eb7:;
  /* 11a99eb7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11a99ebb jmp 0x11a99ec1 */
  goto L_11a99ec1;
L_11a99ebd:;
  /* 11a99ebd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11a99ec1:;
  /* 11a99ec1 jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99ec6:;
  /* 11a99ec6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99ec9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a99ecc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a99ecf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a99ed2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a99ed5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99ed9 ja 0x11a99eff */
  if ((!C.cf&&!C.zf)) goto L_11a99eff;
  /* 11a99edb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a99ede jmp dword ptr [ecx*4 + 0x11a9a2ff] */
  switch (ECX) {
    case 0: goto L_11a99ee5;
    case 1: goto L_11a99eef;
    case 2: goto L_11a99ef5;
    case 3: goto L_11a99efb;
    default: x86_unimpl("switch@0x11a99ede out of table"); return;
  }
L_11a99ee5:;
  /* 11a99ee5 mov dword ptr [0x11aba438], 1 */
  w32((uint32_t)(0x11aba438), (0x1u));
L_11a99eef:;
  /* 11a99eef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11a99ef3 jmp 0x11a99eff */
  goto L_11a99eff;
L_11a99ef5:;
  /* 11a99ef5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11a99ef9 jmp 0x11a99eff */
  goto L_11a99eff;
L_11a99efb:;
  /* 11a99efb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11a99eff:;
  /* 11a99eff jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99f04:;
  /* 11a99f04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99f07 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a99f0a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f0e je 0x11a99f18 */
  if (C.zf) goto L_11a99f18;
  /* 11a99f10 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f14 je 0x11a99f1e */
  if (C.zf) goto L_11a99f1e;
  /* 11a99f16 jmp 0x11a99f22 */
  goto L_11a99f22;
L_11a99f18:;
  /* 11a99f18 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11a99f1c jmp 0x11a99f22 */
  goto L_11a99f22;
L_11a99f1e:;
  /* 11a99f1e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11a99f22:;
  /* 11a99f22 jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99f27:;
  /* 11a99f27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99f2a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a99f2d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f31 je 0x11a99f3b */
  if (C.zf) goto L_11a99f3b;
  /* 11a99f33 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f37 je 0x11a99f45 */
  if (C.zf) goto L_11a99f45;
  /* 11a99f39 jmp 0x11a99f49 */
  goto L_11a99f49;
L_11a99f3b:;
  /* 11a99f3b mov dword ptr [0x11aba438], 1 */
  w32((uint32_t)(0x11aba438), (0x1u));
L_11a99f45:;
  /* 11a99f45 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11a99f49:;
  /* 11a99f49 jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99f4e:;
  /* 11a99f4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99f51 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11a99f54 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f58 je 0x11a99f62 */
  if (C.zf) goto L_11a99f62;
  /* 11a99f5a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f5e je 0x11a99f6c */
  if (C.zf) goto L_11a99f6c;
  /* 11a99f60 jmp 0x11a99f70 */
  goto L_11a99f70;
L_11a99f62:;
  /* 11a99f62 mov dword ptr [0x11aba438], 1 */
  w32((uint32_t)(0x11aba438), (0x1u));
L_11a99f6c:;
  /* 11a99f6c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11a99f70:;
  /* 11a99f70 jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99f75:;
  /* 11a99f75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99f78 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11a99f7b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f7f je 0x11a99f89 */
  if (C.zf) goto L_11a99f89;
  /* 11a99f81 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99f85 je 0x11a99f93 */
  if (C.zf) goto L_11a99f93;
  /* 11a99f87 jmp 0x11a99f97 */
  goto L_11a99f97;
L_11a99f89:;
  /* 11a99f89 mov dword ptr [0x11aba438], 1 */
  w32((uint32_t)(0x11aba438), (0x1u));
L_11a99f93:;
  /* 11a99f93 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11a99f97:;
  /* 11a99f97 jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99f9c:;
  /* 11a99f9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a99f9f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11a99fa2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99fa6 je 0x11a99fb0 */
  if (C.zf) goto L_11a99fb0;
  /* 11a99fa8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a99fac je 0x11a99fba */
  if (C.zf) goto L_11a99fba;
  /* 11a99fae jmp 0x11a99fbe */
  goto L_11a99fbe;
L_11a99fb0:;
  /* 11a99fb0 mov dword ptr [0x11aba438], 1 */
  w32((uint32_t)(0x11aba438), (0x1u));
L_11a99fba:;
  /* 11a99fba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11a99fbe:;
  /* 11a99fbe jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a99fc3:;
  /* 11a99fc3 push 0x11ab5c08 */
  push32((uint32_t)(0x11ab5c08u));
  /* 11a99fc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99fcb push ecx */
  push32((uint32_t)(ECX));
  /* 11a99fcc call 0x11a9a820 */
  push32(0x11a99fd1u); f_11a9a820();
  /* 11a99fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a99fd6 jne 0x11a99fe3 */
  if (!C.zf) goto L_11a99fe3;
  /* 11a99fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99fdb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99fde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a99fe1 jmp 0x11a9a001 */
  goto L_11a9a001;
L_11a99fe3:;
  /* 11a99fe3 push 0x11ab5c04 */
  push32((uint32_t)(0x11ab5c04u));
  /* 11a99fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99feb push eax */
  push32((uint32_t)(EAX));
  /* 11a99fec call 0x11a9a820 */
  push32(0x11a99ff1u); f_11a9a820();
  /* 11a99ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a99ff6 jne 0x11a9a001 */
  if (!C.zf) goto L_11a9a001;
  /* 11a99ff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a99ffb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a99ffe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a9a001:;
  /* 11a9a001 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11a9a005 jmp 0x11a9a1c0 */
  goto L_11a9a1c0;
L_11a9a00a:;
  /* 11a9a00a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a00d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a011 jg 0x11a9a021 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9a021;
  /* 11a9a013 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9a016 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11a9a01c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a9a01f jmp 0x11a9a02d */
  goto L_11a9a02d;
L_11a9a021:;
  /* 11a9a021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9a024 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11a9a02a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a9a02d:;
  /* 11a9a02d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a031 jle 0x11a9a0d4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a9a0d4;
  /* 11a9a037 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a03a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a03d jbe 0x11a9a0d4 */
  if ((C.cf||C.zf)) goto L_11a9a0d4;
  /* 11a9a043 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9a046 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a048 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9a04a mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9a050 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a052 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9a056 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a05c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9a05e je 0x11a9a097 */
  if (C.zf) goto L_11a9a097;
  /* 11a9a060 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a063 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a066 jbe 0x11a9a097 */
  if ((C.cf||C.zf)) goto L_11a9a097;
  /* 11a9a068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a06b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9a06d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9a070 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9a072 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a9a074 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a077 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9a079 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a07c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a07f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a9a081 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9a084 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a087 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a9a08a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a08d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a08f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a092 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a095 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a9a097:;
  /* 11a9a097 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a09a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a09c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9a09f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9a0a1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a9a0a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a0a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9a0a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a0ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a0ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a9a0b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9a0b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a0b6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a9a0b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a0bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9a0be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a0c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a0c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a9a0c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a0c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a0cc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a9a0cf jmp 0x11a9a02d */
  goto L_11a9a02d;
L_11a9a0d4:;
  /* 11a9a0d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9a0d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9a0da jmp 0x11a99df6 */
  goto L_11a99df6;
L_11a9a0df:;
  /* 11a9a0df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a0e2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a9a0e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9a0e7 je 0x11a9a1b2 */
  if (C.zf) goto L_11a9a1b2;
  /* 11a9a0ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a0f0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a0f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11a9a0f6:;
  /* 11a9a0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a0f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9a0fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9a0fe je 0x11a9a1b0 */
  if (C.zf) goto L_11a9a1b0;
  /* 11a9a104 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a107 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a10a je 0x11a9a1b0 */
  if (C.zf) goto L_11a9a1b0;
  /* 11a9a110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a113 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9a116 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a119 jne 0x11a9a129 */
  if (!C.zf) goto L_11a9a129;
  /* 11a9a11b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a11e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a121 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a9a124 jmp 0x11a9a1b0 */
  goto L_11a9a1b0;
L_11a9a129:;
  /* 11a9a129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a12c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9a12e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9a130 mov edx, dword ptr [0x11ab7ec0] */
  EDX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9a136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a138 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11a9a13c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9a143 je 0x11a9a17c */
  if (C.zf) goto L_11a9a17c;
  /* 11a9a145 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a148 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a14b jbe 0x11a9a17c */
  if ((C.cf||C.zf)) goto L_11a9a17c;
  /* 11a9a14d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a150 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9a152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a155 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9a157 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a9a159 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a15c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a15e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a161 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a164 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a9a166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a169 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a16c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9a16f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a172 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9a174 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a177 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a17a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a9a17c:;
  /* 11a9a17c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a17f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9a181 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a184 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a9a186 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a9a188 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a18b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9a18d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a190 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a193 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a9a195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a198 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a19b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a9a19e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a1a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a1a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a1a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a1a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a9a1ab jmp 0x11a9a0f6 */
  goto L_11a9a0f6;
L_11a9a1b0:;
  /* 11a9a1b0 jmp 0x11a9a1bb */
  goto L_11a9a1bb;
L_11a9a1b2:;
  /* 11a9a1b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a1b5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a1b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a9a1bb:;
  /* 11a9a1bb jmp 0x11a99df6 */
  goto L_11a99df6;
L_11a9a1c0:;
  /* 11a9a1c0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11a9a1c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9a1c6 je 0x11a9a1ec */
  if (C.zf) goto L_11a9a1ec;
  /* 11a9a1c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9a1cb push edx */
  push32((uint32_t)(EDX));
  /* 11a9a1cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a1cf push eax */
  push32((uint32_t)(EAX));
  /* 11a9a1d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a1d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a1d7 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a1d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11a9a1db push eax */
  push32((uint32_t)(EAX));
  /* 11a9a1dc call 0x11a99620 */
  push32(0x11a9a1e1u); f_11a99620();
  /* 11a9a1e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a1e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9a1e7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a9a1ea jmp 0x11a9a267 */
  goto L_11a9a267;
L_11a9a1ec:;
  /* 11a9a1ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a1ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a1f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9a1f3 mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9a1f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a1fb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9a1ff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a205 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a9a207 je 0x11a9a238 */
  if (C.zf) goto L_11a9a238;
  /* 11a9a209 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a20c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a211 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a9a213 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a9a215 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a218 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9a21a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a21d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a220 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a9a222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a228 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a9a22b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a22e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9a230 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a233 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a236 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a9a238:;
  /* 11a9a238 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a23b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9a23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a240 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a9a242 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a9a244 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a247 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a249 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a24c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a24f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a9a251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a254 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a257 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9a25a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a25d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9a25f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a262 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a265 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a9a267:;
  /* 11a9a267 jmp 0x11a99df6 */
  goto L_11a99df6;
L_11a9a26c:;
  /* 11a9a26c mov esp, ebp */
  ESP = (EBP);
  /* 11a9a26e pop ebp */
  EBP = (pop32());
  /* 11a9a26f ret  */
  ESPCHK(0x11a99df0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a310 @ 0x11a9a310 (650 bytes, 178 insns) */
void f_11a9a310(void) {
  FTRACE(0x11a9a310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9a310 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9a311 mov ebp, esp */
  EBP = (ESP);
  /* 11a9a313 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a319 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a31d jne 0x11a9a479 */
  if (!C.zf) goto L_11a9a479;
  /* 11a9a323 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a326 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11a9a32c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11a9a332 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a9a335 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9a33c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11a9a346 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a348 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a9a34e push edx */
  push32((uint32_t)(EDX));
  /* 11a9a34f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a352 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a353 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a356 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a357 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a35a push edx */
  push32((uint32_t)(EDX));
  /* 11a9a35b call 0x11a9b730 */
  push32(0x11a9a360u); f_11a9b730();
  /* 11a9a360 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a363 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9a366 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a36a jne 0x11a9a3ff */
  if (!C.zf) goto L_11a9a3ff;
  /* 11a9a370 call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a9a376u);
  /* 11a9a376 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a379 je 0x11a9a380 */
  if (C.zf) goto L_11a9a380;
  /* 11a9a37b jmp 0x11a9a45d */
  goto L_11a9a45d;
L_11a9a380:;
  /* 11a9a380 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a384 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a386 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a389 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a38a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a38d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a38e call 0x11a9b730 */
  push32(0x11a9a393u); f_11a9b730();
  /* 11a9a393 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a396 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11a9a39c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a3a3 jne 0x11a9a3aa */
  if (!C.zf) goto L_11a9a3aa;
  /* 11a9a3a5 jmp 0x11a9a45d */
  goto L_11a9a45d;
L_11a9a3aa:;
  /* 11a9a3aa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11a9a3ac push 0x11ab5c10 */
  push32((uint32_t)(0x11ab5c10u));
  /* 11a9a3b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9a3b3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a9a3b9 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a3ba call 0x11a897e0 */
  push32(0x11a9a3bfu); f_11a897e0();
  /* 11a9a3bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a3c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a9a3c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a3c9 jne 0x11a9a3d0 */
  if (!C.zf) goto L_11a9a3d0;
  /* 11a9a3cb jmp 0x11a9a45d */
  goto L_11a9a45d;
L_11a9a3d0:;
  /* 11a9a3d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a9a3d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a3d9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11a9a3df push eax */
  push32((uint32_t)(EAX));
  /* 11a9a3e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a3e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a3e7 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a3e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a3eb push eax */
  push32((uint32_t)(EAX));
  /* 11a9a3ec call 0x11a9b730 */
  push32(0x11a9a3f1u); f_11a9b730();
  /* 11a9a3f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a3f4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9a3f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a3fb jne 0x11a9a3ff */
  if (!C.zf) goto L_11a9a3ff;
  /* 11a9a3fd jmp 0x11a9a45d */
  goto L_11a9a45d;
L_11a9a3ff:;
  /* 11a9a3ff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11a9a401 push 0x11ab5c10 */
  push32((uint32_t)(0x11ab5c10u));
  /* 11a9a406 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9a408 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9a40b push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a40c call 0x11a897e0 */
  push32(0x11a9a411u); f_11a897e0();
  /* 11a9a411 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a414 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11a9a41a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a9a41c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11a9a422 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a425 jne 0x11a9a429 */
  if (!C.zf) goto L_11a9a429;
  /* 11a9a427 jmp 0x11a9a45d */
  goto L_11a9a45d;
L_11a9a429:;
  /* 11a9a429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9a42c push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a42d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a430 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a431 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11a9a437 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a9a439 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a43a call 0x11a8d000 */
  push32(0x11a9a43fu); f_11a8d000();
  /* 11a9a43f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a442 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a446 je 0x11a9a456 */
  if (C.zf) goto L_11a9a456;
  /* 11a9a448 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9a44a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a44d push edx */
  push32((uint32_t)(EDX));
  /* 11a9a44e call 0x11a8a270 */
  push32(0x11a9a453u); f_11a8a270();
  /* 11a9a453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9a456:;
  /* 11a9a456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a458 jmp 0x11a9a596 */
  goto L_11a9a596;
L_11a9a45d:;
  /* 11a9a45d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a461 je 0x11a9a471 */
  if (C.zf) goto L_11a9a471;
  /* 11a9a463 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a9a465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9a468 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a469 call 0x11a8a270 */
  push32(0x11a9a46eu); f_11a8a270();
  /* 11a9a46e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9a471:;
  /* 11a9a471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a474 jmp 0x11a9a596 */
  goto L_11a9a596;
L_11a9a479:;
  /* 11a9a479 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a47d jne 0x11a9a593 */
  if (!C.zf) goto L_11a9a593;
  /* 11a9a483 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11a9a48d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a490 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11a9a496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a498 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11a9a49e push edx */
  push32((uint32_t)(EDX));
  /* 11a9a49f push 0x11aba34c */
  push32((uint32_t)(0x11aba34cu));
  /* 11a9a4a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a4a7 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a4a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a4ab push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a4ac call 0x11a9b590 */
  push32(0x11a9a4b1u); f_11a9b590();
  /* 11a9a4b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a4b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9a4b6 jne 0x11a9a4c0 */
  if (!C.zf) goto L_11a9a4c0;
  /* 11a9a4b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a4bb jmp 0x11a9a596 */
  goto L_11a9a596;
L_11a9a4c0:;
  /* 11a9a4c0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a9a4c6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a9a4c9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11a9a4d3 jmp 0x11a9a4e4 */
  goto L_11a9a4e4;
L_11a9a4d5:;
  /* 11a9a4d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a9a4db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a4de mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11a9a4e4:;
  /* 11a9a4e4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a4eb jge 0x11a9a58f */
  if ((C.sf==C.of)) goto L_11a9a58f;
  /* 11a9a4f1 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a4f8 jle 0x11a9a52b */
  if ((C.zf||C.sf!=C.of)) goto L_11a9a52b;
  /* 11a9a4fa push 4 */
  push32((uint32_t)(0x4u));
  /* 11a9a4fc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a9a502 mov dl, byte ptr [ecx*2 + 0x11aba34c] */
  DL = (r8((uint32_t)(ECX*2 + 0x11aba34c)));
  /* 11a9a509 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11a9a50f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11a9a515 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a51a push eax */
  push32((uint32_t)(EAX));
  /* 11a9a51b call 0x11a8e0d0 */
  push32(0x11a9a520u); f_11a8e0d0();
  /* 11a9a520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a523 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11a9a529 jmp 0x11a9a55e */
  goto L_11a9a55e;
L_11a9a52b:;
  /* 11a9a52b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11a9a531 mov dl, byte ptr [ecx*2 + 0x11aba34c] */
  DL = (r8((uint32_t)(ECX*2 + 0x11aba34c)));
  /* 11a9a538 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11a9a53e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11a9a544 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a549 mov ecx, dword ptr [0x11ab7ec0] */
  ECX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a9a54f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a551 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9a555 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a558 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11a9a55e:;
  /* 11a9a55e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a565 je 0x11a9a588 */
  if (C.zf) goto L_11a9a588;
  /* 11a9a567 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a9a56d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a9a570 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9a573 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11a9a57a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11a9a57e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11a9a584 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a9a586 jmp 0x11a9a58a */
  goto L_11a9a58a;
L_11a9a588:;
  /* 11a9a588 jmp 0x11a9a58f */
  goto L_11a9a58f;
L_11a9a58a:;
  /* 11a9a58a jmp 0x11a9a4d5 */
  goto L_11a9a4d5;
L_11a9a58f:;
  /* 11a9a58f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a591 jmp 0x11a9a596 */
  goto L_11a9a596;
L_11a9a593:;
  /* 11a9a593 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a9a596:;
  /* 11a9a596 mov esp, ebp */
  ESP = (EBP);
  /* 11a9a598 pop ebp */
  EBP = (pop32());
  /* 11a9a599 ret  */
  ESPCHK(0x11a9a310u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5a0 @ 0x11a9a5a0 (10 bytes, 5 insns) */
void f_11a9a5a0(void) {
  FTRACE(0x11a9a5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9a5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9a5a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a9a5a3 mov eax, dword ptr [0x11ab8fc0] */
  EAX = (r32((uint32_t)(0x11ab8fc0)));
  /* 11a9a5a8 pop ebp */
  EBP = (pop32());
  /* 11a9a5a9 ret  */
  ESPCHK(0x11a9a5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5b0 @ 0x11a9a5b0 (575 bytes, 196 insns) */
void f_11a9a5b0(void) {
  FTRACE(0x11a9a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a9a5b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a9a5b5 push 0x11ab5c20 */
  push32((uint32_t)(0x11ab5c20u));
  /* 11a9a5ba push 0x11a986e4 */
  push32((uint32_t)(0x11a986e4u));
  /* 11a9a5bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a9a5c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a5c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a9a5cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a5d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9a5d1 push esi */
  push32((uint32_t)(ESI));
  /* 11a9a5d2 push edi */
  push32((uint32_t)(EDI));
  /* 11a9a5d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9a5d6 cmp dword ptr [0x11aba358], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba358))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a5dd jne 0x11a9a62e */
  if (!C.zf) goto L_11a9a62e;
  /* 11a9a5df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a9a5e2 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9a5e5 push 0x11ab53b4 */
  push32((uint32_t)(0x11ab53b4u));
  /* 11a9a5ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9a5ec call dword ptr [0x11abc310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc310))), 0x11a9a5f2u);
  /* 11a9a5f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9a5f4 je 0x11a9a602 */
  if (C.zf) goto L_11a9a602;
  /* 11a9a5f6 mov dword ptr [0x11aba358], 1 */
  w32((uint32_t)(0x11aba358), (0x1u));
  /* 11a9a600 jmp 0x11a9a62e */
  goto L_11a9a62e;
L_11a9a602:;
  /* 11a9a602 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11a9a605 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a606 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9a608 push 0x11ab53b0 */
  push32((uint32_t)(0x11ab53b0u));
  /* 11a9a60d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a9a60f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a611 call dword ptr [0x11abc320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc320))), 0x11a9a617u);
  /* 11a9a617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9a619 je 0x11a9a627 */
  if (C.zf) goto L_11a9a627;
  /* 11a9a61b mov dword ptr [0x11aba358], 2 */
  w32((uint32_t)(0x11aba358), (0x2u));
  /* 11a9a625 jmp 0x11a9a62e */
  goto L_11a9a62e;
L_11a9a627:;
  /* 11a9a627 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a629 jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a62e:;
  /* 11a9a62e cmp dword ptr [0x11aba358], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba358))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a635 jne 0x11a9a652 */
  if (!C.zf) goto L_11a9a652;
  /* 11a9a637 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a63a push edx */
  push32((uint32_t)(EDX));
  /* 11a9a63b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a63e push eax */
  push32((uint32_t)(EAX));
  /* 11a9a63f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a642 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a646 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a647 call dword ptr [0x11abc310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc310))), 0x11a9a64du);
  /* 11a9a64d jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a652:;
  /* 11a9a652 cmp dword ptr [0x11aba358], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba358))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a659 jne 0x11a9a807 */
  if (!C.zf) goto L_11a9a807;
  /* 11a9a65f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a663 jne 0x11a9a66d */
  if (!C.zf) goto L_11a9a66d;
  /* 11a9a665 mov eax, dword ptr [0x11aba2d8] */
  EAX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a9a66a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a9a66d:;
  /* 11a9a66d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a66f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a671 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a675 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a678 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a679 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a67c push edx */
  push32((uint32_t)(EDX));
  /* 11a9a67d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a9a682 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9a685 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a686 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9a68cu);
  /* 11a9a68c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a9a68f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a693 jne 0x11a9a69c */
  if (!C.zf) goto L_11a9a69c;
  /* 11a9a695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a697 jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a69c:;
  /* 11a9a69c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a9a6a3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9a6a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a6a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9a6ab call 0x11a8c980 */
  push32(0x11a9a6b0u); f_11a8c980();
  /* 11a9a6b0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11a9a6b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9a6b6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a9a6b9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11a9a6bc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9a6bf push edx */
  push32((uint32_t)(EDX));
  /* 11a9a6c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a6c2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a9a6c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a6c6 call 0x11a8ee40 */
  push32(0x11a9a6cbu); f_11a8ee40();
  /* 11a9a6cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a6ce mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9a6d5 jmp 0x11a9a6ee */
  goto L_11a9a6ee;
  /* 11a9a6d7 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9a6dc ret  */
  ESPCHK(0x11a9a5b0u, _esp0);
  ESP += 4; return;
  /* 11a9a6dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9a6e0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11a9a6e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a9a6ee:;
  /* 11a9a6ee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a6f2 jne 0x11a9a6fb */
  if (!C.zf) goto L_11a9a6fb;
  /* 11a9a6f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a6f6 jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a6fb:;
  /* 11a9a6fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a6fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a6ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9a702 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a703 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a9a706 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a707 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a70a push eax */
  push32((uint32_t)(EAX));
  /* 11a9a70b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a70e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a70f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a9a714 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a9a717 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a718 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a9a71eu);
  /* 11a9a71e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9a720 jne 0x11a9a729 */
  if (!C.zf) goto L_11a9a729;
  /* 11a9a722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a724 jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a729:;
  /* 11a9a729 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a9a730 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9a733 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11a9a737 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a73a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a9a73c call 0x11a8c980 */
  push32(0x11a9a741u); f_11a8c980();
  /* 11a9a741 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11a9a744 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a9a747 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a9a74a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a9a74d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11a9a754 jmp 0x11a9a76d */
  goto L_11a9a76d;
  /* 11a9a756 mov eax, 1 */
  EAX = (0x1u);
  /* 11a9a75b ret  */
  ESPCHK(0x11a9a5b0u, _esp0);
  ESP += 4; return;
  /* 11a9a75c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9a75f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a9a766 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11a9a76d:;
  /* 11a9a76d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a771 jne 0x11a9a77a */
  if (!C.zf) goto L_11a9a77a;
  /* 11a9a773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a775 jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a77a:;
  /* 11a9a77a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a77e jne 0x11a9a789 */
  if (!C.zf) goto L_11a9a789;
  /* 11a9a780 mov edx, dword ptr [0x11aba2c8] */
  EDX = (r32((uint32_t)(0x11aba2c8)));
  /* 11a9a786 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11a9a789:;
  /* 11a9a789 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a78c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9a78f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11a9a795 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a798 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9a79b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11a9a7a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9a7a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a7a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9a7a9 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a7aa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a9a7ad push eax */
  push32((uint32_t)(EAX));
  /* 11a9a7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a7b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a7b2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a9a7b5 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a7b6 call dword ptr [0x11abc320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc320))), 0x11a9a7bcu);
  /* 11a9a7bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a9a7bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a7c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9a7c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a7c7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11a9a7cc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a7d2 je 0x11a9a7e8 */
  if (C.zf) goto L_11a9a7e8;
  /* 11a9a7d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a7d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9a7da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9a7dc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11a9a7e0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a7e6 je 0x11a9a7ec */
  if (C.zf) goto L_11a9a7ec;
L_11a9a7e8:;
  /* 11a9a7e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a7ea jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a7ec:;
  /* 11a9a7ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a9a7ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a9a7f1 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a7f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9a7f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a9a7f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a9a7f9 push edx */
  push32((uint32_t)(EDX));
  /* 11a9a7fa call 0x11a8eea0 */
  push32(0x11a9a7ffu); f_11a8eea0();
  /* 11a9a7ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a802 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9a805 jmp 0x11a9a809 */
  goto L_11a9a809;
L_11a9a807:;
  /* 11a9a807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a9a809:;
  /* 11a9a809 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11a9a80c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9a80f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a9a816 pop edi */
  EDI = (pop32());
  /* 11a9a817 pop esi */
  ESI = (pop32());
  /* 11a9a818 pop ebx */
  EBX = (pop32());
  /* 11a9a819 mov esp, ebp */
  ESP = (EBP);
  /* 11a9a81b pop ebp */
  EBP = (pop32());
  /* 11a9a81c ret  */
  ESPCHK(0x11a9a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a820 @ 0x11a9a820 (208 bytes, 85 insns) */
void f_11a9a820(void) {
  FTRACE(0x11a9a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a9a820 push ebp */
  push32((uint32_t)(EBP));
  /* 11a9a821 mov ebp, esp */
  EBP = (ESP);
  /* 11a9a823 push edi */
  push32((uint32_t)(EDI));
  /* 11a9a824 push esi */
  push32((uint32_t)(ESI));
  /* 11a9a825 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9a826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a9a829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9a82c lea eax, [0x11aba2c0] */
  EAX = ((uint32_t)(0x11aba2c0));
  /* 11a9a832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a836 jne 0x11a9a873 */
  if (!C.zf) goto L_11a9a873;
  /* 11a9a838 mov al, 0xff */
  AL = (0xffu);
  /* 11a9a83a mov edi, edi */
  EDI = (EDI);
L_11a9a83c:;
  /* 11a9a83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a9a83e je 0x11a9a86e */
  if (C.zf) goto L_11a9a86e;
  /* 11a9a840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a9a842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a9a843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11a9a845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a9a846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a848 je 0x11a9a83c */
  if (C.zf) goto L_11a9a83c;
  /* 11a9a84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a9a84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a9a850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a9a853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9a855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9a857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11a9a859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a9a85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a9a85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11a9a862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9a864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9a866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a868 je 0x11a9a83c */
  if (C.zf) goto L_11a9a83c;
  /* 11a9a86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a9a86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11a9a86e:;
  /* 11a9a86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a9a871 jmp 0x11a9a8eb */
  goto L_11a9a8eb;
L_11a9a873:;
  /* 11a9a873 lock inc dword ptr [0x11aba44c] */
  x86_unimpl("lock inc @ 0x11a9a873");
  /* 11a9a87a cmp dword ptr [0x11aba43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9a881 jg 0x11a9a887 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a9a887;
  /* 11a9a883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9a885 jmp 0x11a9a89c */
  goto L_11a9a89c;
L_11a9a887:;
  /* 11a9a887 lock dec dword ptr [0x11aba44c] */
  x86_unimpl("lock dec @ 0x11a9a887");
  /* 11a9a88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a9a890 call 0x11a8f2d0 */
  push32(0x11a9a895u); f_11a8f2d0();
  /* 11a9a895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11a9a89c:;
  /* 11a9a89c mov eax, 0xff */
  EAX = (0xffu);
  /* 11a9a8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a9a8a3 nop  */
  /* nop */
L_11a9a8a4:;
  /* 11a9a8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a9a8a6 je 0x11a9a8cf */
  if (C.zf) goto L_11a9a8cf;
  /* 11a9a8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a9a8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a9a8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11a9a8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a9a8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a8b0 je 0x11a9a8a4 */
  if (C.zf) goto L_11a9a8a4;
  /* 11a9a8b2 push eax */
  push32((uint32_t)(EAX));
  /* 11a9a8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a9a8b4 call 0x11a8e240 */
  push32(0x11a9a8b9u); f_11a8e240();
  /* 11a9a8b9 mov ebx, eax */
  EBX = (EAX);
  /* 11a9a8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a8be call 0x11a8e240 */
  push32(0x11a9a8c3u); f_11a8e240();
  /* 11a9a8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9a8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a9a8c8 je 0x11a9a8a4 */
  if (C.zf) goto L_11a9a8a4;
  /* 11a9a8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9a8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a9a8cf:;
  /* 11a9a8cf mov ebx, eax */
  EBX = (EAX);
  /* 11a9a8d1 pop eax */
  EAX = (pop32());
  /* 11a9a8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9a8d4 jne 0x11a9a8df */
  if (!C.zf) goto L_11a9a8df;
  /* 11a9a8d6 lock dec dword ptr [0x11aba44c] */
  x86_unimpl("lock dec @ 0x11a9a8d6");
  /* 11a9a8dd jmp 0x11a9a8e9 */
  goto L_11a9a8e9;
L_11a9a8df:;
  /* 11a9a8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a9a8e1 call 0x11a8f370 */
  push32(0x11a9a8e6u); f_11a8f370();
  /* 11a9a8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a9a8e9:;
  /* 11a9a8e9 mov eax, ebx */
  EAX = (EBX);
L_11a9a8eb:;
  /* 11a9a8eb pop ebx */
  EBX = (pop32());
  /* 11a9a8ec pop esi */
  ESI = (pop32());
  /* 11a9a8ed pop edi */
  EDI = (pop32());
  /* 11a9a8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a9a8ef ret  */
  ESPCHK(0x11a9a820u, _esp0);
  ESP += 4; return;
}

