#include "recomp.h"

/* setSBCS @ 0x11e06ab0 (116 bytes, 29 insns) */
void f_11e06ab0(void) {
  FTRACE(0x11e06ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11e06ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06ab4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e06abb jmp 0x11e06ac6 */
  goto L_11e06ac6;
L_11e06abd:;
  /* 11e06abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06ac0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06ac3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e06ac6:;
  /* 11e06ac6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06acd jge 0x11e06adb */
  if ((C.sf==C.of)) goto L_11e06adb;
  /* 11e06acf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06ad2 mov byte ptr [ecx + 0x11e30b40], 0 */
  w8((uint32_t)(ECX + 0x11e30b40), (0x0u));
  /* 11e06ad9 jmp 0x11e06abd */
  goto L_11e06abd;
L_11e06adb:;
  /* 11e06adb mov dword ptr [0x11e309b0], 0 */
  w32((uint32_t)(0x11e309b0), (0x0u));
  /* 11e06ae5 mov dword ptr [0x11e30a3c], 0 */
  w32((uint32_t)(0x11e30a3c), (0x0u));
  /* 11e06aef mov dword ptr [0x11e30c44], 0 */
  w32((uint32_t)(0x11e30c44), (0x0u));
  /* 11e06af9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e06b00 jmp 0x11e06b0b */
  goto L_11e06b0b;
L_11e06b02:;
  /* 11e06b02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06b05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06b08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e06b0b:;
  /* 11e06b0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06b0f jge 0x11e06b20 */
  if ((C.sf==C.of)) goto L_11e06b20;
  /* 11e06b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06b14 mov word ptr [eax*2 + 0x11e30a30], 0 */
  w16((uint32_t)(EAX*2 + 0x11e30a30), (0x0u));
  /* 11e06b1e jmp 0x11e06b02 */
  goto L_11e06b02;
L_11e06b20:;
  /* 11e06b20 mov esp, ebp */
  ESP = (EBP);
  /* 11e06b22 pop ebp */
  EBP = (pop32());
  /* 11e06b23 ret  */
  ESPCHK(0x11e06ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b30 @ 0x11e06b30 (770 bytes, 175 insns) */
void f_11e06b30(void) {
  FTRACE(0x11e06b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06b31 mov ebp, esp */
  EBP = (ESP);
  /* 11e06b33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06b39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11e06b3f push eax */
  push32((uint32_t)(EAX));
  /* 11e06b40 mov ecx, dword ptr [0x11e309b0] */
  ECX = (r32((uint32_t)(0x11e309b0)));
  /* 11e06b46 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06b47 call dword ptr [0x11e33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33354))), 0x11e06b4du);
  /* 11e06b4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06b50 jne 0x11e06d69 */
  if (!C.zf) goto L_11e06d69;
  /* 11e06b56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11e06b60 jmp 0x11e06b71 */
  goto L_11e06b71;
L_11e06b62:;
  /* 11e06b62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06b68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06b6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11e06b71:;
  /* 11e06b71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06b7b jae 0x11e06b92 */
  if (!C.cf) goto L_11e06b92;
  /* 11e06b7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06b83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11e06b89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11e06b90 jmp 0x11e06b62 */
  goto L_11e06b62;
L_11e06b92:;
  /* 11e06b92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11e06b99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11e06b9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e06ba2 jmp 0x11e06bad */
  goto L_11e06bad;
L_11e06ba4:;
  /* 11e06ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06ba7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06baa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e06bad:;
  /* 11e06bad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06bb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06bb2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e06bb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e06bb6 je 0x11e06bf8 */
  if (C.zf) goto L_11e06bf8;
  /* 11e06bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06bbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e06bbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e06bbf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11e06bc5 jmp 0x11e06bd6 */
  goto L_11e06bd6;
L_11e06bc7:;
  /* 11e06bc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06bcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06bd0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11e06bd6:;
  /* 11e06bd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e06bd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e06bdb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e06bde cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06be4 ja 0x11e06bf6 */
  if ((!C.cf&&!C.zf)) goto L_11e06bf6;
  /* 11e06be6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06bec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11e06bf4 jmp 0x11e06bc7 */
  goto L_11e06bc7;
L_11e06bf6:;
  /* 11e06bf6 jmp 0x11e06ba4 */
  goto L_11e06ba4;
L_11e06bf8:;
  /* 11e06bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e06bfa mov eax, dword ptr [0x11e30c44] */
  EAX = (r32((uint32_t)(0x11e30c44)));
  /* 11e06bff push eax */
  push32((uint32_t)(EAX));
  /* 11e06c00 mov ecx, dword ptr [0x11e309b0] */
  ECX = (r32((uint32_t)(0x11e309b0)));
  /* 11e06c06 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06c07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11e06c0d push edx */
  push32((uint32_t)(EDX));
  /* 11e06c0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e06c13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11e06c19 push eax */
  push32((uint32_t)(EAX));
  /* 11e06c1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e06c1c call 0x11e07ff0 */
  push32(0x11e06c21u); f_11e07ff0();
  /* 11e06c21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e06c26 mov ecx, dword ptr [0x11e309b0] */
  ECX = (r32((uint32_t)(0x11e309b0)));
  /* 11e06c2c push ecx */
  push32((uint32_t)(ECX));
  /* 11e06c2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e06c32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11e06c38 push edx */
  push32((uint32_t)(EDX));
  /* 11e06c39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e06c3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11e06c44 push eax */
  push32((uint32_t)(EAX));
  /* 11e06c45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e06c4a mov ecx, dword ptr [0x11e30c44] */
  ECX = (r32((uint32_t)(0x11e30c44)));
  /* 11e06c50 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06c51 call 0x11e08c00 */
  push32(0x11e06c56u); f_11e08c00();
  /* 11e06c56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e06c5b mov edx, dword ptr [0x11e309b0] */
  EDX = (r32((uint32_t)(0x11e309b0)));
  /* 11e06c61 push edx */
  push32((uint32_t)(EDX));
  /* 11e06c62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e06c67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11e06c6d push eax */
  push32((uint32_t)(EAX));
  /* 11e06c6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e06c73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11e06c79 push ecx */
  push32((uint32_t)(ECX));
  /* 11e06c7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11e06c7f mov edx, dword ptr [0x11e30c44] */
  EDX = (r32((uint32_t)(0x11e30c44)));
  /* 11e06c85 push edx */
  push32((uint32_t)(EDX));
  /* 11e06c86 call 0x11e08c00 */
  push32(0x11e06c8bu); f_11e08c00();
  /* 11e06c8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06c8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11e06c98 jmp 0x11e06ca9 */
  goto L_11e06ca9;
L_11e06c9a:;
  /* 11e06c9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06ca0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06ca3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11e06ca9:;
  /* 11e06ca9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06cb3 jae 0x11e06d64 */
  if (!C.cf) goto L_11e06d64;
  /* 11e06cb9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06cbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06cc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11e06cc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e06ccc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e06cce je 0x11e06d06 */
  if (C.zf) goto L_11e06d06;
  /* 11e06cd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06cd6 mov cl, byte ptr [eax + 0x11e30b41] */
  CL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e06cdc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11e06cdf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06ce5 mov byte ptr [edx + 0x11e30b41], cl */
  w8((uint32_t)(EDX + 0x11e30b41), (CL));
  /* 11e06ceb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06cf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06cf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11e06cfe mov byte ptr [eax + 0x11e30a40], dl */
  w8((uint32_t)(EAX + 0x11e30a40), (DL));
  /* 11e06d04 jmp 0x11e06d5f */
  goto L_11e06d5f;
L_11e06d06:;
  /* 11e06d06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e06d0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11e06d16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e06d19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e06d1b je 0x11e06d52 */
  if (C.zf) goto L_11e06d52;
  /* 11e06d1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d23 mov al, byte ptr [edx + 0x11e30b41] */
  AL = (r8((uint32_t)(EDX + 0x11e30b41)));
  /* 11e06d29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11e06d2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d31 mov byte ptr [ecx + 0x11e30b41], al */
  w8((uint32_t)(ECX + 0x11e30b41), (AL));
  /* 11e06d37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11e06d4a mov byte ptr [edx + 0x11e30a40], cl */
  w8((uint32_t)(EDX + 0x11e30a40), (CL));
  /* 11e06d50 jmp 0x11e06d5f */
  goto L_11e06d5f;
L_11e06d52:;
  /* 11e06d52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d58 mov byte ptr [edx + 0x11e30a40], 0 */
  w8((uint32_t)(EDX + 0x11e30a40), (0x0u));
L_11e06d5f:;
  /* 11e06d5f jmp 0x11e06c9a */
  goto L_11e06c9a;
L_11e06d64:;
  /* 11e06d64 jmp 0x11e06e2e */
  goto L_11e06e2e;
L_11e06d69:;
  /* 11e06d69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11e06d73 jmp 0x11e06d84 */
  goto L_11e06d84;
L_11e06d75:;
  /* 11e06d75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06d7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06d7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11e06d84:;
  /* 11e06d84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06d8e jae 0x11e06e2e */
  if (!C.cf) goto L_11e06e2e;
  /* 11e06d94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06d9b jb 0x11e06dd8 */
  if (C.cf) goto L_11e06dd8;
  /* 11e06d9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06da4 ja 0x11e06dd8 */
  if ((!C.cf&&!C.zf)) goto L_11e06dd8;
  /* 11e06da6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06dac mov dl, byte ptr [ecx + 0x11e30b41] */
  DL = (r8((uint32_t)(ECX + 0x11e30b41)));
  /* 11e06db2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11e06db5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06dbb mov byte ptr [eax + 0x11e30b41], dl */
  w8((uint32_t)(EAX + 0x11e30b41), (DL));
  /* 11e06dc1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06dc7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06dca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06dd0 mov byte ptr [edx + 0x11e30a40], cl */
  w8((uint32_t)(EDX + 0x11e30a40), (CL));
  /* 11e06dd6 jmp 0x11e06e29 */
  goto L_11e06e29;
L_11e06dd8:;
  /* 11e06dd8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06ddf jb 0x11e06e1c */
  if (C.cf) goto L_11e06e1c;
  /* 11e06de1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06de8 ja 0x11e06e1c */
  if ((!C.cf&&!C.zf)) goto L_11e06e1c;
  /* 11e06dea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06df0 mov cl, byte ptr [eax + 0x11e30b41] */
  CL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e06df6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e06df9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06dff mov byte ptr [edx + 0x11e30b41], cl */
  w8((uint32_t)(EDX + 0x11e30b41), (CL));
  /* 11e06e05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06e0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06e0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06e14 mov byte ptr [ecx + 0x11e30a40], al */
  w8((uint32_t)(ECX + 0x11e30a40), (AL));
  /* 11e06e1a jmp 0x11e06e29 */
  goto L_11e06e29;
L_11e06e1c:;
  /* 11e06e1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11e06e22 mov byte ptr [edx + 0x11e30a40], 0 */
  w8((uint32_t)(EDX + 0x11e30a40), (0x0u));
L_11e06e29:;
  /* 11e06e29 jmp 0x11e06d75 */
  goto L_11e06d75;
L_11e06e2e:;
  /* 11e06e2e mov esp, ebp */
  ESP = (EBP);
  /* 11e06e30 pop ebp */
  EBP = (pop32());
  /* 11e06e31 ret  */
  ESPCHK(0x11e06b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e40 @ 0x11e06e40 (23 bytes, 9 insns) */
void f_11e06e40(void) {
  FTRACE(0x11e06e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06e41 mov ebp, esp */
  EBP = (ESP);
  /* 11e06e43 cmp dword ptr [0x11e30a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06e4a je 0x11e06e53 */
  if (C.zf) goto L_11e06e53;
  /* 11e06e4c mov eax, dword ptr [0x11e309b0] */
  EAX = (r32((uint32_t)(0x11e309b0)));
  /* 11e06e51 jmp 0x11e06e55 */
  goto L_11e06e55;
L_11e06e53:;
  /* 11e06e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e06e55:;
  /* 11e06e55 pop ebp */
  EBP = (pop32());
  /* 11e06e56 ret  */
  ESPCHK(0x11e06e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e60 @ 0x11e06e60 (34 bytes, 10 insns) */
void f_11e06e60(void) {
  FTRACE(0x11e06e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06e61 mov ebp, esp */
  EBP = (ESP);
  /* 11e06e63 cmp dword ptr [0x11e32130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06e6a jne 0x11e06e80 */
  if (!C.zf) goto L_11e06e80;
  /* 11e06e6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11e06e6e call 0x11e06680 */
  push32(0x11e06e73u); f_11e06680();
  /* 11e06e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06e76 mov dword ptr [0x11e32130], 1 */
  w32((uint32_t)(0x11e32130), (0x1u));
L_11e06e80:;
  /* 11e06e80 pop ebp */
  EBP = (pop32());
  /* 11e06e81 ret  */
  ESPCHK(0x11e06e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e90 @ 0x11e06e90 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11e06e90(void) {
  FTRACE(0x11e06e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e06e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e06e91 mov ebp, esp */
  EBP = (ESP);
  /* 11e06e93 push edi */
  push32((uint32_t)(EDI));
  /* 11e06e94 push esi */
  push32((uint32_t)(ESI));
  /* 11e06e95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e06e98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e06e9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06e9e mov eax, ecx */
  EAX = (ECX);
  /* 11e06ea0 mov edx, ecx */
  EDX = (ECX);
  /* 11e06ea2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06ea4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06ea6 jbe 0x11e06eb0 */
  if ((C.cf||C.zf)) goto L_11e06eb0;
  /* 11e06ea8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06eaa jb 0x11e07028 */
  if (C.cf) goto L_11e07028;
L_11e06eb0:;
  /* 11e06eb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e06eb6 jne 0x11e06ecc */
  if (!C.zf) goto L_11e06ecc;
  /* 11e06eb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e06ebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e06ebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06ec1 jb 0x11e06eec */
  if (C.cf) goto L_11e06eec;
  /* 11e06ec3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e06ec5 jmp dword ptr [edx*4 + 0x11e06fd8] */
  switch (EDX) {
    case 0: goto L_11e06fe8;
    case 1: goto L_11e06ff0;
    case 2: goto L_11e06ffc;
    case 3: goto L_11e07010;
    default: x86_unimpl("switch@0x11e06ec5 out of table"); return;
  }
L_11e06ecc:;
  /* 11e06ecc mov eax, edi */
  EAX = (EDI);
  /* 11e06ece mov edx, 3 */
  EDX = (0x3u);
  /* 11e06ed3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e06ed6 jb 0x11e06ee4 */
  if (C.cf) goto L_11e06ee4;
  /* 11e06ed8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e06edb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06edd jmp dword ptr [eax*4 + 0x11e06ef0] */
  switch (EAX) {
    case 1: goto L_11e06f00;
    case 2: goto L_11e06f2c;
    case 3: goto L_11e06f50;
    default: x86_unimpl("switch@0x11e06edd out of table"); return;
  }
L_11e06ee4:;
  /* 11e06ee4 jmp dword ptr [ecx*4 + 0x11e06fe8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11e06fe8)))); return;
  /* 11e06eeb nop  */
  /* nop */
L_11e06eec:;
  /* 11e06eec jmp dword ptr [ecx*4 + 0x11e06f6c] */
  switch (ECX) {
    case 0: goto L_11e06fcf;
    case 1: goto L_11e06fbc;
    case 2: goto L_11e06fb4;
    case 3: goto L_11e06fac;
    case 4: goto L_11e06fa4;
    case 5: goto L_11e06f9c;
    case 6: goto L_11e06f94;
    case 7: goto L_11e06f8c;
    default: x86_unimpl("switch@0x11e06eec out of table"); return;
  }
  /* 11e06ef3 nop  */
  /* nop */
L_11e06f00:;
  /* 11e06f00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06f02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e06f04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e06f06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e06f09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e06f0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e06f0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e06f12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e06f15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06f18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06f1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06f1e jb 0x11e06eec */
  if (C.cf) goto L_11e06eec;
  /* 11e06f20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e06f22 jmp dword ptr [edx*4 + 0x11e06fd8] */
  switch (EDX) {
    case 0: goto L_11e06fe8;
    case 1: goto L_11e06ff0;
    case 2: goto L_11e06ffc;
    case 3: goto L_11e07010;
    default: x86_unimpl("switch@0x11e06f22 out of table"); return;
  }
  /* 11e06f29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e06f2c:;
  /* 11e06f2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06f2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e06f30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e06f32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e06f35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e06f38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e06f3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06f3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06f41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06f44 jb 0x11e06eec */
  if (C.cf) goto L_11e06eec;
  /* 11e06f46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e06f48 jmp dword ptr [edx*4 + 0x11e06fd8] */
  switch (EDX) {
    case 0: goto L_11e06fe8;
    case 1: goto L_11e06ff0;
    case 2: goto L_11e06ffc;
    case 3: goto L_11e07010;
    default: x86_unimpl("switch@0x11e06f48 out of table"); return;
  }
  /* 11e06f4f nop  */
  /* nop */
L_11e06f50:;
  /* 11e06f50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e06f52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e06f54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e06f56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e06f57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e06f5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e06f5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e06f5e jb 0x11e06eec */
  if (C.cf) goto L_11e06eec;
  /* 11e06f60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e06f62 jmp dword ptr [edx*4 + 0x11e06fd8] */
  switch (EDX) {
    case 0: goto L_11e06fe8;
    case 1: goto L_11e06ff0;
    case 2: goto L_11e06ffc;
    case 3: goto L_11e07010;
    default: x86_unimpl("switch@0x11e06f62 out of table"); return;
  }
  /* 11e06f69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e06f8c:;
  /* 11e06f8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11e06f90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11e06f94:;
  /* 11e06f94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11e06f98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11e06f9c:;
  /* 11e06f9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11e06fa0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11e06fa4:;
  /* 11e06fa4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11e06fa8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11e06fac:;
  /* 11e06fac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11e06fb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11e06fb4:;
  /* 11e06fb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11e06fb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11e06fbc:;
  /* 11e06fbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11e06fc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11e06fc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e06fcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e06fcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e06fcf:;
  /* 11e06fcf jmp dword ptr [edx*4 + 0x11e06fd8] */
  switch (EDX) {
    case 0: goto L_11e06fe8;
    case 1: goto L_11e06ff0;
    case 2: goto L_11e06ffc;
    case 3: goto L_11e07010;
    default: x86_unimpl("switch@0x11e06fcf out of table"); return;
  }
  /* 11e06fd6 mov edi, edi */
  EDI = (EDI);
L_11e06fe8:;
  /* 11e06fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06feb pop esi */
  ESI = (pop32());
  /* 11e06fec pop edi */
  EDI = (pop32());
  /* 11e06fed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e06fee ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e06fef nop  */
  /* nop */
L_11e06ff0:;
  /* 11e06ff0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e06ff2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e06ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e06ff7 pop esi */
  ESI = (pop32());
  /* 11e06ff8 pop edi */
  EDI = (pop32());
  /* 11e06ff9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e06ffa ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e06ffb nop  */
  /* nop */
L_11e06ffc:;
  /* 11e06ffc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e06ffe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e07000 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e07003 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e07006 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07009 pop esi */
  ESI = (pop32());
  /* 11e0700a pop edi */
  EDI = (pop32());
  /* 11e0700b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0700c ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e0700d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e07010:;
  /* 11e07010 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e07012 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11e07014 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e07017 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e0701a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e0701d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e07020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07023 pop esi */
  ESI = (pop32());
  /* 11e07024 pop edi */
  EDI = (pop32());
  /* 11e07025 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e07026 ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e07027 nop  */
  /* nop */
L_11e07028:;
  /* 11e07028 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11e0702c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11e07030 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11e07036 jne 0x11e0705c */
  if (!C.zf) goto L_11e0705c;
  /* 11e07038 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e0703b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0703e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07041 jb 0x11e07050 */
  if (C.cf) goto L_11e07050;
  /* 11e07043 std  */
  C.df=1;
  /* 11e07044 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e07046 cld  */
  C.df=0;
  /* 11e07047 jmp dword ptr [edx*4 + 0x11e07170] */
  switch (EDX) {
    case 0: goto L_11e07180;
    case 1: goto L_11e07188;
    case 2: goto L_11e07198;
    case 3: goto L_11e071ac;
    default: x86_unimpl("switch@0x11e07047 out of table"); return;
  }
  /* 11e0704e mov edi, edi */
  EDI = (EDI);
L_11e07050:;
  /* 11e07050 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e07052 jmp dword ptr [ecx*4 + 0x11e07120] */
  switch (ECX) {
    case 0: goto L_11e07167;
    default: x86_unimpl("switch@0x11e07052 out of table"); return;
  }
  /* 11e07059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e0705c:;
  /* 11e0705c mov eax, edi */
  EAX = (EDI);
  /* 11e0705e mov edx, 3 */
  EDX = (0x3u);
  /* 11e07063 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07066 jb 0x11e07074 */
  if (C.cf) goto L_11e07074;
  /* 11e07068 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0706b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0706d jmp dword ptr [eax*4 + 0x11e07078] */
  switch (EAX) {
    case 1: goto L_11e07088;
    case 2: goto L_11e070a8;
    case 3: goto L_11e070d0;
    default: x86_unimpl("switch@0x11e0706d out of table"); return;
  }
L_11e07074:;
  /* 11e07074 jmp dword ptr [ecx*4 + 0x11e07170] */
  switch (ECX) {
    case 0: goto L_11e07180;
    case 1: goto L_11e07188;
    case 2: goto L_11e07198;
    case 3: goto L_11e071ac;
    default: x86_unimpl("switch@0x11e07074 out of table"); return;
  }
  /* 11e0707b nop  */
  /* nop */
L_11e07088:;
  /* 11e07088 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e0708b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0708d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e07090 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11e07091 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e07094 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11e07095 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07098 jb 0x11e07050 */
  if (C.cf) goto L_11e07050;
  /* 11e0709a std  */
  C.df=1;
  /* 11e0709b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e0709d cld  */
  C.df=0;
  /* 11e0709e jmp dword ptr [edx*4 + 0x11e07170] */
  switch (EDX) {
    case 0: goto L_11e07180;
    case 1: goto L_11e07188;
    case 2: goto L_11e07198;
    case 3: goto L_11e071ac;
    default: x86_unimpl("switch@0x11e0709e out of table"); return;
  }
  /* 11e070a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e070a8:;
  /* 11e070a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e070ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e070ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e070b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e070b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e070b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e070b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e070bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e070bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e070c2 jb 0x11e07050 */
  if (C.cf) goto L_11e07050;
  /* 11e070c4 std  */
  C.df=1;
  /* 11e070c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e070c7 cld  */
  C.df=0;
  /* 11e070c8 jmp dword ptr [edx*4 + 0x11e07170] */
  switch (EDX) {
    case 0: goto L_11e07180;
    case 1: goto L_11e07188;
    case 2: goto L_11e07198;
    case 3: goto L_11e071ac;
    default: x86_unimpl("switch@0x11e070c8 out of table"); return;
  }
  /* 11e070cf nop  */
  /* nop */
L_11e070d0:;
  /* 11e070d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e070d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e070d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e070d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e070db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e070de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e070e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e070e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e070e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e070ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e070ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e070f0 jb 0x11e07050 */
  if (C.cf) goto L_11e07050;
  /* 11e070f6 std  */
  C.df=1;
L_11e070f7:;
  /* 11e070f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11e070f9 cld  */
  C.df=0;
  /* 11e070fa jmp dword ptr [edx*4 + 0x11e07170] */
  switch (EDX) {
    case 0: goto L_11e07180;
    case 1: goto L_11e07188;
    case 2: goto L_11e07198;
    case 3: goto L_11e071ac;
    default: x86_unimpl("switch@0x11e070fa out of table"); return;
  }
  /* 11e07101 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11e07104 and al, 0x71 */
  { uint32_t _r=(AL)&(0x71u); AL = (_r); fl_logic(_r,8); }
  /* 11e07106 loopne 0x11e07119 */
  x86_unimpl("loopne @ 0x11e07106");
  /* 11e07108 sub al, 0x71 */
  { uint32_t _a=(AL),_b=(0x71u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0710a loopne 0x11e0711d */
  x86_unimpl("loopne @ 0x11e0710a");
  /* 11e0710c xor al, 0x71 */
  { uint32_t _r=(AL)^(0x71u); AL = (_r); fl_logic(_r,8); }
  /* 11e0710e loopne 0x11e07121 */
  x86_unimpl("loopne @ 0x11e0710e");
  /* 11e07110 cmp al, 0x71 */
  { uint32_t _a=(AL),_b=(0x71u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e07112 loopne 0x11e07125 */
  x86_unimpl("loopne @ 0x11e07112");
  /* 11e07114 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11e07115 jno 0x11e070f7 */
  if (!C.of) goto L_11e070f7;
  /* 11e07117 adc dword ptr [ecx + esi*2 - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*2 + -0x20))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*2 + -0x20), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e0711b adc dword ptr [ecx + esi*2 - 0x20], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + ESI*2 + -0x20))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + ESI*2 + -0x20), (_r)); fl_add(_a,_b,_r,32); }
  /* 11e07124 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11e07128 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11e0712c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11e07130 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11e07134 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11e07138 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11e0713c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11e07140 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11e07144 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11e07148 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11e0714c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11e07150 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11e07154 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11e07158 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11e0715c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11e07163 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07165 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11e07167:;
  /* 11e07167 jmp dword ptr [edx*4 + 0x11e07170] */
  switch (EDX) {
    case 0: goto L_11e07180;
    case 1: goto L_11e07188;
    case 2: goto L_11e07198;
    case 3: goto L_11e071ac;
    default: x86_unimpl("switch@0x11e07167 out of table"); return;
  }
  /* 11e0716e mov edi, edi */
  EDI = (EDI);
L_11e07180:;
  /* 11e07180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07183 pop esi */
  ESI = (pop32());
  /* 11e07184 pop edi */
  EDI = (pop32());
  /* 11e07185 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e07186 ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e07187 nop  */
  /* nop */
L_11e07188:;
  /* 11e07188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e0718b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e0718e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07191 pop esi */
  ESI = (pop32());
  /* 11e07192 pop edi */
  EDI = (pop32());
  /* 11e07193 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e07194 ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e07195 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e07198:;
  /* 11e07198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e0719b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e0719e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e071a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e071a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e071a7 pop esi */
  ESI = (pop32());
  /* 11e071a8 pop edi */
  EDI = (pop32());
  /* 11e071a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e071aa ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
  /* 11e071ab nop  */
  /* nop */
L_11e071ac:;
  /* 11e071ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11e071af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11e071b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11e071b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11e071b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11e071bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11e071be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e071c1 pop esi */
  ESI = (pop32());
  /* 11e071c2 pop edi */
  EDI = (pop32());
  /* 11e071c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e071c4 ret  */
  ESPCHK(0x11e06e90u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11e071d0 (145 bytes, 42 insns) */
void f_11e071d0(void) {
  FTRACE(0x11e071d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e071d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e071d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e071d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e071d4 call 0x11e07280 */
  push32(0x11e071d9u); f_11e07280();
  /* 11e071d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e071dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e071de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e071e5 jmp 0x11e071f0 */
  goto L_11e071f0;
L_11e071e7:;
  /* 11e071e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e071ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e071ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e071f0:;
  /* 11e071f0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e071f4 jae 0x11e0721a */
  if (!C.cf) goto L_11e0721a;
  /* 11e071f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e071f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e071fc cmp ecx, dword ptr [eax*8 + 0x11e2e670] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11e2e670))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07203 jne 0x11e07218 */
  if (!C.zf) goto L_11e07218;
  /* 11e07205 call 0x11e07270 */
  push32(0x11e0720au); f_11e07270();
  /* 11e0720a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0720d mov ecx, dword ptr [edx*8 + 0x11e2e674] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11e2e674)));
  /* 11e07214 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11e07216 jmp 0x11e0725d */
  goto L_11e0725d;
L_11e07218:;
  /* 11e07218 jmp 0x11e071e7 */
  goto L_11e071e7;
L_11e0721a:;
  /* 11e0721a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0721e jb 0x11e07233 */
  if (C.cf) goto L_11e07233;
  /* 11e07220 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07224 ja 0x11e07233 */
  if ((!C.cf&&!C.zf)) goto L_11e07233;
  /* 11e07226 call 0x11e07270 */
  push32(0x11e0722bu); f_11e07270();
  /* 11e0722b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11e07231 jmp 0x11e0725d */
  goto L_11e0725d;
L_11e07233:;
  /* 11e07233 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0723a jb 0x11e07252 */
  if (C.cf) goto L_11e07252;
  /* 11e0723c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07243 ja 0x11e07252 */
  if ((!C.cf&&!C.zf)) goto L_11e07252;
  /* 11e07245 call 0x11e07270 */
  push32(0x11e0724au); f_11e07270();
  /* 11e0724a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11e07250 jmp 0x11e0725d */
  goto L_11e0725d;
L_11e07252:;
  /* 11e07252 call 0x11e07270 */
  push32(0x11e07257u); f_11e07270();
  /* 11e07257 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11e0725d:;
  /* 11e0725d mov esp, ebp */
  ESP = (EBP);
  /* 11e0725f pop ebp */
  EBP = (pop32());
  /* 11e07260 ret  */
  ESPCHK(0x11e071d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017270 @ 0x11e07270 (13 bytes, 6 insns) */
void f_11e07270(void) {
  FTRACE(0x11e07270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07270 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07271 mov ebp, esp */
  EBP = (ESP);
  /* 11e07273 call 0x11dfeb50 */
  push32(0x11e07278u); f_11dfeb50();
  /* 11e07278 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0727b pop ebp */
  EBP = (pop32());
  /* 11e0727c ret  */
  ESPCHK(0x11e07270u, _esp0);
  ESP += 4; return;
}

/* FUN_10017280 @ 0x11e07280 (13 bytes, 6 insns) */
void f_11e07280(void) {
  FTRACE(0x11e07280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07280 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07281 mov ebp, esp */
  EBP = (ESP);
  /* 11e07283 call 0x11dfeb50 */
  push32(0x11e07288u); f_11dfeb50();
  /* 11e07288 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0728b pop ebp */
  EBP = (pop32());
  /* 11e0728c ret  */
  ESPCHK(0x11e07280u, _esp0);
  ESP += 4; return;
}

/* FUN_10017290 @ 0x11e07290 (85 bytes, 32 insns) */
void f_11e07290(void) {
  FTRACE(0x11e07290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07290 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07291 mov ebp, esp */
  EBP = (ESP);
  /* 11e07293 cmp dword ptr [0x11e2e8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0729a jne 0x11e072c4 */
  if (!C.zf) goto L_11e072c4;
  /* 11e0729c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0729f push eax */
  push32((uint32_t)(EAX));
  /* 11e072a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e072a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e072a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e072a7 push edx */
  push32((uint32_t)(EDX));
  /* 11e072a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e072aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11e072ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e072af push eax */
  push32((uint32_t)(EAX));
  /* 11e072b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e072b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e072b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e072b7 push edx */
  push32((uint32_t)(EDX));
  /* 11e072b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e072ba call 0x11e07d40 */
  push32(0x11e072bfu); f_11e07d40();
  /* 11e072bf add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e072c2 jmp 0x11e072e3 */
  goto L_11e072e3;
L_11e072c4:;
  /* 11e072c4 call 0x11e07270 */
  push32(0x11e072c9u); f_11e07270();
  /* 11e072c9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11e072cf push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e072d4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e072d7 push eax */
  push32((uint32_t)(EAX));
  /* 11e072d8 call 0x11e07f30 */
  push32(0x11e072ddu); f_11e07f30();
  /* 11e072dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e072e0 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11e072e3:;
  /* 11e072e3 pop ebp */
  EBP = (pop32());
  /* 11e072e4 ret  */
  ESPCHK(0x11e07290u, _esp0);
  ESP += 4; return;
}

/* FUN_100172f0 @ 0x11e072f0 (103 bytes, 39 insns) */
void f_11e072f0(void) {
  FTRACE(0x11e072f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e072f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e072f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e072f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e072f6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11e072f9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11e072fc fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11e072ff cmp dword ptr [0x11e2e8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07306 jne 0x11e07334 */
  if (!C.zf) goto L_11e07334;
  /* 11e07308 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0730b push eax */
  push32((uint32_t)(EAX));
  /* 11e0730c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0730f push ecx */
  push32((uint32_t)(ECX));
  /* 11e07310 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e07313 push edx */
  push32((uint32_t)(EDX));
  /* 11e07314 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e07317 push eax */
  push32((uint32_t)(EAX));
  /* 11e07318 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0731b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0731c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0731f push edx */
  push32((uint32_t)(EDX));
  /* 11e07320 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07323 push eax */
  push32((uint32_t)(EAX));
  /* 11e07324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07327 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07328 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0732a call 0x11e07d40 */
  push32(0x11e0732fu); f_11e07d40();
  /* 11e0732f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07332 jmp 0x11e07353 */
  goto L_11e07353;
L_11e07334:;
  /* 11e07334 call 0x11e07270 */
  push32(0x11e07339u); f_11e07270();
  /* 11e07339 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11e0733f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e07344 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e07347 push edx */
  push32((uint32_t)(EDX));
  /* 11e07348 call 0x11e07f30 */
  push32(0x11e0734du); f_11e07f30();
  /* 11e0734d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07350 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11e07353:;
  /* 11e07353 mov esp, ebp */
  ESP = (EBP);
  /* 11e07355 pop ebp */
  EBP = (pop32());
  /* 11e07356 ret  */
  ESPCHK(0x11e072f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017360 @ 0x11e07360 (178 bytes, 71 insns) */
void f_11e07360(void) {
  FTRACE(0x11e07360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07360 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07361 mov ebp, esp */
  EBP = (ESP);
  /* 11e07363 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07366 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e07369 push eax */
  push32((uint32_t)(EAX));
  /* 11e0736a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11e0736d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0736e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07371 push edx */
  push32((uint32_t)(EDX));
  /* 11e07372 call 0x11e079c0 */
  push32(0x11e07377u); f_11e079c0();
  /* 11e07377 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0737a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0737c jne 0x11e073a6 */
  if (!C.zf) goto L_11e073a6;
  /* 11e0737e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e07381 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11e07383 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e07386 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11e07389 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0738a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e0738d push edx */
  push32((uint32_t)(EDX));
  /* 11e0738e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07391 push eax */
  push32((uint32_t)(EAX));
  /* 11e07392 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07395 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07396 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11e07399 push edx */
  push32((uint32_t)(EDX));
  /* 11e0739a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11e0739d push eax */
  push32((uint32_t)(EAX));
  /* 11e0739e call 0x11e074f0 */
  push32(0x11e073a3u); f_11e074f0();
  /* 11e073a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e073a6:;
  /* 11e073a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e073a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e073aa call 0x11e07e60 */
  push32(0x11e073afu); f_11e07e60();
  /* 11e073af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e073b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e073b5 cmp dword ptr [0x11e2e8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e073bc jne 0x11e073ee */
  if (!C.zf) goto L_11e073ee;
  /* 11e073be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e073c2 je 0x11e073ee */
  if (C.zf) goto L_11e073ee;
  /* 11e073c4 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e073c7 push edx */
  push32((uint32_t)(EDX));
  /* 11e073c8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e073cb push eax */
  push32((uint32_t)(EAX));
  /* 11e073cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e073cf push ecx */
  push32((uint32_t)(ECX));
  /* 11e073d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e073d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e073d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e073d7 push edx */
  push32((uint32_t)(EDX));
  /* 11e073d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e073db push eax */
  push32((uint32_t)(EAX));
  /* 11e073dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e073df push ecx */
  push32((uint32_t)(ECX));
  /* 11e073e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e073e3 push edx */
  push32((uint32_t)(EDX));
  /* 11e073e4 call 0x11e07d40 */
  push32(0x11e073e9u); f_11e07d40();
  /* 11e073e9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e073ec jmp 0x11e0740e */
  goto L_11e0740e;
L_11e073ee:;
  /* 11e073ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e073f1 push eax */
  push32((uint32_t)(EAX));
  /* 11e073f2 call 0x11e07de0 */
  push32(0x11e073f7u); f_11e07de0();
  /* 11e073f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e073fa push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e073ff mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e07402 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07403 call 0x11e07f30 */
  push32(0x11e07408u); f_11e07f30();
  /* 11e07408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0740b fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11e0740e:;
  /* 11e0740e mov esp, ebp */
  ESP = (EBP);
  /* 11e07410 pop ebp */
  EBP = (pop32());
  /* 11e07411 ret  */
  ESPCHK(0x11e07360u, _esp0);
  ESP += 4; return;
}

/* FUN_10017420 @ 0x11e07420 (206 bytes, 81 insns) */
void f_11e07420(void) {
  FTRACE(0x11e07420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07420 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07421 mov ebp, esp */
  EBP = (ESP);
  /* 11e07423 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07426 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e07429 push eax */
  push32((uint32_t)(EAX));
  /* 11e0742a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11e0742d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0742e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07431 push edx */
  push32((uint32_t)(EDX));
  /* 11e07432 call 0x11e079c0 */
  push32(0x11e07437u); f_11e079c0();
  /* 11e07437 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0743a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0743c jne 0x11e0747e */
  if (!C.zf) goto L_11e0747e;
  /* 11e0743e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e07441 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e07443 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e07446 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e07449 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0744c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0744f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e07452 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e07455 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11e07458 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0745b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e0745e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11e07461 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07462 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11e07465 push edx */
  push32((uint32_t)(EDX));
  /* 11e07466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07469 push eax */
  push32((uint32_t)(EAX));
  /* 11e0746a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0746d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0746e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11e07471 push edx */
  push32((uint32_t)(EDX));
  /* 11e07472 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11e07475 push eax */
  push32((uint32_t)(EAX));
  /* 11e07476 call 0x11e074f0 */
  push32(0x11e0747bu); f_11e074f0();
  /* 11e0747b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0747e:;
  /* 11e0747e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07481 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07482 call 0x11e07e60 */
  push32(0x11e07487u); f_11e07e60();
  /* 11e07487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0748a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0748d cmp dword ptr [0x11e2e8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07494 jne 0x11e074ca */
  if (!C.zf) goto L_11e074ca;
  /* 11e07496 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0749a je 0x11e074ca */
  if (C.zf) goto L_11e074ca;
  /* 11e0749c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e0749f push edx */
  push32((uint32_t)(EDX));
  /* 11e074a0 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e074a3 push eax */
  push32((uint32_t)(EAX));
  /* 11e074a4 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e074a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e074a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e074ab push edx */
  push32((uint32_t)(EDX));
  /* 11e074ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e074af push eax */
  push32((uint32_t)(EAX));
  /* 11e074b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e074b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e074b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e074b7 push edx */
  push32((uint32_t)(EDX));
  /* 11e074b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e074bb push eax */
  push32((uint32_t)(EAX));
  /* 11e074bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e074bf push ecx */
  push32((uint32_t)(ECX));
  /* 11e074c0 call 0x11e07d40 */
  push32(0x11e074c5u); f_11e07d40();
  /* 11e074c5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e074c8 jmp 0x11e074ea */
  goto L_11e074ea;
L_11e074ca:;
  /* 11e074ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e074cd push edx */
  push32((uint32_t)(EDX));
  /* 11e074ce call 0x11e07de0 */
  push32(0x11e074d3u); f_11e07de0();
  /* 11e074d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e074d6 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e074db mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e074de push eax */
  push32((uint32_t)(EAX));
  /* 11e074df call 0x11e07f30 */
  push32(0x11e074e4u); f_11e07f30();
  /* 11e074e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e074e7 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11e074ea:;
  /* 11e074ea mov esp, ebp */
  ESP = (EBP);
  /* 11e074ec pop ebp */
  EBP = (pop32());
  /* 11e074ed ret  */
  ESPCHK(0x11e07420u, _esp0);
  ESP += 4; return;
}

/* FUN_100174f0 @ 0x11e074f0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11e074f0(void) {
  FTRACE(0x11e074f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e074f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e074f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e074f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e074f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e074f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e07500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07503 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11e0750a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0750d mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11e07514 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07517 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0751a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0751c je 0x11e07534 */
  if (C.zf) goto L_11e07534;
  /* 11e0751e mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11e07525 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07528 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0752b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0752e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07531 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e07534:;
  /* 11e07534 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07537 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0753a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0753c je 0x11e07553 */
  if (C.zf) goto L_11e07553;
  /* 11e0753e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11e07545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e0754b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11e0754d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07550 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e07553:;
  /* 11e07553 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07556 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07559 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0755b je 0x11e07573 */
  if (C.zf) goto L_11e07573;
  /* 11e0755d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11e07564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07567 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0756a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0756d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07570 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11e07573:;
  /* 11e07573 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07576 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0757b je 0x11e07593 */
  if (C.zf) goto L_11e07593;
  /* 11e0757d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11e07584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07587 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0758a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0758d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07590 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11e07593:;
  /* 11e07593 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07596 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07599 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0759b je 0x11e075b2 */
  if (C.zf) goto L_11e075b2;
  /* 11e0759d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11e075a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e075a7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e075aa or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11e075ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e075af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e075b2:;
  /* 11e075b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e075b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e075b7 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e075ba neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e075bc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e075be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e075bf and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e075c2 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e075c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e075c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e075cb and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11e075ce or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e075d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e075d3 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e075d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e075d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e075db and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e075de neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e075e0 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e075e2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e075e3 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e075e6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11e075e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e075ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e075ef and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11e075f2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e075f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e075f7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e075fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e075fd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e075ff and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07602 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e07604 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07606 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e07607 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0760a shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11e0760d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07610 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e07613 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11e07615 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e07617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0761a mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e0761d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07620 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e07622 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07625 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e07627 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07629 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e0762a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0762d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e0762f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07632 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e07635 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11e07638 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0763a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0763d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e07640 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07643 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07645 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07648 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0764a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0764c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e0764d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07653 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e07656 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11e07659 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0765b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0765e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e07661 call 0x11e07ef0 */
  push32(0x11e07666u); f_11e07ef0();
  /* 11e07666 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e07669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0766c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0766f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07671 je 0x11e07682 */
  if (C.zf) goto L_11e07682;
  /* 11e07673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07676 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e07679 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0767c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0767f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11e07682:;
  /* 11e07682 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e07685 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07688 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0768a je 0x11e0769a */
  if (C.zf) goto L_11e0769a;
  /* 11e0768c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0768f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e07692 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11e07694 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07697 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11e0769a:;
  /* 11e0769a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0769d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e076a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e076a2 je 0x11e076b3 */
  if (C.zf) goto L_11e076b3;
  /* 11e076a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e076a7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e076aa or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e076ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e076b0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11e076b3:;
  /* 11e076b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e076b6 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e076b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e076bb je 0x11e076cc */
  if (C.zf) goto L_11e076cc;
  /* 11e076bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e076c0 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e076c3 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e076c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e076c9 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11e076cc:;
  /* 11e076cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e076cf and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e076d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e076d4 je 0x11e076e4 */
  if (C.zf) goto L_11e076e4;
  /* 11e076d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e076d9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e076dc or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e076de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e076e1 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11e076e4:;
  /* 11e076e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e076e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e076e9 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11e076ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e076f1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e076f8 ja 0x11e07714 */
  if ((!C.cf&&!C.zf)) goto L_11e07714;
  /* 11e076fa cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07701 je 0x11e0772e */
  if (C.zf) goto L_11e0772e;
  /* 11e07703 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07707 je 0x11e07752 */
  if (C.zf) goto L_11e07752;
  /* 11e07709 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07710 je 0x11e07740 */
  if (C.zf) goto L_11e07740;
  /* 11e07712 jmp 0x11e0775f */
  goto L_11e0775f;
L_11e07714:;
  /* 11e07714 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0771b je 0x11e0771f */
  if (C.zf) goto L_11e0771f;
  /* 11e0771d jmp 0x11e0775f */
  goto L_11e0775f;
L_11e0771f:;
  /* 11e0771f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07722 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07724 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0772a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0772c jmp 0x11e0775f */
  goto L_11e0775f;
L_11e0772e:;
  /* 11e0772e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07731 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07733 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11e07736 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07739 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0773c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0773e jmp 0x11e0775f */
  goto L_11e0775f;
L_11e07740:;
  /* 11e07740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07743 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07745 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11e07748 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0774b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0774e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e07750 jmp 0x11e0775f */
  goto L_11e0775f;
L_11e07752:;
  /* 11e07752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07755 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07757 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0775a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0775d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0775f:;
  /* 11e0775f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07762 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07764 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0776a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e0776d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07771 je 0x11e077a8 */
  if (C.zf) goto L_11e077a8;
  /* 11e07773 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0777a je 0x11e07796 */
  if (C.zf) goto L_11e07796;
  /* 11e0777c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07783 je 0x11e07787 */
  if (C.zf) goto L_11e07787;
  /* 11e07785 jmp 0x11e077b8 */
  goto L_11e077b8;
L_11e07787:;
  /* 11e07787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0778a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0778c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0778f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07792 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e07794 jmp 0x11e077b8 */
  goto L_11e077b8;
L_11e07796:;
  /* 11e07796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07799 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0779b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0779e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e077a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e077a6 jmp 0x11e077b8 */
  goto L_11e077b8;
L_11e077a8:;
  /* 11e077a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e077ad and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e077b0 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e077b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077b6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e077b8:;
  /* 11e077b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e077bb and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e077c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e077c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e077c8 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e077ce or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e077d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e077d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077d8 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11e077db or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e077de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077e1 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11e077e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077e7 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11e077ea and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e077ed or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e077f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077f3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11e077f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e077f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e077fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e077fe mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11e07801 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e07804 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11e07807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0780a mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11e0780d or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07810 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07813 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11e07816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07819 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11e0781c and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0781f or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07825 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11e07828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0782b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0782e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07830 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11e07833 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e07836 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11e07839 call 0x11e07f10 */
  push32(0x11e0783eu); f_11e07f10();
  /* 11e0783e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11e07841 push edx */
  push32((uint32_t)(EDX));
  /* 11e07842 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e07844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e07846 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07849 push eax */
  push32((uint32_t)(EAX));
  /* 11e0784a call dword ptr [0x11e33348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33348))), 0x11e07850u);
  /* 11e07850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07853 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e07856 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11e07859 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0785c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0785e je 0x11e0786d */
  if (C.zf) goto L_11e0786d;
  /* 11e07860 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07863 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e07865 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11e07868 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0786b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e0786d:;
  /* 11e0786d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07870 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e07873 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11e07876 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07879 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0787b je 0x11e07889 */
  if (C.zf) goto L_11e07889;
  /* 11e0787d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07880 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e07882 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11e07884 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07887 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e07889:;
  /* 11e07889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0788c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0788f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e07892 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07897 je 0x11e078a6 */
  if (C.zf) goto L_11e078a6;
  /* 11e07899 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0789c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0789e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11e078a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e078a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e078a6:;
  /* 11e078a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e078a9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e078ac shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e078ae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e078b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e078b3 je 0x11e078c2 */
  if (C.zf) goto L_11e078c2;
  /* 11e078b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e078b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e078ba and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11e078bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e078c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e078c2:;
  /* 11e078c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e078c5 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e078c8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e078cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e078cd je 0x11e078db */
  if (C.zf) goto L_11e078db;
  /* 11e078cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e078d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e078d4 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11e078d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e078d9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e078db:;
  /* 11e078db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e078de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e078e0 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e078e3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e078e6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e078ea ja 0x11e07939 */
  if ((!C.cf&&!C.zf)) goto L_11e07939;
  /* 11e078ec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e078ef jmp dword ptr [ecx*4 + 0x11e079a1] */
  switch (ECX) {
    case 0: goto L_11e0792c;
    case 1: goto L_11e0791a;
    case 2: goto L_11e07908;
    case 3: goto L_11e078f6;
    default: x86_unimpl("switch@0x11e078ef out of table"); return;
  }
L_11e078f6:;
  /* 11e078f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e078f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e078fb and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11e078fe or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11e07901 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07904 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e07906 jmp 0x11e07939 */
  goto L_11e07939;
L_11e07908:;
  /* 11e07908 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0790b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0790d and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11e07910 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11e07913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07916 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e07918 jmp 0x11e07939 */
  goto L_11e07939;
L_11e0791a:;
  /* 11e0791a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0791d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0791f and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11e07922 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11e07925 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07928 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0792a jmp 0x11e07939 */
  goto L_11e07939;
L_11e0792c:;
  /* 11e0792c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0792f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e07931 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11e07934 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07937 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e07939:;
  /* 11e07939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0793c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0793e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e07941 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07944 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e07947 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0794b je 0x11e0795b */
  if (C.zf) goto L_11e0795b;
  /* 11e0794d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07951 je 0x11e0796d */
  if (C.zf) goto L_11e0796d;
  /* 11e07953 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07957 je 0x11e0797f */
  if (C.zf) goto L_11e0797f;
  /* 11e07959 jmp 0x11e0798c */
  goto L_11e0798c;
L_11e0795b:;
  /* 11e0795b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0795e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07960 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e07963 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e07966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07969 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0796b jmp 0x11e0798c */
  goto L_11e0798c;
L_11e0796d:;
  /* 11e0796d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07970 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07972 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e07975 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e07978 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0797b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0797d jmp 0x11e0798c */
  goto L_11e0798c;
L_11e0797f:;
  /* 11e0797f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07982 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e07984 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e07987 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0798a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0798c:;
  /* 11e0798c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0798f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e07992 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11e07995 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e07997 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11e0799a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e0799d mov esp, ebp */
  ESP = (EBP);
  /* 11e0799f pop ebp */
  EBP = (pop32());
  /* 11e079a0 ret  */
  ESPCHK(0x11e074f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100179c0 @ 0x11e079c0 (882 bytes, 268 insns) */
void f_11e079c0(void) {
  FTRACE(0x11e079c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e079c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e079c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e079c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e079c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e079c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e079cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e079cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e079d2 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e079d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e079d7 je 0x11e079fa */
  if (C.zf) goto L_11e079fa;
  /* 11e079d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e079dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e079df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e079e1 je 0x11e079fa */
  if (C.zf) goto L_11e079fa;
  /* 11e079e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e079e5 call 0x11e07f70 */
  push32(0x11e079eau); f_11e07f70();
  /* 11e079ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e079ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e079f0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11e079f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e079f5 jmp 0x11e07cfe */
  goto L_11e07cfe;
L_11e079fa:;
  /* 11e079fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e079fd and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07a00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07a02 je 0x11e07a25 */
  if (C.zf) goto L_11e07a25;
  /* 11e07a04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07a07 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07a0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e07a0c je 0x11e07a25 */
  if (C.zf) goto L_11e07a25;
  /* 11e07a0e push 4 */
  push32((uint32_t)(0x4u));
  /* 11e07a10 call 0x11e07f70 */
  push32(0x11e07a15u); f_11e07f70();
  /* 11e07a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07a1b and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11e07a1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e07a20 jmp 0x11e07cfe */
  goto L_11e07cfe;
L_11e07a25:;
  /* 11e07a25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07a28 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07a2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07a2d je 0x11e07ba1 */
  if (C.zf) goto L_11e07ba1;
  /* 11e07a33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07a36 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e07a3b je 0x11e07ba1 */
  if (C.zf) goto L_11e07ba1;
  /* 11e07a41 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e07a43 call 0x11e07f70 */
  push32(0x11e07a48u); f_11e07f70();
  /* 11e07a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07a4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07a4e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07a53 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e07a56 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07a5d ja 0x11e07a80 */
  if ((!C.cf&&!C.zf)) goto L_11e07a80;
  /* 11e07a5f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07a66 je 0x11e07ad5 */
  if (C.zf) goto L_11e07ad5;
  /* 11e07a68 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07a6c je 0x11e07a92 */
  if (C.zf) goto L_11e07a92;
  /* 11e07a6e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07a75 je 0x11e07b15 */
  if (C.zf) goto L_11e07b15;
  /* 11e07a7b jmp 0x11e07b93 */
  goto L_11e07b93;
L_11e07a80:;
  /* 11e07a80 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07a87 je 0x11e07b55 */
  if (C.zf) goto L_11e07b55;
  /* 11e07a8d jmp 0x11e07b93 */
  goto L_11e07b93;
L_11e07a92:;
  /* 11e07a92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07a95 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11e07a97 fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e07a9d fnstsw ax */
  AX = fpu_status();
  /* 11e07a9f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11e07aa2 jne 0x11e07ab7 */
  if (!C.zf) goto L_11e07ab7;
  /* 11e07aa4 mov edx, dword ptr [0x11e2ea20] */
  EDX = (r32((uint32_t)(0x11e2ea20)));
  /* 11e07aaa mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11e07aad mov eax, dword ptr [0x11e2ea24] */
  EAX = (r32((uint32_t)(0x11e2ea24)));
  /* 11e07ab2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e07ab5 jmp 0x11e07ac2 */
  goto L_11e07ac2;
L_11e07ab7:;
  /* 11e07ab7 fld qword ptr [0x11e2ea20] */
  fpu_push(rf64((uint32_t)(0x11e2ea20)));
  /* 11e07abd fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11e07abf fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11e07ac2:;
  /* 11e07ac2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07ac5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e07ac8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e07aca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e07acd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e07ad0 jmp 0x11e07b93 */
  goto L_11e07b93;
L_11e07ad5:;
  /* 11e07ad5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07ad8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11e07ada fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e07ae0 fnstsw ax */
  AX = fpu_status();
  /* 11e07ae2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11e07ae5 jne 0x11e07afa */
  if (!C.zf) goto L_11e07afa;
  /* 11e07ae7 mov edx, dword ptr [0x11e2ea20] */
  EDX = (r32((uint32_t)(0x11e2ea20)));
  /* 11e07aed mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11e07af0 mov eax, dword ptr [0x11e2ea24] */
  EAX = (r32((uint32_t)(0x11e2ea24)));
  /* 11e07af5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e07af8 jmp 0x11e07b05 */
  goto L_11e07b05;
L_11e07afa:;
  /* 11e07afa fld qword ptr [0x11e2ea30] */
  fpu_push(rf64((uint32_t)(0x11e2ea30)));
  /* 11e07b00 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11e07b02 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11e07b05:;
  /* 11e07b05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07b08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e07b0b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e07b0d mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e07b10 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e07b13 jmp 0x11e07b93 */
  goto L_11e07b93;
L_11e07b15:;
  /* 11e07b15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07b18 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11e07b1a fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e07b20 fnstsw ax */
  AX = fpu_status();
  /* 11e07b22 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11e07b25 jne 0x11e07b3a */
  if (!C.zf) goto L_11e07b3a;
  /* 11e07b27 mov edx, dword ptr [0x11e2ea30] */
  EDX = (r32((uint32_t)(0x11e2ea30)));
  /* 11e07b2d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11e07b30 mov eax, dword ptr [0x11e2ea34] */
  EAX = (r32((uint32_t)(0x11e2ea34)));
  /* 11e07b35 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11e07b38 jmp 0x11e07b45 */
  goto L_11e07b45;
L_11e07b3a:;
  /* 11e07b3a fld qword ptr [0x11e2ea20] */
  fpu_push(rf64((uint32_t)(0x11e2ea20)));
  /* 11e07b40 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11e07b42 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11e07b45:;
  /* 11e07b45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07b48 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e07b4b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e07b4d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e07b50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11e07b53 jmp 0x11e07b93 */
  goto L_11e07b93;
L_11e07b55:;
  /* 11e07b55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07b58 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11e07b5a fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e07b60 fnstsw ax */
  AX = fpu_status();
  /* 11e07b62 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11e07b65 jne 0x11e07b7a */
  if (!C.zf) goto L_11e07b7a;
  /* 11e07b67 mov edx, dword ptr [0x11e2ea30] */
  EDX = (r32((uint32_t)(0x11e2ea30)));
  /* 11e07b6d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11e07b70 mov eax, dword ptr [0x11e2ea34] */
  EAX = (r32((uint32_t)(0x11e2ea34)));
  /* 11e07b75 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11e07b78 jmp 0x11e07b85 */
  goto L_11e07b85;
L_11e07b7a:;
  /* 11e07b7a fld qword ptr [0x11e2ea30] */
  fpu_push(rf64((uint32_t)(0x11e2ea30)));
  /* 11e07b80 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11e07b82 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11e07b85:;
  /* 11e07b85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07b88 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e07b8b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e07b8d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e07b90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11e07b93:;
  /* 11e07b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07b96 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11e07b99 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e07b9c jmp 0x11e07cfe */
  goto L_11e07cfe;
L_11e07ba1:;
  /* 11e07ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07ba4 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07ba7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e07ba9 je 0x11e07cfe */
  if (C.zf) goto L_11e07cfe;
  /* 11e07baf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07bb2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07bb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07bb7 je 0x11e07cfe */
  if (C.zf) goto L_11e07cfe;
  /* 11e07bbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e07bc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07bc7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07bcc je 0x11e07bd5 */
  if (C.zf) goto L_11e07bd5;
  /* 11e07bce mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11e07bd5:;
  /* 11e07bd5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07bd8 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11e07bda fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e07be0 fnstsw ax */
  AX = fpu_status();
  /* 11e07be2 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11e07be5 jne 0x11e07cde */
  if (!C.zf) goto L_11e07cde;
  /* 11e07beb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11e07bee push eax */
  push32((uint32_t)(EAX));
  /* 11e07bef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07bf2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e07bf5 push edx */
  push32((uint32_t)(EDX));
  /* 11e07bf6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e07bf8 push eax */
  push32((uint32_t)(EAX));
  /* 11e07bf9 call 0x11e0add0 */
  push32(0x11e07bfeu); f_11e0add0();
  /* 11e07bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07c01 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11e07c04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e07c07 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07c0d mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e07c10 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07c17 jge 0x11e07c31 */
  if ((C.sf==C.of)) goto L_11e07c31;
  /* 11e07c19 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11e07c1c fmul qword ptr [0x11e2a718] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11e2a718)));
  /* 11e07c22 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11e07c25 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e07c2c jmp 0x11e07cce */
  goto L_11e07cce;
L_11e07c31:;
  /* 11e07c31 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11e07c34 fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e07c3a fnstsw ax */
  AX = fpu_status();
  /* 11e07c3c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11e07c3f je 0x11e07c4a */
  if (C.zf) goto L_11e07c4a;
  /* 11e07c41 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11e07c48 jmp 0x11e07c51 */
  goto L_11e07c51;
L_11e07c4a:;
  /* 11e07c4a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11e07c51:;
  /* 11e07c51 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e07c54 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e07c57 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11e07c5b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11e07c5f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11e07c63 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11e07c67 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11e07c6a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11e07c6e jmp 0x11e07c79 */
  goto L_11e07c79;
L_11e07c70:;
  /* 11e07c70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e07c73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07c76 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e07c79:;
  /* 11e07c79 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07c80 jge 0x11e07cc0 */
  if ((C.sf==C.of)) goto L_11e07cc0;
  /* 11e07c82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e07c85 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07c8a je 0x11e07c99 */
  if (C.zf) goto L_11e07c99;
  /* 11e07c8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07c90 jne 0x11e07c99 */
  if (!C.zf) goto L_11e07c99;
  /* 11e07c92 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11e07c99:;
  /* 11e07c99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e07c9c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e07c9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e07ca1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e07ca4 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07ca7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e07ca9 je 0x11e07cb6 */
  if (C.zf) goto L_11e07cb6;
  /* 11e07cab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e07cae or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07cb3 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e07cb6:;
  /* 11e07cb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e07cb9 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e07cbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e07cbe jmp 0x11e07c70 */
  goto L_11e07c70;
L_11e07cc0:;
  /* 11e07cc0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07cc4 je 0x11e07cce */
  if (C.zf) goto L_11e07cce;
  /* 11e07cc6 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11e07cc9 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11e07ccb fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11e07cce:;
  /* 11e07cce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07cd1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e07cd4 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e07cd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e07cd9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e07cdc jmp 0x11e07ce5 */
  goto L_11e07ce5;
L_11e07cde:;
  /* 11e07cde mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11e07ce5:;
  /* 11e07ce5 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07ce9 je 0x11e07cf5 */
  if (C.zf) goto L_11e07cf5;
  /* 11e07ceb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e07ced call 0x11e07f70 */
  push32(0x11e07cf2u); f_11e07f70();
  /* 11e07cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e07cf5:;
  /* 11e07cf5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07cf8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11e07cfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e07cfe:;
  /* 11e07cfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07d01 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07d06 je 0x11e07d25 */
  if (C.zf) goto L_11e07d25;
  /* 11e07d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07d0b and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07d0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07d10 je 0x11e07d25 */
  if (C.zf) goto L_11e07d25;
  /* 11e07d12 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e07d14 call 0x11e07f70 */
  push32(0x11e07d19u); f_11e07f70();
  /* 11e07d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07d1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07d1f and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11e07d22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e07d25:;
  /* 11e07d25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e07d27 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07d2b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11e07d2e mov esp, ebp */
  ESP = (EBP);
  /* 11e07d30 pop ebp */
  EBP = (pop32());
  /* 11e07d31 ret  */
  ESPCHK(0x11e079c0u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11e07d40 (155 bytes, 54 insns) */
void f_11e07d40(void) {
  FTRACE(0x11e07d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07d41 mov ebp, esp */
  EBP = (ESP);
  /* 11e07d43 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07d49 push eax */
  push32((uint32_t)(EAX));
  /* 11e07d4a call 0x11e07e20 */
  push32(0x11e07d4fu); f_11e07e20();
  /* 11e07d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07d52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e07d55 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07d59 je 0x11e07db7 */
  if (C.zf) goto L_11e07db7;
  /* 11e07d5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07d5e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e07d61 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e07d64 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e07d67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e07d6a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e07d6d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e07d70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e07d73 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e07d76 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e07d79 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e07d7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e07d7f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e07d82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e07d85 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e07d8a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e07d8d push edx */
  push32((uint32_t)(EDX));
  /* 11e07d8e call 0x11e07f30 */
  push32(0x11e07d93u); f_11e07f30();
  /* 11e07d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07d96 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11e07d99 push eax */
  push32((uint32_t)(EAX));
  /* 11e07d9a call 0x11e07ee0 */
  push32(0x11e07d9fu); f_11e07ee0();
  /* 11e07d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07da4 jne 0x11e07db2 */
  if (!C.zf) goto L_11e07db2;
  /* 11e07da6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07da9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07daa call 0x11e07de0 */
  push32(0x11e07dafu); f_11e07de0();
  /* 11e07daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e07db2:;
  /* 11e07db2 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11e07db5 jmp 0x11e07dd7 */
  goto L_11e07dd7;
L_11e07db7:;
  /* 11e07db7 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11e07dbc mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e07dbf push edx */
  push32((uint32_t)(EDX));
  /* 11e07dc0 call 0x11e07f30 */
  push32(0x11e07dc5u); f_11e07f30();
  /* 11e07dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07dc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07dcb push eax */
  push32((uint32_t)(EAX));
  /* 11e07dcc call 0x11e07de0 */
  push32(0x11e07dd1u); f_11e07de0();
  /* 11e07dd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07dd4 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11e07dd7:;
  /* 11e07dd7 mov esp, ebp */
  ESP = (EBP);
  /* 11e07dd9 pop ebp */
  EBP = (pop32());
  /* 11e07dda ret  */
  ESPCHK(0x11e07d40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11e07de0 (58 bytes, 20 insns) */
void f_11e07de0(void) {
  FTRACE(0x11e07de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07de1 mov ebp, esp */
  EBP = (ESP);
  /* 11e07de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07de7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e07dea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07dee je 0x11e07dfe */
  if (C.zf) goto L_11e07dfe;
  /* 11e07df0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07df4 jle 0x11e07e16 */
  if ((C.zf||C.sf!=C.of)) goto L_11e07e16;
  /* 11e07df6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07dfa jle 0x11e07e0b */
  if ((C.zf||C.sf!=C.of)) goto L_11e07e0b;
  /* 11e07dfc jmp 0x11e07e16 */
  goto L_11e07e16;
L_11e07dfe:;
  /* 11e07dfe call 0x11e07270 */
  push32(0x11e07e03u); f_11e07270();
  /* 11e07e03 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11e07e09 jmp 0x11e07e16 */
  goto L_11e07e16;
L_11e07e0b:;
  /* 11e07e0b call 0x11e07270 */
  push32(0x11e07e10u); f_11e07270();
  /* 11e07e10 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11e07e16:;
  /* 11e07e16 mov esp, ebp */
  ESP = (EBP);
  /* 11e07e18 pop ebp */
  EBP = (pop32());
  /* 11e07e19 ret  */
  ESPCHK(0x11e07de0u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11e07e20 (63 bytes, 22 insns) */
void f_11e07e20(void) {
  FTRACE(0x11e07e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07e21 mov ebp, esp */
  EBP = (ESP);
  /* 11e07e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07e24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e07e2b jmp 0x11e07e36 */
  goto L_11e07e36;
L_11e07e2d:;
  /* 11e07e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07e30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e07e33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e07e36:;
  /* 11e07e36 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07e3a jge 0x11e07e59 */
  if ((C.sf==C.of)) goto L_11e07e59;
  /* 11e07e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07e3f mov edx, dword ptr [ecx*8 + 0x11e2e7d8] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11e2e7d8)));
  /* 11e07e46 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e07e49 jne 0x11e07e57 */
  if (!C.zf) goto L_11e07e57;
  /* 11e07e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07e4e mov eax, dword ptr [eax*8 + 0x11e2e7dc] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11e2e7dc)));
  /* 11e07e55 jmp 0x11e07e5b */
  goto L_11e07e5b;
L_11e07e57:;
  /* 11e07e57 jmp 0x11e07e2d */
  goto L_11e07e2d;
L_11e07e59:;
  /* 11e07e59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e07e5b:;
  /* 11e07e5b mov esp, ebp */
  ESP = (EBP);
  /* 11e07e5d pop ebp */
  EBP = (pop32());
  /* 11e07e5e ret  */
  ESPCHK(0x11e07e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e60 @ 0x11e07e60 (113 bytes, 38 insns) */
void f_11e07e60(void) {
  FTRACE(0x11e07e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07e61 mov ebp, esp */
  EBP = (ESP);
  /* 11e07e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07e67 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07e6c je 0x11e07e77 */
  if (C.zf) goto L_11e07e77;
  /* 11e07e6e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11e07e75 jmp 0x11e07eca */
  goto L_11e07eca;
L_11e07e77:;
  /* 11e07e77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07e7a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07e7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07e7f je 0x11e07e8a */
  if (C.zf) goto L_11e07e8a;
  /* 11e07e81 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e07e88 jmp 0x11e07eca */
  goto L_11e07eca;
L_11e07e8a:;
  /* 11e07e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07e8d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07e90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e07e92 je 0x11e07e9d */
  if (C.zf) goto L_11e07e9d;
  /* 11e07e94 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e07e9b jmp 0x11e07eca */
  goto L_11e07eca;
L_11e07e9d:;
  /* 11e07e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07ea0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07ea5 je 0x11e07eb0 */
  if (C.zf) goto L_11e07eb0;
  /* 11e07ea7 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11e07eae jmp 0x11e07eca */
  goto L_11e07eca;
L_11e07eb0:;
  /* 11e07eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07eb3 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07eb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07eb8 je 0x11e07ec3 */
  if (C.zf) goto L_11e07ec3;
  /* 11e07eba mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11e07ec1 jmp 0x11e07eca */
  goto L_11e07eca;
L_11e07ec3:;
  /* 11e07ec3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e07eca:;
  /* 11e07eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e07ecd mov esp, ebp */
  ESP = (EBP);
  /* 11e07ecf pop ebp */
  EBP = (pop32());
  /* 11e07ed0 ret  */
  ESPCHK(0x11e07e60u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11e07ee0 (7 bytes, 5 insns) */
void f_11e07ee0(void) {
  FTRACE(0x11e07ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11e07ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e07ee5 pop ebp */
  EBP = (pop32());
  /* 11e07ee6 ret  */
  ESPCHK(0x11e07ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ef0 @ 0x11e07ef0 (22 bytes, 15 insns) */
void f_11e07ef0(void) {
  FTRACE(0x11e07ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11e07ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e07ef5 push esi */
  push32((uint32_t)(ESI));
  /* 11e07ef6 push edi */
  push32((uint32_t)(EDI));
  /* 11e07ef7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e07ef8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11e07efb movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11e07eff pop edi */
  EDI = (pop32());
  /* 11e07f00 pop esi */
  ESI = (pop32());
  /* 11e07f01 pop ebx */
  EBX = (pop32());
  /* 11e07f02 mov esp, ebp */
  ESP = (EBP);
  /* 11e07f04 pop ebp */
  EBP = (pop32());
  /* 11e07f05 ret  */
  ESPCHK(0x11e07ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f10 @ 0x11e07f10 (23 bytes, 15 insns) */
void f_11e07f10(void) {
  FTRACE(0x11e07f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07f11 mov ebp, esp */
  EBP = (ESP);
  /* 11e07f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11e07f14 push ebx */
  push32((uint32_t)(EBX));
  /* 11e07f15 push esi */
  push32((uint32_t)(ESI));
  /* 11e07f16 push edi */
  push32((uint32_t)(EDI));
  /* 11e07f17 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11e07f1a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11e07f1c movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11e07f20 pop edi */
  EDI = (pop32());
  /* 11e07f21 pop esi */
  ESI = (pop32());
  /* 11e07f22 pop ebx */
  EBX = (pop32());
  /* 11e07f23 mov esp, ebp */
  ESP = (EBP);
  /* 11e07f25 pop ebp */
  EBP = (pop32());
  /* 11e07f26 ret  */
  ESPCHK(0x11e07f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f30 @ 0x11e07f30 (50 bytes, 24 insns) */
void f_11e07f30(void) {
  FTRACE(0x11e07f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07f31 mov ebp, esp */
  EBP = (ESP);
  /* 11e07f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07f36 push ebx */
  push32((uint32_t)(EBX));
  /* 11e07f37 push esi */
  push32((uint32_t)(ESI));
  /* 11e07f38 push edi */
  push32((uint32_t)(EDI));
  /* 11e07f39 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e07f3a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11e07f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07f40 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11e07f43 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11e07f47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e07f4a not edx */
  EDX = (~(EDX));
  /* 11e07f4c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e07f4e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e07f50 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e07f54 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11e07f57 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11e07f5b pop edi */
  EDI = (pop32());
  /* 11e07f5c pop esi */
  ESI = (pop32());
  /* 11e07f5d pop ebx */
  EBX = (pop32());
  /* 11e07f5e mov esp, ebp */
  ESP = (EBP);
  /* 11e07f60 pop ebp */
  EBP = (pop32());
  /* 11e07f61 ret  */
  ESPCHK(0x11e07f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f70 @ 0x11e07f70 (117 bytes, 53 insns) */
void f_11e07f70(void) {
  FTRACE(0x11e07f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07f71 mov ebp, esp */
  EBP = (ESP);
  /* 11e07f73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e07f76 push ebx */
  push32((uint32_t)(EBX));
  /* 11e07f77 push esi */
  push32((uint32_t)(ESI));
  /* 11e07f78 push edi */
  push32((uint32_t)(EDI));
  /* 11e07f79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07f7c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07f81 je 0x11e07f8d */
  if (C.zf) goto L_11e07f8d;
  /* 11e07f83 fld xword ptr [0x11e2e8b4] */
  fpu_push(rf80((uint32_t)(0x11e2e8b4)));
  /* 11e07f89 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11e07f8c wait  */
  /* wait (no observable integer/reg state) */
L_11e07f8d:;
  /* 11e07f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07f90 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07f93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07f95 je 0x11e07fa7 */
  if (C.zf) goto L_11e07fa7;
  /* 11e07f97 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e07f98 fnstsw ax */
  AX = fpu_status();
  /* 11e07f9a fld xword ptr [0x11e2e8b4] */
  fpu_push(rf80((uint32_t)(0x11e2e8b4)));
  /* 11e07fa0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11e07fa3 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e07fa4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11e07fa5 fnstsw ax */
  AX = fpu_status();
L_11e07fa7:;
  /* 11e07fa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07faa and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11e07fad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e07faf je 0x11e07fbb */
  if (C.zf) goto L_11e07fbb;
  /* 11e07fb1 fld xword ptr [0x11e2e8c0] */
  fpu_push(rf80((uint32_t)(0x11e2e8c0)));
  /* 11e07fb7 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11e07fba wait  */
  /* wait (no observable integer/reg state) */
L_11e07fbb:;
  /* 11e07fbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07fbe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e07fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e07fc3 je 0x11e07fce */
  if (C.zf) goto L_11e07fce;
  /* 11e07fc5 fldz  */
  fpu_push(0.0);
  /* 11e07fc7 fld1  */
  fpu_push(1.0);
  /* 11e07fc9 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11e07fcb fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11e07fcd wait  */
  /* wait (no observable integer/reg state) */
L_11e07fce:;
  /* 11e07fce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e07fd1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e07fd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e07fd6 je 0x11e07fde */
  if (C.zf) goto L_11e07fde;
  /* 11e07fd8 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11e07fda fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11e07fdd wait  */
  /* wait (no observable integer/reg state) */
L_11e07fde:;
  /* 11e07fde pop edi */
  EDI = (pop32());
  /* 11e07fdf pop esi */
  ESI = (pop32());
  /* 11e07fe0 pop ebx */
  EBX = (pop32());
  /* 11e07fe1 mov esp, ebp */
  ESP = (EBP);
  /* 11e07fe3 pop ebp */
  EBP = (pop32());
  /* 11e07fe4 ret  */
  ESPCHK(0x11e07f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ff0 @ 0x11e07ff0 (421 bytes, 148 insns) */
void f_11e07ff0(void) {
  FTRACE(0x11e07ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e07ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e07ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11e07ff3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e07ff5 push 0x11e2b3b8 */
  push32((uint32_t)(0x11e2b3b8u));
  /* 11e07ffa push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11e07fff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e08005 push eax */
  push32((uint32_t)(EAX));
  /* 11e08006 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e0800d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08010 push ebx */
  push32((uint32_t)(EBX));
  /* 11e08011 push esi */
  push32((uint32_t)(ESI));
  /* 11e08012 push edi */
  push32((uint32_t)(EDI));
  /* 11e08013 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e08016 cmp dword ptr [0x11e30814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0801d jne 0x11e0806e */
  if (!C.zf) goto L_11e0806e;
  /* 11e0801f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e08022 push eax */
  push32((uint32_t)(EAX));
  /* 11e08023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08025 push 0x11e2b3b0 */
  push32((uint32_t)(0x11e2b3b0u));
  /* 11e0802a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0802c call dword ptr [0x11e3333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3333c))), 0x11e08032u);
  /* 11e08032 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08034 je 0x11e08042 */
  if (C.zf) goto L_11e08042;
  /* 11e08036 mov dword ptr [0x11e30814], 1 */
  w32((uint32_t)(0x11e30814), (0x1u));
  /* 11e08040 jmp 0x11e0806e */
  goto L_11e0806e;
L_11e08042:;
  /* 11e08042 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11e08045 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08046 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08048 push 0x11e2b3ac */
  push32((uint32_t)(0x11e2b3acu));
  /* 11e0804d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0804f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08051 call dword ptr [0x11e33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33340))), 0x11e08057u);
  /* 11e08057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08059 je 0x11e08067 */
  if (C.zf) goto L_11e08067;
  /* 11e0805b mov dword ptr [0x11e30814], 2 */
  w32((uint32_t)(0x11e30814), (0x2u));
  /* 11e08065 jmp 0x11e0806e */
  goto L_11e0806e;
L_11e08067:;
  /* 11e08067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08069 jmp 0x11e08198 */
  goto L_11e08198;
L_11e0806e:;
  /* 11e0806e cmp dword ptr [0x11e30814], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e30814))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08075 jne 0x11e080a5 */
  if (!C.zf) goto L_11e080a5;
  /* 11e08077 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0807b jne 0x11e08086 */
  if (!C.zf) goto L_11e08086;
  /* 11e0807d mov edx, dword ptr [0x11e3082c] */
  EDX = (r32((uint32_t)(0x11e3082c)));
  /* 11e08083 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11e08086:;
  /* 11e08086 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e08089 push eax */
  push32((uint32_t)(EAX));
  /* 11e0808a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0808d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0808e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08091 push edx */
  push32((uint32_t)(EDX));
  /* 11e08092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08095 push eax */
  push32((uint32_t)(EAX));
  /* 11e08096 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e08099 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0809a call dword ptr [0x11e33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33340))), 0x11e080a0u);
  /* 11e080a0 jmp 0x11e08198 */
  goto L_11e08198;
L_11e080a5:;
  /* 11e080a5 cmp dword ptr [0x11e30814], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30814))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e080ac jne 0x11e08196 */
  if (!C.zf) goto L_11e08196;
  /* 11e080b2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e080b6 jne 0x11e080c1 */
  if (!C.zf) goto L_11e080c1;
  /* 11e080b8 mov edx, dword ptr [0x11e3083c] */
  EDX = (r32((uint32_t)(0x11e3083c)));
  /* 11e080be mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11e080c1:;
  /* 11e080c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e080c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e080c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e080c8 push eax */
  push32((uint32_t)(EAX));
  /* 11e080c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e080cc push ecx */
  push32((uint32_t)(ECX));
  /* 11e080cd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e080d0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e080d2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e080d4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e080d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e080da push edx */
  push32((uint32_t)(EDX));
  /* 11e080db mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e080de push eax */
  push32((uint32_t)(EAX));
  /* 11e080df call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e080e5u);
  /* 11e080e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e080e8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e080ec jne 0x11e080f5 */
  if (!C.zf) goto L_11e080f5;
  /* 11e080ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e080f0 jmp 0x11e08198 */
  goto L_11e08198;
L_11e080f5:;
  /* 11e080f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e080fc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e080ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e08101 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08104 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e08106 call 0x11e01780 */
  push32(0x11e0810bu); f_11e01780();
  /* 11e0810b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11e0810e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e08111 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e08114 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e08117 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0811a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e0811c push edx */
  push32((uint32_t)(EDX));
  /* 11e0811d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0811f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e08122 push eax */
  push32((uint32_t)(EAX));
  /* 11e08123 call 0x11e03290 */
  push32(0x11e08128u); f_11e03290();
  /* 11e08128 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0812b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e08132 jmp 0x11e0814b */
  goto L_11e0814b;
  /* 11e08134 mov eax, 1 */
  EAX = (0x1u);
  /* 11e08139 ret  */
  ESPCHK(0x11e07ff0u, _esp0);
  ESP += 4; return;
  /* 11e0813a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0813d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e08144 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e0814b:;
  /* 11e0814b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0814f jne 0x11e08155 */
  if (!C.zf) goto L_11e08155;
  /* 11e08151 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08153 jmp 0x11e08198 */
  goto L_11e08198;
L_11e08155:;
  /* 11e08155 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e08158 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08159 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0815c push edx */
  push32((uint32_t)(EDX));
  /* 11e0815d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08160 push eax */
  push32((uint32_t)(EAX));
  /* 11e08161 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08164 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08165 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08167 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0816a push edx */
  push32((uint32_t)(EDX));
  /* 11e0816b call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e08171u);
  /* 11e08171 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e08174 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08178 jne 0x11e0817e */
  if (!C.zf) goto L_11e0817e;
  /* 11e0817a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0817c jmp 0x11e08198 */
  goto L_11e08198;
L_11e0817e:;
  /* 11e0817e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e08181 push eax */
  push32((uint32_t)(EAX));
  /* 11e08182 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e08185 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08186 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e08189 push edx */
  push32((uint32_t)(EDX));
  /* 11e0818a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0818d push eax */
  push32((uint32_t)(EAX));
  /* 11e0818e call dword ptr [0x11e3333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3333c))), 0x11e08194u);
  /* 11e08194 jmp 0x11e08198 */
  goto L_11e08198;
L_11e08196:;
  /* 11e08196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e08198:;
  /* 11e08198 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11e0819b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0819e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e081a5 pop edi */
  EDI = (pop32());
  /* 11e081a6 pop esi */
  ESI = (pop32());
  /* 11e081a7 pop ebx */
  EBX = (pop32());
  /* 11e081a8 mov esp, ebp */
  ESP = (EBP);
  /* 11e081aa pop ebp */
  EBP = (pop32());
  /* 11e081ab ret  */
  ESPCHK(0x11e07ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100181b0 @ 0x11e081b0 (1007 bytes, 269 insns) */
void f_11e081b0(void) {
  FTRACE(0x11e081b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e081b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e081b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e081b3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e081b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e081bd jl 0x11e081c5 */
  if ((C.sf!=C.of)) goto L_11e081c5;
  /* 11e081bf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e081c3 jle 0x11e081cc */
  if ((C.zf||C.sf!=C.of)) goto L_11e081cc;
L_11e081c5:;
  /* 11e081c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e081c7 jmp 0x11e0859b */
  goto L_11e0859b;
L_11e081cc:;
  /* 11e081cc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e081ce call 0x11dfbd50 */
  push32(0x11e081d3u); f_11dfbd50();
  /* 11e081d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e081d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e081dd mov eax, dword ptr [0x11e3099c] */
  EAX = (r32((uint32_t)(0x11e3099c)));
  /* 11e081e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e081e5 mov dword ptr [0x11e3099c], eax */
  w32((uint32_t)(0x11e3099c), (EAX));
L_11e081ea:;
  /* 11e081ea cmp dword ptr [0x11e309ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e309ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e081f1 je 0x11e081fd */
  if (C.zf) goto L_11e081fd;
  /* 11e081f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e081f5 call dword ptr [0x11e33338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33338))), 0x11e081fbu);
  /* 11e081fb jmp 0x11e081ea */
  goto L_11e081ea;
L_11e081fd:;
  /* 11e081fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08201 je 0x11e08241 */
  if (C.zf) goto L_11e08241;
  /* 11e08203 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08207 je 0x11e08221 */
  if (C.zf) goto L_11e08221;
  /* 11e08209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0820c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0820d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08210 push edx */
  push32((uint32_t)(EDX));
  /* 11e08211 call 0x11e085a0 */
  push32(0x11e08216u); f_11e085a0();
  /* 11e08216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08219 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11e0821f jmp 0x11e08233 */
  goto L_11e08233;
L_11e08221:;
  /* 11e08221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08224 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08227 mov ecx, dword ptr [eax + 0x11e2e9dc] */
  ECX = (r32((uint32_t)(EAX + 0x11e2e9dc)));
  /* 11e0822d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11e08233:;
  /* 11e08233 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11e08239 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0823c jmp 0x11e0857b */
  goto L_11e0857b;
L_11e08241:;
  /* 11e08241 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11e08248 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0824f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08253 je 0x11e08573 */
  if (C.zf) goto L_11e08573;
  /* 11e08259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0825c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0825f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08262 jne 0x11e08484 */
  if (!C.zf) goto L_11e08484;
  /* 11e08268 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0826b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e0826f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08272 jne 0x11e08484 */
  if (!C.zf) goto L_11e08484;
  /* 11e08278 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0827b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11e0827f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08282 jne 0x11e08484 */
  if (!C.zf) goto L_11e08484;
  /* 11e08288 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0828b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11e08291:;
  /* 11e08291 push 0x11e2b408 */
  push32((uint32_t)(0x11e2b408u));
  /* 11e08296 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e0829c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0829d call 0x11e0c450 */
  push32(0x11e082a2u); f_11e0c450();
  /* 11e082a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e082a5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11e082ab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e082b2 je 0x11e082dd */
  if (C.zf) goto L_11e082dd;
  /* 11e082b4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e082ba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e082c0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11e082c6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e082cd je 0x11e082dd */
  if (C.zf) goto L_11e082dd;
  /* 11e082cf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e082d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e082d8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e082db jne 0x11e08303 */
  if (!C.zf) goto L_11e08303;
L_11e082dd:;
  /* 11e082dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e082e1 je 0x11e082fc */
  if (C.zf) goto L_11e082fc;
  /* 11e082e3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e082e5 call 0x11dfbdf0 */
  push32(0x11e082eau); f_11dfbdf0();
  /* 11e082ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e082ed mov edx, dword ptr [0x11e3099c] */
  EDX = (r32((uint32_t)(0x11e3099c)));
  /* 11e082f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e082f6 mov dword ptr [0x11e3099c], edx */
  w32((uint32_t)(0x11e3099c), (EDX));
L_11e082fc:;
  /* 11e082fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e082fe jmp 0x11e0859b */
  goto L_11e0859b;
L_11e08303:;
  /* 11e08303 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11e0830a jmp 0x11e08315 */
  goto L_11e08315;
L_11e0830c:;
  /* 11e0830c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0830f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08312 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e08315:;
  /* 11e08315 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08319 jg 0x11e08363 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e08363;
  /* 11e0831b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e08321 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08322 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e08328 push edx */
  push32((uint32_t)(EDX));
  /* 11e08329 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0832c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0832f mov ecx, dword ptr [eax + 0x11e2e9d8] */
  ECX = (r32((uint32_t)(EAX + 0x11e2e9d8)));
  /* 11e08335 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08336 call 0x11e0c410 */
  push32(0x11e0833bu); f_11e0c410();
  /* 11e0833b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0833e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08340 jne 0x11e08361 */
  if (!C.zf) goto L_11e08361;
  /* 11e08342 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e08345 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08348 mov eax, dword ptr [edx + 0x11e2e9d8] */
  EAX = (r32((uint32_t)(EDX + 0x11e2e9d8)));
  /* 11e0834e push eax */
  push32((uint32_t)(EAX));
  /* 11e0834f call 0x11e01410 */
  push32(0x11e08354u); f_11e01410();
  /* 11e08354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08357 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0835d jne 0x11e08361 */
  if (!C.zf) goto L_11e08361;
  /* 11e0835f jmp 0x11e08363 */
  goto L_11e08363;
L_11e08361:;
  /* 11e08361 jmp 0x11e0830c */
  goto L_11e0830c;
L_11e08363:;
  /* 11e08363 push 0x11e2b404 */
  push32((uint32_t)(0x11e2b404u));
  /* 11e08368 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e0836e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08371 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11e08377 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e0837d push edx */
  push32((uint32_t)(EDX));
  /* 11e0837e call 0x11e0c3d0 */
  push32(0x11e08383u); f_11e0c3d0();
  /* 11e08383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08386 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11e0838c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08393 jne 0x11e083c9 */
  if (!C.zf) goto L_11e083c9;
  /* 11e08395 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e0839b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0839e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e083a1 je 0x11e083c9 */
  if (C.zf) goto L_11e083c9;
  /* 11e083a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e083a7 je 0x11e083c2 */
  if (C.zf) goto L_11e083c2;
  /* 11e083a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e083ab call 0x11dfbdf0 */
  push32(0x11e083b0u); f_11dfbdf0();
  /* 11e083b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e083b3 mov edx, dword ptr [0x11e3099c] */
  EDX = (r32((uint32_t)(0x11e3099c)));
  /* 11e083b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e083bc mov dword ptr [0x11e3099c], edx */
  w32((uint32_t)(0x11e3099c), (EDX));
L_11e083c2:;
  /* 11e083c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e083c4 jmp 0x11e0859b */
  goto L_11e0859b;
L_11e083c9:;
  /* 11e083c9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e083cd jg 0x11e0841a */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0841a;
  /* 11e083cf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e083d5 push eax */
  push32((uint32_t)(EAX));
  /* 11e083d6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e083dc push ecx */
  push32((uint32_t)(ECX));
  /* 11e083dd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11e083e3 push edx */
  push32((uint32_t)(EDX));
  /* 11e083e4 call 0x11e01e00 */
  push32(0x11e083e9u); f_11e01e00();
  /* 11e083e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e083ec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e083f2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11e083fa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11e08400 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08401 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e08404 push edx */
  push32((uint32_t)(EDX));
  /* 11e08405 call 0x11e085a0 */
  push32(0x11e0840au); f_11e085a0();
  /* 11e0840a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0840d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0840f je 0x11e0841a */
  if (C.zf) goto L_11e0841a;
  /* 11e08411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08414 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08417 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e0841a:;
  /* 11e0841a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e08420 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08426 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11e0842c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e08432 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e08435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08437 je 0x11e08448 */
  if (C.zf) goto L_11e08448;
  /* 11e08439 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e0843f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08442 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11e08448:;
  /* 11e08448 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e0844e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e08451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08453 jne 0x11e08291 */
  if (!C.zf) goto L_11e08291;
  /* 11e08459 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0845d je 0x11e0846c */
  if (C.zf) goto L_11e0846c;
  /* 11e0845f call 0x11e08740 */
  push32(0x11e08464u); f_11e08740();
  /* 11e08464 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11e0846a jmp 0x11e08476 */
  goto L_11e08476;
L_11e0846c:;
  /* 11e0846c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11e08476:;
  /* 11e08476 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11e0847c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0847f jmp 0x11e08571 */
  goto L_11e08571;
L_11e08484:;
  /* 11e08484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08487 push edx */
  push32((uint32_t)(EDX));
  /* 11e08488 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0848a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0848c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11e08492 push eax */
  push32((uint32_t)(EAX));
  /* 11e08493 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08496 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08497 call 0x11e08840 */
  push32(0x11e0849cu); f_11e08840();
  /* 11e0849c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0849f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e084a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e084a6 je 0x11e08571 */
  if (C.zf) goto L_11e08571;
  /* 11e084ac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e084b3 jmp 0x11e084be */
  goto L_11e084be;
L_11e084b5:;
  /* 11e084b5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e084b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e084bb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e084be:;
  /* 11e084be cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e084c2 jg 0x11e08520 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e08520;
  /* 11e084c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e084c8 je 0x11e0851e */
  if (C.zf) goto L_11e0851e;
  /* 11e084ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e084cd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e084d0 mov ecx, dword ptr [eax + 0x11e2e9dc] */
  ECX = (r32((uint32_t)(EAX + 0x11e2e9dc)));
  /* 11e084d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e084d7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11e084dd push edx */
  push32((uint32_t)(EDX));
  /* 11e084de call 0x11e05920 */
  push32(0x11e084e3u); f_11e05920();
  /* 11e084e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e084e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e084e8 je 0x11e08515 */
  if (C.zf) goto L_11e08515;
  /* 11e084ea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11e084f0 push eax */
  push32((uint32_t)(EAX));
  /* 11e084f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e084f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e084f5 call 0x11e085a0 */
  push32(0x11e084fau); f_11e085a0();
  /* 11e084fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e084fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e084ff je 0x11e0850c */
  if (C.zf) goto L_11e0850c;
  /* 11e08501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08504 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08507 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e0850a jmp 0x11e08513 */
  goto L_11e08513;
L_11e0850c:;
  /* 11e0850c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11e08513:;
  /* 11e08513 jmp 0x11e0851e */
  goto L_11e0851e;
L_11e08515:;
  /* 11e08515 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08518 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0851b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e0851e:;
  /* 11e0851e jmp 0x11e084b5 */
  goto L_11e084b5;
L_11e08520:;
  /* 11e08520 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08524 je 0x11e0854b */
  if (C.zf) goto L_11e0854b;
  /* 11e08526 call 0x11e08740 */
  push32(0x11e0852bu); f_11e08740();
  /* 11e0852b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0852e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e08530 mov ecx, dword ptr [0x11e2e9dc] */
  ECX = (r32((uint32_t)(0x11e2e9dc)));
  /* 11e08536 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08537 call 0x11dfc8e0 */
  push32(0x11e0853cu); f_11dfc8e0();
  /* 11e0853c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0853f mov dword ptr [0x11e2e9dc], 0 */
  w32((uint32_t)(0x11e2e9dc), (0x0u));
  /* 11e08549 jmp 0x11e08571 */
  goto L_11e08571;
L_11e0854b:;
  /* 11e0854b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0854f je 0x11e0855e */
  if (C.zf) goto L_11e0855e;
  /* 11e08551 call 0x11e08740 */
  push32(0x11e08556u); f_11e08740();
  /* 11e08556 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11e0855c jmp 0x11e08568 */
  goto L_11e08568;
L_11e0855e:;
  /* 11e0855e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11e08568:;
  /* 11e08568 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11e0856e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e08571:;
  /* 11e08571 jmp 0x11e0857b */
  goto L_11e0857b;
L_11e08573:;
  /* 11e08573 call 0x11e08740 */
  push32(0x11e08578u); f_11e08740();
  /* 11e08578 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e0857b:;
  /* 11e0857b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0857f je 0x11e08598 */
  if (C.zf) goto L_11e08598;
  /* 11e08581 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e08583 call 0x11dfbdf0 */
  push32(0x11e08588u); f_11dfbdf0();
  /* 11e08588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0858b mov eax, dword ptr [0x11e3099c] */
  EAX = (r32((uint32_t)(0x11e3099c)));
  /* 11e08590 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08593 mov dword ptr [0x11e3099c], eax */
  w32((uint32_t)(0x11e3099c), (EAX));
L_11e08598:;
  /* 11e08598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e0859b:;
  /* 11e0859b mov esp, ebp */
  ESP = (EBP);
  /* 11e0859d pop ebp */
  EBP = (pop32());
  /* 11e0859e ret  */
  ESPCHK(0x11e081b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100185a0 @ 0x11e085a0 (403 bytes, 117 insns) */
void f_11e085a0(void) {
  FTRACE(0x11e085a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e085a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e085a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e085a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e085a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e085ac push eax */
  push32((uint32_t)(EAX));
  /* 11e085ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11e085b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e085b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11e085ba push edx */
  push32((uint32_t)(EDX));
  /* 11e085bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11e085c1 push eax */
  push32((uint32_t)(EAX));
  /* 11e085c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e085c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e085c6 call 0x11e08840 */
  push32(0x11e085cbu); f_11e08840();
  /* 11e085cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e085ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e085d0 jne 0x11e085d9 */
  if (!C.zf) goto L_11e085d9;
  /* 11e085d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e085d4 jmp 0x11e0872f */
  goto L_11e0872f;
L_11e085d9:;
  /* 11e085d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11e085de push 0x11e2b40c */
  push32((uint32_t)(0x11e2b40cu));
  /* 11e085e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e085e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11e085eb push edx */
  push32((uint32_t)(EDX));
  /* 11e085ec call 0x11e01410 */
  push32(0x11e085f1u); f_11e01410();
  /* 11e085f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e085f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e085f7 push eax */
  push32((uint32_t)(EAX));
  /* 11e085f8 call 0x11dfbe50 */
  push32(0x11e085fdu); f_11dfbe50();
  /* 11e085fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08600 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e08603 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08607 jne 0x11e08610 */
  if (!C.zf) goto L_11e08610;
  /* 11e08609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0860b jmp 0x11e0872f */
  goto L_11e0872f;
L_11e08610:;
  /* 11e08610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08613 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08616 mov ecx, dword ptr [eax + 0x11e2e9dc] */
  ECX = (r32((uint32_t)(EAX + 0x11e2e9dc)));
  /* 11e0861c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0861f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08622 mov eax, dword ptr [edx*4 + 0x11e30824] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e30824)));
  /* 11e08629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0862c push 6 */
  push32((uint32_t)(0x6u));
  /* 11e0862e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08631 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08634 add ecx, 0x11e30864 */
  { uint32_t _a=(ECX),_b=(0x11e30864u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0863a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0863b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11e0863e push edx */
  push32((uint32_t)(EDX));
  /* 11e0863f call 0x11e06e90 */
  push32(0x11e08644u); f_11e06e90();
  /* 11e08644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08647 mov eax, dword ptr [0x11e3083c] */
  EAX = (r32((uint32_t)(0x11e3083c)));
  /* 11e0864c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e0864f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11e08655 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08656 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e08659 push edx */
  push32((uint32_t)(EDX));
  /* 11e0865a call 0x11e01590 */
  push32(0x11e0865fu); f_11e01590();
  /* 11e0865f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08665 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08668 mov dword ptr [ecx + 0x11e2e9dc], eax */
  w32((uint32_t)(ECX + 0x11e2e9dc), (EAX));
  /* 11e0866e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11e08674 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0867a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0867d mov dword ptr [eax*4 + 0x11e30824], edx */
  w32((uint32_t)(EAX*4 + 0x11e30824), (EDX));
  /* 11e08684 push 6 */
  push32((uint32_t)(0x6u));
  /* 11e08686 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11e0868c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0868d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08690 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08693 add edx, 0x11e30864 */
  { uint32_t _a=(EDX),_b=(0x11e30864u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08699 push edx */
  push32((uint32_t)(EDX));
  /* 11e0869a call 0x11e06e90 */
  push32(0x11e0869fu); f_11e06e90();
  /* 11e0869f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e086a2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e086a6 jne 0x11e086b3 */
  if (!C.zf) goto L_11e086b3;
  /* 11e086a8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e086ae mov dword ptr [0x11e3083c], eax */
  w32((uint32_t)(0x11e3083c), (EAX));
L_11e086b3:;
  /* 11e086b3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e086b7 jne 0x11e086c5 */
  if (!C.zf) goto L_11e086c5;
  /* 11e086b9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e086bf mov dword ptr [0x11e30840], ecx */
  w32((uint32_t)(0x11e30840), (ECX));
L_11e086c5:;
  /* 11e086c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e086c8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e086cb call dword ptr [edx + 0x11e2e9e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11e2e9e0))), 0x11e086d1u);
  /* 11e086d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e086d3 je 0x11e0870c */
  if (C.zf) goto L_11e0870c;
  /* 11e086d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e086d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e086db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e086de mov dword ptr [eax + 0x11e2e9dc], ecx */
  w32((uint32_t)(EAX + 0x11e2e9dc), (ECX));
  /* 11e086e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e086e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e086e9 push edx */
  push32((uint32_t)(EDX));
  /* 11e086ea call 0x11dfc8e0 */
  push32(0x11e086efu); f_11dfc8e0();
  /* 11e086ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e086f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e086f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e086f8 mov dword ptr [eax*4 + 0x11e30824], ecx */
  w32((uint32_t)(EAX*4 + 0x11e30824), (ECX));
  /* 11e086ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e08702 mov dword ptr [0x11e3083c], edx */
  w32((uint32_t)(0x11e3083c), (EDX));
  /* 11e08708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0870a jmp 0x11e0872f */
  goto L_11e0872f;
L_11e0870c:;
  /* 11e0870c cmp dword ptr [ebp - 0xc], 0x11e2e8cc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11e2e8ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08713 je 0x11e08723 */
  if (C.zf) goto L_11e08723;
  /* 11e08715 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e08717 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0871a push eax */
  push32((uint32_t)(EAX));
  /* 11e0871b call 0x11dfc8e0 */
  push32(0x11e08720u); f_11dfc8e0();
  /* 11e08720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e08723:;
  /* 11e08723 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08726 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08729 mov eax, dword ptr [ecx + 0x11e2e9dc] */
  EAX = (r32((uint32_t)(ECX + 0x11e2e9dc)));
L_11e0872f:;
  /* 11e0872f mov esp, ebp */
  ESP = (EBP);
  /* 11e08731 pop ebp */
  EBP = (pop32());
  /* 11e08732 ret  */
  ESPCHK(0x11e085a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018740 @ 0x11e08740 (256 bytes, 72 insns) */
void f_11e08740(void) {
  FTRACE(0x11e08740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08740 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08741 mov ebp, esp */
  EBP = (ESP);
  /* 11e08743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08746 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e0874d cmp dword ptr [0x11e2e9dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e9dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08754 jne 0x11e08774 */
  if (!C.zf) goto L_11e08774;
  /* 11e08756 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11e0875b push 0x11e2b40c */
  push32((uint32_t)(0x11e2b40cu));
  /* 11e08760 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e08762 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11e08767 call 0x11dfbe50 */
  push32(0x11e0876cu); f_11dfbe50();
  /* 11e0876c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0876f mov dword ptr [0x11e2e9dc], eax */
  w32((uint32_t)(0x11e2e9dc), (EAX));
L_11e08774:;
  /* 11e08774 mov eax, dword ptr [0x11e2e9dc] */
  EAX = (r32((uint32_t)(0x11e2e9dc)));
  /* 11e08779 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e0877c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e08783 jmp 0x11e0878e */
  goto L_11e0878e;
L_11e08785:;
  /* 11e08785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08788 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0878b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0878e:;
  /* 11e0878e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08791 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e08794 mov eax, dword ptr [edx + 0x11e2e9dc] */
  EAX = (r32((uint32_t)(EDX + 0x11e2e9dc)));
  /* 11e0879a push eax */
  push32((uint32_t)(EAX));
  /* 11e0879b push 0x11e2b418 */
  push32((uint32_t)(0x11e2b418u));
  /* 11e087a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e087a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e087a6 mov edx, dword ptr [ecx + 0x11e2e9d8] */
  EDX = (r32((uint32_t)(ECX + 0x11e2e9d8)));
  /* 11e087ac push edx */
  push32((uint32_t)(EDX));
  /* 11e087ad push 3 */
  push32((uint32_t)(0x3u));
  /* 11e087af mov eax, dword ptr [0x11e2e9dc] */
  EAX = (r32((uint32_t)(0x11e2e9dc)));
  /* 11e087b4 push eax */
  push32((uint32_t)(EAX));
  /* 11e087b5 call 0x11e089e0 */
  push32(0x11e087bau); f_11e089e0();
  /* 11e087ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e087bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e087c1 jge 0x11e08809 */
  if ((C.sf==C.of)) goto L_11e08809;
  /* 11e087c3 push 0x11e2b404 */
  push32((uint32_t)(0x11e2b404u));
  /* 11e087c8 mov ecx, dword ptr [0x11e2e9dc] */
  ECX = (r32((uint32_t)(0x11e2e9dc)));
  /* 11e087ce push ecx */
  push32((uint32_t)(ECX));
  /* 11e087cf call 0x11e015a0 */
  push32(0x11e087d4u); f_11e015a0();
  /* 11e087d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e087d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e087da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e087dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e087e0 mov eax, dword ptr [edx + 0x11e2e9dc] */
  EAX = (r32((uint32_t)(EDX + 0x11e2e9dc)));
  /* 11e087e6 push eax */
  push32((uint32_t)(EAX));
  /* 11e087e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e087ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e087ed mov edx, dword ptr [ecx + 0x11e2e9dc] */
  EDX = (r32((uint32_t)(ECX + 0x11e2e9dc)));
  /* 11e087f3 push edx */
  push32((uint32_t)(EDX));
  /* 11e087f4 call 0x11e05920 */
  push32(0x11e087f9u); f_11e05920();
  /* 11e087f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e087fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e087fe je 0x11e08807 */
  if (C.zf) goto L_11e08807;
  /* 11e08800 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e08807:;
  /* 11e08807 jmp 0x11e08837 */
  goto L_11e08837;
L_11e08809:;
  /* 11e08809 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0880d jne 0x11e08816 */
  if (!C.zf) goto L_11e08816;
  /* 11e0880f mov eax, dword ptr [0x11e2e9dc] */
  EAX = (r32((uint32_t)(0x11e2e9dc)));
  /* 11e08814 jmp 0x11e0883c */
  goto L_11e0883c;
L_11e08816:;
  /* 11e08816 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e08818 mov eax, dword ptr [0x11e2e9dc] */
  EAX = (r32((uint32_t)(0x11e2e9dc)));
  /* 11e0881d push eax */
  push32((uint32_t)(EAX));
  /* 11e0881e call 0x11dfc8e0 */
  push32(0x11e08823u); f_11dfc8e0();
  /* 11e08823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08826 mov dword ptr [0x11e2e9dc], 0 */
  w32((uint32_t)(0x11e2e9dc), (0x0u));
  /* 11e08830 mov eax, dword ptr [0x11e2e9f4] */
  EAX = (r32((uint32_t)(0x11e2e9f4)));
  /* 11e08835 jmp 0x11e0883c */
  goto L_11e0883c;
L_11e08837:;
  /* 11e08837 jmp 0x11e08785 */
  goto L_11e08785;
L_11e0883c:;
  /* 11e0883c mov esp, ebp */
  ESP = (EBP);
  /* 11e0883e pop ebp */
  EBP = (pop32());
  /* 11e0883f ret  */
  ESPCHK(0x11e08740u, _esp0);
  ESP += 4; return;
}

/* FUN_10018840 @ 0x11e08840 (388 bytes, 115 insns) */
void f_11e08840(void) {
  FTRACE(0x11e08840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08840 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08841 mov ebp, esp */
  EBP = (ESP);
  /* 11e08843 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08849 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0884d jne 0x11e08856 */
  if (!C.zf) goto L_11e08856;
  /* 11e0884f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08851 jmp 0x11e089c0 */
  goto L_11e089c0;
L_11e08856:;
  /* 11e08856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08859 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0885c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0885f jne 0x11e088b0 */
  if (!C.zf) goto L_11e088b0;
  /* 11e08861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08864 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e08868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0886a jne 0x11e088b0 */
  if (!C.zf) goto L_11e088b0;
  /* 11e0886c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0886f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11e08872 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08875 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11e08879 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0887d je 0x11e08899 */
  if (C.zf) goto L_11e08899;
  /* 11e0887f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08882 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11e08887 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0888a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11e08890 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08893 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11e08899:;
  /* 11e08899 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0889d je 0x11e088a8 */
  if (C.zf) goto L_11e088a8;
  /* 11e0889f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e088a2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e088a8:;
  /* 11e088a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e088ab jmp 0x11e089c0 */
  goto L_11e089c0;
L_11e088b0:;
  /* 11e088b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e088b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e088b4 push 0x11e2e954 */
  push32((uint32_t)(0x11e2e954u));
  /* 11e088b9 call 0x11e05920 */
  push32(0x11e088beu); f_11e05920();
  /* 11e088be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e088c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e088c3 je 0x11e08978 */
  if (C.zf) goto L_11e08978;
  /* 11e088c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e088cc push edx */
  push32((uint32_t)(EDX));
  /* 11e088cd push 0x11e2e8d0 */
  push32((uint32_t)(0x11e2e8d0u));
  /* 11e088d2 call 0x11e05920 */
  push32(0x11e088d7u); f_11e05920();
  /* 11e088d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e088da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e088dc je 0x11e08978 */
  if (C.zf) goto L_11e08978;
  /* 11e088e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e088e5 push eax */
  push32((uint32_t)(EAX));
  /* 11e088e6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11e088ec push ecx */
  push32((uint32_t)(ECX));
  /* 11e088ed call 0x11e08a30 */
  push32(0x11e088f2u); f_11e08a30();
  /* 11e088f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e088f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e088f7 je 0x11e08900 */
  if (C.zf) goto L_11e08900;
  /* 11e088f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e088fb jmp 0x11e089c0 */
  goto L_11e089c0;
L_11e08900:;
  /* 11e08900 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11e08906 push edx */
  push32((uint32_t)(EDX));
  /* 11e08907 push 0x11e30818 */
  push32((uint32_t)(0x11e30818u));
  /* 11e0890c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11e08912 push eax */
  push32((uint32_t)(EAX));
  /* 11e08913 call 0x11e0c490 */
  push32(0x11e08918u); f_11e0c490();
  /* 11e08918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0891b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0891d jne 0x11e08926 */
  if (!C.zf) goto L_11e08926;
  /* 11e0891f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08921 jmp 0x11e089c0 */
  goto L_11e089c0;
L_11e08926:;
  /* 11e08926 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e08928 mov cx, word ptr [0x11e3081c] */
  CX = (r16((uint32_t)(0x11e3081c)));
  /* 11e0892f mov dword ptr [0x11e30820], ecx */
  w32((uint32_t)(0x11e30820), (ECX));
  /* 11e08935 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11e0893b push edx */
  push32((uint32_t)(EDX));
  /* 11e0893c push 0x11e2e954 */
  push32((uint32_t)(0x11e2e954u));
  /* 11e08941 call 0x11e08b90 */
  push32(0x11e08946u); f_11e08b90();
  /* 11e08946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08949 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0894c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0894f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e08951 je 0x11e08966 */
  if (C.zf) goto L_11e08966;
  /* 11e08953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08956 push edx */
  push32((uint32_t)(EDX));
  /* 11e08957 push 0x11e2e8d0 */
  push32((uint32_t)(0x11e2e8d0u));
  /* 11e0895c call 0x11e01590 */
  push32(0x11e08961u); f_11e01590();
  /* 11e08961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08964 jmp 0x11e08978 */
  goto L_11e08978;
L_11e08966:;
  /* 11e08966 push 0x11e2e954 */
  push32((uint32_t)(0x11e2e954u));
  /* 11e0896b push 0x11e2e8d0 */
  push32((uint32_t)(0x11e2e8d0u));
  /* 11e08970 call 0x11e01590 */
  push32(0x11e08975u); f_11e01590();
  /* 11e08975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e08978:;
  /* 11e08978 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0897c je 0x11e08991 */
  if (C.zf) goto L_11e08991;
  /* 11e0897e push 6 */
  push32((uint32_t)(0x6u));
  /* 11e08980 push 0x11e30818 */
  push32((uint32_t)(0x11e30818u));
  /* 11e08985 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08988 push eax */
  push32((uint32_t)(EAX));
  /* 11e08989 call 0x11e06e90 */
  push32(0x11e0898eu); f_11e06e90();
  /* 11e0898e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e08991:;
  /* 11e08991 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08995 je 0x11e089aa */
  if (C.zf) goto L_11e089aa;
  /* 11e08997 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e08999 push 0x11e30820 */
  push32((uint32_t)(0x11e30820u));
  /* 11e0899e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e089a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e089a2 call 0x11e06e90 */
  push32(0x11e089a7u); f_11e06e90();
  /* 11e089a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e089aa:;
  /* 11e089aa push 0x11e2e954 */
  push32((uint32_t)(0x11e2e954u));
  /* 11e089af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e089b2 push edx */
  push32((uint32_t)(EDX));
  /* 11e089b3 call 0x11e01590 */
  push32(0x11e089b8u); f_11e01590();
  /* 11e089b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e089bb mov eax, 0x11e2e954 */
  EAX = (0x11e2e954u);
L_11e089c0:;
  /* 11e089c0 mov esp, ebp */
  ESP = (EBP);
  /* 11e089c2 pop ebp */
  EBP = (pop32());
  /* 11e089c3 ret  */
  ESPCHK(0x11e08840u, _esp0);
  ESP += 4; return;
}

/* FUN_100189d0 @ 0x11e089d0 (7 bytes, 5 insns) */
void f_11e089d0(void) {
  FTRACE(0x11e089d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e089d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e089d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e089d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e089d5 pop ebp */
  EBP = (pop32());
  /* 11e089d6 ret  */
  ESPCHK(0x11e089d0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11e089e0 (79 bytes, 28 insns) */
void f_11e089e0(void) {
  FTRACE(0x11e089e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e089e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e089e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e089e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e089e6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11e089e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e089ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e089f3 jmp 0x11e089fe */
  goto L_11e089fe;
L_11e089f5:;
  /* 11e089f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e089f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e089fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e089fe:;
  /* 11e089fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e08a01 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08a04 jge 0x11e08a24 */
  if ((C.sf==C.of)) goto L_11e08a24;
  /* 11e08a06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08a09 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e08a0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08a12 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e08a15 push edx */
  push32((uint32_t)(EDX));
  /* 11e08a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08a19 push eax */
  push32((uint32_t)(EAX));
  /* 11e08a1a call 0x11e015a0 */
  push32(0x11e08a1fu); f_11e015a0();
  /* 11e08a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a22 jmp 0x11e089f5 */
  goto L_11e089f5;
L_11e08a24:;
  /* 11e08a24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e08a2b mov esp, ebp */
  ESP = (EBP);
  /* 11e08a2d pop ebp */
  EBP = (pop32());
  /* 11e08a2e ret  */
  ESPCHK(0x11e089e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a30 @ 0x11e08a30 (349 bytes, 122 insns) */
void f_11e08a30(void) {
  FTRACE(0x11e08a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08a31 mov ebp, esp */
  EBP = (ESP);
  /* 11e08a33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08a36 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11e08a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08a40 push eax */
  push32((uint32_t)(EAX));
  /* 11e08a41 call 0x11e03290 */
  push32(0x11e08a46u); f_11e03290();
  /* 11e08a46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08a4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e08a4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e08a51 jne 0x11e08a5a */
  if (!C.zf) goto L_11e08a5a;
  /* 11e08a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08a55 jmp 0x11e08b89 */
  goto L_11e08b89;
L_11e08a5a:;
  /* 11e08a5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08a5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e08a60 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08a63 jne 0x11e08a90 */
  if (!C.zf) goto L_11e08a90;
  /* 11e08a65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08a68 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e08a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08a6e je 0x11e08a90 */
  if (C.zf) goto L_11e08a90;
  /* 11e08a70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08a73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a76 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08a77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08a7a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a80 push edx */
  push32((uint32_t)(EDX));
  /* 11e08a81 call 0x11e01590 */
  push32(0x11e08a86u); f_11e01590();
  /* 11e08a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08a8b jmp 0x11e08b89 */
  goto L_11e08b89;
L_11e08a90:;
  /* 11e08a90 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e08a97 jmp 0x11e08aa2 */
  goto L_11e08aa2;
L_11e08a99:;
  /* 11e08a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08a9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08a9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e08aa2:;
  /* 11e08aa2 push 0x11e2b41c */
  push32((uint32_t)(0x11e2b41cu));
  /* 11e08aa7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08aaa push ecx */
  push32((uint32_t)(ECX));
  /* 11e08aab call 0x11e0c3d0 */
  push32(0x11e08ab0u); f_11e0c3d0();
  /* 11e08ab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08ab3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e08ab6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08aba jne 0x11e08ac4 */
  if (!C.zf) goto L_11e08ac4;
  /* 11e08abc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e08abf jmp 0x11e08b89 */
  goto L_11e08b89;
L_11e08ac4:;
  /* 11e08ac4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08ac7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08aca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e08acc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11e08acf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08ad3 jne 0x11e08afa */
  if (!C.zf) goto L_11e08afa;
  /* 11e08ad5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08ad9 jge 0x11e08afa */
  if ((C.sf==C.of)) goto L_11e08afa;
  /* 11e08adb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e08adf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08ae2 je 0x11e08afa */
  if (C.zf) goto L_11e08afa;
  /* 11e08ae4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08ae7 push edx */
  push32((uint32_t)(EDX));
  /* 11e08ae8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08aeb push eax */
  push32((uint32_t)(EAX));
  /* 11e08aec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08aef push ecx */
  push32((uint32_t)(ECX));
  /* 11e08af0 call 0x11e01e00 */
  push32(0x11e08af5u); f_11e01e00();
  /* 11e08af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08af8 jmp 0x11e08b60 */
  goto L_11e08b60;
L_11e08afa:;
  /* 11e08afa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08afe jne 0x11e08b28 */
  if (!C.zf) goto L_11e08b28;
  /* 11e08b00 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08b04 jge 0x11e08b28 */
  if ((C.sf==C.of)) goto L_11e08b28;
  /* 11e08b06 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e08b0a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08b0d je 0x11e08b28 */
  if (C.zf) goto L_11e08b28;
  /* 11e08b0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08b12 push eax */
  push32((uint32_t)(EAX));
  /* 11e08b13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08b16 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08b1a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08b1d push edx */
  push32((uint32_t)(EDX));
  /* 11e08b1e call 0x11e01e00 */
  push32(0x11e08b23u); f_11e01e00();
  /* 11e08b23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08b26 jmp 0x11e08b60 */
  goto L_11e08b60;
L_11e08b28:;
  /* 11e08b28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08b2c jne 0x11e08b5b */
  if (!C.zf) goto L_11e08b5b;
  /* 11e08b2e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e08b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08b34 je 0x11e08b3f */
  if (C.zf) goto L_11e08b3f;
  /* 11e08b36 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e08b3a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08b3d jne 0x11e08b5b */
  if (!C.zf) goto L_11e08b5b;
L_11e08b3f:;
  /* 11e08b3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08b42 push edx */
  push32((uint32_t)(EDX));
  /* 11e08b43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08b46 push eax */
  push32((uint32_t)(EAX));
  /* 11e08b47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08b4a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08b50 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08b51 call 0x11e01e00 */
  push32(0x11e08b56u); f_11e01e00();
  /* 11e08b56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08b59 jmp 0x11e08b60 */
  goto L_11e08b60;
L_11e08b5b:;
  /* 11e08b5b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e08b5e jmp 0x11e08b89 */
  goto L_11e08b89;
L_11e08b60:;
  /* 11e08b60 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e08b64 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08b67 jne 0x11e08b6b */
  if (!C.zf) goto L_11e08b6b;
  /* 11e08b69 jmp 0x11e08b87 */
  goto L_11e08b87;
L_11e08b6b:;
  /* 11e08b6b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e08b6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08b71 jne 0x11e08b75 */
  if (!C.zf) goto L_11e08b75;
  /* 11e08b73 jmp 0x11e08b87 */
  goto L_11e08b87;
L_11e08b75:;
  /* 11e08b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e08b78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08b7b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11e08b7f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e08b82 jmp 0x11e08a99 */
  goto L_11e08a99;
L_11e08b87:;
  /* 11e08b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e08b89:;
  /* 11e08b89 mov esp, ebp */
  ESP = (EBP);
  /* 11e08b8b pop ebp */
  EBP = (pop32());
  /* 11e08b8c ret  */
  ESPCHK(0x11e08a30u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11e08b90 (101 bytes, 36 insns) */
void f_11e08b90(void) {
  FTRACE(0x11e08b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08b91 mov ebp, esp */
  EBP = (ESP);
  /* 11e08b93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08b96 push eax */
  push32((uint32_t)(EAX));
  /* 11e08b97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08b9a push ecx */
  push32((uint32_t)(ECX));
  /* 11e08b9b call 0x11e01590 */
  push32(0x11e08ba0u); f_11e01590();
  /* 11e08ba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08ba6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11e08baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08bac je 0x11e08bc8 */
  if (C.zf) goto L_11e08bc8;
  /* 11e08bae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08bb1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08bb5 push 0x11e2b424 */
  push32((uint32_t)(0x11e2b424u));
  /* 11e08bba push 2 */
  push32((uint32_t)(0x2u));
  /* 11e08bbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08bbf push edx */
  push32((uint32_t)(EDX));
  /* 11e08bc0 call 0x11e089e0 */
  push32(0x11e08bc5u); f_11e089e0();
  /* 11e08bc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e08bc8:;
  /* 11e08bc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08bcb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11e08bd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e08bd4 je 0x11e08bf3 */
  if (C.zf) goto L_11e08bf3;
  /* 11e08bd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08bd9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08bdf push edx */
  push32((uint32_t)(EDX));
  /* 11e08be0 push 0x11e2b420 */
  push32((uint32_t)(0x11e2b420u));
  /* 11e08be5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e08be7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08bea push eax */
  push32((uint32_t)(EAX));
  /* 11e08beb call 0x11e089e0 */
  push32(0x11e08bf0u); f_11e089e0();
  /* 11e08bf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e08bf3:;
  /* 11e08bf3 pop ebp */
  EBP = (pop32());
  /* 11e08bf4 ret  */
  ESPCHK(0x11e08b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c00 @ 0x11e08c00 (727 bytes, 263 insns) */
void f_11e08c00(void) {
  FTRACE(0x11e08c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08c01 mov ebp, esp */
  EBP = (ESP);
  /* 11e08c03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e08c05 push 0x11e2b428 */
  push32((uint32_t)(0x11e2b428u));
  /* 11e08c0a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11e08c0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e08c15 push eax */
  push32((uint32_t)(EAX));
  /* 11e08c16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e08c1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08c20 push ebx */
  push32((uint32_t)(EBX));
  /* 11e08c21 push esi */
  push32((uint32_t)(ESI));
  /* 11e08c22 push edi */
  push32((uint32_t)(EDI));
  /* 11e08c23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e08c26 cmp dword ptr [0x11e30844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08c2d jne 0x11e08c86 */
  if (!C.zf) goto L_11e08c86;
  /* 11e08c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08c35 push 0x11e2b3b0 */
  push32((uint32_t)(0x11e2b3b0u));
  /* 11e08c3a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e08c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08c41 call dword ptr [0x11e33330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33330))), 0x11e08c47u);
  /* 11e08c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08c49 je 0x11e08c57 */
  if (C.zf) goto L_11e08c57;
  /* 11e08c4b mov dword ptr [0x11e30844], 1 */
  w32((uint32_t)(0x11e30844), (0x1u));
  /* 11e08c55 jmp 0x11e08c86 */
  goto L_11e08c86;
L_11e08c57:;
  /* 11e08c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08c5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08c5d push 0x11e2b3ac */
  push32((uint32_t)(0x11e2b3acu));
  /* 11e08c62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e08c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08c69 call dword ptr [0x11e33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33334))), 0x11e08c6fu);
  /* 11e08c6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08c71 je 0x11e08c7f */
  if (C.zf) goto L_11e08c7f;
  /* 11e08c73 mov dword ptr [0x11e30844], 2 */
  w32((uint32_t)(0x11e30844), (0x2u));
  /* 11e08c7d jmp 0x11e08c86 */
  goto L_11e08c86;
L_11e08c7f:;
  /* 11e08c7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08c81 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08c86:;
  /* 11e08c86 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08c8a jle 0x11e08c9f */
  if ((C.zf||C.sf!=C.of)) goto L_11e08c9f;
  /* 11e08c8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e08c8f push eax */
  push32((uint32_t)(EAX));
  /* 11e08c90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08c93 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08c94 call 0x11e08f10 */
  push32(0x11e08c99u); f_11e08f10();
  /* 11e08c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08c9c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11e08c9f:;
  /* 11e08c9f cmp dword ptr [0x11e30844], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e30844))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08ca6 jne 0x11e08ccb */
  if (!C.zf) goto L_11e08ccb;
  /* 11e08ca8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e08cab push edx */
  push32((uint32_t)(EDX));
  /* 11e08cac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e08caf push eax */
  push32((uint32_t)(EAX));
  /* 11e08cb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e08cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08cb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08cb7 push edx */
  push32((uint32_t)(EDX));
  /* 11e08cb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08cbb push eax */
  push32((uint32_t)(EAX));
  /* 11e08cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08cbf push ecx */
  push32((uint32_t)(ECX));
  /* 11e08cc0 call dword ptr [0x11e33334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33334))), 0x11e08cc6u);
  /* 11e08cc6 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08ccb:;
  /* 11e08ccb cmp dword ptr [0x11e30844], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30844))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08cd2 jne 0x11e08eef */
  if (!C.zf) goto L_11e08eef;
  /* 11e08cd8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08cdc jne 0x11e08ce7 */
  if (!C.zf) goto L_11e08ce7;
  /* 11e08cde mov edx, dword ptr [0x11e3083c] */
  EDX = (r32((uint32_t)(0x11e3083c)));
  /* 11e08ce4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11e08ce7:;
  /* 11e08ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08ceb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e08cee push eax */
  push32((uint32_t)(EAX));
  /* 11e08cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08cf3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e08cf6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e08cf8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08cfa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e08cfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08d00 push edx */
  push32((uint32_t)(EDX));
  /* 11e08d01 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e08d04 push eax */
  push32((uint32_t)(EAX));
  /* 11e08d05 call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e08d0bu);
  /* 11e08d0b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e08d0e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08d12 jne 0x11e08d1b */
  if (!C.zf) goto L_11e08d1b;
  /* 11e08d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08d16 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08d1b:;
  /* 11e08d1b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e08d22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e08d25 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e08d27 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08d2a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e08d2c call 0x11e01780 */
  push32(0x11e08d31u); f_11e01780();
  /* 11e08d31 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11e08d34 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e08d37 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e08d3a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e08d3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e08d44 jmp 0x11e08d5d */
  goto L_11e08d5d;
  /* 11e08d46 mov eax, 1 */
  EAX = (0x1u);
  /* 11e08d4b ret  */
  ESPCHK(0x11e08c00u, _esp0);
  ESP += 4; return;
  /* 11e08d4c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e08d4f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e08d56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e08d5d:;
  /* 11e08d5d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08d61 jne 0x11e08d6a */
  if (!C.zf) goto L_11e08d6a;
  /* 11e08d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08d65 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08d6a:;
  /* 11e08d6a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e08d6d push edx */
  push32((uint32_t)(EDX));
  /* 11e08d6e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e08d71 push eax */
  push32((uint32_t)(EAX));
  /* 11e08d72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e08d75 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08d76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08d79 push edx */
  push32((uint32_t)(EDX));
  /* 11e08d7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08d7c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e08d7f push eax */
  push32((uint32_t)(EAX));
  /* 11e08d80 call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e08d86u);
  /* 11e08d86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08d88 jne 0x11e08d91 */
  if (!C.zf) goto L_11e08d91;
  /* 11e08d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08d8c jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08d91:;
  /* 11e08d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08d95 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e08d98 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08d99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e08d9c push edx */
  push32((uint32_t)(EDX));
  /* 11e08d9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08da0 push eax */
  push32((uint32_t)(EAX));
  /* 11e08da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08da5 call dword ptr [0x11e33330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33330))), 0x11e08dabu);
  /* 11e08dab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e08dae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08db2 jne 0x11e08dbb */
  if (!C.zf) goto L_11e08dbb;
  /* 11e08db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08db6 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08dbb:;
  /* 11e08dbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08dbe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11e08dc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e08dc6 je 0x11e08e0b */
  if (C.zf) goto L_11e08e0b;
  /* 11e08dc8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08dcc je 0x11e08e06 */
  if (C.zf) goto L_11e08e06;
  /* 11e08dce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e08dd1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08dd4 jle 0x11e08ddd */
  if ((C.zf||C.sf!=C.of)) goto L_11e08ddd;
  /* 11e08dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08dd8 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08ddd:;
  /* 11e08ddd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e08de0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08de1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e08de4 push edx */
  push32((uint32_t)(EDX));
  /* 11e08de5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e08de8 push eax */
  push32((uint32_t)(EAX));
  /* 11e08de9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e08dec push ecx */
  push32((uint32_t)(ECX));
  /* 11e08ded mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08df0 push edx */
  push32((uint32_t)(EDX));
  /* 11e08df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08df4 push eax */
  push32((uint32_t)(EAX));
  /* 11e08df5 call dword ptr [0x11e33330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33330))), 0x11e08dfbu);
  /* 11e08dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08dfd jne 0x11e08e06 */
  if (!C.zf) goto L_11e08e06;
  /* 11e08dff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08e01 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08e06:;
  /* 11e08e06 jmp 0x11e08eea */
  goto L_11e08eea;
L_11e08e0b:;
  /* 11e08e0b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e08e0e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e08e11 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e08e18 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e08e1b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e08e1d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08e20 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e08e22 call 0x11e01780 */
  push32(0x11e08e27u); f_11e01780();
  /* 11e08e27 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11e08e2a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e08e2d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e08e30 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e08e33 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e08e3a jmp 0x11e08e53 */
  goto L_11e08e53;
  /* 11e08e3c mov eax, 1 */
  EAX = (0x1u);
  /* 11e08e41 ret  */
  ESPCHK(0x11e08c00u, _esp0);
  ESP += 4; return;
  /* 11e08e42 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e08e45 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e08e4c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e08e53:;
  /* 11e08e53 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08e57 jne 0x11e08e60 */
  if (!C.zf) goto L_11e08e60;
  /* 11e08e59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08e5b jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08e60:;
  /* 11e08e60 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e08e63 push eax */
  push32((uint32_t)(EAX));
  /* 11e08e64 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e08e67 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08e68 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e08e6b push edx */
  push32((uint32_t)(EDX));
  /* 11e08e6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e08e6f push eax */
  push32((uint32_t)(EAX));
  /* 11e08e70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08e74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08e77 push edx */
  push32((uint32_t)(EDX));
  /* 11e08e78 call dword ptr [0x11e33330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33330))), 0x11e08e7eu);
  /* 11e08e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e08e80 jne 0x11e08e86 */
  if (!C.zf) goto L_11e08e86;
  /* 11e08e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08e84 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08e86:;
  /* 11e08e86 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08e8a jne 0x11e08eba */
  if (!C.zf) goto L_11e08eba;
  /* 11e08e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08e94 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e08e97 push eax */
  push32((uint32_t)(EAX));
  /* 11e08e98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e08e9b push ecx */
  push32((uint32_t)(ECX));
  /* 11e08e9c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e08ea1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e08ea4 push edx */
  push32((uint32_t)(EDX));
  /* 11e08ea5 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e08eabu);
  /* 11e08eab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e08eae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08eb2 jne 0x11e08eb8 */
  if (!C.zf) goto L_11e08eb8;
  /* 11e08eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08eb6 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08eb8:;
  /* 11e08eb8 jmp 0x11e08eea */
  goto L_11e08eea;
L_11e08eba:;
  /* 11e08eba push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11e08ebe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e08ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11e08ec2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e08ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08ec6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e08ec9 push edx */
  push32((uint32_t)(EDX));
  /* 11e08eca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e08ecd push eax */
  push32((uint32_t)(EAX));
  /* 11e08ece push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e08ed3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e08ed6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08ed7 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e08eddu);
  /* 11e08edd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e08ee0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08ee4 jne 0x11e08eea */
  if (!C.zf) goto L_11e08eea;
  /* 11e08ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e08ee8 jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08eea:;
  /* 11e08eea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e08eed jmp 0x11e08ef1 */
  goto L_11e08ef1;
L_11e08eef:;
  /* 11e08eef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e08ef1:;
  /* 11e08ef1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11e08ef4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e08ef7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e08efe pop edi */
  EDI = (pop32());
  /* 11e08eff pop esi */
  ESI = (pop32());
  /* 11e08f00 pop ebx */
  EBX = (pop32());
  /* 11e08f01 mov esp, ebp */
  ESP = (EBP);
  /* 11e08f03 pop ebp */
  EBP = (pop32());
  /* 11e08f04 ret  */
  ESPCHK(0x11e08c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f10 @ 0x11e08f10 (80 bytes, 32 insns) */
void f_11e08f10(void) {
  FTRACE(0x11e08f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08f11 mov ebp, esp */
  EBP = (ESP);
  /* 11e08f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08f19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e08f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08f1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e08f22:;
  /* 11e08f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e08f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e08f28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e08f2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e08f30 je 0x11e08f47 */
  if (C.zf) goto L_11e08f47;
  /* 11e08f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e08f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e08f3a je 0x11e08f47 */
  if (C.zf) goto L_11e08f47;
  /* 11e08f3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08f42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e08f45 jmp 0x11e08f22 */
  goto L_11e08f22;
L_11e08f47:;
  /* 11e08f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e08f4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e08f4f jne 0x11e08f59 */
  if (!C.zf) goto L_11e08f59;
  /* 11e08f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08f57 jmp 0x11e08f5c */
  goto L_11e08f5c;
L_11e08f59:;
  /* 11e08f59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11e08f5c:;
  /* 11e08f5c mov esp, ebp */
  ESP = (EBP);
  /* 11e08f5e pop ebp */
  EBP = (pop32());
  /* 11e08f5f ret  */
  ESPCHK(0x11e08f10u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11e08f60 (62 bytes, 23 insns) */
void f_11e08f60(void) {
  FTRACE(0x11e08f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08f61 mov ebp, esp */
  EBP = (ESP);
  /* 11e08f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08f66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e08f6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08f70 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08f73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e08f76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f79 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08f7c jb 0x11e08f86 */
  if (C.cf) goto L_11e08f86;
  /* 11e08f7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08f84 jae 0x11e08f8f */
  if (!C.cf) goto L_11e08f8f;
L_11e08f86:;
  /* 11e08f86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e08f89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08f8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e08f8f:;
  /* 11e08f8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e08f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e08f95 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e08f97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e08f9a mov esp, ebp */
  ESP = (EBP);
  /* 11e08f9c pop ebp */
  EBP = (pop32());
  /* 11e08f9d ret  */
  ESPCHK(0x11e08f60u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11e08fa0 (173 bytes, 66 insns) */
void f_11e08fa0(void) {
  FTRACE(0x11e08fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e08fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e08fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11e08fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e08fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08fa9 push eax */
  push32((uint32_t)(EAX));
  /* 11e08faa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e08fad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e08faf push edx */
  push32((uint32_t)(EDX));
  /* 11e08fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08fb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e08fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08fb6 call 0x11e08f60 */
  push32(0x11e08fbbu); f_11e08f60();
  /* 11e08fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08fbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e08fc1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08fc5 je 0x11e08ff7 */
  if (C.zf) goto L_11e08ff7;
  /* 11e08fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08fca add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08fcd push edx */
  push32((uint32_t)(EDX));
  /* 11e08fce push 1 */
  push32((uint32_t)(0x1u));
  /* 11e08fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08fd3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e08fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e08fd7 call 0x11e08f60 */
  push32(0x11e08fdcu); f_11e08f60();
  /* 11e08fdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08fdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e08fe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e08fe6 je 0x11e08ff7 */
  if (C.zf) goto L_11e08ff7;
  /* 11e08fe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08feb mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e08fee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08ff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08ff4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11e08ff7:;
  /* 11e08ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e08ffa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e08ffd push edx */
  push32((uint32_t)(EDX));
  /* 11e08ffe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e09001 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e09004 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09008 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e0900b push eax */
  push32((uint32_t)(EAX));
  /* 11e0900c call 0x11e08f60 */
  push32(0x11e09011u); f_11e08f60();
  /* 11e09011 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09014 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e09017 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0901b je 0x11e0902c */
  if (C.zf) goto L_11e0902c;
  /* 11e0901d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09020 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e09023 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09029 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11e0902c:;
  /* 11e0902c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0902f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09032 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09033 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e09036 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e09039 push eax */
  push32((uint32_t)(EAX));
  /* 11e0903a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0903d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e09040 push edx */
  push32((uint32_t)(EDX));
  /* 11e09041 call 0x11e08f60 */
  push32(0x11e09046u); f_11e08f60();
  /* 11e09046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09049 mov esp, ebp */
  ESP = (EBP);
  /* 11e0904b pop ebp */
  EBP = (pop32());
  /* 11e0904c ret  */
  ESPCHK(0x11e08fa0u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11e09050 (96 bytes, 37 insns) */
void f_11e09050(void) {
  FTRACE(0x11e09050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e09050 push ebp */
  push32((uint32_t)(EBP));
  /* 11e09051 mov ebp, esp */
  EBP = (ESP);
  /* 11e09053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0905b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e09061 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e09063 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09065 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e09067 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0906a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0906d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e09070 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e09075 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e09077 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09079 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0907b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0907e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09081 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e09083 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e09085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09088 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0908a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0908d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e09090 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e09092 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e09095 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09098 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e0909b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0909e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e090a1 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e090a3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11e090a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090a9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e090ac mov esp, ebp */
  ESP = (EBP);
  /* 11e090ae pop ebp */
  EBP = (pop32());
  /* 11e090af ret  */
  ESPCHK(0x11e09050u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11e090b0 (99 bytes, 37 insns) */
void f_11e090b0(void) {
  FTRACE(0x11e090b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e090b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e090b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e090b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e090b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e090bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e090bf neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e090c1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e090c3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e090c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e090cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e090d2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e090d5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e090d7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e090d9 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e090de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e090e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e090e7 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e090e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e090ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e090f5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e090f7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11e090fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e090fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e09100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09103 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e09105 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e09107 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e0910a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0910d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0910f mov esp, ebp */
  ESP = (EBP);
  /* 11e09111 pop ebp */
  EBP = (pop32());
  /* 11e09112 ret  */
  ESPCHK(0x11e090b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019120 @ 0x11e09120 (315 bytes, 101 insns) */
void f_11e09120(void) {
  FTRACE(0x11e09120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e09120 push ebp */
  push32((uint32_t)(EBP));
  /* 11e09121 mov ebp, esp */
  EBP = (ESP);
  /* 11e09123 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09126 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11e0912c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0912f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e09135 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09138 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e0913f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09142 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11e09149 jmp 0x11e0915d */
  goto L_11e0915d;
L_11e0914b:;
  /* 11e0914b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0914e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09151 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e09154 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09157 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0915a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e0915d:;
  /* 11e0915d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09161 jbe 0x11e091d7 */
  if ((C.cf||C.zf)) goto L_11e091d7;
  /* 11e09163 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09166 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e09168 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0916b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e0916e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e09171 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e09174 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e09177 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0917a push eax */
  push32((uint32_t)(EAX));
  /* 11e0917b call 0x11e09050 */
  push32(0x11e09180u); f_11e09050();
  /* 11e09180 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09183 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09186 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09187 call 0x11e09050 */
  push32(0x11e0918cu); f_11e09050();
  /* 11e0918c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0918f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e09192 push edx */
  push32((uint32_t)(EDX));
  /* 11e09193 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09196 push eax */
  push32((uint32_t)(EAX));
  /* 11e09197 call 0x11e08fa0 */
  push32(0x11e0919cu); f_11e08fa0();
  /* 11e0919c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0919f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e091a3 call 0x11e09050 */
  push32(0x11e091a8u); f_11e09050();
  /* 11e091a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e091ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e091ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e091b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e091b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e091bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e091c2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11e091c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e091c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091c9 push edx */
  push32((uint32_t)(EDX));
  /* 11e091ca call 0x11e08fa0 */
  push32(0x11e091cfu); f_11e08fa0();
  /* 11e091cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e091d2 jmp 0x11e0914b */
  goto L_11e0914b;
L_11e091d7:;
  /* 11e091d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091da cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e091de jne 0x11e09223 */
  if (!C.zf) goto L_11e09223;
  /* 11e091e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e091e6 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11e091e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e091ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e091f5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11e091f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e091fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e091fd shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11e09200 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e09202 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09205 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e09208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0920b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0920d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11e09210 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09213 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e09215 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11e09219 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e0921d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11e09221 jmp 0x11e091d7 */
  goto L_11e091d7;
L_11e09223:;
  /* 11e09223 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09226 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e09229 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0922e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e09230 jne 0x11e0924c */
  if (!C.zf) goto L_11e0924c;
  /* 11e09232 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09235 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09236 call 0x11e09050 */
  push32(0x11e0923bu); f_11e09050();
  /* 11e0923b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0923e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11e09242 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e09246 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11e0924a jmp 0x11e09223 */
  goto L_11e09223;
L_11e0924c:;
  /* 11e0924c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0924f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11e09253 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11e09257 mov esp, ebp */
  ESP = (EBP);
  /* 11e09259 pop ebp */
  EBP = (pop32());
  /* 11e0925a ret  */
  ESPCHK(0x11e09120u, _esp0);
  ESP += 4; return;
}

/* FUN_10019260 @ 0x11e09260 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11e09260(void) {
  FTRACE(0x11e09260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e09260 push ebp */
  push32((uint32_t)(EBP));
  /* 11e09261 mov ebp, esp */
  EBP = (ESP);
  /* 11e09263 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09269 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11e0926c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11e0926f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e09275 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11e0927c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11e09283 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11e0928a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e09291 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11e09298 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11e0929f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11e092a6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11e092ad mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11e092b4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11e092bb mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11e092c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e092c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e092c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e092cb mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11e092ce jmp 0x11e092d9 */
  goto L_11e092d9;
L_11e092d0:;
  /* 11e092d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e092d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e092d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e092d9:;
  /* 11e092d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e092dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e092df cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e092e2 je 0x11e09305 */
  if (C.zf) goto L_11e09305;
  /* 11e092e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e092e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e092ea cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e092ed je 0x11e09305 */
  if (C.zf) goto L_11e09305;
  /* 11e092ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e092f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e092f5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e092f8 je 0x11e09305 */
  if (C.zf) goto L_11e09305;
  /* 11e092fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e092fd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e09300 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09303 jne 0x11e09307 */
  if (!C.zf) goto L_11e09307;
L_11e09305:;
  /* 11e09305 jmp 0x11e092d0 */
  goto L_11e092d0;
L_11e09307:;
  /* 11e09307 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0930b je 0x11e09a68 */
  if (C.zf) goto L_11e09a68;
  /* 11e09311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09314 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e09316 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11e09319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0931c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0931f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e09322 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11e09325 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11e09328 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0932c ja 0x11e09a63 */
  if ((!C.cf&&!C.zf)) goto L_11e09a63;
  /* 11e09332 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11e09335 jmp dword ptr [ecx*4 + 0x11e09c7a] */
  switch (ECX) {
    case 0: goto L_11e0933c;
    case 1: goto L_11e093da;
    case 2: goto L_11e09490;
    case 3: goto L_11e094fb;
    case 4: goto L_11e09613;
    case 5: goto L_11e09745;
    case 6: goto L_11e097bb;
    case 7: goto L_11e098a0;
    case 8: goto L_11e09842;
    case 9: goto L_11e098f3;
    case 10: goto L_11e09a63;
    case 11: goto L_11e099ff;
    case 12: goto L_11e09469;
    case 13: goto L_11e09457;
    case 14: goto L_11e09460;
    case 15: goto L_11e0947b;
    default: x86_unimpl("switch@0x11e09335 out of table"); return;
  }
L_11e0933c:;
  /* 11e0933c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09340 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09343 jl 0x11e09360 */
  if ((C.sf!=C.of)) goto L_11e09360;
  /* 11e09345 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09349 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0934c jg 0x11e09360 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e09360;
  /* 11e0934e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11e09355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09358 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0935b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0935e jmp 0x11e093d5 */
  goto L_11e093d5;
L_11e09360:;
  /* 11e09360 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09364 movsx eax, byte ptr [0x11e2e004] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e2e004))));
  /* 11e0936b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0936d jne 0x11e09378 */
  if (!C.zf) goto L_11e09378;
  /* 11e0936f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11e09376 jmp 0x11e093d5 */
  goto L_11e093d5;
L_11e09378:;
  /* 11e09378 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11e0937b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11e09381 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e09388 je 0x11e093a7 */
  if (C.zf) goto L_11e093a7;
  /* 11e0938a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e09391 je 0x11e093b6 */
  if (C.zf) goto L_11e093b6;
  /* 11e09393 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0939a je 0x11e0939e */
  if (C.zf) goto L_11e0939e;
  /* 11e0939c jmp 0x11e093c5 */
  goto L_11e093c5;
L_11e0939e:;
  /* 11e0939e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11e093a5 jmp 0x11e093d5 */
  goto L_11e093d5;
L_11e093a7:;
  /* 11e093a7 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11e093ae mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e093b4 jmp 0x11e093d5 */
  goto L_11e093d5;
L_11e093b6:;
  /* 11e093b6 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11e093bd mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11e093c3 jmp 0x11e093d5 */
  goto L_11e093d5;
L_11e093c5:;
  /* 11e093c5 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e093cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e093cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e093d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e093d5:;
  /* 11e093d5 jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e093da:;
  /* 11e093da mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11e093e1 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e093e5 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e093e8 jl 0x11e09408 */
  if ((C.sf!=C.of)) goto L_11e09408;
  /* 11e093ea movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e093ee cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e093f1 jg 0x11e09408 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e09408;
  /* 11e093f3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11e093fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e093fd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09400 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e09403 jmp 0x11e0948b */
  goto L_11e0948b;
L_11e09408:;
  /* 11e09408 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e0940c movsx ecx, byte ptr [0x11e2e004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e2e004))));
  /* 11e09413 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09415 jne 0x11e09420 */
  if (!C.zf) goto L_11e09420;
  /* 11e09417 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11e0941e jmp 0x11e0948b */
  goto L_11e0948b;
L_11e09420:;
  /* 11e09420 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09424 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11e0942a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11e09430 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09433 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11e09439 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09440 ja 0x11e0947b */
  if ((!C.cf&&!C.zf)) goto L_11e0947b;
  /* 11e09442 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11e09448 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0944a mov cl, byte ptr [edx + 0x11e09cba] */
  CL = (r8((uint32_t)(EDX + 0x11e09cba)));
  /* 11e09450 jmp dword ptr [ecx*4 + 0x11e09caa] */
  switch (ECX) {
    case 0: goto L_11e09469;
    case 1: goto L_11e09457;
    case 2: goto L_11e09460;
    case 3: goto L_11e0947b;
    default: x86_unimpl("switch@0x11e09450 out of table"); return;
  }
L_11e09457:;
  /* 11e09457 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11e0945e jmp 0x11e0948b */
  goto L_11e0948b;
L_11e09460:;
  /* 11e09460 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11e09467 jmp 0x11e0948b */
  goto L_11e0948b;
L_11e09469:;
  /* 11e09469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0946c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0946f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e09472 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11e09479 jmp 0x11e0948b */
  goto L_11e0948b;
L_11e0947b:;
  /* 11e0947b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09485 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09488 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0948b:;
  /* 11e0948b jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e09490:;
  /* 11e09490 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09494 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09497 jl 0x11e094b4 */
  if ((C.sf!=C.of)) goto L_11e094b4;
  /* 11e09499 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e0949d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e094a0 jg 0x11e094b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e094b4;
  /* 11e094a2 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11e094a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e094ac sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e094af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e094b2 jmp 0x11e094f6 */
  goto L_11e094f6;
L_11e094b4:;
  /* 11e094b4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e094b8 movsx eax, byte ptr [0x11e2e004] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e2e004))));
  /* 11e094bf cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e094c1 jne 0x11e094cc */
  if (!C.zf) goto L_11e094cc;
  /* 11e094c3 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11e094ca jmp 0x11e094f6 */
  goto L_11e094f6;
L_11e094cc:;
  /* 11e094cc mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11e094cf mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11e094d5 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e094dc je 0x11e094e0 */
  if (C.zf) goto L_11e094e0;
  /* 11e094de jmp 0x11e094e9 */
  goto L_11e094e9;
L_11e094e0:;
  /* 11e094e0 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11e094e7 jmp 0x11e094f6 */
  goto L_11e094f6;
L_11e094e9:;
  /* 11e094e9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e094f0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e094f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e094f6:;
  /* 11e094f6 jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e094fb:;
  /* 11e094fb mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11e09502 jmp 0x11e09515 */
  goto L_11e09515;
L_11e09504:;
  /* 11e09504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09507 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e09509 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11e0950c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0950f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09512 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e09515:;
  /* 11e09515 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0951c jle 0x11e09539 */
  if ((C.zf||C.sf!=C.of)) goto L_11e09539;
  /* 11e0951e push 4 */
  push32((uint32_t)(0x4u));
  /* 11e09520 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e09523 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09528 push eax */
  push32((uint32_t)(EAX));
  /* 11e09529 call 0x11e02520 */
  push32(0x11e0952eu); f_11e02520();
  /* 11e0952e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09531 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11e09537 jmp 0x11e09557 */
  goto L_11e09557;
L_11e09539:;
  /* 11e09539 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0953c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e09542 mov edx, dword ptr [0x11e2e00c] */
  EDX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e09548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0954a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e0954e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e09551 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11e09557:;
  /* 11e09557 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0955e je 0x11e09594 */
  if (C.zf) goto L_11e09594;
  /* 11e09560 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09564 jae 0x11e09586 */
  if (!C.cf) goto L_11e09586;
  /* 11e09566 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09569 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0956c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11e0956f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09573 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09576 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09579 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0957b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e0957e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09581 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11e09584 jmp 0x11e0958f */
  goto L_11e0958f;
L_11e09586:;
  /* 11e09586 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e09589 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0958c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11e0958f:;
  /* 11e0958f jmp 0x11e09504 */
  goto L_11e09504;
L_11e09594:;
  /* 11e09594 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09598 movsx ecx, byte ptr [0x11e2e004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e2e004))));
  /* 11e0959f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e095a1 jne 0x11e095ac */
  if (!C.zf) goto L_11e095ac;
  /* 11e095a3 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11e095aa jmp 0x11e0960e */
  goto L_11e0960e;
L_11e095ac:;
  /* 11e095ac movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e095b0 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11e095b6 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e095bc sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e095bf mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11e095c5 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e095cc ja 0x11e095fe */
  if ((!C.cf&&!C.zf)) goto L_11e095fe;
  /* 11e095ce mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e095d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e095d6 mov cl, byte ptr [edx + 0x11e09d01] */
  CL = (r8((uint32_t)(EDX + 0x11e09d01)));
  /* 11e095dc jmp dword ptr [ecx*4 + 0x11e09cf5] */
  switch (ECX) {
    case 0: goto L_11e095ec;
    case 1: goto L_11e095e3;
    case 2: goto L_11e095fe;
    default: x86_unimpl("switch@0x11e095dc out of table"); return;
  }
L_11e095e3:;
  /* 11e095e3 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11e095ea jmp 0x11e0960e */
  goto L_11e0960e;
L_11e095ec:;
  /* 11e095ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e095ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e095f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e095f5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11e095fc jmp 0x11e0960e */
  goto L_11e0960e;
L_11e095fe:;
  /* 11e095fe mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09608 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0960b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0960e:;
  /* 11e0960e jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e09613:;
  /* 11e09613 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11e0961a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11e09621 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09625 jne 0x11e0964e */
  if (!C.zf) goto L_11e0964e;
  /* 11e09627 jmp 0x11e0963a */
  goto L_11e0963a;
L_11e09629:;
  /* 11e09629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0962c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0962e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11e09631 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09634 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09637 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0963a:;
  /* 11e0963a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e0963e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09641 jne 0x11e0964e */
  if (!C.zf) goto L_11e0964e;
  /* 11e09643 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e09646 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09649 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11e0964c jmp 0x11e09629 */
  goto L_11e09629;
L_11e0964e:;
  /* 11e0964e jmp 0x11e09661 */
  goto L_11e09661;
L_11e09650:;
  /* 11e09650 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09653 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e09655 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11e09658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0965b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0965e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e09661:;
  /* 11e09661 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09668 jle 0x11e09686 */
  if ((C.zf||C.sf!=C.of)) goto L_11e09686;
  /* 11e0966a push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0966c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0966f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e09675 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09676 call 0x11e02520 */
  push32(0x11e0967bu); f_11e02520();
  /* 11e0967b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0967e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11e09684 jmp 0x11e096a3 */
  goto L_11e096a3;
L_11e09686:;
  /* 11e09686 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e09689 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0968f mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e09694 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e09696 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e0969a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0969d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11e096a3:;
  /* 11e096a3 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e096aa je 0x11e096de */
  if (C.zf) goto L_11e096de;
  /* 11e096ac cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e096b0 jae 0x11e096d9 */
  if (!C.cf) goto L_11e096d9;
  /* 11e096b2 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e096b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e096b8 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11e096bb movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e096bf sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e096c2 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e096c5 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e096c7 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e096ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e096cd mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11e096d0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e096d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e096d6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11e096d9:;
  /* 11e096d9 jmp 0x11e09650 */
  goto L_11e09650;
L_11e096de:;
  /* 11e096de movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e096e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11e096e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e096ee sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e096f1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11e096f7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e096fe ja 0x11e09730 */
  if ((!C.cf&&!C.zf)) goto L_11e09730;
  /* 11e09700 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e09706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e09708 mov al, byte ptr [ecx + 0x11e09d48] */
  AL = (r8((uint32_t)(ECX + 0x11e09d48)));
  /* 11e0970e jmp dword ptr [eax*4 + 0x11e09d3c] */
  switch (EAX) {
    case 0: goto L_11e0971e;
    case 1: goto L_11e09715;
    case 2: goto L_11e09730;
    default: x86_unimpl("switch@0x11e0970e out of table"); return;
  }
L_11e09715:;
  /* 11e09715 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11e0971c jmp 0x11e09740 */
  goto L_11e09740;
L_11e0971e:;
  /* 11e0971e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09721 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09724 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e09727 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11e0972e jmp 0x11e09740 */
  goto L_11e09740;
L_11e09730:;
  /* 11e09730 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0973a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0973d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e09740:;
  /* 11e09740 jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e09745:;
  /* 11e09745 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11e0974c cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09753 jle 0x11e09771 */
  if ((C.zf||C.sf!=C.of)) goto L_11e09771;
  /* 11e09755 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e09757 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0975a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e09760 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09761 call 0x11e02520 */
  push32(0x11e09766u); f_11e02520();
  /* 11e09766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09769 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11e0976f jmp 0x11e0978e */
  goto L_11e0978e;
L_11e09771:;
  /* 11e09771 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e09774 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0977a mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0977f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e09781 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e09785 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e09788 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11e0978e:;
  /* 11e0978e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09795 je 0x11e097a9 */
  if (C.zf) goto L_11e097a9;
  /* 11e09797 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11e0979e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e097a1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e097a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e097a7 jmp 0x11e097b6 */
  goto L_11e097b6;
L_11e097a9:;
  /* 11e097a9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e097b0 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e097b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e097b6:;
  /* 11e097b6 jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e097bb:;
  /* 11e097bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e097be sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e097c1 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11e097c4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e097c8 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e097cb jl 0x11e097e8 */
  if ((C.sf!=C.of)) goto L_11e097e8;
  /* 11e097cd movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e097d1 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e097d4 jg 0x11e097e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e097e8;
  /* 11e097d6 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11e097dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e097e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e097e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e097e6 jmp 0x11e0983d */
  goto L_11e0983d;
L_11e097e8:;
  /* 11e097e8 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11e097eb mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11e097f1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e097f8 je 0x11e09827 */
  if (C.zf) goto L_11e09827;
  /* 11e097fa cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e09801 je 0x11e09817 */
  if (C.zf) goto L_11e09817;
  /* 11e09803 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0980a je 0x11e0980e */
  if (C.zf) goto L_11e0980e;
  /* 11e0980c jmp 0x11e09830 */
  goto L_11e09830;
L_11e0980e:;
  /* 11e0980e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11e09815 jmp 0x11e0983d */
  goto L_11e0983d;
L_11e09817:;
  /* 11e09817 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11e0981e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11e09825 jmp 0x11e0983d */
  goto L_11e0983d;
L_11e09827:;
  /* 11e09827 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11e0982e jmp 0x11e0983d */
  goto L_11e0983d;
L_11e09830:;
  /* 11e09830 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09837 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e0983a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0983d:;
  /* 11e0983d jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e09842:;
  /* 11e09842 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11e09849 jmp 0x11e0985c */
  goto L_11e0985c;
L_11e0984b:;
  /* 11e0984b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0984e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e09850 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11e09853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09856 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0985c:;
  /* 11e0985c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09860 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09863 jne 0x11e09867 */
  if (!C.zf) goto L_11e09867;
  /* 11e09865 jmp 0x11e0984b */
  goto L_11e0984b;
L_11e09867:;
  /* 11e09867 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e0986b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0986e jl 0x11e0988b */
  if ((C.sf!=C.of)) goto L_11e0988b;
  /* 11e09870 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09874 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09877 jg 0x11e0988b */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0988b;
  /* 11e09879 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11e09880 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09883 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09886 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e09889 jmp 0x11e0989b */
  goto L_11e0989b;
L_11e0988b:;
  /* 11e0988b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09895 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09898 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0989b:;
  /* 11e0989b jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e098a0:;
  /* 11e098a0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e098a4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e098a7 jl 0x11e098c4 */
  if ((C.sf!=C.of)) goto L_11e098c4;
  /* 11e098a9 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e098ad cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e098b0 jg 0x11e098c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e098c4;
  /* 11e098b2 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11e098b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e098bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e098bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e098c2 jmp 0x11e098ee */
  goto L_11e098ee;
L_11e098c4:;
  /* 11e098c4 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11e098c7 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11e098cd cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e098d4 je 0x11e098d8 */
  if (C.zf) goto L_11e098d8;
  /* 11e098d6 jmp 0x11e098e1 */
  goto L_11e098e1;
L_11e098d8:;
  /* 11e098d8 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11e098df jmp 0x11e098ee */
  goto L_11e098ee;
L_11e098e1:;
  /* 11e098e1 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e098e8 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e098eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e098ee:;
  /* 11e098ee jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e098f3:;
  /* 11e098f3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11e098fa mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11e09901 jmp 0x11e09914 */
  goto L_11e09914;
L_11e09903:;
  /* 11e09903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09906 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e09908 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11e0990b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0990e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09911 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e09914:;
  /* 11e09914 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0991b jle 0x11e09939 */
  if ((C.zf||C.sf!=C.of)) goto L_11e09939;
  /* 11e0991d push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0991f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e09922 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09928 push edx */
  push32((uint32_t)(EDX));
  /* 11e09929 call 0x11e02520 */
  push32(0x11e0992eu); f_11e02520();
  /* 11e0992e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09931 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11e09937 jmp 0x11e09956 */
  goto L_11e09956;
L_11e09939:;
  /* 11e09939 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0993c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09941 mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e09947 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e09949 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0994d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e09950 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11e09956:;
  /* 11e09956 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0995d je 0x11e09987 */
  if (C.zf) goto L_11e09987;
  /* 11e0995f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e09962 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e09965 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11e09969 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11e0996d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11e09970 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09977 jle 0x11e09982 */
  if ((C.zf||C.sf!=C.of)) goto L_11e09982;
  /* 11e09979 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11e09980 jmp 0x11e09987 */
  goto L_11e09987;
L_11e09982:;
  /* 11e09982 jmp 0x11e09903 */
  goto L_11e09903;
L_11e09987:;
  /* 11e09987 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0998a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0998d jmp 0x11e099a0 */
  goto L_11e099a0;
L_11e0998f:;
  /* 11e0998f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09992 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e09994 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11e09997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0999a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0999d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e099a0:;
  /* 11e099a0 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e099a7 jle 0x11e099c5 */
  if ((C.zf||C.sf!=C.of)) goto L_11e099c5;
  /* 11e099a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e099ab mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e099ae and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e099b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e099b5 call 0x11e02520 */
  push32(0x11e099bau); f_11e02520();
  /* 11e099ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e099bd mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11e099c3 jmp 0x11e099e2 */
  goto L_11e099e2;
L_11e099c5:;
  /* 11e099c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e099c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e099ce mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e099d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e099d5 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e099d9 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e099dc mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11e099e2:;
  /* 11e099e2 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e099e9 je 0x11e099ed */
  if (C.zf) goto L_11e099ed;
  /* 11e099eb jmp 0x11e0998f */
  goto L_11e0998f;
L_11e099ed:;
  /* 11e099ed mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e099f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e099f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e099fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e099fd jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e099ff:;
  /* 11e099ff cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09a03 je 0x11e09a53 */
  if (C.zf) goto L_11e09a53;
  /* 11e09a05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09a08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09a0b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11e09a0e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11e09a11 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11e09a17 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e09a1e je 0x11e09a3b */
  if (C.zf) goto L_11e09a3b;
  /* 11e09a20 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e09a27 je 0x11e09a2b */
  if (C.zf) goto L_11e09a2b;
  /* 11e09a29 jmp 0x11e09a44 */
  goto L_11e09a44;
L_11e09a2b:;
  /* 11e09a2b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11e09a32 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11e09a39 jmp 0x11e09a51 */
  goto L_11e09a51;
L_11e09a3b:;
  /* 11e09a3b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11e09a42 jmp 0x11e09a51 */
  goto L_11e09a51;
L_11e09a44:;
  /* 11e09a44 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09a4b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e09a4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e09a51:;
  /* 11e09a51 jmp 0x11e09a63 */
  goto L_11e09a63;
L_11e09a53:;
  /* 11e09a53 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11e09a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09a5d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09a60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e09a63:;
  /* 11e09a63 jmp 0x11e09307 */
  goto L_11e09307;
L_11e09a68:;
  /* 11e09a68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e09a6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e09a6e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e09a70 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09a74 je 0x11e09bb7 */
  if (C.zf) goto L_11e09bb7;
  /* 11e09a7a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09a7e jne 0x11e09bb7 */
  if (!C.zf) goto L_11e09bb7;
  /* 11e09a84 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09a88 jne 0x11e09bb7 */
  if (!C.zf) goto L_11e09bb7;
  /* 11e09a8e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09a92 jbe 0x11e09abf */
  if ((C.cf||C.zf)) goto L_11e09abf;
  /* 11e09a94 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11e09a98 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09a9b jl 0x11e09aa6 */
  if ((C.sf!=C.of)) goto L_11e09aa6;
  /* 11e09a9d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11e09aa0 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e09aa3 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11e09aa6:;
  /* 11e09aa6 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11e09aad mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09ab0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09ab3 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11e09ab6 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e09ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09abc mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11e09abf:;
  /* 11e09abf cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09ac3 jbe 0x11e09b9a */
  if ((C.cf||C.zf)) goto L_11e09b9a;
  /* 11e09ac9 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09acc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09acf mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11e09ad2 jmp 0x11e09add */
  goto L_11e09add;
L_11e09ad4:;
  /* 11e09ad4 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09ad7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09ada mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11e09add:;
  /* 11e09add mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09ae0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e09ae3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e09ae5 jne 0x11e09afb */
  if (!C.zf) goto L_11e09afb;
  /* 11e09ae7 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09aea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09aed mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11e09af0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e09af3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09af6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11e09af9 jmp 0x11e09ad4 */
  goto L_11e09ad4;
L_11e09afb:;
  /* 11e09afb lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11e09afe push ecx */
  push32((uint32_t)(ECX));
  /* 11e09aff mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09b02 push edx */
  push32((uint32_t)(EDX));
  /* 11e09b03 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11e09b06 push eax */
  push32((uint32_t)(EAX));
  /* 11e09b07 call 0x11e09120 */
  push32(0x11e09b0cu); f_11e09120();
  /* 11e09b0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09b0f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09b13 jge 0x11e09b1d */
  if ((C.sf==C.of)) goto L_11e09b1d;
  /* 11e09b15 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09b18 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e09b1a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e09b1d:;
  /* 11e09b1d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09b20 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09b23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e09b26 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09b2a jne 0x11e09b35 */
  if (!C.zf) goto L_11e09b35;
  /* 11e09b2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09b2f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09b32 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11e09b35:;
  /* 11e09b35 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09b39 jne 0x11e09b44 */
  if (!C.zf) goto L_11e09b44;
  /* 11e09b3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09b3e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09b41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e09b44:;
  /* 11e09b44 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09b4b jle 0x11e09b56 */
  if ((C.zf||C.sf!=C.of)) goto L_11e09b56;
  /* 11e09b4d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11e09b54 jmp 0x11e09b98 */
  goto L_11e09b98;
L_11e09b56:;
  /* 11e09b56 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09b5d jge 0x11e09b68 */
  if ((C.sf==C.of)) goto L_11e09b68;
  /* 11e09b5f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11e09b66 jmp 0x11e09b98 */
  goto L_11e09b98;
L_11e09b68:;
  /* 11e09b68 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e09b6b push edx */
  push32((uint32_t)(EDX));
  /* 11e09b6c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09b6f push eax */
  push32((uint32_t)(EAX));
  /* 11e09b70 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11e09b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09b74 call 0x11e0d670 */
  push32(0x11e09b79u); f_11e0d670();
  /* 11e09b79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09b7c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11e09b80 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11e09b84 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11e09b87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e09b8a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11e09b8d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e09b90 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11e09b94 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11e09b98:;
  /* 11e09b98 jmp 0x11e09bb7 */
  goto L_11e09bb7;
L_11e09b9a:;
  /* 11e09b9a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11e09ba0 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11e09ba6 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e09ba9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09bae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e09bb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e09bb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e09bb7:;
  /* 11e09bb7 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09bbb jne 0x11e09be6 */
  if (!C.zf) goto L_11e09be6;
  /* 11e09bbd mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11e09bc3 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11e09bc9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e09bcc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09bd2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e09bd5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e09bd8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e09bdb mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e09bde or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e09be1 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11e09be4 jmp 0x11e09c3d */
  goto L_11e09c3d;
L_11e09be6:;
  /* 11e09be6 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09bea je 0x11e09c11 */
  if (C.zf) goto L_11e09c11;
  /* 11e09bec mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11e09bf2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11e09bf9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e09c00 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11e09c06 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e09c09 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e09c0c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11e09c0f jmp 0x11e09c3d */
  goto L_11e09c3d;
L_11e09c11:;
  /* 11e09c11 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09c15 je 0x11e09c3d */
  if (C.zf) goto L_11e09c3d;
  /* 11e09c17 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11e09c1d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11e09c23 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e09c26 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09c2b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e09c2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e09c31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e09c34 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e09c37 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e09c3a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11e09c3d:;
  /* 11e09c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09c40 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11e09c44 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11e09c47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09c4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e09c4d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11e09c50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09c53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e09c56 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11e09c59 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11e09c5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09c61 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e09c64 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e09c6a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e09c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09c6f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11e09c73 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e09c76 mov esp, ebp */
  ESP = (EBP);
  /* 11e09c78 pop ebp */
  EBP = (pop32());
  /* 11e09c79 ret  */
  ESPCHK(0x11e09260u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d90 @ 0x11e09d90 (79 bytes, 33 insns) */
void f_11e09d90(void) {
  FTRACE(0x11e09d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e09d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e09d91 mov ebp, esp */
  EBP = (ESP);
  /* 11e09d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e09d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e09d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e09d9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e09d9f push eax */
  push32((uint32_t)(EAX));
  /* 11e09da0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e09da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09da4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e09da7 push edx */
  push32((uint32_t)(EDX));
  /* 11e09da8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11e09dab push eax */
  push32((uint32_t)(EAX));
  /* 11e09dac call 0x11e09260 */
  push32(0x11e09db1u); f_11e09260();
  /* 11e09db1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09db4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e09db7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09dba push ecx */
  push32((uint32_t)(ECX));
  /* 11e09dbb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e09dbe push edx */
  push32((uint32_t)(EDX));
  /* 11e09dbf call 0x11e02e20 */
  push32(0x11e09dc4u); f_11e02e20();
  /* 11e09dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09dc7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e09dca cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09dce jne 0x11e09dd8 */
  if (!C.zf) goto L_11e09dd8;
  /* 11e09dd0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09dd3 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11e09dd5 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11e09dd8:;
  /* 11e09dd8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e09ddb mov esp, ebp */
  ESP = (EBP);
  /* 11e09ddd pop ebp */
  EBP = (pop32());
  /* 11e09dde ret  */
  ESPCHK(0x11e09d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019de0 @ 0x11e09de0 (1302 bytes, 386 insns) */
void f_11e09de0(void) {
  FTRACE(0x11e09de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e09de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e09de1 mov ebp, esp */
  EBP = (ESP);
  /* 11e09de3 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e09de6 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11e09dec mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11e09df2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11e09df8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11e09dff mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11e09e03 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11e09e07 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11e09e0b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11e09e0f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11e09e13 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11e09e17 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11e09e1b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11e09e1f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11e09e23 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11e09e27 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11e09e2b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11e09e2f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11e09e36 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11e09e3a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11e09e3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e09e41 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e09e44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e09e47 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11e09e4a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09e4d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09e52 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e09e57 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11e09e5b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11e09e5f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11e09e64 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11e09e68 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09e6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09e71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e09e73 je 0x11e09e7e */
  if (C.zf) goto L_11e09e7e;
  /* 11e09e75 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09e78 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11e09e7c jmp 0x11e09e85 */
  goto L_11e09e85;
L_11e09e7e:;
  /* 11e09e7e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09e81 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11e09e85:;
  /* 11e09e85 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09e88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09e8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e09e90 jne 0x11e09ecc */
  if (!C.zf) goto L_11e09ecc;
  /* 11e09e92 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09e96 jne 0x11e09ecc */
  if (!C.zf) goto L_11e09ecc;
  /* 11e09e98 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09e9c jne 0x11e09ecc */
  if (!C.zf) goto L_11e09ecc;
  /* 11e09e9e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09ea1 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11e09ea6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09ea9 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11e09ead mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09eb0 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11e09eb4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09eb7 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11e09ebb mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09ebe mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11e09ec2 mov eax, 1 */
  EAX = (0x1u);
  /* 11e09ec7 jmp 0x11e0a2f2 */
  goto L_11e0a2f2;
L_11e09ecc:;
  /* 11e09ecc mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09ecf and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09ed5 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09edb jne 0x11e09fc6 */
  if (!C.zf) goto L_11e09fc6;
  /* 11e09ee1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09ee4 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11e09ee9 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09ef0 jne 0x11e09ef8 */
  if (!C.zf) goto L_11e09ef8;
  /* 11e09ef2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09ef6 je 0x11e09f2c */
  if (C.zf) goto L_11e09f2c;
L_11e09ef8:;
  /* 11e09ef8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e09efb and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e09f01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e09f03 jne 0x11e09f2c */
  if (!C.zf) goto L_11e09f2c;
  /* 11e09f05 push 0x11e2b458 */
  push32((uint32_t)(0x11e2b458u));
  /* 11e09f0a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09f0d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09f10 push edx */
  push32((uint32_t)(EDX));
  /* 11e09f11 call 0x11e01590 */
  push32(0x11e09f16u); f_11e01590();
  /* 11e09f16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09f19 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09f1c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11e09f20 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11e09f27 jmp 0x11e09fc1 */
  goto L_11e09fc1;
L_11e09f2c:;
  /* 11e09f2c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11e09f2f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e09f35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e09f37 je 0x11e09f6c */
  if (C.zf) goto L_11e09f6c;
  /* 11e09f39 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09f40 jne 0x11e09f6c */
  if (!C.zf) goto L_11e09f6c;
  /* 11e09f42 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09f46 jne 0x11e09f6c */
  if (!C.zf) goto L_11e09f6c;
  /* 11e09f48 push 0x11e2b450 */
  push32((uint32_t)(0x11e2b450u));
  /* 11e09f4d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09f50 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09f53 push edx */
  push32((uint32_t)(EDX));
  /* 11e09f54 call 0x11e01590 */
  push32(0x11e09f59u); f_11e01590();
  /* 11e09f59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09f5c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09f5f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11e09f63 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11e09f6a jmp 0x11e09fc1 */
  goto L_11e09fc1;
L_11e09f6c:;
  /* 11e09f6c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09f73 jne 0x11e09f9f */
  if (!C.zf) goto L_11e09f9f;
  /* 11e09f75 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e09f79 jne 0x11e09f9f */
  if (!C.zf) goto L_11e09f9f;
  /* 11e09f7b push 0x11e2b448 */
  push32((uint32_t)(0x11e2b448u));
  /* 11e09f80 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09f83 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09f86 push ecx */
  push32((uint32_t)(ECX));
  /* 11e09f87 call 0x11e01590 */
  push32(0x11e09f8cu); f_11e01590();
  /* 11e09f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09f8f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09f92 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11e09f96 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11e09f9d jmp 0x11e09fc1 */
  goto L_11e09fc1;
L_11e09f9f:;
  /* 11e09f9f push 0x11e2b440 */
  push32((uint32_t)(0x11e2b440u));
  /* 11e09fa4 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09fa7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09faa push eax */
  push32((uint32_t)(EAX));
  /* 11e09fab call 0x11e01590 */
  push32(0x11e09fb0u); f_11e01590();
  /* 11e09fb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e09fb3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e09fb6 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11e09fba mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11e09fc1:;
  /* 11e09fc1 jmp 0x11e0a2ef */
  goto L_11e0a2ef;
L_11e09fc6:;
  /* 11e09fc6 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09fc9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09fcf sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e09fd2 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11e09fd6 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09fd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09fde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e09fe3 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11e09fe7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e09fea shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11e09fed mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11e09ff1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11e09ff4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e09ffa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11e09ffd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a002 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a005 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0a008 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a00e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11e0a011 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a016 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a019 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a01b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11e0a01e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a024 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e0a027 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a02c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a02f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a031 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a034 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0a037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a03a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11e0a03d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11e0a041 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11e0a045 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11e0a049 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0a04c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11e0a04f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11e0a052 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11e0a055 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11e0a05b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0a05d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11e0a061 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0a063 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a064 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11e0a067 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a068 call 0x11e0d670 */
  push32(0x11e0a06du); f_11e0d670();
  /* 11e0a06d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a070 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11e0a073 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a079 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a07f jl 0x11e0a09d */
  if ((C.sf!=C.of)) goto L_11e0a09d;
  /* 11e0a081 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11e0a085 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0a089 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11e0a08d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11e0a090 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a091 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11e0a094 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a095 call 0x11e0d230 */
  push32(0x11e0a09au); f_11e0d230();
  /* 11e0a09a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0a09d:;
  /* 11e0a09d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a0a0 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11e0a0a4 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11e0a0a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0a0aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a0ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0a0af je 0x11e0a0f1 */
  if (C.zf) goto L_11e0a0f1;
  /* 11e0a0b1 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11e0a0b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0a0b8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a0ba mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11e0a0bd cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a0c1 jg 0x11e0a0f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0a0f1;
  /* 11e0a0c3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a0c6 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11e0a0cb mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a0ce mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11e0a0d2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a0d5 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11e0a0d9 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a0dc mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11e0a0e0 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a0e3 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11e0a0e7 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0a0ec jmp 0x11e0a2f2 */
  goto L_11e0a2f2;
L_11e0a0f1:;
  /* 11e0a0f1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a0f5 jle 0x11e0a0fe */
  if ((C.zf||C.sf!=C.of)) goto L_11e0a0fe;
  /* 11e0a0f7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11e0a0fe:;
  /* 11e0a0fe mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11e0a101 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a106 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a10b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e0a10e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11e0a114 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11e0a11b jmp 0x11e0a126 */
  goto L_11e0a126;
L_11e0a11d:;
  /* 11e0a11d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e0a120 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a123 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11e0a126:;
  /* 11e0a126 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a12a jge 0x11e0a13a */
  if ((C.sf==C.of)) goto L_11e0a13a;
  /* 11e0a12c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11e0a12f push edx */
  push32((uint32_t)(EDX));
  /* 11e0a130 call 0x11e09050 */
  push32(0x11e0a135u); f_11e09050();
  /* 11e0a135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a138 jmp 0x11e0a11d */
  goto L_11e0a11d;
L_11e0a13a:;
  /* 11e0a13a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a13e jge 0x11e0a16c */
  if ((C.sf==C.of)) goto L_11e0a16c;
  /* 11e0a140 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0a143 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0a145 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a14a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11e0a14d jmp 0x11e0a158 */
  goto L_11e0a158;
L_11e0a14f:;
  /* 11e0a14f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11e0a152 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a155 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11e0a158:;
  /* 11e0a158 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a15c jle 0x11e0a16c */
  if ((C.zf||C.sf!=C.of)) goto L_11e0a16c;
  /* 11e0a15e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11e0a161 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a162 call 0x11e090b0 */
  push32(0x11e0a167u); f_11e090b0();
  /* 11e0a167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a16a jmp 0x11e0a14f */
  goto L_11e0a14f;
L_11e0a16c:;
  /* 11e0a16c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a16f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a172 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0a175 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0a178 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a17b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e0a17e jmp 0x11e0a189 */
  goto L_11e0a189;
L_11e0a180:;
  /* 11e0a180 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0a183 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a186 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0a189:;
  /* 11e0a189 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a18d jle 0x11e0a1f5 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0a1f5;
  /* 11e0a18f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0a192 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e0a195 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e0a198 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e0a19b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0a19e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0a1a1 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11e0a1a4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a1a5 call 0x11e09050 */
  push32(0x11e0a1aau); f_11e09050();
  /* 11e0a1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a1ad lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11e0a1b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a1b1 call 0x11e09050 */
  push32(0x11e0a1b6u); f_11e09050();
  /* 11e0a1b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a1b9 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11e0a1bc push edx */
  push32((uint32_t)(EDX));
  /* 11e0a1bd lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11e0a1c0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a1c1 call 0x11e08fa0 */
  push32(0x11e0a1c6u); f_11e08fa0();
  /* 11e0a1c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a1c9 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11e0a1cc push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a1cd call 0x11e09050 */
  push32(0x11e0a1d2u); f_11e09050();
  /* 11e0a1d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a1d5 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11e0a1d8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a1de add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a1e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a1e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0a1e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a1e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a1ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0a1ef mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11e0a1f3 jmp 0x11e0a180 */
  goto L_11e0a180;
L_11e0a1f5:;
  /* 11e0a1f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a1f8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a1fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0a1fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a201 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0a203 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11e0a206 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a209 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a20c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0a20f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11e0a213 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a216 jl 0x11e0a273 */
  if ((C.sf!=C.of)) goto L_11e0a273;
  /* 11e0a218 jmp 0x11e0a223 */
  goto L_11e0a223;
L_11e0a21a:;
  /* 11e0a21a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a21d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a220 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0a223:;
  /* 11e0a223 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a226 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a229 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a22c jb 0x11e0a241 */
  if (C.cf) goto L_11e0a241;
  /* 11e0a22e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0a234 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a237 jne 0x11e0a241 */
  if (!C.zf) goto L_11e0a241;
  /* 11e0a239 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a23c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11e0a23f jmp 0x11e0a21a */
  goto L_11e0a21a;
L_11e0a241:;
  /* 11e0a241 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a244 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a247 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a24a jae 0x11e0a265 */
  if (!C.cf) goto L_11e0a265;
  /* 11e0a24c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a24f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a252 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0a255 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a258 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e0a25b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0a25f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a262 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11e0a265:;
  /* 11e0a265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a268 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0a26a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0a26c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a26f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0a271 jmp 0x11e0a2cc */
  goto L_11e0a2cc;
L_11e0a273:;
  /* 11e0a273 jmp 0x11e0a27e */
  goto L_11e0a27e;
L_11e0a275:;
  /* 11e0a275 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a278 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a27b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0a27e:;
  /* 11e0a27e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a281 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a284 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a287 jb 0x11e0a296 */
  if (C.cf) goto L_11e0a296;
  /* 11e0a289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a28c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0a28f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a292 jne 0x11e0a296 */
  if (!C.zf) goto L_11e0a296;
  /* 11e0a294 jmp 0x11e0a275 */
  goto L_11e0a275;
L_11e0a296:;
  /* 11e0a296 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a299 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a29c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a29f jae 0x11e0a2cc */
  if (!C.cf) goto L_11e0a2cc;
  /* 11e0a2a1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2a4 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11e0a2a9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2ac mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11e0a2b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2b3 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11e0a2b7 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2ba mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11e0a2be mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2c1 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11e0a2c5 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0a2ca jmp 0x11e0a2f2 */
  goto L_11e0a2f2;
L_11e0a2cc:;
  /* 11e0a2cc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2cf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a2d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a2d5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a2d7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a2da mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2dd mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11e0a2e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2e3 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11e0a2e7 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0a2ea mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11e0a2ef:;
  /* 11e0a2ef mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11e0a2f2:;
  /* 11e0a2f2 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a2f4 pop ebp */
  EBP = (pop32());
  /* 11e0a2f5 ret  */
  ESPCHK(0x11e09de0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a300 @ 0x11e0a300 (482 bytes, 138 insns) */
void f_11e0a300(void) {
  FTRACE(0x11e0a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a300 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a301 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a303 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a306 push esi */
  push32((uint32_t)(ESI));
  /* 11e0a307 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11e0a30e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11e0a310 call 0x11dfbd50 */
  push32(0x11e0a315u); f_11dfbd50();
  /* 11e0a315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a318 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0a31f jmp 0x11e0a32a */
  goto L_11e0a32a;
L_11e0a321:;
  /* 11e0a321 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a324 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a327 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e0a32a:;
  /* 11e0a32a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a32e jge 0x11e0a4d0 */
  if ((C.sf==C.of)) goto L_11e0a4d0;
  /* 11e0a334 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a337 cmp dword ptr [ecx*4 + 0x11e31fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11e31fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a33f je 0x11e0a436 */
  if (C.zf) goto L_11e0a436;
  /* 11e0a345 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a348 mov eax, dword ptr [edx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e0a34f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0a352 jmp 0x11e0a35d */
  goto L_11e0a35d;
L_11e0a354:;
  /* 11e0a354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a357 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a35a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0a35d:;
  /* 11e0a35d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a360 mov eax, dword ptr [edx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e0a367 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a36c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a36f jae 0x11e0a426 */
  if (!C.cf) goto L_11e0a426;
  /* 11e0a375 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a378 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e0a37c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a37f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0a381 jne 0x11e0a421 */
  if (!C.zf) goto L_11e0a421;
  /* 11e0a387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a38a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a38e jne 0x11e0a3c9 */
  if (!C.zf) goto L_11e0a3c9;
  /* 11e0a390 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e0a392 call 0x11dfbd50 */
  push32(0x11e0a397u); f_11dfbd50();
  /* 11e0a397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a39a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a39d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a3a1 jne 0x11e0a3bf */
  if (!C.zf) goto L_11e0a3bf;
  /* 11e0a3a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a3a9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a3aa call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11e0a3b0u);
  /* 11e0a3b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0a3b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a3b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11e0a3bf:;
  /* 11e0a3bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e0a3c1 call 0x11dfbdf0 */
  push32(0x11e0a3c6u); f_11dfbdf0();
  /* 11e0a3c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0a3c9:;
  /* 11e0a3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a3cf push eax */
  push32((uint32_t)(EAX));
  /* 11e0a3d0 call dword ptr [0x11e333f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f4))), 0x11e0a3d6u);
  /* 11e0a3d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11e0a3dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a3e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0a3e2 je 0x11e0a3f6 */
  if (C.zf) goto L_11e0a3f6;
  /* 11e0a3e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a3ea push eax */
  push32((uint32_t)(EAX));
  /* 11e0a3eb call dword ptr [0x11e333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f8))), 0x11e0a3f1u);
  /* 11e0a3f1 jmp 0x11e0a354 */
  goto L_11e0a354;
L_11e0a3f6:;
  /* 11e0a3f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a3f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e0a3ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a402 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0a405 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a40b sub eax, dword ptr [edx*4 + 0x11e31fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11e31fe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a412 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0a413 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11e0a418 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0a41a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a41c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0a41f jmp 0x11e0a426 */
  goto L_11e0a426;
L_11e0a421:;
  /* 11e0a421 jmp 0x11e0a354 */
  goto L_11e0a354;
L_11e0a426:;
  /* 11e0a426 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a42a je 0x11e0a431 */
  if (C.zf) goto L_11e0a431;
  /* 11e0a42c jmp 0x11e0a4d0 */
  goto L_11e0a4d0;
L_11e0a431:;
  /* 11e0a431 jmp 0x11e0a4cb */
  goto L_11e0a4cb;
L_11e0a436:;
  /* 11e0a436 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11e0a438 push 0x11e2b460 */
  push32((uint32_t)(0x11e2b460u));
  /* 11e0a43d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0a43f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11e0a444 call 0x11dfbe50 */
  push32(0x11e0a449u); f_11dfbe50();
  /* 11e0a449 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a44c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0a44f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a453 je 0x11e0a4c9 */
  if (C.zf) goto L_11e0a4c9;
  /* 11e0a455 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a45b mov dword ptr [eax*4 + 0x11e31fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x11e31fe0), (ECX));
  /* 11e0a462 mov edx, dword ptr [0x11e3211c] */
  EDX = (r32((uint32_t)(0x11e3211c)));
  /* 11e0a468 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a46b mov dword ptr [0x11e3211c], edx */
  w32((uint32_t)(0x11e3211c), (EDX));
  /* 11e0a471 jmp 0x11e0a47c */
  goto L_11e0a47c;
L_11e0a473:;
  /* 11e0a473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a476 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0a47c:;
  /* 11e0a47c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a47f mov edx, dword ptr [ecx*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e0a486 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a48c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a48f jae 0x11e0a4b4 */
  if (!C.cf) goto L_11e0a4b4;
  /* 11e0a491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a494 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e0a498 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a49b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e0a4a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a4a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11e0a4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a4ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11e0a4b2 jmp 0x11e0a473 */
  goto L_11e0a473;
L_11e0a4b4:;
  /* 11e0a4b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0a4b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0a4ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0a4bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a4c0 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a4c1 call 0x11e0a810 */
  push32(0x11e0a4c6u); f_11e0a810();
  /* 11e0a4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0a4c9:;
  /* 11e0a4c9 jmp 0x11e0a4d0 */
  goto L_11e0a4d0;
L_11e0a4cb:;
  /* 11e0a4cb jmp 0x11e0a321 */
  goto L_11e0a321;
L_11e0a4d0:;
  /* 11e0a4d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11e0a4d2 call 0x11dfbdf0 */
  push32(0x11e0a4d7u); f_11dfbdf0();
  /* 11e0a4d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a4da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a4dd pop esi */
  ESI = (pop32());
  /* 11e0a4de mov esp, ebp */
  ESP = (EBP);
  /* 11e0a4e0 pop ebp */
  EBP = (pop32());
  /* 11e0a4e1 ret  */
  ESPCHK(0x11e0a300u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11e0a4f0 (183 bytes, 57 insns) */
void f_11e0a4f0(void) {
  FTRACE(0x11e0a4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a4f7 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a4fd jae 0x11e0a58a */
  if (!C.cf) goto L_11e0a58a;
  /* 11e0a503 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a506 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0a509 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a50c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a50f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a512 mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e0a519 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a51d jne 0x11e0a58a */
  if (!C.zf) goto L_11e0a58a;
  /* 11e0a51f cmp dword ptr [0x11e3060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e3060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a526 jne 0x11e0a56a */
  if (!C.zf) goto L_11e0a56a;
  /* 11e0a528 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a52b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0a52e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a532 je 0x11e0a542 */
  if (C.zf) goto L_11e0a542;
  /* 11e0a534 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a538 je 0x11e0a550 */
  if (C.zf) goto L_11e0a550;
  /* 11e0a53a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a53e je 0x11e0a55e */
  if (C.zf) goto L_11e0a55e;
  /* 11e0a540 jmp 0x11e0a56a */
  goto L_11e0a56a;
L_11e0a542:;
  /* 11e0a542 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a545 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a546 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11e0a548 call dword ptr [0x11e3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3332c))), 0x11e0a54eu);
  /* 11e0a54e jmp 0x11e0a56a */
  goto L_11e0a56a;
L_11e0a550:;
  /* 11e0a550 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a553 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a554 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11e0a556 call dword ptr [0x11e3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3332c))), 0x11e0a55cu);
  /* 11e0a55c jmp 0x11e0a56a */
  goto L_11e0a56a;
L_11e0a55e:;
  /* 11e0a55e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a561 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a562 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e0a564 call dword ptr [0x11e3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3332c))), 0x11e0a56au);
L_11e0a56a:;
  /* 11e0a56a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a56d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e0a570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a573 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a576 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a579 mov ecx, dword ptr [edx*4 + 0x11e31fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e0a580 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a583 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11e0a586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a588 jmp 0x11e0a5a3 */
  goto L_11e0a5a3;
L_11e0a58a:;
  /* 11e0a58a call 0x11e07270 */
  push32(0x11e0a58fu); f_11e07270();
  /* 11e0a58f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e0a595 call 0x11e07280 */
  push32(0x11e0a59au); f_11e07280();
  /* 11e0a59a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0a5a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e0a5a3:;
  /* 11e0a5a3 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a5a5 pop ebp */
  EBP = (pop32());
  /* 11e0a5a6 ret  */
  ESPCHK(0x11e0a4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5b0 @ 0x11e0a5b0 (216 bytes, 63 insns) */
void f_11e0a5b0(void) {
  FTRACE(0x11e0a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a5b7 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a5bd jae 0x11e0a66b */
  if (!C.cf) goto L_11e0a66b;
  /* 11e0a5c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a5c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0a5c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a5cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a5cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a5d2 mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e0a5d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e0a5de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a5e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0a5e3 je 0x11e0a66b */
  if (C.zf) goto L_11e0a66b;
  /* 11e0a5e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a5ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e0a5ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a5f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a5f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a5f8 mov ecx, dword ptr [edx*4 + 0x11e31fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e0a5ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a603 je 0x11e0a66b */
  if (C.zf) goto L_11e0a66b;
  /* 11e0a605 cmp dword ptr [0x11e3060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e3060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a60c jne 0x11e0a64a */
  if (!C.zf) goto L_11e0a64a;
  /* 11e0a60e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a611 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0a614 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a618 je 0x11e0a628 */
  if (C.zf) goto L_11e0a628;
  /* 11e0a61a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a61e je 0x11e0a634 */
  if (C.zf) goto L_11e0a634;
  /* 11e0a620 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a624 je 0x11e0a640 */
  if (C.zf) goto L_11e0a640;
  /* 11e0a626 jmp 0x11e0a64a */
  goto L_11e0a64a;
L_11e0a628:;
  /* 11e0a628 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0a62a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11e0a62c call dword ptr [0x11e3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3332c))), 0x11e0a632u);
  /* 11e0a632 jmp 0x11e0a64a */
  goto L_11e0a64a;
L_11e0a634:;
  /* 11e0a634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0a636 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11e0a638 call dword ptr [0x11e3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3332c))), 0x11e0a63eu);
  /* 11e0a63e jmp 0x11e0a64a */
  goto L_11e0a64a;
L_11e0a640:;
  /* 11e0a640 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0a642 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11e0a644 call dword ptr [0x11e3332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3332c))), 0x11e0a64au);
L_11e0a64a:;
  /* 11e0a64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a64d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0a650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a653 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a656 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a659 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0a660 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11e0a667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a669 jmp 0x11e0a684 */
  goto L_11e0a684;
L_11e0a66b:;
  /* 11e0a66b call 0x11e07270 */
  push32(0x11e0a670u); f_11e07270();
  /* 11e0a670 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e0a676 call 0x11e07280 */
  push32(0x11e0a67bu); f_11e07280();
  /* 11e0a67b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0a681 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e0a684:;
  /* 11e0a684 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a686 pop ebp */
  EBP = (pop32());
  /* 11e0a687 ret  */
  ESPCHK(0x11e0a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a690 @ 0x11e0a690 (102 bytes, 30 insns) */
void f_11e0a690(void) {
  FTRACE(0x11e0a690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a690 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a691 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a696 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a69c jae 0x11e0a6db */
  if (!C.cf) goto L_11e0a6db;
  /* 11e0a69e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a6a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0a6a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a6a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a6aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a6ad mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e0a6b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e0a6b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a6bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0a6be je 0x11e0a6db */
  if (C.zf) goto L_11e0a6db;
  /* 11e0a6c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a6c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11e0a6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a6c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a6cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a6cf mov ecx, dword ptr [edx*4 + 0x11e31fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11e0a6d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11e0a6d9 jmp 0x11e0a6f4 */
  goto L_11e0a6f4;
L_11e0a6db:;
  /* 11e0a6db call 0x11e07270 */
  push32(0x11e0a6e0u); f_11e07270();
  /* 11e0a6e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e0a6e6 call 0x11e07280 */
  push32(0x11e0a6ebu); f_11e07280();
  /* 11e0a6eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0a6f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e0a6f4:;
  /* 11e0a6f4 pop ebp */
  EBP = (pop32());
  /* 11e0a6f5 ret  */
  ESPCHK(0x11e0a690u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a700 @ 0x11e0a700 (260 bytes, 83 insns) */
void f_11e0a700(void) {
  FTRACE(0x11e0a700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a700 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a701 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a706 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0a70a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a70d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0a712 je 0x11e0a71d */
  if (C.zf) goto L_11e0a71d;
  /* 11e0a714 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a717 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e0a71a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11e0a71d:;
  /* 11e0a71d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a720 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0a726 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0a728 je 0x11e0a732 */
  if (C.zf) goto L_11e0a732;
  /* 11e0a72a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a72d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11e0a72f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11e0a732:;
  /* 11e0a732 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0a735 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a73b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0a73d je 0x11e0a748 */
  if (C.zf) goto L_11e0a748;
  /* 11e0a73f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a742 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11e0a745 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11e0a748:;
  /* 11e0a748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a74b push eax */
  push32((uint32_t)(EAX));
  /* 11e0a74c call dword ptr [0x11e333a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333a0))), 0x11e0a752u);
  /* 11e0a752 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0a755 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a759 jne 0x11e0a772 */
  if (!C.zf) goto L_11e0a772;
  /* 11e0a75b call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e0a761u);
  /* 11e0a761 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a762 call 0x11e071d0 */
  push32(0x11e0a767u); f_11e071d0();
  /* 11e0a767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a76a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a76d jmp 0x11e0a800 */
  goto L_11e0a800;
L_11e0a772:;
  /* 11e0a772 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a776 jne 0x11e0a783 */
  if (!C.zf) goto L_11e0a783;
  /* 11e0a778 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a77b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11e0a77e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11e0a781 jmp 0x11e0a792 */
  goto L_11e0a792;
L_11e0a783:;
  /* 11e0a783 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a787 jne 0x11e0a792 */
  if (!C.zf) goto L_11e0a792;
  /* 11e0a789 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a78c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11e0a78f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11e0a792:;
  /* 11e0a792 call 0x11e0a300 */
  push32(0x11e0a797u); f_11e0a300();
  /* 11e0a797 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0a79a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a79e jne 0x11e0a7bb */
  if (!C.zf) goto L_11e0a7bb;
  /* 11e0a7a0 call 0x11e07270 */
  push32(0x11e0a7a5u); f_11e07270();
  /* 11e0a7a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11e0a7ab call 0x11e07280 */
  push32(0x11e0a7b0u); f_11e07280();
  /* 11e0a7b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0a7b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0a7b9 jmp 0x11e0a800 */
  goto L_11e0a800;
L_11e0a7bb:;
  /* 11e0a7bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a7be push eax */
  push32((uint32_t)(EAX));
  /* 11e0a7bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a7c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a7c3 call 0x11e0a4f0 */
  push32(0x11e0a7c8u); f_11e0a4f0();
  /* 11e0a7c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a7cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a7ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11e0a7d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11e0a7d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a7d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0a7da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a7dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a7e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a7e3 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0a7ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0a7ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11e0a7f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a7f5 call 0x11e0a8a0 */
  push32(0x11e0a7fau); f_11e0a8a0();
  /* 11e0a7fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a7fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e0a800:;
  /* 11e0a800 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a802 pop ebp */
  EBP = (pop32());
  /* 11e0a803 ret  */
  ESPCHK(0x11e0a700u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a810 @ 0x11e0a810 (134 bytes, 44 insns) */
void f_11e0a810(void) {
  FTRACE(0x11e0a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a810 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a811 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a813 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a817 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0a81a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a81d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a820 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a823 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0a82a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a82c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0a82f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a836 jne 0x11e0a871 */
  if (!C.zf) goto L_11e0a871;
  /* 11e0a838 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e0a83a call 0x11dfbd50 */
  push32(0x11e0a83fu); f_11dfbd50();
  /* 11e0a83f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a845 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a849 jne 0x11e0a867 */
  if (!C.zf) goto L_11e0a867;
  /* 11e0a84b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a84e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a851 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a852 call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11e0a858u);
  /* 11e0a858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a85b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0a85e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a861 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a864 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11e0a867:;
  /* 11e0a867 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11e0a869 call 0x11dfbdf0 */
  push32(0x11e0a86eu); f_11dfbdf0();
  /* 11e0a86e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0a871:;
  /* 11e0a871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a874 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0a877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a87a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a87d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a880 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0a887 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11e0a88b push eax */
  push32((uint32_t)(EAX));
  /* 11e0a88c call dword ptr [0x11e333f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f4))), 0x11e0a892u);
  /* 11e0a892 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a894 pop ebp */
  EBP = (pop32());
  /* 11e0a895 ret  */
  ESPCHK(0x11e0a810u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11e0a8a0 (38 bytes, 13 insns) */
void f_11e0a8a0(void) {
  FTRACE(0x11e0a8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a8a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0a8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a8ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a8af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0a8b2 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0a8b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11e0a8bd push eax */
  push32((uint32_t)(EAX));
  /* 11e0a8be call dword ptr [0x11e333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f8))), 0x11e0a8c4u);
  /* 11e0a8c4 pop ebp */
  EBP = (pop32());
  /* 11e0a8c5 ret  */
  ESPCHK(0x11e0a8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a8d0 @ 0x11e0a8d0 (218 bytes, 63 insns) */
void f_11e0a8d0(void) {
  FTRACE(0x11e0a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a8d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0a8d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0a8dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0a8df call 0x11dfbd50 */
  push32(0x11e0a8e4u); f_11dfbd50();
  /* 11e0a8e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a8e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11e0a8ee jmp 0x11e0a8f9 */
  goto L_11e0a8f9;
L_11e0a8f0:;
  /* 11e0a8f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a8f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a8f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e0a8f9:;
  /* 11e0a8f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a8fc cmp ecx, dword ptr [0x11e31fa0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a902 jge 0x11e0a999 */
  if ((C.sf==C.of)) goto L_11e0a999;
  /* 11e0a908 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a90b mov eax, dword ptr [0x11e30c48] */
  EAX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0a910 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a914 je 0x11e0a994 */
  if (C.zf) goto L_11e0a994;
  /* 11e0a916 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a919 mov edx, dword ptr [0x11e30c48] */
  EDX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0a91f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e0a922 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e0a925 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0a92b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0a92d je 0x11e0a951 */
  if (C.zf) goto L_11e0a951;
  /* 11e0a92f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a932 mov eax, dword ptr [0x11e30c48] */
  EAX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0a937 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e0a93a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a93b call 0x11e0d740 */
  push32(0x11e0a940u); f_11e0d740();
  /* 11e0a940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a943 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a946 je 0x11e0a951 */
  if (C.zf) goto L_11e0a951;
  /* 11e0a948 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a94b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a94e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0a951:;
  /* 11e0a951 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a955 jl 0x11e0a994 */
  if ((C.sf!=C.of)) goto L_11e0a994;
  /* 11e0a957 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a95a mov ecx, dword ptr [0x11e30c48] */
  ECX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0a960 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0a963 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a966 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a967 call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11e0a96du);
  /* 11e0a96d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0a96f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a972 mov ecx, dword ptr [0x11e30c48] */
  ECX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0a978 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0a97b push edx */
  push32((uint32_t)(EDX));
  /* 11e0a97c call 0x11dfc8e0 */
  push32(0x11e0a981u); f_11dfc8e0();
  /* 11e0a981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a984 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0a987 mov ecx, dword ptr [0x11e30c48] */
  ECX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0a98d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11e0a994:;
  /* 11e0a994 jmp 0x11e0a8f0 */
  goto L_11e0a8f0;
L_11e0a999:;
  /* 11e0a999 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0a99b call 0x11dfbdf0 */
  push32(0x11e0a9a0u); f_11dfbdf0();
  /* 11e0a9a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a9a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0a9a6 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a9a8 pop ebp */
  EBP = (pop32());
  /* 11e0a9a9 ret  */
  ESPCHK(0x11e0a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a9b0 @ 0x11e0a9b0 (68 bytes, 26 insns) */
void f_11e0a9b0(void) {
  FTRACE(0x11e0a9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0a9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0a9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0a9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a9b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0a9b8 jne 0x11e0a9c6 */
  if (!C.zf) goto L_11e0a9c6;
  /* 11e0a9ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0a9bc call 0x11e0ab20 */
  push32(0x11e0a9c1u); f_11e0ab20();
  /* 11e0a9c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a9c4 jmp 0x11e0a9f0 */
  goto L_11e0a9f0;
L_11e0a9c6:;
  /* 11e0a9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a9c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0a9ca call 0x11e06390 */
  push32(0x11e0a9cfu); f_11e06390();
  /* 11e0a9cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a9d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a9d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0a9d6 call 0x11e0aa00 */
  push32(0x11e0a9dbu); f_11e0aa00();
  /* 11e0a9db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a9de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0a9e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0a9e4 push edx */
  push32((uint32_t)(EDX));
  /* 11e0a9e5 call 0x11e06400 */
  push32(0x11e0a9eau); f_11e06400();
  /* 11e0a9ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0a9ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e0a9f0:;
  /* 11e0a9f0 mov esp, ebp */
  ESP = (EBP);
  /* 11e0a9f2 pop ebp */
  EBP = (pop32());
  /* 11e0a9f3 ret  */
  ESPCHK(0x11e0a9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa00 @ 0x11e0aa00 (65 bytes, 26 insns) */
void f_11e0aa00(void) {
  FTRACE(0x11e0aa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0aa00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0aa01 mov ebp, esp */
  EBP = (ESP);
  /* 11e0aa03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0aa06 push eax */
  push32((uint32_t)(EAX));
  /* 11e0aa07 call 0x11e0aa50 */
  push32(0x11e0aa0cu); f_11e0aa50();
  /* 11e0aa0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0aa0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0aa11 je 0x11e0aa18 */
  if (C.zf) goto L_11e0aa18;
  /* 11e0aa13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0aa16 jmp 0x11e0aa3f */
  goto L_11e0aa3f;
L_11e0aa18:;
  /* 11e0aa18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0aa1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0aa1e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0aa24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0aa26 je 0x11e0aa3d */
  if (C.zf) goto L_11e0aa3d;
  /* 11e0aa28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0aa2b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0aa2e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0aa2f call 0x11e0d890 */
  push32(0x11e0aa34u); f_11e0d890();
  /* 11e0aa34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0aa37 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0aa39 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0aa3b jmp 0x11e0aa3f */
  goto L_11e0aa3f;
L_11e0aa3d:;
  /* 11e0aa3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0aa3f:;
  /* 11e0aa3f pop ebp */
  EBP = (pop32());
  /* 11e0aa40 ret  */
  ESPCHK(0x11e0aa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa50 @ 0x11e0aa50 (183 bytes, 62 insns) */
void f_11e0aa50(void) {
  FTRACE(0x11e0aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0aa51 mov ebp, esp */
  EBP = (ESP);
  /* 11e0aa53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0aa56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0aa5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0aa60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0aa63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aa66 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0aa69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0aa6c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0aa6f jne 0x11e0aaeb */
  if (!C.zf) goto L_11e0aaeb;
  /* 11e0aa71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aa74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e0aa77 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0aa7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0aa7f je 0x11e0aaeb */
  if (C.zf) goto L_11e0aaeb;
  /* 11e0aa81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aa84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aa87 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11e0aa89 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0aa8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0aa8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0aa93 jle 0x11e0aaeb */
  if ((C.zf||C.sf!=C.of)) goto L_11e0aaeb;
  /* 11e0aa95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0aa98 push edx */
  push32((uint32_t)(EDX));
  /* 11e0aa99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aa9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0aa9f push ecx */
  push32((uint32_t)(ECX));
  /* 11e0aaa0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aaa3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11e0aaa6 push eax */
  push32((uint32_t)(EAX));
  /* 11e0aaa7 call 0x11e05e20 */
  push32(0x11e0aaacu); f_11e05e20();
  /* 11e0aaac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0aaaf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0aab2 jne 0x11e0aad5 */
  if (!C.zf) goto L_11e0aad5;
  /* 11e0aab4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aab7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0aaba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0aac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0aac2 je 0x11e0aad3 */
  if (C.zf) goto L_11e0aad3;
  /* 11e0aac4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aac7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e0aaca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0aacd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aad0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11e0aad3:;
  /* 11e0aad3 jmp 0x11e0aaeb */
  goto L_11e0aaeb;
L_11e0aad5:;
  /* 11e0aad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aad8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e0aadb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0aade mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aae1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11e0aae4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e0aaeb:;
  /* 11e0aaeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aaee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aaf1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e0aaf4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0aaf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0aaf9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e0ab00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ab03 mov esp, ebp */
  ESP = (EBP);
  /* 11e0ab05 pop ebp */
  EBP = (pop32());
  /* 11e0ab06 ret  */
  ESPCHK(0x11e0aa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab10 @ 0x11e0ab10 (15 bytes, 7 insns) */
void f_11e0ab10(void) {
  FTRACE(0x11e0ab10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ab10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ab11 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ab13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0ab15 call 0x11e0ab20 */
  push32(0x11e0ab1au); f_11e0ab20();
  /* 11e0ab1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ab1d pop ebp */
  EBP = (pop32());
  /* 11e0ab1e ret  */
  ESPCHK(0x11e0ab10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab20 @ 0x11e0ab20 (319 bytes, 94 insns) */
void f_11e0ab20(void) {
  FTRACE(0x11e0ab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ab20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ab21 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ab23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ab26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0ab2d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0ab34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ab36 call 0x11dfbd50 */
  push32(0x11e0ab3bu); f_11dfbd50();
  /* 11e0ab3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ab3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0ab45 jmp 0x11e0ab50 */
  goto L_11e0ab50;
L_11e0ab47:;
  /* 11e0ab47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ab4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ab4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11e0ab50:;
  /* 11e0ab50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ab53 cmp ecx, dword ptr [0x11e31fa0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e31fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ab59 jge 0x11e0ac43 */
  if ((C.sf==C.of)) goto L_11e0ac43;
  /* 11e0ab5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ab62 mov eax, dword ptr [0x11e30c48] */
  EAX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0ab67 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ab6b je 0x11e0ac3e */
  if (C.zf) goto L_11e0ac3e;
  /* 11e0ab71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ab74 mov edx, dword ptr [0x11e30c48] */
  EDX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0ab7a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e0ab7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e0ab80 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ab86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0ab88 je 0x11e0ac3e */
  if (C.zf) goto L_11e0ac3e;
  /* 11e0ab8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ab91 mov eax, dword ptr [0x11e30c48] */
  EAX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0ab96 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e0ab99 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ab9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ab9d push edx */
  push32((uint32_t)(EDX));
  /* 11e0ab9e call 0x11e063d0 */
  push32(0x11e0aba3u); f_11e063d0();
  /* 11e0aba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0aba6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0aba9 mov ecx, dword ptr [0x11e30c48] */
  ECX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0abaf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0abb2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e0abb5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0abba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0abbc je 0x11e0ac25 */
  if (C.zf) goto L_11e0ac25;
  /* 11e0abbe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0abc2 jne 0x11e0abe9 */
  if (!C.zf) goto L_11e0abe9;
  /* 11e0abc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0abc7 mov edx, dword ptr [0x11e30c48] */
  EDX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0abcd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e0abd0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0abd1 call 0x11e0aa00 */
  push32(0x11e0abd6u); f_11e0aa00();
  /* 11e0abd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0abd9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0abdc je 0x11e0abe7 */
  if (C.zf) goto L_11e0abe7;
  /* 11e0abde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0abe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0abe4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0abe7:;
  /* 11e0abe7 jmp 0x11e0ac25 */
  goto L_11e0ac25;
L_11e0abe9:;
  /* 11e0abe9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0abed jne 0x11e0ac25 */
  if (!C.zf) goto L_11e0ac25;
  /* 11e0abef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0abf2 mov eax, dword ptr [0x11e30c48] */
  EAX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0abf7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e0abfa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0abfd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ac00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0ac02 je 0x11e0ac25 */
  if (C.zf) goto L_11e0ac25;
  /* 11e0ac04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ac07 mov ecx, dword ptr [0x11e30c48] */
  ECX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0ac0d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0ac10 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ac11 call 0x11e0aa00 */
  push32(0x11e0ac16u); f_11e0aa00();
  /* 11e0ac16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ac19 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ac1c jne 0x11e0ac25 */
  if (!C.zf) goto L_11e0ac25;
  /* 11e0ac1e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11e0ac25:;
  /* 11e0ac25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ac28 mov ecx, dword ptr [0x11e30c48] */
  ECX = (r32((uint32_t)(0x11e30c48)));
  /* 11e0ac2e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0ac31 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ac32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ac35 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ac36 call 0x11e06440 */
  push32(0x11e0ac3bu); f_11e06440();
  /* 11e0ac3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0ac3e:;
  /* 11e0ac3e jmp 0x11e0ab47 */
  goto L_11e0ab47;
L_11e0ac43:;
  /* 11e0ac43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ac45 call 0x11dfbdf0 */
  push32(0x11e0ac4au); f_11dfbdf0();
  /* 11e0ac4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ac4d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ac51 jne 0x11e0ac58 */
  if (!C.zf) goto L_11e0ac58;
  /* 11e0ac53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ac56 jmp 0x11e0ac5b */
  goto L_11e0ac5b;
L_11e0ac58:;
  /* 11e0ac58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e0ac5b:;
  /* 11e0ac5b mov esp, ebp */
  ESP = (EBP);
  /* 11e0ac5d pop ebp */
  EBP = (pop32());
  /* 11e0ac5e ret  */
  ESPCHK(0x11e0ab20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ac60 @ 0x11e0ac60 (62 bytes, 21 insns) */
void f_11e0ac60(void) {
  FTRACE(0x11e0ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ac61 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ac63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ac66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ac69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0ac6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ac6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0ac72 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ac75 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ac7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0ac7e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0ac81 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ac86 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ac8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ac8e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e0ac91 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ac93 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11e0ac97 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11e0ac9a mov esp, ebp */
  ESP = (EBP);
  /* 11e0ac9c pop ebp */
  EBP = (pop32());
  /* 11e0ac9d ret  */
  ESPCHK(0x11e0ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aca0 @ 0x11e0aca0 (45 bytes, 15 insns) */
void f_11e0aca0(void) {
  FTRACE(0x11e0aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0aca1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0aca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0aca4 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0aca7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0acac and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0acb1 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e0acb4 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e0acb8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0acbc sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e0acc1 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11e0acc5 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11e0acc9 mov esp, ebp */
  ESP = (EBP);
  /* 11e0accb pop ebp */
  EBP = (pop32());
  /* 11e0accc ret  */
  ESPCHK(0x11e0aca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001acd0 @ 0x11e0acd0 (51 bytes, 18 insns) */
void f_11e0acd0(void) {
  FTRACE(0x11e0acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0acd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0acd1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0acd3 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0acd6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0acdb and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ace0 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e0ace3 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11e0ace6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ace9 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11e0acf0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0acf1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0acf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0acf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0acf8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0acf9 call 0x11e0ac60 */
  push32(0x11e0acfeu); f_11e0ac60();
  /* 11e0acfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ad01 pop ebp */
  EBP = (pop32());
  /* 11e0ad02 ret  */
  ESPCHK(0x11e0acd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad10 @ 0x11e0ad10 (52 bytes, 18 insns) */
void f_11e0ad10(void) {
  FTRACE(0x11e0ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ad11 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ad13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ad16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0ad1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ad1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0ad22 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0ad25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ad2b and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ad31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ad34 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e0ad37 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ad39 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11e0ad3d fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11e0ad40 mov esp, ebp */
  ESP = (EBP);
  /* 11e0ad42 pop ebp */
  EBP = (pop32());
  /* 11e0ad43 ret  */
  ESPCHK(0x11e0ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad50 @ 0x11e0ad50 (124 bytes, 37 insns) */
void f_11e0ad50(void) {
  FTRACE(0x11e0ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ad50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ad51 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ad53 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ad5a jne 0x11e0ad69 */
  if (!C.zf) goto L_11e0ad69;
  /* 11e0ad5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ad60 jne 0x11e0ad69 */
  if (!C.zf) goto L_11e0ad69;
  /* 11e0ad62 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0ad67 jmp 0x11e0adca */
  goto L_11e0adca;
L_11e0ad69:;
  /* 11e0ad69 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ad70 jne 0x11e0ad7f */
  if (!C.zf) goto L_11e0ad7f;
  /* 11e0ad72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ad76 jne 0x11e0ad7f */
  if (!C.zf) goto L_11e0ad7f;
  /* 11e0ad78 mov eax, 2 */
  EAX = (0x2u);
  /* 11e0ad7d jmp 0x11e0adca */
  goto L_11e0adca;
L_11e0ad7f:;
  /* 11e0ad7f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0ad82 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ad87 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ad8c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ad91 jne 0x11e0ad9a */
  if (!C.zf) goto L_11e0ad9a;
  /* 11e0ad93 mov eax, 3 */
  EAX = (0x3u);
  /* 11e0ad98 jmp 0x11e0adca */
  goto L_11e0adca;
L_11e0ad9a:;
  /* 11e0ad9a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0ad9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ada3 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ada9 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0adaf jne 0x11e0adc8 */
  if (!C.zf) goto L_11e0adc8;
  /* 11e0adb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0adb4 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11e0adb7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0adb9 jne 0x11e0adc1 */
  if (!C.zf) goto L_11e0adc1;
  /* 11e0adbb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0adbf je 0x11e0adc8 */
  if (C.zf) goto L_11e0adc8;
L_11e0adc1:;
  /* 11e0adc1 mov eax, 4 */
  EAX = (0x4u);
  /* 11e0adc6 jmp 0x11e0adca */
  goto L_11e0adca;
L_11e0adc8:;
  /* 11e0adc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0adca:;
  /* 11e0adca pop ebp */
  EBP = (pop32());
  /* 11e0adcb ret  */
  ESPCHK(0x11e0ad50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001add0 @ 0x11e0add0 (313 bytes, 95 insns) */
void f_11e0add0(void) {
  FTRACE(0x11e0add0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0add0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0add1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0add3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0add6 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11e0add9 fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e0addf fnstsw ax */
  AX = fpu_status();
  /* 11e0ade1 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11e0ade4 je 0x11e0ae00 */
  if (C.zf) goto L_11e0ae00;
  /* 11e0ade6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0aded mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0adf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0adfb jmp 0x11e0aefa */
  goto L_11e0aefa;
L_11e0ae00:;
  /* 11e0ae00 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0ae03 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ae08 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ae0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ae0f jne 0x11e0aec9 */
  if (!C.zf) goto L_11e0aec9;
  /* 11e0ae15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ae18 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11e0ae1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0ae1d jne 0x11e0ae29 */
  if (!C.zf) goto L_11e0ae29;
  /* 11e0ae1f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ae23 je 0x11e0aec9 */
  if (C.zf) goto L_11e0aec9;
L_11e0ae29:;
  /* 11e0ae29 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11e0ae30 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11e0ae33 fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11e0ae39 fnstsw ax */
  AX = fpu_status();
  /* 11e0ae3b test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11e0ae3e je 0x11e0ae49 */
  if (C.zf) goto L_11e0ae49;
  /* 11e0ae40 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11e0ae47 jmp 0x11e0ae50 */
  goto L_11e0ae50;
L_11e0ae49:;
  /* 11e0ae49 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11e0ae50:;
  /* 11e0ae50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0ae53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0ae56:;
  /* 11e0ae56 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0ae59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ae5e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ae61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ae63 jne 0x11e0ae95 */
  if (!C.zf) goto L_11e0ae95;
  /* 11e0ae65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ae68 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e0ae6a mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e0ae6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ae70 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ae76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0ae78 je 0x11e0ae82 */
  if (C.zf) goto L_11e0ae82;
  /* 11e0ae7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ae7d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e0ae7f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11e0ae82:;
  /* 11e0ae82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ae85 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11e0ae87 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e0ae8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ae8d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ae90 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0ae93 jmp 0x11e0ae56 */
  goto L_11e0ae56;
L_11e0ae95:;
  /* 11e0ae95 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11e0ae99 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11e0ae9d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11e0aea1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0aea5 je 0x11e0aeb2 */
  if (C.zf) goto L_11e0aeb2;
  /* 11e0aea7 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11e0aeab or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e0aeae mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11e0aeb2:;
  /* 11e0aeb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0aeb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0aeb7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0aeb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0aebb push eax */
  push32((uint32_t)(EAX));
  /* 11e0aebc call 0x11e0ac60 */
  push32(0x11e0aec1u); f_11e0ac60();
  /* 11e0aec1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0aec4 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11e0aec7 jmp 0x11e0aefa */
  goto L_11e0aefa;
L_11e0aec9:;
  /* 11e0aec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0aecb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0aece push ecx */
  push32((uint32_t)(ECX));
  /* 11e0aecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0aed2 push edx */
  push32((uint32_t)(EDX));
  /* 11e0aed3 call 0x11e0ac60 */
  push32(0x11e0aed8u); f_11e0ac60();
  /* 11e0aed8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0aedb fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11e0aede mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11e0aee1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0aee6 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0aeeb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11e0aeee movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11e0aef1 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0aef7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0aefa:;
  /* 11e0aefa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0aefd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0af00 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e0af02 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11e0af05 mov esp, ebp */
  ESP = (EBP);
  /* 11e0af07 pop ebp */
  EBP = (pop32());
  /* 11e0af08 ret  */
  ESPCHK(0x11e0add0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11e0af10 (219 bytes, 64 insns) */
void f_11e0af10(void) {
  FTRACE(0x11e0af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0af10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0af11 mov ebp, esp */
  EBP = (ESP);
  /* 11e0af13 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0af14 cmp dword ptr [0x11e30838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0af1b je 0x11e0afb1 */
  if (C.zf) goto L_11e0afb1;
  /* 11e0af21 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11e0af23 push 0x11e2b46c */
  push32((uint32_t)(0x11e2b46cu));
  /* 11e0af28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0af2a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11e0af2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0af31 call 0x11dfc260 */
  push32(0x11e0af36u); f_11dfc260();
  /* 11e0af36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0af39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0af3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0af40 jne 0x11e0af4c */
  if (!C.zf) goto L_11e0af4c;
  /* 11e0af42 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0af47 jmp 0x11e0afe7 */
  goto L_11e0afe7;
L_11e0af4c:;
  /* 11e0af4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0af4f push eax */
  push32((uint32_t)(EAX));
  /* 11e0af50 call 0x11e0aff0 */
  push32(0x11e0af55u); f_11e0aff0();
  /* 11e0af55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0af58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0af5a je 0x11e0af7d */
  if (C.zf) goto L_11e0af7d;
  /* 11e0af5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0af5f push ecx */
  push32((uint32_t)(ECX));
  /* 11e0af60 call 0x11e0b580 */
  push32(0x11e0af65u); f_11e0b580();
  /* 11e0af65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0af68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0af6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0af6d push edx */
  push32((uint32_t)(EDX));
  /* 11e0af6e call 0x11dfc8e0 */
  push32(0x11e0af73u); f_11dfc8e0();
  /* 11e0af73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0af76 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0af7b jmp 0x11e0afe7 */
  goto L_11e0afe7;
L_11e0af7d:;
  /* 11e0af7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0af80 mov dword ptr [0x11e2f1c8], eax */
  w32((uint32_t)(0x11e2f1c8), (EAX));
  /* 11e0af85 mov ecx, dword ptr [0x11e30848] */
  ECX = (r32((uint32_t)(0x11e30848)));
  /* 11e0af8b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0af8c call 0x11e0b580 */
  push32(0x11e0af91u); f_11e0b580();
  /* 11e0af91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0af94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0af96 mov edx, dword ptr [0x11e30848] */
  EDX = (r32((uint32_t)(0x11e30848)));
  /* 11e0af9c push edx */
  push32((uint32_t)(EDX));
  /* 11e0af9d call 0x11dfc8e0 */
  push32(0x11e0afa2u); f_11dfc8e0();
  /* 11e0afa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0afa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0afa8 mov dword ptr [0x11e30848], eax */
  w32((uint32_t)(0x11e30848), (EAX));
  /* 11e0afad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0afaf jmp 0x11e0afe7 */
  goto L_11e0afe7;
L_11e0afb1:;
  /* 11e0afb1 mov dword ptr [0x11e2f1c8], 0x11e2f1d0 */
  w32((uint32_t)(0x11e2f1c8), (0x11e2f1d0u));
  /* 11e0afbb mov ecx, dword ptr [0x11e30848] */
  ECX = (r32((uint32_t)(0x11e30848)));
  /* 11e0afc1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0afc2 call 0x11e0b580 */
  push32(0x11e0afc7u); f_11e0b580();
  /* 11e0afc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0afca push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0afcc mov edx, dword ptr [0x11e30848] */
  EDX = (r32((uint32_t)(0x11e30848)));
  /* 11e0afd2 push edx */
  push32((uint32_t)(EDX));
  /* 11e0afd3 call 0x11dfc8e0 */
  push32(0x11e0afd8u); f_11dfc8e0();
  /* 11e0afd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0afdb mov dword ptr [0x11e30848], 0 */
  w32((uint32_t)(0x11e30848), (0x0u));
  /* 11e0afe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0afe7:;
  /* 11e0afe7 mov esp, ebp */
  ESP = (EBP);
  /* 11e0afe9 pop ebp */
  EBP = (pop32());
  /* 11e0afea ret  */
  ESPCHK(0x11e0af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aff0 @ 0x11e0aff0 (1423 bytes, 533 insns) */
void f_11e0aff0(void) {
  FTRACE(0x11e0aff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0aff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0aff1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0aff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0aff6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0affd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0afff mov ax, word ptr [0x11e30882] */
  AX = (r16((uint32_t)(0x11e30882)));
  /* 11e0b005 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0b008 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b00a mov cx, word ptr [0x11e30884] */
  CX = (r16((uint32_t)(0x11e30884)));
  /* 11e0b011 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0b014 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0b018 jne 0x11e0b022 */
  if (!C.zf) goto L_11e0b022;
  /* 11e0b01a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0b01d jmp 0x11e0b57b */
  goto L_11e0b57b;
L_11e0b022:;
  /* 11e0b022 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b025 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b028 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b029 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11e0b02b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b02e push eax */
  push32((uint32_t)(EAX));
  /* 11e0b02f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b031 call 0x11e0ede0 */
  push32(0x11e0b036u); f_11e0ede0();
  /* 11e0b036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b039 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b03c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b03e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b044 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b047 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b048 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11e0b04a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b04d push eax */
  push32((uint32_t)(EAX));
  /* 11e0b04e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b050 call 0x11e0ede0 */
  push32(0x11e0b055u); f_11e0ede0();
  /* 11e0b055 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b058 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b05b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b05d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b063 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b066 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b067 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11e0b069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b06c push eax */
  push32((uint32_t)(EAX));
  /* 11e0b06d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b06f call 0x11e0ede0 */
  push32(0x11e0b074u); f_11e0ede0();
  /* 11e0b074 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b077 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b07a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b07c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b07f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b082 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b085 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b086 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11e0b088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b08b push eax */
  push32((uint32_t)(EAX));
  /* 11e0b08c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b08e call 0x11e0ede0 */
  push32(0x11e0b093u); f_11e0ede0();
  /* 11e0b093 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b096 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b099 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b09b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b09e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b0a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b0a4 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b0a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11e0b0a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b0aa push eax */
  push32((uint32_t)(EAX));
  /* 11e0b0ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b0ad call 0x11e0ede0 */
  push32(0x11e0b0b2u); f_11e0ede0();
  /* 11e0b0b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b0b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b0b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b0ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b0bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b0c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b0c3 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b0c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11e0b0c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b0c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b0ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b0cc call 0x11e0ede0 */
  push32(0x11e0b0d1u); f_11e0ede0();
  /* 11e0b0d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b0d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b0d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b0d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b0dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b0df push edx */
  push32((uint32_t)(EDX));
  /* 11e0b0e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11e0b0e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b0e5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b0e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b0e8 call 0x11e0ede0 */
  push32(0x11e0b0edu); f_11e0ede0();
  /* 11e0b0ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b0f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b0f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b0f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b0f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b0fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b0fe push edx */
  push32((uint32_t)(EDX));
  /* 11e0b0ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11e0b101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b104 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b105 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b107 call 0x11e0ede0 */
  push32(0x11e0b10cu); f_11e0ede0();
  /* 11e0b10c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b10f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b112 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b114 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b117 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b11a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b11d push edx */
  push32((uint32_t)(EDX));
  /* 11e0b11e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11e0b120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b123 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b124 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b126 call 0x11e0ede0 */
  push32(0x11e0b12bu); f_11e0ede0();
  /* 11e0b12b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b12e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b131 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b133 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b136 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b139 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b13c push edx */
  push32((uint32_t)(EDX));
  /* 11e0b13d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11e0b13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b142 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b143 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b145 call 0x11e0ede0 */
  push32(0x11e0b14au); f_11e0ede0();
  /* 11e0b14a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b14d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b150 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b152 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b158 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b15b push edx */
  push32((uint32_t)(EDX));
  /* 11e0b15c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11e0b15e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b161 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b162 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b164 call 0x11e0ede0 */
  push32(0x11e0b169u); f_11e0ede0();
  /* 11e0b169 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b16c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b16f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b171 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b177 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b17a push edx */
  push32((uint32_t)(EDX));
  /* 11e0b17b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11e0b17d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b180 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b181 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b183 call 0x11e0ede0 */
  push32(0x11e0b188u); f_11e0ede0();
  /* 11e0b188 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b18b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b18e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b190 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b196 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b199 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b19a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11e0b19c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b19f push eax */
  push32((uint32_t)(EAX));
  /* 11e0b1a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b1a2 call 0x11e0ede0 */
  push32(0x11e0b1a7u); f_11e0ede0();
  /* 11e0b1a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b1aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b1ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b1af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b1b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b1b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b1b8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b1b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e0b1bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b1be push eax */
  push32((uint32_t)(EAX));
  /* 11e0b1bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b1c1 call 0x11e0ede0 */
  push32(0x11e0b1c6u); f_11e0ede0();
  /* 11e0b1c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b1c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b1cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b1ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b1d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b1d7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b1d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11e0b1da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b1dd push eax */
  push32((uint32_t)(EAX));
  /* 11e0b1de push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b1e0 call 0x11e0ede0 */
  push32(0x11e0b1e5u); f_11e0ede0();
  /* 11e0b1e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b1e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b1eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b1ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b1f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b1f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b1f6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b1f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11e0b1f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b1fc push eax */
  push32((uint32_t)(EAX));
  /* 11e0b1fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b1ff call 0x11e0ede0 */
  push32(0x11e0b204u); f_11e0ede0();
  /* 11e0b204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b20a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b20c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b20f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b212 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b215 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b216 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11e0b218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b21b push eax */
  push32((uint32_t)(EAX));
  /* 11e0b21c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b21e call 0x11e0ede0 */
  push32(0x11e0b223u); f_11e0ede0();
  /* 11e0b223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b229 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b22b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b231 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b234 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b235 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11e0b237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b23a push eax */
  push32((uint32_t)(EAX));
  /* 11e0b23b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b23d call 0x11e0ede0 */
  push32(0x11e0b242u); f_11e0ede0();
  /* 11e0b242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b245 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b248 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b24a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b250 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b253 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b254 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11e0b256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b259 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b25a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b25c call 0x11e0ede0 */
  push32(0x11e0b261u); f_11e0ede0();
  /* 11e0b261 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b264 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b267 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b269 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b26c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b26f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b272 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b273 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11e0b275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b278 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b279 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b27b call 0x11e0ede0 */
  push32(0x11e0b280u); f_11e0ede0();
  /* 11e0b280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b283 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b286 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b288 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b28b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b28e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b291 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b292 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11e0b294 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b297 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b298 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b29a call 0x11e0ede0 */
  push32(0x11e0b29fu); f_11e0ede0();
  /* 11e0b29f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b2a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b2a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b2aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b2ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2b0 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b2b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11e0b2b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b2b6 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b2b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b2b9 call 0x11e0ede0 */
  push32(0x11e0b2beu); f_11e0ede0();
  /* 11e0b2be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b2c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b2c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b2cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2cf push edx */
  push32((uint32_t)(EDX));
  /* 11e0b2d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11e0b2d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b2d5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b2d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b2d8 call 0x11e0ede0 */
  push32(0x11e0b2ddu); f_11e0ede0();
  /* 11e0b2dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b2e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b2e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b2e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b2eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2ee push edx */
  push32((uint32_t)(EDX));
  /* 11e0b2ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11e0b2f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b2f4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b2f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b2f7 call 0x11e0ede0 */
  push32(0x11e0b2fcu); f_11e0ede0();
  /* 11e0b2fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b2ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b302 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b304 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b307 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b30a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b30d push edx */
  push32((uint32_t)(EDX));
  /* 11e0b30e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11e0b310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b313 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b314 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b316 call 0x11e0ede0 */
  push32(0x11e0b31bu); f_11e0ede0();
  /* 11e0b31b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b31e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b321 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b323 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b326 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b329 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b32c push edx */
  push32((uint32_t)(EDX));
  /* 11e0b32d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11e0b32f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b332 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b333 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b335 call 0x11e0ede0 */
  push32(0x11e0b33au); f_11e0ede0();
  /* 11e0b33a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b33d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b340 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b342 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b348 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b34b push edx */
  push32((uint32_t)(EDX));
  /* 11e0b34c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11e0b34e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b351 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b352 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b354 call 0x11e0ede0 */
  push32(0x11e0b359u); f_11e0ede0();
  /* 11e0b359 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b35c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b35f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b361 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b367 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b36a push edx */
  push32((uint32_t)(EDX));
  /* 11e0b36b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11e0b36d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b370 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b371 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b373 call 0x11e0ede0 */
  push32(0x11e0b378u); f_11e0ede0();
  /* 11e0b378 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b37b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b37e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b380 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b386 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b389 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b38a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11e0b38c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b38f push eax */
  push32((uint32_t)(EAX));
  /* 11e0b390 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b392 call 0x11e0ede0 */
  push32(0x11e0b397u); f_11e0ede0();
  /* 11e0b397 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b39a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b39d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b39f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b3a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b3a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b3a8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b3a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11e0b3ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b3ae push eax */
  push32((uint32_t)(EAX));
  /* 11e0b3af push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b3b1 call 0x11e0ede0 */
  push32(0x11e0b3b6u); f_11e0ede0();
  /* 11e0b3b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b3b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b3bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b3be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b3c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b3c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b3c7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b3c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11e0b3ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b3cd push eax */
  push32((uint32_t)(EAX));
  /* 11e0b3ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b3d0 call 0x11e0ede0 */
  push32(0x11e0b3d5u); f_11e0ede0();
  /* 11e0b3d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b3d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b3db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b3dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b3e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b3e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b3e6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b3e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e0b3e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b3ec push eax */
  push32((uint32_t)(EAX));
  /* 11e0b3ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b3ef call 0x11e0ede0 */
  push32(0x11e0b3f4u); f_11e0ede0();
  /* 11e0b3f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b3f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b3fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b3fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b3ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b402 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b408 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b409 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11e0b40b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b40e push eax */
  push32((uint32_t)(EAX));
  /* 11e0b40f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b411 call 0x11e0ede0 */
  push32(0x11e0b416u); f_11e0ede0();
  /* 11e0b416 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b419 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b41c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b41e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b424 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b42a push edx */
  push32((uint32_t)(EDX));
  /* 11e0b42b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e0b42d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b430 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b431 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b433 call 0x11e0ede0 */
  push32(0x11e0b438u); f_11e0ede0();
  /* 11e0b438 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b43b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b43e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b440 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b443 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b446 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b44c push edx */
  push32((uint32_t)(EDX));
  /* 11e0b44d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e0b44f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b452 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b453 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b455 call 0x11e0ede0 */
  push32(0x11e0b45au); f_11e0ede0();
  /* 11e0b45a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b45d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b460 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b462 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b468 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b46e push edx */
  push32((uint32_t)(EDX));
  /* 11e0b46f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11e0b471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b474 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b475 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b477 call 0x11e0ede0 */
  push32(0x11e0b47cu); f_11e0ede0();
  /* 11e0b47c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b47f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b482 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b484 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b48a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b490 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b491 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11e0b493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b496 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b497 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b499 call 0x11e0ede0 */
  push32(0x11e0b49eu); f_11e0ede0();
  /* 11e0b49e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b4a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b4a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b4a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b4a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b4ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b4b2 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b4b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11e0b4b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b4b8 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b4b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b4bb call 0x11e0ede0 */
  push32(0x11e0b4c0u); f_11e0ede0();
  /* 11e0b4c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b4c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b4c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b4c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b4cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b4ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b4d4 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b4d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11e0b4d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b4da push eax */
  push32((uint32_t)(EAX));
  /* 11e0b4db push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b4dd call 0x11e0ede0 */
  push32(0x11e0b4e2u); f_11e0ede0();
  /* 11e0b4e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b4e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b4e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b4ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b4ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b4f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b4f6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b4f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11e0b4f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b4fc push eax */
  push32((uint32_t)(EAX));
  /* 11e0b4fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b4ff call 0x11e0ede0 */
  push32(0x11e0b504u); f_11e0ede0();
  /* 11e0b504 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b507 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b50a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b50c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b50f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b512 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b518 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b519 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11e0b51b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0b51e push eax */
  push32((uint32_t)(EAX));
  /* 11e0b51f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b521 call 0x11e0ede0 */
  push32(0x11e0b526u); f_11e0ede0();
  /* 11e0b526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b52c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b52e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b534 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b53a push edx */
  push32((uint32_t)(EDX));
  /* 11e0b53b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11e0b53d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0b540 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b541 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b543 call 0x11e0ede0 */
  push32(0x11e0b548u); f_11e0ede0();
  /* 11e0b548 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b54b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b54e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b550 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b556 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b55c push edx */
  push32((uint32_t)(EDX));
  /* 11e0b55d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11e0b562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0b565 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b566 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b568 call 0x11e0ede0 */
  push32(0x11e0b56du); f_11e0ede0();
  /* 11e0b56d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b570 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0b573 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b575 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0b578 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11e0b57b:;
  /* 11e0b57b mov esp, ebp */
  ESP = (EBP);
  /* 11e0b57d pop ebp */
  EBP = (pop32());
  /* 11e0b57e ret  */
  ESPCHK(0x11e0aff0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11e0b580 (779 bytes, 265 insns) */
void f_11e0b580(void) {
  FTRACE(0x11e0b580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0b580 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0b581 mov ebp, esp */
  EBP = (ESP);
  /* 11e0b583 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0b587 jne 0x11e0b58e */
  if (!C.zf) goto L_11e0b58e;
  /* 11e0b589 jmp 0x11e0b889 */
  goto L_11e0b889;
L_11e0b58e:;
  /* 11e0b58e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b593 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0b596 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b597 call 0x11dfc8e0 */
  push32(0x11e0b59cu); f_11dfc8e0();
  /* 11e0b59c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b59f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b5a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b5a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0b5a7 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b5a8 call 0x11dfc8e0 */
  push32(0x11e0b5adu); f_11dfc8e0();
  /* 11e0b5ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b5b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b5b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b5b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0b5b8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b5b9 call 0x11dfc8e0 */
  push32(0x11e0b5beu); f_11dfc8e0();
  /* 11e0b5be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b5c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b5c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b5c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0b5c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b5ca call 0x11dfc8e0 */
  push32(0x11e0b5cfu); f_11dfc8e0();
  /* 11e0b5cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b5d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b5d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b5d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e0b5da push eax */
  push32((uint32_t)(EAX));
  /* 11e0b5db call 0x11dfc8e0 */
  push32(0x11e0b5e0u); f_11dfc8e0();
  /* 11e0b5e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b5e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b5e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b5e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e0b5eb push edx */
  push32((uint32_t)(EDX));
  /* 11e0b5ec call 0x11dfc8e0 */
  push32(0x11e0b5f1u); f_11dfc8e0();
  /* 11e0b5f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b5f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b5f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b5f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0b5fb push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b5fc call 0x11dfc8e0 */
  push32(0x11e0b601u); f_11dfc8e0();
  /* 11e0b601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b604 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b606 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b609 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11e0b60c push eax */
  push32((uint32_t)(EAX));
  /* 11e0b60d call 0x11dfc8e0 */
  push32(0x11e0b612u); f_11dfc8e0();
  /* 11e0b612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b615 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b61a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11e0b61d push edx */
  push32((uint32_t)(EDX));
  /* 11e0b61e call 0x11dfc8e0 */
  push32(0x11e0b623u); f_11dfc8e0();
  /* 11e0b623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b626 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b62b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11e0b62e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b62f call 0x11dfc8e0 */
  push32(0x11e0b634u); f_11dfc8e0();
  /* 11e0b634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b637 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b639 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b63c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11e0b63f push eax */
  push32((uint32_t)(EAX));
  /* 11e0b640 call 0x11dfc8e0 */
  push32(0x11e0b645u); f_11dfc8e0();
  /* 11e0b645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b648 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b64a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b64d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11e0b650 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b651 call 0x11dfc8e0 */
  push32(0x11e0b656u); f_11dfc8e0();
  /* 11e0b656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b659 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b65b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b65e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11e0b661 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b662 call 0x11dfc8e0 */
  push32(0x11e0b667u); f_11dfc8e0();
  /* 11e0b667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b66a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b66f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0b672 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b673 call 0x11dfc8e0 */
  push32(0x11e0b678u); f_11dfc8e0();
  /* 11e0b678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b67b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b67d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b680 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11e0b683 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b684 call 0x11dfc8e0 */
  push32(0x11e0b689u); f_11dfc8e0();
  /* 11e0b689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b68c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b68e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b691 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11e0b694 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b695 call 0x11dfc8e0 */
  push32(0x11e0b69au); f_11dfc8e0();
  /* 11e0b69a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b69d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b69f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b6a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11e0b6a5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b6a6 call 0x11dfc8e0 */
  push32(0x11e0b6abu); f_11dfc8e0();
  /* 11e0b6ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b6ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b6b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b6b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11e0b6b6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b6b7 call 0x11dfc8e0 */
  push32(0x11e0b6bcu); f_11dfc8e0();
  /* 11e0b6bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b6bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b6c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11e0b6c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b6c8 call 0x11dfc8e0 */
  push32(0x11e0b6cdu); f_11dfc8e0();
  /* 11e0b6cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b6d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b6d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b6d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11e0b6d8 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b6d9 call 0x11dfc8e0 */
  push32(0x11e0b6deu); f_11dfc8e0();
  /* 11e0b6de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b6e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b6e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b6e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11e0b6e9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b6ea call 0x11dfc8e0 */
  push32(0x11e0b6efu); f_11dfc8e0();
  /* 11e0b6ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b6f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11e0b6fa push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b6fb call 0x11dfc8e0 */
  push32(0x11e0b700u); f_11dfc8e0();
  /* 11e0b700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b703 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b708 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11e0b70b push eax */
  push32((uint32_t)(EAX));
  /* 11e0b70c call 0x11dfc8e0 */
  push32(0x11e0b711u); f_11dfc8e0();
  /* 11e0b711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b714 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b716 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b719 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11e0b71c push edx */
  push32((uint32_t)(EDX));
  /* 11e0b71d call 0x11dfc8e0 */
  push32(0x11e0b722u); f_11dfc8e0();
  /* 11e0b722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b72a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11e0b72d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b72e call 0x11dfc8e0 */
  push32(0x11e0b733u); f_11dfc8e0();
  /* 11e0b733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b736 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b73b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11e0b73e push eax */
  push32((uint32_t)(EAX));
  /* 11e0b73f call 0x11dfc8e0 */
  push32(0x11e0b744u); f_11dfc8e0();
  /* 11e0b744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b747 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b749 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b74c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11e0b74f push edx */
  push32((uint32_t)(EDX));
  /* 11e0b750 call 0x11dfc8e0 */
  push32(0x11e0b755u); f_11dfc8e0();
  /* 11e0b755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b758 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b75a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b75d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11e0b760 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b761 call 0x11dfc8e0 */
  push32(0x11e0b766u); f_11dfc8e0();
  /* 11e0b766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b769 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b76b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b76e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11e0b771 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b772 call 0x11dfc8e0 */
  push32(0x11e0b777u); f_11dfc8e0();
  /* 11e0b777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b77a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b77c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b77f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11e0b782 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b783 call 0x11dfc8e0 */
  push32(0x11e0b788u); f_11dfc8e0();
  /* 11e0b788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b78b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b78d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b790 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11e0b793 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b794 call 0x11dfc8e0 */
  push32(0x11e0b799u); f_11dfc8e0();
  /* 11e0b799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b79c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b7a1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11e0b7a4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b7a5 call 0x11dfc8e0 */
  push32(0x11e0b7aau); f_11dfc8e0();
  /* 11e0b7aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b7ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b7af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b7b2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11e0b7b8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b7b9 call 0x11dfc8e0 */
  push32(0x11e0b7beu); f_11dfc8e0();
  /* 11e0b7be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b7c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b7c6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11e0b7cc push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b7cd call 0x11dfc8e0 */
  push32(0x11e0b7d2u); f_11dfc8e0();
  /* 11e0b7d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b7d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b7da mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11e0b7e0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b7e1 call 0x11dfc8e0 */
  push32(0x11e0b7e6u); f_11dfc8e0();
  /* 11e0b7e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b7e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b7eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b7ee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11e0b7f4 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b7f5 call 0x11dfc8e0 */
  push32(0x11e0b7fau); f_11dfc8e0();
  /* 11e0b7fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b7fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b7ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b802 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11e0b808 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b809 call 0x11dfc8e0 */
  push32(0x11e0b80eu); f_11dfc8e0();
  /* 11e0b80e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b811 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b816 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11e0b81c push eax */
  push32((uint32_t)(EAX));
  /* 11e0b81d call 0x11dfc8e0 */
  push32(0x11e0b822u); f_11dfc8e0();
  /* 11e0b822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b825 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b82a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11e0b830 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b831 call 0x11dfc8e0 */
  push32(0x11e0b836u); f_11dfc8e0();
  /* 11e0b836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b839 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b83b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b83e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11e0b844 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b845 call 0x11dfc8e0 */
  push32(0x11e0b84au); f_11dfc8e0();
  /* 11e0b84a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b84d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b852 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11e0b858 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b859 call 0x11dfc8e0 */
  push32(0x11e0b85eu); f_11dfc8e0();
  /* 11e0b85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b861 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b866 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11e0b86c push edx */
  push32((uint32_t)(EDX));
  /* 11e0b86d call 0x11dfc8e0 */
  push32(0x11e0b872u); f_11dfc8e0();
  /* 11e0b872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b875 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b877 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0b87a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11e0b880 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b881 call 0x11dfc8e0 */
  push32(0x11e0b886u); f_11dfc8e0();
  /* 11e0b886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0b889:;
  /* 11e0b889 pop ebp */
  EBP = (pop32());
  /* 11e0b88a ret  */
  ESPCHK(0x11e0b580u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b890 @ 0x11e0b890 (678 bytes, 180 insns) */
void f_11e0b890(void) {
  FTRACE(0x11e0b890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0b890 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0b891 mov ebp, esp */
  EBP = (ESP);
  /* 11e0b893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0b896 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0b89d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0b89f mov ax, word ptr [0x11e3087e] */
  AX = (r16((uint32_t)(0x11e3087e)));
  /* 11e0b8a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0b8a8 cmp dword ptr [0x11e30834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0b8af je 0x11e0ba0a */
  if (C.zf) goto L_11e0ba0a;
  /* 11e0b8b5 push 0x11e3084c */
  push32((uint32_t)(0x11e3084cu));
  /* 11e0b8ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 11e0b8bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b8bf push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b8c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b8c2 call 0x11e0ede0 */
  push32(0x11e0b8c7u); f_11e0ede0();
  /* 11e0b8c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b8ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0b8cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0b8cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0b8d2 push 0x11e30850 */
  push32((uint32_t)(0x11e30850u));
  /* 11e0b8d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11e0b8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b8dc push eax */
  push32((uint32_t)(EAX));
  /* 11e0b8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b8df call 0x11e0ede0 */
  push32(0x11e0b8e4u); f_11e0ede0();
  /* 11e0b8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b8e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0b8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b8ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0b8ef push 0x11e30854 */
  push32((uint32_t)(0x11e30854u));
  /* 11e0b8f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11e0b8f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0b8f9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b8fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0b8fc call 0x11e0ede0 */
  push32(0x11e0b901u); f_11e0ede0();
  /* 11e0b901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0b907 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0b909 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0b90c mov edx, dword ptr [0x11e30854] */
  EDX = (r32((uint32_t)(0x11e30854)));
  /* 11e0b912 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b913 call 0x11e0bb40 */
  push32(0x11e0b918u); f_11e0bb40();
  /* 11e0b918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b91b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0b91f je 0x11e0b979 */
  if (C.zf) goto L_11e0b979;
  /* 11e0b921 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b923 mov eax, dword ptr [0x11e3084c] */
  EAX = (r32((uint32_t)(0x11e3084c)));
  /* 11e0b928 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b929 call 0x11dfc8e0 */
  push32(0x11e0b92eu); f_11dfc8e0();
  /* 11e0b92e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b931 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b933 mov ecx, dword ptr [0x11e30850] */
  ECX = (r32((uint32_t)(0x11e30850)));
  /* 11e0b939 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b93a call 0x11dfc8e0 */
  push32(0x11e0b93fu); f_11dfc8e0();
  /* 11e0b93f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b942 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b944 mov edx, dword ptr [0x11e30854] */
  EDX = (r32((uint32_t)(0x11e30854)));
  /* 11e0b94a push edx */
  push32((uint32_t)(EDX));
  /* 11e0b94b call 0x11dfc8e0 */
  push32(0x11e0b950u); f_11dfc8e0();
  /* 11e0b950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b953 mov dword ptr [0x11e3084c], 0 */
  w32((uint32_t)(0x11e3084c), (0x0u));
  /* 11e0b95d mov dword ptr [0x11e30850], 0 */
  w32((uint32_t)(0x11e30850), (0x0u));
  /* 11e0b967 mov dword ptr [0x11e30854], 0 */
  w32((uint32_t)(0x11e30854), (0x0u));
  /* 11e0b971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0b974 jmp 0x11e0bb32 */
  goto L_11e0bb32;
L_11e0b979:;
  /* 11e0b979 mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b97e cmp dword ptr [eax], 0x11e2f280 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11e2f280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0b984 je 0x11e0b9c0 */
  if (C.zf) goto L_11e0b9c0;
  /* 11e0b986 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b988 mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b98e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0b990 push edx */
  push32((uint32_t)(EDX));
  /* 11e0b991 call 0x11dfc8e0 */
  push32(0x11e0b996u); f_11dfc8e0();
  /* 11e0b996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b999 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b99b mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b9a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0b9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0b9a4 call 0x11dfc8e0 */
  push32(0x11e0b9a9u); f_11dfc8e0();
  /* 11e0b9a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0b9ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0b9ae mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b9b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0b9b7 push eax */
  push32((uint32_t)(EAX));
  /* 11e0b9b8 call 0x11dfc8e0 */
  push32(0x11e0b9bdu); f_11dfc8e0();
  /* 11e0b9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0b9c0:;
  /* 11e0b9c0 mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b9c6 mov edx, dword ptr [0x11e3084c] */
  EDX = (r32((uint32_t)(0x11e3084c)));
  /* 11e0b9cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11e0b9ce mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b9d3 mov ecx, dword ptr [0x11e30850] */
  ECX = (r32((uint32_t)(0x11e30850)));
  /* 11e0b9d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11e0b9dc mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b9e2 mov eax, dword ptr [0x11e30854] */
  EAX = (r32((uint32_t)(0x11e30854)));
  /* 11e0b9e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11e0b9ea mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0b9f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0b9f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0b9f4 mov byte ptr [0x11e2e004], al */
  w8((uint32_t)(0x11e2e004), (AL));
  /* 11e0b9f9 mov dword ptr [0x11e2e008], 1 */
  w32((uint32_t)(0x11e2e008), (0x1u));
  /* 11e0ba03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ba05 jmp 0x11e0bb32 */
  goto L_11e0bb32;
L_11e0ba0a:;
  /* 11e0ba0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ba0c mov ecx, dword ptr [0x11e3084c] */
  ECX = (r32((uint32_t)(0x11e3084c)));
  /* 11e0ba12 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ba13 call 0x11dfc8e0 */
  push32(0x11e0ba18u); f_11dfc8e0();
  /* 11e0ba18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ba1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ba1d mov edx, dword ptr [0x11e30850] */
  EDX = (r32((uint32_t)(0x11e30850)));
  /* 11e0ba23 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ba24 call 0x11dfc8e0 */
  push32(0x11e0ba29u); f_11dfc8e0();
  /* 11e0ba29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ba2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ba2e mov eax, dword ptr [0x11e30854] */
  EAX = (r32((uint32_t)(0x11e30854)));
  /* 11e0ba33 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ba34 call 0x11dfc8e0 */
  push32(0x11e0ba39u); f_11dfc8e0();
  /* 11e0ba39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ba3c mov dword ptr [0x11e3084c], 0 */
  w32((uint32_t)(0x11e3084c), (0x0u));
  /* 11e0ba46 mov dword ptr [0x11e30850], 0 */
  w32((uint32_t)(0x11e30850), (0x0u));
  /* 11e0ba50 mov dword ptr [0x11e30854], 0 */
  w32((uint32_t)(0x11e30854), (0x0u));
  /* 11e0ba5a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11e0ba5f push 0x11e2b478 */
  push32((uint32_t)(0x11e2b478u));
  /* 11e0ba64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ba66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ba68 call 0x11dfbe50 */
  push32(0x11e0ba6du); f_11dfbe50();
  /* 11e0ba6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ba70 mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0ba76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0ba78 mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0ba7e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ba81 jne 0x11e0ba8b */
  if (!C.zf) goto L_11e0ba8b;
  /* 11e0ba83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ba86 jmp 0x11e0bb32 */
  goto L_11e0bb32;
L_11e0ba8b:;
  /* 11e0ba8b push 0x11e2b420 */
  push32((uint32_t)(0x11e2b420u));
  /* 11e0ba90 mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0ba95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ba97 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ba98 call 0x11e01590 */
  push32(0x11e0ba9du); f_11e01590();
  /* 11e0ba9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0baa0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11e0baa5 push 0x11e2b478 */
  push32((uint32_t)(0x11e2b478u));
  /* 11e0baaa push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0baac push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0baae call 0x11dfbe50 */
  push32(0x11e0bab3u); f_11dfbe50();
  /* 11e0bab3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bab6 mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0babc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11e0babf mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bac4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bac8 jne 0x11e0bacf */
  if (!C.zf) goto L_11e0bacf;
  /* 11e0baca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0bacd jmp 0x11e0bb32 */
  goto L_11e0bb32;
L_11e0bacf:;
  /* 11e0bacf mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bad5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0bad8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e0badb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11e0bae0 push 0x11e2b478 */
  push32((uint32_t)(0x11e2b478u));
  /* 11e0bae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bae9 call 0x11dfbe50 */
  push32(0x11e0baeeu); f_11dfbe50();
  /* 11e0baee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0baf1 mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0baf7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11e0bafa mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bb00 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bb04 jne 0x11e0bb0b */
  if (!C.zf) goto L_11e0bb0b;
  /* 11e0bb06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0bb09 jmp 0x11e0bb32 */
  goto L_11e0bb32;
L_11e0bb0b:;
  /* 11e0bb0b mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bb10 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0bb13 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11e0bb16 mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bb1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0bb1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0bb20 mov byte ptr [0x11e2e004], cl */
  w8((uint32_t)(0x11e2e004), (CL));
  /* 11e0bb26 mov dword ptr [0x11e2e008], 1 */
  w32((uint32_t)(0x11e2e008), (0x1u));
  /* 11e0bb30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0bb32:;
  /* 11e0bb32 mov esp, ebp */
  ESP = (EBP);
  /* 11e0bb34 pop ebp */
  EBP = (pop32());
  /* 11e0bb35 ret  */
  ESPCHK(0x11e0b890u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11e0bb40 (125 bytes, 49 insns) */
void f_11e0bb40(void) {
  FTRACE(0x11e0bb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0bb40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0bb41 mov ebp, esp */
  EBP = (ESP);
  /* 11e0bb43 push ecx */
  push32((uint32_t)(ECX));
L_11e0bb44:;
  /* 11e0bb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0bb4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0bb4c je 0x11e0bbb9 */
  if (C.zf) goto L_11e0bbb9;
  /* 11e0bb4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0bb54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bb57 jl 0x11e0bb7d */
  if ((C.sf!=C.of)) goto L_11e0bb7d;
  /* 11e0bb59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0bb5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bb62 jg 0x11e0bb7d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0bb7d;
  /* 11e0bb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0bb6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0bb6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e0bb72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bb78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0bb7b jmp 0x11e0bbb7 */
  goto L_11e0bbb7;
L_11e0bb7d:;
  /* 11e0bb7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0bb83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bb86 jne 0x11e0bbae */
  if (!C.zf) goto L_11e0bbae;
  /* 11e0bb88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bb8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0bb8e:;
  /* 11e0bb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bb91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bb94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e0bb97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0bb99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bb9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bb9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0bba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bba5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0bba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0bbaa jne 0x11e0bb8e */
  if (!C.zf) goto L_11e0bb8e;
  /* 11e0bbac jmp 0x11e0bbb7 */
  goto L_11e0bbb7;
L_11e0bbae:;
  /* 11e0bbae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bbb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bbb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e0bbb7:;
  /* 11e0bbb7 jmp 0x11e0bb44 */
  goto L_11e0bb44;
L_11e0bbb9:;
  /* 11e0bbb9 mov esp, ebp */
  ESP = (EBP);
  /* 11e0bbbb pop ebp */
  EBP = (pop32());
  /* 11e0bbbc ret  */
  ESPCHK(0x11e0bb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bbc0 @ 0x11e0bbc0 (304 bytes, 85 insns) */
void f_11e0bbc0(void) {
  FTRACE(0x11e0bbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0bbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0bbc1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0bbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bbc4 cmp dword ptr [0x11e30830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bbcb je 0x11e0bc8c */
  if (C.zf) goto L_11e0bc8c;
  /* 11e0bbd1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11e0bbd3 push 0x11e2b484 */
  push32((uint32_t)(0x11e2b484u));
  /* 11e0bbd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bbda push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e0bbdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bbde call 0x11dfc260 */
  push32(0x11e0bbe3u); f_11dfc260();
  /* 11e0bbe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bbe6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0bbe9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bbed jne 0x11e0bbf9 */
  if (!C.zf) goto L_11e0bbf9;
  /* 11e0bbef mov eax, 1 */
  EAX = (0x1u);
  /* 11e0bbf4 jmp 0x11e0bcec */
  goto L_11e0bcec;
L_11e0bbf9:;
  /* 11e0bbf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bbfc push eax */
  push32((uint32_t)(EAX));
  /* 11e0bbfd call 0x11e0bcf0 */
  push32(0x11e0bc02u); f_11e0bcf0();
  /* 11e0bc02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bc05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0bc07 je 0x11e0bc2d */
  if (C.zf) goto L_11e0bc2d;
  /* 11e0bc09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc0c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bc0d call 0x11e0bf80 */
  push32(0x11e0bc12u); f_11e0bf80();
  /* 11e0bc12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bc15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bc17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc1a push edx */
  push32((uint32_t)(EDX));
  /* 11e0bc1b call 0x11dfc8e0 */
  push32(0x11e0bc20u); f_11dfc8e0();
  /* 11e0bc20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bc23 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0bc28 jmp 0x11e0bcec */
  goto L_11e0bcec;
L_11e0bc2d:;
  /* 11e0bc2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc30 mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bc36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0bc38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0bc3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc3d mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bc43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0bc46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11e0bc49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc4c mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bc52 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11e0bc55 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e0bc58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc5b mov dword ptr [0x11e2f2b8], eax */
  w32((uint32_t)(0x11e2f2b8), (EAX));
  /* 11e0bc60 mov ecx, dword ptr [0x11e30858] */
  ECX = (r32((uint32_t)(0x11e30858)));
  /* 11e0bc66 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bc67 call 0x11e0bf80 */
  push32(0x11e0bc6cu); f_11e0bf80();
  /* 11e0bc6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bc6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bc71 mov edx, dword ptr [0x11e30858] */
  EDX = (r32((uint32_t)(0x11e30858)));
  /* 11e0bc77 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bc78 call 0x11dfc8e0 */
  push32(0x11e0bc7du); f_11dfc8e0();
  /* 11e0bc7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bc80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bc83 mov dword ptr [0x11e30858], eax */
  w32((uint32_t)(0x11e30858), (EAX));
  /* 11e0bc88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0bc8a jmp 0x11e0bcec */
  goto L_11e0bcec;
L_11e0bc8c:;
  /* 11e0bc8c mov ecx, dword ptr [0x11e2f2b8] */
  ECX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bc92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0bc94 mov dword ptr [0x11e2f288], edx */
  w32((uint32_t)(0x11e2f288), (EDX));
  /* 11e0bc9a mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bc9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0bca2 mov dword ptr [0x11e2f28c], ecx */
  w32((uint32_t)(0x11e2f28c), (ECX));
  /* 11e0bca8 mov edx, dword ptr [0x11e2f2b8] */
  EDX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0bcae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0bcb1 mov dword ptr [0x11e2f290], eax */
  w32((uint32_t)(0x11e2f290), (EAX));
  /* 11e0bcb6 mov dword ptr [0x11e2f2b8], 0x11e2f288 */
  w32((uint32_t)(0x11e2f2b8), (0x11e2f288u));
  /* 11e0bcc0 mov ecx, dword ptr [0x11e30858] */
  ECX = (r32((uint32_t)(0x11e30858)));
  /* 11e0bcc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bcc7 call 0x11e0bf80 */
  push32(0x11e0bcccu); f_11e0bf80();
  /* 11e0bccc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bccf push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bcd1 mov edx, dword ptr [0x11e30858] */
  EDX = (r32((uint32_t)(0x11e30858)));
  /* 11e0bcd7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bcd8 call 0x11dfc8e0 */
  push32(0x11e0bcddu); f_11dfc8e0();
  /* 11e0bcdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bce0 mov dword ptr [0x11e30858], 0 */
  w32((uint32_t)(0x11e30858), (0x0u));
  /* 11e0bcea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0bcec:;
  /* 11e0bcec mov esp, ebp */
  ESP = (EBP);
  /* 11e0bcee pop ebp */
  EBP = (pop32());
  /* 11e0bcef ret  */
  ESPCHK(0x11e0bbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bcf0 @ 0x11e0bcf0 (525 bytes, 200 insns) */
void f_11e0bcf0(void) {
  FTRACE(0x11e0bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0bcf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0bcf6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0bcfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0bcff mov ax, word ptr [0x11e30878] */
  AX = (r16((uint32_t)(0x11e30878)));
  /* 11e0bd05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0bd08 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bd0c jne 0x11e0bd16 */
  if (!C.zf) goto L_11e0bd16;
  /* 11e0bd0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0bd11 jmp 0x11e0bef9 */
  goto L_11e0bef9;
L_11e0bd16:;
  /* 11e0bd16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bd19 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd1c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bd1d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11e0bd1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bd22 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bd23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bd25 call 0x11e0ede0 */
  push32(0x11e0bd2au); f_11e0ede0();
  /* 11e0bd2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bd30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bd32 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bd35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bd38 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd3b push edx */
  push32((uint32_t)(EDX));
  /* 11e0bd3c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11e0bd3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bd41 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bd42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bd44 call 0x11e0ede0 */
  push32(0x11e0bd49u); f_11e0ede0();
  /* 11e0bd49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bd4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bd51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bd54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bd57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd5a push edx */
  push32((uint32_t)(EDX));
  /* 11e0bd5b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11e0bd5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bd60 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bd61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bd63 call 0x11e0ede0 */
  push32(0x11e0bd68u); f_11e0ede0();
  /* 11e0bd68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bd6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bd70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bd73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bd76 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd79 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bd7a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11e0bd7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bd7f push eax */
  push32((uint32_t)(EAX));
  /* 11e0bd80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bd82 call 0x11e0ede0 */
  push32(0x11e0bd87u); f_11e0ede0();
  /* 11e0bd87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bd8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bd8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bd92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bd95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bd98 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bd99 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11e0bd9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bd9e push eax */
  push32((uint32_t)(EAX));
  /* 11e0bd9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bda1 call 0x11e0ede0 */
  push32(0x11e0bda6u); f_11e0ede0();
  /* 11e0bda6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bda9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bdac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bdae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bdb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bdb4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0bdb7 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bdb8 call 0x11e0bf00 */
  push32(0x11e0bdbdu); f_11e0bf00();
  /* 11e0bdbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bdc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bdc3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bdc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bdc7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11e0bdc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bdcc push edx */
  push32((uint32_t)(EDX));
  /* 11e0bdcd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bdcf call 0x11e0ede0 */
  push32(0x11e0bdd4u); f_11e0ede0();
  /* 11e0bdd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bdd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bdda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bddc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bde2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bde5 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bde6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11e0bde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bdeb push eax */
  push32((uint32_t)(EAX));
  /* 11e0bdec push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0bdee call 0x11e0ede0 */
  push32(0x11e0bdf3u); f_11e0ede0();
  /* 11e0bdf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bdf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bdf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bdfb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bdfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0be01 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be04 push edx */
  push32((uint32_t)(EDX));
  /* 11e0be05 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11e0be07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0be0a push eax */
  push32((uint32_t)(EAX));
  /* 11e0be0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0be0d call 0x11e0ede0 */
  push32(0x11e0be12u); f_11e0ede0();
  /* 11e0be12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0be18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0be1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0be1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0be20 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be23 push edx */
  push32((uint32_t)(EDX));
  /* 11e0be24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e0be26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0be29 push eax */
  push32((uint32_t)(EAX));
  /* 11e0be2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0be2c call 0x11e0ede0 */
  push32(0x11e0be31u); f_11e0ede0();
  /* 11e0be31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0be37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0be39 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0be3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0be3f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be42 push edx */
  push32((uint32_t)(EDX));
  /* 11e0be43 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11e0be45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0be48 push eax */
  push32((uint32_t)(EAX));
  /* 11e0be49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0be4b call 0x11e0ede0 */
  push32(0x11e0be50u); f_11e0ede0();
  /* 11e0be50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0be56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0be58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0be5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0be5e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be61 push edx */
  push32((uint32_t)(EDX));
  /* 11e0be62 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11e0be64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0be67 push eax */
  push32((uint32_t)(EAX));
  /* 11e0be68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0be6a call 0x11e0ede0 */
  push32(0x11e0be6fu); f_11e0ede0();
  /* 11e0be6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0be75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0be77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0be7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0be7d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be80 push edx */
  push32((uint32_t)(EDX));
  /* 11e0be81 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11e0be83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0be86 push eax */
  push32((uint32_t)(EAX));
  /* 11e0be87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0be89 call 0x11e0ede0 */
  push32(0x11e0be8eu); f_11e0ede0();
  /* 11e0be8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0be94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0be96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0be99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0be9c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0be9f push edx */
  push32((uint32_t)(EDX));
  /* 11e0bea0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11e0bea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bea5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0bea8 call 0x11e0ede0 */
  push32(0x11e0beadu); f_11e0ede0();
  /* 11e0bead add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0beb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0beb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0beb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0beb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bebb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bebe push edx */
  push32((uint32_t)(EDX));
  /* 11e0bebf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11e0bec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bec4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0bec7 call 0x11e0ede0 */
  push32(0x11e0beccu); f_11e0ede0();
  /* 11e0becc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0becf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bed2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bed4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0beda add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bedd push edx */
  push32((uint32_t)(EDX));
  /* 11e0bede push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11e0bee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bee3 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0bee6 call 0x11e0ede0 */
  push32(0x11e0beebu); f_11e0ede0();
  /* 11e0beeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0beee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0bef1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0bef3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0bef6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e0bef9:;
  /* 11e0bef9 mov esp, ebp */
  ESP = (EBP);
  /* 11e0befb pop ebp */
  EBP = (pop32());
  /* 11e0befc ret  */
  ESPCHK(0x11e0bcf0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11e0bf00 (125 bytes, 49 insns) */
void f_11e0bf00(void) {
  FTRACE(0x11e0bf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0bf00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0bf01 mov ebp, esp */
  EBP = (ESP);
  /* 11e0bf03 push ecx */
  push32((uint32_t)(ECX));
L_11e0bf04:;
  /* 11e0bf04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0bf0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0bf0c je 0x11e0bf79 */
  if (C.zf) goto L_11e0bf79;
  /* 11e0bf0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0bf14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bf17 jl 0x11e0bf3d */
  if ((C.sf!=C.of)) goto L_11e0bf3d;
  /* 11e0bf19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0bf1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bf22 jg 0x11e0bf3d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0bf3d;
  /* 11e0bf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0bf2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0bf2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e0bf32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bf38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0bf3b jmp 0x11e0bf77 */
  goto L_11e0bf77;
L_11e0bf3d:;
  /* 11e0bf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0bf43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bf46 jne 0x11e0bf6e */
  if (!C.zf) goto L_11e0bf6e;
  /* 11e0bf48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0bf4e:;
  /* 11e0bf4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bf51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bf54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e0bf57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0bf59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bf5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bf5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0bf62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0bf65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0bf68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0bf6a jne 0x11e0bf4e */
  if (!C.zf) goto L_11e0bf4e;
  /* 11e0bf6c jmp 0x11e0bf77 */
  goto L_11e0bf77;
L_11e0bf6e:;
  /* 11e0bf6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bf74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e0bf77:;
  /* 11e0bf77 jmp 0x11e0bf04 */
  goto L_11e0bf04;
L_11e0bf79:;
  /* 11e0bf79 mov esp, ebp */
  ESP = (EBP);
  /* 11e0bf7b pop ebp */
  EBP = (pop32());
  /* 11e0bf7c ret  */
  ESPCHK(0x11e0bf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf80 @ 0x11e0bf80 (147 bytes, 52 insns) */
void f_11e0bf80(void) {
  FTRACE(0x11e0bf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0bf80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0bf81 mov ebp, esp */
  EBP = (ESP);
  /* 11e0bf83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bf87 jne 0x11e0bf8e */
  if (!C.zf) goto L_11e0bf8e;
  /* 11e0bf89 jmp 0x11e0c011 */
  goto L_11e0c011;
L_11e0bf8e:;
  /* 11e0bf8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf91 cmp dword ptr [eax + 0xc], 0x11e308b4 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11e308b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0bf98 je 0x11e0c011 */
  if (C.zf) goto L_11e0c011;
  /* 11e0bf9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bf9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bf9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0bfa2 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bfa3 call 0x11dfc8e0 */
  push32(0x11e0bfa8u); f_11dfc8e0();
  /* 11e0bfa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bfab push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bfad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bfb0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0bfb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bfb4 call 0x11dfc8e0 */
  push32(0x11e0bfb9u); f_11dfc8e0();
  /* 11e0bfb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bfbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bfbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bfc1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e0bfc4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bfc5 call 0x11dfc8e0 */
  push32(0x11e0bfcau); f_11dfc8e0();
  /* 11e0bfca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bfcd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bfcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bfd2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e0bfd5 push edx */
  push32((uint32_t)(EDX));
  /* 11e0bfd6 call 0x11dfc8e0 */
  push32(0x11e0bfdbu); f_11dfc8e0();
  /* 11e0bfdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bfde push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bfe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bfe3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e0bfe6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0bfe7 call 0x11dfc8e0 */
  push32(0x11e0bfecu); f_11dfc8e0();
  /* 11e0bfec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0bfef push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0bff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0bff4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11e0bff7 push eax */
  push32((uint32_t)(EAX));
  /* 11e0bff8 call 0x11dfc8e0 */
  push32(0x11e0bffdu); f_11dfc8e0();
  /* 11e0bffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c000 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c002 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c005 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11e0c008 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c009 call 0x11dfc8e0 */
  push32(0x11e0c00eu); f_11dfc8e0();
  /* 11e0c00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0c011:;
  /* 11e0c011 pop ebp */
  EBP = (pop32());
  /* 11e0c012 ret  */
  ESPCHK(0x11e0bf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c020 @ 0x11e0c020 (928 bytes, 284 insns) */
void f_11e0c020(void) {
  FTRACE(0x11e0c020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c020 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c021 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c023 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c026 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11e0c02d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11e0c034 cmp dword ptr [0x11e3082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c03b je 0x11e0c371 */
  if (C.zf) goto L_11e0c371;
  /* 11e0c041 cmp dword ptr [0x11e3083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c048 jne 0x11e0c070 */
  if (!C.zf) goto L_11e0c070;
  /* 11e0c04a push 0x11e3083c */
  push32((uint32_t)(0x11e3083cu));
  /* 11e0c04f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11e0c054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c056 mov ax, word ptr [0x11e30870] */
  AX = (r16((uint32_t)(0x11e30870)));
  /* 11e0c05c push eax */
  push32((uint32_t)(EAX));
  /* 11e0c05d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0c05f call 0x11e0ede0 */
  push32(0x11e0c064u); f_11e0ede0();
  /* 11e0c064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c069 je 0x11e0c070 */
  if (C.zf) goto L_11e0c070;
  /* 11e0c06b jmp 0x11e0c332 */
  goto L_11e0c332;
L_11e0c070:;
  /* 11e0c070 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11e0c072 push 0x11e2b490 */
  push32((uint32_t)(0x11e2b490u));
  /* 11e0c077 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c079 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11e0c07e call 0x11dfbe50 */
  push32(0x11e0c083u); f_11dfbe50();
  /* 11e0c083 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c086 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e0c089 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11e0c08b push 0x11e2b490 */
  push32((uint32_t)(0x11e2b490u));
  /* 11e0c090 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c092 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11e0c097 call 0x11dfbe50 */
  push32(0x11e0c09cu); f_11dfbe50();
  /* 11e0c09c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c09f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e0c0a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11e0c0a4 push 0x11e2b490 */
  push32((uint32_t)(0x11e2b490u));
  /* 11e0c0a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c0ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11e0c0b0 call 0x11dfbe50 */
  push32(0x11e0c0b5u); f_11dfbe50();
  /* 11e0c0b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c0b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11e0c0bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11e0c0bd push 0x11e2b490 */
  push32((uint32_t)(0x11e2b490u));
  /* 11e0c0c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c0c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11e0c0c9 call 0x11dfbe50 */
  push32(0x11e0c0ceu); f_11dfbe50();
  /* 11e0c0ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c0d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e0c0d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c0d8 je 0x11e0c0ec */
  if (C.zf) goto L_11e0c0ec;
  /* 11e0c0da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c0de je 0x11e0c0ec */
  if (C.zf) goto L_11e0c0ec;
  /* 11e0c0e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c0e4 je 0x11e0c0ec */
  if (C.zf) goto L_11e0c0ec;
  /* 11e0c0e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c0ea jne 0x11e0c0f1 */
  if (!C.zf) goto L_11e0c0f1;
L_11e0c0ec:;
  /* 11e0c0ec jmp 0x11e0c332 */
  goto L_11e0c332;
L_11e0c0f1:;
  /* 11e0c0f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0c0f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e0c0f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e0c0fe jmp 0x11e0c109 */
  goto L_11e0c109;
L_11e0c100:;
  /* 11e0c100 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0c103 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c106 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11e0c109:;
  /* 11e0c109 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c110 jge 0x11e0c125 */
  if ((C.sf==C.of)) goto L_11e0c125;
  /* 11e0c112 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c115 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11e0c118 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11e0c11a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c11d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c120 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e0c123 jmp 0x11e0c100 */
  goto L_11e0c100;
L_11e0c125:;
  /* 11e0c125 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11e0c128 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c129 mov ecx, dword ptr [0x11e3083c] */
  ECX = (r32((uint32_t)(0x11e3083c)));
  /* 11e0c12f push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c130 call dword ptr [0x11e33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33354))), 0x11e0c136u);
  /* 11e0c136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c138 jne 0x11e0c13f */
  if (!C.zf) goto L_11e0c13f;
  /* 11e0c13a jmp 0x11e0c332 */
  goto L_11e0c332;
L_11e0c13f:;
  /* 11e0c13f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c143 jbe 0x11e0c14a */
  if ((C.cf||C.zf)) goto L_11e0c14a;
  /* 11e0c145 jmp 0x11e0c332 */
  goto L_11e0c332;
L_11e0c14a:;
  /* 11e0c14a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0c14d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c153 mov dword ptr [0x11e2e000], edx */
  w32((uint32_t)(0x11e2e000), (EDX));
  /* 11e0c159 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c160 jle 0x11e0c1b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0c1b9;
  /* 11e0c162 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11e0c165 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e0c168 jmp 0x11e0c173 */
  goto L_11e0c173;
L_11e0c16a:;
  /* 11e0c16a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c16d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c170 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11e0c173:;
  /* 11e0c173 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c178 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0c17a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c17c je 0x11e0c1b9 */
  if (C.zf) goto L_11e0c1b9;
  /* 11e0c17e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c181 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c183 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e0c186 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0c188 je 0x11e0c1b9 */
  if (C.zf) goto L_11e0c1b9;
  /* 11e0c18a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c18d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c18f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0c191 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e0c194 jmp 0x11e0c19f */
  goto L_11e0c19f;
L_11e0c196:;
  /* 11e0c196 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0c199 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c19c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11e0c19f:;
  /* 11e0c19f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c1a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c1a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e0c1a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c1aa jg 0x11e0c1b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0c1b7;
  /* 11e0c1ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0c1af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c1b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e0c1b5 jmp 0x11e0c196 */
  goto L_11e0c196;
L_11e0c1b7:;
  /* 11e0c1b7 jmp 0x11e0c16a */
  goto L_11e0c16a;
L_11e0c1b9:;
  /* 11e0c1b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0c1bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0c1bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0c1bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0c1c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c1c5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c1c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e0c1cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0c1ce push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c1cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0c1d1 call 0x11e07ff0 */
  push32(0x11e0c1d6u); f_11e07ff0();
  /* 11e0c1d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c1d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c1db jne 0x11e0c1e2 */
  if (!C.zf) goto L_11e0c1e2;
  /* 11e0c1dd jmp 0x11e0c332 */
  goto L_11e0c332;
L_11e0c1e2:;
  /* 11e0c1e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0c1e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11e0c1ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0c1ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e0c1f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e0c1f7 jmp 0x11e0c202 */
  goto L_11e0c202;
L_11e0c1f9:;
  /* 11e0c1f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0c1fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c1ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11e0c202:;
  /* 11e0c202 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c209 jge 0x11e0c220 */
  if ((C.sf==C.of)) goto L_11e0c220;
  /* 11e0c20b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0c20e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11e0c212 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11e0c215 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0c218 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c21b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e0c21e jmp 0x11e0c1f9 */
  goto L_11e0c1f9;
L_11e0c220:;
  /* 11e0c220 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0c222 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0c224 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0c227 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c22a push edx */
  push32((uint32_t)(EDX));
  /* 11e0c22b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e0c230 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0c233 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c234 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0c236 call 0x11e0f080 */
  push32(0x11e0c23bu); f_11e0f080();
  /* 11e0c23b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c240 jne 0x11e0c247 */
  if (!C.zf) goto L_11e0c247;
  /* 11e0c242 jmp 0x11e0c332 */
  goto L_11e0c332;
L_11e0c247:;
  /* 11e0c247 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0c24a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11e0c24f cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c256 jle 0x11e0c2b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0c2b3;
  /* 11e0c258 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11e0c25b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e0c25e jmp 0x11e0c269 */
  goto L_11e0c269;
L_11e0c260:;
  /* 11e0c260 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c263 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c266 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11e0c269:;
  /* 11e0c269 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c26c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c26e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0c270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0c272 je 0x11e0c2b3 */
  if (C.zf) goto L_11e0c2b3;
  /* 11e0c274 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c277 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c279 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e0c27c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0c27e je 0x11e0c2b3 */
  if (C.zf) goto L_11e0c2b3;
  /* 11e0c280 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c285 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0c287 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e0c28a jmp 0x11e0c295 */
  goto L_11e0c295;
L_11e0c28c:;
  /* 11e0c28c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0c28f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c292 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11e0c295:;
  /* 11e0c295 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0c298 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c29a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e0c29d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c2a0 jg 0x11e0c2b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0c2b1;
  /* 11e0c2a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0c2a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0c2a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11e0c2af jmp 0x11e0c28c */
  goto L_11e0c28c;
L_11e0c2b1:;
  /* 11e0c2b1 jmp 0x11e0c260 */
  goto L_11e0c260;
L_11e0c2b3:;
  /* 11e0c2b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0c2b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c2b9 mov dword ptr [0x11e2e00c], eax */
  w32((uint32_t)(0x11e2e00c), (EAX));
  /* 11e0c2be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0c2c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c2c4 mov dword ptr [0x11e2e010], ecx */
  w32((uint32_t)(0x11e2e010), (ECX));
  /* 11e0c2ca cmp dword ptr [0x11e3085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c2d1 je 0x11e0c2e4 */
  if (C.zf) goto L_11e0c2e4;
  /* 11e0c2d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c2d5 mov edx, dword ptr [0x11e3085c] */
  EDX = (r32((uint32_t)(0x11e3085c)));
  /* 11e0c2db push edx */
  push32((uint32_t)(EDX));
  /* 11e0c2dc call 0x11dfc8e0 */
  push32(0x11e0c2e1u); f_11dfc8e0();
  /* 11e0c2e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0c2e4:;
  /* 11e0c2e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0c2e7 mov dword ptr [0x11e3085c], eax */
  w32((uint32_t)(0x11e3085c), (EAX));
  /* 11e0c2ec cmp dword ptr [0x11e30860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c2f3 je 0x11e0c306 */
  if (C.zf) goto L_11e0c306;
  /* 11e0c2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c2f7 mov ecx, dword ptr [0x11e30860] */
  ECX = (r32((uint32_t)(0x11e30860)));
  /* 11e0c2fd push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c2fe call 0x11dfc8e0 */
  push32(0x11e0c303u); f_11dfc8e0();
  /* 11e0c303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0c306:;
  /* 11e0c306 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0c309 mov dword ptr [0x11e30860], edx */
  w32((uint32_t)(0x11e30860), (EDX));
  /* 11e0c30f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c311 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0c314 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c315 call 0x11dfc8e0 */
  push32(0x11e0c31au); f_11dfc8e0();
  /* 11e0c31a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c31d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c31f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0c322 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c323 call 0x11dfc8e0 */
  push32(0x11e0c328u); f_11dfc8e0();
  /* 11e0c328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c32b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c32d jmp 0x11e0c3bc */
  goto L_11e0c3bc;
L_11e0c332:;
  /* 11e0c332 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c334 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0c337 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c338 call 0x11dfc8e0 */
  push32(0x11e0c33du); f_11dfc8e0();
  /* 11e0c33d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c340 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c342 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0c345 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c346 call 0x11dfc8e0 */
  push32(0x11e0c34bu); f_11dfc8e0();
  /* 11e0c34b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c34e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c350 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0c353 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c354 call 0x11dfc8e0 */
  push32(0x11e0c359u); f_11dfc8e0();
  /* 11e0c359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c35c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c35e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0c361 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c362 call 0x11dfc8e0 */
  push32(0x11e0c367u); f_11dfc8e0();
  /* 11e0c367 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c36a mov eax, 1 */
  EAX = (0x1u);
  /* 11e0c36f jmp 0x11e0c3bc */
  goto L_11e0c3bc;
L_11e0c371:;
  /* 11e0c371 mov dword ptr [0x11e2e00c], 0x11e2e016 */
  w32((uint32_t)(0x11e2e00c), (0x11e2e016u));
  /* 11e0c37b mov dword ptr [0x11e2e010], 0x11e2e016 */
  w32((uint32_t)(0x11e2e010), (0x11e2e016u));
  /* 11e0c385 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c387 mov eax, dword ptr [0x11e3085c] */
  EAX = (r32((uint32_t)(0x11e3085c)));
  /* 11e0c38c push eax */
  push32((uint32_t)(EAX));
  /* 11e0c38d call 0x11dfc8e0 */
  push32(0x11e0c392u); f_11dfc8e0();
  /* 11e0c392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c395 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0c397 mov ecx, dword ptr [0x11e30860] */
  ECX = (r32((uint32_t)(0x11e30860)));
  /* 11e0c39d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c39e call 0x11dfc8e0 */
  push32(0x11e0c3a3u); f_11dfc8e0();
  /* 11e0c3a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c3a6 mov dword ptr [0x11e3085c], 0 */
  w32((uint32_t)(0x11e3085c), (0x0u));
  /* 11e0c3b0 mov dword ptr [0x11e30860], 0 */
  w32((uint32_t)(0x11e30860), (0x0u));
  /* 11e0c3ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0c3bc:;
  /* 11e0c3bc mov esp, ebp */
  ESP = (EBP);
  /* 11e0c3be pop ebp */
  EBP = (pop32());
  /* 11e0c3bf ret  */
  ESPCHK(0x11e0c020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c3c0 @ 0x11e0c3c0 (7 bytes, 5 insns) */
void f_11e0c3c0(void) {
  FTRACE(0x11e0c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c3c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c3c5 pop ebp */
  EBP = (pop32());
  /* 11e0c3c6 ret  */
  ESPCHK(0x11e0c3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c3d0 @ 0x11e0c3d0 (62 bytes, 35 insns) */
void f_11e0c3d0(void) {
  FTRACE(0x11e0c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c3d3 push esi */
  push32((uint32_t)(ESI));
  /* 11e0c3d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c3d6 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3d7 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3d8 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3d9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3da push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3db push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3dc push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3dd push eax */
  push32((uint32_t)(EAX));
  /* 11e0c3de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0c3e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e0c3e4:;
  /* 11e0c3e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0c3e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0c3e8 je 0x11e0c3f1 */
  if (C.zf) goto L_11e0c3f1;
  /* 11e0c3ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e0c3eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11e0c3eb");
  /* 11e0c3ef jmp 0x11e0c3e4 */
  goto L_11e0c3e4;
L_11e0c3f1:;
  /* 11e0c3f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c3f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c3f7 nop  */
  /* nop */
L_11e0c3f8:;
  /* 11e0c3f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e0c3f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e0c3fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0c3fd je 0x11e0c406 */
  if (C.zf) goto L_11e0c406;
  /* 11e0c3ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e0c400 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11e0c400");
  /* 11e0c404 jae 0x11e0c3f8 */
  if (!C.cf) goto L_11e0c3f8;
L_11e0c406:;
  /* 11e0c406 mov eax, ecx */
  EAX = (ECX);
  /* 11e0c408 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c40b pop esi */
  ESI = (pop32());
  /* 11e0c40c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0c40d ret  */
  ESPCHK(0x11e0c3d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11e0c410 (56 bytes, 31 insns) */
void f_11e0c410(void) {
  FTRACE(0x11e0c410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c410 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c411 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c413 push edi */
  push32((uint32_t)(EDI));
  /* 11e0c414 push esi */
  push32((uint32_t)(ESI));
  /* 11e0c415 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0c416 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0c419 jecxz 0x11e0c441 */
  x86_unimpl("jecxz @ 0x11e0c419");
  /* 11e0c41b mov ebx, ecx */
  EBX = (ECX);
  /* 11e0c41d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c420 mov esi, edi */
  ESI = (EDI);
  /* 11e0c422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c424 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11e0c426 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0c428 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c42a mov edi, esi */
  EDI = (ESI);
  /* 11e0c42c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0c42f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11e0c431 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11e0c434 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c436 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0c439 ja 0x11e0c43f */
  if ((!C.cf&&!C.zf)) goto L_11e0c43f;
  /* 11e0c43b je 0x11e0c441 */
  if (C.zf) goto L_11e0c441;
  /* 11e0c43d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e0c43e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11e0c43f:;
  /* 11e0c43f not ecx */
  ECX = (~(ECX));
L_11e0c441:;
  /* 11e0c441 mov eax, ecx */
  EAX = (ECX);
  /* 11e0c443 pop ebx */
  EBX = (pop32());
  /* 11e0c444 pop esi */
  ESI = (pop32());
  /* 11e0c445 pop edi */
  EDI = (pop32());
  /* 11e0c446 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0c447 ret  */
  ESPCHK(0x11e0c410u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c450 @ 0x11e0c450 (58 bytes, 32 insns) */
void f_11e0c450(void) {
  FTRACE(0x11e0c450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c450 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c451 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c453 push esi */
  push32((uint32_t)(ESI));
  /* 11e0c454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c456 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c457 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c458 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c459 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c45a push eax */
  push32((uint32_t)(EAX));
  /* 11e0c45b push eax */
  push32((uint32_t)(EAX));
  /* 11e0c45c push eax */
  push32((uint32_t)(EAX));
  /* 11e0c45d push eax */
  push32((uint32_t)(EAX));
  /* 11e0c45e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0c461 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e0c464:;
  /* 11e0c464 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0c466 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0c468 je 0x11e0c471 */
  if (C.zf) goto L_11e0c471;
  /* 11e0c46a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e0c46b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11e0c46b");
  /* 11e0c46f jmp 0x11e0c464 */
  goto L_11e0c464;
L_11e0c471:;
  /* 11e0c471 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11e0c474:;
  /* 11e0c474 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e0c476 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0c478 je 0x11e0c484 */
  if (C.zf) goto L_11e0c484;
  /* 11e0c47a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e0c47b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11e0c47b");
  /* 11e0c47f jae 0x11e0c474 */
  if (!C.cf) goto L_11e0c474;
  /* 11e0c481 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11e0c484:;
  /* 11e0c484 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c487 pop esi */
  ESI = (pop32());
  /* 11e0c488 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0c489 ret  */
  ESPCHK(0x11e0c450u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c490 @ 0x11e0c490 (512 bytes, 147 insns) */
void f_11e0c490(void) {
  FTRACE(0x11e0c490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c490 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c491 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c496 cmp dword ptr [0x11e308a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e308a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c49d jne 0x11e0c4c2 */
  if (!C.zf) goto L_11e0c4c2;
  /* 11e0c49f call 0x11e0cf60 */
  push32(0x11e0c4a4u); f_11e0cf60();
  /* 11e0c4a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c4a6 je 0x11e0c4b2 */
  if (C.zf) goto L_11e0c4b2;
  /* 11e0c4a8 mov eax, dword ptr [0x11e33320] */
  EAX = (r32((uint32_t)(0x11e33320)));
  /* 11e0c4ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0c4b0 jmp 0x11e0c4b9 */
  goto L_11e0c4b9;
L_11e0c4b2:;
  /* 11e0c4b2 mov dword ptr [ebp - 8], 0x11e0cfb0 */
  w32((uint32_t)(EBP + -0x8), (0x11e0cfb0u));
L_11e0c4b9:;
  /* 11e0c4b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0c4bc mov dword ptr [0x11e308a8], ecx */
  w32((uint32_t)(0x11e308a8), (ECX));
L_11e0c4c2:;
  /* 11e0c4c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c4c6 jne 0x11e0c4d2 */
  if (!C.zf) goto L_11e0c4d2;
  /* 11e0c4c8 call 0x11e0cdb0 */
  push32(0x11e0c4cdu); f_11e0cdb0();
  /* 11e0c4cd jmp 0x11e0c59e */
  goto L_11e0c59e;
L_11e0c4d2:;
  /* 11e0c4d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c4d5 mov dword ptr [0x11e30898], edx */
  w32((uint32_t)(0x11e30898), (EDX));
  /* 11e0c4db cmp dword ptr [0x11e30898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c4e2 je 0x11e0c504 */
  if (C.zf) goto L_11e0c504;
  /* 11e0c4e4 mov eax, dword ptr [0x11e30898] */
  EAX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c4e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0c4ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0c4ee je 0x11e0c504 */
  if (C.zf) goto L_11e0c504;
  /* 11e0c4f0 push 0x11e30898 */
  push32((uint32_t)(0x11e30898u));
  /* 11e0c4f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e0c4f7 push 0x11e2efc0 */
  push32((uint32_t)(0x11e2efc0u));
  /* 11e0c4fc call 0x11e0c690 */
  push32(0x11e0c501u); f_11e0c690();
  /* 11e0c501 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0c504:;
  /* 11e0c504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c507 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c50a mov dword ptr [0x11e3089c], edx */
  w32((uint32_t)(0x11e3089c), (EDX));
  /* 11e0c510 cmp dword ptr [0x11e3089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c517 je 0x11e0c539 */
  if (C.zf) goto L_11e0c539;
  /* 11e0c519 mov eax, dword ptr [0x11e3089c] */
  EAX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0c51e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0c521 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0c523 je 0x11e0c539 */
  if (C.zf) goto L_11e0c539;
  /* 11e0c525 push 0x11e3089c */
  push32((uint32_t)(0x11e3089cu));
  /* 11e0c52a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11e0c52c push 0x11e2ef08 */
  push32((uint32_t)(0x11e2ef08u));
  /* 11e0c531 call 0x11e0c690 */
  push32(0x11e0c536u); f_11e0c690();
  /* 11e0c536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0c539:;
  /* 11e0c539 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
  /* 11e0c543 cmp dword ptr [0x11e30898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c54a je 0x11e0c57d */
  if (C.zf) goto L_11e0c57d;
  /* 11e0c54c mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c552 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0c555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c557 je 0x11e0c57d */
  if (C.zf) goto L_11e0c57d;
  /* 11e0c559 cmp dword ptr [0x11e3089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c560 je 0x11e0c576 */
  if (C.zf) goto L_11e0c576;
  /* 11e0c562 mov ecx, dword ptr [0x11e3089c] */
  ECX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0c568 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0c56b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0c56d je 0x11e0c576 */
  if (C.zf) goto L_11e0c576;
  /* 11e0c56f call 0x11e0c720 */
  push32(0x11e0c574u); f_11e0c720();
  /* 11e0c574 jmp 0x11e0c57b */
  goto L_11e0c57b;
L_11e0c576:;
  /* 11e0c576 call 0x11e0cb10 */
  push32(0x11e0c57bu); f_11e0cb10();
L_11e0c57b:;
  /* 11e0c57b jmp 0x11e0c59e */
  goto L_11e0c59e;
L_11e0c57d:;
  /* 11e0c57d cmp dword ptr [0x11e3089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c584 je 0x11e0c599 */
  if (C.zf) goto L_11e0c599;
  /* 11e0c586 mov eax, dword ptr [0x11e3089c] */
  EAX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0c58b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0c58e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0c590 je 0x11e0c599 */
  if (C.zf) goto L_11e0c599;
  /* 11e0c592 call 0x11e0ccb0 */
  push32(0x11e0c597u); f_11e0ccb0();
  /* 11e0c597 jmp 0x11e0c59e */
  goto L_11e0c59e;
L_11e0c599:;
  /* 11e0c599 call 0x11e0cdb0 */
  push32(0x11e0c59eu); f_11e0cdb0();
L_11e0c59e:;
  /* 11e0c59e cmp dword ptr [0x11e308a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e308a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c5a5 jne 0x11e0c5ae */
  if (!C.zf) goto L_11e0c5ae;
  /* 11e0c5a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c5a9 jmp 0x11e0c68c */
  goto L_11e0c68c;
L_11e0c5ae:;
  /* 11e0c5ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c5b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c5b7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c5b8 call 0x11e0cde0 */
  push32(0x11e0c5bdu); f_11e0cde0();
  /* 11e0c5bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c5c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0c5c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c5c7 je 0x11e0c5dc */
  if (C.zf) goto L_11e0c5dc;
  /* 11e0c5c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c5cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c5d1 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c5d2 call dword ptr [0x11e33324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33324))), 0x11e0c5d8u);
  /* 11e0c5d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c5da jne 0x11e0c5e3 */
  if (!C.zf) goto L_11e0c5e3;
L_11e0c5dc:;
  /* 11e0c5dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c5de jmp 0x11e0c68c */
  goto L_11e0c68c;
L_11e0c5e3:;
  /* 11e0c5e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0c5e5 mov ecx, dword ptr [0x11e30888] */
  ECX = (r32((uint32_t)(0x11e30888)));
  /* 11e0c5eb push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c5ec call dword ptr [0x11e33328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33328))), 0x11e0c5f2u);
  /* 11e0c5f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c5f4 jne 0x11e0c5fd */
  if (!C.zf) goto L_11e0c5fd;
  /* 11e0c5f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c5f8 jmp 0x11e0c68c */
  goto L_11e0c68c;
L_11e0c5fd:;
  /* 11e0c5fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c601 je 0x11e0c628 */
  if (C.zf) goto L_11e0c628;
  /* 11e0c603 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0c606 mov ax, word ptr [0x11e30888] */
  AX = (r16((uint32_t)(0x11e30888)));
  /* 11e0c60c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11e0c60f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0c612 mov dx, word ptr [0x11e308a4] */
  DX = (r16((uint32_t)(0x11e308a4)));
  /* 11e0c619 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11e0c61d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0c620 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e0c624 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11e0c628:;
  /* 11e0c628 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c62c je 0x11e0c687 */
  if (C.zf) goto L_11e0c687;
  /* 11e0c62e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e0c630 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0c633 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c634 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11e0c639 mov eax, dword ptr [0x11e30888] */
  EAX = (r32((uint32_t)(0x11e30888)));
  /* 11e0c63e push eax */
  push32((uint32_t)(EAX));
  /* 11e0c63f call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0c645u);
  /* 11e0c645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c647 jne 0x11e0c64d */
  if (!C.zf) goto L_11e0c64d;
  /* 11e0c649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c64b jmp 0x11e0c68c */
  goto L_11e0c68c;
L_11e0c64d:;
  /* 11e0c64d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e0c64f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0c652 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c655 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c656 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11e0c65b mov edx, dword ptr [0x11e308a4] */
  EDX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0c661 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c662 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0c668u);
  /* 11e0c668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c66a jne 0x11e0c670 */
  if (!C.zf) goto L_11e0c670;
  /* 11e0c66c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c66e jmp 0x11e0c68c */
  goto L_11e0c68c;
L_11e0c670:;
  /* 11e0c670 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e0c672 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0c675 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c67a push eax */
  push32((uint32_t)(EAX));
  /* 11e0c67b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c67e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c67f call 0x11e01120 */
  push32(0x11e0c684u); f_11e01120();
  /* 11e0c684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0c687:;
  /* 11e0c687 mov eax, 1 */
  EAX = (0x1u);
L_11e0c68c:;
  /* 11e0c68c mov esp, ebp */
  ESP = (EBP);
  /* 11e0c68e pop ebp */
  EBP = (pop32());
  /* 11e0c68f ret  */
  ESPCHK(0x11e0c490u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c690 @ 0x11e0c690 (130 bytes, 47 insns) */
void f_11e0c690(void) {
  FTRACE(0x11e0c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c690 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c691 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c696 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e0c69d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11e0c6a4:;
  /* 11e0c6a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0c6a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c6aa jg 0x11e0c70e */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0c70e;
  /* 11e0c6ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c6b0 je 0x11e0c70e */
  if (C.zf) goto L_11e0c70e;
  /* 11e0c6b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0c6b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c6b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0c6b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c6bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e0c6bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0c6c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c6c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c6c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11e0c6c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c6ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0c6cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0c6cf push edx */
  push32((uint32_t)(EDX));
  /* 11e0c6d0 call 0x11e0f2f0 */
  push32(0x11e0c6d5u); f_11e0f2f0();
  /* 11e0c6d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c6d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0c6db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c6df jne 0x11e0c6f2 */
  if (!C.zf) goto L_11e0c6f2;
  /* 11e0c6e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c6e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c6e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11e0c6eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0c6ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0c6f0 jmp 0x11e0c70c */
  goto L_11e0c70c;
L_11e0c6f2:;
  /* 11e0c6f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c6f6 jge 0x11e0c703 */
  if ((C.sf==C.of)) goto L_11e0c703;
  /* 11e0c6f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c6fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c6fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e0c701 jmp 0x11e0c70c */
  goto L_11e0c70c;
L_11e0c703:;
  /* 11e0c703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c706 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c709 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e0c70c:;
  /* 11e0c70c jmp 0x11e0c6a4 */
  goto L_11e0c6a4;
L_11e0c70e:;
  /* 11e0c70e mov esp, ebp */
  ESP = (EBP);
  /* 11e0c710 pop ebp */
  EBP = (pop32());
  /* 11e0c711 ret  */
  ESPCHK(0x11e0c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c720 @ 0x11e0c720 (186 bytes, 50 insns) */
void f_11e0c720(void) {
  FTRACE(0x11e0c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c720 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c721 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c723 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c724 mov eax, dword ptr [0x11e30898] */
  EAX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c729 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c72a call 0x11e01410 */
  push32(0x11e0c72fu); f_11e01410();
  /* 11e0c72f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c732 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c734 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c737 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e0c73a mov dword ptr [0x11e30894], ecx */
  w32((uint32_t)(0x11e30894), (ECX));
  /* 11e0c740 mov edx, dword ptr [0x11e3089c] */
  EDX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0c746 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c747 call 0x11e01410 */
  push32(0x11e0c74cu); f_11e01410();
  /* 11e0c74c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c74f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c751 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c754 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e0c757 mov dword ptr [0x11e3088c], ecx */
  w32((uint32_t)(0x11e3088c), (ECX));
  /* 11e0c75d mov dword ptr [0x11e30888], 0 */
  w32((uint32_t)(0x11e30888), (0x0u));
  /* 11e0c767 cmp dword ptr [0x11e30894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c76e je 0x11e0c779 */
  if (C.zf) goto L_11e0c779;
  /* 11e0c770 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e0c777 jmp 0x11e0c78b */
  goto L_11e0c78b;
L_11e0c779:;
  /* 11e0c779 mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c77f push edx */
  push32((uint32_t)(EDX));
  /* 11e0c780 call 0x11e0d1c0 */
  push32(0x11e0c785u); f_11e0d1c0();
  /* 11e0c785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c788 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0c78b:;
  /* 11e0c78b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0c78e mov dword ptr [0x11e30890], eax */
  w32((uint32_t)(0x11e30890), (EAX));
  /* 11e0c793 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0c795 push 0x11e0c7e0 */
  push32((uint32_t)(0x11e0c7e0u));
  /* 11e0c79a call dword ptr [0x11e3331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3331c))), 0x11e0c7a0u);
  /* 11e0c7a0 mov ecx, dword ptr [0x11e308a0] */
  ECX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c7a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c7ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0c7ae je 0x11e0c7cc */
  if (C.zf) goto L_11e0c7cc;
  /* 11e0c7b0 mov edx, dword ptr [0x11e308a0] */
  EDX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c7b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c7bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0c7be je 0x11e0c7cc */
  if (C.zf) goto L_11e0c7cc;
  /* 11e0c7c0 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c7c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0c7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c7ca jne 0x11e0c7d6 */
  if (!C.zf) goto L_11e0c7d6;
L_11e0c7cc:;
  /* 11e0c7cc mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
L_11e0c7d6:;
  /* 11e0c7d6 mov esp, ebp */
  ESP = (EBP);
  /* 11e0c7d8 pop ebp */
  EBP = (pop32());
  /* 11e0c7d9 ret  */
  ESPCHK(0x11e0c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c7e0 @ 0x11e0c7e0 (804 bytes, 220 insns) */
void f_11e0c7e0(void) {
  FTRACE(0x11e0c7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0c7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0c7e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0c7e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0c7e9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c7ea call 0x11e0d140 */
  push32(0x11e0c7efu); f_11e0d140();
  /* 11e0c7ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c7f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11e0c7f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e0c7f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0c7fa push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c7fb mov edx, dword ptr [0x11e3088c] */
  EDX = (r32((uint32_t)(0x11e3088c)));
  /* 11e0c801 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0c803 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c805 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c80b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c811 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c812 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c815 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c816 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0c81cu);
  /* 11e0c81c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c81e jne 0x11e0c834 */
  if (!C.zf) goto L_11e0c834;
  /* 11e0c820 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
  /* 11e0c82a mov eax, 1 */
  EAX = (0x1u);
  /* 11e0c82f jmp 0x11e0cafe */
  goto L_11e0cafe;
L_11e0c834:;
  /* 11e0c834 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0c837 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c838 mov edx, dword ptr [0x11e3089c] */
  EDX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0c83e push edx */
  push32((uint32_t)(EDX));
  /* 11e0c83f call 0x11e0f2f0 */
  push32(0x11e0c844u); f_11e0f2f0();
  /* 11e0c844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c849 jne 0x11e0c96f */
  if (!C.zf) goto L_11e0c96f;
  /* 11e0c84f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e0c851 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e0c854 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c855 mov ecx, dword ptr [0x11e30894] */
  ECX = (r32((uint32_t)(0x11e30894)));
  /* 11e0c85b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0c85d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c85f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c865 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c86b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c86c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c86f push edx */
  push32((uint32_t)(EDX));
  /* 11e0c870 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0c876u);
  /* 11e0c876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c878 jne 0x11e0c88e */
  if (!C.zf) goto L_11e0c88e;
  /* 11e0c87a mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
  /* 11e0c884 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0c889 jmp 0x11e0cafe */
  goto L_11e0cafe;
L_11e0c88e:;
  /* 11e0c88e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e0c891 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c892 mov ecx, dword ptr [0x11e30898] */
  ECX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c898 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c899 call 0x11e0f2f0 */
  push32(0x11e0c89eu); f_11e0f2f0();
  /* 11e0c89e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c8a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c8a3 jne 0x11e0c8d0 */
  if (!C.zf) goto L_11e0c8d0;
  /* 11e0c8a5 mov edx, dword ptr [0x11e308a0] */
  EDX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c8ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c8b1 mov dword ptr [0x11e308a0], edx */
  w32((uint32_t)(0x11e308a0), (EDX));
  /* 11e0c8b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c8ba mov dword ptr [0x11e308a4], eax */
  w32((uint32_t)(0x11e308a4), (EAX));
  /* 11e0c8bf mov ecx, dword ptr [0x11e308a4] */
  ECX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0c8c5 mov dword ptr [0x11e30888], ecx */
  w32((uint32_t)(0x11e30888), (ECX));
  /* 11e0c8cb jmp 0x11e0c96f */
  goto L_11e0c96f;
L_11e0c8d0:;
  /* 11e0c8d0 mov edx, dword ptr [0x11e308a0] */
  EDX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c8d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c8d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0c8db jne 0x11e0c96f */
  if (!C.zf) goto L_11e0c96f;
  /* 11e0c8e1 cmp dword ptr [0x11e30890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c8e8 je 0x11e0c93d */
  if (C.zf) goto L_11e0c93d;
  /* 11e0c8ea mov eax, dword ptr [0x11e30890] */
  EAX = (r32((uint32_t)(0x11e30890)));
  /* 11e0c8ef push eax */
  push32((uint32_t)(EAX));
  /* 11e0c8f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0c8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c8f4 mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c8fa push edx */
  push32((uint32_t)(EDX));
  /* 11e0c8fb call 0x11e0f3c0 */
  push32(0x11e0c900u); f_11e0f3c0();
  /* 11e0c900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c905 jne 0x11e0c93d */
  if (!C.zf) goto L_11e0c93d;
  /* 11e0c907 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c90c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11e0c90e mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
  /* 11e0c913 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c916 mov dword ptr [0x11e308a4], ecx */
  w32((uint32_t)(0x11e308a4), (ECX));
  /* 11e0c91c mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c922 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c923 call 0x11e01410 */
  push32(0x11e0c928u); f_11e01410();
  /* 11e0c928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c92b cmp eax, dword ptr [0x11e30890] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e30890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c931 jne 0x11e0c93b */
  if (!C.zf) goto L_11e0c93b;
  /* 11e0c933 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c936 mov dword ptr [0x11e30888], eax */
  w32((uint32_t)(0x11e30888), (EAX));
L_11e0c93b:;
  /* 11e0c93b jmp 0x11e0c96f */
  goto L_11e0c96f;
L_11e0c93d:;
  /* 11e0c93d mov ecx, dword ptr [0x11e308a0] */
  ECX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c943 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c946 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0c948 jne 0x11e0c96f */
  if (!C.zf) goto L_11e0c96f;
  /* 11e0c94a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c94d push edx */
  push32((uint32_t)(EDX));
  /* 11e0c94e call 0x11e0ce80 */
  push32(0x11e0c953u); f_11e0ce80();
  /* 11e0c953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c958 je 0x11e0c96f */
  if (C.zf) goto L_11e0c96f;
  /* 11e0c95a mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c95f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e0c961 mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
  /* 11e0c966 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c969 mov dword ptr [0x11e308a4], ecx */
  w32((uint32_t)(0x11e308a4), (ECX));
L_11e0c96f:;
  /* 11e0c96f mov edx, dword ptr [0x11e308a0] */
  EDX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c975 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0c97b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c981 je 0x11e0caf1 */
  if (C.zf) goto L_11e0caf1;
  /* 11e0c987 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e0c989 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e0c98c push eax */
  push32((uint32_t)(EAX));
  /* 11e0c98d mov ecx, dword ptr [0x11e30894] */
  ECX = (r32((uint32_t)(0x11e30894)));
  /* 11e0c993 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0c995 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0c997 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0c99d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c9a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0c9a7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0c9a8 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0c9aeu);
  /* 11e0c9ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c9b0 jne 0x11e0c9c6 */
  if (!C.zf) goto L_11e0c9c6;
  /* 11e0c9b2 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
  /* 11e0c9bc mov eax, 1 */
  EAX = (0x1u);
  /* 11e0c9c1 jmp 0x11e0cafe */
  goto L_11e0cafe;
L_11e0c9c6:;
  /* 11e0c9c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e0c9c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0c9ca mov ecx, dword ptr [0x11e30898] */
  ECX = (r32((uint32_t)(0x11e30898)));
  /* 11e0c9d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0c9d1 call 0x11e0f2f0 */
  push32(0x11e0c9d6u); f_11e0f2f0();
  /* 11e0c9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0c9d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0c9db jne 0x11e0ca90 */
  if (!C.zf) goto L_11e0ca90;
  /* 11e0c9e1 mov edx, dword ptr [0x11e308a0] */
  EDX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c9e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e0c9ea mov dword ptr [0x11e308a0], edx */
  w32((uint32_t)(0x11e308a0), (EDX));
  /* 11e0c9f0 cmp dword ptr [0x11e30894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0c9f7 je 0x11e0ca1a */
  if (C.zf) goto L_11e0ca1a;
  /* 11e0c9f9 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0c9fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e0ca01 mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
  /* 11e0ca06 cmp dword ptr [0x11e30888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ca0d jne 0x11e0ca18 */
  if (!C.zf) goto L_11e0ca18;
  /* 11e0ca0f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0ca12 mov dword ptr [0x11e30888], ecx */
  w32((uint32_t)(0x11e30888), (ECX));
L_11e0ca18:;
  /* 11e0ca18 jmp 0x11e0ca8e */
  goto L_11e0ca8e;
L_11e0ca1a:;
  /* 11e0ca1a cmp dword ptr [0x11e30890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ca21 je 0x11e0ca6f */
  if (C.zf) goto L_11e0ca6f;
  /* 11e0ca23 mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0ca29 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ca2a call 0x11e01410 */
  push32(0x11e0ca2fu); f_11e01410();
  /* 11e0ca2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ca32 cmp eax, dword ptr [0x11e30890] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e30890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ca38 jne 0x11e0ca6f */
  if (!C.zf) goto L_11e0ca6f;
  /* 11e0ca3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0ca3c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0ca3f push eax */
  push32((uint32_t)(EAX));
  /* 11e0ca40 call 0x11e0ced0 */
  push32(0x11e0ca45u); f_11e0ced0();
  /* 11e0ca45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ca48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ca4a je 0x11e0ca6d */
  if (C.zf) goto L_11e0ca6d;
  /* 11e0ca4c mov ecx, dword ptr [0x11e308a0] */
  ECX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0ca52 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e0ca55 mov dword ptr [0x11e308a0], ecx */
  w32((uint32_t)(0x11e308a0), (ECX));
  /* 11e0ca5b cmp dword ptr [0x11e30888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ca62 jne 0x11e0ca6d */
  if (!C.zf) goto L_11e0ca6d;
  /* 11e0ca64 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0ca67 mov dword ptr [0x11e30888], edx */
  w32((uint32_t)(0x11e30888), (EDX));
L_11e0ca6d:;
  /* 11e0ca6d jmp 0x11e0ca8e */
  goto L_11e0ca8e;
L_11e0ca6f:;
  /* 11e0ca6f mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0ca74 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e0ca77 mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
  /* 11e0ca7c cmp dword ptr [0x11e30888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ca83 jne 0x11e0ca8e */
  if (!C.zf) goto L_11e0ca8e;
  /* 11e0ca85 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0ca88 mov dword ptr [0x11e30888], ecx */
  w32((uint32_t)(0x11e30888), (ECX));
L_11e0ca8e:;
  /* 11e0ca8e jmp 0x11e0caf1 */
  goto L_11e0caf1;
L_11e0ca90:;
  /* 11e0ca90 cmp dword ptr [0x11e30894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ca97 jne 0x11e0caf1 */
  if (!C.zf) goto L_11e0caf1;
  /* 11e0ca99 cmp dword ptr [0x11e30890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0caa0 je 0x11e0caf1 */
  if (C.zf) goto L_11e0caf1;
  /* 11e0caa2 mov edx, dword ptr [0x11e30890] */
  EDX = (r32((uint32_t)(0x11e30890)));
  /* 11e0caa8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0caa9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e0caac push eax */
  push32((uint32_t)(EAX));
  /* 11e0caad mov ecx, dword ptr [0x11e30898] */
  ECX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cab4 call 0x11e0f3c0 */
  push32(0x11e0cab9u); f_11e0f3c0();
  /* 11e0cab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cabc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cabe jne 0x11e0caf1 */
  if (!C.zf) goto L_11e0caf1;
  /* 11e0cac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0cac2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cac5 push edx */
  push32((uint32_t)(EDX));
  /* 11e0cac6 call 0x11e0ced0 */
  push32(0x11e0cacbu); f_11e0ced0();
  /* 11e0cacb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cad0 je 0x11e0caf1 */
  if (C.zf) goto L_11e0caf1;
  /* 11e0cad2 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cad7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e0cada mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
  /* 11e0cadf cmp dword ptr [0x11e30888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cae6 jne 0x11e0caf1 */
  if (!C.zf) goto L_11e0caf1;
  /* 11e0cae8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0caeb mov dword ptr [0x11e30888], ecx */
  w32((uint32_t)(0x11e30888), (ECX));
L_11e0caf1:;
  /* 11e0caf1 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0caf6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0caf9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0cafb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cafd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e0cafe:;
  /* 11e0cafe mov esp, ebp */
  ESP = (EBP);
  /* 11e0cb00 pop ebp */
  EBP = (pop32());
  /* 11e0cb01 ret 4 */
  ESPCHK(0x11e0c7e0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001cb10 @ 0x11e0cb10 (116 bytes, 33 insns) */
void f_11e0cb10(void) {
  FTRACE(0x11e0cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cb11 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cb13 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cb14 mov eax, dword ptr [0x11e30898] */
  EAX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cb19 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cb1a call 0x11e01410 */
  push32(0x11e0cb1fu); f_11e01410();
  /* 11e0cb1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cb22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0cb24 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cb27 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e0cb2a mov dword ptr [0x11e30894], ecx */
  w32((uint32_t)(0x11e30894), (ECX));
  /* 11e0cb30 cmp dword ptr [0x11e30894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cb37 je 0x11e0cb42 */
  if (C.zf) goto L_11e0cb42;
  /* 11e0cb39 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e0cb40 jmp 0x11e0cb54 */
  goto L_11e0cb54;
L_11e0cb42:;
  /* 11e0cb42 mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cb48 push edx */
  push32((uint32_t)(EDX));
  /* 11e0cb49 call 0x11e0d1c0 */
  push32(0x11e0cb4eu); f_11e0d1c0();
  /* 11e0cb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cb51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0cb54:;
  /* 11e0cb54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0cb57 mov dword ptr [0x11e30890], eax */
  w32((uint32_t)(0x11e30890), (EAX));
  /* 11e0cb5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0cb5e push 0x11e0cb90 */
  push32((uint32_t)(0x11e0cb90u));
  /* 11e0cb63 call dword ptr [0x11e3331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3331c))), 0x11e0cb69u);
  /* 11e0cb69 mov ecx, dword ptr [0x11e308a0] */
  ECX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cb6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0cb72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0cb74 jne 0x11e0cb80 */
  if (!C.zf) goto L_11e0cb80;
  /* 11e0cb76 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
L_11e0cb80:;
  /* 11e0cb80 mov esp, ebp */
  ESP = (EBP);
  /* 11e0cb82 pop ebp */
  EBP = (pop32());
  /* 11e0cb83 ret  */
  ESPCHK(0x11e0cb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cb90 @ 0x11e0cb90 (287 bytes, 86 insns) */
void f_11e0cb90(void) {
  FTRACE(0x11e0cb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cb91 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cb93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cb96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0cb99 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cb9a call 0x11e0d140 */
  push32(0x11e0cb9fu); f_11e0d140();
  /* 11e0cb9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cba2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11e0cba5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e0cba7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0cbaa push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cbab mov edx, dword ptr [0x11e30894] */
  EDX = (r32((uint32_t)(0x11e30894)));
  /* 11e0cbb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0cbb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cbb5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0cbbb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cbc1 push edx */
  push32((uint32_t)(EDX));
  /* 11e0cbc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cbc5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cbc6 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0cbccu);
  /* 11e0cbcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cbce jne 0x11e0cbe4 */
  if (!C.zf) goto L_11e0cbe4;
  /* 11e0cbd0 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
  /* 11e0cbda mov eax, 1 */
  EAX = (0x1u);
  /* 11e0cbdf jmp 0x11e0cca9 */
  goto L_11e0cca9;
L_11e0cbe4:;
  /* 11e0cbe4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0cbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cbe8 mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cbee push edx */
  push32((uint32_t)(EDX));
  /* 11e0cbef call 0x11e0f2f0 */
  push32(0x11e0cbf4u); f_11e0f2f0();
  /* 11e0cbf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cbf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cbf9 jne 0x11e0cc39 */
  if (!C.zf) goto L_11e0cc39;
  /* 11e0cbfb cmp dword ptr [0x11e30894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cc02 jne 0x11e0cc16 */
  if (!C.zf) goto L_11e0cc16;
  /* 11e0cc04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0cc06 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cc09 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cc0a call 0x11e0ced0 */
  push32(0x11e0cc0fu); f_11e0ced0();
  /* 11e0cc0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cc12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cc14 je 0x11e0cc37 */
  if (C.zf) goto L_11e0cc37;
L_11e0cc16:;
  /* 11e0cc16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cc19 mov dword ptr [0x11e308a4], ecx */
  w32((uint32_t)(0x11e308a4), (ECX));
  /* 11e0cc1f mov edx, dword ptr [0x11e308a4] */
  EDX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0cc25 mov dword ptr [0x11e30888], edx */
  w32((uint32_t)(0x11e30888), (EDX));
  /* 11e0cc2b mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cc30 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11e0cc32 mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
L_11e0cc37:;
  /* 11e0cc37 jmp 0x11e0cc9c */
  goto L_11e0cc9c;
L_11e0cc39:;
  /* 11e0cc39 cmp dword ptr [0x11e30894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cc40 jne 0x11e0cc9c */
  if (!C.zf) goto L_11e0cc9c;
  /* 11e0cc42 cmp dword ptr [0x11e30890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cc49 je 0x11e0cc9c */
  if (C.zf) goto L_11e0cc9c;
  /* 11e0cc4b mov ecx, dword ptr [0x11e30890] */
  ECX = (r32((uint32_t)(0x11e30890)));
  /* 11e0cc51 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cc52 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11e0cc55 push edx */
  push32((uint32_t)(EDX));
  /* 11e0cc56 mov eax, dword ptr [0x11e30898] */
  EAX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cc5b push eax */
  push32((uint32_t)(EAX));
  /* 11e0cc5c call 0x11e0f3c0 */
  push32(0x11e0cc61u); f_11e0f3c0();
  /* 11e0cc61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cc64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cc66 jne 0x11e0cc9c */
  if (!C.zf) goto L_11e0cc9c;
  /* 11e0cc68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0cc6a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cc6d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cc6e call 0x11e0ced0 */
  push32(0x11e0cc73u); f_11e0ced0();
  /* 11e0cc73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cc76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cc78 je 0x11e0cc9c */
  if (C.zf) goto L_11e0cc9c;
  /* 11e0cc7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cc7d mov dword ptr [0x11e308a4], edx */
  w32((uint32_t)(0x11e308a4), (EDX));
  /* 11e0cc83 mov eax, dword ptr [0x11e308a4] */
  EAX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0cc88 mov dword ptr [0x11e30888], eax */
  w32((uint32_t)(0x11e30888), (EAX));
  /* 11e0cc8d mov ecx, dword ptr [0x11e308a0] */
  ECX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cc93 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0cc96 mov dword ptr [0x11e308a0], ecx */
  w32((uint32_t)(0x11e308a0), (ECX));
L_11e0cc9c:;
  /* 11e0cc9c mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cca1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cca4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0cca6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cca8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e0cca9:;
  /* 11e0cca9 mov esp, ebp */
  ESP = (EBP);
  /* 11e0ccab pop ebp */
  EBP = (pop32());
  /* 11e0ccac ret 4 */
  ESPCHK(0x11e0cb90u, _esp0);
  ESP += 8; return;
}

/* FUN_1001ccb0 @ 0x11e0ccb0 (69 bytes, 20 insns) */
void f_11e0ccb0(void) {
  FTRACE(0x11e0ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ccb3 mov eax, dword ptr [0x11e3089c] */
  EAX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0ccb8 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ccb9 call 0x11e01410 */
  push32(0x11e0ccbeu); f_11e01410();
  /* 11e0ccbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ccc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ccc3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ccc6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e0ccc9 mov dword ptr [0x11e3088c], ecx */
  w32((uint32_t)(0x11e3088c), (ECX));
  /* 11e0cccf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0ccd1 push 0x11e0cd00 */
  push32((uint32_t)(0x11e0cd00u));
  /* 11e0ccd6 call dword ptr [0x11e3331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3331c))), 0x11e0ccdcu);
  /* 11e0ccdc mov edx, dword ptr [0x11e308a0] */
  EDX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cce2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0cce5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0cce7 jne 0x11e0ccf3 */
  if (!C.zf) goto L_11e0ccf3;
  /* 11e0cce9 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
L_11e0ccf3:;
  /* 11e0ccf3 pop ebp */
  EBP = (pop32());
  /* 11e0ccf4 ret  */
  ESPCHK(0x11e0ccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cd00 @ 0x11e0cd00 (172 bytes, 54 insns) */
void f_11e0cd00(void) {
  FTRACE(0x11e0cd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cd01 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cd03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cd06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0cd09 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cd0a call 0x11e0d140 */
  push32(0x11e0cd0fu); f_11e0d140();
  /* 11e0cd0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cd12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11e0cd15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e0cd17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0cd1a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cd1b mov edx, dword ptr [0x11e3088c] */
  EDX = (r32((uint32_t)(0x11e3088c)));
  /* 11e0cd21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0cd23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cd25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0cd2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cd31 push edx */
  push32((uint32_t)(EDX));
  /* 11e0cd32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cd35 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cd36 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0cd3cu);
  /* 11e0cd3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cd3e jne 0x11e0cd51 */
  if (!C.zf) goto L_11e0cd51;
  /* 11e0cd40 mov dword ptr [0x11e308a0], 0 */
  w32((uint32_t)(0x11e308a0), (0x0u));
  /* 11e0cd4a mov eax, 1 */
  EAX = (0x1u);
  /* 11e0cd4f jmp 0x11e0cda6 */
  goto L_11e0cda6;
L_11e0cd51:;
  /* 11e0cd51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e0cd54 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cd55 mov edx, dword ptr [0x11e3089c] */
  EDX = (r32((uint32_t)(0x11e3089c)));
  /* 11e0cd5b push edx */
  push32((uint32_t)(EDX));
  /* 11e0cd5c call 0x11e0f2f0 */
  push32(0x11e0cd61u); f_11e0f2f0();
  /* 11e0cd61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cd64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cd66 jne 0x11e0cd99 */
  if (!C.zf) goto L_11e0cd99;
  /* 11e0cd68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cd6b push eax */
  push32((uint32_t)(EAX));
  /* 11e0cd6c call 0x11e0ce80 */
  push32(0x11e0cd71u); f_11e0ce80();
  /* 11e0cd71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cd74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cd76 je 0x11e0cd99 */
  if (C.zf) goto L_11e0cd99;
  /* 11e0cd78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e0cd7b mov dword ptr [0x11e308a4], ecx */
  w32((uint32_t)(0x11e308a4), (ECX));
  /* 11e0cd81 mov edx, dword ptr [0x11e308a4] */
  EDX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0cd87 mov dword ptr [0x11e30888], edx */
  w32((uint32_t)(0x11e30888), (EDX));
  /* 11e0cd8d mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cd92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11e0cd94 mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
L_11e0cd99:;
  /* 11e0cd99 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cd9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cda1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0cda3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cda5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e0cda6:;
  /* 11e0cda6 mov esp, ebp */
  ESP = (EBP);
  /* 11e0cda8 pop ebp */
  EBP = (pop32());
  /* 11e0cda9 ret 4 */
  ESPCHK(0x11e0cd00u, _esp0);
  ESP += 8; return;
}

/* FUN_1001cdb0 @ 0x11e0cdb0 (43 bytes, 11 insns) */
void f_11e0cdb0(void) {
  FTRACE(0x11e0cdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cdb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cdb3 mov eax, dword ptr [0x11e308a0] */
  EAX = (r32((uint32_t)(0x11e308a0)));
  /* 11e0cdb8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cdbd mov dword ptr [0x11e308a0], eax */
  w32((uint32_t)(0x11e308a0), (EAX));
  /* 11e0cdc2 call dword ptr [0x11e33318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33318))), 0x11e0cdc8u);
  /* 11e0cdc8 mov dword ptr [0x11e308a4], eax */
  w32((uint32_t)(0x11e308a4), (EAX));
  /* 11e0cdcd mov ecx, dword ptr [0x11e308a4] */
  ECX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0cdd3 mov dword ptr [0x11e30888], ecx */
  w32((uint32_t)(0x11e30888), (ECX));
  /* 11e0cdd9 pop ebp */
  EBP = (pop32());
  /* 11e0cdda ret  */
  ESPCHK(0x11e0cdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cde0 @ 0x11e0cde0 (155 bytes, 57 insns) */
void f_11e0cde0(void) {
  FTRACE(0x11e0cde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cde0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cde1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cde3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cde6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cdea je 0x11e0ce0b */
  if (C.zf) goto L_11e0ce0b;
  /* 11e0cdec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0cdef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0cdf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0cdf4 je 0x11e0ce0b */
  if (C.zf) goto L_11e0ce0b;
  /* 11e0cdf6 push 0x11e2bb20 */
  push32((uint32_t)(0x11e2bb20u));
  /* 11e0cdfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0cdfe push edx */
  push32((uint32_t)(EDX));
  /* 11e0cdff call 0x11e05920 */
  push32(0x11e0ce04u); f_11e05920();
  /* 11e0ce04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ce07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ce09 jne 0x11e0ce33 */
  if (!C.zf) goto L_11e0ce33;
L_11e0ce0b:;
  /* 11e0ce0b push 8 */
  push32((uint32_t)(0x8u));
  /* 11e0ce0d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e0ce10 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ce11 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11e0ce16 mov ecx, dword ptr [0x11e308a4] */
  ECX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0ce1c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ce1d call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0ce23u);
  /* 11e0ce23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ce25 jne 0x11e0ce2b */
  if (!C.zf) goto L_11e0ce2b;
  /* 11e0ce27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ce29 jmp 0x11e0ce77 */
  goto L_11e0ce77;
L_11e0ce2b:;
  /* 11e0ce2b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11e0ce2e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e0ce31 jmp 0x11e0ce6b */
  goto L_11e0ce6b;
L_11e0ce33:;
  /* 11e0ce33 push 0x11e2bb1c */
  push32((uint32_t)(0x11e2bb1cu));
  /* 11e0ce38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ce3b push eax */
  push32((uint32_t)(EAX));
  /* 11e0ce3c call 0x11e05920 */
  push32(0x11e0ce41u); f_11e05920();
  /* 11e0ce41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ce44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ce46 jne 0x11e0ce6b */
  if (!C.zf) goto L_11e0ce6b;
  /* 11e0ce48 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e0ce4a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11e0ce4d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ce4e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0ce50 mov edx, dword ptr [0x11e308a4] */
  EDX = (r32((uint32_t)(0x11e308a4)));
  /* 11e0ce56 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ce57 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0ce5du);
  /* 11e0ce5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ce5f jne 0x11e0ce65 */
  if (!C.zf) goto L_11e0ce65;
  /* 11e0ce61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ce63 jmp 0x11e0ce77 */
  goto L_11e0ce77;
L_11e0ce65:;
  /* 11e0ce65 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e0ce68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e0ce6b:;
  /* 11e0ce6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ce6e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ce6f call 0x11e0f4d0 */
  push32(0x11e0ce74u); f_11e0f4d0();
  /* 11e0ce74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0ce77:;
  /* 11e0ce77 mov esp, ebp */
  ESP = (EBP);
  /* 11e0ce79 pop ebp */
  EBP = (pop32());
  /* 11e0ce7a ret  */
  ESPCHK(0x11e0cde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ce80 @ 0x11e0ce80 (79 bytes, 26 insns) */
void f_11e0ce80(void) {
  FTRACE(0x11e0ce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ce80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ce81 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ce83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ce86 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11e0ce8a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e0ce8e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0ce95 jmp 0x11e0cea0 */
  goto L_11e0cea0;
L_11e0ce97:;
  /* 11e0ce97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0ce9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ce9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e0cea0:;
  /* 11e0cea0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cea4 jae 0x11e0cec6 */
  if (!C.cf) goto L_11e0cec6;
  /* 11e0cea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0cea9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ceaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0ceb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ceb4 mov cx, word ptr [eax*2 + 0x11e2eef4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11e2eef4)));
  /* 11e0cebc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cebe jne 0x11e0cec4 */
  if (!C.zf) goto L_11e0cec4;
  /* 11e0cec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cec2 jmp 0x11e0cecb */
  goto L_11e0cecb;
L_11e0cec4:;
  /* 11e0cec4 jmp 0x11e0ce97 */
  goto L_11e0ce97;
L_11e0cec6:;
  /* 11e0cec6 mov eax, 1 */
  EAX = (0x1u);
L_11e0cecb:;
  /* 11e0cecb mov esp, ebp */
  ESP = (EBP);
  /* 11e0cecd pop ebp */
  EBP = (pop32());
  /* 11e0cece ret  */
  ESPCHK(0x11e0ce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ced0 @ 0x11e0ced0 (135 bytes, 48 insns) */
void f_11e0ced0(void) {
  FTRACE(0x11e0ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ced1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ced3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ced6 push esi */
  push32((uint32_t)(ESI));
  /* 11e0ced7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ceda and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cedf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cee4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cee9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11e0ceec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cef1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0cef4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e0cef6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11e0cef9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cefa push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0cefc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ceff push edx */
  push32((uint32_t)(EDX));
  /* 11e0cf00 call dword ptr [0x11e308a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e308a8))), 0x11e0cf06u);
  /* 11e0cf06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cf08 jne 0x11e0cf0e */
  if (!C.zf) goto L_11e0cf0e;
  /* 11e0cf0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cf0c jmp 0x11e0cf52 */
  goto L_11e0cf52;
L_11e0cf0e:;
  /* 11e0cf0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11e0cf11 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cf12 call 0x11e0d140 */
  push32(0x11e0cf17u); f_11e0d140();
  /* 11e0cf17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cf1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cf1d je 0x11e0cf4d */
  if (C.zf) goto L_11e0cf4d;
  /* 11e0cf1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cf23 je 0x11e0cf4d */
  if (C.zf) goto L_11e0cf4d;
  /* 11e0cf25 mov ecx, dword ptr [0x11e30898] */
  ECX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cf2b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0cf2c call 0x11e0d1c0 */
  push32(0x11e0cf31u); f_11e0d1c0();
  /* 11e0cf31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cf34 mov esi, eax */
  ESI = (EAX);
  /* 11e0cf36 mov edx, dword ptr [0x11e30898] */
  EDX = (r32((uint32_t)(0x11e30898)));
  /* 11e0cf3c push edx */
  push32((uint32_t)(EDX));
  /* 11e0cf3d call 0x11e01410 */
  push32(0x11e0cf42u); f_11e01410();
  /* 11e0cf42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cf45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cf47 jne 0x11e0cf4d */
  if (!C.zf) goto L_11e0cf4d;
  /* 11e0cf49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0cf4b jmp 0x11e0cf52 */
  goto L_11e0cf52;
L_11e0cf4d:;
  /* 11e0cf4d mov eax, 1 */
  EAX = (0x1u);
L_11e0cf52:;
  /* 11e0cf52 pop esi */
  ESI = (pop32());
  /* 11e0cf53 mov esp, ebp */
  ESP = (EBP);
  /* 11e0cf55 pop ebp */
  EBP = (pop32());
  /* 11e0cf56 ret  */
  ESPCHK(0x11e0ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf60 @ 0x11e0cf60 (77 bytes, 18 insns) */
void f_11e0cf60(void) {
  FTRACE(0x11e0cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cf61 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cf63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cf69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11e0cf73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11e0cf79 push eax */
  push32((uint32_t)(EAX));
  /* 11e0cf7a call dword ptr [0x11e33314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33314))), 0x11e0cf80u);
  /* 11e0cf80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0cf82 je 0x11e0cf99 */
  if (C.zf) goto L_11e0cf99;
  /* 11e0cf84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cf8b jne 0x11e0cf99 */
  if (!C.zf) goto L_11e0cf99;
  /* 11e0cf8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11e0cf97 jmp 0x11e0cfa3 */
  goto L_11e0cfa3;
L_11e0cf99:;
  /* 11e0cf99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11e0cfa3:;
  /* 11e0cfa3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11e0cfa9 mov esp, ebp */
  ESP = (EBP);
  /* 11e0cfab pop ebp */
  EBP = (pop32());
  /* 11e0cfac ret  */
  ESPCHK(0x11e0cf60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11e0cfb0 (388 bytes, 118 insns) */
void f_11e0cfb0(void) {
  FTRACE(0x11e0cfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0cfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0cfb1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0cfb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cfb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0cfbd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11e0cfc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e0cfcb:;
  /* 11e0cfcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0cfce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cfd1 jg 0x11e0d118 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d118;
  /* 11e0cfd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0cfda add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0cfdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0cfde sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0cfe0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e0cfe2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0cfe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0cfe8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0cfeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0cfee cmp edx, dword ptr [ecx + 0x11e2ea50] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11e2ea50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0cff4 jne 0x11e0d0ee */
  if (!C.zf) goto L_11e0d0ee;
  /* 11e0cffa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0cffd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0d000 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d004 ja 0x11e0d027 */
  if ((!C.cf&&!C.zf)) goto L_11e0d027;
  /* 11e0d006 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d00a je 0x11e0d099 */
  if (C.zf) goto L_11e0d099;
  /* 11e0d010 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d014 je 0x11e0d044 */
  if (C.zf) goto L_11e0d044;
  /* 11e0d016 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d01a je 0x11e0d066 */
  if (C.zf) goto L_11e0d066;
  /* 11e0d01c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d020 je 0x11e0d088 */
  if (C.zf) goto L_11e0d088;
  /* 11e0d022 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d027:;
  /* 11e0d027 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d02e je 0x11e0d055 */
  if (C.zf) goto L_11e0d055;
  /* 11e0d030 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d037 je 0x11e0d077 */
  if (C.zf) goto L_11e0d077;
  /* 11e0d039 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d040 je 0x11e0d0aa */
  if (C.zf) goto L_11e0d0aa;
  /* 11e0d042 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d044:;
  /* 11e0d044 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d047 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d04a add ecx, 0x11e2ea54 */
  { uint32_t _a=(ECX),_b=(0x11e2ea54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d050 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0d053 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d055:;
  /* 11e0d055 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d058 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d05b mov eax, dword ptr [edx + 0x11e2ea5c] */
  EAX = (r32((uint32_t)(EDX + 0x11e2ea5c)));
  /* 11e0d061 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0d064 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d066:;
  /* 11e0d066 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d069 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d06c add ecx, 0x11e2ea60 */
  { uint32_t _a=(ECX),_b=(0x11e2ea60u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d072 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0d075 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d077:;
  /* 11e0d077 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d07a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d07d mov eax, dword ptr [edx + 0x11e2ea64] */
  EAX = (r32((uint32_t)(EDX + 0x11e2ea64)));
  /* 11e0d083 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0d086 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d088:;
  /* 11e0d088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d08b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d08e add ecx, 0x11e2ea68 */
  { uint32_t _a=(ECX),_b=(0x11e2ea68u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d094 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0d097 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d099:;
  /* 11e0d099 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d09c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d09f add edx, 0x11e2ea6c */
  { uint32_t _a=(EDX),_b=(0x11e2ea6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d0a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0d0a8 jmp 0x11e0d0b8 */
  goto L_11e0d0b8;
L_11e0d0aa:;
  /* 11e0d0aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d0ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d0b0 add eax, 0x11e2ea74 */
  { uint32_t _a=(EAX),_b=(0x11e2ea74u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d0b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e0d0b8:;
  /* 11e0d0b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d0bc je 0x11e0d0c4 */
  if (C.zf) goto L_11e0d0c4;
  /* 11e0d0be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d0c2 jge 0x11e0d0c6 */
  if ((C.sf==C.of)) goto L_11e0d0c6;
L_11e0d0c4:;
  /* 11e0d0c4 jmp 0x11e0d118 */
  goto L_11e0d118;
L_11e0d0c6:;
  /* 11e0d0c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0d0c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d0cc push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d0cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d0d0 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d0d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0d0d4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0d0d5 call 0x11e01e00 */
  push32(0x11e0d0dau); f_11e01e00();
  /* 11e0d0da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d0dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0d0e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d0e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11e0d0e7 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0d0ec jmp 0x11e0d12e */
  goto L_11e0d12e;
L_11e0d0ee:;
  /* 11e0d0ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d0f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d0f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d0f7 cmp eax, dword ptr [edx + 0x11e2ea50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11e2ea50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d0fd jae 0x11e0d10a */
  if (!C.cf) goto L_11e0d10a;
  /* 11e0d0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d102 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d105 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0d108 jmp 0x11e0d113 */
  goto L_11e0d113;
L_11e0d10a:;
  /* 11e0d10a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d10d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d110 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0d113:;
  /* 11e0d113 jmp 0x11e0cfcb */
  goto L_11e0cfcb;
L_11e0d118:;
  /* 11e0d118 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0d11b push eax */
  push32((uint32_t)(EAX));
  /* 11e0d11c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0d11f push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d120 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d123 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d127 push eax */
  push32((uint32_t)(EAX));
  /* 11e0d128 call dword ptr [0x11e33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33320))), 0x11e0d12eu);
L_11e0d12e:;
  /* 11e0d12e mov esp, ebp */
  ESP = (EBP);
  /* 11e0d130 pop ebp */
  EBP = (pop32());
  /* 11e0d131 ret 0x10 */
  ESPCHK(0x11e0cfb0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001d140 @ 0x11e0d140 (118 bytes, 42 insns) */
void f_11e0d140(void) {
  FTRACE(0x11e0d140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d140 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d141 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d146 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e0d14d:;
  /* 11e0d14d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d150 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0d152 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11e0d155 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0d159 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d15c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d15f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0d162 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0d164 je 0x11e0d1af */
  if (C.zf) goto L_11e0d1af;
  /* 11e0d166 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0d16a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d16d jl 0x11e0d182 */
  if ((C.sf!=C.of)) goto L_11e0d182;
  /* 11e0d16f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0d173 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d176 jg 0x11e0d182 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d182;
  /* 11e0d178 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11e0d17b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0d17d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11e0d180 jmp 0x11e0d19c */
  goto L_11e0d19c;
L_11e0d182:;
  /* 11e0d182 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0d186 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d189 jl 0x11e0d19c */
  if ((C.sf!=C.of)) goto L_11e0d19c;
  /* 11e0d18b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0d18f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d192 jg 0x11e0d19c */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d19c;
  /* 11e0d194 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11e0d197 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0d199 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11e0d19c:;
  /* 11e0d19c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d19f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e0d1a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0d1a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11e0d1aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0d1ad jmp 0x11e0d14d */
  goto L_11e0d14d;
L_11e0d1af:;
  /* 11e0d1af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d1b2 mov esp, ebp */
  ESP = (EBP);
  /* 11e0d1b4 pop ebp */
  EBP = (pop32());
  /* 11e0d1b5 ret  */
  ESPCHK(0x11e0d140u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11e0d1c0 (101 bytes, 36 insns) */
void f_11e0d1c0(void) {
  FTRACE(0x11e0d1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d1c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d1c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0d1cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d1d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0d1d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11e0d1d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d1d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d1db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11e0d1de:;
  /* 11e0d1de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e0d1e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d1e5 jl 0x11e0d1f0 */
  if ((C.sf!=C.of)) goto L_11e0d1f0;
  /* 11e0d1e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e0d1eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d1ee jle 0x11e0d202 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0d202;
L_11e0d1f0:;
  /* 11e0d1f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e0d1f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d1f7 jl 0x11e0d21e */
  if ((C.sf!=C.of)) goto L_11e0d21e;
  /* 11e0d1f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e0d1fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d200 jg 0x11e0d21e */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d21e;
L_11e0d202:;
  /* 11e0d202 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d205 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d208 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0d20b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d20e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0d210 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11e0d213 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d216 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d219 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e0d21c jmp 0x11e0d1de */
  goto L_11e0d1de;
L_11e0d21e:;
  /* 11e0d21e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d221 mov esp, ebp */
  ESP = (EBP);
  /* 11e0d223 pop ebp */
  EBP = (pop32());
  /* 11e0d224 ret  */
  ESPCHK(0x11e0d1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d230 @ 0x11e0d230 (1085 bytes, 299 insns) */
void f_11e0d230(void) {
  FTRACE(0x11e0d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d230 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d231 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d233 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d236 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11e0d23c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0d243 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11e0d24a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0d251 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0d258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d25b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11e0d25f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11e0d263 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d266 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11e0d26a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11e0d26e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0d271 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d277 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0d27a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d280 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d282 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d288 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11e0d28c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11e0d290 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11e0d294 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11e0d298 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11e0d29c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11e0d2a1 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11e0d2a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0d2a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d2ae mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0d2b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d2b6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d2b8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11e0d2bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0d2bf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d2c5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d2cb jge 0x11e0d2ed */
  if ((C.sf==C.of)) goto L_11e0d2ed;
  /* 11e0d2cd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0d2d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d2d6 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d2dc jge 0x11e0d2ed */
  if ((C.sf==C.of)) goto L_11e0d2ed;
  /* 11e0d2de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0d2e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d2e6 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d2eb jle 0x11e0d324 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0d324;
L_11e0d2ed:;
  /* 11e0d2ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0d2f0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d2f6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0d2f8 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d2fa and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d300 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d306 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d309 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11e0d30c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d30f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11e0d316 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d319 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11e0d31f jmp 0x11e0d669 */
  goto L_11e0d669;
L_11e0d324:;
  /* 11e0d324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0d327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d32d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d333 jg 0x11e0d357 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d357;
  /* 11e0d335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d338 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11e0d33f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d342 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e0d349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d34c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11e0d352 jmp 0x11e0d669 */
  goto L_11e0d669;
L_11e0d357:;
  /* 11e0d357 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0d35a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d35f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d361 jne 0x11e0d39d */
  if (!C.zf) goto L_11e0d39d;
  /* 11e0d363 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d367 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0d36b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11e0d36f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d372 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0d375 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d37a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d37c jne 0x11e0d39d */
  if (!C.zf) goto L_11e0d39d;
  /* 11e0d37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d381 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d385 jne 0x11e0d39d */
  if (!C.zf) goto L_11e0d39d;
  /* 11e0d387 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d38a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d38d jne 0x11e0d39d */
  if (!C.zf) goto L_11e0d39d;
  /* 11e0d38f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d392 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11e0d398 jmp 0x11e0d669 */
  goto L_11e0d669;
L_11e0d39d:;
  /* 11e0d39d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0d3a0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d3a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d3a8 jne 0x11e0d3f9 */
  if (!C.zf) goto L_11e0d3f9;
  /* 11e0d3aa mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d3ae add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0d3b2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11e0d3b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d3b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0d3bc and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d3c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d3c4 jne 0x11e0d3f9 */
  if (!C.zf) goto L_11e0d3f9;
  /* 11e0d3c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d3c9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d3cd jne 0x11e0d3f9 */
  if (!C.zf) goto L_11e0d3f9;
  /* 11e0d3cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d3d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d3d5 jne 0x11e0d3f9 */
  if (!C.zf) goto L_11e0d3f9;
  /* 11e0d3d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d3da mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11e0d3e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d3e4 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11e0d3eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d3ee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0d3f4 jmp 0x11e0d669 */
  goto L_11e0d669;
L_11e0d3f9:;
  /* 11e0d3f9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11e0d400 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11e0d407 jmp 0x11e0d412 */
  goto L_11e0d412;
L_11e0d409:;
  /* 11e0d409 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0d40c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d40f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11e0d412:;
  /* 11e0d412 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d416 jge 0x11e0d4d1 */
  if ((C.sf==C.of)) goto L_11e0d4d1;
  /* 11e0d41c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0d41f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11e0d421 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e0d424 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11e0d42b mov eax, 5 */
  EAX = (0x5u);
  /* 11e0d430 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d433 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11e0d436 jmp 0x11e0d441 */
  goto L_11e0d441;
L_11e0d438:;
  /* 11e0d438 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e0d43b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d43e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11e0d441:;
  /* 11e0d441 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d445 jle 0x11e0d4c3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0d4c3;
  /* 11e0d447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d44a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d44d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11e0d450 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d453 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d456 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11e0d459 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0d45c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11e0d460 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11e0d463 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11e0d466 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d468 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11e0d46b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11e0d46e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d470 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11e0d473 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d476 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11e0d479 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e0d47c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d47d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e0d480 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d481 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e0d484 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0d486 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d487 call 0x11e08f60 */
  push32(0x11e0d48cu); f_11e08f60();
  /* 11e0d48c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d48f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11e0d492 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d496 je 0x11e0d4ac */
  if (C.zf) goto L_11e0d4ac;
  /* 11e0d498 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0d49b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11e0d4a0 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0d4a4 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0d4a7 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11e0d4ac:;
  /* 11e0d4ac mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0d4af add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d4b2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11e0d4b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d4b8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d4bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0d4be jmp 0x11e0d438 */
  goto L_11e0d438;
L_11e0d4c3:;
  /* 11e0d4c3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0d4c6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d4c9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e0d4cc jmp 0x11e0d409 */
  goto L_11e0d409;
L_11e0d4d1:;
  /* 11e0d4d1 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d4d5 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e0d4da mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11e0d4de:;
  /* 11e0d4de movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11e0d4e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d4e4 jle 0x11e0d50d */
  if ((C.zf||C.sf!=C.of)) goto L_11e0d50d;
  /* 11e0d4e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d4e9 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d4ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d4f1 jne 0x11e0d50d */
  if (!C.zf) goto L_11e0d50d;
  /* 11e0d4f3 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11e0d4f6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d4f7 call 0x11e09050 */
  push32(0x11e0d4fcu); f_11e09050();
  /* 11e0d4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d4ff mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d503 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e0d507 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11e0d50b jmp 0x11e0d4de */
  goto L_11e0d4de;
L_11e0d50d:;
  /* 11e0d50d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11e0d511 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d513 jg 0x11e0d56d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d56d;
  /* 11e0d515 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d519 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11e0d51d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11e0d521:;
  /* 11e0d521 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11e0d525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d527 jge 0x11e0d55c */
  if ((C.sf==C.of)) goto L_11e0d55c;
  /* 11e0d529 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0d52c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d532 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d535 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d537 je 0x11e0d542 */
  if (C.zf) goto L_11e0d542;
  /* 11e0d539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d53c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d53f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0d542:;
  /* 11e0d542 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11e0d545 push eax */
  push32((uint32_t)(EAX));
  /* 11e0d546 call 0x11e090b0 */
  push32(0x11e0d54bu); f_11e090b0();
  /* 11e0d54b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d54e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d552 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0d556 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11e0d55a jmp 0x11e0d521 */
  goto L_11e0d521;
L_11e0d55c:;
  /* 11e0d55c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d560 je 0x11e0d56d */
  if (C.zf) goto L_11e0d56d;
  /* 11e0d562 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11e0d566 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11e0d569 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11e0d56d:;
  /* 11e0d56d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0d570 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d575 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d57a jg 0x11e0d58d */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0d58d;
  /* 11e0d57c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0d57f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d585 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d58b jne 0x11e0d5ee */
  if (!C.zf) goto L_11e0d5ee;
L_11e0d58d:;
  /* 11e0d58d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d591 jne 0x11e0d5e5 */
  if (!C.zf) goto L_11e0d5e5;
  /* 11e0d593 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11e0d59a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d59e jne 0x11e0d5da */
  if (!C.zf) goto L_11e0d5da;
  /* 11e0d5a0 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11e0d5a7 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11e0d5aa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d5b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d5b6 jne 0x11e0d5cc */
  if (!C.zf) goto L_11e0d5cc;
  /* 11e0d5b8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11e0d5be mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11e0d5c2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0d5c6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11e0d5ca jmp 0x11e0d5d8 */
  goto L_11e0d5d8;
L_11e0d5cc:;
  /* 11e0d5cc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11e0d5d0 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11e0d5d4 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11e0d5d8:;
  /* 11e0d5d8 jmp 0x11e0d5e3 */
  goto L_11e0d5e3;
L_11e0d5da:;
  /* 11e0d5da mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11e0d5dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d5e0 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11e0d5e3:;
  /* 11e0d5e3 jmp 0x11e0d5ee */
  goto L_11e0d5ee;
L_11e0d5e5:;
  /* 11e0d5e5 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11e0d5e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d5eb mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11e0d5ee:;
  /* 11e0d5ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0d5f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d5f7 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d5fd jl 0x11e0d633 */
  if ((C.sf!=C.of)) goto L_11e0d633;
  /* 11e0d5ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0d602 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d608 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0d60a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d60c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d612 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d61b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11e0d61e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d621 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11e0d628 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d62b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11e0d631 jmp 0x11e0d669 */
  goto L_11e0d669;
L_11e0d633:;
  /* 11e0d633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d636 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11e0d63a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11e0d63d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d640 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0d643 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11e0d646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d649 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d64c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11e0d64f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0d652 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d657 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0d65a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d660 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d665 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11e0d669:;
  /* 11e0d669 mov esp, ebp */
  ESP = (EBP);
  /* 11e0d66b pop ebp */
  EBP = (pop32());
  /* 11e0d66c ret  */
  ESPCHK(0x11e0d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d670 @ 0x11e0d670 (195 bytes, 67 insns) */
void f_11e0d670(void) {
  FTRACE(0x11e0d670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d670 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d671 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d673 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d676 mov eax, 0x11e2f2c0 */
  EAX = (0x11e2f2c0u);
  /* 11e0d67b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d67e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0d681 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d685 jne 0x11e0d68c */
  if (!C.zf) goto L_11e0d68c;
  /* 11e0d687 jmp 0x11e0d72f */
  goto L_11e0d72f;
L_11e0d68c:;
  /* 11e0d68c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d690 jge 0x11e0d6a5 */
  if ((C.sf==C.of)) goto L_11e0d6a5;
  /* 11e0d692 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d695 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0d697 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e0d69a mov edx, 0x11e2f420 */
  EDX = (0x11e2f420u);
  /* 11e0d69f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d6a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0d6a5:;
  /* 11e0d6a5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d6a9 jne 0x11e0d6b3 */
  if (!C.zf) goto L_11e0d6b3;
  /* 11e0d6ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d6ae mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11e0d6b3:;
  /* 11e0d6b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d6b7 je 0x11e0d72f */
  if (C.zf) goto L_11e0d72f;
  /* 11e0d6b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d6bc add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d6bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0d6c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d6c5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d6c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e0d6cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0d6ce sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11e0d6d1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11e0d6d4 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d6d8 jne 0x11e0d6dc */
  if (!C.zf) goto L_11e0d6dc;
  /* 11e0d6da jmp 0x11e0d6b3 */
  goto L_11e0d6b3;
L_11e0d6dc:;
  /* 11e0d6dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0d6df imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d6e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d6e5 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d6e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0d6ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d6ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d6ef mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11e0d6f2 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d6f8 jl 0x11e0d71d */
  if ((C.sf!=C.of)) goto L_11e0d71d;
  /* 11e0d6fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d6fd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0d6ff mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0d702 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11e0d705 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e0d708 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0d70b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e0d70e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11e0d711 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d714 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11e0d717 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11e0d71a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e0d71d:;
  /* 11e0d71d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d720 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d724 push eax */
  push32((uint32_t)(EAX));
  /* 11e0d725 call 0x11e0d230 */
  push32(0x11e0d72au); f_11e0d230();
  /* 11e0d72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d72d jmp 0x11e0d6b3 */
  goto L_11e0d6b3;
L_11e0d72f:;
  /* 11e0d72f mov esp, ebp */
  ESP = (EBP);
  /* 11e0d731 pop ebp */
  EBP = (pop32());
  /* 11e0d732 ret  */
  ESPCHK(0x11e0d670u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d740 @ 0x11e0d740 (130 bytes, 50 insns) */
void f_11e0d740(void) {
  FTRACE(0x11e0d740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d740 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d741 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d743 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d744 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0d745 push esi */
  push32((uint32_t)(ESI));
  /* 11e0d746 push edi */
  push32((uint32_t)(EDI));
  /* 11e0d747 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e0d74e:;
  /* 11e0d74e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d752 jne 0x11e0d772 */
  if (!C.zf) goto L_11e0d772;
  /* 11e0d754 push 0x11e2bb30 */
  push32((uint32_t)(0x11e2bb30u));
  /* 11e0d759 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0d75b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11e0d75d push 0x11e2bb24 */
  push32((uint32_t)(0x11e2bb24u));
  /* 11e0d762 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0d764 call 0x11dfaa10 */
  push32(0x11e0d769u); f_11dfaa10();
  /* 11e0d769 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d76c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d76f jne 0x11e0d772 */
  if (!C.zf) goto L_11e0d772;
  /* 11e0d771 int3  */
  x86_unimpl("int3 @ 0x11e0d771");
L_11e0d772:;
  /* 11e0d772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d776 jne 0x11e0d74e */
  if (!C.zf) goto L_11e0d74e;
  /* 11e0d778 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d77b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0d77e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0d783 je 0x11e0d791 */
  if (C.zf) goto L_11e0d791;
  /* 11e0d785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d788 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11e0d78f jmp 0x11e0d7b8 */
  goto L_11e0d7b8;
L_11e0d791:;
  /* 11e0d791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d794 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d795 call 0x11e06390 */
  push32(0x11e0d79au); f_11e06390();
  /* 11e0d79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d7a0 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d7a1 call 0x11e0d7d0 */
  push32(0x11e0d7a6u); f_11e0d7d0();
  /* 11e0d7a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d7a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0d7ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d7af push eax */
  push32((uint32_t)(EAX));
  /* 11e0d7b0 call 0x11e06400 */
  push32(0x11e0d7b5u); f_11e06400();
  /* 11e0d7b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0d7b8:;
  /* 11e0d7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d7bb pop edi */
  EDI = (pop32());
  /* 11e0d7bc pop esi */
  ESI = (pop32());
  /* 11e0d7bd pop ebx */
  EBX = (pop32());
  /* 11e0d7be mov esp, ebp */
  ESP = (EBP);
  /* 11e0d7c0 pop ebp */
  EBP = (pop32());
  /* 11e0d7c1 ret  */
  ESPCHK(0x11e0d740u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d7d0 @ 0x11e0d7d0 (190 bytes, 67 insns) */
void f_11e0d7d0(void) {
  FTRACE(0x11e0d7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d7d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0d7d7 push esi */
  push32((uint32_t)(ESI));
  /* 11e0d7d8 push edi */
  push32((uint32_t)(EDI));
  /* 11e0d7d9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e0d7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d7e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e0d7e6:;
  /* 11e0d7e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d7ea jne 0x11e0d80a */
  if (!C.zf) goto L_11e0d80a;
  /* 11e0d7ec push 0x11e2af04 */
  push32((uint32_t)(0x11e2af04u));
  /* 11e0d7f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0d7f3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11e0d7f5 push 0x11e2bb24 */
  push32((uint32_t)(0x11e2bb24u));
  /* 11e0d7fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0d7fc call 0x11dfaa10 */
  push32(0x11e0d801u); f_11dfaa10();
  /* 11e0d801 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d804 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d807 jne 0x11e0d80a */
  if (!C.zf) goto L_11e0d80a;
  /* 11e0d809 int3  */
  x86_unimpl("int3 @ 0x11e0d809");
L_11e0d80a:;
  /* 11e0d80a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d80c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d80e jne 0x11e0d7e6 */
  if (!C.zf) goto L_11e0d7e6;
  /* 11e0d810 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d813 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11e0d816 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d81b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d81d je 0x11e0d87a */
  if (C.zf) goto L_11e0d87a;
  /* 11e0d81f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d822 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d823 call 0x11e0aa50 */
  push32(0x11e0d828u); f_11e0aa50();
  /* 11e0d828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d82b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0d82e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d831 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d832 call 0x11e0f850 */
  push32(0x11e0d837u); f_11e0f850();
  /* 11e0d837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d83a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d83d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0d840 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d841 call 0x11e0f720 */
  push32(0x11e0d846u); f_11e0f720();
  /* 11e0d846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d84b jge 0x11e0d856 */
  if ((C.sf==C.of)) goto L_11e0d856;
  /* 11e0d84d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e0d854 jmp 0x11e0d87a */
  goto L_11e0d87a;
L_11e0d856:;
  /* 11e0d856 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d859 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d85d je 0x11e0d87a */
  if (C.zf) goto L_11e0d87a;
  /* 11e0d85f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0d861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d864 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e0d867 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d868 call 0x11dfc8e0 */
  push32(0x11e0d86du); f_11dfc8e0();
  /* 11e0d86d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d870 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d873 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11e0d87a:;
  /* 11e0d87a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d87d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11e0d884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d887 pop edi */
  EDI = (pop32());
  /* 11e0d888 pop esi */
  ESI = (pop32());
  /* 11e0d889 pop ebx */
  EBX = (pop32());
  /* 11e0d88a mov esp, ebp */
  ESP = (EBP);
  /* 11e0d88c pop ebp */
  EBP = (pop32());
  /* 11e0d88d ret  */
  ESPCHK(0x11e0d7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d890 @ 0x11e0d890 (210 bytes, 63 insns) */
void f_11e0d890(void) {
  FTRACE(0x11e0d890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d890 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d891 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d893 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d897 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d89d jae 0x11e0d8c1 */
  if (!C.cf) goto L_11e0d8c1;
  /* 11e0d89f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d8a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0d8a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d8a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0d8ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d8ae mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e0d8b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e0d8ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d8bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0d8bf jne 0x11e0d8d4 */
  if (!C.zf) goto L_11e0d8d4;
L_11e0d8c1:;
  /* 11e0d8c1 call 0x11e07270 */
  push32(0x11e0d8c6u); f_11e07270();
  /* 11e0d8c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e0d8cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d8cf jmp 0x11e0d95e */
  goto L_11e0d95e;
L_11e0d8d4:;
  /* 11e0d8d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d8d7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0d8d8 call 0x11e0a810 */
  push32(0x11e0d8ddu); f_11e0a810();
  /* 11e0d8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d8e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0d8e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d8e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0d8ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0d8ef mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0d8f6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11e0d8fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0d8fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d900 je 0x11e0d93d */
  if (C.zf) goto L_11e0d93d;
  /* 11e0d902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d905 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d906 call 0x11e0a690 */
  push32(0x11e0d90bu); f_11e0a690();
  /* 11e0d90b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d90e push eax */
  push32((uint32_t)(EAX));
  /* 11e0d90f call dword ptr [0x11e33310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33310))), 0x11e0d915u);
  /* 11e0d915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0d917 jne 0x11e0d924 */
  if (!C.zf) goto L_11e0d924;
  /* 11e0d919 call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e0d91fu);
  /* 11e0d91f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0d922 jmp 0x11e0d92b */
  goto L_11e0d92b;
L_11e0d924:;
  /* 11e0d924 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e0d92b:;
  /* 11e0d92b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d92f jne 0x11e0d933 */
  if (!C.zf) goto L_11e0d933;
  /* 11e0d931 jmp 0x11e0d94f */
  goto L_11e0d94f;
L_11e0d933:;
  /* 11e0d933 call 0x11e07280 */
  push32(0x11e0d938u); f_11e07280();
  /* 11e0d938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d93b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0d93d:;
  /* 11e0d93d call 0x11e07270 */
  push32(0x11e0d942u); f_11e07270();
  /* 11e0d942 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e0d948 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e0d94f:;
  /* 11e0d94f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0d952 push eax */
  push32((uint32_t)(EAX));
  /* 11e0d953 call 0x11e0a8a0 */
  push32(0x11e0d958u); f_11e0a8a0();
  /* 11e0d958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d95b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e0d95e:;
  /* 11e0d95e mov esp, ebp */
  ESP = (EBP);
  /* 11e0d960 pop ebp */
  EBP = (pop32());
  /* 11e0d961 ret  */
  ESPCHK(0x11e0d890u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d970 @ 0x11e0d970 (289 bytes, 97 insns) */
void f_11e0d970(void) {
  FTRACE(0x11e0d970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0d970 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0d971 mov ebp, esp */
  EBP = (ESP);
  /* 11e0d973 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0d976 push esi */
  push32((uint32_t)(ESI));
  /* 11e0d977 mov eax, dword ptr [0x11e2f1c8] */
  EAX = (r32((uint32_t)(0x11e2f1c8)));
  /* 11e0d97c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0d97f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0d986 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0d98d jmp 0x11e0d998 */
  goto L_11e0d998;
L_11e0d98f:;
  /* 11e0d98f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0d992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d995 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e0d998:;
  /* 11e0d998 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d99c jae 0x11e0d9d1 */
  if (!C.cf) goto L_11e0d9d1;
  /* 11e0d99e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0d9a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d9a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e0d9a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d9a8 call 0x11e01410 */
  push32(0x11e0d9adu); f_11e01410();
  /* 11e0d9ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d9b0 mov esi, eax */
  ESI = (EAX);
  /* 11e0d9b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0d9b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0d9b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11e0d9bc push ecx */
  push32((uint32_t)(ECX));
  /* 11e0d9bd call 0x11e01410 */
  push32(0x11e0d9c2u); f_11e01410();
  /* 11e0d9c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d9c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d9c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e0d9cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0d9cf jmp 0x11e0d98f */
  goto L_11e0d98f;
L_11e0d9d1:;
  /* 11e0d9d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0d9d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d9d7 push eax */
  push32((uint32_t)(EAX));
  /* 11e0d9d8 call 0x11dfbe30 */
  push32(0x11e0d9ddu); f_11dfbe30();
  /* 11e0d9dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0d9e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0d9e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0d9e7 je 0x11e0da89 */
  if (C.zf) goto L_11e0da89;
  /* 11e0d9ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0d9f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0d9f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0d9fa jmp 0x11e0da05 */
  goto L_11e0da05;
L_11e0d9fc:;
  /* 11e0d9fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0d9ff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0da05:;
  /* 11e0da05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0da09 jae 0x11e0da7a */
  if (!C.cf) goto L_11e0da7a;
  /* 11e0da0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11e0da11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0da1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0da1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0da20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e0da23 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0da24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da27 push edx */
  push32((uint32_t)(EDX));
  /* 11e0da28 call 0x11e01590 */
  push32(0x11e0da2du); f_11e01590();
  /* 11e0da2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da30 push eax */
  push32((uint32_t)(EAX));
  /* 11e0da31 call 0x11e01410 */
  push32(0x11e0da36u); f_11e01410();
  /* 11e0da36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0da41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11e0da47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0da50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0da53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0da56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11e0da5a push eax */
  push32((uint32_t)(EAX));
  /* 11e0da5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da5e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0da5f call 0x11e01590 */
  push32(0x11e0da64u); f_11e01590();
  /* 11e0da64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da67 push eax */
  push32((uint32_t)(EAX));
  /* 11e0da68 call 0x11e01410 */
  push32(0x11e0da6du); f_11e01410();
  /* 11e0da6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0da78 jmp 0x11e0d9fc */
  goto L_11e0d9fc;
L_11e0da7a:;
  /* 11e0da7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e0da80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0da83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0da86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e0da89:;
  /* 11e0da89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0da8c pop esi */
  ESI = (pop32());
  /* 11e0da8d mov esp, ebp */
  ESP = (EBP);
  /* 11e0da8f pop ebp */
  EBP = (pop32());
  /* 11e0da90 ret  */
  ESPCHK(0x11e0d970u, _esp0);
  ESP += 4; return;
}

/* FUN_1001daa0 @ 0x11e0daa0 (291 bytes, 97 insns) */
void f_11e0daa0(void) {
  FTRACE(0x11e0daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0daa1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0daa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0daa6 push esi */
  push32((uint32_t)(ESI));
  /* 11e0daa7 mov eax, dword ptr [0x11e2f1c8] */
  EAX = (r32((uint32_t)(0x11e2f1c8)));
  /* 11e0daac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0daaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0dab6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0dabd jmp 0x11e0dac8 */
  goto L_11e0dac8;
L_11e0dabf:;
  /* 11e0dabf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dac2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dac5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e0dac8:;
  /* 11e0dac8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dacc jae 0x11e0db02 */
  if (!C.cf) goto L_11e0db02;
  /* 11e0dace mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dad1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dad4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11e0dad8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0dad9 call 0x11e01410 */
  push32(0x11e0dadeu); f_11e01410();
  /* 11e0dade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dae1 mov esi, eax */
  ESI = (EAX);
  /* 11e0dae3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dae6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dae9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11e0daed push ecx */
  push32((uint32_t)(ECX));
  /* 11e0daee call 0x11e01410 */
  push32(0x11e0daf3u); f_11e01410();
  /* 11e0daf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0daf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0daf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e0dafd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0db00 jmp 0x11e0dabf */
  goto L_11e0dabf;
L_11e0db02:;
  /* 11e0db02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0db05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db08 push eax */
  push32((uint32_t)(EAX));
  /* 11e0db09 call 0x11dfbe30 */
  push32(0x11e0db0eu); f_11dfbe30();
  /* 11e0db0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0db14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0db18 je 0x11e0dbbb */
  if (C.zf) goto L_11e0dbbb;
  /* 11e0db1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0db21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0db24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0db2b jmp 0x11e0db36 */
  goto L_11e0db36;
L_11e0db2d:;
  /* 11e0db2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0db30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0db36:;
  /* 11e0db36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0db3a jae 0x11e0dbac */
  if (!C.cf) goto L_11e0dbac;
  /* 11e0db3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11e0db42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0db4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0db4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0db51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11e0db55 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0db56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db59 push edx */
  push32((uint32_t)(EDX));
  /* 11e0db5a call 0x11e01590 */
  push32(0x11e0db5fu); f_11e01590();
  /* 11e0db5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db62 push eax */
  push32((uint32_t)(EAX));
  /* 11e0db63 call 0x11e01410 */
  push32(0x11e0db68u); f_11e01410();
  /* 11e0db68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0db73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11e0db79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0db82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0db85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0db88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e0db8c push eax */
  push32((uint32_t)(EAX));
  /* 11e0db8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0db90 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0db91 call 0x11e01590 */
  push32(0x11e0db96u); f_11e01590();
  /* 11e0db96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0db99 push eax */
  push32((uint32_t)(EAX));
  /* 11e0db9a call 0x11e01410 */
  push32(0x11e0db9fu); f_11e01410();
  /* 11e0db9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dba2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dba5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dba7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0dbaa jmp 0x11e0db2d */
  goto L_11e0db2d;
L_11e0dbac:;
  /* 11e0dbac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dbaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e0dbb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dbb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dbb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e0dbbb:;
  /* 11e0dbbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0dbbe pop esi */
  ESI = (pop32());
  /* 11e0dbbf mov esp, ebp */
  ESP = (EBP);
  /* 11e0dbc1 pop ebp */
  EBP = (pop32());
  /* 11e0dbc2 ret  */
  ESPCHK(0x11e0daa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001dbd0 @ 0x11e0dbd0 (878 bytes, 273 insns) */
void f_11e0dbd0(void) {
  FTRACE(0x11e0dbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0dbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0dbd1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0dbd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0dbd6 push esi */
  push32((uint32_t)(ESI));
  /* 11e0dbd7 mov eax, dword ptr [0x11e2f1c8] */
  EAX = (r32((uint32_t)(0x11e2f1c8)));
  /* 11e0dbdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0dbdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0dbe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0dbed jmp 0x11e0dbf8 */
  goto L_11e0dbf8;
L_11e0dbef:;
  /* 11e0dbef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dbf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dbf5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e0dbf8:;
  /* 11e0dbf8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dbfc jae 0x11e0dc31 */
  if (!C.cf) goto L_11e0dc31;
  /* 11e0dbfe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dc01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dc04 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e0dc07 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0dc08 call 0x11e01410 */
  push32(0x11e0dc0du); f_11e01410();
  /* 11e0dc0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc10 mov esi, eax */
  ESI = (EAX);
  /* 11e0dc12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dc15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dc18 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11e0dc1c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0dc1d call 0x11e01410 */
  push32(0x11e0dc22u); f_11e01410();
  /* 11e0dc22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc25 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc28 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e0dc2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0dc2f jmp 0x11e0dbef */
  goto L_11e0dbef;
L_11e0dc31:;
  /* 11e0dc31 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0dc38 jmp 0x11e0dc43 */
  goto L_11e0dc43;
L_11e0dc3a:;
  /* 11e0dc3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dc3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e0dc43:;
  /* 11e0dc43 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dc47 jae 0x11e0dc7d */
  if (!C.cf) goto L_11e0dc7d;
  /* 11e0dc49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dc4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dc4f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11e0dc53 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dc54 call 0x11e01410 */
  push32(0x11e0dc59u); f_11e01410();
  /* 11e0dc59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc5c mov esi, eax */
  ESI = (EAX);
  /* 11e0dc5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dc61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dc64 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e0dc68 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dc69 call 0x11e01410 */
  push32(0x11e0dc6eu); f_11e01410();
  /* 11e0dc6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc71 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc74 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e0dc78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0dc7b jmp 0x11e0dc3a */
  goto L_11e0dc3a;
L_11e0dc7d:;
  /* 11e0dc7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dc80 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11e0dc86 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dc87 call 0x11e01410 */
  push32(0x11e0dc8cu); f_11e01410();
  /* 11e0dc8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dc8f mov esi, eax */
  ESI = (EAX);
  /* 11e0dc91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dc94 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11e0dc9a push edx */
  push32((uint32_t)(EDX));
  /* 11e0dc9b call 0x11e01410 */
  push32(0x11e0dca0u); f_11e01410();
  /* 11e0dca0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dca3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dca6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e0dcaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0dcad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dcb0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11e0dcb6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0dcb7 call 0x11e01410 */
  push32(0x11e0dcbcu); f_11e01410();
  /* 11e0dcbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dcbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0dcc2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e0dcc6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0dcc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dccc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11e0dcd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0dcd3 call 0x11e01410 */
  push32(0x11e0dcd8u); f_11e01410();
  /* 11e0dcd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dcdb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0dcde lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e0dce2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0dce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dce8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11e0dcee push edx */
  push32((uint32_t)(EDX));
  /* 11e0dcef call 0x11e01410 */
  push32(0x11e0dcf4u); f_11e01410();
  /* 11e0dcf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dcf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0dcfa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e0dcfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0dd01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0dd04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd09 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dd0a call 0x11dfbe30 */
  push32(0x11e0dd0fu); f_11dfbe30();
  /* 11e0dd0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0dd15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dd19 je 0x11e0df36 */
  if (C.zf) goto L_11e0df36;
  /* 11e0dd1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0dd22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e0dd25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0dd28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0dd31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11e0dd36 mov eax, dword ptr [0x11e2f1c8] */
  EAX = (r32((uint32_t)(0x11e2f1c8)));
  /* 11e0dd3b push eax */
  push32((uint32_t)(EAX));
  /* 11e0dd3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0dd3f push ecx */
  push32((uint32_t)(ECX));
  /* 11e0dd40 call 0x11e06e90 */
  push32(0x11e0dd45u); f_11e06e90();
  /* 11e0dd45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0dd4f jmp 0x11e0dd5a */
  goto L_11e0dd5a;
L_11e0dd51:;
  /* 11e0dd51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dd54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0dd5a:;
  /* 11e0dd5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dd5e jae 0x11e0ddce */
  if (!C.cf) goto L_11e0ddce;
  /* 11e0dd60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dd63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0dd66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dd69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11e0dd6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dd6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dd72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e0dd75 push edx */
  push32((uint32_t)(EDX));
  /* 11e0dd76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dd79 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dd7a call 0x11e01590 */
  push32(0x11e0dd7fu); f_11e01590();
  /* 11e0dd7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd82 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dd83 call 0x11e01410 */
  push32(0x11e0dd88u); f_11e01410();
  /* 11e0dd88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dd8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dd8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e0dd92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0dd95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dd98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0dd9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dd9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11e0dda2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dda5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0dda8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11e0ddac push edx */
  push32((uint32_t)(EDX));
  /* 11e0ddad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0ddb0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ddb1 call 0x11e01590 */
  push32(0x11e0ddb6u); f_11e01590();
  /* 11e0ddb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ddb9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ddba call 0x11e01410 */
  push32(0x11e0ddbfu); f_11e01410();
  /* 11e0ddbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ddc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0ddc5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e0ddc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0ddcc jmp 0x11e0dd51 */
  goto L_11e0dd51;
L_11e0ddce:;
  /* 11e0ddce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e0ddd5 jmp 0x11e0dde0 */
  goto L_11e0dde0;
L_11e0ddd7:;
  /* 11e0ddd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0ddda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dddd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e0dde0:;
  /* 11e0dde0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dde4 jae 0x11e0de56 */
  if (!C.cf) goto L_11e0de56;
  /* 11e0dde6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0dde9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0ddec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0ddef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11e0ddf3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0ddf6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ddf9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11e0ddfd push eax */
  push32((uint32_t)(EAX));
  /* 11e0ddfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de01 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0de02 call 0x11e01590 */
  push32(0x11e0de07u); f_11e01590();
  /* 11e0de07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0de0a push eax */
  push32((uint32_t)(EAX));
  /* 11e0de0b call 0x11e01410 */
  push32(0x11e0de10u); f_11e01410();
  /* 11e0de10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0de13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de16 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e0de1a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0de1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0de20 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0de23 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de26 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11e0de2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0de2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0de30 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e0de34 push eax */
  push32((uint32_t)(EAX));
  /* 11e0de35 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de38 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0de39 call 0x11e01590 */
  push32(0x11e0de3eu); f_11e01590();
  /* 11e0de3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0de41 push eax */
  push32((uint32_t)(EAX));
  /* 11e0de42 call 0x11e01410 */
  push32(0x11e0de47u); f_11e01410();
  /* 11e0de47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0de4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de4d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e0de51 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0de54 jmp 0x11e0ddd7 */
  goto L_11e0ddd7;
L_11e0de56:;
  /* 11e0de56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0de59 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de5c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11e0de62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0de65 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11e0de6b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0de6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de6f push edx */
  push32((uint32_t)(EDX));
  /* 11e0de70 call 0x11e01590 */
  push32(0x11e0de75u); f_11e01590();
  /* 11e0de75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0de78 push eax */
  push32((uint32_t)(EAX));
  /* 11e0de79 call 0x11e01410 */
  push32(0x11e0de7eu); f_11e01410();
  /* 11e0de7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0de81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de84 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e0de88 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0de8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0de8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0de91 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11e0de97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0de9a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11e0dea0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dea1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dea4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0dea5 call 0x11e01590 */
  push32(0x11e0deaau); f_11e01590();
  /* 11e0deaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dead push eax */
  push32((uint32_t)(EAX));
  /* 11e0deae call 0x11e01410 */
  push32(0x11e0deb3u); f_11e01410();
  /* 11e0deb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0deb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0deb9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e0debd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0dec0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0dec3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0dec6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11e0decc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0decf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11e0ded5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ded6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0ded9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0deda call 0x11e01590 */
  push32(0x11e0dedfu); f_11e01590();
  /* 11e0dedf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dee2 push eax */
  push32((uint32_t)(EAX));
  /* 11e0dee3 call 0x11e01410 */
  push32(0x11e0dee8u); f_11e01410();
  /* 11e0dee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0deeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0deee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e0def2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0def5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0def8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0defb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11e0df01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0df04 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11e0df0a push eax */
  push32((uint32_t)(EAX));
  /* 11e0df0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0df0e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0df0f call 0x11e01590 */
  push32(0x11e0df14u); f_11e01590();
  /* 11e0df14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0df17 push eax */
  push32((uint32_t)(EAX));
  /* 11e0df18 call 0x11e01410 */
  push32(0x11e0df1du); f_11e01410();
  /* 11e0df1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0df20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0df23 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e0df27 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0df2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0df2d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0df30 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11e0df36:;
  /* 11e0df36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0df39 pop esi */
  ESI = (pop32());
  /* 11e0df3a mov esp, ebp */
  ESP = (EBP);
  /* 11e0df3c pop ebp */
  EBP = (pop32());
  /* 11e0df3d ret  */
  ESPCHK(0x11e0dbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001df40 @ 0x11e0df40 (31 bytes, 15 insns) */
void f_11e0df40(void) {
  FTRACE(0x11e0df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0df40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0df41 mov ebp, esp */
  EBP = (ESP);
  /* 11e0df43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0df45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0df48 push eax */
  push32((uint32_t)(EAX));
  /* 11e0df49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0df4c push ecx */
  push32((uint32_t)(ECX));
  /* 11e0df4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0df50 push edx */
  push32((uint32_t)(EDX));
  /* 11e0df51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0df54 push eax */
  push32((uint32_t)(EAX));
  /* 11e0df55 call 0x11e0df60 */
  push32(0x11e0df5au); f_11e0df60();
  /* 11e0df5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0df5d pop ebp */
  EBP = (pop32());
  /* 11e0df5e ret  */
  ESPCHK(0x11e0df40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001df60 @ 0x11e0df60 (393 bytes, 123 insns) */
void f_11e0df60(void) {
  FTRACE(0x11e0df60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0df60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0df61 mov ebp, esp */
  EBP = (ESP);
  /* 11e0df63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0df66 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0df6a jne 0x11e0df76 */
  if (!C.zf) goto L_11e0df76;
  /* 11e0df6c mov eax, dword ptr [0x11e2f1c8] */
  EAX = (r32((uint32_t)(0x11e2f1c8)));
  /* 11e0df71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e0df74 jmp 0x11e0df7c */
  goto L_11e0df7c;
L_11e0df76:;
  /* 11e0df76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0df79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e0df7c:;
  /* 11e0df7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0df7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0df82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0df85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0df88 push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e0df8d call dword ptr [0x11e333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e0))), 0x11e0df93u);
  /* 11e0df93 cmp dword ptr [0x11e3099c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3099c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0df9a je 0x11e0dfba */
  if (C.zf) goto L_11e0dfba;
  /* 11e0df9c push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e0dfa1 call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11e0dfa7u);
  /* 11e0dfa7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e0dfa9 call 0x11dfbd50 */
  push32(0x11e0dfaeu); f_11dfbd50();
  /* 11e0dfae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dfb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e0dfb8 jmp 0x11e0dfc1 */
  goto L_11e0dfc1;
L_11e0dfba:;
  /* 11e0dfba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e0dfc1:;
  /* 11e0dfc1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0dfc5 jbe 0x11e0e0b2 */
  if ((C.cf||C.zf)) goto L_11e0e0b2;
  /* 11e0dfcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0dfce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0dfd0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11e0dfd3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0dfd7 je 0x11e0dfe1 */
  if (C.zf) goto L_11e0dfe1;
  /* 11e0dfd9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0dfdd je 0x11e0dfe6 */
  if (C.zf) goto L_11e0dfe6;
  /* 11e0dfdf jmp 0x11e0e040 */
  goto L_11e0e040;
L_11e0dfe1:;
  /* 11e0dfe1 jmp 0x11e0e0b2 */
  goto L_11e0e0b2;
L_11e0dfe6:;
  /* 11e0dfe6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0dfe9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0dfec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11e0dfef mov dword ptr [0x11e30988], 0 */
  w32((uint32_t)(0x11e30988), (0x0u));
  /* 11e0dff9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0dffc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0dfff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e002 jne 0x11e0e017 */
  if (!C.zf) goto L_11e0e017;
  /* 11e0e004 mov dword ptr [0x11e30988], 1 */
  w32((uint32_t)(0x11e30988), (0x1u));
  /* 11e0e00e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e011 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e014 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11e0e017:;
  /* 11e0e017 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e01a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e01b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e0e01e push edx */
  push32((uint32_t)(EDX));
  /* 11e0e01f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e0e022 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e023 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e026 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e027 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e02a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0e02c push eax */
  push32((uint32_t)(EAX));
  /* 11e0e02d call 0x11e0e0f0 */
  push32(0x11e0e032u); f_11e0e0f0();
  /* 11e0e032 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e035 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e038 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e03b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e0e03e jmp 0x11e0e0ad */
  goto L_11e0e0ad;
L_11e0e040:;
  /* 11e0e040 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0e045 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0e047 mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0e04d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0e04f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0e053 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0e059 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0e05b je 0x11e0e088 */
  if (C.zf) goto L_11e0e088;
  /* 11e0e05d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e061 jbe 0x11e0e088 */
  if ((C.cf||C.zf)) goto L_11e0e088;
  /* 11e0e063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e066 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e069 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0e06b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0e06d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e070 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e073 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0e076 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e079 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e07c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e0e07f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e082 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e085 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e0e088:;
  /* 11e0e088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e08b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e08e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0e090 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0e092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e098 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0e09b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e09e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e0a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e0e0a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e0a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e0aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e0e0ad:;
  /* 11e0e0ad jmp 0x11e0dfc1 */
  goto L_11e0dfc1;
L_11e0e0b2:;
  /* 11e0e0b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e0b6 je 0x11e0e0c4 */
  if (C.zf) goto L_11e0e0c4;
  /* 11e0e0b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e0e0ba call 0x11dfbdf0 */
  push32(0x11e0e0bfu); f_11dfbdf0();
  /* 11e0e0bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e0c2 jmp 0x11e0e0cf */
  goto L_11e0e0cf;
L_11e0e0c4:;
  /* 11e0e0c4 push 0x11e309ac */
  push32((uint32_t)(0x11e309acu));
  /* 11e0e0c9 call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11e0e0cfu);
L_11e0e0cf:;
  /* 11e0e0cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e0d3 jbe 0x11e0e0e3 */
  if ((C.cf||C.zf)) goto L_11e0e0e3;
  /* 11e0e0d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e0d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e0e0db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e0de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e0e1 jmp 0x11e0e0e5 */
  goto L_11e0e0e5;
L_11e0e0e3:;
  /* 11e0e0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0e0e5:;
  /* 11e0e0e5 mov esp, ebp */
  ESP = (EBP);
  /* 11e0e0e7 pop ebp */
  EBP = (pop32());
  /* 11e0e0e8 ret  */
  ESPCHK(0x11e0df60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e0f0 @ 0x11e0e0f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11e0e0f0(void) {
  FTRACE(0x11e0e0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0e0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0e0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0e0f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e0f6 push esi */
  push32((uint32_t)(ESI));
  /* 11e0e0f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11e0e0fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0e0fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e101 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e104 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0e107 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e10b ja 0x11e0e658 */
  if ((!C.cf&&!C.zf)) goto L_11e0e658;
  /* 11e0e111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e114 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0e116 mov dl, byte ptr [eax + 0x11e0e6b9] */
  DL = (r8((uint32_t)(EAX + 0x11e0e6b9)));
  /* 11e0e11c jmp dword ptr [edx*4 + 0x11e0e65d] */
  switch (EDX) {
    case 0: goto L_11e0e636;
    case 1: goto L_11e0e145;
    case 2: goto L_11e0e18b;
    case 3: goto L_11e0e2d8;
    case 4: goto L_11e0e300;
    case 5: goto L_11e0e39f;
    case 6: goto L_11e0e40b;
    case 7: goto L_11e0e434;
    case 8: goto L_11e0e475;
    case 9: goto L_11e0e557;
    case 10: goto L_11e0e5be;
    case 11: goto L_11e0e60b;
    case 12: goto L_11e0e123;
    case 13: goto L_11e0e168;
    case 14: goto L_11e0e1ae;
    case 15: goto L_11e0e2ae;
    case 16: goto L_11e0e345;
    case 17: goto L_11e0e372;
    case 18: goto L_11e0e3c7;
    case 19: goto L_11e0e44b;
    case 20: goto L_11e0e4f9;
    case 21: goto L_11e0e588;
    case 22: goto L_11e0e658;
    default: x86_unimpl("switch@0x11e0e11c out of table"); return;
  }
L_11e0e123:;
  /* 11e0e123 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e126 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e127 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e12a push edx */
  push32((uint32_t)(EDX));
  /* 11e0e12b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e12e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11e0e131 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e134 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e0e137 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e138 call 0x11e0e710 */
  push32(0x11e0e13du); f_11e0e710();
  /* 11e0e13d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e140 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e145:;
  /* 11e0e145 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e148 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e149 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e14c push edx */
  push32((uint32_t)(EDX));
  /* 11e0e14d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e150 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11e0e153 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e156 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11e0e15a push eax */
  push32((uint32_t)(EAX));
  /* 11e0e15b call 0x11e0e710 */
  push32(0x11e0e160u); f_11e0e710();
  /* 11e0e160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e163 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e168:;
  /* 11e0e168 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e16b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e16c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e16f push edx */
  push32((uint32_t)(EDX));
  /* 11e0e170 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e173 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0e176 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e179 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11e0e17d push eax */
  push32((uint32_t)(EAX));
  /* 11e0e17e call 0x11e0e710 */
  push32(0x11e0e183u); f_11e0e710();
  /* 11e0e183 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e186 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e18b:;
  /* 11e0e18b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e18e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e18f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e192 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e193 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e196 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e0e199 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e19c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e0e1a0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e1a1 call 0x11e0e710 */
  push32(0x11e0e1a6u); f_11e0e710();
  /* 11e0e1a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e1a9 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e1ae:;
  /* 11e0e1ae cmp dword ptr [0x11e30988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e1b5 je 0x11e0e236 */
  if (C.zf) goto L_11e0e236;
  /* 11e0e1b7 mov dword ptr [0x11e30988], 0 */
  w32((uint32_t)(0x11e30988), (0x0u));
  /* 11e0e1c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e1c5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e1c8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e1c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e1cc push eax */
  push32((uint32_t)(EAX));
  /* 11e0e1cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e1d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e1d4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11e0e1da push eax */
  push32((uint32_t)(EAX));
  /* 11e0e1db call 0x11e0e8c0 */
  push32(0x11e0e1e0u); f_11e0e8c0();
  /* 11e0e1e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e1e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e1e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e1e9 jne 0x11e0e1f0 */
  if (!C.zf) goto L_11e0e1f0;
  /* 11e0e1eb jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e1f0:;
  /* 11e0e1f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e1f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0e1f5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11e0e1f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e1fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e1fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e200 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e203 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0e205 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e208 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e20a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e20d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e210 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0e212 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e215 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e216 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e219 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e21a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e21d push eax */
  push32((uint32_t)(EAX));
  /* 11e0e21e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e221 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e222 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e225 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11e0e22b push eax */
  push32((uint32_t)(EAX));
  /* 11e0e22c call 0x11e0e8c0 */
  push32(0x11e0e231u); f_11e0e8c0();
  /* 11e0e231 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e234 jmp 0x11e0e2a9 */
  goto L_11e0e2a9;
L_11e0e236:;
  /* 11e0e236 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e239 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e23a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e23d push edx */
  push32((uint32_t)(EDX));
  /* 11e0e23e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e241 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e242 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e245 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e246 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e249 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11e0e24f push eax */
  push32((uint32_t)(EAX));
  /* 11e0e250 call 0x11e0e8c0 */
  push32(0x11e0e255u); f_11e0e8c0();
  /* 11e0e255 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e258 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e25b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e25e jne 0x11e0e265 */
  if (!C.zf) goto L_11e0e265;
  /* 11e0e260 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e265:;
  /* 11e0e265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e268 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0e26a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11e0e26d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e270 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e272 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e275 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e278 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0e27a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e27d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e27f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e282 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e285 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0e287 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e28a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e28b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e28e push edx */
  push32((uint32_t)(EDX));
  /* 11e0e28f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e292 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e296 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e297 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e29a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11e0e2a0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e2a1 call 0x11e0e8c0 */
  push32(0x11e0e2a6u); f_11e0e8c0();
  /* 11e0e2a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0e2a9:;
  /* 11e0e2a9 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e2ae:;
  /* 11e0e2ae mov ecx, dword ptr [0x11e30988] */
  ECX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e2b4 mov dword ptr [0x11e30998], ecx */
  w32((uint32_t)(0x11e30998), (ECX));
  /* 11e0e2ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e2bd push edx */
  push32((uint32_t)(EDX));
  /* 11e0e2be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e2c1 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e2c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e2c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e2c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0e2ca push edx */
  push32((uint32_t)(EDX));
  /* 11e0e2cb call 0x11e0e760 */
  push32(0x11e0e2d0u); f_11e0e760();
  /* 11e0e2d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e2d3 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e2d8:;
  /* 11e0e2d8 mov eax, dword ptr [0x11e30988] */
  EAX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e2dd mov dword ptr [0x11e30998], eax */
  w32((uint32_t)(0x11e30998), (EAX));
  /* 11e0e2e2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e2e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e2e9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e2ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e2ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e2ef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0e2f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e2f3 call 0x11e0e760 */
  push32(0x11e0e2f8u); f_11e0e760();
  /* 11e0e2f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e2fb jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e300:;
  /* 11e0e300 mov edx, dword ptr [0x11e30988] */
  EDX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e306 mov dword ptr [0x11e30998], edx */
  w32((uint32_t)(0x11e30998), (EDX));
  /* 11e0e30c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e30f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e0e312 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e313 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11e0e318 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e31a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0e31d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e321 jne 0x11e0e32a */
  if (!C.zf) goto L_11e0e32a;
  /* 11e0e323 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11e0e32a:;
  /* 11e0e32a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e32d push edx */
  push32((uint32_t)(EDX));
  /* 11e0e32e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e331 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e332 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e334 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e337 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e338 call 0x11e0e760 */
  push32(0x11e0e33du); f_11e0e760();
  /* 11e0e33d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e340 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e345:;
  /* 11e0e345 mov edx, dword ptr [0x11e30988] */
  EDX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e34b mov dword ptr [0x11e30998], edx */
  w32((uint32_t)(0x11e30998), (EDX));
  /* 11e0e351 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e354 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e355 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e358 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e359 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e0e35b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e35e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0e361 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e364 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e365 call 0x11e0e760 */
  push32(0x11e0e36au); f_11e0e760();
  /* 11e0e36a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e36d jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e372:;
  /* 11e0e372 mov ecx, dword ptr [0x11e30988] */
  ECX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e378 mov dword ptr [0x11e30998], ecx */
  w32((uint32_t)(0x11e30998), (ECX));
  /* 11e0e37e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e381 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e382 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e385 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e386 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e388 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e38b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e0e38e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e391 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e392 call 0x11e0e760 */
  push32(0x11e0e397u); f_11e0e760();
  /* 11e0e397 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e39a jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e39f:;
  /* 11e0e39f mov eax, dword ptr [0x11e30988] */
  EAX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e3a4 mov dword ptr [0x11e30998], eax */
  w32((uint32_t)(0x11e30998), (EAX));
  /* 11e0e3a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e3ac push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e3ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e3b0 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e3b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e3b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e3b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0e3b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e3ba call 0x11e0e760 */
  push32(0x11e0e3bfu); f_11e0e760();
  /* 11e0e3bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e3c2 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e3c7:;
  /* 11e0e3c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e3ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e3ce jg 0x11e0e3ec */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0e3ec;
  /* 11e0e3d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e3d3 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e3d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e3d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e3d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e3db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11e0e3e1 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e3e2 call 0x11e0e710 */
  push32(0x11e0e3e7u); f_11e0e710();
  /* 11e0e3e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e3ea jmp 0x11e0e406 */
  goto L_11e0e406;
L_11e0e3ec:;
  /* 11e0e3ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e3ef push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e3f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e3f3 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e3f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e3f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11e0e3fd push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e3fe call 0x11e0e710 */
  push32(0x11e0e403u); f_11e0e710();
  /* 11e0e403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0e406:;
  /* 11e0e406 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e40b:;
  /* 11e0e40b mov edx, dword ptr [0x11e30988] */
  EDX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e411 mov dword ptr [0x11e30998], edx */
  w32((uint32_t)(0x11e30998), (EDX));
  /* 11e0e417 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e41a push eax */
  push32((uint32_t)(EAX));
  /* 11e0e41b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e41e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e41f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e421 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e424 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0e426 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e427 call 0x11e0e760 */
  push32(0x11e0e42cu); f_11e0e760();
  /* 11e0e42c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e42f jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e434:;
  /* 11e0e434 mov ecx, dword ptr [0x11e30988] */
  ECX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e43a mov dword ptr [0x11e30998], ecx */
  w32((uint32_t)(0x11e30998), (ECX));
  /* 11e0e440 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e443 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11e0e446 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0e449 jmp 0x11e0e49d */
  goto L_11e0e49d;
L_11e0e44b:;
  /* 11e0e44b mov ecx, dword ptr [0x11e30988] */
  ECX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e451 mov dword ptr [0x11e30998], ecx */
  w32((uint32_t)(0x11e30998), (ECX));
  /* 11e0e457 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e45a push edx */
  push32((uint32_t)(EDX));
  /* 11e0e45b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e45e push eax */
  push32((uint32_t)(EAX));
  /* 11e0e45f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0e461 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e464 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e0e467 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e468 call 0x11e0e760 */
  push32(0x11e0e46du); f_11e0e760();
  /* 11e0e46d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e470 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e475:;
  /* 11e0e475 mov eax, dword ptr [0x11e30988] */
  EAX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e47a mov dword ptr [0x11e30998], eax */
  w32((uint32_t)(0x11e30998), (EAX));
  /* 11e0e47f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e482 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e486 jne 0x11e0e491 */
  if (!C.zf) goto L_11e0e491;
  /* 11e0e488 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11e0e48f jmp 0x11e0e49d */
  goto L_11e0e49d;
L_11e0e491:;
  /* 11e0e491 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e494 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11e0e497 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e49a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e0e49d:;
  /* 11e0e49d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e4a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e0e4a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e4a6 jge 0x11e0e4b1 */
  if ((C.sf==C.of)) goto L_11e0e4b1;
  /* 11e0e4a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0e4af jmp 0x11e0e4de */
  goto L_11e0e4de;
L_11e0e4b1:;
  /* 11e0e4b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e4b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e0e4b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e4b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11e0e4bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e4bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0e4c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e4c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0e4c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e4c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11e0e4ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e4d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e4d3 jl 0x11e0e4de */
  if ((C.sf!=C.of)) goto L_11e0e4de;
  /* 11e0e4d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e4d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e4db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e0e4de:;
  /* 11e0e4de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e4e1 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e4e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e4e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e4e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e4eb push edx */
  push32((uint32_t)(EDX));
  /* 11e0e4ec call 0x11e0e760 */
  push32(0x11e0e4f1u); f_11e0e760();
  /* 11e0e4f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e4f4 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e4f9:;
  /* 11e0e4f9 cmp dword ptr [0x11e30988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e500 je 0x11e0e530 */
  if (C.zf) goto L_11e0e530;
  /* 11e0e502 mov dword ptr [0x11e30988], 0 */
  w32((uint32_t)(0x11e30988), (0x0u));
  /* 11e0e50c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e50f push eax */
  push32((uint32_t)(EAX));
  /* 11e0e510 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e513 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e514 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e517 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e518 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e51b push eax */
  push32((uint32_t)(EAX));
  /* 11e0e51c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e51f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11e0e525 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e526 call 0x11e0e8c0 */
  push32(0x11e0e52bu); f_11e0e8c0();
  /* 11e0e52b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e52e jmp 0x11e0e552 */
  goto L_11e0e552;
L_11e0e530:;
  /* 11e0e530 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e533 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e534 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e537 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e538 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e53b push edx */
  push32((uint32_t)(EDX));
  /* 11e0e53c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e53f push eax */
  push32((uint32_t)(EAX));
  /* 11e0e540 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e543 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11e0e549 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e54a call 0x11e0e8c0 */
  push32(0x11e0e54fu); f_11e0e8c0();
  /* 11e0e54f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0e552:;
  /* 11e0e552 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e557:;
  /* 11e0e557 mov dword ptr [0x11e30988], 0 */
  w32((uint32_t)(0x11e30988), (0x0u));
  /* 11e0e561 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e564 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e565 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e568 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e569 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e56c push edx */
  push32((uint32_t)(EDX));
  /* 11e0e56d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e570 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e571 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0e574 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11e0e57a push edx */
  push32((uint32_t)(EDX));
  /* 11e0e57b call 0x11e0e8c0 */
  push32(0x11e0e580u); f_11e0e8c0();
  /* 11e0e580 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e583 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e588:;
  /* 11e0e588 mov eax, dword ptr [0x11e30988] */
  EAX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e58d mov dword ptr [0x11e30998], eax */
  w32((uint32_t)(0x11e30998), (EAX));
  /* 11e0e592 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e595 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11e0e598 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e599 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11e0e59e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e5a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0e5a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e5a6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e5a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e5aa push eax */
  push32((uint32_t)(EAX));
  /* 11e0e5ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0e5ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e5b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e5b1 call 0x11e0e760 */
  push32(0x11e0e5b6u); f_11e0e760();
  /* 11e0e5b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e5b9 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e5be:;
  /* 11e0e5be mov edx, dword ptr [0x11e30988] */
  EDX = (r32((uint32_t)(0x11e30988)));
  /* 11e0e5c4 mov dword ptr [0x11e30998], edx */
  w32((uint32_t)(0x11e30998), (EDX));
  /* 11e0e5ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e5cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e0e5d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e5d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11e0e5d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e5d8 mov ecx, eax */
  ECX = (EAX);
  /* 11e0e5da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e5dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0e5e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e5e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e0e5e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e5e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11e0e5ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e5ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e5f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0e5f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e5f6 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e5f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e5fa push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e5fb push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0e5fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e600 push edx */
  push32((uint32_t)(EDX));
  /* 11e0e601 call 0x11e0e760 */
  push32(0x11e0e606u); f_11e0e760();
  /* 11e0e606 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e609 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e60b:;
  /* 11e0e60b call 0x11e0f8f0 */
  push32(0x11e0e610u); f_11e0f8f0();
  /* 11e0e610 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e613 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e614 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e617 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e618 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e61b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0e61d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e621 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11e0e624 mov ecx, dword ptr [eax*4 + 0x11e2f608] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2f608)));
  /* 11e0e62b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e62c call 0x11e0e710 */
  push32(0x11e0e631u); f_11e0e710();
  /* 11e0e631 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e634 jmp 0x11e0e658 */
  goto L_11e0e658;
L_11e0e636:;
  /* 11e0e636 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e639 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0e63b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11e0e63e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e641 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e643 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e646 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e649 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0e64b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e64e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e650 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e653 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e656 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0e658:;
  /* 11e0e658 pop esi */
  ESI = (pop32());
  /* 11e0e659 mov esp, ebp */
  ESP = (EBP);
  /* 11e0e65b pop ebp */
  EBP = (pop32());
  /* 11e0e65c ret  */
  ESPCHK(0x11e0e0f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11e0e710 (72 bytes, 30 insns) */
void f_11e0e710(void) {
  FTRACE(0x11e0e710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0e710 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0e711 mov ebp, esp */
  EBP = (ESP);
L_11e0e713:;
  /* 11e0e713 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e716 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e719 je 0x11e0e756 */
  if (C.zf) goto L_11e0e756;
  /* 11e0e71b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e71e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0e721 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0e723 je 0x11e0e756 */
  if (C.zf) goto L_11e0e756;
  /* 11e0e725 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e728 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0e72a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e72d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0e72f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0e731 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e734 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0e736 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e739 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e73c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0e73e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e744 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e0e747 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e74a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0e74c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e74f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e752 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0e754 jmp 0x11e0e713 */
  goto L_11e0e713;
L_11e0e756:;
  /* 11e0e756 pop ebp */
  EBP = (pop32());
  /* 11e0e757 ret  */
  ESPCHK(0x11e0e710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e760 @ 0x11e0e760 (173 bytes, 64 insns) */
void f_11e0e760(void) {
  FTRACE(0x11e0e760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0e760 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0e761 mov ebp, esp */
  EBP = (ESP);
  /* 11e0e763 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e764 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0e76b cmp dword ptr [0x11e30998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e772 je 0x11e0e78a */
  if (C.zf) goto L_11e0e78a;
  /* 11e0e774 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e777 push eax */
  push32((uint32_t)(EAX));
  /* 11e0e778 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e77b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0e77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e77f push edx */
  push32((uint32_t)(EDX));
  /* 11e0e780 call 0x11e0e810 */
  push32(0x11e0e785u); f_11e0e810();
  /* 11e0e785 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e788 jmp 0x11e0e809 */
  goto L_11e0e809;
L_11e0e78a:;
  /* 11e0e78a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e78d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e790 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e792 jae 0x11e0e800 */
  if (!C.cf) goto L_11e0e800;
  /* 11e0e794 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e797 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e79a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11e0e79d jmp 0x11e0e7a8 */
  goto L_11e0e7a8;
L_11e0e79f:;
  /* 11e0e79f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e7a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e7a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11e0e7a8:;
  /* 11e0e7a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e7ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e7ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0e7b0 je 0x11e0e7e4 */
  if (C.zf) goto L_11e0e7e4;
  /* 11e0e7b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e7b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e7b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11e0e7bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e7bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e7c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e7c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0e7c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e7c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11e0e7cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e7ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e7cf mov ecx, 0xa */
  ECX = (0xau);
  /* 11e0e7d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e7d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0e7d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e7dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e7df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0e7e2 jmp 0x11e0e79f */
  goto L_11e0e79f;
L_11e0e7e4:;
  /* 11e0e7e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e7e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0e7e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e7ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e7ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0e7f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e7f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0e7f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e7f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e7fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0e7fe jmp 0x11e0e809 */
  goto L_11e0e809;
L_11e0e800:;
  /* 11e0e800 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e803 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e0e809:;
  /* 11e0e809 mov esp, ebp */
  ESP = (EBP);
  /* 11e0e80b pop ebp */
  EBP = (pop32());
  /* 11e0e80c ret  */
  ESPCHK(0x11e0e760u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11e0e810 (172 bytes, 65 insns) */
void f_11e0e810(void) {
  FTRACE(0x11e0e810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0e810 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0e811 mov ebp, esp */
  EBP = (ESP);
  /* 11e0e813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e819 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0e81b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0e81e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e821 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e824 jbe 0x11e0e86b */
  if ((C.cf||C.zf)) goto L_11e0e86b;
L_11e0e826:;
  /* 11e0e826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e829 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e82a mov ecx, 0xa */
  ECX = (0xau);
  /* 11e0e82f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e831 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e837 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0e839 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e83c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e83f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0e842 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e845 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0e847 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e84a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e84d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0e84f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e852 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0e853 mov ecx, 0xa */
  ECX = (0xau);
  /* 11e0e858 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e0e85a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0e85d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e861 jle 0x11e0e86b */
  if ((C.zf||C.sf!=C.of)) goto L_11e0e86b;
  /* 11e0e863 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0e866 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e869 ja 0x11e0e826 */
  if ((!C.cf&&!C.zf)) goto L_11e0e826;
L_11e0e86b:;
  /* 11e0e86b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e86e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0e870 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0e873 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0e876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e879 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e0e87b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e87e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e881 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0e884:;
  /* 11e0e884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e887 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0e889 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11e0e88c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e88f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0e892 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0e894 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0e896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e899 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e89c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0e89f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0e8a2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e0e8a5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e0e8a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0e8aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e8ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e0e8b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0e8b3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e8b6 jb 0x11e0e884 */
  if (C.cf) goto L_11e0e884;
  /* 11e0e8b8 mov esp, ebp */
  ESP = (EBP);
  /* 11e0e8ba pop ebp */
  EBP = (pop32());
  /* 11e0e8bb ret  */
  ESPCHK(0x11e0e810u, _esp0);
  ESP += 4; return;
}

/* FUN_1001e8c0 @ 0x11e0e8c0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11e0e8c0(void) {
  FTRACE(0x11e0e8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0e8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0e8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0e8c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11e0e8c6:;
  /* 11e0e8c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e8c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0e8cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0e8ce je 0x11e0ed3c */
  if (C.zf) goto L_11e0ed3c;
  /* 11e0e8d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0e8d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e8da je 0x11e0ed3c */
  if (C.zf) goto L_11e0ed3c;
  /* 11e0e8e0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e0e8e4 mov dword ptr [0x11e30998], 0 */
  w32((uint32_t)(0x11e30998), (0x0u));
  /* 11e0e8ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0e8f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e8f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0e8fb jmp 0x11e0e906 */
  goto L_11e0e906;
L_11e0e8fd:;
  /* 11e0e8fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e900 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e903 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e0e906:;
  /* 11e0e906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e909 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0e90c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e90f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0e912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e915 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0e918 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0e91b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e91d jne 0x11e0e921 */
  if (!C.zf) goto L_11e0e921;
  /* 11e0e91f jmp 0x11e0e8fd */
  goto L_11e0e8fd;
L_11e0e921:;
  /* 11e0e921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0e924 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e927 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0e92a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0e92d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0e930 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e0e933 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0e936 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e939 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e0e93c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e940 ja 0x11e0ec90 */
  if ((!C.cf&&!C.zf)) goto L_11e0ec90;
  /* 11e0e946 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e0e949 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0e94b mov al, byte ptr [ecx + 0x11e0ed6c] */
  AL = (r8((uint32_t)(ECX + 0x11e0ed6c)));
  /* 11e0e951 jmp dword ptr [eax*4 + 0x11e0ed40] */
  switch (EAX) {
    case 0: goto L_11e0ebaf;
    case 1: goto L_11e0ea93;
    case 2: goto L_11e0ea1e;
    case 3: goto L_11e0e958;
    case 4: goto L_11e0e996;
    case 5: goto L_11e0e9f7;
    case 6: goto L_11e0ea45;
    case 7: goto L_11e0ea6c;
    case 8: goto L_11e0eada;
    case 9: goto L_11e0e9d4;
    case 10: goto L_11e0ec90;
    default: x86_unimpl("switch@0x11e0e951 out of table"); return;
  }
L_11e0e958:;
  /* 11e0e958 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e95b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e0e95e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0e961 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e964 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e0e967 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e96b ja 0x11e0e991 */
  if ((!C.cf&&!C.zf)) goto L_11e0e991;
  /* 11e0e96d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0e970 jmp dword ptr [ecx*4 + 0x11e0edbf] */
  switch (ECX) {
    case 0: goto L_11e0e977;
    case 1: goto L_11e0e981;
    case 2: goto L_11e0e987;
    case 3: goto L_11e0e98d;
    case 4: goto L_11e0e9b5;
    case 5: goto L_11e0e9bf;
    case 6: goto L_11e0e9c5;
    case 7: goto L_11e0e9cb;
    default: x86_unimpl("switch@0x11e0e970 out of table"); return;
  }
L_11e0e977:;
  /* 11e0e977 mov dword ptr [0x11e30998], 1 */
  w32((uint32_t)(0x11e30998), (0x1u));
L_11e0e981:;
  /* 11e0e981 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11e0e985 jmp 0x11e0e991 */
  goto L_11e0e991;
L_11e0e987:;
  /* 11e0e987 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11e0e98b jmp 0x11e0e991 */
  goto L_11e0e991;
L_11e0e98d:;
  /* 11e0e98d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11e0e991:;
  /* 11e0e991 jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0e996:;
  /* 11e0e996 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e999 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e0e99c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0e99f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0e9a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e0e9a5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e9a9 ja 0x11e0e9cf */
  if ((!C.cf&&!C.zf)) goto L_11e0e9cf;
  /* 11e0e9ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e0e9ae jmp dword ptr [ecx*4 + 0x11e0edcf] */
  switch (ECX) {
    case 0: goto L_11e0e9b5;
    case 1: goto L_11e0e9bf;
    case 2: goto L_11e0e9c5;
    case 3: goto L_11e0e9cb;
    default: x86_unimpl("switch@0x11e0e9ae out of table"); return;
  }
L_11e0e9b5:;
  /* 11e0e9b5 mov dword ptr [0x11e30998], 1 */
  w32((uint32_t)(0x11e30998), (0x1u));
L_11e0e9bf:;
  /* 11e0e9bf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11e0e9c3 jmp 0x11e0e9cf */
  goto L_11e0e9cf;
L_11e0e9c5:;
  /* 11e0e9c5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11e0e9c9 jmp 0x11e0e9cf */
  goto L_11e0e9cf;
L_11e0e9cb:;
  /* 11e0e9cb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11e0e9cf:;
  /* 11e0e9cf jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0e9d4:;
  /* 11e0e9d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e9d7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e0e9da cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e9de je 0x11e0e9e8 */
  if (C.zf) goto L_11e0e9e8;
  /* 11e0e9e0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0e9e4 je 0x11e0e9ee */
  if (C.zf) goto L_11e0e9ee;
  /* 11e0e9e6 jmp 0x11e0e9f2 */
  goto L_11e0e9f2;
L_11e0e9e8:;
  /* 11e0e9e8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11e0e9ec jmp 0x11e0e9f2 */
  goto L_11e0e9f2;
L_11e0e9ee:;
  /* 11e0e9ee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11e0e9f2:;
  /* 11e0e9f2 jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0e9f7:;
  /* 11e0e9f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0e9fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e0e9fd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea01 je 0x11e0ea0b */
  if (C.zf) goto L_11e0ea0b;
  /* 11e0ea03 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea07 je 0x11e0ea15 */
  if (C.zf) goto L_11e0ea15;
  /* 11e0ea09 jmp 0x11e0ea19 */
  goto L_11e0ea19;
L_11e0ea0b:;
  /* 11e0ea0b mov dword ptr [0x11e30998], 1 */
  w32((uint32_t)(0x11e30998), (0x1u));
L_11e0ea15:;
  /* 11e0ea15 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11e0ea19:;
  /* 11e0ea19 jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0ea1e:;
  /* 11e0ea1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ea21 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e0ea24 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea28 je 0x11e0ea32 */
  if (C.zf) goto L_11e0ea32;
  /* 11e0ea2a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea2e je 0x11e0ea3c */
  if (C.zf) goto L_11e0ea3c;
  /* 11e0ea30 jmp 0x11e0ea40 */
  goto L_11e0ea40;
L_11e0ea32:;
  /* 11e0ea32 mov dword ptr [0x11e30998], 1 */
  w32((uint32_t)(0x11e30998), (0x1u));
L_11e0ea3c:;
  /* 11e0ea3c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11e0ea40:;
  /* 11e0ea40 jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0ea45:;
  /* 11e0ea45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ea48 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11e0ea4b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea4f je 0x11e0ea59 */
  if (C.zf) goto L_11e0ea59;
  /* 11e0ea51 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea55 je 0x11e0ea63 */
  if (C.zf) goto L_11e0ea63;
  /* 11e0ea57 jmp 0x11e0ea67 */
  goto L_11e0ea67;
L_11e0ea59:;
  /* 11e0ea59 mov dword ptr [0x11e30998], 1 */
  w32((uint32_t)(0x11e30998), (0x1u));
L_11e0ea63:;
  /* 11e0ea63 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11e0ea67:;
  /* 11e0ea67 jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0ea6c:;
  /* 11e0ea6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ea6f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e0ea72 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea76 je 0x11e0ea80 */
  if (C.zf) goto L_11e0ea80;
  /* 11e0ea78 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ea7c je 0x11e0ea8a */
  if (C.zf) goto L_11e0ea8a;
  /* 11e0ea7e jmp 0x11e0ea8e */
  goto L_11e0ea8e;
L_11e0ea80:;
  /* 11e0ea80 mov dword ptr [0x11e30998], 1 */
  w32((uint32_t)(0x11e30998), (0x1u));
L_11e0ea8a:;
  /* 11e0ea8a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11e0ea8e:;
  /* 11e0ea8e jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0ea93:;
  /* 11e0ea93 push 0x11e2bc68 */
  push32((uint32_t)(0x11e2bc68u));
  /* 11e0ea98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ea9b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ea9c call 0x11e0f2f0 */
  push32(0x11e0eaa1u); f_11e0f2f0();
  /* 11e0eaa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eaa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0eaa6 jne 0x11e0eab3 */
  if (!C.zf) goto L_11e0eab3;
  /* 11e0eaa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0eaab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eaae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0eab1 jmp 0x11e0ead1 */
  goto L_11e0ead1;
L_11e0eab3:;
  /* 11e0eab3 push 0x11e2bc64 */
  push32((uint32_t)(0x11e2bc64u));
  /* 11e0eab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0eabb push eax */
  push32((uint32_t)(EAX));
  /* 11e0eabc call 0x11e0f2f0 */
  push32(0x11e0eac1u); f_11e0f2f0();
  /* 11e0eac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0eac6 jne 0x11e0ead1 */
  if (!C.zf) goto L_11e0ead1;
  /* 11e0eac8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0eacb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eace mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e0ead1:;
  /* 11e0ead1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11e0ead5 jmp 0x11e0ec90 */
  goto L_11e0ec90;
L_11e0eada:;
  /* 11e0eada mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0eadd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eae1 jg 0x11e0eaf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0eaf1;
  /* 11e0eae3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0eae6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11e0eaec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e0eaef jmp 0x11e0eafd */
  goto L_11e0eafd;
L_11e0eaf1:;
  /* 11e0eaf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0eaf4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11e0eafa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e0eafd:;
  /* 11e0eafd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eb01 jle 0x11e0eba4 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0eba4;
  /* 11e0eb07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0eb0a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eb0d jbe 0x11e0eba4 */
  if ((C.cf||C.zf)) goto L_11e0eba4;
  /* 11e0eb13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0eb16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0eb18 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0eb1a mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0eb20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0eb22 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0eb26 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0eb2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0eb2e je 0x11e0eb67 */
  if (C.zf) goto L_11e0eb67;
  /* 11e0eb30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0eb33 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eb36 jbe 0x11e0eb67 */
  if ((C.cf||C.zf)) goto L_11e0eb67;
  /* 11e0eb38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eb3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0eb3d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0eb40 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0eb42 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e0eb44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eb47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0eb49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eb4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eb4f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0eb51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0eb54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eb57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e0eb5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0eb5d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0eb5f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0eb62 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0eb65 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e0eb67:;
  /* 11e0eb67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eb6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0eb6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0eb6f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0eb71 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0eb73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eb76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0eb78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eb7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eb7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0eb80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0eb83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eb86 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e0eb89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0eb8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0eb8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0eb91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0eb94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0eb96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0eb99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0eb9c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e0eb9f jmp 0x11e0eafd */
  goto L_11e0eafd;
L_11e0eba4:;
  /* 11e0eba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0eba7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0ebaa jmp 0x11e0e8c6 */
  goto L_11e0e8c6;
L_11e0ebaf:;
  /* 11e0ebaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ebb2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ebb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0ebb7 je 0x11e0ec82 */
  if (C.zf) goto L_11e0ec82;
  /* 11e0ebbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ebc0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ebc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11e0ebc6:;
  /* 11e0ebc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ebc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0ebcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0ebce je 0x11e0ec80 */
  if (C.zf) goto L_11e0ec80;
  /* 11e0ebd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ebd7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ebda je 0x11e0ec80 */
  if (C.zf) goto L_11e0ec80;
  /* 11e0ebe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ebe3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0ebe6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ebe9 jne 0x11e0ebf9 */
  if (!C.zf) goto L_11e0ebf9;
  /* 11e0ebeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ebee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ebf1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e0ebf4 jmp 0x11e0ec80 */
  goto L_11e0ec80;
L_11e0ebf9:;
  /* 11e0ebf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ebfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0ebfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0ec00 mov edx, dword ptr [0x11e2e00c] */
  EDX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0ec06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ec08 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e0ec0c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ec11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ec13 je 0x11e0ec4c */
  if (C.zf) goto L_11e0ec4c;
  /* 11e0ec15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ec18 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ec1b jbe 0x11e0ec4c */
  if ((C.cf||C.zf)) goto L_11e0ec4c;
  /* 11e0ec1d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ec20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0ec22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ec25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0ec27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0ec29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ec2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ec2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ec31 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ec34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0ec36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ec39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ec3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0ec3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ec42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0ec44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ec47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ec4a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0ec4c:;
  /* 11e0ec4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ec4f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0ec51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ec54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0ec56 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e0ec58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ec5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0ec5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ec60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ec63 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e0ec65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ec68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ec6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e0ec6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ec71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ec73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ec76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ec79 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0ec7b jmp 0x11e0ebc6 */
  goto L_11e0ebc6;
L_11e0ec80:;
  /* 11e0ec80 jmp 0x11e0ec8b */
  goto L_11e0ec8b;
L_11e0ec82:;
  /* 11e0ec82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ec85 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ec88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e0ec8b:;
  /* 11e0ec8b jmp 0x11e0e8c6 */
  goto L_11e0e8c6;
L_11e0ec90:;
  /* 11e0ec90 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e0ec94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0ec96 je 0x11e0ecbc */
  if (C.zf) goto L_11e0ecbc;
  /* 11e0ec98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0ec9b push edx */
  push32((uint32_t)(EDX));
  /* 11e0ec9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ec9f push eax */
  push32((uint32_t)(EAX));
  /* 11e0eca0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0eca4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0eca7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0eca8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11e0ecab push eax */
  push32((uint32_t)(EAX));
  /* 11e0ecac call 0x11e0e0f0 */
  push32(0x11e0ecb1u); f_11e0e0f0();
  /* 11e0ecb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ecb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ecb7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e0ecba jmp 0x11e0ed37 */
  goto L_11e0ed37;
L_11e0ecbc:;
  /* 11e0ecbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ecbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ecc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0ecc3 mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0ecc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0eccb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0eccf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0ecd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0ecd7 je 0x11e0ed08 */
  if (C.zf) goto L_11e0ed08;
  /* 11e0ecd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ecdc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ecde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ece1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0ece3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0ece5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ece8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0ecea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eced mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ecf0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e0ecf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ecf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ecf8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e0ecfb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ecfe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0ed00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ed03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ed06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e0ed08:;
  /* 11e0ed08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ed0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0ed0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ed10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0ed12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e0ed14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ed17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ed19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ed1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ed1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e0ed21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ed24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ed27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0ed2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ed2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e0ed2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ed32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ed35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e0ed37:;
  /* 11e0ed37 jmp 0x11e0e8c6 */
  goto L_11e0e8c6;
L_11e0ed3c:;
  /* 11e0ed3c mov esp, ebp */
  ESP = (EBP);
  /* 11e0ed3e pop ebp */
  EBP = (pop32());
  /* 11e0ed3f ret  */
  ESPCHK(0x11e0e8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ede0 @ 0x11e0ede0 (650 bytes, 178 insns) */
void f_11e0ede0(void) {
  FTRACE(0x11e0ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0ede1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0ede3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0ede9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eded jne 0x11e0ef49 */
  if (!C.zf) goto L_11e0ef49;
  /* 11e0edf3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0edf6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11e0edfc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11e0ee02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0ee05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0ee0c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11e0ee16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ee18 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e0ee1e push edx */
  push32((uint32_t)(EDX));
  /* 11e0ee1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ee22 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ee23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ee26 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ee27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ee2a push edx */
  push32((uint32_t)(EDX));
  /* 11e0ee2b call 0x11e103d0 */
  push32(0x11e0ee30u); f_11e103d0();
  /* 11e0ee30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ee33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0ee36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ee3a jne 0x11e0eecf */
  if (!C.zf) goto L_11e0eecf;
  /* 11e0ee40 call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e0ee46u);
  /* 11e0ee46 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ee49 je 0x11e0ee50 */
  if (C.zf) goto L_11e0ee50;
  /* 11e0ee4b jmp 0x11e0ef2d */
  goto L_11e0ef2d;
L_11e0ee50:;
  /* 11e0ee50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ee52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ee54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ee56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ee59 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ee5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ee5d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ee5e call 0x11e103d0 */
  push32(0x11e0ee63u); f_11e103d0();
  /* 11e0ee63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ee66 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11e0ee6c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ee73 jne 0x11e0ee7a */
  if (!C.zf) goto L_11e0ee7a;
  /* 11e0ee75 jmp 0x11e0ef2d */
  goto L_11e0ef2d;
L_11e0ee7a:;
  /* 11e0ee7a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11e0ee7c push 0x11e2bc70 */
  push32((uint32_t)(0x11e2bc70u));
  /* 11e0ee81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ee83 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e0ee89 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ee8a call 0x11dfbe50 */
  push32(0x11e0ee8fu); f_11dfbe50();
  /* 11e0ee8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ee92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0ee95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ee99 jne 0x11e0eea0 */
  if (!C.zf) goto L_11e0eea0;
  /* 11e0ee9b jmp 0x11e0ef2d */
  goto L_11e0ef2d;
L_11e0eea0:;
  /* 11e0eea0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e0eea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0eea9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e0eeaf push eax */
  push32((uint32_t)(EAX));
  /* 11e0eeb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0eeb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0eeb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0eeb7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0eeb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0eebb push eax */
  push32((uint32_t)(EAX));
  /* 11e0eebc call 0x11e103d0 */
  push32(0x11e0eec1u); f_11e103d0();
  /* 11e0eec1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eec4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e0eec7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eecb jne 0x11e0eecf */
  if (!C.zf) goto L_11e0eecf;
  /* 11e0eecd jmp 0x11e0ef2d */
  goto L_11e0ef2d;
L_11e0eecf:;
  /* 11e0eecf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11e0eed1 push 0x11e2bc70 */
  push32((uint32_t)(0x11e2bc70u));
  /* 11e0eed6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0eed8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0eedb push ecx */
  push32((uint32_t)(ECX));
  /* 11e0eedc call 0x11dfbe50 */
  push32(0x11e0eee1u); f_11dfbe50();
  /* 11e0eee1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eee4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11e0eeea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e0eeec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11e0eef2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0eef5 jne 0x11e0eef9 */
  if (!C.zf) goto L_11e0eef9;
  /* 11e0eef7 jmp 0x11e0ef2d */
  goto L_11e0ef2d;
L_11e0eef9:;
  /* 11e0eef9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0eefc push ecx */
  push32((uint32_t)(ECX));
  /* 11e0eefd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ef00 push edx */
  push32((uint32_t)(EDX));
  /* 11e0ef01 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11e0ef07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ef09 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ef0a call 0x11e01e00 */
  push32(0x11e0ef0fu); f_11e01e00();
  /* 11e0ef0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ef12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ef16 je 0x11e0ef26 */
  if (C.zf) goto L_11e0ef26;
  /* 11e0ef18 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ef1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ef1d push edx */
  push32((uint32_t)(EDX));
  /* 11e0ef1e call 0x11dfc8e0 */
  push32(0x11e0ef23u); f_11dfc8e0();
  /* 11e0ef23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0ef26:;
  /* 11e0ef26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ef28 jmp 0x11e0f066 */
  goto L_11e0f066;
L_11e0ef2d:;
  /* 11e0ef2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ef31 je 0x11e0ef41 */
  if (C.zf) goto L_11e0ef41;
  /* 11e0ef33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ef35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0ef38 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ef39 call 0x11dfc8e0 */
  push32(0x11e0ef3eu); f_11dfc8e0();
  /* 11e0ef3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0ef41:;
  /* 11e0ef41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ef44 jmp 0x11e0f066 */
  goto L_11e0f066;
L_11e0ef49:;
  /* 11e0ef49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ef4d jne 0x11e0f063 */
  if (!C.zf) goto L_11e0f063;
  /* 11e0ef53 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11e0ef5d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0ef60 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11e0ef66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ef68 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e0ef6e push edx */
  push32((uint32_t)(EDX));
  /* 11e0ef6f push 0x11e308ac */
  push32((uint32_t)(0x11e308acu));
  /* 11e0ef74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0ef77 push eax */
  push32((uint32_t)(EAX));
  /* 11e0ef78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0ef7b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ef7c call 0x11e10230 */
  push32(0x11e0ef81u); f_11e10230();
  /* 11e0ef81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ef84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0ef86 jne 0x11e0ef90 */
  if (!C.zf) goto L_11e0ef90;
  /* 11e0ef88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ef8b jmp 0x11e0f066 */
  goto L_11e0f066;
L_11e0ef90:;
  /* 11e0ef90 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e0ef96 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e0ef99 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11e0efa3 jmp 0x11e0efb4 */
  goto L_11e0efb4;
L_11e0efa5:;
  /* 11e0efa5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e0efab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0efae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11e0efb4:;
  /* 11e0efb4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0efbb jge 0x11e0f05f */
  if ((C.sf==C.of)) goto L_11e0f05f;
  /* 11e0efc1 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0efc8 jle 0x11e0effb */
  if ((C.zf||C.sf!=C.of)) goto L_11e0effb;
  /* 11e0efca push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0efcc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e0efd2 mov dl, byte ptr [ecx*2 + 0x11e308ac] */
  DL = (r8((uint32_t)(ECX*2 + 0x11e308ac)));
  /* 11e0efd9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11e0efdf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11e0efe5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0efea push eax */
  push32((uint32_t)(EAX));
  /* 11e0efeb call 0x11e02520 */
  push32(0x11e0eff0u); f_11e02520();
  /* 11e0eff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0eff3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11e0eff9 jmp 0x11e0f02e */
  goto L_11e0f02e;
L_11e0effb:;
  /* 11e0effb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e0f001 mov dl, byte ptr [ecx*2 + 0x11e308ac] */
  DL = (r8((uint32_t)(ECX*2 + 0x11e308ac)));
  /* 11e0f008 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11e0f00e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11e0f014 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f019 mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0f01f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f021 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0f025 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f028 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11e0f02e:;
  /* 11e0f02e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f035 je 0x11e0f058 */
  if (C.zf) goto L_11e0f058;
  /* 11e0f037 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e0f03d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0f040 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0f043 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11e0f04a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11e0f04e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e0f054 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e0f056 jmp 0x11e0f05a */
  goto L_11e0f05a;
L_11e0f058:;
  /* 11e0f058 jmp 0x11e0f05f */
  goto L_11e0f05f;
L_11e0f05a:;
  /* 11e0f05a jmp 0x11e0efa5 */
  goto L_11e0efa5;
L_11e0f05f:;
  /* 11e0f05f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f061 jmp 0x11e0f066 */
  goto L_11e0f066;
L_11e0f063:;
  /* 11e0f063 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e0f066:;
  /* 11e0f066 mov esp, ebp */
  ESP = (EBP);
  /* 11e0f068 pop ebp */
  EBP = (pop32());
  /* 11e0f069 ret  */
  ESPCHK(0x11e0ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f070 @ 0x11e0f070 (10 bytes, 5 insns) */
void f_11e0f070(void) {
  FTRACE(0x11e0f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f070 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f071 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f073 mov eax, dword ptr [0x11e2f2b8] */
  EAX = (r32((uint32_t)(0x11e2f2b8)));
  /* 11e0f078 pop ebp */
  EBP = (pop32());
  /* 11e0f079 ret  */
  ESPCHK(0x11e0f070u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f080 @ 0x11e0f080 (575 bytes, 196 insns) */
void f_11e0f080(void) {
  FTRACE(0x11e0f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f080 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f081 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f083 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e0f085 push 0x11e2bc80 */
  push32((uint32_t)(0x11e2bc80u));
  /* 11e0f08a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11e0f08f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e0f095 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f096 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e0f09d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f0a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0f0a1 push esi */
  push32((uint32_t)(ESI));
  /* 11e0f0a2 push edi */
  push32((uint32_t)(EDI));
  /* 11e0f0a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e0f0a6 cmp dword ptr [0x11e308b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e308b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f0ad jne 0x11e0f0fe */
  if (!C.zf) goto L_11e0f0fe;
  /* 11e0f0af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e0f0b2 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f0b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0f0b5 push 0x11e2b3b0 */
  push32((uint32_t)(0x11e2b3b0u));
  /* 11e0f0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0f0bc call dword ptr [0x11e3333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3333c))), 0x11e0f0c2u);
  /* 11e0f0c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0f0c4 je 0x11e0f0d2 */
  if (C.zf) goto L_11e0f0d2;
  /* 11e0f0c6 mov dword ptr [0x11e308b8], 1 */
  w32((uint32_t)(0x11e308b8), (0x1u));
  /* 11e0f0d0 jmp 0x11e0f0fe */
  goto L_11e0f0fe;
L_11e0f0d2:;
  /* 11e0f0d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11e0f0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f0d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0f0d8 push 0x11e2b3ac */
  push32((uint32_t)(0x11e2b3acu));
  /* 11e0f0dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0f0df push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f0e1 call dword ptr [0x11e33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33340))), 0x11e0f0e7u);
  /* 11e0f0e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0f0e9 je 0x11e0f0f7 */
  if (C.zf) goto L_11e0f0f7;
  /* 11e0f0eb mov dword ptr [0x11e308b8], 2 */
  w32((uint32_t)(0x11e308b8), (0x2u));
  /* 11e0f0f5 jmp 0x11e0f0fe */
  goto L_11e0f0fe;
L_11e0f0f7:;
  /* 11e0f0f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f0f9 jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f0fe:;
  /* 11e0f0fe cmp dword ptr [0x11e308b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e308b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f105 jne 0x11e0f122 */
  if (!C.zf) goto L_11e0f122;
  /* 11e0f107 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0f10a push edx */
  push32((uint32_t)(EDX));
  /* 11e0f10b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f10e push eax */
  push32((uint32_t)(EAX));
  /* 11e0f10f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0f112 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f116 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f117 call dword ptr [0x11e3333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3333c))), 0x11e0f11du);
  /* 11e0f11d jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f122:;
  /* 11e0f122 cmp dword ptr [0x11e308b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e308b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f129 jne 0x11e0f2d7 */
  if (!C.zf) goto L_11e0f2d7;
  /* 11e0f12f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f133 jne 0x11e0f13d */
  if (!C.zf) goto L_11e0f13d;
  /* 11e0f135 mov eax, dword ptr [0x11e3083c] */
  EAX = (r32((uint32_t)(0x11e3083c)));
  /* 11e0f13a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11e0f13d:;
  /* 11e0f13d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f13f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f141 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f143 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f145 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f148 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f149 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0f14c push edx */
  push32((uint32_t)(EDX));
  /* 11e0f14d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e0f152 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0f155 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f156 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e0f15cu);
  /* 11e0f15c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e0f15f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f163 jne 0x11e0f16c */
  if (!C.zf) goto L_11e0f16c;
  /* 11e0f165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f167 jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f16c:;
  /* 11e0f16c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0f173 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0f176 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f179 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e0f17b call 0x11e01780 */
  push32(0x11e0f180u); f_11e01780();
  /* 11e0f180 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11e0f183 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e0f186 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e0f189 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e0f18c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0f18f push edx */
  push32((uint32_t)(EDX));
  /* 11e0f190 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f192 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0f195 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f196 call 0x11e03290 */
  push32(0x11e0f19bu); f_11e03290();
  /* 11e0f19b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f19e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e0f1a5 jmp 0x11e0f1be */
  goto L_11e0f1be;
  /* 11e0f1a7 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0f1ac ret  */
  ESPCHK(0x11e0f080u, _esp0);
  ESP += 4; return;
  /* 11e0f1ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0f1b0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11e0f1b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e0f1be:;
  /* 11e0f1be cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f1c2 jne 0x11e0f1cb */
  if (!C.zf) goto L_11e0f1cb;
  /* 11e0f1c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f1c6 jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f1cb:;
  /* 11e0f1cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f1cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f1cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0f1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f1d3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0f1d6 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f1d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f1da push eax */
  push32((uint32_t)(EAX));
  /* 11e0f1db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0f1de push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f1df push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e0f1e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e0f1e7 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f1e8 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e0f1eeu);
  /* 11e0f1ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0f1f0 jne 0x11e0f1f9 */
  if (!C.zf) goto L_11e0f1f9;
  /* 11e0f1f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f1f4 jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f1f9:;
  /* 11e0f1f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e0f200 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0f203 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11e0f207 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f20a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e0f20c call 0x11e01780 */
  push32(0x11e0f211u); f_11e01780();
  /* 11e0f211 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11e0f214 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e0f217 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e0f21a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e0f21d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e0f224 jmp 0x11e0f23d */
  goto L_11e0f23d;
  /* 11e0f226 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0f22b ret  */
  ESPCHK(0x11e0f080u, _esp0);
  ESP += 4; return;
  /* 11e0f22c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e0f22f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e0f236 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e0f23d:;
  /* 11e0f23d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f241 jne 0x11e0f24a */
  if (!C.zf) goto L_11e0f24a;
  /* 11e0f243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f245 jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f24a:;
  /* 11e0f24a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f24e jne 0x11e0f259 */
  if (!C.zf) goto L_11e0f259;
  /* 11e0f250 mov edx, dword ptr [0x11e3082c] */
  EDX = (r32((uint32_t)(0x11e3082c)));
  /* 11e0f256 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11e0f259:;
  /* 11e0f259 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f25c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0f25f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11e0f265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f268 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0f26b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11e0f272 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0f275 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f276 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e0f279 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f27a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e0f27d push eax */
  push32((uint32_t)(EAX));
  /* 11e0f27e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f281 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f282 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e0f285 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f286 call dword ptr [0x11e33340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33340))), 0x11e0f28cu);
  /* 11e0f28c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e0f28f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f292 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0f295 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f297 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11e0f29c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f2a2 je 0x11e0f2b8 */
  if (C.zf) goto L_11e0f2b8;
  /* 11e0f2a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f2a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0f2aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f2ac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0f2b0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f2b6 je 0x11e0f2bc */
  if (C.zf) goto L_11e0f2bc;
L_11e0f2b8:;
  /* 11e0f2b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f2ba jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f2bc:;
  /* 11e0f2bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f2bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e0f2c1 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f2c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e0f2c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f2c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0f2c9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f2ca call 0x11e032f0 */
  push32(0x11e0f2cfu); f_11e032f0();
  /* 11e0f2cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f2d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e0f2d5 jmp 0x11e0f2d9 */
  goto L_11e0f2d9;
L_11e0f2d7:;
  /* 11e0f2d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0f2d9:;
  /* 11e0f2d9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11e0f2dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e0f2df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e0f2e6 pop edi */
  EDI = (pop32());
  /* 11e0f2e7 pop esi */
  ESI = (pop32());
  /* 11e0f2e8 pop ebx */
  EBX = (pop32());
  /* 11e0f2e9 mov esp, ebp */
  ESP = (EBP);
  /* 11e0f2eb pop ebp */
  EBP = (pop32());
  /* 11e0f2ec ret  */
  ESPCHK(0x11e0f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f2f0 @ 0x11e0f2f0 (208 bytes, 85 insns) */
void f_11e0f2f0(void) {
  FTRACE(0x11e0f2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f2f3 push edi */
  push32((uint32_t)(EDI));
  /* 11e0f2f4 push esi */
  push32((uint32_t)(ESI));
  /* 11e0f2f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0f2f6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0f2f9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f2fc lea eax, [0x11e30824] */
  EAX = ((uint32_t)(0x11e30824));
  /* 11e0f302 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f306 jne 0x11e0f343 */
  if (!C.zf) goto L_11e0f343;
  /* 11e0f308 mov al, 0xff */
  AL = (0xffu);
  /* 11e0f30a mov edi, edi */
  EDI = (EDI);
L_11e0f30c:;
  /* 11e0f30c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0f30e je 0x11e0f33e */
  if (C.zf) goto L_11e0f33e;
  /* 11e0f310 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e0f312 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e0f313 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11e0f315 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e0f316 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f318 je 0x11e0f30c */
  if (C.zf) goto L_11e0f30c;
  /* 11e0f31a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0f31c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f31e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0f320 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e0f323 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0f325 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0f327 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11e0f329 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0f32b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f32d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0f32f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e0f332 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0f334 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e0f336 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f338 je 0x11e0f30c */
  if (C.zf) goto L_11e0f30c;
  /* 11e0f33a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e0f33c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11e0f33e:;
  /* 11e0f33e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11e0f341 jmp 0x11e0f3bb */
  goto L_11e0f3bb;
L_11e0f343:;
  /* 11e0f343 lock inc dword ptr [0x11e309ac] */
  x86_unimpl("lock inc @ 0x11e0f343");
  /* 11e0f34a cmp dword ptr [0x11e3099c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3099c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f351 jg 0x11e0f357 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0f357;
  /* 11e0f353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f355 jmp 0x11e0f36c */
  goto L_11e0f36c;
L_11e0f357:;
  /* 11e0f357 lock dec dword ptr [0x11e309ac] */
  x86_unimpl("lock dec @ 0x11e0f357");
  /* 11e0f35e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e0f360 call 0x11dfbd50 */
  push32(0x11e0f365u); f_11dfbd50();
  /* 11e0f365 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11e0f36c:;
  /* 11e0f36c mov eax, 0xff */
  EAX = (0xffu);
  /* 11e0f371 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e0f373 nop  */
  /* nop */
L_11e0f374:;
  /* 11e0f374 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0f376 je 0x11e0f39f */
  if (C.zf) goto L_11e0f39f;
  /* 11e0f378 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e0f37a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e0f37b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e0f37d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e0f37e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f380 je 0x11e0f374 */
  if (C.zf) goto L_11e0f374;
  /* 11e0f382 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f383 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0f384 call 0x11e02690 */
  push32(0x11e0f389u); f_11e02690();
  /* 11e0f389 mov ebx, eax */
  EBX = (EAX);
  /* 11e0f38b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f38e call 0x11e02690 */
  push32(0x11e0f393u); f_11e02690();
  /* 11e0f393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f396 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f398 je 0x11e0f374 */
  if (C.zf) goto L_11e0f374;
  /* 11e0f39a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0f39c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e0f39f:;
  /* 11e0f39f mov ebx, eax */
  EBX = (EAX);
  /* 11e0f3a1 pop eax */
  EAX = (pop32());
  /* 11e0f3a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f3a4 jne 0x11e0f3af */
  if (!C.zf) goto L_11e0f3af;
  /* 11e0f3a6 lock dec dword ptr [0x11e309ac] */
  x86_unimpl("lock dec @ 0x11e0f3a6");
  /* 11e0f3ad jmp 0x11e0f3b9 */
  goto L_11e0f3b9;
L_11e0f3af:;
  /* 11e0f3af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e0f3b1 call 0x11dfbdf0 */
  push32(0x11e0f3b6u); f_11dfbdf0();
  /* 11e0f3b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0f3b9:;
  /* 11e0f3b9 mov eax, ebx */
  EAX = (EBX);
L_11e0f3bb:;
  /* 11e0f3bb pop ebx */
  EBX = (pop32());
  /* 11e0f3bc pop esi */
  ESI = (pop32());
  /* 11e0f3bd pop edi */
  EDI = (pop32());
  /* 11e0f3be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0f3bf ret  */
  ESPCHK(0x11e0f2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f3c0 @ 0x11e0f3c0 (257 bytes, 103 insns) */
void f_11e0f3c0(void) {
  FTRACE(0x11e0f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f3c3 push edi */
  push32((uint32_t)(EDI));
  /* 11e0f3c4 push esi */
  push32((uint32_t)(ESI));
  /* 11e0f3c5 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0f3c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0f3c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f3cb je 0x11e0f4ba */
  if (C.zf) goto L_11e0f4ba;
  /* 11e0f3d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f3d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0f3d7 lea eax, [0x11e30824] */
  EAX = ((uint32_t)(0x11e30824));
  /* 11e0f3dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f3e1 jne 0x11e0f431 */
  if (!C.zf) goto L_11e0f431;
  /* 11e0f3e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11e0f3e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11e0f3e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11e0f3e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e0f3ec:;
  /* 11e0f3ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11e0f3ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e0f3f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11e0f3f2 je 0x11e0f415 */
  if (C.zf) goto L_11e0f415;
  /* 11e0f3f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e0f3f6 je 0x11e0f415 */
  if (C.zf) goto L_11e0f415;
  /* 11e0f3f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e0f3f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e0f3fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f3fc jb 0x11e0f404 */
  if (C.cf) goto L_11e0f404;
  /* 11e0f3fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f400 ja 0x11e0f404 */
  if ((!C.cf&&!C.zf)) goto L_11e0f404;
  /* 11e0f402 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11e0f404:;
  /* 11e0f404 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f406 jb 0x11e0f40e */
  if (C.cf) goto L_11e0f40e;
  /* 11e0f408 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f40a ja 0x11e0f40e */
  if ((!C.cf&&!C.zf)) goto L_11e0f40e;
  /* 11e0f40c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11e0f40e:;
  /* 11e0f40e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f410 jne 0x11e0f41f */
  if (!C.zf) goto L_11e0f41f;
  /* 11e0f412 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e0f413 jne 0x11e0f3ec */
  if (!C.zf) goto L_11e0f3ec;
L_11e0f415:;
  /* 11e0f415 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f417 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e0f419 je 0x11e0f4ba */
  if (C.zf) goto L_11e0f4ba;
L_11e0f41f:;
  /* 11e0f41f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11e0f424 jb 0x11e0f4ba */
  if (C.cf) goto L_11e0f4ba;
  /* 11e0f42a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0f42c jmp 0x11e0f4ba */
  goto L_11e0f4ba;
L_11e0f431:;
  /* 11e0f431 lock inc dword ptr [0x11e309ac] */
  x86_unimpl("lock inc @ 0x11e0f431");
  /* 11e0f438 cmp dword ptr [0x11e3099c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3099c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f43f jg 0x11e0f445 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0f445;
  /* 11e0f441 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f443 jmp 0x11e0f45e */
  goto L_11e0f45e;
L_11e0f445:;
  /* 11e0f445 lock dec dword ptr [0x11e309ac] */
  x86_unimpl("lock dec @ 0x11e0f445");
  /* 11e0f44c mov ebx, ecx */
  EBX = (ECX);
  /* 11e0f44e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e0f450 call 0x11dfbd50 */
  push32(0x11e0f455u); f_11dfbd50();
  /* 11e0f455 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11e0f45c mov ecx, ebx */
  ECX = (EBX);
L_11e0f45e:;
  /* 11e0f45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f460 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e0f462 mov edi, edi */
  EDI = (EDI);
L_11e0f464:;
  /* 11e0f464 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e0f466 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f468 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e0f46a je 0x11e0f48f */
  if (C.zf) goto L_11e0f48f;
  /* 11e0f46c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e0f46e je 0x11e0f48f */
  if (C.zf) goto L_11e0f48f;
  /* 11e0f470 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e0f471 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e0f472 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f473 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f474 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0f475 call 0x11e02690 */
  push32(0x11e0f47au); f_11e02690();
  /* 11e0f47a mov ebx, eax */
  EBX = (EAX);
  /* 11e0f47c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f47f call 0x11e02690 */
  push32(0x11e0f484u); f_11e02690();
  /* 11e0f484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f487 pop ecx */
  ECX = (pop32());
  /* 11e0f488 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f48a jne 0x11e0f495 */
  if (!C.zf) goto L_11e0f495;
  /* 11e0f48c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e0f48d jne 0x11e0f464 */
  if (!C.zf) goto L_11e0f464;
L_11e0f48f:;
  /* 11e0f48f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f491 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f493 je 0x11e0f49e */
  if (C.zf) goto L_11e0f49e;
L_11e0f495:;
  /* 11e0f495 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11e0f49a jb 0x11e0f49e */
  if (C.cf) goto L_11e0f49e;
  /* 11e0f49c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11e0f49e:;
  /* 11e0f49e pop eax */
  EAX = (pop32());
  /* 11e0f49f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f4a1 jne 0x11e0f4ac */
  if (!C.zf) goto L_11e0f4ac;
  /* 11e0f4a3 lock dec dword ptr [0x11e309ac] */
  x86_unimpl("lock dec @ 0x11e0f4a3");
  /* 11e0f4aa jmp 0x11e0f4ba */
  goto L_11e0f4ba;
L_11e0f4ac:;
  /* 11e0f4ac mov ebx, ecx */
  EBX = (ECX);
  /* 11e0f4ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e0f4b0 call 0x11dfbdf0 */
  push32(0x11e0f4b5u); f_11dfbdf0();
  /* 11e0f4b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f4b8 mov ecx, ebx */
  ECX = (EBX);
L_11e0f4ba:;
  /* 11e0f4ba mov eax, ecx */
  EAX = (ECX);
  /* 11e0f4bc pop ebx */
  EBX = (pop32());
  /* 11e0f4bd pop esi */
  ESI = (pop32());
  /* 11e0f4be pop edi */
  EDI = (pop32());
  /* 11e0f4bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e0f4c0 ret  */
  ESPCHK(0x11e0f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f4d0 @ 0x11e0f4d0 (255 bytes, 88 insns) */
void f_11e0f4d0(void) {
  FTRACE(0x11e0f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f4d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11e0f4d6:;
  /* 11e0f4d6 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f4dd jle 0x11e0f4f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0f4f6;
  /* 11e0f4df push 8 */
  push32((uint32_t)(0x8u));
  /* 11e0f4e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f4e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f4e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0f4e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f4e9 call 0x11e02520 */
  push32(0x11e0f4eeu); f_11e02520();
  /* 11e0f4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f4f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e0f4f4 jmp 0x11e0f50f */
  goto L_11e0f50f;
L_11e0f4f6:;
  /* 11e0f4f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f4f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f4fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0f4fd mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0f503 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f505 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0f509 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f50c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e0f50f:;
  /* 11e0f50f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f513 je 0x11e0f520 */
  if (C.zf) goto L_11e0f520;
  /* 11e0f515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f518 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f51b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0f51e jmp 0x11e0f4d6 */
  goto L_11e0f4d6;
L_11e0f520:;
  /* 11e0f520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f523 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f525 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0f527 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0f52a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f52d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f530 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0f533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f536 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0f539 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f53d je 0x11e0f545 */
  if (C.zf) goto L_11e0f545;
  /* 11e0f53f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f543 jne 0x11e0f558 */
  if (!C.zf) goto L_11e0f558;
L_11e0f545:;
  /* 11e0f545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f54a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0f54c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0f54f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f555 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e0f558:;
  /* 11e0f558 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e0f55f:;
  /* 11e0f55f cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f566 jle 0x11e0f57b */
  if ((C.zf||C.sf!=C.of)) goto L_11e0f57b;
  /* 11e0f568 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0f56a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f56d push edx */
  push32((uint32_t)(EDX));
  /* 11e0f56e call 0x11e02520 */
  push32(0x11e0f573u); f_11e02520();
  /* 11e0f573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f576 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0f579 jmp 0x11e0f590 */
  goto L_11e0f590;
L_11e0f57b:;
  /* 11e0f57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f57e mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0f584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f586 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0f58a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f58d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e0f590:;
  /* 11e0f590 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f594 je 0x11e0f5bb */
  if (C.zf) goto L_11e0f5bb;
  /* 11e0f596 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0f599 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0f59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f59f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11e0f5a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e0f5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f5a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f5ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0f5ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0f5b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f5b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f5b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e0f5b9 jmp 0x11e0f55f */
  goto L_11e0f55f;
L_11e0f5bb:;
  /* 11e0f5bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f5bf jne 0x11e0f5c8 */
  if (!C.zf) goto L_11e0f5c8;
  /* 11e0f5c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0f5c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0f5c6 jmp 0x11e0f5cb */
  goto L_11e0f5cb;
L_11e0f5c8:;
  /* 11e0f5c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11e0f5cb:;
  /* 11e0f5cb mov esp, ebp */
  ESP = (EBP);
  /* 11e0f5cd pop ebp */
  EBP = (pop32());
  /* 11e0f5ce ret  */
  ESPCHK(0x11e0f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f5d0 @ 0x11e0f5d0 (17 bytes, 8 insns) */
void f_11e0f5d0(void) {
  FTRACE(0x11e0f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f5d6 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f5d7 call 0x11e0f4d0 */
  push32(0x11e0f5dcu); f_11e0f4d0();
  /* 11e0f5dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f5df pop ebp */
  EBP = (pop32());
  /* 11e0f5e0 ret  */
  ESPCHK(0x11e0f5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f5f0 @ 0x11e0f5f0 (297 bytes, 106 insns) */
void f_11e0f5f0(void) {
  FTRACE(0x11e0f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f5f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0f5f6 push esi */
  push32((uint32_t)(ESI));
L_11e0f5f7:;
  /* 11e0f5f7 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f5fe jle 0x11e0f617 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0f617;
  /* 11e0f600 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e0f602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f605 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f607 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e0f609 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f60a call 0x11e02520 */
  push32(0x11e0f60fu); f_11e02520();
  /* 11e0f60f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f612 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e0f615 jmp 0x11e0f630 */
  goto L_11e0f630;
L_11e0f617:;
  /* 11e0f617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f61a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f61c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0f61e mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0f624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f626 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0f62a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f62d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11e0f630:;
  /* 11e0f630 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f634 je 0x11e0f641 */
  if (C.zf) goto L_11e0f641;
  /* 11e0f636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f63c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0f63f jmp 0x11e0f5f7 */
  goto L_11e0f5f7;
L_11e0f641:;
  /* 11e0f641 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f646 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e0f648 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e0f64b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f64e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f651 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e0f654 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f657 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e0f65a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f65e je 0x11e0f666 */
  if (C.zf) goto L_11e0f666;
  /* 11e0f660 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f664 jne 0x11e0f679 */
  if (!C.zf) goto L_11e0f679;
L_11e0f666:;
  /* 11e0f666 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f66b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0f66d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0f670 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f673 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f676 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11e0f679:;
  /* 11e0f679 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e0f680 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e0f687:;
  /* 11e0f687 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f68e jle 0x11e0f6a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0f6a3;
  /* 11e0f690 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0f692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f695 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f696 call 0x11e02520 */
  push32(0x11e0f69bu); f_11e02520();
  /* 11e0f69b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f69e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e0f6a1 jmp 0x11e0f6b8 */
  goto L_11e0f6b8;
L_11e0f6a3:;
  /* 11e0f6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f6a6 mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11e0f6ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f6ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e0f6b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f6b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11e0f6b8:;
  /* 11e0f6b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f6bc je 0x11e0f6f9 */
  if (C.zf) goto L_11e0f6f9;
  /* 11e0f6be push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f6c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e0f6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0f6c5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f6c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0f6c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f6ca call 0x11e10580 */
  push32(0x11e0f6cfu); f_11e10580();
  /* 11e0f6cf mov ecx, eax */
  ECX = (EAX);
  /* 11e0f6d1 mov esi, edx */
  ESI = (EDX);
  /* 11e0f6d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f6d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0f6d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e0f6da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f6dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f6de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0f6e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11e0f6e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f6e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f6e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e0f6eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0f6ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f6f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f6f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e0f6f7 jmp 0x11e0f687 */
  goto L_11e0f687;
L_11e0f6f9:;
  /* 11e0f6f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f6fd jne 0x11e0f70e */
  if (!C.zf) goto L_11e0f70e;
  /* 11e0f6ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0f702 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0f704 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e0f707 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f70a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0f70c jmp 0x11e0f714 */
  goto L_11e0f714;
L_11e0f70e:;
  /* 11e0f70e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0f711 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11e0f714:;
  /* 11e0f714 pop esi */
  ESI = (pop32());
  /* 11e0f715 mov esp, ebp */
  ESP = (EBP);
  /* 11e0f717 pop ebp */
  EBP = (pop32());
  /* 11e0f718 ret  */
  ESPCHK(0x11e0f5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f720 @ 0x11e0f720 (122 bytes, 39 insns) */
void f_11e0f720(void) {
  FTRACE(0x11e0f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f720 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f721 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f723 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f727 cmp eax, dword ptr [0x11e3211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f72d jae 0x11e0f751 */
  if (!C.cf) goto L_11e0f751;
  /* 11e0f72f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f732 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e0f735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f738 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f73b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0f73e mov eax, dword ptr [ecx*4 + 0x11e31fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e31fe0)));
  /* 11e0f745 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e0f74a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f74d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0f74f jne 0x11e0f76c */
  if (!C.zf) goto L_11e0f76c;
L_11e0f751:;
  /* 11e0f751 call 0x11e07270 */
  push32(0x11e0f756u); f_11e07270();
  /* 11e0f756 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e0f75c call 0x11e07280 */
  push32(0x11e0f761u); f_11e07280();
  /* 11e0f761 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e0f767 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f76a jmp 0x11e0f796 */
  goto L_11e0f796;
L_11e0f76c:;
  /* 11e0f76c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f76f push edx */
  push32((uint32_t)(EDX));
  /* 11e0f770 call 0x11e0a810 */
  push32(0x11e0f775u); f_11e0a810();
  /* 11e0f775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f77b push eax */
  push32((uint32_t)(EAX));
  /* 11e0f77c call 0x11e0f7a0 */
  push32(0x11e0f781u); f_11e0f7a0();
  /* 11e0f781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f784 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0f787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f78a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f78b call 0x11e0a8a0 */
  push32(0x11e0f790u); f_11e0a8a0();
  /* 11e0f790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e0f796:;
  /* 11e0f796 mov esp, ebp */
  ESP = (EBP);
  /* 11e0f798 pop ebp */
  EBP = (pop32());
  /* 11e0f799 ret  */
  ESPCHK(0x11e0f720u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11e0f7a0 (170 bytes, 59 insns) */
void f_11e0f7a0(void) {
  FTRACE(0x11e0f7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f7a4 push esi */
  push32((uint32_t)(ESI));
  /* 11e0f7a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f7a8 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f7a9 call 0x11e0a690 */
  push32(0x11e0f7aeu); f_11e0a690();
  /* 11e0f7ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f7b1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f7b4 je 0x11e0f7f3 */
  if (C.zf) goto L_11e0f7f3;
  /* 11e0f7b6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f7ba je 0x11e0f7c2 */
  if (C.zf) goto L_11e0f7c2;
  /* 11e0f7bc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f7c0 jne 0x11e0f7dc */
  if (!C.zf) goto L_11e0f7dc;
L_11e0f7c2:;
  /* 11e0f7c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0f7c4 call 0x11e0a690 */
  push32(0x11e0f7c9u); f_11e0a690();
  /* 11e0f7c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f7cc mov esi, eax */
  ESI = (EAX);
  /* 11e0f7ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0f7d0 call 0x11e0a690 */
  push32(0x11e0f7d5u); f_11e0a690();
  /* 11e0f7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f7d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f7da je 0x11e0f7f3 */
  if (C.zf) goto L_11e0f7f3;
L_11e0f7dc:;
  /* 11e0f7dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f7df push ecx */
  push32((uint32_t)(ECX));
  /* 11e0f7e0 call 0x11e0a690 */
  push32(0x11e0f7e5u); f_11e0a690();
  /* 11e0f7e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f7e8 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f7e9 call dword ptr [0x11e3330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3330c))), 0x11e0f7efu);
  /* 11e0f7ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0f7f1 je 0x11e0f7fc */
  if (C.zf) goto L_11e0f7fc;
L_11e0f7f3:;
  /* 11e0f7f3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0f7fa jmp 0x11e0f805 */
  goto L_11e0f805;
L_11e0f7fc:;
  /* 11e0f7fc call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11e0f802u);
  /* 11e0f802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e0f805:;
  /* 11e0f805 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f808 push edx */
  push32((uint32_t)(EDX));
  /* 11e0f809 call 0x11e0a5b0 */
  push32(0x11e0f80eu); f_11e0a5b0();
  /* 11e0f80e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f811 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f814 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e0f817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f81a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f81d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0f820 mov edx, dword ptr [eax*4 + 0x11e31fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e31fe0)));
  /* 11e0f827 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11e0f82c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f830 je 0x11e0f843 */
  if (C.zf) goto L_11e0f843;
  /* 11e0f832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0f835 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f836 call 0x11e071d0 */
  push32(0x11e0f83bu); f_11e071d0();
  /* 11e0f83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f83e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f841 jmp 0x11e0f845 */
  goto L_11e0f845;
L_11e0f843:;
  /* 11e0f843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e0f845:;
  /* 11e0f845 pop esi */
  ESI = (pop32());
  /* 11e0f846 mov esp, ebp */
  ESP = (EBP);
  /* 11e0f848 pop ebp */
  EBP = (pop32());
  /* 11e0f849 ret  */
  ESPCHK(0x11e0f7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f850 @ 0x11e0f850 (146 bytes, 52 insns) */
void f_11e0f850(void) {
  FTRACE(0x11e0f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f850 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f851 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f853 push ebx */
  push32((uint32_t)(EBX));
  /* 11e0f854 push esi */
  push32((uint32_t)(ESI));
  /* 11e0f855 push edi */
  push32((uint32_t)(EDI));
L_11e0f856:;
  /* 11e0f856 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f85a jne 0x11e0f87a */
  if (!C.zf) goto L_11e0f87a;
  /* 11e0f85c push 0x11e2bb30 */
  push32((uint32_t)(0x11e2bb30u));
  /* 11e0f861 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0f863 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e0f865 push 0x11e2bc98 */
  push32((uint32_t)(0x11e2bc98u));
  /* 11e0f86a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0f86c call 0x11dfaa10 */
  push32(0x11e0f871u); f_11dfaa10();
  /* 11e0f871 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f874 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f877 jne 0x11e0f87a */
  if (!C.zf) goto L_11e0f87a;
  /* 11e0f879 int3  */
  x86_unimpl("int3 @ 0x11e0f879");
L_11e0f87a:;
  /* 11e0f87a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0f87c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0f87e jne 0x11e0f856 */
  if (!C.zf) goto L_11e0f856;
  /* 11e0f880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f883 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0f886 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f88c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0f88e je 0x11e0f8dd */
  if (C.zf) goto L_11e0f8dd;
  /* 11e0f890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f893 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e0f896 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e0f899 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0f89b je 0x11e0f8dd */
  if (C.zf) goto L_11e0f8dd;
  /* 11e0f89d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0f89f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f8a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0f8a5 push eax */
  push32((uint32_t)(EAX));
  /* 11e0f8a6 call 0x11dfc8e0 */
  push32(0x11e0f8abu); f_11dfc8e0();
  /* 11e0f8ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f8ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f8b1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e0f8b4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f8ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f8bd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e0f8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f8c3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11e0f8c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f8cc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11e0f8d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0f8d6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11e0f8dd:;
  /* 11e0f8dd pop edi */
  EDI = (pop32());
  /* 11e0f8de pop esi */
  ESI = (pop32());
  /* 11e0f8df pop ebx */
  EBX = (pop32());
  /* 11e0f8e0 pop ebp */
  EBP = (pop32());
  /* 11e0f8e1 ret  */
  ESPCHK(0x11e0f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f8f0 @ 0x11e0f8f0 (61 bytes, 18 insns) */
void f_11e0f8f0(void) {
  FTRACE(0x11e0f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f8f3 cmp dword ptr [0x11e30978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f8fa jne 0x11e0f92b */
  if (!C.zf) goto L_11e0f92b;
  /* 11e0f8fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0f8fe call 0x11dfbd50 */
  push32(0x11e0f903u); f_11dfbd50();
  /* 11e0f903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f906 cmp dword ptr [0x11e30978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f90d jne 0x11e0f921 */
  if (!C.zf) goto L_11e0f921;
  /* 11e0f90f call 0x11e0f950 */
  push32(0x11e0f914u); f_11e0f950();
  /* 11e0f914 mov eax, dword ptr [0x11e30978] */
  EAX = (r32((uint32_t)(0x11e30978)));
  /* 11e0f919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f91c mov dword ptr [0x11e30978], eax */
  w32((uint32_t)(0x11e30978), (EAX));
L_11e0f921:;
  /* 11e0f921 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0f923 call 0x11dfbdf0 */
  push32(0x11e0f928u); f_11dfbdf0();
  /* 11e0f928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0f92b:;
  /* 11e0f92b pop ebp */
  EBP = (pop32());
  /* 11e0f92c ret  */
  ESPCHK(0x11e0f8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f930 @ 0x11e0f930 (30 bytes, 11 insns) */
void f_11e0f930(void) {
  FTRACE(0x11e0f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f930 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f931 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f933 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0f935 call 0x11dfbd50 */
  push32(0x11e0f93au); f_11dfbd50();
  /* 11e0f93a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f93d call 0x11e0f950 */
  push32(0x11e0f942u); f_11e0f950();
  /* 11e0f942 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0f944 call 0x11dfbdf0 */
  push32(0x11e0f949u); f_11dfbdf0();
  /* 11e0f949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f94c pop ebp */
  EBP = (pop32());
  /* 11e0f94d ret  */
  ESPCHK(0x11e0f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001f950 @ 0x11e0f950 (939 bytes, 266 insns) */
void f_11e0f950(void) {
  FTRACE(0x11e0f950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0f950 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0f951 mov ebp, esp */
  EBP = (ESP);
  /* 11e0f953 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0f956 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e0f95d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e0f95f call 0x11dfbd50 */
  push32(0x11e0f964u); f_11dfbd50();
  /* 11e0f964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f967 mov dword ptr [0x11e308c0], 0 */
  w32((uint32_t)(0x11e308c0), (0x0u));
  /* 11e0f971 mov dword ptr [0x11e2f620], 0xffffffff */
  w32((uint32_t)(0x11e2f620), (0xffffffffu));
  /* 11e0f97b mov eax, dword ptr [0x11e2f620] */
  EAX = (r32((uint32_t)(0x11e2f620)));
  /* 11e0f980 mov dword ptr [0x11e2f610], eax */
  w32((uint32_t)(0x11e2f610), (EAX));
  /* 11e0f985 push 0x11e2bcec */
  push32((uint32_t)(0x11e2bcecu));
  /* 11e0f98a call 0x11e105f0 */
  push32(0x11e0f98fu); f_11e105f0();
  /* 11e0f98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f992 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0f995 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f999 jne 0x11e0fad3 */
  if (!C.zf) goto L_11e0fad3;
  /* 11e0f99f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e0f9a1 call 0x11dfbdf0 */
  push32(0x11e0f9a6u); f_11dfbdf0();
  /* 11e0f9a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f9a9 push 0x11e308c8 */
  push32((uint32_t)(0x11e308c8u));
  /* 11e0f9ae call dword ptr [0x11e33308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33308))), 0x11e0f9b4u);
  /* 11e0f9b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0f9b7 je 0x11e0face */
  if (C.zf) goto L_11e0face;
  /* 11e0f9bd mov dword ptr [0x11e308c0], 1 */
  w32((uint32_t)(0x11e308c0), (0x1u));
  /* 11e0f9c7 mov ecx, dword ptr [0x11e308c8] */
  ECX = (r32((uint32_t)(0x11e308c8)));
  /* 11e0f9cd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0f9d0 mov dword ptr [0x11e2f57c], ecx */
  w32((uint32_t)(0x11e2f57c), (ECX));
  /* 11e0f9d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f9d8 mov dx, word ptr [0x11e3090e] */
  DX = (r16((uint32_t)(0x11e3090e)));
  /* 11e0f9df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0f9e1 je 0x11e0f9f9 */
  if (C.zf) goto L_11e0f9f9;
  /* 11e0f9e3 mov eax, dword ptr [0x11e3091c] */
  EAX = (r32((uint32_t)(0x11e3091c)));
  /* 11e0f9e8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0f9eb mov ecx, dword ptr [0x11e2f57c] */
  ECX = (r32((uint32_t)(0x11e2f57c)));
  /* 11e0f9f1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0f9f3 mov dword ptr [0x11e2f57c], ecx */
  w32((uint32_t)(0x11e2f57c), (ECX));
L_11e0f9f9:;
  /* 11e0f9f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0f9fb mov dx, word ptr [0x11e30962] */
  DX = (r16((uint32_t)(0x11e30962)));
  /* 11e0fa02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e0fa04 je 0x11e0fa2e */
  if (C.zf) goto L_11e0fa2e;
  /* 11e0fa06 cmp dword ptr [0x11e30970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fa0d je 0x11e0fa2e */
  if (C.zf) goto L_11e0fa2e;
  /* 11e0fa0f mov dword ptr [0x11e2f580], 1 */
  w32((uint32_t)(0x11e2f580), (0x1u));
  /* 11e0fa19 mov eax, dword ptr [0x11e30970] */
  EAX = (r32((uint32_t)(0x11e30970)));
  /* 11e0fa1e sub eax, dword ptr [0x11e3091c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e3091c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0fa24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0fa27 mov dword ptr [0x11e2f584], eax */
  w32((uint32_t)(0x11e2f584), (EAX));
  /* 11e0fa2c jmp 0x11e0fa42 */
  goto L_11e0fa42;
L_11e0fa2e:;
  /* 11e0fa2e mov dword ptr [0x11e2f580], 0 */
  w32((uint32_t)(0x11e2f580), (0x0u));
  /* 11e0fa38 mov dword ptr [0x11e2f584], 0 */
  w32((uint32_t)(0x11e2f584), (0x0u));
L_11e0fa42:;
  /* 11e0fa42 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11e0fa45 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fa46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fa48 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e0fa4a mov edx, dword ptr [0x11e2f608] */
  EDX = (r32((uint32_t)(0x11e2f608)));
  /* 11e0fa50 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fa51 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e0fa53 push 0x11e308cc */
  push32((uint32_t)(0x11e308ccu));
  /* 11e0fa58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e0fa5d mov eax, dword ptr [0x11e3083c] */
  EAX = (r32((uint32_t)(0x11e3083c)));
  /* 11e0fa62 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fa63 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e0fa69u);
  /* 11e0fa69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0fa6b je 0x11e0fa7f */
  if (C.zf) goto L_11e0fa7f;
  /* 11e0fa6d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fa71 jne 0x11e0fa7f */
  if (!C.zf) goto L_11e0fa7f;
  /* 11e0fa73 mov ecx, dword ptr [0x11e2f608] */
  ECX = (r32((uint32_t)(0x11e2f608)));
  /* 11e0fa79 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11e0fa7d jmp 0x11e0fa88 */
  goto L_11e0fa88;
L_11e0fa7f:;
  /* 11e0fa7f mov edx, dword ptr [0x11e2f608] */
  EDX = (r32((uint32_t)(0x11e2f608)));
  /* 11e0fa85 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11e0fa88:;
  /* 11e0fa88 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e0fa8b push eax */
  push32((uint32_t)(EAX));
  /* 11e0fa8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fa8e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11e0fa90 mov ecx, dword ptr [0x11e2f60c] */
  ECX = (r32((uint32_t)(0x11e2f60c)));
  /* 11e0fa96 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fa97 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e0fa99 push 0x11e30920 */
  push32((uint32_t)(0x11e30920u));
  /* 11e0fa9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e0faa3 mov edx, dword ptr [0x11e3083c] */
  EDX = (r32((uint32_t)(0x11e3083c)));
  /* 11e0faa9 push edx */
  push32((uint32_t)(EDX));
  /* 11e0faaa call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e0fab0u);
  /* 11e0fab0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0fab2 je 0x11e0fac5 */
  if (C.zf) goto L_11e0fac5;
  /* 11e0fab4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fab8 jne 0x11e0fac5 */
  if (!C.zf) goto L_11e0fac5;
  /* 11e0faba mov eax, dword ptr [0x11e2f60c] */
  EAX = (r32((uint32_t)(0x11e2f60c)));
  /* 11e0fabf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11e0fac3 jmp 0x11e0face */
  goto L_11e0face;
L_11e0fac5:;
  /* 11e0fac5 mov ecx, dword ptr [0x11e2f60c] */
  ECX = (r32((uint32_t)(0x11e2f60c)));
  /* 11e0facb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11e0face:;
  /* 11e0face jmp 0x11e0fcf7 */
  goto L_11e0fcf7;
L_11e0fad3:;
  /* 11e0fad3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fad6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0fad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0fadb je 0x11e0fafd */
  if (C.zf) goto L_11e0fafd;
  /* 11e0fadd cmp dword ptr [0x11e30974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fae4 je 0x11e0fb0c */
  if (C.zf) goto L_11e0fb0c;
  /* 11e0fae6 mov ecx, dword ptr [0x11e30974] */
  ECX = (r32((uint32_t)(0x11e30974)));
  /* 11e0faec push ecx */
  push32((uint32_t)(ECX));
  /* 11e0faed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0faf0 push edx */
  push32((uint32_t)(EDX));
  /* 11e0faf1 call 0x11e05920 */
  push32(0x11e0faf6u); f_11e05920();
  /* 11e0faf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0faf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e0fafb jne 0x11e0fb0c */
  if (!C.zf) goto L_11e0fb0c;
L_11e0fafd:;
  /* 11e0fafd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e0faff call 0x11dfbdf0 */
  push32(0x11e0fb04u); f_11dfbdf0();
  /* 11e0fb04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb07 jmp 0x11e0fcf7 */
  goto L_11e0fcf7;
L_11e0fb0c:;
  /* 11e0fb0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0fb0e mov eax, dword ptr [0x11e30974] */
  EAX = (r32((uint32_t)(0x11e30974)));
  /* 11e0fb13 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fb14 call 0x11dfc8e0 */
  push32(0x11e0fb19u); f_11dfc8e0();
  /* 11e0fb19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb1c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11e0fb21 push 0x11e2bce4 */
  push32((uint32_t)(0x11e2bce4u));
  /* 11e0fb26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0fb28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fb2b push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fb2c call 0x11e01410 */
  push32(0x11e0fb31u); f_11e01410();
  /* 11e0fb31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb37 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fb38 call 0x11dfbe50 */
  push32(0x11e0fb3du); f_11dfbe50();
  /* 11e0fb3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb40 mov dword ptr [0x11e30974], eax */
  w32((uint32_t)(0x11e30974), (EAX));
  /* 11e0fb45 cmp dword ptr [0x11e30974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fb4c jne 0x11e0fb5d */
  if (!C.zf) goto L_11e0fb5d;
  /* 11e0fb4e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e0fb50 call 0x11dfbdf0 */
  push32(0x11e0fb55u); f_11dfbdf0();
  /* 11e0fb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb58 jmp 0x11e0fcf7 */
  goto L_11e0fcf7;
L_11e0fb5d:;
  /* 11e0fb5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fb60 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fb61 mov eax, dword ptr [0x11e30974] */
  EAX = (r32((uint32_t)(0x11e30974)));
  /* 11e0fb66 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fb67 call 0x11e01590 */
  push32(0x11e0fb6cu); f_11e01590();
  /* 11e0fb6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e0fb71 call 0x11dfbdf0 */
  push32(0x11e0fb76u); f_11dfbdf0();
  /* 11e0fb76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb79 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e0fb7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fb7e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fb7f mov edx, dword ptr [0x11e2f608] */
  EDX = (r32((uint32_t)(0x11e2f608)));
  /* 11e0fb85 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fb86 call 0x11e01e00 */
  push32(0x11e0fb8bu); f_11e01e00();
  /* 11e0fb8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb8e mov eax, dword ptr [0x11e2f608] */
  EAX = (r32((uint32_t)(0x11e2f608)));
  /* 11e0fb93 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11e0fb97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fb9a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fb9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0fba0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fba3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0fba6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fba9 jne 0x11e0fbbd */
  if (!C.zf) goto L_11e0fbbd;
  /* 11e0fbab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0fbae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fbb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0fbb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fbb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fbba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e0fbbd:;
  /* 11e0fbbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fbc0 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fbc1 call 0x11e0f4d0 */
  push32(0x11e0fbc6u); f_11e0f4d0();
  /* 11e0fbc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fbc9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0fbcf mov dword ptr [0x11e2f57c], eax */
  w32((uint32_t)(0x11e2f57c), (EAX));
L_11e0fbd4:;
  /* 11e0fbd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fbd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0fbda cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fbdd je 0x11e0fbf5 */
  if (C.zf) goto L_11e0fbf5;
  /* 11e0fbdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fbe2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0fbe5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fbe8 jl 0x11e0fc00 */
  if ((C.sf!=C.of)) goto L_11e0fc00;
  /* 11e0fbea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fbed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0fbf0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fbf3 jg 0x11e0fc00 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0fc00;
L_11e0fbf5:;
  /* 11e0fbf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fbf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fbfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0fbfe jmp 0x11e0fbd4 */
  goto L_11e0fbd4;
L_11e0fc00:;
  /* 11e0fc00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0fc06 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fc09 jne 0x11e0fca5 */
  if (!C.zf) goto L_11e0fca5;
  /* 11e0fc0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0fc18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc1b push edx */
  push32((uint32_t)(EDX));
  /* 11e0fc1c call 0x11e0f4d0 */
  push32(0x11e0fc21u); f_11e0f4d0();
  /* 11e0fc21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0fc27 mov ecx, dword ptr [0x11e2f57c] */
  ECX = (r32((uint32_t)(0x11e2f57c)));
  /* 11e0fc2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc2f mov dword ptr [0x11e2f57c], ecx */
  w32((uint32_t)(0x11e2f57c), (ECX));
L_11e0fc35:;
  /* 11e0fc35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc38 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0fc3b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fc3e jl 0x11e0fc56 */
  if ((C.sf!=C.of)) goto L_11e0fc56;
  /* 11e0fc40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0fc46 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fc49 jg 0x11e0fc56 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0fc56;
  /* 11e0fc4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0fc54 jmp 0x11e0fc35 */
  goto L_11e0fc35;
L_11e0fc56:;
  /* 11e0fc56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc59 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e0fc5c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fc5f jne 0x11e0fca5 */
  if (!C.zf) goto L_11e0fca5;
  /* 11e0fc61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e0fc6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc6d push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fc6e call 0x11e0f4d0 */
  push32(0x11e0fc73u); f_11e0f4d0();
  /* 11e0fc73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc76 mov edx, dword ptr [0x11e2f57c] */
  EDX = (r32((uint32_t)(0x11e2f57c)));
  /* 11e0fc7c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fc7e mov dword ptr [0x11e2f57c], edx */
  w32((uint32_t)(0x11e2f57c), (EDX));
L_11e0fc84:;
  /* 11e0fc84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0fc8a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fc8d jl 0x11e0fca5 */
  if ((C.sf!=C.of)) goto L_11e0fca5;
  /* 11e0fc8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e0fc95 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fc98 jg 0x11e0fca5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e0fca5;
  /* 11e0fc9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fc9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fca0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e0fca3 jmp 0x11e0fc84 */
  goto L_11e0fc84;
L_11e0fca5:;
  /* 11e0fca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fca9 je 0x11e0fcb9 */
  if (C.zf) goto L_11e0fcb9;
  /* 11e0fcab mov edx, dword ptr [0x11e2f57c] */
  EDX = (r32((uint32_t)(0x11e2f57c)));
  /* 11e0fcb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e0fcb3 mov dword ptr [0x11e2f57c], edx */
  w32((uint32_t)(0x11e2f57c), (EDX));
L_11e0fcb9:;
  /* 11e0fcb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fcbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e0fcbf mov dword ptr [0x11e2f580], ecx */
  w32((uint32_t)(0x11e2f580), (ECX));
  /* 11e0fcc5 cmp dword ptr [0x11e2f580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2f580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fccc je 0x11e0fcee */
  if (C.zf) goto L_11e0fcee;
  /* 11e0fcce push 3 */
  push32((uint32_t)(0x3u));
  /* 11e0fcd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e0fcd3 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fcd4 mov eax, dword ptr [0x11e2f60c] */
  EAX = (r32((uint32_t)(0x11e2f60c)));
  /* 11e0fcd9 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fcda call 0x11e01e00 */
  push32(0x11e0fcdfu); f_11e01e00();
  /* 11e0fcdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fce2 mov ecx, dword ptr [0x11e2f60c] */
  ECX = (r32((uint32_t)(0x11e2f60c)));
  /* 11e0fce8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11e0fcec jmp 0x11e0fcf7 */
  goto L_11e0fcf7;
L_11e0fcee:;
  /* 11e0fcee mov edx, dword ptr [0x11e2f60c] */
  EDX = (r32((uint32_t)(0x11e2f60c)));
  /* 11e0fcf4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11e0fcf7:;
  /* 11e0fcf7 mov esp, ebp */
  ESP = (EBP);
  /* 11e0fcf9 pop ebp */
  EBP = (pop32());
  /* 11e0fcfa ret  */
  ESPCHK(0x11e0f950u, _esp0);
  ESP += 4; return;
}

