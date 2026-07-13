#include "recomp.h"

/* FUN_10006ae0 @ 0x11486ae0 (25 bytes, 8 insns) */
void f_11486ae0(void) {
  FTRACE(0x11486ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11486ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11486ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11486ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486ae6 mov dword ptr [eax + 0x50], 0x114b4110 */
  w32((uint32_t)(EAX + 0x50), (0x114b4110u));
  /* 11486aed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486af0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11486af7 pop ebp */
  EBP = (pop32());
  /* 11486af8 ret  */
  ESPCHK(0x11486ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x11486b00 (152 bytes, 48 insns) */
void f_11486b00(void) {
  FTRACE(0x11486b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11486b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11486b01 mov ebp, esp */
  EBP = (ESP);
  /* 11486b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11486b06 call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x11486b0cu);
  /* 11486b0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11486b0f mov eax, dword ptr [0x114b3a90] */
  EAX = (r32((uint32_t)(0x114b3a90)));
  /* 11486b14 push eax */
  push32((uint32_t)(EAX));
  /* 11486b15 call dword ptr [0x114b93a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93a8))), 0x11486b1bu);
  /* 11486b1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11486b1e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486b22 jne 0x11486b87 */
  if (!C.zf) goto L_11486b87;
  /* 11486b24 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11486b29 push 0x114b0798 */
  push32((uint32_t)(0x114b0798u));
  /* 11486b2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11486b30 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11486b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11486b34 call 0x114874d0 */
  push32(0x11486b39u); f_114874d0();
  /* 11486b39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11486b3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11486b3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486b43 je 0x11486b7d */
  if (C.zf) goto L_11486b7d;
  /* 11486b45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486b48 push ecx */
  push32((uint32_t)(ECX));
  /* 11486b49 mov edx, dword ptr [0x114b3a90] */
  EDX = (r32((uint32_t)(0x114b3a90)));
  /* 11486b4f push edx */
  push32((uint32_t)(EDX));
  /* 11486b50 call dword ptr [0x114b92b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92b4))), 0x11486b56u);
  /* 11486b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11486b58 je 0x11486b7d */
  if (C.zf) goto L_11486b7d;
  /* 11486b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486b5d push eax */
  push32((uint32_t)(EAX));
  /* 11486b5e call 0x11486ae0 */
  push32(0x11486b63u); f_11486ae0();
  /* 11486b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11486b66 call dword ptr [0x114b92b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92b8))), 0x11486b6cu);
  /* 11486b6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486b6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11486b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486b74 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11486b7b jmp 0x11486b87 */
  goto L_11486b87;
L_11486b7d:;
  /* 11486b7d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11486b7f call 0x11484710 */
  push32(0x11486b84u); f_11484710();
  /* 11486b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486b87:;
  /* 11486b87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11486b8a push eax */
  push32((uint32_t)(EAX));
  /* 11486b8b call dword ptr [0x114b93a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93a4))), 0x11486b91u);
  /* 11486b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486b94 mov esp, ebp */
  ESP = (EBP);
  /* 11486b96 pop ebp */
  EBP = (pop32());
  /* 11486b97 ret  */
  ESPCHK(0x11486b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x11486ba0 (263 bytes, 86 insns) */
void f_11486ba0(void) {
  FTRACE(0x11486ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11486ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11486ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11486ba3 cmp dword ptr [0x114b3a90], -1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3a90))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486baa je 0x11486ca5 */
  if (C.zf) goto L_11486ca5;
  /* 11486bb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486bb4 jne 0x11486bc5 */
  if (!C.zf) goto L_11486bc5;
  /* 11486bb6 mov eax, dword ptr [0x114b3a90] */
  EAX = (r32((uint32_t)(0x114b3a90)));
  /* 11486bbb push eax */
  push32((uint32_t)(EAX));
  /* 11486bbc call dword ptr [0x114b93a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93a8))), 0x11486bc2u);
  /* 11486bc2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11486bc5:;
  /* 11486bc5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486bc9 je 0x11486c96 */
  if (C.zf) goto L_11486c96;
  /* 11486bcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486bd2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486bd6 je 0x11486be9 */
  if (C.zf) goto L_11486be9;
  /* 11486bd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486bda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486bdd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11486be0 push eax */
  push32((uint32_t)(EAX));
  /* 11486be1 call 0x11487b50 */
  push32(0x11486be6u); f_11487b50();
  /* 11486be6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486be9:;
  /* 11486be9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486bec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486bf0 je 0x11486c03 */
  if (C.zf) goto L_11486c03;
  /* 11486bf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486bf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486bf7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11486bfa push eax */
  push32((uint32_t)(EAX));
  /* 11486bfb call 0x11487b50 */
  push32(0x11486c00u); f_11487b50();
  /* 11486c00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c03:;
  /* 11486c03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c06 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486c0a je 0x11486c1d */
  if (C.zf) goto L_11486c1d;
  /* 11486c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11486c0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c11 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11486c14 push eax */
  push32((uint32_t)(EAX));
  /* 11486c15 call 0x11487b50 */
  push32(0x11486c1au); f_11487b50();
  /* 11486c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c1d:;
  /* 11486c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c20 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486c24 je 0x11486c37 */
  if (C.zf) goto L_11486c37;
  /* 11486c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486c28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c2b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11486c2e push eax */
  push32((uint32_t)(EAX));
  /* 11486c2f call 0x11487b50 */
  push32(0x11486c34u); f_11487b50();
  /* 11486c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c37:;
  /* 11486c37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c3a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486c3e je 0x11486c51 */
  if (C.zf) goto L_11486c51;
  /* 11486c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486c42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c45 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11486c48 push eax */
  push32((uint32_t)(EAX));
  /* 11486c49 call 0x11487b50 */
  push32(0x11486c4eu); f_11487b50();
  /* 11486c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c51:;
  /* 11486c51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c54 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486c58 je 0x11486c6b */
  if (C.zf) goto L_11486c6b;
  /* 11486c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11486c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c5f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11486c62 push eax */
  push32((uint32_t)(EAX));
  /* 11486c63 call 0x11487b50 */
  push32(0x11486c68u); f_11487b50();
  /* 11486c68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c6b:;
  /* 11486c6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c6e cmp dword ptr [ecx + 0x50], 0x114b4110 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x114b4110u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486c75 je 0x11486c88 */
  if (C.zf) goto L_11486c88;
  /* 11486c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486c79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c7c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11486c7f push eax */
  push32((uint32_t)(EAX));
  /* 11486c80 call 0x11487b50 */
  push32(0x11486c85u); f_11487b50();
  /* 11486c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c88:;
  /* 11486c88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486c8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11486c8d push ecx */
  push32((uint32_t)(ECX));
  /* 11486c8e call 0x11487b50 */
  push32(0x11486c93u); f_11487b50();
  /* 11486c93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486c96:;
  /* 11486c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11486c98 mov edx, dword ptr [0x114b3a90] */
  EDX = (r32((uint32_t)(0x114b3a90)));
  /* 11486c9e push edx */
  push32((uint32_t)(EDX));
  /* 11486c9f call dword ptr [0x114b92b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92b4))), 0x11486ca5u);
L_11486ca5:;
  /* 11486ca5 pop ebp */
  EBP = (pop32());
  /* 11486ca6 ret  */
  ESPCHK(0x11486ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x11486cb0 (11 bytes, 5 insns) */
void f_11486cb0(void) {
  FTRACE(0x11486cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11486cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11486cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11486cb3 call dword ptr [0x114b92b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b92b8))), 0x11486cb9u);
  /* 11486cb9 pop ebp */
  EBP = (pop32());
  /* 11486cba ret  */
  ESPCHK(0x11486cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x11486cc0 (11 bytes, 5 insns) */
void f_11486cc0(void) {
  FTRACE(0x11486cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11486cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11486cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11486cc3 call dword ptr [0x114b93b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93b0))), 0x11486cc9u);
  /* 11486cc9 pop ebp */
  EBP = (pop32());
  /* 11486cca ret  */
  ESPCHK(0x11486cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x11486cd0 (804 bytes, 236 insns) */
void f_11486cd0(void) {
  FTRACE(0x11486cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11486cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11486cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11486cd3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11486cd6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11486cdb push 0x114b07a4 */
  push32((uint32_t)(0x114b07a4u));
  /* 11486ce0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11486ce2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11486ce7 call 0x114870c0 */
  push32(0x11486cecu); f_114870c0();
  /* 11486cec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11486cef mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11486cf2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486cf6 jne 0x11486d02 */
  if (!C.zf) goto L_11486d02;
  /* 11486cf8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11486cfa call 0x11484710 */
  push32(0x11486cffu); f_11484710();
  /* 11486cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11486d02:;
  /* 11486d02 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486d05 mov dword ptr [0x114b7ec0], eax */
  w32((uint32_t)(0x114b7ec0), (EAX));
  /* 11486d0a mov dword ptr [0x114b7ffc], 0x20 */
  w32((uint32_t)(0x114b7ffc), (0x20u));
  /* 11486d14 jmp 0x11486d1f */
  goto L_11486d1f;
L_11486d16:;
  /* 11486d16 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486d19 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486d1c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11486d1f:;
  /* 11486d1f mov edx, dword ptr [0x114b7ec0] */
  EDX = (r32((uint32_t)(0x114b7ec0)));
  /* 11486d25 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486d2b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486d2e jae 0x11486d53 */
  if (!C.cf) goto L_11486d53;
  /* 11486d30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486d33 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11486d37 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486d3a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11486d40 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486d43 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11486d47 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486d4a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11486d51 jmp 0x11486d16 */
  goto L_11486d16;
L_11486d53:;
  /* 11486d53 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11486d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11486d57 call dword ptr [0x114b93bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93bc))), 0x11486d5du);
  /* 11486d5d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11486d60 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11486d66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11486d68 je 0x11486ef5 */
  if (C.zf) goto L_11486ef5;
  /* 11486d6e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486d72 je 0x11486ef5 */
  if (C.zf) goto L_11486ef5;
  /* 11486d78 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11486d7b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11486d7d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11486d80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11486d83 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486d86 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11486d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486d8c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486d8f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11486d92 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486d99 jge 0x11486da3 */
  if ((C.sf==C.of)) goto L_11486da3;
  /* 11486d9b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11486d9e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11486da1 jmp 0x11486daa */
  goto L_11486daa;
L_11486da3:;
  /* 11486da3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11486daa:;
  /* 11486daa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11486dad mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11486db0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11486db7 jmp 0x11486dc2 */
  goto L_11486dc2;
L_11486db9:;
  /* 11486db9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11486dbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486dbf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11486dc2:;
  /* 11486dc2 mov ecx, dword ptr [0x114b7ffc] */
  ECX = (r32((uint32_t)(0x114b7ffc)));
  /* 11486dc8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486dcb jge 0x11486e62 */
  if ((C.sf==C.of)) goto L_11486e62;
  /* 11486dd1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11486dd6 push 0x114b07a4 */
  push32((uint32_t)(0x114b07a4u));
  /* 11486ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 11486ddd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11486de2 call 0x114870c0 */
  push32(0x11486de7u); f_114870c0();
  /* 11486de7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11486dea mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11486ded cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486df1 jne 0x11486dfe */
  if (!C.zf) goto L_11486dfe;
  /* 11486df3 mov edx, dword ptr [0x114b7ffc] */
  EDX = (r32((uint32_t)(0x114b7ffc)));
  /* 11486df9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11486dfc jmp 0x11486e62 */
  goto L_11486e62;
L_11486dfe:;
  /* 11486dfe mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11486e01 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486e04 mov dword ptr [eax*4 + 0x114b7ec0], ecx */
  w32((uint32_t)(EAX*4 + 0x114b7ec0), (ECX));
  /* 11486e0b mov edx, dword ptr [0x114b7ffc] */
  EDX = (r32((uint32_t)(0x114b7ffc)));
  /* 11486e11 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486e14 mov dword ptr [0x114b7ffc], edx */
  w32((uint32_t)(0x114b7ffc), (EDX));
  /* 11486e1a jmp 0x11486e25 */
  goto L_11486e25;
L_11486e1c:;
  /* 11486e1c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486e1f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486e22 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11486e25:;
  /* 11486e25 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11486e28 mov edx, dword ptr [ecx*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 11486e2f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486e35 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486e38 jae 0x11486e5d */
  if (!C.cf) goto L_11486e5d;
  /* 11486e3a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486e3d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11486e41 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486e44 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11486e4a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486e4d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11486e51 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486e54 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11486e5b jmp 0x11486e1c */
  goto L_11486e1c;
L_11486e5d:;
  /* 11486e5d jmp 0x11486db9 */
  goto L_11486db9;
L_11486e62:;
  /* 11486e62 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11486e69 jmp 0x11486e86 */
  goto L_11486e86;
L_11486e6b:;
  /* 11486e6b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486e6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486e71 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11486e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486e77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486e7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11486e7d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11486e80 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486e83 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11486e86:;
  /* 11486e86 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486e89 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486e8c jge 0x11486ef5 */
  if ((C.sf==C.of)) goto L_11486ef5;
  /* 11486e8e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11486e91 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486e94 je 0x11486ef0 */
  if (C.zf) goto L_11486ef0;
  /* 11486e96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486e99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11486e9c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11486e9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11486ea1 je 0x11486ef0 */
  if (C.zf) goto L_11486ef0;
  /* 11486ea3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486ea6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11486ea9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11486eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11486eae jne 0x11486ec0 */
  if (!C.zf) goto L_11486ec0;
  /* 11486eb0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11486eb3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11486eb5 push edx */
  push32((uint32_t)(EDX));
  /* 11486eb6 call dword ptr [0x114b93b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93b8))), 0x11486ebcu);
  /* 11486ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11486ebe je 0x11486ef0 */
  if (C.zf) goto L_11486ef0;
L_11486ec0:;
  /* 11486ec0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486ec3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11486ec6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486ec9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11486ecc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11486ecf mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 11486ed6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486ed8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11486edb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486ede mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11486ee1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11486ee3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11486ee5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486ee8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11486eeb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11486eed mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11486ef0:;
  /* 11486ef0 jmp 0x11486e6b */
  goto L_11486e6b;
L_11486ef5:;
  /* 11486ef5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11486efc jmp 0x11486f07 */
  goto L_11486f07;
L_11486efe:;
  /* 11486efe mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486f01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486f04 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11486f07:;
  /* 11486f07 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486f0b jge 0x11486fe4 */
  if ((C.sf==C.of)) goto L_11486fe4;
  /* 11486f11 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486f14 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11486f17 mov edx, dword ptr [0x114b7ec0] */
  EDX = (r32((uint32_t)(0x114b7ec0)));
  /* 11486f1d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486f1f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11486f22 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486f25 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486f28 jne 0x11486fd0 */
  if (!C.zf) goto L_11486fd0;
  /* 11486f2e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486f31 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11486f35 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486f39 jne 0x11486f44 */
  if (!C.zf) goto L_11486f44;
  /* 11486f3b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11486f42 jmp 0x11486f54 */
  goto L_11486f54;
L_11486f44:;
  /* 11486f44 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11486f47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11486f4a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11486f4c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11486f4e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11486f51 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11486f54:;
  /* 11486f54 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11486f57 push eax */
  push32((uint32_t)(EAX));
  /* 11486f58 call dword ptr [0x114b9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9364))), 0x11486f5eu);
  /* 11486f5e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11486f61 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486f65 je 0x11486fbf */
  if (C.zf) goto L_11486fbf;
  /* 11486f67 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11486f6a push ecx */
  push32((uint32_t)(ECX));
  /* 11486f6b call dword ptr [0x114b93b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93b8))), 0x11486f71u);
  /* 11486f71 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11486f74 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486f78 je 0x11486fbf */
  if (C.zf) goto L_11486fbf;
  /* 11486f7a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486f7d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11486f80 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11486f82 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11486f85 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11486f8b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486f8e jne 0x11486fa0 */
  if (!C.zf) goto L_11486fa0;
  /* 11486f90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486f93 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11486f96 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11486f98 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486f9b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11486f9e jmp 0x11486fbd */
  goto L_11486fbd;
L_11486fa0:;
  /* 11486fa0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11486fa3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11486fa9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11486fac jne 0x11486fbd */
  if (!C.zf) goto L_11486fbd;
  /* 11486fae mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486fb1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11486fb4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11486fb7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486fba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11486fbd:;
  /* 11486fbd jmp 0x11486fce */
  goto L_11486fce;
L_11486fbf:;
  /* 11486fbf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486fc2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11486fc5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11486fc8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486fcb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11486fce:;
  /* 11486fce jmp 0x11486fdf */
  goto L_11486fdf;
L_11486fd0:;
  /* 11486fd0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486fd3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11486fd6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11486fd9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11486fdc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11486fdf:;
  /* 11486fdf jmp 0x11486efe */
  goto L_11486efe;
L_11486fe4:;
  /* 11486fe4 mov eax, dword ptr [0x114b7ffc] */
  EAX = (r32((uint32_t)(0x114b7ffc)));
  /* 11486fe9 push eax */
  push32((uint32_t)(EAX));
  /* 11486fea call dword ptr [0x114b93b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93b4))), 0x11486ff0u);
  /* 11486ff0 mov esp, ebp */
  ESP = (EBP);
  /* 11486ff2 pop ebp */
  EBP = (pop32());
  /* 11486ff3 ret  */
  ESPCHK(0x11486cd0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11487000 (155 bytes, 45 insns) */
void f_11487000(void) {
  FTRACE(0x11487000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487000 push ebp */
  push32((uint32_t)(EBP));
  /* 11487001 mov ebp, esp */
  EBP = (ESP);
  /* 11487003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487006 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148700d jmp 0x11487018 */
  goto L_11487018;
L_1148700f:;
  /* 1148700f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487012 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487015 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11487018:;
  /* 11487018 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148701c jge 0x11487097 */
  if ((C.sf==C.of)) goto L_11487097;
  /* 1148701e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487021 cmp dword ptr [ecx*4 + 0x114b7ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x114b7ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487029 je 0x11487092 */
  if (C.zf) goto L_11487092;
  /* 1148702b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148702e mov eax, dword ptr [edx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 11487035 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11487038 jmp 0x11487043 */
  goto L_11487043;
L_1148703a:;
  /* 1148703a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148703d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11487043:;
  /* 11487043 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487046 mov eax, dword ptr [edx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 1148704d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487052 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487055 jae 0x1148706f */
  if (!C.cf) goto L_1148706f;
  /* 11487057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148705a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148705e je 0x1148706d */
  if (C.zf) goto L_1148706d;
  /* 11487060 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487063 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487066 push edx */
  push32((uint32_t)(EDX));
  /* 11487067 call dword ptr [0x114b93c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c0))), 0x1148706du);
L_1148706d:;
  /* 1148706d jmp 0x1148703a */
  goto L_1148703a;
L_1148706f:;
  /* 1148706f push 2 */
  push32((uint32_t)(0x2u));
  /* 11487071 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487074 mov ecx, dword ptr [eax*4 + 0x114b7ec0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 1148707b push ecx */
  push32((uint32_t)(ECX));
  /* 1148707c call 0x11487b50 */
  push32(0x11487081u); f_11487b50();
  /* 11487081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487084 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487087 mov dword ptr [edx*4 + 0x114b7ec0], 0 */
  w32((uint32_t)(EDX*4 + 0x114b7ec0), (0x0u));
L_11487092:;
  /* 11487092 jmp 0x1148700f */
  goto L_1148700f;
L_11487097:;
  /* 11487097 mov esp, ebp */
  ESP = (EBP);
  /* 11487099 pop ebp */
  EBP = (pop32());
  /* 1148709a ret  */
  ESPCHK(0x11487000u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x114870a0 (29 bytes, 13 insns) */
void f_114870a0(void) {
  FTRACE(0x114870a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114870a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114870a1 mov ebp, esp */
  EBP = (ESP);
  /* 114870a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114870a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114870a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114870a9 mov eax, dword ptr [0x114b66e0] */
  EAX = (r32((uint32_t)(0x114b66e0)));
  /* 114870ae push eax */
  push32((uint32_t)(EAX));
  /* 114870af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114870b2 push ecx */
  push32((uint32_t)(ECX));
  /* 114870b3 call 0x11487110 */
  push32(0x114870b8u); f_11487110();
  /* 114870b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114870bb pop ebp */
  EBP = (pop32());
  /* 114870bc ret  */
  ESPCHK(0x114870a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x114870c0 (35 bytes, 16 insns) */
void f_114870c0(void) {
  FTRACE(0x114870c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114870c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114870c1 mov ebp, esp */
  EBP = (ESP);
  /* 114870c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114870c6 push eax */
  push32((uint32_t)(EAX));
  /* 114870c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114870ca push ecx */
  push32((uint32_t)(ECX));
  /* 114870cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114870ce push edx */
  push32((uint32_t)(EDX));
  /* 114870cf mov eax, dword ptr [0x114b66e0] */
  EAX = (r32((uint32_t)(0x114b66e0)));
  /* 114870d4 push eax */
  push32((uint32_t)(EAX));
  /* 114870d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114870d8 push ecx */
  push32((uint32_t)(ECX));
  /* 114870d9 call 0x11487110 */
  push32(0x114870deu); f_11487110();
  /* 114870de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114870e1 pop ebp */
  EBP = (pop32());
  /* 114870e2 ret  */
  ESPCHK(0x114870c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x114870f0 (27 bytes, 13 insns) */
void f_114870f0(void) {
  FTRACE(0x114870f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114870f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114870f1 mov ebp, esp */
  EBP = (ESP);
  /* 114870f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114870f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114870f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114870f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114870fc push eax */
  push32((uint32_t)(EAX));
  /* 114870fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487100 push ecx */
  push32((uint32_t)(ECX));
  /* 11487101 call 0x11487110 */
  push32(0x11487106u); f_11487110();
  /* 11487106 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487109 pop ebp */
  EBP = (pop32());
  /* 1148710a ret  */
  ESPCHK(0x114870f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007110 @ 0x11487110 (94 bytes, 38 insns) */
void f_11487110(void) {
  FTRACE(0x11487110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487110 push ebp */
  push32((uint32_t)(EBP));
  /* 11487111 mov ebp, esp */
  EBP = (ESP);
  /* 11487113 push ecx */
  push32((uint32_t)(ECX));
L_11487114:;
  /* 11487114 push 9 */
  push32((uint32_t)(0x9u));
  /* 11487116 call 0x1148ca30 */
  push32(0x1148711bu); f_1148ca30();
  /* 1148711b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148711e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11487121 push eax */
  push32((uint32_t)(EAX));
  /* 11487122 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11487125 push ecx */
  push32((uint32_t)(ECX));
  /* 11487126 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11487129 push edx */
  push32((uint32_t)(EDX));
  /* 1148712a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148712d push eax */
  push32((uint32_t)(EAX));
  /* 1148712e call 0x11487190 */
  push32(0x11487133u); f_11487190();
  /* 11487133 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487136 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11487139 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148713b call 0x1148cad0 */
  push32(0x11487140u); f_1148cad0();
  /* 11487140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487147 jne 0x1148714f */
  if (!C.zf) goto L_1148714f;
  /* 11487149 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148714d jne 0x11487154 */
  if (!C.zf) goto L_11487154;
L_1148714f:;
  /* 1148714f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487152 jmp 0x1148716a */
  goto L_1148716a;
L_11487154:;
  /* 11487154 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487157 push ecx */
  push32((uint32_t)(ECX));
  /* 11487158 call 0x1148cd70 */
  push32(0x1148715du); f_1148cd70();
  /* 1148715d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487162 jne 0x11487168 */
  if (!C.zf) goto L_11487168;
  /* 11487164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487166 jmp 0x1148716a */
  goto L_1148716a;
L_11487168:;
  /* 11487168 jmp 0x11487114 */
  goto L_11487114;
L_1148716a:;
  /* 1148716a mov esp, ebp */
  ESP = (EBP);
  /* 1148716c pop ebp */
  EBP = (pop32());
  /* 1148716d ret  */
  ESPCHK(0x11487110u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x11487170 (23 bytes, 11 insns) */
void f_11487170(void) {
  FTRACE(0x11487170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487170 push ebp */
  push32((uint32_t)(EBP));
  /* 11487171 mov ebp, esp */
  EBP = (ESP);
  /* 11487173 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487175 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487177 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487179 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148717c push eax */
  push32((uint32_t)(EAX));
  /* 1148717d call 0x11487190 */
  push32(0x11487182u); f_11487190();
  /* 11487182 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487185 pop ebp */
  EBP = (pop32());
  /* 11487186 ret  */
  ESPCHK(0x11487170u, _esp0);
  ESP += 4; return;
}

/* FUN_10007190 @ 0x11487190 (787 bytes, 254 insns) */
void f_11487190(void) {
  FTRACE(0x11487190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487190 push ebp */
  push32((uint32_t)(EBP));
  /* 11487191 mov ebp, esp */
  EBP = (ESP);
  /* 11487193 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487196 push ebx */
  push32((uint32_t)(EBX));
  /* 11487197 push esi */
  push32((uint32_t)(ESI));
  /* 11487198 push edi */
  push32((uint32_t)(EDI));
  /* 11487199 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114871a0 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 114871a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114871a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114871aa je 0x114871dc */
  if (C.zf) goto L_114871dc;
L_114871ac:;
  /* 114871ac call 0x11488260 */
  push32(0x114871b1u); f_11488260();
  /* 114871b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114871b3 jne 0x114871d6 */
  if (!C.zf) goto L_114871d6;
  /* 114871b5 push 0x114b0898 */
  push32((uint32_t)(0x114b0898u));
  /* 114871ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114871bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 114871c1 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 114871c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114871c8 call 0x11484860 */
  push32(0x114871cdu); f_11484860();
  /* 114871cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114871d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114871d3 jne 0x114871d6 */
  if (!C.zf) goto L_114871d6;
  /* 114871d5 int3  */
  x86_unimpl("int3 @ 0x114871d5");
L_114871d6:;
  /* 114871d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114871d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114871da jne 0x114871ac */
  if (!C.zf) goto L_114871ac;
L_114871dc:;
  /* 114871dc mov edx, dword ptr [0x114b3ac0] */
  EDX = (r32((uint32_t)(0x114b3ac0)));
  /* 114871e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114871e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114871e8 cmp eax, dword ptr [0x114b3ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b3ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114871ee jne 0x114871f1 */
  if (!C.zf) goto L_114871f1;
  /* 114871f0 int3  */
  x86_unimpl("int3 @ 0x114871f0");
L_114871f1:;
  /* 114871f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114871f4 push ecx */
  push32((uint32_t)(ECX));
  /* 114871f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114871f8 push edx */
  push32((uint32_t)(EDX));
  /* 114871f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114871fc push eax */
  push32((uint32_t)(EAX));
  /* 114871fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487200 push ecx */
  push32((uint32_t)(ECX));
  /* 11487201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487204 push edx */
  push32((uint32_t)(EDX));
  /* 11487205 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487207 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487209 call dword ptr [0x114b4198] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b4198))), 0x1148720fu);
  /* 1148720f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487214 jne 0x11487274 */
  if (!C.zf) goto L_11487274;
  /* 11487216 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148721a je 0x11487247 */
  if (C.zf) goto L_11487247;
L_1148721c:;
  /* 1148721c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148721f push eax */
  push32((uint32_t)(EAX));
  /* 11487220 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11487223 push ecx */
  push32((uint32_t)(ECX));
  /* 11487224 push 0x114b0854 */
  push32((uint32_t)(0x114b0854u));
  /* 11487229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148722b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148722d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148722f push 0 */
  push32((uint32_t)(0x0u));
  /* 11487231 call 0x11484860 */
  push32(0x11487236u); f_11484860();
  /* 11487236 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487239 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148723c jne 0x1148723f */
  if (!C.zf) goto L_1148723f;
  /* 1148723e int3  */
  x86_unimpl("int3 @ 0x1148723e");
L_1148723f:;
  /* 1148723f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487241 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11487243 jne 0x1148721c */
  if (!C.zf) goto L_1148721c;
  /* 11487245 jmp 0x1148726d */
  goto L_1148726d;
L_11487247:;
  /* 11487247 push 0x114b0830 */
  push32((uint32_t)(0x114b0830u));
  /* 1148724c push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11487251 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487253 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487255 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487257 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487259 call 0x11484860 */
  push32(0x1148725eu); f_11484860();
  /* 1148725e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487261 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487264 jne 0x11487267 */
  if (!C.zf) goto L_11487267;
  /* 11487266 int3  */
  x86_unimpl("int3 @ 0x11487266");
L_11487267:;
  /* 11487267 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148726b jne 0x11487247 */
  if (!C.zf) goto L_11487247;
L_1148726d:;
  /* 1148726d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148726f jmp 0x1148749c */
  goto L_1148749c;
L_11487274:;
  /* 11487274 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487277 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148727d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487280 je 0x11487296 */
  if (C.zf) goto L_11487296;
  /* 11487282 mov edx, dword ptr [0x114b3abc] */
  EDX = (r32((uint32_t)(0x114b3abc)));
  /* 11487288 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1148728b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148728d jne 0x11487296 */
  if (!C.zf) goto L_11487296;
  /* 1148728f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11487296:;
  /* 11487296 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148729a ja 0x114872a7 */
  if ((!C.cf&&!C.zf)) goto L_114872a7;
  /* 1148729c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148729f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114872a2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114872a5 jbe 0x114872d3 */
  if ((C.cf||C.zf)) goto L_114872d3;
L_114872a7:;
  /* 114872a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114872aa push ecx */
  push32((uint32_t)(ECX));
  /* 114872ab push 0x114b0808 */
  push32((uint32_t)(0x114b0808u));
  /* 114872b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114872b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114872b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114872b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114872b8 call 0x11484860 */
  push32(0x114872bdu); f_11484860();
  /* 114872bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114872c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114872c3 jne 0x114872c6 */
  if (!C.zf) goto L_114872c6;
  /* 114872c5 int3  */
  x86_unimpl("int3 @ 0x114872c5");
L_114872c6:;
  /* 114872c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114872c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114872ca jne 0x114872a7 */
  if (!C.zf) goto L_114872a7;
  /* 114872cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114872ce jmp 0x1148749c */
  goto L_1148749c;
L_114872d3:;
  /* 114872d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114872d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114872db cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114872de je 0x11487320 */
  if (C.zf) goto L_11487320;
  /* 114872e0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114872e4 je 0x11487320 */
  if (C.zf) goto L_11487320;
  /* 114872e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114872e9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114872ef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114872f2 je 0x11487320 */
  if (C.zf) goto L_11487320;
  /* 114872f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114872f8 je 0x11487320 */
  if (C.zf) goto L_11487320;
L_114872fa:;
  /* 114872fa push 0x114b07d4 */
  push32((uint32_t)(0x114b07d4u));
  /* 114872ff push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11487304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487306 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148730a push 1 */
  push32((uint32_t)(0x1u));
  /* 1148730c call 0x11484860 */
  push32(0x11487311u); f_11484860();
  /* 11487311 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487314 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487317 jne 0x1148731a */
  if (!C.zf) goto L_1148731a;
  /* 11487319 int3  */
  x86_unimpl("int3 @ 0x11487319");
L_1148731a:;
  /* 1148731a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148731c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148731e jne 0x114872fa */
  if (!C.zf) goto L_114872fa;
L_11487320:;
  /* 11487320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487323 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487326 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11487329 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148732c push ecx */
  push32((uint32_t)(ECX));
  /* 1148732d call 0x1148ce20 */
  push32(0x11487332u); f_1148ce20();
  /* 11487332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487335 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11487338 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148733c jne 0x11487345 */
  if (!C.zf) goto L_11487345;
  /* 1148733e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487340 jmp 0x1148749c */
  goto L_1148749c;
L_11487345:;
  /* 11487345 mov edx, dword ptr [0x114b3ac0] */
  EDX = (r32((uint32_t)(0x114b3ac0)));
  /* 1148734b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148734e mov dword ptr [0x114b3ac0], edx */
  w32((uint32_t)(0x114b3ac0), (EDX));
  /* 11487354 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487358 je 0x114873a3 */
  if (C.zf) goto L_114873a3;
  /* 1148735a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148735d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11487363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487366 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1148736d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487370 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11487377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148737a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11487381 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487387 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1148738a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148738d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11487394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487397 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1148739e jmp 0x11487443 */
  goto L_11487443;
L_114873a3:;
  /* 114873a3 mov edx, dword ptr [0x114b6540] */
  EDX = (r32((uint32_t)(0x114b6540)));
  /* 114873a9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114873ac mov dword ptr [0x114b6540], edx */
  w32((uint32_t)(0x114b6540), (EDX));
  /* 114873b2 mov eax, dword ptr [0x114b6548] */
  EAX = (r32((uint32_t)(0x114b6548)));
  /* 114873b7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114873ba mov dword ptr [0x114b6548], eax */
  w32((uint32_t)(0x114b6548), (EAX));
  /* 114873bf mov ecx, dword ptr [0x114b6548] */
  ECX = (r32((uint32_t)(0x114b6548)));
  /* 114873c5 cmp ecx, dword ptr [0x114b654c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b654c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114873cb jbe 0x114873d9 */
  if ((C.cf||C.zf)) goto L_114873d9;
  /* 114873cd mov edx, dword ptr [0x114b6548] */
  EDX = (r32((uint32_t)(0x114b6548)));
  /* 114873d3 mov dword ptr [0x114b654c], edx */
  w32((uint32_t)(0x114b654c), (EDX));
L_114873d9:;
  /* 114873d9 cmp dword ptr [0x114b6544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114873e0 je 0x114873ef */
  if (C.zf) goto L_114873ef;
  /* 114873e2 mov eax, dword ptr [0x114b6544] */
  EAX = (r32((uint32_t)(0x114b6544)));
  /* 114873e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114873ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 114873ed jmp 0x114873f8 */
  goto L_114873f8;
L_114873ef:;
  /* 114873ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114873f2 mov dword ptr [0x114b653c], edx */
  w32((uint32_t)(0x114b653c), (EDX));
L_114873f8:;
  /* 114873f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114873fb mov ecx, dword ptr [0x114b6544] */
  ECX = (r32((uint32_t)(0x114b6544)));
  /* 11487401 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11487403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487406 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1148740d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487410 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11487413 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11487416 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487419 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148741c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1148741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487425 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11487428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148742b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148742e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11487431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487437 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1148743a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148743d mov dword ptr [0x114b6544], ecx */
  w32((uint32_t)(0x114b6544), (ECX));
L_11487443:;
  /* 11487443 push 4 */
  push32((uint32_t)(0x4u));
  /* 11487445 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487447 mov dl, byte ptr [0x114b3ac8] */
  DL = (r8((uint32_t)(0x114b3ac8)));
  /* 1148744d push edx */
  push32((uint32_t)(EDX));
  /* 1148744e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487451 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487454 push eax */
  push32((uint32_t)(EAX));
  /* 11487455 call 0x1148bbf0 */
  push32(0x1148745au); f_1148bbf0();
  /* 1148745a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148745d push 4 */
  push32((uint32_t)(0x4u));
  /* 1148745f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487461 mov cl, byte ptr [0x114b3ac8] */
  CL = (r8((uint32_t)(0x114b3ac8)));
  /* 11487467 push ecx */
  push32((uint32_t)(ECX));
  /* 11487468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148746b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148746e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11487472 push ecx */
  push32((uint32_t)(ECX));
  /* 11487473 call 0x1148bbf0 */
  push32(0x11487478u); f_1148bbf0();
  /* 11487478 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148747b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148747e push edx */
  push32((uint32_t)(EDX));
  /* 1148747f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487481 mov al, byte ptr [0x114b3aca] */
  AL = (r8((uint32_t)(0x114b3aca)));
  /* 11487486 push eax */
  push32((uint32_t)(EAX));
  /* 11487487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148748a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148748d push ecx */
  push32((uint32_t)(ECX));
  /* 1148748e call 0x1148bbf0 */
  push32(0x11487493u); f_1148bbf0();
  /* 11487493 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487496 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487499 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1148749c:;
  /* 1148749c pop edi */
  EDI = (pop32());
  /* 1148749d pop esi */
  ESI = (pop32());
  /* 1148749e pop ebx */
  EBX = (pop32());
  /* 1148749f mov esp, ebp */
  ESP = (EBP);
  /* 114874a1 pop ebp */
  EBP = (pop32());
  /* 114874a2 ret  */
  ESPCHK(0x11487190u, _esp0);
  ESP += 4; return;
}

/* FUN_100074b0 @ 0x114874b0 (27 bytes, 13 insns) */
void f_114874b0(void) {
  FTRACE(0x114874b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114874b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114874b1 mov ebp, esp */
  EBP = (ESP);
  /* 114874b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114874b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114874b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114874b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114874bc push eax */
  push32((uint32_t)(EAX));
  /* 114874bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114874c0 push ecx */
  push32((uint32_t)(ECX));
  /* 114874c1 call 0x114874d0 */
  push32(0x114874c6u); f_114874d0();
  /* 114874c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114874c9 pop ebp */
  EBP = (pop32());
  /* 114874ca ret  */
  ESPCHK(0x114874b0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x114874d0 (96 bytes, 37 insns) */
void f_114874d0(void) {
  FTRACE(0x114874d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114874d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114874d1 mov ebp, esp */
  EBP = (ESP);
  /* 114874d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114874d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114874d9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114874dd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114874e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114874e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114874e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114874e7 push edx */
  push32((uint32_t)(EDX));
  /* 114874e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114874eb push eax */
  push32((uint32_t)(EAX));
  /* 114874ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114874ef push ecx */
  push32((uint32_t)(ECX));
  /* 114874f0 call 0x114870c0 */
  push32(0x114874f5u); f_114870c0();
  /* 114874f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114874f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114874fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114874ff je 0x11487529 */
  if (C.zf) goto L_11487529;
  /* 11487501 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487504 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11487507 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148750a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148750d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11487510:;
  /* 11487510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487513 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487516 jae 0x11487529 */
  if (!C.cf) goto L_11487529;
  /* 11487518 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148751b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1148751e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487521 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487524 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11487527 jmp 0x11487510 */
  goto L_11487510;
L_11487529:;
  /* 11487529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148752c mov esp, ebp */
  ESP = (EBP);
  /* 1148752e pop ebp */
  EBP = (pop32());
  /* 1148752f ret  */
  ESPCHK(0x114874d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x11487530 (27 bytes, 13 insns) */
void f_11487530(void) {
  FTRACE(0x11487530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487530 push ebp */
  push32((uint32_t)(EBP));
  /* 11487531 mov ebp, esp */
  EBP = (ESP);
  /* 11487533 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487535 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487537 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487539 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148753c push eax */
  push32((uint32_t)(EAX));
  /* 1148753d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487540 push ecx */
  push32((uint32_t)(ECX));
  /* 11487541 call 0x11487550 */
  push32(0x11487546u); f_11487550();
  /* 11487546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487549 pop ebp */
  EBP = (pop32());
  /* 1148754a ret  */
  ESPCHK(0x11487530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x11487550 (64 bytes, 27 insns) */
void f_11487550(void) {
  FTRACE(0x11487550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487550 push ebp */
  push32((uint32_t)(EBP));
  /* 11487551 mov ebp, esp */
  EBP = (ESP);
  /* 11487553 push ecx */
  push32((uint32_t)(ECX));
  /* 11487554 push 9 */
  push32((uint32_t)(0x9u));
  /* 11487556 call 0x1148ca30 */
  push32(0x1148755bu); f_1148ca30();
  /* 1148755b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148755e push 1 */
  push32((uint32_t)(0x1u));
  /* 11487560 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11487563 push eax */
  push32((uint32_t)(EAX));
  /* 11487564 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11487567 push ecx */
  push32((uint32_t)(ECX));
  /* 11487568 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148756b push edx */
  push32((uint32_t)(EDX));
  /* 1148756c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148756f push eax */
  push32((uint32_t)(EAX));
  /* 11487570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487573 push ecx */
  push32((uint32_t)(ECX));
  /* 11487574 call 0x11487590 */
  push32(0x11487579u); f_11487590();
  /* 11487579 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148757c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148757f push 9 */
  push32((uint32_t)(0x9u));
  /* 11487581 call 0x1148cad0 */
  push32(0x11487586u); f_1148cad0();
  /* 11487586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148758c mov esp, ebp */
  ESP = (EBP);
  /* 1148758e pop ebp */
  EBP = (pop32());
  /* 1148758f ret  */
  ESPCHK(0x11487550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x11487590 (1297 bytes, 431 insns) */
void f_11487590(void) {
  FTRACE(0x11487590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487590 push ebp */
  push32((uint32_t)(EBP));
  /* 11487591 mov ebp, esp */
  EBP = (ESP);
  /* 11487593 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487596 push ebx */
  push32((uint32_t)(EBX));
  /* 11487597 push esi */
  push32((uint32_t)(ESI));
  /* 11487598 push edi */
  push32((uint32_t)(EDI));
  /* 11487599 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 114875a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114875a4 jne 0x114875c3 */
  if (!C.zf) goto L_114875c3;
  /* 114875a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114875a9 push eax */
  push32((uint32_t)(EAX));
  /* 114875aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114875ad push ecx */
  push32((uint32_t)(ECX));
  /* 114875ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114875b1 push edx */
  push32((uint32_t)(EDX));
  /* 114875b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114875b5 push eax */
  push32((uint32_t)(EAX));
  /* 114875b6 call 0x114870c0 */
  push32(0x114875bbu); f_114870c0();
  /* 114875bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114875be jmp 0x11487a9a */
  goto L_11487a9a;
L_114875c3:;
  /* 114875c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114875c7 je 0x114875e6 */
  if (C.zf) goto L_114875e6;
  /* 114875c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114875cd jne 0x114875e6 */
  if (!C.zf) goto L_114875e6;
  /* 114875cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114875d2 push ecx */
  push32((uint32_t)(ECX));
  /* 114875d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114875d6 push edx */
  push32((uint32_t)(EDX));
  /* 114875d7 call 0x11487b50 */
  push32(0x114875dcu); f_11487b50();
  /* 114875dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114875df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114875e1 jmp 0x11487a9a */
  goto L_11487a9a;
L_114875e6:;
  /* 114875e6 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 114875eb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114875ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114875f0 je 0x11487622 */
  if (C.zf) goto L_11487622;
L_114875f2:;
  /* 114875f2 call 0x11488260 */
  push32(0x114875f7u); f_11488260();
  /* 114875f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114875f9 jne 0x1148761c */
  if (!C.zf) goto L_1148761c;
  /* 114875fb push 0x114b0898 */
  push32((uint32_t)(0x114b0898u));
  /* 11487600 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487602 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11487607 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 1148760c push 2 */
  push32((uint32_t)(0x2u));
  /* 1148760e call 0x11484860 */
  push32(0x11487613u); f_11484860();
  /* 11487613 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487616 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487619 jne 0x1148761c */
  if (!C.zf) goto L_1148761c;
  /* 1148761b int3  */
  x86_unimpl("int3 @ 0x1148761b");
L_1148761c:;
  /* 1148761c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148761e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487620 jne 0x114875f2 */
  if (!C.zf) goto L_114875f2;
L_11487622:;
  /* 11487622 mov edx, dword ptr [0x114b3ac0] */
  EDX = (r32((uint32_t)(0x114b3ac0)));
  /* 11487628 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1148762b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148762e cmp eax, dword ptr [0x114b3ac4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b3ac4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487634 jne 0x11487637 */
  if (!C.zf) goto L_11487637;
  /* 11487636 int3  */
  x86_unimpl("int3 @ 0x11487636");
L_11487637:;
  /* 11487637 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148763a push ecx */
  push32((uint32_t)(ECX));
  /* 1148763b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148763e push edx */
  push32((uint32_t)(EDX));
  /* 1148763f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11487642 push eax */
  push32((uint32_t)(EAX));
  /* 11487643 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11487646 push ecx */
  push32((uint32_t)(ECX));
  /* 11487647 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148764a push edx */
  push32((uint32_t)(EDX));
  /* 1148764b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148764e push eax */
  push32((uint32_t)(EAX));
  /* 1148764f push 2 */
  push32((uint32_t)(0x2u));
  /* 11487651 call dword ptr [0x114b4198] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b4198))), 0x11487657u);
  /* 11487657 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148765a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148765c jne 0x114876bc */
  if (!C.zf) goto L_114876bc;
  /* 1148765e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487662 je 0x1148768f */
  if (C.zf) goto L_1148768f;
L_11487664:;
  /* 11487664 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11487667 push ecx */
  push32((uint32_t)(ECX));
  /* 11487668 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148766b push edx */
  push32((uint32_t)(EDX));
  /* 1148766c push 0x114b0a14 */
  push32((uint32_t)(0x114b0a14u));
  /* 11487671 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487675 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487679 call 0x11484860 */
  push32(0x1148767eu); f_11484860();
  /* 1148767e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487681 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487684 jne 0x11487687 */
  if (!C.zf) goto L_11487687;
  /* 11487686 int3  */
  x86_unimpl("int3 @ 0x11487686");
L_11487687:;
  /* 11487687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148768b jne 0x11487664 */
  if (!C.zf) goto L_11487664;
  /* 1148768d jmp 0x114876b5 */
  goto L_114876b5;
L_1148768f:;
  /* 1148768f push 0x114b09f0 */
  push32((uint32_t)(0x114b09f0u));
  /* 11487694 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11487699 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148769b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148769d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148769f push 0 */
  push32((uint32_t)(0x0u));
  /* 114876a1 call 0x11484860 */
  push32(0x114876a6u); f_11484860();
  /* 114876a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114876a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114876ac jne 0x114876af */
  if (!C.zf) goto L_114876af;
  /* 114876ae int3  */
  x86_unimpl("int3 @ 0x114876ae");
L_114876af:;
  /* 114876af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114876b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114876b3 jne 0x1148768f */
  if (!C.zf) goto L_1148768f;
L_114876b5:;
  /* 114876b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114876b7 jmp 0x11487a9a */
  goto L_11487a9a;
L_114876bc:;
  /* 114876bc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114876c0 jbe 0x114876ee */
  if ((C.cf||C.zf)) goto L_114876ee;
L_114876c2:;
  /* 114876c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114876c5 push edx */
  push32((uint32_t)(EDX));
  /* 114876c6 push 0x114b09c0 */
  push32((uint32_t)(0x114b09c0u));
  /* 114876cb push 0 */
  push32((uint32_t)(0x0u));
  /* 114876cd push 0 */
  push32((uint32_t)(0x0u));
  /* 114876cf push 0 */
  push32((uint32_t)(0x0u));
  /* 114876d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114876d3 call 0x11484860 */
  push32(0x114876d8u); f_11484860();
  /* 114876d8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114876db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114876de jne 0x114876e1 */
  if (!C.zf) goto L_114876e1;
  /* 114876e0 int3  */
  x86_unimpl("int3 @ 0x114876e0");
L_114876e1:;
  /* 114876e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114876e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114876e5 jne 0x114876c2 */
  if (!C.zf) goto L_114876c2;
  /* 114876e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114876e9 jmp 0x11487a9a */
  goto L_11487a9a;
L_114876ee:;
  /* 114876ee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114876f2 je 0x11487736 */
  if (C.zf) goto L_11487736;
  /* 114876f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114876f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114876fd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487700 je 0x11487736 */
  if (C.zf) goto L_11487736;
  /* 11487702 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11487705 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148770b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148770e je 0x11487736 */
  if (C.zf) goto L_11487736;
L_11487710:;
  /* 11487710 push 0x114b07d4 */
  push32((uint32_t)(0x114b07d4u));
  /* 11487715 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 1148771a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148771c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148771e push 0 */
  push32((uint32_t)(0x0u));
  /* 11487720 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487722 call 0x11484860 */
  push32(0x11487727u); f_11484860();
  /* 11487727 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148772a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148772d jne 0x11487730 */
  if (!C.zf) goto L_11487730;
  /* 1148772f int3  */
  x86_unimpl("int3 @ 0x1148772f");
L_11487730:;
  /* 11487730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487734 jne 0x11487710 */
  if (!C.zf) goto L_11487710;
L_11487736:;
  /* 11487736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487739 push ecx */
  push32((uint32_t)(ECX));
  /* 1148773a call 0x114886c0 */
  push32(0x1148773fu); f_114886c0();
  /* 1148773f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487744 jne 0x11487767 */
  if (!C.zf) goto L_11487767;
  /* 11487746 push 0x114b099c */
  push32((uint32_t)(0x114b099cu));
  /* 1148774b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148774d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11487752 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487757 push 2 */
  push32((uint32_t)(0x2u));
  /* 11487759 call 0x11484860 */
  push32(0x1148775eu); f_11484860();
  /* 1148775e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487761 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487764 jne 0x11487767 */
  if (!C.zf) goto L_11487767;
  /* 11487766 int3  */
  x86_unimpl("int3 @ 0x11487766");
L_11487767:;
  /* 11487767 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487769 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148776b jne 0x11487736 */
  if (!C.zf) goto L_11487736;
  /* 1148776d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487770 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487773 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11487776 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487779 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148777d jne 0x11487786 */
  if (!C.zf) goto L_11487786;
  /* 1148777f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11487786:;
  /* 11487786 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148778a je 0x114877ca */
  if (C.zf) goto L_114877ca;
L_1148778c:;
  /* 1148778c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148778f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487796 jne 0x114877a1 */
  if (!C.zf) goto L_114877a1;
  /* 11487798 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148779b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148779f je 0x114877c2 */
  if (C.zf) goto L_114877c2;
L_114877a1:;
  /* 114877a1 push 0x114b0954 */
  push32((uint32_t)(0x114b0954u));
  /* 114877a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114877a8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 114877ad push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 114877b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114877b4 call 0x11484860 */
  push32(0x114877b9u); f_11484860();
  /* 114877b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114877bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114877bf jne 0x114877c2 */
  if (!C.zf) goto L_114877c2;
  /* 114877c1 int3  */
  x86_unimpl("int3 @ 0x114877c1");
L_114877c2:;
  /* 114877c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114877c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114877c6 jne 0x1148778c */
  if (!C.zf) goto L_1148778c;
  /* 114877c8 jmp 0x1148782e */
  goto L_1148782e;
L_114877ca:;
  /* 114877ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114877cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114877d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114877d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114877d8 jne 0x114877ef */
  if (!C.zf) goto L_114877ef;
  /* 114877da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114877dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114877e3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114877e6 jne 0x114877ef */
  if (!C.zf) goto L_114877ef;
  /* 114877e8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_114877ef:;
  /* 114877ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114877f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 114877f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114877fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114877fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11487803 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487805 je 0x11487828 */
  if (C.zf) goto L_11487828;
  /* 11487807 push 0x114b0918 */
  push32((uint32_t)(0x114b0918u));
  /* 1148780c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148780e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11487813 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487818 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148781a call 0x11484860 */
  push32(0x1148781fu); f_11484860();
  /* 1148781f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487822 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487825 jne 0x11487828 */
  if (!C.zf) goto L_11487828;
  /* 11487827 int3  */
  x86_unimpl("int3 @ 0x11487827");
L_11487828:;
  /* 11487828 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148782a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148782c jne 0x114877ef */
  if (!C.zf) goto L_114877ef;
L_1148782e:;
  /* 1148782e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487832 je 0x11487859 */
  if (C.zf) goto L_11487859;
  /* 11487834 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487837 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148783a push eax */
  push32((uint32_t)(EAX));
  /* 1148783b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148783e push ecx */
  push32((uint32_t)(ECX));
  /* 1148783f call 0x1148cf50 */
  push32(0x11487844u); f_1148cf50();
  /* 11487844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487847 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148784a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148784e jne 0x11487857 */
  if (!C.zf) goto L_11487857;
  /* 11487850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487852 jmp 0x11487a9a */
  goto L_11487a9a;
L_11487857:;
  /* 11487857 jmp 0x1148787c */
  goto L_1148787c;
L_11487859:;
  /* 11487859 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148785c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148785f push edx */
  push32((uint32_t)(EDX));
  /* 11487860 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11487863 push eax */
  push32((uint32_t)(EAX));
  /* 11487864 call 0x1148cea0 */
  push32(0x11487869u); f_1148cea0();
  /* 11487869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148786c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148786f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487873 jne 0x1148787c */
  if (!C.zf) goto L_1148787c;
  /* 11487875 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487877 jmp 0x11487a9a */
  goto L_11487a9a;
L_1148787c:;
  /* 1148787c mov ecx, dword ptr [0x114b3ac0] */
  ECX = (r32((uint32_t)(0x114b3ac0)));
  /* 11487882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487885 mov dword ptr [0x114b3ac0], ecx */
  w32((uint32_t)(0x114b3ac0), (ECX));
  /* 1148788b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148788f jne 0x114878e7 */
  if (!C.zf) goto L_114878e7;
  /* 11487891 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487894 mov eax, dword ptr [0x114b6540] */
  EAX = (r32((uint32_t)(0x114b6540)));
  /* 11487899 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148789c mov dword ptr [0x114b6540], eax */
  w32((uint32_t)(0x114b6540), (EAX));
  /* 114878a1 mov ecx, dword ptr [0x114b6540] */
  ECX = (r32((uint32_t)(0x114b6540)));
  /* 114878a7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114878aa mov dword ptr [0x114b6540], ecx */
  w32((uint32_t)(0x114b6540), (ECX));
  /* 114878b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114878b3 mov eax, dword ptr [0x114b6548] */
  EAX = (r32((uint32_t)(0x114b6548)));
  /* 114878b8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114878bb mov dword ptr [0x114b6548], eax */
  w32((uint32_t)(0x114b6548), (EAX));
  /* 114878c0 mov ecx, dword ptr [0x114b6548] */
  ECX = (r32((uint32_t)(0x114b6548)));
  /* 114878c6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114878c9 mov dword ptr [0x114b6548], ecx */
  w32((uint32_t)(0x114b6548), (ECX));
  /* 114878cf mov edx, dword ptr [0x114b6548] */
  EDX = (r32((uint32_t)(0x114b6548)));
  /* 114878d5 cmp edx, dword ptr [0x114b654c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b654c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114878db jbe 0x114878e7 */
  if ((C.cf||C.zf)) goto L_114878e7;
  /* 114878dd mov eax, dword ptr [0x114b6548] */
  EAX = (r32((uint32_t)(0x114b6548)));
  /* 114878e2 mov dword ptr [0x114b654c], eax */
  w32((uint32_t)(0x114b654c), (EAX));
L_114878e7:;
  /* 114878e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114878ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114878ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114878f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114878f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114878f6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114878f9 jbe 0x1148791f */
  if ((C.cf||C.zf)) goto L_1148791f;
  /* 114878fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114878fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487901 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487904 push edx */
  push32((uint32_t)(EDX));
  /* 11487905 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487907 mov al, byte ptr [0x114b3aca] */
  AL = (r8((uint32_t)(0x114b3aca)));
  /* 1148790c push eax */
  push32((uint32_t)(EAX));
  /* 1148790d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487913 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487916 push edx */
  push32((uint32_t)(EDX));
  /* 11487917 call 0x1148bbf0 */
  push32(0x1148791cu); f_1148bbf0();
  /* 1148791c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148791f:;
  /* 1148791f push 4 */
  push32((uint32_t)(0x4u));
  /* 11487921 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487923 mov al, byte ptr [0x114b3ac8] */
  AL = (r8((uint32_t)(0x114b3ac8)));
  /* 11487928 push eax */
  push32((uint32_t)(EAX));
  /* 11487929 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148792c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148792f push ecx */
  push32((uint32_t)(ECX));
  /* 11487930 call 0x1148bbf0 */
  push32(0x11487935u); f_1148bbf0();
  /* 11487935 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487938 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148793c jne 0x11487959 */
  if (!C.zf) goto L_11487959;
  /* 1148793e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487941 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11487944 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11487947 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148794a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148794d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11487950 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487953 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11487956 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11487959:;
  /* 11487959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148795c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148795f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11487962:;
  /* 11487962 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487966 jne 0x11487997 */
  if (!C.zf) goto L_11487997;
  /* 11487968 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148796c jne 0x11487976 */
  if (!C.zf) goto L_11487976;
  /* 1148796e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487971 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487974 je 0x11487997 */
  if (C.zf) goto L_11487997;
L_11487976:;
  /* 11487976 push 0x114b08e4 */
  push32((uint32_t)(0x114b08e4u));
  /* 1148797b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148797d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11487982 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487987 push 2 */
  push32((uint32_t)(0x2u));
  /* 11487989 call 0x11484860 */
  push32(0x1148798eu); f_11484860();
  /* 1148798e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487991 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487994 jne 0x11487997 */
  if (!C.zf) goto L_11487997;
  /* 11487996 int3  */
  x86_unimpl("int3 @ 0x11487996");
L_11487997:;
  /* 11487997 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487999 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148799b jne 0x11487962 */
  if (!C.zf) goto L_11487962;
  /* 1148799d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114879a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114879a3 je 0x114879ab */
  if (C.zf) goto L_114879ab;
  /* 114879a5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114879a9 je 0x114879b3 */
  if (C.zf) goto L_114879b3;
L_114879ab:;
  /* 114879ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114879ae jmp 0x11487a9a */
  goto L_11487a9a;
L_114879b3:;
  /* 114879b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114879b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114879b9 je 0x114879cb */
  if (C.zf) goto L_114879cb;
  /* 114879bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114879be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114879c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114879c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114879c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114879c9 jmp 0x11487a07 */
  goto L_11487a07;
L_114879cb:;
  /* 114879cb mov eax, dword ptr [0x114b653c] */
  EAX = (r32((uint32_t)(0x114b653c)));
  /* 114879d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114879d3 je 0x114879f6 */
  if (C.zf) goto L_114879f6;
  /* 114879d5 push 0x114b08c8 */
  push32((uint32_t)(0x114b08c8u));
  /* 114879da push 0 */
  push32((uint32_t)(0x0u));
  /* 114879dc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 114879e1 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 114879e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114879e8 call 0x11484860 */
  push32(0x114879edu); f_11484860();
  /* 114879ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114879f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114879f3 jne 0x114879f6 */
  if (!C.zf) goto L_114879f6;
  /* 114879f5 int3  */
  x86_unimpl("int3 @ 0x114879f5");
L_114879f6:;
  /* 114879f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114879f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114879fa jne 0x114879cb */
  if (!C.zf) goto L_114879cb;
  /* 114879fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114879ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11487a02 mov dword ptr [0x114b653c], eax */
  w32((uint32_t)(0x114b653c), (EAX));
L_11487a07:;
  /* 11487a07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a0a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487a0e je 0x11487a1f */
  if (C.zf) goto L_11487a1f;
  /* 11487a10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11487a16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11487a1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11487a1d jmp 0x11487a5a */
  goto L_11487a5a;
L_11487a1f:;
  /* 11487a1f mov eax, dword ptr [0x114b6544] */
  EAX = (r32((uint32_t)(0x114b6544)));
  /* 11487a24 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487a27 je 0x11487a4a */
  if (C.zf) goto L_11487a4a;
  /* 11487a29 push 0x114b08ac */
  push32((uint32_t)(0x114b08acu));
  /* 11487a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11487a30 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11487a35 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11487a3c call 0x11484860 */
  push32(0x11487a41u); f_11484860();
  /* 11487a41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487a44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487a47 jne 0x11487a4a */
  if (!C.zf) goto L_11487a4a;
  /* 11487a49 int3  */
  x86_unimpl("int3 @ 0x11487a49");
L_11487a4a:;
  /* 11487a4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487a4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487a4e jne 0x11487a1f */
  if (!C.zf) goto L_11487a1f;
  /* 11487a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a53 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11487a55 mov dword ptr [0x114b6544], eax */
  w32((uint32_t)(0x114b6544), (EAX));
L_11487a5a:;
  /* 11487a5a cmp dword ptr [0x114b6544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487a61 je 0x11487a71 */
  if (C.zf) goto L_11487a71;
  /* 11487a63 mov ecx, dword ptr [0x114b6544] */
  ECX = (r32((uint32_t)(0x114b6544)));
  /* 11487a69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a6c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11487a6f jmp 0x11487a79 */
  goto L_11487a79;
L_11487a71:;
  /* 11487a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a74 mov dword ptr [0x114b653c], eax */
  w32((uint32_t)(0x114b653c), (EAX));
L_11487a79:;
  /* 11487a79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a7c mov edx, dword ptr [0x114b6544] */
  EDX = (r32((uint32_t)(0x114b6544)));
  /* 11487a82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11487a84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a87 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11487a8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11487a91 mov dword ptr [0x114b6544], ecx */
  w32((uint32_t)(0x114b6544), (ECX));
  /* 11487a97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11487a9a:;
  /* 11487a9a pop edi */
  EDI = (pop32());
  /* 11487a9b pop esi */
  ESI = (pop32());
  /* 11487a9c pop ebx */
  EBX = (pop32());
  /* 11487a9d mov esp, ebp */
  ESP = (EBP);
  /* 11487a9f pop ebp */
  EBP = (pop32());
  /* 11487aa0 ret  */
  ESPCHK(0x11487590u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ab0 @ 0x11487ab0 (27 bytes, 13 insns) */
void f_11487ab0(void) {
  FTRACE(0x11487ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11487ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11487ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487ab9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487abc push eax */
  push32((uint32_t)(EAX));
  /* 11487abd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 11487ac1 call 0x11487ad0 */
  push32(0x11487ac6u); f_11487ad0();
  /* 11487ac6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487ac9 pop ebp */
  EBP = (pop32());
  /* 11487aca ret  */
  ESPCHK(0x11487ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x11487ad0 (64 bytes, 27 insns) */
void f_11487ad0(void) {
  FTRACE(0x11487ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11487ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11487ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11487ad4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11487ad6 call 0x1148ca30 */
  push32(0x11487adbu); f_1148ca30();
  /* 11487adb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487ade push 0 */
  push32((uint32_t)(0x0u));
  /* 11487ae0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11487ae3 push eax */
  push32((uint32_t)(EAX));
  /* 11487ae4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11487ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 11487ae8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11487aeb push edx */
  push32((uint32_t)(EDX));
  /* 11487aec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487aef push eax */
  push32((uint32_t)(EAX));
  /* 11487af0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11487af4 call 0x11487590 */
  push32(0x11487af9u); f_11487590();
  /* 11487af9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487afc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11487aff push 9 */
  push32((uint32_t)(0x9u));
  /* 11487b01 call 0x1148cad0 */
  push32(0x11487b06u); f_1148cad0();
  /* 11487b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487b0c mov esp, ebp */
  ESP = (EBP);
  /* 11487b0e pop ebp */
  EBP = (pop32());
  /* 11487b0f ret  */
  ESPCHK(0x11487ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x11487b10 (19 bytes, 9 insns) */
void f_11487b10(void) {
  FTRACE(0x11487b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11487b11 mov ebp, esp */
  EBP = (ESP);
  /* 11487b13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487b15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487b18 push eax */
  push32((uint32_t)(EAX));
  /* 11487b19 call 0x11487b50 */
  push32(0x11487b1eu); f_11487b50();
  /* 11487b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487b21 pop ebp */
  EBP = (pop32());
  /* 11487b22 ret  */
  ESPCHK(0x11487b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x11487b30 (19 bytes, 9 insns) */
void f_11487b30(void) {
  FTRACE(0x11487b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11487b31 mov ebp, esp */
  EBP = (ESP);
  /* 11487b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487b35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487b38 push eax */
  push32((uint32_t)(EAX));
  /* 11487b39 call 0x11487b80 */
  push32(0x11487b3eu); f_11487b80();
  /* 11487b3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487b41 pop ebp */
  EBP = (pop32());
  /* 11487b42 ret  */
  ESPCHK(0x11487b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b50 @ 0x11487b50 (41 bytes, 16 insns) */
void f_11487b50(void) {
  FTRACE(0x11487b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11487b51 mov ebp, esp */
  EBP = (ESP);
  /* 11487b53 push 9 */
  push32((uint32_t)(0x9u));
  /* 11487b55 call 0x1148ca30 */
  push32(0x11487b5au); f_1148ca30();
  /* 11487b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487b5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487b60 push eax */
  push32((uint32_t)(EAX));
  /* 11487b61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487b64 push ecx */
  push32((uint32_t)(ECX));
  /* 11487b65 call 0x11487b80 */
  push32(0x11487b6au); f_11487b80();
  /* 11487b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487b6d push 9 */
  push32((uint32_t)(0x9u));
  /* 11487b6f call 0x1148cad0 */
  push32(0x11487b74u); f_1148cad0();
  /* 11487b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487b77 pop ebp */
  EBP = (pop32());
  /* 11487b78 ret  */
  ESPCHK(0x11487b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b80 @ 0x11487b80 (1004 bytes, 342 insns) */
void f_11487b80(void) {
  FTRACE(0x11487b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11487b81 mov ebp, esp */
  EBP = (ESP);
  /* 11487b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11487b84 push ebx */
  push32((uint32_t)(EBX));
  /* 11487b85 push esi */
  push32((uint32_t)(ESI));
  /* 11487b86 push edi */
  push32((uint32_t)(EDI));
  /* 11487b87 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 11487b8c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11487b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487b91 je 0x11487bc3 */
  if (C.zf) goto L_11487bc3;
L_11487b93:;
  /* 11487b93 call 0x11488260 */
  push32(0x11487b98u); f_11488260();
  /* 11487b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487b9a jne 0x11487bbd */
  if (!C.zf) goto L_11487bbd;
  /* 11487b9c push 0x114b0898 */
  push32((uint32_t)(0x114b0898u));
  /* 11487ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487ba3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11487ba8 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487bad push 2 */
  push32((uint32_t)(0x2u));
  /* 11487baf call 0x11484860 */
  push32(0x11487bb4u); f_11484860();
  /* 11487bb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487bb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487bba jne 0x11487bbd */
  if (!C.zf) goto L_11487bbd;
  /* 11487bbc int3  */
  x86_unimpl("int3 @ 0x11487bbc");
L_11487bbd:;
  /* 11487bbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487bbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487bc1 jne 0x11487b93 */
  if (!C.zf) goto L_11487b93;
L_11487bc3:;
  /* 11487bc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487bc7 jne 0x11487bce */
  if (!C.zf) goto L_11487bce;
  /* 11487bc9 jmp 0x11487f65 */
  goto L_11487f65;
L_11487bce:;
  /* 11487bce push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bd4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11487bd7 push edx */
  push32((uint32_t)(EDX));
  /* 11487bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487bdd push eax */
  push32((uint32_t)(EAX));
  /* 11487bde push 3 */
  push32((uint32_t)(0x3u));
  /* 11487be0 call dword ptr [0x114b4198] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b4198))), 0x11487be6u);
  /* 11487be6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487beb jne 0x11487c18 */
  if (!C.zf) goto L_11487c18;
L_11487bed:;
  /* 11487bed push 0x114b0b5c */
  push32((uint32_t)(0x114b0b5cu));
  /* 11487bf2 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11487bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11487bff call 0x11484860 */
  push32(0x11487c04u); f_11484860();
  /* 11487c04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487c07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487c0a jne 0x11487c0d */
  if (!C.zf) goto L_11487c0d;
  /* 11487c0c int3  */
  x86_unimpl("int3 @ 0x11487c0c");
L_11487c0d:;
  /* 11487c0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487c0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487c11 jne 0x11487bed */
  if (!C.zf) goto L_11487bed;
  /* 11487c13 jmp 0x11487f65 */
  goto L_11487f65;
L_11487c18:;
  /* 11487c18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487c1b push edx */
  push32((uint32_t)(EDX));
  /* 11487c1c call 0x114886c0 */
  push32(0x11487c21u); f_114886c0();
  /* 11487c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487c26 jne 0x11487c49 */
  if (!C.zf) goto L_11487c49;
  /* 11487c28 push 0x114b099c */
  push32((uint32_t)(0x114b099cu));
  /* 11487c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11487c2f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11487c34 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487c39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11487c3b call 0x11484860 */
  push32(0x11487c40u); f_11484860();
  /* 11487c40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487c43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487c46 jne 0x11487c49 */
  if (!C.zf) goto L_11487c49;
  /* 11487c48 int3  */
  x86_unimpl("int3 @ 0x11487c48");
L_11487c49:;
  /* 11487c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487c4d jne 0x11487c18 */
  if (!C.zf) goto L_11487c18;
  /* 11487c4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487c52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487c55 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11487c58:;
  /* 11487c58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487c5b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11487c5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11487c63 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487c66 je 0x11487cab */
  if (C.zf) goto L_11487cab;
  /* 11487c68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487c6b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487c6f je 0x11487cab */
  if (C.zf) goto L_11487cab;
  /* 11487c71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487c74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11487c77 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11487c7c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487c7f je 0x11487cab */
  if (C.zf) goto L_11487cab;
  /* 11487c81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487c84 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487c88 je 0x11487cab */
  if (C.zf) goto L_11487cab;
  /* 11487c8a push 0x114b0b34 */
  push32((uint32_t)(0x114b0b34u));
  /* 11487c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11487c91 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11487c96 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487c9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11487c9d call 0x11484860 */
  push32(0x11487ca2u); f_11484860();
  /* 11487ca2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487ca5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487ca8 jne 0x11487cab */
  if (!C.zf) goto L_11487cab;
  /* 11487caa int3  */
  x86_unimpl("int3 @ 0x11487caa");
L_11487cab:;
  /* 11487cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487cad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11487caf jne 0x11487c58 */
  if (!C.zf) goto L_11487c58;
  /* 11487cb1 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 11487cb6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11487cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487cbb jne 0x11487d86 */
  if (!C.zf) goto L_11487d86;
  /* 11487cc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11487cc3 mov cl, byte ptr [0x114b3ac8] */
  CL = (r8((uint32_t)(0x114b3ac8)));
  /* 11487cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11487cca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ccd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487cd0 push edx */
  push32((uint32_t)(EDX));
  /* 11487cd1 call 0x114881d0 */
  push32(0x11487cd6u); f_114881d0();
  /* 11487cd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487cdb jne 0x11487d20 */
  if (!C.zf) goto L_11487d20;
L_11487cdd:;
  /* 11487cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ce0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487ce3 push eax */
  push32((uint32_t)(EAX));
  /* 11487ce4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ce7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11487cea push edx */
  push32((uint32_t)(EDX));
  /* 11487ceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487cee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11487cf1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11487cf7 mov edx, dword ptr [ecx*4 + 0x114b3acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b3acc)));
  /* 11487cfe push edx */
  push32((uint32_t)(EDX));
  /* 11487cff push 0x114b0b08 */
  push32((uint32_t)(0x114b0b08u));
  /* 11487d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487d0a push 1 */
  push32((uint32_t)(0x1u));
  /* 11487d0c call 0x11484860 */
  push32(0x11487d11u); f_11484860();
  /* 11487d11 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487d14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487d17 jne 0x11487d1a */
  if (!C.zf) goto L_11487d1a;
  /* 11487d19 int3  */
  x86_unimpl("int3 @ 0x11487d19");
L_11487d1a:;
  /* 11487d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487d1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487d1e jne 0x11487cdd */
  if (!C.zf) goto L_11487cdd;
L_11487d20:;
  /* 11487d20 push 4 */
  push32((uint32_t)(0x4u));
  /* 11487d22 mov cl, byte ptr [0x114b3ac8] */
  CL = (r8((uint32_t)(0x114b3ac8)));
  /* 11487d28 push ecx */
  push32((uint32_t)(ECX));
  /* 11487d29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11487d2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d32 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11487d36 push edx */
  push32((uint32_t)(EDX));
  /* 11487d37 call 0x114881d0 */
  push32(0x11487d3cu); f_114881d0();
  /* 11487d3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487d3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487d41 jne 0x11487d86 */
  if (!C.zf) goto L_11487d86;
L_11487d43:;
  /* 11487d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487d49 push eax */
  push32((uint32_t)(EAX));
  /* 11487d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d4d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11487d50 push edx */
  push32((uint32_t)(EDX));
  /* 11487d51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d54 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11487d57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11487d5d mov edx, dword ptr [ecx*4 + 0x114b3acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b3acc)));
  /* 11487d64 push edx */
  push32((uint32_t)(EDX));
  /* 11487d65 push 0x114b0adc */
  push32((uint32_t)(0x114b0adcu));
  /* 11487d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11487d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11487d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11487d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487d72 call 0x11484860 */
  push32(0x11487d77u); f_11484860();
  /* 11487d77 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487d7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487d7d jne 0x11487d80 */
  if (!C.zf) goto L_11487d80;
  /* 11487d7f int3  */
  x86_unimpl("int3 @ 0x11487d7f");
L_11487d80:;
  /* 11487d80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11487d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487d84 jne 0x11487d43 */
  if (!C.zf) goto L_11487d43;
L_11487d86:;
  /* 11487d86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d89 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487d8d jne 0x11487dfb */
  if (!C.zf) goto L_11487dfb;
L_11487d8f:;
  /* 11487d8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d92 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487d99 jne 0x11487da4 */
  if (!C.zf) goto L_11487da4;
  /* 11487d9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487d9e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487da2 je 0x11487dc5 */
  if (C.zf) goto L_11487dc5;
L_11487da4:;
  /* 11487da4 push 0x114b0a9c */
  push32((uint32_t)(0x114b0a9cu));
  /* 11487da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487dab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11487db0 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487db5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11487db7 call 0x11484860 */
  push32(0x11487dbcu); f_11484860();
  /* 11487dbc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487dbf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487dc2 jne 0x11487dc5 */
  if (!C.zf) goto L_11487dc5;
  /* 11487dc4 int3  */
  x86_unimpl("int3 @ 0x11487dc4");
L_11487dc5:;
  /* 11487dc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487dc7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487dc9 jne 0x11487d8f */
  if (!C.zf) goto L_11487d8f;
  /* 11487dcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487dce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11487dd1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487dd4 push eax */
  push32((uint32_t)(EAX));
  /* 11487dd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487dd7 mov cl, byte ptr [0x114b3ac9] */
  CL = (r8((uint32_t)(0x114b3ac9)));
  /* 11487ddd push ecx */
  push32((uint32_t)(ECX));
  /* 11487dde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487de1 push edx */
  push32((uint32_t)(EDX));
  /* 11487de2 call 0x1148bbf0 */
  push32(0x11487de7u); f_1148bbf0();
  /* 11487de7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ded push eax */
  push32((uint32_t)(EAX));
  /* 11487dee call 0x1148d140 */
  push32(0x11487df3u); f_1148d140();
  /* 11487df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487df6 jmp 0x11487f65 */
  goto L_11487f65;
L_11487dfb:;
  /* 11487dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487dfe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487e02 jne 0x11487e11 */
  if (!C.zf) goto L_11487e11;
  /* 11487e04 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487e08 jne 0x11487e11 */
  if (!C.zf) goto L_11487e11;
  /* 11487e0a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11487e11:;
  /* 11487e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487e14 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11487e17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487e1a je 0x11487e3d */
  if (C.zf) goto L_11487e3d;
  /* 11487e1c push 0x114b0a7c */
  push32((uint32_t)(0x114b0a7cu));
  /* 11487e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487e23 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11487e28 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11487e2f call 0x11484860 */
  push32(0x11487e34u); f_11484860();
  /* 11487e34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487e37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487e3a jne 0x11487e3d */
  if (!C.zf) goto L_11487e3d;
  /* 11487e3c int3  */
  x86_unimpl("int3 @ 0x11487e3c");
L_11487e3d:;
  /* 11487e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487e3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487e41 jne 0x11487e11 */
  if (!C.zf) goto L_11487e11;
  /* 11487e43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487e46 mov eax, dword ptr [0x114b6548] */
  EAX = (r32((uint32_t)(0x114b6548)));
  /* 11487e4b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487e4e mov dword ptr [0x114b6548], eax */
  w32((uint32_t)(0x114b6548), (EAX));
  /* 11487e53 mov ecx, dword ptr [0x114b3abc] */
  ECX = (r32((uint32_t)(0x114b3abc)));
  /* 11487e59 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11487e5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487e5e jne 0x11487f3c */
  if (!C.zf) goto L_11487f3c;
  /* 11487e64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487e67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487e6a je 0x11487e7c */
  if (C.zf) goto L_11487e7c;
  /* 11487e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487e6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11487e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487e74 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11487e77 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11487e7a jmp 0x11487eba */
  goto L_11487eba;
L_11487e7c:;
  /* 11487e7c mov ecx, dword ptr [0x114b653c] */
  ECX = (r32((uint32_t)(0x114b653c)));
  /* 11487e82 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487e85 je 0x11487ea8 */
  if (C.zf) goto L_11487ea8;
  /* 11487e87 push 0x114b0a64 */
  push32((uint32_t)(0x114b0a64u));
  /* 11487e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11487e8e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11487e93 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487e98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11487e9a call 0x11484860 */
  push32(0x11487e9fu); f_11484860();
  /* 11487e9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487ea2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487ea5 jne 0x11487ea8 */
  if (!C.zf) goto L_11487ea8;
  /* 11487ea7 int3  */
  x86_unimpl("int3 @ 0x11487ea7");
L_11487ea8:;
  /* 11487ea8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487eaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11487eac jne 0x11487e7c */
  if (!C.zf) goto L_11487e7c;
  /* 11487eae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487eb1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11487eb4 mov dword ptr [0x114b653c], ecx */
  w32((uint32_t)(0x114b653c), (ECX));
L_11487eba:;
  /* 11487eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ebd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487ec1 je 0x11487ed2 */
  if (C.zf) goto L_11487ed2;
  /* 11487ec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ec6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11487ec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487ecc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11487ece mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11487ed0 jmp 0x11487f0f */
  goto L_11487f0f;
L_11487ed2:;
  /* 11487ed2 mov ecx, dword ptr [0x114b6544] */
  ECX = (r32((uint32_t)(0x114b6544)));
  /* 11487ed8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487edb je 0x11487efe */
  if (C.zf) goto L_11487efe;
  /* 11487edd push 0x114b0a4c */
  push32((uint32_t)(0x114b0a4cu));
  /* 11487ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487ee4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11487ee9 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487eee push 2 */
  push32((uint32_t)(0x2u));
  /* 11487ef0 call 0x11484860 */
  push32(0x11487ef5u); f_11484860();
  /* 11487ef5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487ef8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487efb jne 0x11487efe */
  if (!C.zf) goto L_11487efe;
  /* 11487efd int3  */
  x86_unimpl("int3 @ 0x11487efd");
L_11487efe:;
  /* 11487efe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11487f00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11487f02 jne 0x11487ed2 */
  if (!C.zf) goto L_11487ed2;
  /* 11487f04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11487f09 mov dword ptr [0x114b6544], ecx */
  w32((uint32_t)(0x114b6544), (ECX));
L_11487f0f:;
  /* 11487f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f12 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11487f15 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487f18 push eax */
  push32((uint32_t)(EAX));
  /* 11487f19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487f1b mov cl, byte ptr [0x114b3ac9] */
  CL = (r8((uint32_t)(0x114b3ac9)));
  /* 11487f21 push ecx */
  push32((uint32_t)(ECX));
  /* 11487f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f25 push edx */
  push32((uint32_t)(EDX));
  /* 11487f26 call 0x1148bbf0 */
  push32(0x11487f2bu); f_1148bbf0();
  /* 11487f2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487f2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f31 push eax */
  push32((uint32_t)(EAX));
  /* 11487f32 call 0x1148d140 */
  push32(0x11487f37u); f_1148d140();
  /* 11487f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487f3a jmp 0x11487f65 */
  goto L_11487f65;
L_11487f3c:;
  /* 11487f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f3f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11487f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f49 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11487f4c push eax */
  push32((uint32_t)(EAX));
  /* 11487f4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487f4f mov cl, byte ptr [0x114b3ac9] */
  CL = (r8((uint32_t)(0x114b3ac9)));
  /* 11487f55 push ecx */
  push32((uint32_t)(ECX));
  /* 11487f56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11487f59 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11487f5c push edx */
  push32((uint32_t)(EDX));
  /* 11487f5d call 0x1148bbf0 */
  push32(0x11487f62u); f_1148bbf0();
  /* 11487f62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11487f65:;
  /* 11487f65 pop edi */
  EDI = (pop32());
  /* 11487f66 pop esi */
  ESI = (pop32());
  /* 11487f67 pop ebx */
  EBX = (pop32());
  /* 11487f68 mov esp, ebp */
  ESP = (EBP);
  /* 11487f6a pop ebp */
  EBP = (pop32());
  /* 11487f6b ret  */
  ESPCHK(0x11487b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x11487f70 (19 bytes, 9 insns) */
void f_11487f70(void) {
  FTRACE(0x11487f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11487f71 mov ebp, esp */
  EBP = (ESP);
  /* 11487f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11487f75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487f78 push eax */
  push32((uint32_t)(EAX));
  /* 11487f79 call 0x11487f90 */
  push32(0x11487f7eu); f_11487f90();
  /* 11487f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487f81 pop ebp */
  EBP = (pop32());
  /* 11487f82 ret  */
  ESPCHK(0x11487f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x11487f90 (342 bytes, 119 insns) */
void f_11487f90(void) {
  FTRACE(0x11487f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11487f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11487f91 mov ebp, esp */
  EBP = (ESP);
  /* 11487f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11487f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11487f97 push esi */
  push32((uint32_t)(ESI));
  /* 11487f98 push edi */
  push32((uint32_t)(EDI));
  /* 11487f99 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 11487f9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11487fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487fa3 je 0x11487fd5 */
  if (C.zf) goto L_11487fd5;
L_11487fa5:;
  /* 11487fa5 call 0x11488260 */
  push32(0x11487faau); f_11488260();
  /* 11487faa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487fac jne 0x11487fcf */
  if (!C.zf) goto L_11487fcf;
  /* 11487fae push 0x114b0898 */
  push32((uint32_t)(0x114b0898u));
  /* 11487fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487fb5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11487fba push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11487fbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11487fc1 call 0x11484860 */
  push32(0x11487fc6u); f_11484860();
  /* 11487fc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487fc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11487fcc jne 0x11487fcf */
  if (!C.zf) goto L_11487fcf;
  /* 11487fce int3  */
  x86_unimpl("int3 @ 0x11487fce");
L_11487fcf:;
  /* 11487fcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11487fd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11487fd3 jne 0x11487fa5 */
  if (!C.zf) goto L_11487fa5;
L_11487fd5:;
  /* 11487fd5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11487fd7 call 0x1148ca30 */
  push32(0x11487fdcu); f_1148ca30();
  /* 11487fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11487fdf:;
  /* 11487fdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11487fe2 push edx */
  push32((uint32_t)(EDX));
  /* 11487fe3 call 0x114886c0 */
  push32(0x11487fe8u); f_114886c0();
  /* 11487fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11487feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11487fed jne 0x11488010 */
  if (!C.zf) goto L_11488010;
  /* 11487fef push 0x114b099c */
  push32((uint32_t)(0x114b099cu));
  /* 11487ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11487ff6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11487ffb push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11488000 push 2 */
  push32((uint32_t)(0x2u));
  /* 11488002 call 0x11484860 */
  push32(0x11488007u); f_11484860();
  /* 11488007 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148800a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148800d jne 0x11488010 */
  if (!C.zf) goto L_11488010;
  /* 1148800f int3  */
  x86_unimpl("int3 @ 0x1148800f");
L_11488010:;
  /* 11488010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488014 jne 0x11487fdf */
  if (!C.zf) goto L_11487fdf;
  /* 11488016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488019 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148801c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1148801f:;
  /* 1148801f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488022 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488025 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148802a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148802d je 0x11488072 */
  if (C.zf) goto L_11488072;
  /* 1148802f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488032 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488036 je 0x11488072 */
  if (C.zf) goto L_11488072;
  /* 11488038 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148803b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1148803e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488043 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488046 je 0x11488072 */
  if (C.zf) goto L_11488072;
  /* 11488048 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148804b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148804f je 0x11488072 */
  if (C.zf) goto L_11488072;
  /* 11488051 push 0x114b0b34 */
  push32((uint32_t)(0x114b0b34u));
  /* 11488056 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488058 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1148805d push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 11488062 push 2 */
  push32((uint32_t)(0x2u));
  /* 11488064 call 0x11484860 */
  push32(0x11488069u); f_11484860();
  /* 11488069 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148806c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148806f jne 0x11488072 */
  if (!C.zf) goto L_11488072;
  /* 11488071 int3  */
  x86_unimpl("int3 @ 0x11488071");
L_11488072:;
  /* 11488072 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488074 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488076 jne 0x1148801f */
  if (!C.zf) goto L_1148801f;
  /* 11488078 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148807b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148807f jne 0x1148808e */
  if (!C.zf) goto L_1148808e;
  /* 11488081 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488085 jne 0x1148808e */
  if (!C.zf) goto L_1148808e;
  /* 11488087 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1148808e:;
  /* 1148808e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488091 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488095 je 0x114880c9 */
  if (C.zf) goto L_114880c9;
L_11488097:;
  /* 11488097 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148809a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1148809d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114880a0 je 0x114880c3 */
  if (C.zf) goto L_114880c3;
  /* 114880a2 push 0x114b0a7c */
  push32((uint32_t)(0x114b0a7cu));
  /* 114880a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114880a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 114880ae push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 114880b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114880b5 call 0x11484860 */
  push32(0x114880bau); f_11484860();
  /* 114880ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114880bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114880c0 jne 0x114880c3 */
  if (!C.zf) goto L_114880c3;
  /* 114880c2 int3  */
  x86_unimpl("int3 @ 0x114880c2");
L_114880c3:;
  /* 114880c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114880c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114880c7 jne 0x11488097 */
  if (!C.zf) goto L_11488097;
L_114880c9:;
  /* 114880c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114880cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 114880cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114880d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 114880d4 call 0x1148cad0 */
  push32(0x114880d9u); f_1148cad0();
  /* 114880d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114880dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114880df pop edi */
  EDI = (pop32());
  /* 114880e0 pop esi */
  ESI = (pop32());
  /* 114880e1 pop ebx */
  EBX = (pop32());
  /* 114880e2 mov esp, ebp */
  ESP = (EBP);
  /* 114880e4 pop ebp */
  EBP = (pop32());
  /* 114880e5 ret  */
  ESPCHK(0x11487f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x114880f0 (28 bytes, 11 insns) */
void f_114880f0(void) {
  FTRACE(0x114880f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114880f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114880f1 mov ebp, esp */
  EBP = (ESP);
  /* 114880f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114880f4 mov eax, dword ptr [0x114b3ac4] */
  EAX = (r32((uint32_t)(0x114b3ac4)));
  /* 114880f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114880fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114880ff mov dword ptr [0x114b3ac4], ecx */
  w32((uint32_t)(0x114b3ac4), (ECX));
  /* 11488105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488108 mov esp, ebp */
  ESP = (EBP);
  /* 1148810a pop ebp */
  EBP = (pop32());
  /* 1148810b ret  */
  ESPCHK(0x114880f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008110 @ 0x11488110 (157 bytes, 59 insns) */
void f_11488110(void) {
  FTRACE(0x11488110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488110 push ebp */
  push32((uint32_t)(EBP));
  /* 11488111 mov ebp, esp */
  EBP = (ESP);
  /* 11488113 push ecx */
  push32((uint32_t)(ECX));
  /* 11488114 push ebx */
  push32((uint32_t)(EBX));
  /* 11488115 push esi */
  push32((uint32_t)(ESI));
  /* 11488116 push edi */
  push32((uint32_t)(EDI));
  /* 11488117 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488119 call 0x1148ca30 */
  push32(0x1148811eu); f_1148ca30();
  /* 1148811e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488124 push eax */
  push32((uint32_t)(EAX));
  /* 11488125 call 0x114886c0 */
  push32(0x1148812au); f_114886c0();
  /* 1148812a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148812d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148812f je 0x1148819c */
  if (C.zf) goto L_1148819c;
  /* 11488131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488134 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488137 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148813a:;
  /* 1148813a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148813d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488140 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488145 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488148 je 0x1148818d */
  if (C.zf) goto L_1148818d;
  /* 1148814a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148814d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488151 je 0x1148818d */
  if (C.zf) goto L_1148818d;
  /* 11488153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488156 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488159 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148815e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488161 je 0x1148818d */
  if (C.zf) goto L_1148818d;
  /* 11488163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488166 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148816a je 0x1148818d */
  if (C.zf) goto L_1148818d;
  /* 1148816c push 0x114b0b34 */
  push32((uint32_t)(0x114b0b34u));
  /* 11488171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488173 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11488178 push 0x114b088c */
  push32((uint32_t)(0x114b088cu));
  /* 1148817d push 2 */
  push32((uint32_t)(0x2u));
  /* 1148817f call 0x11484860 */
  push32(0x11488184u); f_11484860();
  /* 11488184 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488187 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148818a jne 0x1148818d */
  if (!C.zf) goto L_1148818d;
  /* 1148818c int3  */
  x86_unimpl("int3 @ 0x1148818c");
L_1148818d:;
  /* 1148818d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148818f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488191 jne 0x1148813a */
  if (!C.zf) goto L_1148813a;
  /* 11488193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488196 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11488199 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1148819c:;
  /* 1148819c push 9 */
  push32((uint32_t)(0x9u));
  /* 1148819e call 0x1148cad0 */
  push32(0x114881a3u); f_1148cad0();
  /* 114881a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114881a6 pop edi */
  EDI = (pop32());
  /* 114881a7 pop esi */
  ESI = (pop32());
  /* 114881a8 pop ebx */
  EBX = (pop32());
  /* 114881a9 mov esp, ebp */
  ESP = (EBP);
  /* 114881ab pop ebp */
  EBP = (pop32());
  /* 114881ac ret  */
  ESPCHK(0x11488110u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x114881b0 (28 bytes, 11 insns) */
void f_114881b0(void) {
  FTRACE(0x114881b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114881b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114881b1 mov ebp, esp */
  EBP = (ESP);
  /* 114881b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114881b4 mov eax, dword ptr [0x114b4198] */
  EAX = (r32((uint32_t)(0x114b4198)));
  /* 114881b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114881bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114881bf mov dword ptr [0x114b4198], ecx */
  w32((uint32_t)(0x114b4198), (ECX));
  /* 114881c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114881c8 mov esp, ebp */
  ESP = (EBP);
  /* 114881ca pop ebp */
  EBP = (pop32());
  /* 114881cb ret  */
  ESPCHK(0x114881b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x114881d0 (136 bytes, 55 insns) */
void f_114881d0(void) {
  FTRACE(0x114881d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114881d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114881d1 mov ebp, esp */
  EBP = (ESP);
  /* 114881d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114881d4 push ebx */
  push32((uint32_t)(EBX));
  /* 114881d5 push esi */
  push32((uint32_t)(ESI));
  /* 114881d6 push edi */
  push32((uint32_t)(EDI));
  /* 114881d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_114881de:;
  /* 114881de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114881e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114881e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114881e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114881ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114881ec je 0x1148824e */
  if (C.zf) goto L_1148824e;
  /* 114881ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114881f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114881f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114881f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114881f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114881fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488201 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488204 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11488207 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488209 je 0x1148824c */
  if (C.zf) goto L_1148824c;
L_1148820b:;
  /* 1148820b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148820e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488213 push eax */
  push32((uint32_t)(EAX));
  /* 11488214 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488217 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488219 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1148821c push edx */
  push32((uint32_t)(EDX));
  /* 1148821d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488220 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488223 push eax */
  push32((uint32_t)(EAX));
  /* 11488224 push 0x114b0b78 */
  push32((uint32_t)(0x114b0b78u));
  /* 11488229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148822b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148822d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148822f push 0 */
  push32((uint32_t)(0x0u));
  /* 11488231 call 0x11484860 */
  push32(0x11488236u); f_11484860();
  /* 11488236 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488239 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148823c jne 0x1148823f */
  if (!C.zf) goto L_1148823f;
  /* 1148823e int3  */
  x86_unimpl("int3 @ 0x1148823e");
L_1148823f:;
  /* 1148823f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11488241 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488243 jne 0x1148820b */
  if (!C.zf) goto L_1148820b;
  /* 11488245 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1148824c:;
  /* 1148824c jmp 0x114881de */
  goto L_114881de;
L_1148824e:;
  /* 1148824e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488251 pop edi */
  EDI = (pop32());
  /* 11488252 pop esi */
  ESI = (pop32());
  /* 11488253 pop ebx */
  EBX = (pop32());
  /* 11488254 mov esp, ebp */
  ESP = (EBP);
  /* 11488256 pop ebp */
  EBP = (pop32());
  /* 11488257 ret  */
  ESPCHK(0x114881d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x11488260 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11488260(void) {
  FTRACE(0x11488260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488260 push ebp */
  push32((uint32_t)(EBP));
  /* 11488261 mov ebp, esp */
  EBP = (ESP);
  /* 11488263 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488266 push ebx */
  push32((uint32_t)(EBX));
  /* 11488267 push esi */
  push32((uint32_t)(ESI));
  /* 11488268 push edi */
  push32((uint32_t)(EDI));
  /* 11488269 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11488270 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 11488275 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11488278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148827a jne 0x11488286 */
  if (!C.zf) goto L_11488286;
  /* 1148827c mov eax, 1 */
  EAX = (0x1u);
  /* 11488281 jmp 0x114885b8 */
  goto L_114885b8;
L_11488286:;
  /* 11488286 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488288 call 0x1148ca30 */
  push32(0x1148828du); f_1148ca30();
  /* 1148828d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488290 call 0x1148d1b0 */
  push32(0x11488295u); f_1148d1b0();
  /* 11488295 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11488298 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148829c je 0x114883a9 */
  if (C.zf) goto L_114883a9;
  /* 114882a2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114882a6 je 0x114883a9 */
  if (C.zf) goto L_114883a9;
  /* 114882ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114882af mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 114882b2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114882b5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114882b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114882bb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114882bf ja 0x11488372 */
  if ((!C.cf&&!C.zf)) goto L_11488372;
  /* 114882c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114882c8 jmp dword ptr [eax*4 + 0x114885bf] */
  switch (EAX) {
    case 0: goto L_1148834a;
    case 1: goto L_11488322;
    case 2: goto L_114882fa;
    case 3: goto L_114882cf;
    default: x86_unimpl("switch@0x114882c8 out of table"); return;
  }
L_114882cf:;
  /* 114882cf push 0x114b0ccc */
  push32((uint32_t)(0x114b0cccu));
  /* 114882d4 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 114882d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114882db push 0 */
  push32((uint32_t)(0x0u));
  /* 114882dd push 0 */
  push32((uint32_t)(0x0u));
  /* 114882df push 0 */
  push32((uint32_t)(0x0u));
  /* 114882e1 call 0x11484860 */
  push32(0x114882e6u); f_11484860();
  /* 114882e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114882e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114882ec jne 0x114882ef */
  if (!C.zf) goto L_114882ef;
  /* 114882ee int3  */
  x86_unimpl("int3 @ 0x114882ee");
L_114882ef:;
  /* 114882ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114882f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114882f3 jne 0x114882cf */
  if (!C.zf) goto L_114882cf;
  /* 114882f5 jmp 0x11488398 */
  goto L_11488398;
L_114882fa:;
  /* 114882fa push 0x114b0ca8 */
  push32((uint32_t)(0x114b0ca8u));
  /* 114882ff push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11488304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488306 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148830a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148830c call 0x11484860 */
  push32(0x11488311u); f_11484860();
  /* 11488311 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488314 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488317 jne 0x1148831a */
  if (!C.zf) goto L_1148831a;
  /* 11488319 int3  */
  x86_unimpl("int3 @ 0x11488319");
L_1148831a:;
  /* 1148831a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148831c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148831e jne 0x114882fa */
  if (!C.zf) goto L_114882fa;
  /* 11488320 jmp 0x11488398 */
  goto L_11488398;
L_11488322:;
  /* 11488322 push 0x114b0c84 */
  push32((uint32_t)(0x114b0c84u));
  /* 11488327 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 1148832c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148832e push 0 */
  push32((uint32_t)(0x0u));
  /* 11488330 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488332 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488334 call 0x11484860 */
  push32(0x11488339u); f_11484860();
  /* 11488339 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148833c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148833f jne 0x11488342 */
  if (!C.zf) goto L_11488342;
  /* 11488341 int3  */
  x86_unimpl("int3 @ 0x11488341");
L_11488342:;
  /* 11488342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488346 jne 0x11488322 */
  if (!C.zf) goto L_11488322;
  /* 11488348 jmp 0x11488398 */
  goto L_11488398;
L_1148834a:;
  /* 1148834a push 0x114b0c60 */
  push32((uint32_t)(0x114b0c60u));
  /* 1148834f push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11488354 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488356 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488358 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148835a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148835c call 0x11484860 */
  push32(0x11488361u); f_11484860();
  /* 11488361 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488367 jne 0x1148836a */
  if (!C.zf) goto L_1148836a;
  /* 11488369 int3  */
  x86_unimpl("int3 @ 0x11488369");
L_1148836a:;
  /* 1148836a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148836c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148836e jne 0x1148834a */
  if (!C.zf) goto L_1148834a;
  /* 11488370 jmp 0x11488398 */
  goto L_11488398;
L_11488372:;
  /* 11488372 push 0x114b0c34 */
  push32((uint32_t)(0x114b0c34u));
  /* 11488377 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 1148837c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148837e push 0 */
  push32((uint32_t)(0x0u));
  /* 11488380 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488382 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488384 call 0x11484860 */
  push32(0x11488389u); f_11484860();
  /* 11488389 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148838c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148838f jne 0x11488392 */
  if (!C.zf) goto L_11488392;
  /* 11488391 int3  */
  x86_unimpl("int3 @ 0x11488391");
L_11488392:;
  /* 11488392 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488396 jne 0x11488372 */
  if (!C.zf) goto L_11488372;
L_11488398:;
  /* 11488398 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148839a call 0x1148cad0 */
  push32(0x1148839fu); f_1148cad0();
  /* 1148839f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114883a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114883a4 jmp 0x114885b8 */
  goto L_114885b8;
L_114883a9:;
  /* 114883a9 mov eax, dword ptr [0x114b6544] */
  EAX = (r32((uint32_t)(0x114b6544)));
  /* 114883ae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 114883b1 jmp 0x114883bb */
  goto L_114883bb;
L_114883b3:;
  /* 114883b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114883b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114883b8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_114883bb:;
  /* 114883bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114883bf je 0x114885ab */
  if (C.zf) goto L_114885ab;
  /* 114883c5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 114883cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114883cf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114883d2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114883d8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114883db je 0x11488400 */
  if (C.zf) goto L_11488400;
  /* 114883dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114883e0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114883e4 je 0x11488400 */
  if (C.zf) goto L_11488400;
  /* 114883e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114883e9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 114883ec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114883f2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114883f5 je 0x11488400 */
  if (C.zf) goto L_11488400;
  /* 114883f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114883fa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114883fe jne 0x11488418 */
  if (!C.zf) goto L_11488418;
L_11488400:;
  /* 11488400 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488403 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11488406 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148840c mov edx, dword ptr [ecx*4 + 0x114b3acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b3acc)));
  /* 11488413 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11488416 jmp 0x1148841f */
  goto L_1148841f;
L_11488418:;
  /* 11488418 mov dword ptr [ebp - 0x14], 0x114b0c2c */
  w32((uint32_t)(EBP + -0x14), (0x114b0c2cu));
L_1148841f:;
  /* 1148841f push 4 */
  push32((uint32_t)(0x4u));
  /* 11488421 mov al, byte ptr [0x114b3ac8] */
  AL = (r8((uint32_t)(0x114b3ac8)));
  /* 11488426 push eax */
  push32((uint32_t)(EAX));
  /* 11488427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148842a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148842d push ecx */
  push32((uint32_t)(ECX));
  /* 1148842e call 0x114881d0 */
  push32(0x11488433u); f_114881d0();
  /* 11488433 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488438 jne 0x11488474 */
  if (!C.zf) goto L_11488474;
L_1148843a:;
  /* 1148843a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148843d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488440 push edx */
  push32((uint32_t)(EDX));
  /* 11488441 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488444 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11488447 push ecx */
  push32((uint32_t)(ECX));
  /* 11488448 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148844b push edx */
  push32((uint32_t)(EDX));
  /* 1148844c push 0x114b0b08 */
  push32((uint32_t)(0x114b0b08u));
  /* 11488451 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488455 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488459 call 0x11484860 */
  push32(0x1148845eu); f_11484860();
  /* 1148845e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488461 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488464 jne 0x11488467 */
  if (!C.zf) goto L_11488467;
  /* 11488466 int3  */
  x86_unimpl("int3 @ 0x11488466");
L_11488467:;
  /* 11488467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148846b jne 0x1148843a */
  if (!C.zf) goto L_1148843a;
  /* 1148846d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11488474:;
  /* 11488474 push 4 */
  push32((uint32_t)(0x4u));
  /* 11488476 mov cl, byte ptr [0x114b3ac8] */
  CL = (r8((uint32_t)(0x114b3ac8)));
  /* 1148847c push ecx */
  push32((uint32_t)(ECX));
  /* 1148847d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488480 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11488483 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488486 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1148848a push edx */
  push32((uint32_t)(EDX));
  /* 1148848b call 0x114881d0 */
  push32(0x11488490u); f_114881d0();
  /* 11488490 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488495 jne 0x114884d1 */
  if (!C.zf) goto L_114884d1;
L_11488497:;
  /* 11488497 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148849a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148849d push eax */
  push32((uint32_t)(EAX));
  /* 1148849e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114884a1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114884a4 push edx */
  push32((uint32_t)(EDX));
  /* 114884a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114884a8 push eax */
  push32((uint32_t)(EAX));
  /* 114884a9 push 0x114b0adc */
  push32((uint32_t)(0x114b0adcu));
  /* 114884ae push 0 */
  push32((uint32_t)(0x0u));
  /* 114884b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114884b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114884b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114884b6 call 0x11484860 */
  push32(0x114884bbu); f_11484860();
  /* 114884bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114884be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114884c1 jne 0x114884c4 */
  if (!C.zf) goto L_114884c4;
  /* 114884c3 int3  */
  x86_unimpl("int3 @ 0x114884c3");
L_114884c4:;
  /* 114884c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114884c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114884c8 jne 0x11488497 */
  if (!C.zf) goto L_11488497;
  /* 114884ca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114884d1:;
  /* 114884d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114884d4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114884d8 jne 0x1148852a */
  if (!C.zf) goto L_1148852a;
  /* 114884da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114884dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114884e0 push ecx */
  push32((uint32_t)(ECX));
  /* 114884e1 mov dl, byte ptr [0x114b3ac9] */
  DL = (r8((uint32_t)(0x114b3ac9)));
  /* 114884e7 push edx */
  push32((uint32_t)(EDX));
  /* 114884e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114884eb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114884ee push eax */
  push32((uint32_t)(EAX));
  /* 114884ef call 0x114881d0 */
  push32(0x114884f4u); f_114881d0();
  /* 114884f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114884f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114884f9 jne 0x1148852a */
  if (!C.zf) goto L_1148852a;
L_114884fb:;
  /* 114884fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114884fe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488501 push ecx */
  push32((uint32_t)(ECX));
  /* 11488502 push 0x114b0c00 */
  push32((uint32_t)(0x114b0c00u));
  /* 11488507 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488509 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148850b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148850d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148850f call 0x11484860 */
  push32(0x11488514u); f_11484860();
  /* 11488514 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488517 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148851a jne 0x1148851d */
  if (!C.zf) goto L_1148851d;
  /* 1148851c int3  */
  x86_unimpl("int3 @ 0x1148851c");
L_1148851d:;
  /* 1148851d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148851f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488521 jne 0x114884fb */
  if (!C.zf) goto L_114884fb;
  /* 11488523 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1148852a:;
  /* 1148852a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148852e jne 0x114885a6 */
  if (!C.zf) goto L_114885a6;
  /* 11488530 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488533 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488537 je 0x1148856c */
  if (C.zf) goto L_1148856c;
L_11488539:;
  /* 11488539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148853c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148853f push edx */
  push32((uint32_t)(EDX));
  /* 11488540 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488543 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11488546 push ecx */
  push32((uint32_t)(ECX));
  /* 11488547 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148854a push edx */
  push32((uint32_t)(EDX));
  /* 1148854b push 0x114b0be0 */
  push32((uint32_t)(0x114b0be0u));
  /* 11488550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488552 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488556 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488558 call 0x11484860 */
  push32(0x1148855du); f_11484860();
  /* 1148855d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488560 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488563 jne 0x11488566 */
  if (!C.zf) goto L_11488566;
  /* 11488565 int3  */
  x86_unimpl("int3 @ 0x11488565");
L_11488566:;
  /* 11488566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148856a jne 0x11488539 */
  if (!C.zf) goto L_11488539;
L_1148856c:;
  /* 1148856c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148856f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11488572 push edx */
  push32((uint32_t)(EDX));
  /* 11488573 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488576 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488579 push eax */
  push32((uint32_t)(EAX));
  /* 1148857a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148857d push ecx */
  push32((uint32_t)(ECX));
  /* 1148857e push 0x114b0bb4 */
  push32((uint32_t)(0x114b0bb4u));
  /* 11488583 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488585 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488587 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148858b call 0x11484860 */
  push32(0x11488590u); f_11484860();
  /* 11488590 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488593 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488596 jne 0x11488599 */
  if (!C.zf) goto L_11488599;
  /* 11488598 int3  */
  x86_unimpl("int3 @ 0x11488598");
L_11488599:;
  /* 11488599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148859b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148859d jne 0x1148856c */
  if (!C.zf) goto L_1148856c;
  /* 1148859f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114885a6:;
  /* 114885a6 jmp 0x114883b3 */
  goto L_114883b3;
L_114885ab:;
  /* 114885ab push 9 */
  push32((uint32_t)(0x9u));
  /* 114885ad call 0x1148cad0 */
  push32(0x114885b2u); f_1148cad0();
  /* 114885b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114885b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114885b8:;
  /* 114885b8 pop edi */
  EDI = (pop32());
  /* 114885b9 pop esi */
  ESI = (pop32());
  /* 114885ba pop ebx */
  EBX = (pop32());
  /* 114885bb mov esp, ebp */
  ESP = (EBP);
  /* 114885bd pop ebp */
  EBP = (pop32());
  /* 114885be ret  */
  ESPCHK(0x11488260u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x114885d0 (34 bytes, 13 insns) */
void f_114885d0(void) {
  FTRACE(0x114885d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114885d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114885d1 mov ebp, esp */
  EBP = (ESP);
  /* 114885d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114885d4 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 114885d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114885dc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114885e0 je 0x114885eb */
  if (C.zf) goto L_114885eb;
  /* 114885e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114885e5 mov dword ptr [0x114b3abc], ecx */
  w32((uint32_t)(0x114b3abc), (ECX));
L_114885eb:;
  /* 114885eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114885ee mov esp, ebp */
  ESP = (EBP);
  /* 114885f0 pop ebp */
  EBP = (pop32());
  /* 114885f1 ret  */
  ESPCHK(0x114885d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008600 @ 0x11488600 (103 bytes, 38 insns) */
void f_11488600(void) {
  FTRACE(0x11488600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488600 push ebp */
  push32((uint32_t)(EBP));
  /* 11488601 mov ebp, esp */
  EBP = (ESP);
  /* 11488603 push ecx */
  push32((uint32_t)(ECX));
  /* 11488604 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 11488609 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1148860c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148860e jne 0x11488612 */
  if (!C.zf) goto L_11488612;
  /* 11488610 jmp 0x11488663 */
  goto L_11488663;
L_11488612:;
  /* 11488612 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488614 call 0x1148ca30 */
  push32(0x11488619u); f_1148ca30();
  /* 11488619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148861c mov ecx, dword ptr [0x114b6544] */
  ECX = (r32((uint32_t)(0x114b6544)));
  /* 11488622 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11488625 jmp 0x1148862f */
  goto L_1148862f;
L_11488627:;
  /* 11488627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148862a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148862c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148862f:;
  /* 1148862f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488633 je 0x11488659 */
  if (C.zf) goto L_11488659;
  /* 11488635 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488638 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1148863b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488641 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488644 jne 0x11488657 */
  if (!C.zf) goto L_11488657;
  /* 11488646 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11488649 push eax */
  push32((uint32_t)(EAX));
  /* 1148864a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148864d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488650 push ecx */
  push32((uint32_t)(ECX));
  /* 11488651 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11488654u);
  /* 11488654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11488657:;
  /* 11488657 jmp 0x11488627 */
  goto L_11488627;
L_11488659:;
  /* 11488659 push 9 */
  push32((uint32_t)(0x9u));
  /* 1148865b call 0x1148cad0 */
  push32(0x11488660u); f_1148cad0();
  /* 11488660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11488663:;
  /* 11488663 mov esp, ebp */
  ESP = (EBP);
  /* 11488665 pop ebp */
  EBP = (pop32());
  /* 11488666 ret  */
  ESPCHK(0x11488600u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11488670 (75 bytes, 28 insns) */
void f_11488670(void) {
  FTRACE(0x11488670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488670 push ebp */
  push32((uint32_t)(EBP));
  /* 11488671 mov ebp, esp */
  EBP = (ESP);
  /* 11488673 push ecx */
  push32((uint32_t)(ECX));
  /* 11488674 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488678 je 0x114886ad */
  if (C.zf) goto L_114886ad;
  /* 1148867a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148867d push eax */
  push32((uint32_t)(EAX));
  /* 1148867e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488681 push ecx */
  push32((uint32_t)(ECX));
  /* 11488682 call dword ptr [0x114b93c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c8))), 0x11488688u);
  /* 11488688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148868a jne 0x114886ad */
  if (!C.zf) goto L_114886ad;
  /* 1148868c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488690 je 0x114886a4 */
  if (C.zf) goto L_114886a4;
  /* 11488692 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11488695 push edx */
  push32((uint32_t)(EDX));
  /* 11488696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488699 push eax */
  push32((uint32_t)(EAX));
  /* 1148869a call dword ptr [0x114b93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93c4))), 0x114886a0u);
  /* 114886a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114886a2 jne 0x114886ad */
  if (!C.zf) goto L_114886ad;
L_114886a4:;
  /* 114886a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114886ab jmp 0x114886b4 */
  goto L_114886b4;
L_114886ad:;
  /* 114886ad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_114886b4:;
  /* 114886b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114886b7 mov esp, ebp */
  ESP = (EBP);
  /* 114886b9 pop ebp */
  EBP = (pop32());
  /* 114886ba ret  */
  ESPCHK(0x11488670u, _esp0);
  ESP += 4; return;
}

/* FUN_100086c0 @ 0x114886c0 (134 bytes, 50 insns) */
void f_114886c0(void) {
  FTRACE(0x114886c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114886c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114886c1 mov ebp, esp */
  EBP = (ESP);
  /* 114886c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114886c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114886c8 jne 0x114886ce */
  if (!C.zf) goto L_114886ce;
  /* 114886ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114886cc jmp 0x11488742 */
  goto L_11488742;
L_114886ce:;
  /* 114886ce push 1 */
  push32((uint32_t)(0x1u));
  /* 114886d0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114886d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114886d5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114886d8 push eax */
  push32((uint32_t)(EAX));
  /* 114886d9 call 0x11488670 */
  push32(0x114886deu); f_11488670();
  /* 114886de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114886e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114886e3 jne 0x114886e9 */
  if (!C.zf) goto L_114886e9;
  /* 114886e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114886e7 jmp 0x11488742 */
  goto L_11488742;
L_114886e9:;
  /* 114886e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114886ec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114886ef push ecx */
  push32((uint32_t)(ECX));
  /* 114886f0 call 0x1148d2d0 */
  push32(0x114886f5u); f_1148d2d0();
  /* 114886f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114886f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114886fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114886ff je 0x11488716 */
  if (C.zf) goto L_11488716;
  /* 11488701 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488704 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488707 push edx */
  push32((uint32_t)(EDX));
  /* 11488708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148870b push eax */
  push32((uint32_t)(EAX));
  /* 1148870c call 0x1148d330 */
  push32(0x11488711u); f_1148d330();
  /* 11488711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488714 jmp 0x11488742 */
  goto L_11488742;
L_11488716:;
  /* 11488716 mov ecx, dword ptr [0x114b64f8] */
  ECX = (r32((uint32_t)(0x114b64f8)));
  /* 1148871c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11488722 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488724 je 0x1148872d */
  if (C.zf) goto L_1148872d;
  /* 11488726 mov eax, 1 */
  EAX = (0x1u);
  /* 1148872b jmp 0x11488742 */
  goto L_11488742;
L_1148872d:;
  /* 1148872d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488730 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488733 push edx */
  push32((uint32_t)(EDX));
  /* 11488734 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488736 mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 1148873b push eax */
  push32((uint32_t)(EAX));
  /* 1148873c call dword ptr [0x114b93cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93cc))), 0x11488742u);
L_11488742:;
  /* 11488742 mov esp, ebp */
  ESP = (EBP);
  /* 11488744 pop ebp */
  EBP = (pop32());
  /* 11488745 ret  */
  ESPCHK(0x114886c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x11488750 (227 bytes, 80 insns) */
void f_11488750(void) {
  FTRACE(0x11488750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488750 push ebp */
  push32((uint32_t)(EBP));
  /* 11488751 mov ebp, esp */
  EBP = (ESP);
  /* 11488753 push ecx */
  push32((uint32_t)(ECX));
  /* 11488754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488757 push eax */
  push32((uint32_t)(EAX));
  /* 11488758 call 0x114886c0 */
  push32(0x1148875du); f_114886c0();
  /* 1148875d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488762 jne 0x1148876b */
  if (!C.zf) goto L_1148876b;
  /* 11488764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488766 jmp 0x1148882f */
  goto L_1148882f;
L_1148876b:;
  /* 1148876b push 9 */
  push32((uint32_t)(0x9u));
  /* 1148876d call 0x1148ca30 */
  push32(0x11488772u); f_1148ca30();
  /* 11488772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488778 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148877b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148877e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488781 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488784 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488789 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148878c je 0x114887b0 */
  if (C.zf) goto L_114887b0;
  /* 1148878e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488791 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488795 je 0x114887b0 */
  if (C.zf) goto L_114887b0;
  /* 11488797 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148879a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1148879d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114887a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114887a5 je 0x114887b0 */
  if (C.zf) goto L_114887b0;
  /* 114887a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114887aa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114887ae jne 0x11488823 */
  if (!C.zf) goto L_11488823;
L_114887b0:;
  /* 114887b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114887b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114887b5 push edx */
  push32((uint32_t)(EDX));
  /* 114887b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114887b9 push eax */
  push32((uint32_t)(EAX));
  /* 114887ba call 0x11488670 */
  push32(0x114887bfu); f_11488670();
  /* 114887bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114887c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114887c4 je 0x11488823 */
  if (C.zf) goto L_11488823;
  /* 114887c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114887c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 114887cc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114887cf jne 0x11488823 */
  if (!C.zf) goto L_11488823;
  /* 114887d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114887d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114887d7 cmp ecx, dword ptr [0x114b3ac0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114b3ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114887dd jg 0x11488823 */
  if ((!C.zf&&C.sf==C.of)) goto L_11488823;
  /* 114887df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114887e3 je 0x114887f0 */
  if (C.zf) goto L_114887f0;
  /* 114887e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114887e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114887eb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 114887ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_114887f0:;
  /* 114887f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114887f4 je 0x11488801 */
  if (C.zf) goto L_11488801;
  /* 114887f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114887f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114887fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114887ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11488801:;
  /* 11488801 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488805 je 0x11488812 */
  if (C.zf) goto L_11488812;
  /* 11488807 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148880a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148880d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11488810 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11488812:;
  /* 11488812 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488814 call 0x1148cad0 */
  push32(0x11488819u); f_1148cad0();
  /* 11488819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148881c mov eax, 1 */
  EAX = (0x1u);
  /* 11488821 jmp 0x1148882f */
  goto L_1148882f;
L_11488823:;
  /* 11488823 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488825 call 0x1148cad0 */
  push32(0x1148882au); f_1148cad0();
  /* 1148882a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148882d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148882f:;
  /* 1148882f mov esp, ebp */
  ESP = (EBP);
  /* 11488831 pop ebp */
  EBP = (pop32());
  /* 11488832 ret  */
  ESPCHK(0x11488750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008840 @ 0x11488840 (28 bytes, 11 insns) */
void f_11488840(void) {
  FTRACE(0x11488840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488840 push ebp */
  push32((uint32_t)(EBP));
  /* 11488841 mov ebp, esp */
  EBP = (ESP);
  /* 11488843 push ecx */
  push32((uint32_t)(ECX));
  /* 11488844 mov eax, dword ptr [0x114b7eb0] */
  EAX = (r32((uint32_t)(0x114b7eb0)));
  /* 11488849 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148884c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148884f mov dword ptr [0x114b7eb0], ecx */
  w32((uint32_t)(0x114b7eb0), (ECX));
  /* 11488855 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488858 mov esp, ebp */
  ESP = (EBP);
  /* 1148885a pop ebp */
  EBP = (pop32());
  /* 1148885b ret  */
  ESPCHK(0x11488840u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x11488860 (362 bytes, 116 insns) */
void f_11488860(void) {
  FTRACE(0x11488860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488860 push ebp */
  push32((uint32_t)(EBP));
  /* 11488861 mov ebp, esp */
  EBP = (ESP);
  /* 11488863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488866 push ebx */
  push32((uint32_t)(EBX));
  /* 11488867 push esi */
  push32((uint32_t)(ESI));
  /* 11488868 push edi */
  push32((uint32_t)(EDI));
  /* 11488869 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148886d jne 0x1148889a */
  if (!C.zf) goto L_1148889a;
L_1148886f:;
  /* 1148886f push 0x114b0d14 */
  push32((uint32_t)(0x114b0d14u));
  /* 11488874 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11488879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148887b push 0 */
  push32((uint32_t)(0x0u));
  /* 1148887d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148887f push 0 */
  push32((uint32_t)(0x0u));
  /* 11488881 call 0x11484860 */
  push32(0x11488886u); f_11484860();
  /* 11488886 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488889 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148888c jne 0x1148888f */
  if (!C.zf) goto L_1148888f;
  /* 1148888e int3  */
  x86_unimpl("int3 @ 0x1148888e");
L_1148888f:;
  /* 1148888f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488893 jne 0x1148886f */
  if (!C.zf) goto L_1148886f;
  /* 11488895 jmp 0x114889c3 */
  goto L_114889c3;
L_1148889a:;
  /* 1148889a push 9 */
  push32((uint32_t)(0x9u));
  /* 1148889c call 0x1148ca30 */
  push32(0x114888a1u); f_1148ca30();
  /* 114888a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114888a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114888a7 mov edx, dword ptr [0x114b6544] */
  EDX = (r32((uint32_t)(0x114b6544)));
  /* 114888ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 114888af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114888b6 jmp 0x114888c1 */
  goto L_114888c1;
L_114888b8:;
  /* 114888b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114888bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114888be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114888c1:;
  /* 114888c1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114888c5 jge 0x114888e5 */
  if ((C.sf==C.of)) goto L_114888e5;
  /* 114888c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114888ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114888cd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 114888d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114888d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114888db mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 114888e3 jmp 0x114888b8 */
  goto L_114888b8;
L_114888e5:;
  /* 114888e5 mov edx, dword ptr [0x114b6544] */
  EDX = (r32((uint32_t)(0x114b6544)));
  /* 114888eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114888ee jmp 0x114888f8 */
  goto L_114888f8;
L_114888f0:;
  /* 114888f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114888f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114888f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_114888f8:;
  /* 114888f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114888fc je 0x114889a1 */
  if (C.zf) goto L_114889a1;
  /* 11488902 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488905 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488908 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148890d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148890f jl 0x11488977 */
  if ((C.sf!=C.of)) goto L_11488977;
  /* 11488911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488914 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11488917 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148891d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488920 jge 0x11488977 */
  if ((C.sf==C.of)) goto L_11488977;
  /* 11488922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488925 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11488928 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148892e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488931 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11488935 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488938 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148893b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1148893e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488944 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488947 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1148894b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148894e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488951 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488956 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488959 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1148895d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488960 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488963 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488966 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11488969 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148896e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488971 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11488975 jmp 0x1148899c */
  goto L_1148899c;
L_11488977:;
  /* 11488977 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148897a push edx */
  push32((uint32_t)(EDX));
  /* 1148897b push 0x114b0cf0 */
  push32((uint32_t)(0x114b0cf0u));
  /* 11488980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488982 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488984 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488986 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488988 call 0x11484860 */
  push32(0x1148898du); f_11484860();
  /* 1148898d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488990 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488993 jne 0x11488996 */
  if (!C.zf) goto L_11488996;
  /* 11488995 int3  */
  x86_unimpl("int3 @ 0x11488995");
L_11488996:;
  /* 11488996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148899a jne 0x11488977 */
  if (!C.zf) goto L_11488977;
L_1148899c:;
  /* 1148899c jmp 0x114888f0 */
  goto L_114888f0;
L_114889a1:;
  /* 114889a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114889a4 mov edx, dword ptr [0x114b654c] */
  EDX = (r32((uint32_t)(0x114b654c)));
  /* 114889aa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 114889ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114889b0 mov ecx, dword ptr [0x114b6540] */
  ECX = (r32((uint32_t)(0x114b6540)));
  /* 114889b6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 114889b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 114889bb call 0x1148cad0 */
  push32(0x114889c0u); f_1148cad0();
  /* 114889c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114889c3:;
  /* 114889c3 pop edi */
  EDI = (pop32());
  /* 114889c4 pop esi */
  ESI = (pop32());
  /* 114889c5 pop ebx */
  EBX = (pop32());
  /* 114889c6 mov esp, ebp */
  ESP = (EBP);
  /* 114889c8 pop ebp */
  EBP = (pop32());
  /* 114889c9 ret  */
  ESPCHK(0x11488860u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x114889d0 (291 bytes, 95 insns) */
void f_114889d0(void) {
  FTRACE(0x114889d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114889d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114889d1 mov ebp, esp */
  EBP = (ESP);
  /* 114889d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114889d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114889d7 push esi */
  push32((uint32_t)(ESI));
  /* 114889d8 push edi */
  push32((uint32_t)(EDI));
  /* 114889d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 114889e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114889e4 je 0x114889f2 */
  if (C.zf) goto L_114889f2;
  /* 114889e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114889ea je 0x114889f2 */
  if (C.zf) goto L_114889f2;
  /* 114889ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114889f0 jne 0x11488a20 */
  if (!C.zf) goto L_11488a20;
L_114889f2:;
  /* 114889f2 push 0x114b0d3c */
  push32((uint32_t)(0x114b0d3cu));
  /* 114889f7 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 114889fc push 0 */
  push32((uint32_t)(0x0u));
  /* 114889fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11488a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488a04 call 0x11484860 */
  push32(0x11488a09u); f_11484860();
  /* 11488a09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488a0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488a0f jne 0x11488a12 */
  if (!C.zf) goto L_11488a12;
  /* 11488a11 int3  */
  x86_unimpl("int3 @ 0x11488a11");
L_11488a12:;
  /* 11488a12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488a16 jne 0x114889f2 */
  if (!C.zf) goto L_114889f2;
  /* 11488a18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11488a1b jmp 0x11488aec */
  goto L_11488aec;
L_11488a20:;
  /* 11488a20 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11488a27 jmp 0x11488a32 */
  goto L_11488a32;
L_11488a29:;
  /* 11488a29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488a2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11488a32:;
  /* 11488a32 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488a36 jge 0x11488abc */
  if ((C.sf==C.of)) goto L_11488abc;
  /* 11488a3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11488a42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11488a48 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11488a4c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488a50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488a56 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11488a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11488a60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a63 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11488a66 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11488a6a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488a74 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11488a78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488a7e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488a83 jne 0x11488a92 */
  if (!C.zf) goto L_11488a92;
  /* 11488a85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488a88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488a8b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488a90 je 0x11488ab7 */
  if (C.zf) goto L_11488ab7;
L_11488a92:;
  /* 11488a92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488a96 je 0x11488ab7 */
  if (C.zf) goto L_11488ab7;
  /* 11488a98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488a9c jne 0x11488ab0 */
  if (!C.zf) goto L_11488ab0;
  /* 11488a9e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488aa2 jne 0x11488ab7 */
  if (!C.zf) goto L_11488ab7;
  /* 11488aa4 mov eax, dword ptr [0x114b3abc] */
  EAX = (r32((uint32_t)(0x114b3abc)));
  /* 11488aa9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11488aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488aae je 0x11488ab7 */
  if (C.zf) goto L_11488ab7;
L_11488ab0:;
  /* 11488ab0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11488ab7:;
  /* 11488ab7 jmp 0x11488a29 */
  goto L_11488a29;
L_11488abc:;
  /* 11488abc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11488abf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11488ac2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11488ac5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488ac8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488acb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11488ace mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11488ad1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11488ad4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11488ad7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488add mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11488ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488ae3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11488ae9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11488aec:;
  /* 11488aec pop edi */
  EDI = (pop32());
  /* 11488aed pop esi */
  ESI = (pop32());
  /* 11488aee pop ebx */
  EBX = (pop32());
  /* 11488aef mov esp, ebp */
  ESP = (EBP);
  /* 11488af1 pop ebp */
  EBP = (pop32());
  /* 11488af2 ret  */
  ESPCHK(0x114889d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b00 @ 0x11488b00 (697 bytes, 253 insns) */
void f_11488b00(void) {
  FTRACE(0x11488b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11488b01 mov ebp, esp */
  EBP = (ESP);
  /* 11488b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488b06 push ebx */
  push32((uint32_t)(EBX));
  /* 11488b07 push esi */
  push32((uint32_t)(ESI));
  /* 11488b08 push edi */
  push32((uint32_t)(EDI));
  /* 11488b09 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11488b10 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488b12 call 0x1148ca30 */
  push32(0x11488b17u); f_1148ca30();
  /* 11488b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11488b1a:;
  /* 11488b1a push 0x114b0e34 */
  push32((uint32_t)(0x114b0e34u));
  /* 11488b1f push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11488b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11488b2c call 0x11484860 */
  push32(0x11488b31u); f_11484860();
  /* 11488b31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488b37 jne 0x11488b3a */
  if (!C.zf) goto L_11488b3a;
  /* 11488b39 int3  */
  x86_unimpl("int3 @ 0x11488b39");
L_11488b3a:;
  /* 11488b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488b3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488b3e jne 0x11488b1a */
  if (!C.zf) goto L_11488b1a;
  /* 11488b40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488b44 je 0x11488b4e */
  if (C.zf) goto L_11488b4e;
  /* 11488b46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488b49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11488b4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11488b4e:;
  /* 11488b4e mov eax, dword ptr [0x114b6544] */
  EAX = (r32((uint32_t)(0x114b6544)));
  /* 11488b53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11488b56 jmp 0x11488b60 */
  goto L_11488b60;
L_11488b58:;
  /* 11488b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488b5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11488b5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11488b60:;
  /* 11488b60 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488b64 je 0x11488d82 */
  if (C.zf) goto L_11488d82;
  /* 11488b6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488b6d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488b70 je 0x11488d82 */
  if (C.zf) goto L_11488d82;
  /* 11488b76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488b79 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11488b7c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488b82 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488b85 je 0x11488bb4 */
  if (C.zf) goto L_11488bb4;
  /* 11488b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488b8a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11488b8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11488b93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488b95 je 0x11488bb4 */
  if (C.zf) goto L_11488bb4;
  /* 11488b97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488b9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488b9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488ba2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488ba5 jne 0x11488bb9 */
  if (!C.zf) goto L_11488bb9;
  /* 11488ba7 mov ecx, dword ptr [0x114b3abc] */
  ECX = (r32((uint32_t)(0x114b3abc)));
  /* 11488bad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11488bb0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488bb2 jne 0x11488bb9 */
  if (!C.zf) goto L_11488bb9;
L_11488bb4:;
  /* 11488bb4 jmp 0x11488d7d */
  goto L_11488d7d;
L_11488bb9:;
  /* 11488bb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488bbc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488bc0 je 0x11488c32 */
  if (C.zf) goto L_11488c32;
  /* 11488bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488bc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11488bc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488bc9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11488bcc push ecx */
  push32((uint32_t)(ECX));
  /* 11488bcd call 0x11488670 */
  push32(0x11488bd2u); f_11488670();
  /* 11488bd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488bd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488bd7 jne 0x11488c03 */
  if (!C.zf) goto L_11488c03;
L_11488bd9:;
  /* 11488bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488bdc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11488bdf push eax */
  push32((uint32_t)(EAX));
  /* 11488be0 push 0x114b0e20 */
  push32((uint32_t)(0x114b0e20u));
  /* 11488be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488beb push 0 */
  push32((uint32_t)(0x0u));
  /* 11488bed call 0x11484860 */
  push32(0x11488bf2u); f_11484860();
  /* 11488bf2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488bf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488bf8 jne 0x11488bfb */
  if (!C.zf) goto L_11488bfb;
  /* 11488bfa int3  */
  x86_unimpl("int3 @ 0x11488bfa");
L_11488bfb:;
  /* 11488bfb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11488bfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488bff jne 0x11488bd9 */
  if (!C.zf) goto L_11488bd9;
  /* 11488c01 jmp 0x11488c32 */
  goto L_11488c32;
L_11488c03:;
  /* 11488c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c06 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11488c09 push eax */
  push32((uint32_t)(EAX));
  /* 11488c0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c0d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11488c10 push edx */
  push32((uint32_t)(EDX));
  /* 11488c11 push 0x114b0e14 */
  push32((uint32_t)(0x114b0e14u));
  /* 11488c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c1e call 0x11484860 */
  push32(0x11488c23u); f_11484860();
  /* 11488c23 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488c26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488c29 jne 0x11488c2c */
  if (!C.zf) goto L_11488c2c;
  /* 11488c2b int3  */
  x86_unimpl("int3 @ 0x11488c2b");
L_11488c2c:;
  /* 11488c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488c30 jne 0x11488c03 */
  if (!C.zf) goto L_11488c03;
L_11488c32:;
  /* 11488c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c35 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11488c38 push edx */
  push32((uint32_t)(EDX));
  /* 11488c39 push 0x114b0e0c */
  push32((uint32_t)(0x114b0e0cu));
  /* 11488c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c46 call 0x11484860 */
  push32(0x11488c4bu); f_11484860();
  /* 11488c4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488c4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488c51 jne 0x11488c54 */
  if (!C.zf) goto L_11488c54;
  /* 11488c53 int3  */
  x86_unimpl("int3 @ 0x11488c53");
L_11488c54:;
  /* 11488c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488c58 jne 0x11488c32 */
  if (!C.zf) goto L_11488c32;
  /* 11488c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c5d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11488c60 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488c66 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488c69 jne 0x11488cdc */
  if (!C.zf) goto L_11488cdc;
L_11488c6b:;
  /* 11488c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c6e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11488c71 push ecx */
  push32((uint32_t)(ECX));
  /* 11488c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488c78 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11488c7b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488c80 push eax */
  push32((uint32_t)(EAX));
  /* 11488c81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488c84 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488c87 push ecx */
  push32((uint32_t)(ECX));
  /* 11488c88 push 0x114b0dd8 */
  push32((uint32_t)(0x114b0dd8u));
  /* 11488c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488c95 call 0x11484860 */
  push32(0x11488c9au); f_11484860();
  /* 11488c9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488c9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488ca0 jne 0x11488ca3 */
  if (!C.zf) goto L_11488ca3;
  /* 11488ca2 int3  */
  x86_unimpl("int3 @ 0x11488ca2");
L_11488ca3:;
  /* 11488ca3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488ca5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488ca7 jne 0x11488c6b */
  if (!C.zf) goto L_11488c6b;
  /* 11488ca9 cmp dword ptr [0x114b7eb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b7eb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488cb0 je 0x11488ccb */
  if (C.zf) goto L_11488ccb;
  /* 11488cb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488cb5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11488cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11488cb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488cbc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488cbf push edx */
  push32((uint32_t)(EDX));
  /* 11488cc0 call dword ptr [0x114b7eb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b7eb0))), 0x11488cc6u);
  /* 11488cc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488cc9 jmp 0x11488cd7 */
  goto L_11488cd7;
L_11488ccb:;
  /* 11488ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488cce push eax */
  push32((uint32_t)(EAX));
  /* 11488ccf call 0x11488dc0 */
  push32(0x11488cd4u); f_11488dc0();
  /* 11488cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11488cd7:;
  /* 11488cd7 jmp 0x11488d7d */
  goto L_11488d7d;
L_11488cdc:;
  /* 11488cdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488cdf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488ce3 jne 0x11488d22 */
  if (!C.zf) goto L_11488d22;
L_11488ce5:;
  /* 11488ce5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488ce8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11488ceb push eax */
  push32((uint32_t)(EAX));
  /* 11488cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488cef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11488cf3 push 0x114b0db0 */
  push32((uint32_t)(0x114b0db0u));
  /* 11488cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11488cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11488cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d00 call 0x11484860 */
  push32(0x11488d05u); f_11484860();
  /* 11488d05 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488d08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488d0b jne 0x11488d0e */
  if (!C.zf) goto L_11488d0e;
  /* 11488d0d int3  */
  x86_unimpl("int3 @ 0x11488d0d");
L_11488d0e:;
  /* 11488d0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488d10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488d12 jne 0x11488ce5 */
  if (!C.zf) goto L_11488ce5;
  /* 11488d14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488d17 push eax */
  push32((uint32_t)(EAX));
  /* 11488d18 call 0x11488dc0 */
  push32(0x11488d1du); f_11488dc0();
  /* 11488d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488d20 jmp 0x11488d7d */
  goto L_11488d7d;
L_11488d22:;
  /* 11488d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488d25 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11488d28 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488d2e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488d31 jne 0x11488d7d */
  if (!C.zf) goto L_11488d7d;
L_11488d33:;
  /* 11488d33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488d36 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11488d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11488d3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488d3d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11488d40 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11488d43 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11488d48 push eax */
  push32((uint32_t)(EAX));
  /* 11488d49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488d4c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488d4f push ecx */
  push32((uint32_t)(ECX));
  /* 11488d50 push 0x114b0d7c */
  push32((uint32_t)(0x114b0d7cu));
  /* 11488d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d5d call 0x11484860 */
  push32(0x11488d62u); f_11484860();
  /* 11488d62 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488d65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488d68 jne 0x11488d6b */
  if (!C.zf) goto L_11488d6b;
  /* 11488d6a int3  */
  x86_unimpl("int3 @ 0x11488d6a");
L_11488d6b:;
  /* 11488d6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488d6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488d6f jne 0x11488d33 */
  if (!C.zf) goto L_11488d33;
  /* 11488d71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488d74 push eax */
  push32((uint32_t)(EAX));
  /* 11488d75 call 0x11488dc0 */
  push32(0x11488d7au); f_11488dc0();
  /* 11488d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11488d7d:;
  /* 11488d7d jmp 0x11488b58 */
  goto L_11488b58;
L_11488d82:;
  /* 11488d82 push 9 */
  push32((uint32_t)(0x9u));
  /* 11488d84 call 0x1148cad0 */
  push32(0x11488d89u); f_1148cad0();
  /* 11488d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11488d8c:;
  /* 11488d8c push 0x114b0d64 */
  push32((uint32_t)(0x114b0d64u));
  /* 11488d91 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11488d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11488d9e call 0x11484860 */
  push32(0x11488da3u); f_11484860();
  /* 11488da3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488da6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488da9 jne 0x11488dac */
  if (!C.zf) goto L_11488dac;
  /* 11488dab int3  */
  x86_unimpl("int3 @ 0x11488dab");
L_11488dac:;
  /* 11488dac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11488dae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488db0 jne 0x11488d8c */
  if (!C.zf) goto L_11488d8c;
  /* 11488db2 pop edi */
  EDI = (pop32());
  /* 11488db3 pop esi */
  ESI = (pop32());
  /* 11488db4 pop ebx */
  EBX = (pop32());
  /* 11488db5 mov esp, ebp */
  ESP = (EBP);
  /* 11488db7 pop ebp */
  EBP = (pop32());
  /* 11488db8 ret  */
  ESPCHK(0x11488b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x11488dc0 (276 bytes, 89 insns) */
void f_11488dc0(void) {
  FTRACE(0x11488dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11488dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11488dc3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11488dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11488dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11488dc9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11488dd0 jmp 0x11488ddb */
  goto L_11488ddb;
L_11488dd2:;
  /* 11488dd2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11488dd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488dd8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11488ddb:;
  /* 11488ddb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488dde cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488de2 jge 0x11488def */
  if ((C.sf==C.of)) goto L_11488def;
  /* 11488de4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488de7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11488dea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11488ded jmp 0x11488df6 */
  goto L_11488df6;
L_11488def:;
  /* 11488def mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11488df6:;
  /* 11488df6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11488df9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488dfc jge 0x11488e9c */
  if ((C.sf==C.of)) goto L_11488e9c;
  /* 11488e02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488e05 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488e08 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11488e0b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11488e0e cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488e15 jle 0x11488e33 */
  if ((C.zf||C.sf!=C.of)) goto L_11488e33;
  /* 11488e17 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11488e1c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11488e1f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11488e25 push ecx */
  push32((uint32_t)(ECX));
  /* 11488e26 call 0x1148ae80 */
  push32(0x11488e2bu); f_1148ae80();
  /* 11488e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488e2e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11488e31 jmp 0x11488e50 */
  goto L_11488e50;
L_11488e33:;
  /* 11488e33 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11488e36 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488e3c mov eax, dword ptr [0x114b3b8c] */
  EAX = (r32((uint32_t)(0x114b3b8c)));
  /* 11488e41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11488e43 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11488e47 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11488e4d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11488e50:;
  /* 11488e50 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488e54 je 0x11488e64 */
  if (C.zf) goto L_11488e64;
  /* 11488e56 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11488e59 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488e5f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11488e62 jmp 0x11488e6b */
  goto L_11488e6b;
L_11488e64:;
  /* 11488e64 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11488e6b:;
  /* 11488e6b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11488e6e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11488e71 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11488e75 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11488e78 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11488e7e push edx */
  push32((uint32_t)(EDX));
  /* 11488e7f push 0x114b0e58 */
  push32((uint32_t)(0x114b0e58u));
  /* 11488e84 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11488e87 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11488e8a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11488e8e push ecx */
  push32((uint32_t)(ECX));
  /* 11488e8f call 0x114843d0 */
  push32(0x11488e94u); f_114843d0();
  /* 11488e94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488e97 jmp 0x11488dd2 */
  goto L_11488dd2;
L_11488e9c:;
  /* 11488e9c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11488e9f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11488ea4:;
  /* 11488ea4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11488ea7 push eax */
  push32((uint32_t)(EAX));
  /* 11488ea8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11488eab push ecx */
  push32((uint32_t)(ECX));
  /* 11488eac push 0x114b0e48 */
  push32((uint32_t)(0x114b0e48u));
  /* 11488eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488eb9 call 0x11484860 */
  push32(0x11488ebeu); f_11484860();
  /* 11488ebe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488ec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488ec4 jne 0x11488ec7 */
  if (!C.zf) goto L_11488ec7;
  /* 11488ec6 int3  */
  x86_unimpl("int3 @ 0x11488ec6");
L_11488ec7:;
  /* 11488ec7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488ec9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488ecb jne 0x11488ea4 */
  if (!C.zf) goto L_11488ea4;
  /* 11488ecd pop edi */
  EDI = (pop32());
  /* 11488ece pop esi */
  ESI = (pop32());
  /* 11488ecf pop ebx */
  EBX = (pop32());
  /* 11488ed0 mov esp, ebp */
  ESP = (EBP);
  /* 11488ed2 pop ebp */
  EBP = (pop32());
  /* 11488ed3 ret  */
  ESPCHK(0x11488dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee0 @ 0x11488ee0 (116 bytes, 46 insns) */
void f_11488ee0(void) {
  FTRACE(0x11488ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11488ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11488ee3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11488ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 11488ee7 push esi */
  push32((uint32_t)(ESI));
  /* 11488ee8 push edi */
  push32((uint32_t)(EDI));
  /* 11488ee9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11488eec push eax */
  push32((uint32_t)(EAX));
  /* 11488eed call 0x11488860 */
  push32(0x11488ef2u); f_11488860();
  /* 11488ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488ef5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488ef9 jne 0x11488f14 */
  if (!C.zf) goto L_11488f14;
  /* 11488efb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488eff jne 0x11488f14 */
  if (!C.zf) goto L_11488f14;
  /* 11488f01 mov ecx, dword ptr [0x114b3abc] */
  ECX = (r32((uint32_t)(0x114b3abc)));
  /* 11488f07 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11488f0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11488f0c je 0x11488f4b */
  if (C.zf) goto L_11488f4b;
  /* 11488f0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488f12 je 0x11488f4b */
  if (C.zf) goto L_11488f4b;
L_11488f14:;
  /* 11488f14 push 0x114b0e60 */
  push32((uint32_t)(0x114b0e60u));
  /* 11488f19 push 0x114b082c */
  push32((uint32_t)(0x114b082cu));
  /* 11488f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11488f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488f26 call 0x11484860 */
  push32(0x11488f2bu); f_11484860();
  /* 11488f2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488f2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488f31 jne 0x11488f34 */
  if (!C.zf) goto L_11488f34;
  /* 11488f33 int3  */
  x86_unimpl("int3 @ 0x11488f33");
L_11488f34:;
  /* 11488f34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11488f36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11488f38 jne 0x11488f14 */
  if (!C.zf) goto L_11488f14;
  /* 11488f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11488f3c call 0x11488b00 */
  push32(0x11488f41u); f_11488b00();
  /* 11488f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488f44 mov eax, 1 */
  EAX = (0x1u);
  /* 11488f49 jmp 0x11488f4d */
  goto L_11488f4d;
L_11488f4b:;
  /* 11488f4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11488f4d:;
  /* 11488f4d pop edi */
  EDI = (pop32());
  /* 11488f4e pop esi */
  ESI = (pop32());
  /* 11488f4f pop ebx */
  EBX = (pop32());
  /* 11488f50 mov esp, ebp */
  ESP = (EBP);
  /* 11488f52 pop ebp */
  EBP = (pop32());
  /* 11488f53 ret  */
  ESPCHK(0x11488ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f60 @ 0x11488f60 (197 bytes, 79 insns) */
void f_11488f60(void) {
  FTRACE(0x11488f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11488f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11488f61 mov ebp, esp */
  EBP = (ESP);
  /* 11488f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11488f64 push ebx */
  push32((uint32_t)(EBX));
  /* 11488f65 push esi */
  push32((uint32_t)(ESI));
  /* 11488f66 push edi */
  push32((uint32_t)(EDI));
  /* 11488f67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488f6b jne 0x11488f72 */
  if (!C.zf) goto L_11488f72;
  /* 11488f6d jmp 0x1148901e */
  goto L_1148901e;
L_11488f72:;
  /* 11488f72 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11488f79 jmp 0x11488f84 */
  goto L_11488f84;
L_11488f7b:;
  /* 11488f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488f7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11488f81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11488f84:;
  /* 11488f84 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488f88 jge 0x11488fce */
  if ((C.sf==C.of)) goto L_11488fce;
L_11488f8a:;
  /* 11488f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488f8d mov edx, dword ptr [ecx*4 + 0x114b3acc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x114b3acc)));
  /* 11488f94 push edx */
  push32((uint32_t)(EDX));
  /* 11488f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488f98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488f9b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11488f9f push edx */
  push32((uint32_t)(EDX));
  /* 11488fa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11488fa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488fa6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11488faa push edx */
  push32((uint32_t)(EDX));
  /* 11488fab push 0x114b0ebc */
  push32((uint32_t)(0x114b0ebcu));
  /* 11488fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fb8 call 0x11484860 */
  push32(0x11488fbdu); f_11484860();
  /* 11488fbd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488fc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488fc3 jne 0x11488fc6 */
  if (!C.zf) goto L_11488fc6;
  /* 11488fc5 int3  */
  x86_unimpl("int3 @ 0x11488fc5");
L_11488fc6:;
  /* 11488fc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488fc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488fca jne 0x11488f8a */
  if (!C.zf) goto L_11488f8a;
  /* 11488fcc jmp 0x11488f7b */
  goto L_11488f7b;
L_11488fce:;
  /* 11488fce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488fd1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11488fd4 push edx */
  push32((uint32_t)(EDX));
  /* 11488fd5 push 0x114b0e98 */
  push32((uint32_t)(0x114b0e98u));
  /* 11488fda push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fde push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11488fe2 call 0x11484860 */
  push32(0x11488fe7u); f_11484860();
  /* 11488fe7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11488fea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11488fed jne 0x11488ff0 */
  if (!C.zf) goto L_11488ff0;
  /* 11488fef int3  */
  x86_unimpl("int3 @ 0x11488fef");
L_11488ff0:;
  /* 11488ff0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11488ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11488ff4 jne 0x11488fce */
  if (!C.zf) goto L_11488fce;
L_11488ff6:;
  /* 11488ff6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11488ff9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11488ffc push edx */
  push32((uint32_t)(EDX));
  /* 11488ffd push 0x114b0e78 */
  push32((uint32_t)(0x114b0e78u));
  /* 11489002 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489006 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148900a call 0x11484860 */
  push32(0x1148900fu); f_11484860();
  /* 1148900f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489012 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489015 jne 0x11489018 */
  if (!C.zf) goto L_11489018;
  /* 11489017 int3  */
  x86_unimpl("int3 @ 0x11489017");
L_11489018:;
  /* 11489018 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148901a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148901c jne 0x11488ff6 */
  if (!C.zf) goto L_11488ff6;
L_1148901e:;
  /* 1148901e pop edi */
  EDI = (pop32());
  /* 1148901f pop esi */
  ESI = (pop32());
  /* 11489020 pop ebx */
  EBX = (pop32());
  /* 11489021 mov esp, ebp */
  ESP = (EBP);
  /* 11489023 pop ebp */
  EBP = (pop32());
  /* 11489024 ret  */
  ESPCHK(0x11488f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009030 @ 0x11489030 (329 bytes, 102 insns) */
void f_11489030(void) {
  FTRACE(0x11489030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489030 push ebp */
  push32((uint32_t)(EBP));
  /* 11489031 mov ebp, esp */
  EBP = (ESP);
  /* 11489033 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489036 cmp dword ptr [0x114b8010], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b8010))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148903d jne 0x11489044 */
  if (!C.zf) goto L_11489044;
  /* 1148903f call 0x1148f6c0 */
  push32(0x11489044u); f_1148f6c0();
L_11489044:;
  /* 11489044 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148904b mov eax, dword ptr [0x114b64e0] */
  EAX = (r32((uint32_t)(0x114b64e0)));
  /* 11489050 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11489053:;
  /* 11489053 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489056 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11489059 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148905b je 0x11489089 */
  if (C.zf) goto L_11489089;
  /* 1148905d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489060 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11489063 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489066 je 0x11489071 */
  if (C.zf) goto L_11489071;
  /* 11489068 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148906b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148906e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11489071:;
  /* 11489071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489074 push eax */
  push32((uint32_t)(EAX));
  /* 11489075 call 0x11489ef0 */
  push32(0x1148907au); f_11489ef0();
  /* 1148907a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148907d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489080 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11489084 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11489087 jmp 0x11489053 */
  goto L_11489053;
L_11489089:;
  /* 11489089 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1148908b push 0x114b0edc */
  push32((uint32_t)(0x114b0edcu));
  /* 11489090 push 2 */
  push32((uint32_t)(0x2u));
  /* 11489092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489095 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1148909c push ecx */
  push32((uint32_t)(ECX));
  /* 1148909d call 0x114870c0 */
  push32(0x114890a2u); f_114870c0();
  /* 114890a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114890a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114890a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114890ab mov dword ptr [0x114b6514], edx */
  w32((uint32_t)(0x114b6514), (EDX));
  /* 114890b1 cmp dword ptr [0x114b6514], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6514))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114890b8 jne 0x114890c4 */
  if (!C.zf) goto L_114890c4;
  /* 114890ba push 9 */
  push32((uint32_t)(0x9u));
  /* 114890bc call 0x11484710 */
  push32(0x114890c1u); f_11484710();
  /* 114890c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114890c4:;
  /* 114890c4 mov eax, dword ptr [0x114b64e0] */
  EAX = (r32((uint32_t)(0x114b64e0)));
  /* 114890c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114890cc jmp 0x114890d7 */
  goto L_114890d7;
L_114890ce:;
  /* 114890ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114890d1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114890d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114890d7:;
  /* 114890d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114890da movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114890dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114890df je 0x11489147 */
  if (C.zf) goto L_11489147;
  /* 114890e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114890e4 push ecx */
  push32((uint32_t)(ECX));
  /* 114890e5 call 0x11489ef0 */
  push32(0x114890eau); f_11489ef0();
  /* 114890ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114890ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114890f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 114890f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114890f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114890f9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114890fc je 0x11489145 */
  if (C.zf) goto L_11489145;
  /* 114890fe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11489100 push 0x114b0edc */
  push32((uint32_t)(0x114b0edcu));
  /* 11489105 push 2 */
  push32((uint32_t)(0x2u));
  /* 11489107 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148910a push ecx */
  push32((uint32_t)(ECX));
  /* 1148910b call 0x114870c0 */
  push32(0x11489110u); f_114870c0();
  /* 11489110 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489113 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489116 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11489118 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148911b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148911e jne 0x1148912a */
  if (!C.zf) goto L_1148912a;
  /* 11489120 push 9 */
  push32((uint32_t)(0x9u));
  /* 11489122 call 0x11484710 */
  push32(0x11489127u); f_11484710();
  /* 11489127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148912a:;
  /* 1148912a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148912d push ecx */
  push32((uint32_t)(ECX));
  /* 1148912e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489131 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11489133 push eax */
  push32((uint32_t)(EAX));
  /* 11489134 call 0x1148a070 */
  push32(0x11489139u); f_1148a070();
  /* 11489139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148913c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148913f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489142 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11489145:;
  /* 11489145 jmp 0x114890ce */
  goto L_114890ce;
L_11489147:;
  /* 11489147 push 2 */
  push32((uint32_t)(0x2u));
  /* 11489149 mov edx, dword ptr [0x114b64e0] */
  EDX = (r32((uint32_t)(0x114b64e0)));
  /* 1148914f push edx */
  push32((uint32_t)(EDX));
  /* 11489150 call 0x11487b50 */
  push32(0x11489155u); f_11487b50();
  /* 11489155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489158 mov dword ptr [0x114b64e0], 0 */
  w32((uint32_t)(0x114b64e0), (0x0u));
  /* 11489162 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489165 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148916b mov dword ptr [0x114b8000], 1 */
  w32((uint32_t)(0x114b8000), (0x1u));
  /* 11489175 mov esp, ebp */
  ESP = (EBP);
  /* 11489177 pop ebp */
  EBP = (pop32());
  /* 11489178 ret  */
  ESPCHK(0x11489030u, _esp0);
  ESP += 4; return;
}

/* FUN_10009180 @ 0x11489180 (216 bytes, 69 insns) */
void f_11489180(void) {
  FTRACE(0x11489180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489180 push ebp */
  push32((uint32_t)(EBP));
  /* 11489181 mov ebp, esp */
  EBP = (ESP);
  /* 11489183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489186 cmp dword ptr [0x114b8010], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b8010))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148918d jne 0x11489194 */
  if (!C.zf) goto L_11489194;
  /* 1148918f call 0x1148f6c0 */
  push32(0x11489194u); f_1148f6c0();
L_11489194:;
  /* 11489194 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11489199 push 0x114b6550 */
  push32((uint32_t)(0x114b6550u));
  /* 1148919e push 0 */
  push32((uint32_t)(0x0u));
  /* 114891a0 call dword ptr [0x114b9380] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9380))), 0x114891a6u);
  /* 114891a6 mov dword ptr [0x114b6524], 0x114b6550 */
  w32((uint32_t)(0x114b6524), (0x114b6550u));
  /* 114891b0 mov eax, dword ptr [0x114b8028] */
  EAX = (r32((uint32_t)(0x114b8028)));
  /* 114891b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114891b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114891ba jne 0x114891c7 */
  if (!C.zf) goto L_114891c7;
  /* 114891bc mov edx, dword ptr [0x114b6524] */
  EDX = (r32((uint32_t)(0x114b6524)));
  /* 114891c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 114891c5 jmp 0x114891cf */
  goto L_114891cf;
L_114891c7:;
  /* 114891c7 mov eax, dword ptr [0x114b8028] */
  EAX = (r32((uint32_t)(0x114b8028)));
  /* 114891cc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_114891cf:;
  /* 114891cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114891d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114891d5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 114891d8 push edx */
  push32((uint32_t)(EDX));
  /* 114891d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 114891dc push eax */
  push32((uint32_t)(EAX));
  /* 114891dd push 0 */
  push32((uint32_t)(0x0u));
  /* 114891df push 0 */
  push32((uint32_t)(0x0u));
  /* 114891e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114891e4 push ecx */
  push32((uint32_t)(ECX));
  /* 114891e5 call 0x11489260 */
  push32(0x114891eau); f_11489260();
  /* 114891ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114891ed push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114891f2 push 0x114b0ee8 */
  push32((uint32_t)(0x114b0ee8u));
  /* 114891f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114891f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114891fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114891ff lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11489202 push ecx */
  push32((uint32_t)(ECX));
  /* 11489203 call 0x114870c0 */
  push32(0x11489208u); f_114870c0();
  /* 11489208 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148920b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148920e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489212 jne 0x1148921e */
  if (!C.zf) goto L_1148921e;
  /* 11489214 push 8 */
  push32((uint32_t)(0x8u));
  /* 11489216 call 0x11484710 */
  push32(0x1148921bu); f_11484710();
  /* 1148921b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148921e:;
  /* 1148921e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11489221 push edx */
  push32((uint32_t)(EDX));
  /* 11489222 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11489225 push eax */
  push32((uint32_t)(EAX));
  /* 11489226 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489229 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148922c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1148922f push eax */
  push32((uint32_t)(EAX));
  /* 11489230 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489233 push ecx */
  push32((uint32_t)(ECX));
  /* 11489234 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11489237 push edx */
  push32((uint32_t)(EDX));
  /* 11489238 call 0x11489260 */
  push32(0x1148923du); f_11489260();
  /* 1148923d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489240 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489243 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489246 mov dword ptr [0x114b6508], eax */
  w32((uint32_t)(0x114b6508), (EAX));
  /* 1148924b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148924e mov dword ptr [0x114b650c], ecx */
  w32((uint32_t)(0x114b650c), (ECX));
  /* 11489254 mov esp, ebp */
  ESP = (EBP);
  /* 11489256 pop ebp */
  EBP = (pop32());
  /* 11489257 ret  */
  ESPCHK(0x11489180u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x11489260 (1060 bytes, 360 insns) */
void f_11489260(void) {
  FTRACE(0x11489260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489260 push ebp */
  push32((uint32_t)(EBP));
  /* 11489261 mov ebp, esp */
  EBP = (ESP);
  /* 11489263 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489266 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489269 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148926f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489272 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11489278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148927b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148927e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489282 je 0x11489295 */
  if (C.zf) goto L_11489295;
  /* 11489284 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489287 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148928a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148928c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148928f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489292 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11489295:;
  /* 11489295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489298 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148929b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148929e jne 0x1148936d */
  if (!C.zf) goto L_1148936d;
L_114892a4:;
  /* 114892a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114892a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114892aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114892ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114892b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114892b3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114892b6 je 0x11489332 */
  if (C.zf) goto L_11489332;
  /* 114892b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114892bb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114892be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114892c0 je 0x11489332 */
  if (C.zf) goto L_11489332;
  /* 114892c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114892c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114892c7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114892c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114892cb mov al, byte ptr [edx + 0x114b6a21] */
  AL = (r8((uint32_t)(EDX + 0x114b6a21)));
  /* 114892d1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 114892d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114892d6 je 0x11489307 */
  if (C.zf) goto L_11489307;
  /* 114892d8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114892db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114892dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114892e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114892e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114892e5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114892e9 je 0x11489307 */
  if (C.zf) goto L_11489307;
  /* 114892eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114892ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114892f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114892f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114892f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114892f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114892fb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114892fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489301 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489304 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11489307:;
  /* 11489307 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148930a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148930c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148930f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489312 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11489314 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489318 je 0x1148932d */
  if (C.zf) goto L_1148932d;
  /* 1148931a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148931d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489320 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489322 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489324 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148932a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1148932d:;
  /* 1148932d jmp 0x114892a4 */
  goto L_114892a4;
L_11489332:;
  /* 11489332 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489335 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11489337 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148933a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148933d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1148933f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489343 je 0x11489354 */
  if (C.zf) goto L_11489354;
  /* 11489345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489348 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1148934b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148934e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489351 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11489354:;
  /* 11489354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489357 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148935a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148935d jne 0x11489368 */
  if (!C.zf) goto L_11489368;
  /* 1148935f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489362 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489365 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11489368:;
  /* 11489368 jmp 0x1148943c */
  goto L_1148943c;
L_1148936d:;
  /* 1148936d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489370 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11489372 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489375 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489378 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1148937a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148937e je 0x11489393 */
  if (C.zf) goto L_11489393;
  /* 11489380 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489386 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489388 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1148938a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148938d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489390 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11489393:;
  /* 11489393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489396 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489398 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1148939b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148939e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114893a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114893a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114893a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 114893ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114893af mov dl, byte ptr [ecx + 0x114b6a21] */
  DL = (r8((uint32_t)(ECX + 0x114b6a21)));
  /* 114893b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 114893b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114893ba je 0x114893eb */
  if (C.zf) goto L_114893eb;
  /* 114893bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114893bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114893c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114893c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114893c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114893c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114893cd je 0x114893e2 */
  if (C.zf) goto L_114893e2;
  /* 114893cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114893d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114893d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 114893d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 114893d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114893dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114893df mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_114893e2:;
  /* 114893e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114893e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114893e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114893eb:;
  /* 114893eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114893ee and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114893f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114893f7 je 0x11489417 */
  if (C.zf) goto L_11489417;
  /* 114893f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114893fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11489401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11489403 je 0x11489417 */
  if (C.zf) goto L_11489417;
  /* 11489405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489408 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148940e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489411 jne 0x1148936d */
  if (!C.zf) goto L_1148936d;
L_11489417:;
  /* 11489417 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148941a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11489420 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11489422 jne 0x1148942f */
  if (!C.zf) goto L_1148942f;
  /* 11489424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489427 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148942a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148942d jmp 0x1148943c */
  goto L_1148943c;
L_1148942f:;
  /* 1148942f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489433 je 0x1148943c */
  if (C.zf) goto L_1148943c;
  /* 11489435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489438 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1148943c:;
  /* 1148943c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11489443:;
  /* 11489443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489446 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11489449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148944b je 0x1148946e */
  if (C.zf) goto L_1148946e;
L_1148944d:;
  /* 1148944d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489450 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11489453 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489456 je 0x11489463 */
  if (C.zf) goto L_11489463;
  /* 11489458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148945b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148945e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489461 jne 0x1148946e */
  if (!C.zf) goto L_1148946e;
L_11489463:;
  /* 11489463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489466 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489469 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148946c jmp 0x1148944d */
  goto L_1148944d;
L_1148946e:;
  /* 1148946e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489471 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11489474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11489476 jne 0x1148947d */
  if (!C.zf) goto L_1148947d;
  /* 11489478 jmp 0x1148965b */
  goto L_1148965b;
L_1148947d:;
  /* 1148947d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489481 je 0x11489494 */
  if (C.zf) goto L_11489494;
  /* 11489483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489486 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489489 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1148948b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148948e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489491 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11489494:;
  /* 11489494 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489497 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11489499 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148949c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148949f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114894a1:;
  /* 114894a1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114894a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_114894af:;
  /* 114894af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114894b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114894b5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114894b8 jne 0x114894ce */
  if (!C.zf) goto L_114894ce;
  /* 114894ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114894bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114894c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114894c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114894c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114894c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 114894cc jmp 0x114894af */
  goto L_114894af;
L_114894ce:;
  /* 114894ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114894d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114894d4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114894d7 jne 0x1148952a */
  if (!C.zf) goto L_1148952a;
  /* 114894d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114894dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114894de mov ecx, 2 */
  ECX = (0x2u);
  /* 114894e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114894e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114894e7 jne 0x11489522 */
  if (!C.zf) goto L_11489522;
  /* 114894e9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114894ed je 0x1148950f */
  if (C.zf) goto L_1148950f;
  /* 114894ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114894f2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114894f6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114894f9 jne 0x11489506 */
  if (!C.zf) goto L_11489506;
  /* 114894fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114894fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489501 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11489504 jmp 0x1148950d */
  goto L_1148950d;
L_11489506:;
  /* 11489506 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1148950d:;
  /* 1148950d jmp 0x11489516 */
  goto L_11489516;
L_1148950f:;
  /* 1148950f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11489516:;
  /* 11489516 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11489518 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148951c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1148951f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11489522:;
  /* 11489522 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11489525 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11489527 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1148952a:;
  /* 1148952a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148952d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11489530 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489533 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11489536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11489538 je 0x1148955e */
  if (C.zf) goto L_1148955e;
  /* 1148953a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148953e je 0x1148954f */
  if (C.zf) goto L_1148954f;
  /* 11489540 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489543 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11489546 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489549 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148954c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1148954f:;
  /* 1148954f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489552 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11489554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489557 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148955a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1148955c jmp 0x1148952a */
  goto L_1148952a;
L_1148955e:;
  /* 1148955e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489561 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11489564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11489566 je 0x11489584 */
  if (C.zf) goto L_11489584;
  /* 11489568 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148956c jne 0x11489589 */
  if (!C.zf) goto L_11489589;
  /* 1148956e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489571 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11489574 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489577 je 0x11489584 */
  if (C.zf) goto L_11489584;
  /* 11489579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148957c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148957f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489582 jne 0x11489589 */
  if (!C.zf) goto L_11489589;
L_11489584:;
  /* 11489584 jmp 0x11489634 */
  goto L_11489634;
L_11489589:;
  /* 11489589 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148958d je 0x11489626 */
  if (C.zf) goto L_11489626;
  /* 11489593 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489597 je 0x114895ed */
  if (C.zf) goto L_114895ed;
  /* 11489599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148959c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148959e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114895a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114895a2 mov cl, byte ptr [eax + 0x114b6a21] */
  CL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 114895a8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114895ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114895ad je 0x114895d8 */
  if (C.zf) goto L_114895d8;
  /* 114895af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114895b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114895b5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114895b7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114895b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114895bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114895bf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 114895c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114895c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114895c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114895cb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114895ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114895d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114895d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114895d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_114895d8:;
  /* 114895d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114895db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114895de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114895e0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114895e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114895e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114895e8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 114895eb jmp 0x11489619 */
  goto L_11489619;
L_114895ed:;
  /* 114895ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114895f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114895f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114895f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114895f6 mov cl, byte ptr [eax + 0x114b6a21] */
  CL = (r8((uint32_t)(EAX + 0x114b6a21)));
  /* 114895fc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114895ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11489601 je 0x11489619 */
  if (C.zf) goto L_11489619;
  /* 11489603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489606 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489609 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148960c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148960f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11489611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489614 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489617 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11489619:;
  /* 11489619 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148961c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148961e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489621 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489624 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11489626:;
  /* 11489626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489629 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148962c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148962f jmp 0x114894a1 */
  goto L_114894a1;
L_11489634:;
  /* 11489634 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489638 je 0x11489649 */
  if (C.zf) goto L_11489649;
  /* 1148963a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148963d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11489640 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489643 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489646 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11489649:;
  /* 11489649 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1148964c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148964e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489651 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11489654 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11489656 jmp 0x11489443 */
  goto L_11489443;
L_1148965b:;
  /* 1148965b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148965f je 0x11489673 */
  if (C.zf) goto L_11489673;
  /* 11489661 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489664 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148966a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148966d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489670 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11489673:;
  /* 11489673 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489676 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11489678 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148967b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148967e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11489680 mov esp, ebp */
  ESP = (EBP);
  /* 11489682 pop ebp */
  EBP = (pop32());
  /* 11489683 ret  */
  ESPCHK(0x11489260u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x11489690 (537 bytes, 173 insns) */
void f_11489690(void) {
  FTRACE(0x11489690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489690 push ebp */
  push32((uint32_t)(EBP));
  /* 11489691 mov ebp, esp */
  EBP = (ESP);
  /* 11489693 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489696 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1148969d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 114896a4 cmp dword ptr [0x114b6654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114896ab jne 0x114896ea */
  if (!C.zf) goto L_114896ea;
  /* 114896ad call dword ptr [0x114b9354] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9354))), 0x114896b3u);
  /* 114896b3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 114896b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114896ba je 0x114896c8 */
  if (C.zf) goto L_114896c8;
  /* 114896bc mov dword ptr [0x114b6654], 1 */
  w32((uint32_t)(0x114b6654), (0x1u));
  /* 114896c6 jmp 0x114896ea */
  goto L_114896ea;
L_114896c8:;
  /* 114896c8 call dword ptr [0x114b9398] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9398))), 0x114896ceu);
  /* 114896ce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 114896d1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114896d5 je 0x114896e3 */
  if (C.zf) goto L_114896e3;
  /* 114896d7 mov dword ptr [0x114b6654], 2 */
  w32((uint32_t)(0x114b6654), (0x2u));
  /* 114896e1 jmp 0x114896ea */
  goto L_114896ea;
L_114896e3:;
  /* 114896e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114896e5 jmp 0x114898a5 */
  goto L_114898a5;
L_114896ea:;
  /* 114896ea cmp dword ptr [0x114b6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114896f1 jne 0x114897ee */
  if (!C.zf) goto L_114897ee;
  /* 114896f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114896fb jne 0x11489713 */
  if (!C.zf) goto L_11489713;
  /* 114896fd call dword ptr [0x114b9354] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9354))), 0x11489703u);
  /* 11489703 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11489706 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148970a jne 0x11489713 */
  if (!C.zf) goto L_11489713;
  /* 1148970c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148970e jmp 0x114898a5 */
  goto L_114898a5;
L_11489713:;
  /* 11489713 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11489716 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11489719:;
  /* 11489719 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148971c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148971e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11489721 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11489723 je 0x11489745 */
  if (C.zf) goto L_11489745;
  /* 11489725 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489728 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148972b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148972e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489731 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11489733 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11489736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11489738 jne 0x11489743 */
  if (!C.zf) goto L_11489743;
  /* 1148973a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148973d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489740 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11489743:;
  /* 11489743 jmp 0x11489719 */
  goto L_11489719;
L_11489745:;
  /* 11489745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489748 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148974b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1148974d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489750 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11489753 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489755 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148975b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148975e push edx */
  push32((uint32_t)(EDX));
  /* 1148975f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11489762 push eax */
  push32((uint32_t)(EAX));
  /* 11489763 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489765 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489767 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x1148976du);
  /* 1148976d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11489770 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489774 je 0x11489794 */
  if (C.zf) goto L_11489794;
  /* 11489776 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11489778 push 0x114b0ef4 */
  push32((uint32_t)(0x114b0ef4u));
  /* 1148977d push 2 */
  push32((uint32_t)(0x2u));
  /* 1148977f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11489782 push ecx */
  push32((uint32_t)(ECX));
  /* 11489783 call 0x114870c0 */
  push32(0x11489788u); f_114870c0();
  /* 11489788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148978b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148978e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489792 jne 0x114897a5 */
  if (!C.zf) goto L_114897a5;
L_11489794:;
  /* 11489794 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11489797 push edx */
  push32((uint32_t)(EDX));
  /* 11489798 call dword ptr [0x114b93d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93d4))), 0x1148979eu);
  /* 1148979e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114897a0 jmp 0x114898a5 */
  goto L_114898a5;
L_114897a5:;
  /* 114897a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114897a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114897a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114897ac push eax */
  push32((uint32_t)(EAX));
  /* 114897ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114897b0 push ecx */
  push32((uint32_t)(ECX));
  /* 114897b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114897b4 push edx */
  push32((uint32_t)(EDX));
  /* 114897b5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114897b8 push eax */
  push32((uint32_t)(EAX));
  /* 114897b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114897bb push 0 */
  push32((uint32_t)(0x0u));
  /* 114897bd call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x114897c3u);
  /* 114897c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114897c5 jne 0x114897dc */
  if (!C.zf) goto L_114897dc;
  /* 114897c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114897c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 114897cc push ecx */
  push32((uint32_t)(ECX));
  /* 114897cd call 0x11487b50 */
  push32(0x114897d2u); f_11487b50();
  /* 114897d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114897d5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_114897dc:;
  /* 114897dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114897df push edx */
  push32((uint32_t)(EDX));
  /* 114897e0 call dword ptr [0x114b93d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93d4))), 0x114897e6u);
  /* 114897e6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114897e9 jmp 0x114898a5 */
  goto L_114898a5;
L_114897ee:;
  /* 114897ee cmp dword ptr [0x114b6654], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114b6654))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114897f5 jne 0x114898a3 */
  if (!C.zf) goto L_114898a3;
  /* 114897fb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114897ff jne 0x11489817 */
  if (!C.zf) goto L_11489817;
  /* 11489801 call dword ptr [0x114b9398] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9398))), 0x11489807u);
  /* 11489807 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148980a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148980e jne 0x11489817 */
  if (!C.zf) goto L_11489817;
  /* 11489810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11489812 jmp 0x114898a5 */
  goto L_114898a5;
L_11489817:;
  /* 11489817 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148981a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1148981d:;
  /* 1148981d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489820 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11489823 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11489825 je 0x11489845 */
  if (C.zf) goto L_11489845;
  /* 11489827 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148982a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148982d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11489830 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489833 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11489836 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11489838 jne 0x11489843 */
  if (!C.zf) goto L_11489843;
  /* 1148983a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148983d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489840 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11489843:;
  /* 11489843 jmp 0x1148981d */
  goto L_1148981d;
L_11489845:;
  /* 11489845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489848 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148984b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148984e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11489851 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11489856 push 0x114b0ef4 */
  push32((uint32_t)(0x114b0ef4u));
  /* 1148985b push 2 */
  push32((uint32_t)(0x2u));
  /* 1148985d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11489860 push edx */
  push32((uint32_t)(EDX));
  /* 11489861 call 0x114870c0 */
  push32(0x11489866u); f_114870c0();
  /* 11489866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489869 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148986c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489870 jne 0x11489880 */
  if (!C.zf) goto L_11489880;
  /* 11489872 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11489875 push eax */
  push32((uint32_t)(EAX));
  /* 11489876 call dword ptr [0x114b93d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93d0))), 0x1148987cu);
  /* 1148987c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148987e jmp 0x114898a5 */
  goto L_114898a5;
L_11489880:;
  /* 11489880 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11489883 push ecx */
  push32((uint32_t)(ECX));
  /* 11489884 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11489887 push edx */
  push32((uint32_t)(EDX));
  /* 11489888 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148988b push eax */
  push32((uint32_t)(EAX));
  /* 1148988c call 0x1148f6f0 */
  push32(0x11489891u); f_1148f6f0();
  /* 11489891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489894 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11489897 push ecx */
  push32((uint32_t)(ECX));
  /* 11489898 call dword ptr [0x114b93d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93d0))), 0x1148989eu);
  /* 1148989e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114898a1 jmp 0x114898a5 */
  goto L_114898a5;
L_114898a3:;
  /* 114898a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114898a5:;
  /* 114898a5 mov esp, ebp */
  ESP = (EBP);
  /* 114898a7 pop ebp */
  EBP = (pop32());
  /* 114898a8 ret  */
  ESPCHK(0x11489690u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x114898b0 (77 bytes, 25 insns) */
void f_114898b0(void) {
  FTRACE(0x114898b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114898b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114898b1 mov ebp, esp */
  EBP = (ESP);
  /* 114898b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114898b5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114898ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114898bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114898c0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114898c3 push eax */
  push32((uint32_t)(EAX));
  /* 114898c4 call dword ptr [0x114b934c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b934c))), 0x114898cau);
  /* 114898ca mov dword ptr [0x114b7ea4], eax */
  w32((uint32_t)(0x114b7ea4), (EAX));
  /* 114898cf cmp dword ptr [0x114b7ea4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b7ea4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114898d6 jne 0x114898dc */
  if (!C.zf) goto L_114898dc;
  /* 114898d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114898da jmp 0x114898fb */
  goto L_114898fb;
L_114898dc:;
  /* 114898dc call 0x1148d270 */
  push32(0x114898e1u); f_1148d270();
  /* 114898e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114898e3 jne 0x114898f6 */
  if (!C.zf) goto L_114898f6;
  /* 114898e5 mov ecx, dword ptr [0x114b7ea4] */
  ECX = (r32((uint32_t)(0x114b7ea4)));
  /* 114898eb push ecx */
  push32((uint32_t)(ECX));
  /* 114898ec call dword ptr [0x114b9350] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9350))), 0x114898f2u);
  /* 114898f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114898f4 jmp 0x114898fb */
  goto L_114898fb;
L_114898f6:;
  /* 114898f6 mov eax, 1 */
  EAX = (0x1u);
L_114898fb:;
  /* 114898fb pop ebp */
  EBP = (pop32());
  /* 114898fc ret  */
  ESPCHK(0x114898b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009900 @ 0x11489900 (156 bytes, 48 insns) */
void f_11489900(void) {
  FTRACE(0x11489900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489900 push ebp */
  push32((uint32_t)(EBP));
  /* 11489901 mov ebp, esp */
  EBP = (ESP);
  /* 11489903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489906 mov eax, dword ptr [0x114b6b48] */
  EAX = (r32((uint32_t)(0x114b6b48)));
  /* 1148990b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148990e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11489915 jmp 0x11489920 */
  goto L_11489920;
L_11489917:;
  /* 11489917 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148991a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148991d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11489920:;
  /* 11489920 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489923 cmp edx, dword ptr [0x114b6b44] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b6b44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489929 jge 0x11489976 */
  if ((C.sf==C.of)) goto L_11489976;
  /* 1148992b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11489930 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11489935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489938 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1148993b push ecx */
  push32((uint32_t)(ECX));
  /* 1148993c call dword ptr [0x114b9344] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9344))), 0x11489942u);
  /* 11489942 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11489947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489949 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148994c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1148994f push eax */
  push32((uint32_t)(EAX));
  /* 11489950 call dword ptr [0x114b9344] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9344))), 0x11489956u);
  /* 11489956 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489959 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1148995c push edx */
  push32((uint32_t)(EDX));
  /* 1148995d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148995f mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 11489964 push eax */
  push32((uint32_t)(EAX));
  /* 11489965 call dword ptr [0x114b9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9348))), 0x1148996bu);
  /* 1148996b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148996e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489971 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11489974 jmp 0x11489917 */
  goto L_11489917;
L_11489976:;
  /* 11489976 mov edx, dword ptr [0x114b6b48] */
  EDX = (r32((uint32_t)(0x114b6b48)));
  /* 1148997c push edx */
  push32((uint32_t)(EDX));
  /* 1148997d push 0 */
  push32((uint32_t)(0x0u));
  /* 1148997f mov eax, dword ptr [0x114b7ea4] */
  EAX = (r32((uint32_t)(0x114b7ea4)));
  /* 11489984 push eax */
  push32((uint32_t)(EAX));
  /* 11489985 call dword ptr [0x114b9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9348))), 0x1148998bu);
  /* 1148998b mov ecx, dword ptr [0x114b7ea4] */
  ECX = (r32((uint32_t)(0x114b7ea4)));
  /* 11489991 push ecx */
  push32((uint32_t)(ECX));
  /* 11489992 call dword ptr [0x114b9350] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9350))), 0x11489998u);
  /* 11489998 mov esp, ebp */
  ESP = (EBP);
  /* 1148999a pop ebp */
  EBP = (pop32());
  /* 1148999b ret  */
  ESPCHK(0x11489900u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x114899a0 (73 bytes, 19 insns) */
void f_114899a0(void) {
  FTRACE(0x114899a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114899a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114899a1 mov ebp, esp */
  EBP = (ESP);
  /* 114899a3 cmp dword ptr [0x114b64e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b64e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114899aa je 0x114899be */
  if (C.zf) goto L_114899be;
  /* 114899ac cmp dword ptr [0x114b64e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b64e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114899b3 jne 0x114899e7 */
  if (!C.zf) goto L_114899e7;
  /* 114899b5 cmp dword ptr [0x114b64ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b64ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114899bc jne 0x114899e7 */
  if (!C.zf) goto L_114899e7;
L_114899be:;
  /* 114899be push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 114899c3 call 0x114899f0 */
  push32(0x114899c8u); f_114899f0();
  /* 114899c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114899cb cmp dword ptr [0x114b6658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114899d2 je 0x114899da */
  if (C.zf) goto L_114899da;
  /* 114899d4 call dword ptr [0x114b6658] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6658))), 0x114899dau);
L_114899da:;
  /* 114899da push 0xff */
  push32((uint32_t)(0xffu));
  /* 114899df call 0x114899f0 */
  push32(0x114899e4u); f_114899f0();
  /* 114899e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114899e7:;
  /* 114899e7 pop ebp */
  EBP = (pop32());
  /* 114899e8 ret  */
  ESPCHK(0x114899a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x114899f0 (447 bytes, 131 insns) */
void f_114899f0(void) {
  FTRACE(0x114899f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114899f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114899f1 mov ebp, esp */
  EBP = (ESP);
  /* 114899f3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114899f9 push ebx */
  push32((uint32_t)(EBX));
  /* 114899fa push esi */
  push32((uint32_t)(ESI));
  /* 114899fb push edi */
  push32((uint32_t)(EDI));
  /* 114899fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11489a03 jmp 0x11489a0e */
  goto L_11489a0e;
L_11489a05:;
  /* 11489a05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489a08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489a0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11489a0e:;
  /* 11489a0e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a12 jae 0x11489a27 */
  if (!C.cf) goto L_11489a27;
  /* 11489a14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489a1a cmp edx, dword ptr [ecx*8 + 0x114b3ae8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x114b3ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a21 jne 0x11489a25 */
  if (!C.zf) goto L_11489a25;
  /* 11489a23 jmp 0x11489a27 */
  goto L_11489a27;
L_11489a25:;
  /* 11489a25 jmp 0x11489a05 */
  goto L_11489a05;
L_11489a27:;
  /* 11489a27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489a2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489a2d cmp ecx, dword ptr [eax*8 + 0x114b3ae8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114b3ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a34 jne 0x11489ba8 */
  if (!C.zf) goto L_11489ba8;
  /* 11489a3a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a41 je 0x11489a64 */
  if (C.zf) goto L_11489a64;
  /* 11489a43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489a46 mov eax, dword ptr [edx*8 + 0x114b3aec] */
  EAX = (r32((uint32_t)(EDX*8 + 0x114b3aec)));
  /* 11489a4d push eax */
  push32((uint32_t)(EAX));
  /* 11489a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11489a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11489a56 call 0x11484860 */
  push32(0x11489a5bu); f_11484860();
  /* 11489a5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489a5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a61 jne 0x11489a64 */
  if (!C.zf) goto L_11489a64;
  /* 11489a63 int3  */
  x86_unimpl("int3 @ 0x11489a63");
L_11489a64:;
  /* 11489a64 cmp dword ptr [0x114b64e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b64e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a6b je 0x11489a7f */
  if (C.zf) goto L_11489a7f;
  /* 11489a6d cmp dword ptr [0x114b64e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b64e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a74 jne 0x11489ab8 */
  if (!C.zf) goto L_11489ab8;
  /* 11489a76 cmp dword ptr [0x114b64ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b64ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489a7d jne 0x11489ab8 */
  if (!C.zf) goto L_11489ab8;
L_11489a7f:;
  /* 11489a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11489a81 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11489a84 push ecx */
  push32((uint32_t)(ECX));
  /* 11489a85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489a88 mov eax, dword ptr [edx*8 + 0x114b3aec] */
  EAX = (r32((uint32_t)(EDX*8 + 0x114b3aec)));
  /* 11489a8f push eax */
  push32((uint32_t)(EAX));
  /* 11489a90 call 0x11489ef0 */
  push32(0x11489a95u); f_11489ef0();
  /* 11489a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489a98 push eax */
  push32((uint32_t)(EAX));
  /* 11489a99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489a9c mov edx, dword ptr [ecx*8 + 0x114b3aec] */
  EDX = (r32((uint32_t)(ECX*8 + 0x114b3aec)));
  /* 11489aa3 push edx */
  push32((uint32_t)(EDX));
  /* 11489aa4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11489aa6 call dword ptr [0x114b9364] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9364))), 0x11489aacu);
  /* 11489aac push eax */
  push32((uint32_t)(EAX));
  /* 11489aad call dword ptr [0x114b9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9368))), 0x11489ab3u);
  /* 11489ab3 jmp 0x11489ba8 */
  goto L_11489ba8;
L_11489ab8:;
  /* 11489ab8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489abf je 0x11489ba8 */
  if (C.zf) goto L_11489ba8;
  /* 11489ac5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11489aca lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11489ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11489ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489ad3 call dword ptr [0x114b9380] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9380))), 0x11489ad9u);
  /* 11489ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11489adb jne 0x11489af1 */
  if (!C.zf) goto L_11489af1;
  /* 11489add push 0x114b0630 */
  push32((uint32_t)(0x114b0630u));
  /* 11489ae2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11489ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 11489ae9 call 0x1148a070 */
  push32(0x11489aeeu); f_1148a070();
  /* 11489aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11489af1:;
  /* 11489af1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11489af7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11489afa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489afd push eax */
  push32((uint32_t)(EAX));
  /* 11489afe call 0x11489ef0 */
  push32(0x11489b03u); f_11489ef0();
  /* 11489b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b06 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b09 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489b0c jbe 0x11489b3a */
  if ((C.cf||C.zf)) goto L_11489b3a;
  /* 11489b0e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11489b14 push ecx */
  push32((uint32_t)(ECX));
  /* 11489b15 call 0x11489ef0 */
  push32(0x11489b1au); f_11489ef0();
  /* 11489b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489b20 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11489b24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11489b27 push 3 */
  push32((uint32_t)(0x3u));
  /* 11489b29 push 0x114b062c */
  push32((uint32_t)(0x114b062cu));
  /* 11489b2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489b31 push ecx */
  push32((uint32_t)(ECX));
  /* 11489b32 call 0x1148a8e0 */
  push32(0x11489b37u); f_1148a8e0();
  /* 11489b37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11489b3a:;
  /* 11489b3a push 0x114b11b0 */
  push32((uint32_t)(0x114b11b0u));
  /* 11489b3f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11489b45 push edx */
  push32((uint32_t)(EDX));
  /* 11489b46 call 0x1148a070 */
  push32(0x11489b4bu); f_1148a070();
  /* 11489b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489b51 push eax */
  push32((uint32_t)(EAX));
  /* 11489b52 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11489b58 push ecx */
  push32((uint32_t)(ECX));
  /* 11489b59 call 0x1148a080 */
  push32(0x11489b5eu); f_1148a080();
  /* 11489b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b61 push 0x114b05a4 */
  push32((uint32_t)(0x114b05a4u));
  /* 11489b66 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11489b6c push edx */
  push32((uint32_t)(EDX));
  /* 11489b6d call 0x1148a080 */
  push32(0x11489b72u); f_1148a080();
  /* 11489b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489b78 mov ecx, dword ptr [eax*8 + 0x114b3aec] */
  ECX = (r32((uint32_t)(EAX*8 + 0x114b3aec)));
  /* 11489b7f push ecx */
  push32((uint32_t)(ECX));
  /* 11489b80 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11489b86 push edx */
  push32((uint32_t)(EDX));
  /* 11489b87 call 0x1148a080 */
  push32(0x11489b8cu); f_1148a080();
  /* 11489b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489b8f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11489b94 push 0x114b1188 */
  push32((uint32_t)(0x114b1188u));
  /* 11489b99 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11489b9f push eax */
  push32((uint32_t)(EAX));
  /* 11489ba0 call 0x1148a820 */
  push32(0x11489ba5u); f_1148a820();
  /* 11489ba5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11489ba8:;
  /* 11489ba8 pop edi */
  EDI = (pop32());
  /* 11489ba9 pop esi */
  ESI = (pop32());
  /* 11489baa pop ebx */
  EBX = (pop32());
  /* 11489bab mov esp, ebp */
  ESP = (EBP);
  /* 11489bad pop ebp */
  EBP = (pop32());
  /* 11489bae ret  */
  ESPCHK(0x114899f0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11489bb0 (80 bytes, 27 insns) */
void f_11489bb0(void) {
  FTRACE(0x11489bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11489bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11489bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11489bb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11489bbb jmp 0x11489bc6 */
  goto L_11489bc6;
L_11489bbd:;
  /* 11489bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489bc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11489bc6:;
  /* 11489bc6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489bca jae 0x11489bdf */
  if (!C.cf) goto L_11489bdf;
  /* 11489bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489bcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489bd2 cmp edx, dword ptr [ecx*8 + 0x114b3ae8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x114b3ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489bd9 jne 0x11489bdd */
  if (!C.zf) goto L_11489bdd;
  /* 11489bdb jmp 0x11489bdf */
  goto L_11489bdf;
L_11489bdd:;
  /* 11489bdd jmp 0x11489bbd */
  goto L_11489bbd;
L_11489bdf:;
  /* 11489bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489be5 cmp ecx, dword ptr [eax*8 + 0x114b3ae8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114b3ae8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489bec jne 0x11489bfa */
  if (!C.zf) goto L_11489bfa;
  /* 11489bee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489bf1 mov eax, dword ptr [edx*8 + 0x114b3aec] */
  EAX = (r32((uint32_t)(EDX*8 + 0x114b3aec)));
  /* 11489bf8 jmp 0x11489bfc */
  goto L_11489bfc;
L_11489bfa:;
  /* 11489bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11489bfc:;
  /* 11489bfc mov esp, ebp */
  ESP = (EBP);
  /* 11489bfe pop ebp */
  EBP = (pop32());
  /* 11489bff ret  */
  ESPCHK(0x11489bb0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11489c00 (66 bytes, 28 insns) */
void f_11489c00(void) {
  FTRACE(0x11489c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11489c01 mov ebp, esp */
  EBP = (ESP);
  /* 11489c03 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489c07 jne 0x11489c27 */
  if (!C.zf) goto L_11489c27;
  /* 11489c09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489c0d jge 0x11489c27 */
  if ((C.sf==C.of)) goto L_11489c27;
  /* 11489c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11489c11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489c14 push eax */
  push32((uint32_t)(EAX));
  /* 11489c15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489c18 push ecx */
  push32((uint32_t)(ECX));
  /* 11489c19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489c1c push edx */
  push32((uint32_t)(EDX));
  /* 11489c1d call 0x11489c50 */
  push32(0x11489c22u); f_11489c50();
  /* 11489c22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489c25 jmp 0x11489c3d */
  goto L_11489c3d;
L_11489c27:;
  /* 11489c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489c29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489c2c push eax */
  push32((uint32_t)(EAX));
  /* 11489c2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489c30 push ecx */
  push32((uint32_t)(ECX));
  /* 11489c31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489c34 push edx */
  push32((uint32_t)(EDX));
  /* 11489c35 call 0x11489c50 */
  push32(0x11489c3au); f_11489c50();
  /* 11489c3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11489c3d:;
  /* 11489c3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489c40 pop ebp */
  EBP = (pop32());
  /* 11489c41 ret  */
  ESPCHK(0x11489c00u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11489c50 (194 bytes, 71 insns) */
void f_11489c50(void) {
  FTRACE(0x11489c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11489c51 mov ebp, esp */
  EBP = (ESP);
  /* 11489c53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489c56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489c59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11489c5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489c60 je 0x11489c79 */
  if (C.zf) goto L_11489c79;
  /* 11489c62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11489c68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489c6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489c6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11489c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489c74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11489c76 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11489c79:;
  /* 11489c79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489c7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11489c7f:;
  /* 11489c7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489c82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11489c84 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11489c87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11489c8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11489c8f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11489c92 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11489c95 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489c99 jbe 0x11489cb1 */
  if ((C.cf||C.zf)) goto L_11489cb1;
  /* 11489c9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489c9e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489ca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489ca4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489ca9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489cac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11489caf jmp 0x11489cc5 */
  goto L_11489cc5;
L_11489cb1:;
  /* 11489cb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489cb4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489cb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489cba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489cbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489cc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11489cc5:;
  /* 11489cc5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489cc9 ja 0x11489c7f */
  if ((!C.cf&&!C.zf)) goto L_11489c7f;
  /* 11489ccb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489cce mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11489cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489cd4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489cd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11489cda:;
  /* 11489cda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489cdd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489cdf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11489ce2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489ce5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489ce8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489cea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489cec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489cef mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11489cf2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11489cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489cf7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489cfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11489cfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489d00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489d03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11489d06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489d09 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489d0c jb 0x11489cda */
  if (C.cf) goto L_11489cda;
  /* 11489d0e mov esp, ebp */
  ESP = (EBP);
  /* 11489d10 pop ebp */
  EBP = (pop32());
  /* 11489d11 ret  */
  ESPCHK(0x11489c50u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11489d20 (63 bytes, 24 insns) */
void f_11489d20(void) {
  FTRACE(0x11489d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11489d21 mov ebp, esp */
  EBP = (ESP);
  /* 11489d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11489d24 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489d28 jne 0x11489d39 */
  if (!C.zf) goto L_11489d39;
  /* 11489d2a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489d2e jge 0x11489d39 */
  if ((C.sf==C.of)) goto L_11489d39;
  /* 11489d30 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11489d37 jmp 0x11489d40 */
  goto L_11489d40;
L_11489d39:;
  /* 11489d39 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11489d40:;
  /* 11489d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489d43 push eax */
  push32((uint32_t)(EAX));
  /* 11489d44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489d47 push ecx */
  push32((uint32_t)(ECX));
  /* 11489d48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489d4b push edx */
  push32((uint32_t)(EDX));
  /* 11489d4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489d4f push eax */
  push32((uint32_t)(EAX));
  /* 11489d50 call 0x11489c50 */
  push32(0x11489d55u); f_11489c50();
  /* 11489d55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489d5b mov esp, ebp */
  ESP = (EBP);
  /* 11489d5d pop ebp */
  EBP = (pop32());
  /* 11489d5e ret  */
  ESPCHK(0x11489d20u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11489d60 (30 bytes, 14 insns) */
void f_11489d60(void) {
  FTRACE(0x11489d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11489d61 mov ebp, esp */
  EBP = (ESP);
  /* 11489d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489d65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489d68 push eax */
  push32((uint32_t)(EAX));
  /* 11489d69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489d6c push ecx */
  push32((uint32_t)(ECX));
  /* 11489d6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489d70 push edx */
  push32((uint32_t)(EDX));
  /* 11489d71 call 0x11489c50 */
  push32(0x11489d76u); f_11489c50();
  /* 11489d76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489d79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489d7c pop ebp */
  EBP = (pop32());
  /* 11489d7d ret  */
  ESPCHK(0x11489d60u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11489d80 (72 bytes, 28 insns) */
void f_11489d80(void) {
  FTRACE(0x11489d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11489d81 mov ebp, esp */
  EBP = (ESP);
  /* 11489d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11489d84 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489d88 jne 0x11489da1 */
  if (!C.zf) goto L_11489da1;
  /* 11489d8a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489d8e jg 0x11489da1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11489da1;
  /* 11489d90 jl 0x11489d98 */
  if ((C.sf!=C.of)) goto L_11489d98;
  /* 11489d92 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489d96 jae 0x11489da1 */
  if (!C.cf) goto L_11489da1;
L_11489d98:;
  /* 11489d98 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11489d9f jmp 0x11489da8 */
  goto L_11489da8;
L_11489da1:;
  /* 11489da1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11489da8:;
  /* 11489da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489dab push eax */
  push32((uint32_t)(EAX));
  /* 11489dac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489daf push ecx */
  push32((uint32_t)(ECX));
  /* 11489db0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489db3 push edx */
  push32((uint32_t)(EDX));
  /* 11489db4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489db7 push eax */
  push32((uint32_t)(EAX));
  /* 11489db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489dbb push ecx */
  push32((uint32_t)(ECX));
  /* 11489dbc call 0x11489dd0 */
  push32(0x11489dc1u); f_11489dd0();
  /* 11489dc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489dc4 mov esp, ebp */
  ESP = (EBP);
  /* 11489dc6 pop ebp */
  EBP = (pop32());
  /* 11489dc7 ret  */
  ESPCHK(0x11489d80u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11489dd0 (242 bytes, 91 insns) */
void f_11489dd0(void) {
  FTRACE(0x11489dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11489dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11489dd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489dd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11489ddc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489de0 je 0x11489e04 */
  if (C.zf) goto L_11489e04;
  /* 11489de2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489de5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11489de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489deb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489dee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11489df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489df4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11489df6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489df9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489dfc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11489dfe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11489e01 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11489e04:;
  /* 11489e04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11489e0a:;
  /* 11489e0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489e0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11489e0f push ecx */
  push32((uint32_t)(ECX));
  /* 11489e10 push eax */
  push32((uint32_t)(EAX));
  /* 11489e11 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489e14 push edx */
  push32((uint32_t)(EDX));
  /* 11489e15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489e18 push eax */
  push32((uint32_t)(EAX));
  /* 11489e19 call 0x1148c8d0 */
  push32(0x11489e1eu); f_1148c8d0();
  /* 11489e1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11489e21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489e24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11489e26 push edx */
  push32((uint32_t)(EDX));
  /* 11489e27 push ecx */
  push32((uint32_t)(ECX));
  /* 11489e28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489e2b push eax */
  push32((uint32_t)(EAX));
  /* 11489e2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489e2f push ecx */
  push32((uint32_t)(ECX));
  /* 11489e30 call 0x1148c860 */
  push32(0x11489e35u); f_1148c860();
  /* 11489e35 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11489e38 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11489e3b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489e3f jbe 0x11489e57 */
  if ((C.cf||C.zf)) goto L_11489e57;
  /* 11489e41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489e44 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489e47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489e52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11489e55 jmp 0x11489e6b */
  goto L_11489e6b;
L_11489e57:;
  /* 11489e57 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11489e5a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e60 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489e68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11489e6b:;
  /* 11489e6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489e6f ja 0x11489e0a */
  if ((!C.cf&&!C.zf)) goto L_11489e0a;
  /* 11489e71 jb 0x11489e79 */
  if (C.cf) goto L_11489e79;
  /* 11489e73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489e77 ja 0x11489e0a */
  if ((!C.cf&&!C.zf)) goto L_11489e0a;
L_11489e79:;
  /* 11489e79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e7c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11489e7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e82 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489e85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11489e88:;
  /* 11489e88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e8b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489e8d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11489e90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489e93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489e96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11489e98 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11489e9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489e9d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11489ea0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11489ea2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11489ea5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489ea8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11489eab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489eae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489eb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11489eb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11489eb7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489eba jb 0x11489e88 */
  if (C.cf) goto L_11489e88;
  /* 11489ebc mov esp, ebp */
  ESP = (EBP);
  /* 11489ebe pop ebp */
  EBP = (pop32());
  /* 11489ebf ret 0x14 */
  ESPCHK(0x11489dd0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11489ed0 (31 bytes, 15 insns) */
void f_11489ed0(void) {
  FTRACE(0x11489ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11489ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11489ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489ed5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11489ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11489ed9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489edc push ecx */
  push32((uint32_t)(ECX));
  /* 11489edd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489ee0 push edx */
  push32((uint32_t)(EDX));
  /* 11489ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489ee4 push eax */
  push32((uint32_t)(EAX));
  /* 11489ee5 call 0x11489dd0 */
  push32(0x11489eeau); f_11489dd0();
  /* 11489eea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11489eed pop ebp */
  EBP = (pop32());
  /* 11489eee ret  */
  ESPCHK(0x11489ed0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11489ef0 (123 bytes, 44 insns) */
void f_11489ef0(void) {
  FTRACE(0x11489ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489ef0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11489ef4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11489efa je 0x11489f10 */
  if (C.zf) goto L_11489f10;
L_11489efc:;
  /* 11489efc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11489efe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11489eff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11489f01 je 0x11489f43 */
  if (C.zf) goto L_11489f43;
  /* 11489f03 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11489f09 jne 0x11489efc */
  if (!C.zf) goto L_11489efc;
  /* 11489f0b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11489f10:;
  /* 11489f10 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11489f12 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11489f17 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489f19 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11489f1c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11489f1e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11489f21 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11489f26 je 0x11489f10 */
  if (C.zf) goto L_11489f10;
  /* 11489f28 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11489f2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11489f2d je 0x11489f61 */
  if (C.zf) goto L_11489f61;
  /* 11489f2f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11489f31 je 0x11489f57 */
  if (C.zf) goto L_11489f57;
  /* 11489f33 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11489f38 je 0x11489f4d */
  if (C.zf) goto L_11489f4d;
  /* 11489f3a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11489f3f je 0x11489f43 */
  if (C.zf) goto L_11489f43;
  /* 11489f41 jmp 0x11489f10 */
  goto L_11489f10;
L_11489f43:;
  /* 11489f43 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11489f46 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11489f4a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489f4c ret  */
  ESPCHK(0x11489ef0u, _esp0);
  ESP += 4; return;
L_11489f4d:;
  /* 11489f4d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11489f50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11489f54 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489f56 ret  */
  ESPCHK(0x11489ef0u, _esp0);
  ESP += 4; return;
L_11489f57:;
  /* 11489f57 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11489f5a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11489f5e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489f60 ret  */
  ESPCHK(0x11489ef0u, _esp0);
  ESP += 4; return;
L_11489f61:;
  /* 11489f61 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11489f64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11489f68 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489f6a ret  */
  ESPCHK(0x11489ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f70 @ 0x11489f70 (249 bytes, 93 insns) */
void f_11489f70(void) {
  FTRACE(0x11489f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11489f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11489f71 mov ebp, esp */
  EBP = (ESP);
  /* 11489f73 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11489f76 push ebx */
  push32((uint32_t)(EBX));
  /* 11489f77 push esi */
  push32((uint32_t)(ESI));
  /* 11489f78 push edi */
  push32((uint32_t)(EDI));
  /* 11489f79 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11489f7c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11489f7f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11489f82 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11489f85:;
  /* 11489f85 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489f89 jne 0x11489fa9 */
  if (!C.zf) goto L_11489fa9;
  /* 11489f8b push 0x114b0428 */
  push32((uint32_t)(0x114b0428u));
  /* 11489f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11489f92 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11489f94 push 0x114b041c */
  push32((uint32_t)(0x114b041cu));
  /* 11489f99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11489f9b call 0x11484860 */
  push32(0x11489fa0u); f_11484860();
  /* 11489fa0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489fa3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489fa6 jne 0x11489fa9 */
  if (!C.zf) goto L_11489fa9;
  /* 11489fa8 int3  */
  x86_unimpl("int3 @ 0x11489fa8");
L_11489fa9:;
  /* 11489fa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11489fab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11489fad jne 0x11489f85 */
  if (!C.zf) goto L_11489f85;
L_11489faf:;
  /* 11489faf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489fb3 jne 0x11489fd3 */
  if (!C.zf) goto L_11489fd3;
  /* 11489fb5 push 0x114b040c */
  push32((uint32_t)(0x114b040cu));
  /* 11489fba push 0 */
  push32((uint32_t)(0x0u));
  /* 11489fbc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11489fbe push 0x114b041c */
  push32((uint32_t)(0x114b041cu));
  /* 11489fc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11489fc5 call 0x11484860 */
  push32(0x11489fcau); f_11484860();
  /* 11489fca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11489fcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11489fd0 jne 0x11489fd3 */
  if (!C.zf) goto L_11489fd3;
  /* 11489fd2 int3  */
  x86_unimpl("int3 @ 0x11489fd2");
L_11489fd3:;
  /* 11489fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11489fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11489fd7 jne 0x11489faf */
  if (!C.zf) goto L_11489faf;
  /* 11489fd9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11489fdc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11489fe3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11489fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489fe9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11489fec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11489fef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11489ff2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11489ff4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11489ff7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11489ffa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11489ffd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1148a000 push edx */
  push32((uint32_t)(EDX));
  /* 1148a001 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148a004 push eax */
  push32((uint32_t)(EAX));
  /* 1148a005 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a008 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a009 call 0x11485980 */
  push32(0x1148a00eu); f_11485980();
  /* 1148a00e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a011 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1148a014 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a017 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148a01a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a01d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a020 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1148a023 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a026 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a02a jl 0x1148a04e */
  if ((C.sf!=C.of)) goto L_1148a04e;
  /* 1148a02c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a02f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148a031 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1148a034 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148a036 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148a03c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1148a03f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a042 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148a044 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a047 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a04a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1148a04c jmp 0x1148a05f */
  goto L_1148a05f;
L_1148a04e:;
  /* 1148a04e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a051 push eax */
  push32((uint32_t)(EAX));
  /* 1148a052 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148a054 call 0x11485700 */
  push32(0x1148a059u); f_11485700();
  /* 1148a059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a05c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1148a05f:;
  /* 1148a05f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148a062 pop edi */
  EDI = (pop32());
  /* 1148a063 pop esi */
  ESI = (pop32());
  /* 1148a064 pop ebx */
  EBX = (pop32());
  /* 1148a065 mov esp, ebp */
  ESP = (EBP);
  /* 1148a067 pop ebp */
  EBP = (pop32());
  /* 1148a068 ret  */
  ESPCHK(0x11489f70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a070 @ 0x1148a070 (7 bytes, 3 insns) */
void f_1148a070(void) {
  FTRACE(0x1148a070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a070 push edi */
  push32((uint32_t)(EDI));
  /* 1148a071 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1148a075 jmp 0x1148a0e1 */
  jmp_ind(0x1148a0e1u); return;
}

/* FUN_1000a080 @ 0x1148a080 (224 bytes, 84 insns) */
void f_1148a080(void) {
  FTRACE(0x1148a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a080 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1148a084 push edi */
  push32((uint32_t)(EDI));
  /* 1148a085 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1148a08b je 0x1148a09c */
  if (C.zf) goto L_1148a09c;
L_1148a08d:;
  /* 1148a08d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1148a08f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1148a090 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1148a092 je 0x1148a0cf */
  if (C.zf) goto L_1148a0cf;
  /* 1148a094 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1148a09a jne 0x1148a08d */
  if (!C.zf) goto L_1148a08d;
L_1148a09c:;
  /* 1148a09c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1148a09e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1148a0a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a0a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148a0a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a0aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a0ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1148a0b2 je 0x1148a09c */
  if (C.zf) goto L_1148a09c;
  /* 1148a0b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1148a0b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1148a0b9 je 0x1148a0de */
  if (C.zf) goto L_1148a0de;
  /* 1148a0bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1148a0bd je 0x1148a0d9 */
  if (C.zf) goto L_1148a0d9;
  /* 1148a0bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1148a0c4 je 0x1148a0d4 */
  if (C.zf) goto L_1148a0d4;
  /* 1148a0c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1148a0cb je 0x1148a0cf */
  if (C.zf) goto L_1148a0cf;
  /* 1148a0cd jmp 0x1148a09c */
  goto L_1148a09c;
L_1148a0cf:;
  /* 1148a0cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1148a0d2 jmp 0x1148a0e1 */
  goto L_1148a0e1;
L_1148a0d4:;
  /* 1148a0d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1148a0d7 jmp 0x1148a0e1 */
  goto L_1148a0e1;
L_1148a0d9:;
  /* 1148a0d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1148a0dc jmp 0x1148a0e1 */
  goto L_1148a0e1;
L_1148a0de:;
  /* 1148a0de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1148a0e1:;
  /* 1148a0e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1148a0e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1148a0eb je 0x1148a106 */
  if (C.zf) goto L_1148a106;
L_1148a0ed:;
  /* 1148a0ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1148a0ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1148a0f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1148a0f2 je 0x1148a158 */
  if (C.zf) goto L_1148a158;
  /* 1148a0f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1148a0f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148a0f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1148a0fd jne 0x1148a0ed */
  if (!C.zf) goto L_1148a0ed;
  /* 1148a0ff jmp 0x1148a106 */
  goto L_1148a106;
L_1148a101:;
  /* 1148a101 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1148a103 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1148a106:;
  /* 1148a106 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1148a10b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1148a10d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a10f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148a112 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a114 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148a116 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a119 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1148a11e je 0x1148a101 */
  if (C.zf) goto L_1148a101;
  /* 1148a120 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1148a122 je 0x1148a158 */
  if (C.zf) goto L_1148a158;
  /* 1148a124 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1148a126 je 0x1148a14f */
  if (C.zf) goto L_1148a14f;
  /* 1148a128 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1148a12e je 0x1148a142 */
  if (C.zf) goto L_1148a142;
  /* 1148a130 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1148a136 je 0x1148a13a */
  if (C.zf) goto L_1148a13a;
  /* 1148a138 jmp 0x1148a101 */
  goto L_1148a101;
L_1148a13a:;
  /* 1148a13a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1148a13c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148a140 pop edi */
  EDI = (pop32());
  /* 1148a141 ret  */
  ESPCHK(0x1148a080u, _esp0);
  ESP += 4; return;
L_1148a142:;
  /* 1148a142 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1148a145 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148a149 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1148a14d pop edi */
  EDI = (pop32());
  /* 1148a14e ret  */
  ESPCHK(0x1148a080u, _esp0);
  ESP += 4; return;
L_1148a14f:;
  /* 1148a14f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1148a152 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148a156 pop edi */
  EDI = (pop32());
  /* 1148a157 ret  */
  ESPCHK(0x1148a080u, _esp0);
  ESP += 4; return;
L_1148a158:;
  /* 1148a158 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1148a15a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148a15e pop edi */
  EDI = (pop32());
  /* 1148a15f ret  */
  ESPCHK(0x1148a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a160 @ 0x1148a160 (243 bytes, 91 insns) */
void f_1148a160(void) {
  FTRACE(0x1148a160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a160 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a161 mov ebp, esp */
  EBP = (ESP);
  /* 1148a163 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a166 push ebx */
  push32((uint32_t)(EBX));
  /* 1148a167 push esi */
  push32((uint32_t)(ESI));
  /* 1148a168 push edi */
  push32((uint32_t)(EDI));
  /* 1148a169 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1148a16c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1148a16f:;
  /* 1148a16f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a173 jne 0x1148a193 */
  if (!C.zf) goto L_1148a193;
  /* 1148a175 push 0x114b0428 */
  push32((uint32_t)(0x114b0428u));
  /* 1148a17a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148a17c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1148a17e push 0x114b11cc */
  push32((uint32_t)(0x114b11ccu));
  /* 1148a183 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148a185 call 0x11484860 */
  push32(0x1148a18au); f_11484860();
  /* 1148a18a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a18d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a190 jne 0x1148a193 */
  if (!C.zf) goto L_1148a193;
  /* 1148a192 int3  */
  x86_unimpl("int3 @ 0x1148a192");
L_1148a193:;
  /* 1148a193 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148a195 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148a197 jne 0x1148a16f */
  if (!C.zf) goto L_1148a16f;
L_1148a199:;
  /* 1148a199 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a19d jne 0x1148a1bd */
  if (!C.zf) goto L_1148a1bd;
  /* 1148a19f push 0x114b040c */
  push32((uint32_t)(0x114b040cu));
  /* 1148a1a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148a1a6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1148a1a8 push 0x114b11cc */
  push32((uint32_t)(0x114b11ccu));
  /* 1148a1ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1148a1af call 0x11484860 */
  push32(0x1148a1b4u); f_11484860();
  /* 1148a1b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a1b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a1ba jne 0x1148a1bd */
  if (!C.zf) goto L_1148a1bd;
  /* 1148a1bc int3  */
  x86_unimpl("int3 @ 0x1148a1bc");
L_1148a1bd:;
  /* 1148a1bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148a1bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148a1c1 jne 0x1148a199 */
  if (!C.zf) goto L_1148a199;
  /* 1148a1c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a1c6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1148a1cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a1d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a1d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1148a1d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a1d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a1dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148a1de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a1e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a1e4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1148a1e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148a1ea push ecx */
  push32((uint32_t)(ECX));
  /* 1148a1eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148a1ee push edx */
  push32((uint32_t)(EDX));
  /* 1148a1ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a1f2 push eax */
  push32((uint32_t)(EAX));
  /* 1148a1f3 call 0x11485980 */
  push32(0x1148a1f8u); f_11485980();
  /* 1148a1f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a1fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1148a1fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a201 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148a204 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a207 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a20a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1148a20d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a210 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a214 jl 0x1148a238 */
  if ((C.sf!=C.of)) goto L_1148a238;
  /* 1148a216 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a219 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148a21b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1148a21e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148a220 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148a226 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1148a229 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a22c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148a22e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a231 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a234 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1148a236 jmp 0x1148a249 */
  goto L_1148a249;
L_1148a238:;
  /* 1148a238 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148a23b push edx */
  push32((uint32_t)(EDX));
  /* 1148a23c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148a23e call 0x11485700 */
  push32(0x1148a243u); f_11485700();
  /* 1148a243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a246 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1148a249:;
  /* 1148a249 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1148a24c pop edi */
  EDI = (pop32());
  /* 1148a24d pop esi */
  ESI = (pop32());
  /* 1148a24e pop ebx */
  EBX = (pop32());
  /* 1148a24f mov esp, ebp */
  ESP = (EBP);
  /* 1148a251 pop ebp */
  EBP = (pop32());
  /* 1148a252 ret  */
  ESPCHK(0x1148a160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a260 @ 0x1148a260 (47 bytes, 17 insns) */
void f_1148a260(void) {
  FTRACE(0x1148a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a260 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a261 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a266 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1148a26a jb 0x1148a280 */
  if (C.cf) goto L_1148a280;
L_1148a26c:;
  /* 1148a26c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a272 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a277 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1148a279 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a27e jae 0x1148a26c */
  if (!C.cf) goto L_1148a26c;
L_1148a280:;
  /* 1148a280 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a282 mov eax, esp */
  EAX = (ESP);
  /* 1148a284 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1148a286 mov esp, ecx */
  ESP = (ECX);
  /* 1148a288 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148a28a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148a28d push eax */
  push32((uint32_t)(EAX));
  /* 1148a28e ret  */
  ESPCHK(0x1148a260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a290 @ 0x1148a290 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1148a290(void) {
  FTRACE(0x1148a290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a290 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a291 mov ebp, esp */
  EBP = (ESP);
  /* 1148a293 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a296 push esi */
  push32((uint32_t)(ESI));
  /* 1148a297 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a29b je 0x1148a2a3 */
  if (C.zf) goto L_1148a2a3;
  /* 1148a29d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2a1 jne 0x1148a2a8 */
  if (!C.zf) goto L_1148a2a8;
L_1148a2a3:;
  /* 1148a2a3 jmp 0x1148a478 */
  goto L_1148a478;
L_1148a2a8:;
  /* 1148a2a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2ac je 0x1148a2c4 */
  if (C.zf) goto L_1148a2c4;
  /* 1148a2ae cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2b2 je 0x1148a2c4 */
  if (C.zf) goto L_1148a2c4;
  /* 1148a2b4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2b8 je 0x1148a2c4 */
  if (C.zf) goto L_1148a2c4;
  /* 1148a2ba cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2be jne 0x1148a3a1 */
  if (!C.zf) goto L_1148a3a1;
L_1148a2c4:;
  /* 1148a2c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a2c6 call 0x1148ca30 */
  push32(0x1148a2cbu); f_1148ca30();
  /* 1148a2cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a2ce cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2d2 je 0x1148a2da */
  if (C.zf) goto L_1148a2da;
  /* 1148a2d4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2d8 jne 0x1148a31f */
  if (!C.zf) goto L_1148a31f;
L_1148a2da:;
  /* 1148a2da cmp dword ptr [0x114b666c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b666c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2e1 jne 0x1148a31f */
  if (!C.zf) goto L_1148a31f;
  /* 1148a2e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a2e5 push 0x1148a4c0 */
  push32((uint32_t)(0x1148a4c0u));
  /* 1148a2ea call dword ptr [0x114b9340] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9340))), 0x1148a2f0u);
  /* 1148a2f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a2f3 jne 0x1148a301 */
  if (!C.zf) goto L_1148a301;
  /* 1148a2f5 mov dword ptr [0x114b666c], 1 */
  w32((uint32_t)(0x114b666c), (0x1u));
  /* 1148a2ff jmp 0x1148a31f */
  goto L_1148a31f;
L_1148a301:;
  /* 1148a301 call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x1148a307u);
  /* 1148a307 mov esi, eax */
  ESI = (EAX);
  /* 1148a309 call 0x1148fae0 */
  push32(0x1148a30eu); f_1148fae0();
  /* 1148a30e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1148a310 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a312 call 0x1148cad0 */
  push32(0x1148a317u); f_1148cad0();
  /* 1148a317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a31a jmp 0x1148a478 */
  goto L_1148a478;
L_1148a31f:;
  /* 1148a31f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a322 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148a325 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148a328 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a32b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1148a32e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a332 ja 0x1148a392 */
  if ((!C.cf&&!C.zf)) goto L_1148a392;
  /* 1148a334 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148a337 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148a339 mov dl, byte ptr [eax + 0x1148a49f] */
  DL = (r8((uint32_t)(EAX + 0x1148a49f)));
  /* 1148a33f jmp dword ptr [edx*4 + 0x1148a48b] */
  switch (EDX) {
    case 0: goto L_1148a346;
    case 1: goto L_1148a380;
    case 2: goto L_1148a35a;
    case 3: goto L_1148a36d;
    case 4: goto L_1148a392;
    default: x86_unimpl("switch@0x1148a33f out of table"); return;
  }
L_1148a346:;
  /* 1148a346 mov ecx, dword ptr [0x114b665c] */
  ECX = (r32((uint32_t)(0x114b665c)));
  /* 1148a34c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148a34f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a352 mov dword ptr [0x114b665c], edx */
  w32((uint32_t)(0x114b665c), (EDX));
  /* 1148a358 jmp 0x1148a392 */
  goto L_1148a392;
L_1148a35a:;
  /* 1148a35a mov eax, dword ptr [0x114b6660] */
  EAX = (r32((uint32_t)(0x114b6660)));
  /* 1148a35f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148a362 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a365 mov dword ptr [0x114b6660], ecx */
  w32((uint32_t)(0x114b6660), (ECX));
  /* 1148a36b jmp 0x1148a392 */
  goto L_1148a392;
L_1148a36d:;
  /* 1148a36d mov edx, dword ptr [0x114b6664] */
  EDX = (r32((uint32_t)(0x114b6664)));
  /* 1148a373 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1148a376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a379 mov dword ptr [0x114b6664], eax */
  w32((uint32_t)(0x114b6664), (EAX));
  /* 1148a37e jmp 0x1148a392 */
  goto L_1148a392;
L_1148a380:;
  /* 1148a380 mov ecx, dword ptr [0x114b6668] */
  ECX = (r32((uint32_t)(0x114b6668)));
  /* 1148a386 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148a389 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a38c mov dword ptr [0x114b6668], edx */
  w32((uint32_t)(0x114b6668), (EDX));
L_1148a392:;
  /* 1148a392 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a394 call 0x1148cad0 */
  push32(0x1148a399u); f_1148cad0();
  /* 1148a399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a39c jmp 0x1148a473 */
  goto L_1148a473;
L_1148a3a1:;
  /* 1148a3a1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a3a5 je 0x1148a3b8 */
  if (C.zf) goto L_1148a3b8;
  /* 1148a3a7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a3ab je 0x1148a3b8 */
  if (C.zf) goto L_1148a3b8;
  /* 1148a3ad cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a3b1 je 0x1148a3b8 */
  if (C.zf) goto L_1148a3b8;
  /* 1148a3b3 jmp 0x1148a478 */
  goto L_1148a478;
L_1148a3b8:;
  /* 1148a3b8 call 0x11486b00 */
  push32(0x1148a3bdu); f_11486b00();
  /* 1148a3bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148a3c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a3c3 cmp dword ptr [eax + 0x50], 0x114b4110 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x114b4110u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a3ca jne 0x1148a415 */
  if (!C.zf) goto L_1148a415;
  /* 1148a3cc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1148a3d1 push 0x114b11d8 */
  push32((uint32_t)(0x114b11d8u));
  /* 1148a3d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148a3d8 mov ecx, dword ptr [0x114b4190] */
  ECX = (r32((uint32_t)(0x114b4190)));
  /* 1148a3de push ecx */
  push32((uint32_t)(ECX));
  /* 1148a3df call 0x114870c0 */
  push32(0x1148a3e4u); f_114870c0();
  /* 1148a3e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a3e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a3ea mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1148a3ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a3f0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a3f4 je 0x1148a413 */
  if (C.zf) goto L_1148a413;
  /* 1148a3f6 mov ecx, dword ptr [0x114b4190] */
  ECX = (r32((uint32_t)(0x114b4190)));
  /* 1148a3fc push ecx */
  push32((uint32_t)(ECX));
  /* 1148a3fd push 0x114b4110 */
  push32((uint32_t)(0x114b4110u));
  /* 1148a402 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a405 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1148a408 push eax */
  push32((uint32_t)(EAX));
  /* 1148a409 call 0x1148f6f0 */
  push32(0x1148a40eu); f_1148f6f0();
  /* 1148a40e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a411 jmp 0x1148a415 */
  goto L_1148a415;
L_1148a413:;
  /* 1148a413 jmp 0x1148a478 */
  goto L_1148a478;
L_1148a415:;
  /* 1148a415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a418 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1148a41b push edx */
  push32((uint32_t)(EDX));
  /* 1148a41c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a41f push eax */
  push32((uint32_t)(EAX));
  /* 1148a420 call 0x1148a7a0 */
  push32(0x1148a425u); f_1148a7a0();
  /* 1148a425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a428 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148a42b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a42f jne 0x1148a433 */
  if (!C.zf) goto L_1148a433;
  /* 1148a431 jmp 0x1148a478 */
  goto L_1148a478;
L_1148a433:;
  /* 1148a433 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a436 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1148a439 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1148a43c:;
  /* 1148a43c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a43f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148a442 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a445 jne 0x1148a473 */
  if (!C.zf) goto L_1148a473;
  /* 1148a447 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a44a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a44d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1148a450 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a453 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a456 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148a459 mov edx, dword ptr [0x114b4194] */
  EDX = (r32((uint32_t)(0x114b4194)));
  /* 1148a45f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148a462 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a465 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1148a468 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a46a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a46d jb 0x1148a471 */
  if (C.cf) goto L_1148a471;
  /* 1148a46f jmp 0x1148a473 */
  goto L_1148a473;
L_1148a471:;
  /* 1148a471 jmp 0x1148a43c */
  goto L_1148a43c;
L_1148a473:;
  /* 1148a473 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148a476 jmp 0x1148a486 */
  goto L_1148a486;
L_1148a478:;
  /* 1148a478 call 0x1148fad0 */
  push32(0x1148a47du); f_1148fad0();
  /* 1148a47d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1148a483 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1148a486:;
  /* 1148a486 pop esi */
  ESI = (pop32());
  /* 1148a487 mov esp, ebp */
  ESP = (EBP);
  /* 1148a489 pop ebp */
  EBP = (pop32());
  /* 1148a48a ret  */
  ESPCHK(0x1148a290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4c0 @ 0x1148a4c0 (146 bytes, 45 insns) */
void f_1148a4c0(void) {
  FTRACE(0x1148a4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1148a4c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a4c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a4c8 call 0x1148ca30 */
  push32(0x1148a4cdu); f_1148ca30();
  /* 1148a4cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a4d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a4d4 jne 0x1148a4ee */
  if (!C.zf) goto L_1148a4ee;
  /* 1148a4d6 mov dword ptr [ebp - 8], 0x114b665c */
  w32((uint32_t)(EBP + -0x8), (0x114b665cu));
  /* 1148a4dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a4e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148a4e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148a4e5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1148a4ec jmp 0x1148a504 */
  goto L_1148a504;
L_1148a4ee:;
  /* 1148a4ee mov dword ptr [ebp - 8], 0x114b6660 */
  w32((uint32_t)(EBP + -0x8), (0x114b6660u));
  /* 1148a4f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a4f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148a4fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148a4fd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1148a504:;
  /* 1148a504 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a508 jne 0x1148a518 */
  if (!C.zf) goto L_1148a518;
  /* 1148a50a push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a50c call 0x1148cad0 */
  push32(0x1148a511u); f_1148cad0();
  /* 1148a511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a516 jmp 0x1148a54c */
  goto L_1148a54c;
L_1148a518:;
  /* 1148a518 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a51c je 0x1148a53d */
  if (C.zf) goto L_1148a53d;
  /* 1148a51e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a521 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1148a527 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a529 call 0x1148cad0 */
  push32(0x1148a52eu); f_1148cad0();
  /* 1148a52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a534 push edx */
  push32((uint32_t)(EDX));
  /* 1148a535 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1148a538u);
  /* 1148a538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a53b jmp 0x1148a547 */
  goto L_1148a547;
L_1148a53d:;
  /* 1148a53d push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a53f call 0x1148cad0 */
  push32(0x1148a544u); f_1148cad0();
  /* 1148a544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148a547:;
  /* 1148a547 mov eax, 1 */
  EAX = (0x1u);
L_1148a54c:;
  /* 1148a54c mov esp, ebp */
  ESP = (EBP);
  /* 1148a54e pop ebp */
  EBP = (pop32());
  /* 1148a54f ret 4 */
  ESPCHK(0x1148a4c0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a560 @ 0x1148a560 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1148a560(void) {
  FTRACE(0x1148a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a560 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a561 mov ebp, esp */
  EBP = (ESP);
  /* 1148a563 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a566 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148a56d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a570 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1148a573 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148a576 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a579 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1148a57c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a580 ja 0x1148a62e */
  if ((!C.cf&&!C.zf)) goto L_1148a62e;
  /* 1148a586 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148a589 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148a58b mov dl, byte ptr [eax + 0x1148a782] */
  DL = (r8((uint32_t)(EAX + 0x1148a782)));
  /* 1148a591 jmp dword ptr [edx*4 + 0x1148a76a] */
  switch (EDX) {
    case 0: goto L_1148a598;
    case 1: goto L_1148a603;
    case 2: goto L_1148a5e9;
    case 3: goto L_1148a5b5;
    case 4: goto L_1148a5cf;
    case 5: goto L_1148a62e;
    default: x86_unimpl("switch@0x1148a591 out of table"); return;
  }
L_1148a598:;
  /* 1148a598 mov dword ptr [ebp - 0x18], 0x114b665c */
  w32((uint32_t)(EBP + -0x18), (0x114b665cu));
  /* 1148a59f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148a5a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148a5a4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148a5a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148a5aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a5ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148a5b0 jmp 0x1148a636 */
  goto L_1148a636;
L_1148a5b5:;
  /* 1148a5b5 mov dword ptr [ebp - 0x18], 0x114b6660 */
  w32((uint32_t)(EBP + -0x18), (0x114b6660u));
  /* 1148a5bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148a5bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148a5c1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148a5c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148a5c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a5ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148a5cd jmp 0x1148a636 */
  goto L_1148a636;
L_1148a5cf:;
  /* 1148a5cf mov dword ptr [ebp - 0x18], 0x114b6664 */
  w32((uint32_t)(EBP + -0x18), (0x114b6664u));
  /* 1148a5d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148a5d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148a5db mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148a5de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148a5e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a5e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148a5e7 jmp 0x1148a636 */
  goto L_1148a636;
L_1148a5e9:;
  /* 1148a5e9 mov dword ptr [ebp - 0x18], 0x114b6668 */
  w32((uint32_t)(EBP + -0x18), (0x114b6668u));
  /* 1148a5f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148a5f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148a5f5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148a5f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148a5fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a5fe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148a601 jmp 0x1148a636 */
  goto L_1148a636;
L_1148a603:;
  /* 1148a603 call 0x11486b00 */
  push32(0x1148a608u); f_11486b00();
  /* 1148a608 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148a60b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a60e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1148a611 push edx */
  push32((uint32_t)(EDX));
  /* 1148a612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a615 push eax */
  push32((uint32_t)(EAX));
  /* 1148a616 call 0x1148a7a0 */
  push32(0x1148a61bu); f_1148a7a0();
  /* 1148a61b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a61e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a621 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148a624 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148a627 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148a629 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148a62c jmp 0x1148a636 */
  goto L_1148a636;
L_1148a62e:;
  /* 1148a62e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148a631 jmp 0x1148a766 */
  goto L_1148a766;
L_1148a636:;
  /* 1148a636 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a63a je 0x1148a646 */
  if (C.zf) goto L_1148a646;
  /* 1148a63c push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a63e call 0x1148ca30 */
  push32(0x1148a643u); f_1148ca30();
  /* 1148a643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148a646:;
  /* 1148a646 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a64a jne 0x1148a663 */
  if (!C.zf) goto L_1148a663;
  /* 1148a64c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a650 je 0x1148a65c */
  if (C.zf) goto L_1148a65c;
  /* 1148a652 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a654 call 0x1148cad0 */
  push32(0x1148a659u); f_1148cad0();
  /* 1148a659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148a65c:;
  /* 1148a65c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a65e jmp 0x1148a766 */
  goto L_1148a766;
L_1148a663:;
  /* 1148a663 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a667 jne 0x1148a680 */
  if (!C.zf) goto L_1148a680;
  /* 1148a669 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a66d je 0x1148a679 */
  if (C.zf) goto L_1148a679;
  /* 1148a66f push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a671 call 0x1148cad0 */
  push32(0x1148a676u); f_1148cad0();
  /* 1148a676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148a679:;
  /* 1148a679 push 3 */
  push32((uint32_t)(0x3u));
  /* 1148a67b call 0x11486880 */
  push32(0x1148a680u); f_11486880();
L_1148a680:;
  /* 1148a680 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a684 je 0x1148a692 */
  if (C.zf) goto L_1148a692;
  /* 1148a686 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a68a je 0x1148a692 */
  if (C.zf) goto L_1148a692;
  /* 1148a68c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a690 jne 0x1148a6be */
  if (!C.zf) goto L_1148a6be;
L_1148a692:;
  /* 1148a692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a695 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1148a698 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1148a69b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a69e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1148a6a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a6a9 jne 0x1148a6be */
  if (!C.zf) goto L_1148a6be;
  /* 1148a6ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a6ae mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1148a6b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148a6b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a6b7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1148a6be:;
  /* 1148a6be cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a6c2 jne 0x1148a700 */
  if (!C.zf) goto L_1148a700;
  /* 1148a6c4 mov eax, dword ptr [0x114b4188] */
  EAX = (r32((uint32_t)(0x114b4188)));
  /* 1148a6c9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148a6cc jmp 0x1148a6d7 */
  goto L_1148a6d7;
L_1148a6ce:;
  /* 1148a6ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148a6d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a6d4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1148a6d7:;
  /* 1148a6d7 mov edx, dword ptr [0x114b4188] */
  EDX = (r32((uint32_t)(0x114b4188)));
  /* 1148a6dd add edx, dword ptr [0x114b418c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x114b418c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a6e3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a6e6 jge 0x1148a6fe */
  if ((C.sf==C.of)) goto L_1148a6fe;
  /* 1148a6e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148a6eb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148a6ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a6f1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1148a6f4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1148a6fc jmp 0x1148a6ce */
  goto L_1148a6ce;
L_1148a6fe:;
  /* 1148a6fe jmp 0x1148a709 */
  goto L_1148a709;
L_1148a700:;
  /* 1148a700 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148a703 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1148a709:;
  /* 1148a709 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a70d je 0x1148a719 */
  if (C.zf) goto L_1148a719;
  /* 1148a70f push 1 */
  push32((uint32_t)(0x1u));
  /* 1148a711 call 0x1148cad0 */
  push32(0x1148a716u); f_1148cad0();
  /* 1148a716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148a719:;
  /* 1148a719 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a71d jne 0x1148a730 */
  if (!C.zf) goto L_1148a730;
  /* 1148a71f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a722 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1148a725 push edx */
  push32((uint32_t)(EDX));
  /* 1148a726 push 8 */
  push32((uint32_t)(0x8u));
  /* 1148a728 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1148a72bu);
  /* 1148a72b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a72e jmp 0x1148a73a */
  goto L_1148a73a;
L_1148a730:;
  /* 1148a730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a733 push eax */
  push32((uint32_t)(EAX));
  /* 1148a734 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1148a737u);
  /* 1148a737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148a73a:;
  /* 1148a73a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a73e je 0x1148a74c */
  if (C.zf) goto L_1148a74c;
  /* 1148a740 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a744 je 0x1148a74c */
  if (C.zf) goto L_1148a74c;
  /* 1148a746 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a74a jne 0x1148a764 */
  if (!C.zf) goto L_1148a764;
L_1148a74c:;
  /* 1148a74c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a74f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148a752 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1148a755 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a759 jne 0x1148a764 */
  if (!C.zf) goto L_1148a764;
  /* 1148a75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a75e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a761 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1148a764:;
  /* 1148a764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148a766:;
  /* 1148a766 mov esp, ebp */
  ESP = (EBP);
  /* 1148a768 pop ebp */
  EBP = (pop32());
  /* 1148a769 ret  */
  ESPCHK(0x1148a560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7a0 @ 0x1148a7a0 (91 bytes, 35 insns) */
void f_1148a7a0(void) {
  FTRACE(0x1148a7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1148a7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a7a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a7a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148a7aa:;
  /* 1148a7aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a7ad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148a7b0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a7b3 je 0x1148a7d3 */
  if (C.zf) goto L_1148a7d3;
  /* 1148a7b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a7b8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a7bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148a7be mov ecx, dword ptr [0x114b4194] */
  ECX = (r32((uint32_t)(0x114b4194)));
  /* 1148a7c4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148a7c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a7ca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a7cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a7cf jae 0x1148a7d3 */
  if (!C.cf) goto L_1148a7d3;
  /* 1148a7d1 jmp 0x1148a7aa */
  goto L_1148a7aa;
L_1148a7d3:;
  /* 1148a7d3 mov eax, dword ptr [0x114b4194] */
  EAX = (r32((uint32_t)(0x114b4194)));
  /* 1148a7d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148a7db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a7de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a7e0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a7e3 jae 0x1148a7f5 */
  if (!C.cf) goto L_1148a7f5;
  /* 1148a7e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a7e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148a7eb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a7ee jne 0x1148a7f5 */
  if (!C.zf) goto L_1148a7f5;
  /* 1148a7f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a7f3 jmp 0x1148a7f7 */
  goto L_1148a7f7;
L_1148a7f5:;
  /* 1148a7f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148a7f7:;
  /* 1148a7f7 mov esp, ebp */
  ESP = (EBP);
  /* 1148a7f9 pop ebp */
  EBP = (pop32());
  /* 1148a7fa ret  */
  ESPCHK(0x1148a7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x1148a800 (13 bytes, 6 insns) */
void f_1148a800(void) {
  FTRACE(0x1148a800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a800 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a801 mov ebp, esp */
  EBP = (ESP);
  /* 1148a803 call 0x11486b00 */
  push32(0x1148a808u); f_11486b00();
  /* 1148a808 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a80b pop ebp */
  EBP = (pop32());
  /* 1148a80c ret  */
  ESPCHK(0x1148a800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x1148a810 (13 bytes, 6 insns) */
void f_1148a810(void) {
  FTRACE(0x1148a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a811 mov ebp, esp */
  EBP = (ESP);
  /* 1148a813 call 0x11486b00 */
  push32(0x1148a818u); f_11486b00();
  /* 1148a818 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a81b pop ebp */
  EBP = (pop32());
  /* 1148a81c ret  */
  ESPCHK(0x1148a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a820 @ 0x1148a820 (187 bytes, 54 insns) */
void f_1148a820(void) {
  FTRACE(0x1148a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a820 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a821 mov ebp, esp */
  EBP = (ESP);
  /* 1148a823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148a826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148a82d cmp dword ptr [0x114b6670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a834 jne 0x1148a893 */
  if (!C.zf) goto L_1148a893;
  /* 1148a836 push 0x114b0504 */
  push32((uint32_t)(0x114b0504u));
  /* 1148a83b call dword ptr [0x114b9378] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9378))), 0x1148a841u);
  /* 1148a841 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148a844 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a848 je 0x1148a867 */
  if (C.zf) goto L_1148a867;
  /* 1148a84a push 0x114b1208 */
  push32((uint32_t)(0x114b1208u));
  /* 1148a84f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a852 push eax */
  push32((uint32_t)(EAX));
  /* 1148a853 call dword ptr [0x114b9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9374))), 0x1148a859u);
  /* 1148a859 mov dword ptr [0x114b6670], eax */
  w32((uint32_t)(0x114b6670), (EAX));
  /* 1148a85e cmp dword ptr [0x114b6670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a865 jne 0x1148a86b */
  if (!C.zf) goto L_1148a86b;
L_1148a867:;
  /* 1148a867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a869 jmp 0x1148a8d7 */
  goto L_1148a8d7;
L_1148a86b:;
  /* 1148a86b push 0x114b11f8 */
  push32((uint32_t)(0x114b11f8u));
  /* 1148a870 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a873 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a874 call dword ptr [0x114b9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9374))), 0x1148a87au);
  /* 1148a87a mov dword ptr [0x114b6674], eax */
  w32((uint32_t)(0x114b6674), (EAX));
  /* 1148a87f push 0x114b11e4 */
  push32((uint32_t)(0x114b11e4u));
  /* 1148a884 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148a887 push edx */
  push32((uint32_t)(EDX));
  /* 1148a888 call dword ptr [0x114b9374] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9374))), 0x1148a88eu);
  /* 1148a88e mov dword ptr [0x114b6678], eax */
  w32((uint32_t)(0x114b6678), (EAX));
L_1148a893:;
  /* 1148a893 cmp dword ptr [0x114b6674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a89a je 0x1148a8a5 */
  if (C.zf) goto L_1148a8a5;
  /* 1148a89c call dword ptr [0x114b6674] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6674))), 0x1148a8a2u);
  /* 1148a8a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148a8a5:;
  /* 1148a8a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a8a9 je 0x1148a8c1 */
  if (C.zf) goto L_1148a8c1;
  /* 1148a8ab cmp dword ptr [0x114b6678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148a8b2 je 0x1148a8c1 */
  if (C.zf) goto L_1148a8c1;
  /* 1148a8b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a8b7 push eax */
  push32((uint32_t)(EAX));
  /* 1148a8b8 call dword ptr [0x114b6678] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6678))), 0x1148a8beu);
  /* 1148a8be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148a8c1:;
  /* 1148a8c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148a8c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a8c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148a8c8 push edx */
  push32((uint32_t)(EDX));
  /* 1148a8c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148a8cc push eax */
  push32((uint32_t)(EAX));
  /* 1148a8cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148a8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a8d1 call dword ptr [0x114b6670] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b6670))), 0x1148a8d7u);
L_1148a8d7:;
  /* 1148a8d7 mov esp, ebp */
  ESP = (EBP);
  /* 1148a8d9 pop ebp */
  EBP = (pop32());
  /* 1148a8da ret  */
  ESPCHK(0x1148a820u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1148a8e0 (254 bytes, 109 insns) */
void f_1148a8e0(void) {
  FTRACE(0x1148a8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a8e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1148a8e4 push edi */
  push32((uint32_t)(EDI));
  /* 1148a8e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148a8e7 je 0x1148a963 */
  if (C.zf) goto L_1148a963;
  /* 1148a8e9 push esi */
  push32((uint32_t)(ESI));
  /* 1148a8ea push ebx */
  push32((uint32_t)(EBX));
  /* 1148a8eb mov ebx, ecx */
  EBX = (ECX);
  /* 1148a8ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1148a8f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1148a8f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1148a8fb jne 0x1148a904 */
  if (!C.zf) goto L_1148a904;
  /* 1148a8fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148a900 jne 0x1148a971 */
  if (!C.zf) goto L_1148a971;
  /* 1148a902 jmp 0x1148a925 */
  goto L_1148a925;
L_1148a904:;
  /* 1148a904 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148a906 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1148a907 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148a909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148a90a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1148a90b je 0x1148a932 */
  if (C.zf) goto L_1148a932;
  /* 1148a90d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1148a90f je 0x1148a93a */
  if (C.zf) goto L_1148a93a;
  /* 1148a911 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1148a917 jne 0x1148a904 */
  if (!C.zf) goto L_1148a904;
  /* 1148a919 mov ebx, ecx */
  EBX = (ECX);
  /* 1148a91b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148a91e jne 0x1148a971 */
  if (!C.zf) goto L_1148a971;
L_1148a920:;
  /* 1148a920 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1148a923 je 0x1148a932 */
  if (C.zf) goto L_1148a932;
L_1148a925:;
  /* 1148a925 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148a927 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1148a928 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148a92a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148a92b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1148a92d je 0x1148a95e */
  if (C.zf) goto L_1148a95e;
  /* 1148a92f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1148a930 jne 0x1148a925 */
  if (!C.zf) goto L_1148a925;
L_1148a932:;
  /* 1148a932 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1148a936 pop ebx */
  EBX = (pop32());
  /* 1148a937 pop esi */
  ESI = (pop32());
  /* 1148a938 pop edi */
  EDI = (pop32());
  /* 1148a939 ret  */
  ESPCHK(0x1148a8e0u, _esp0);
  ESP += 4; return;
L_1148a93a:;
  /* 1148a93a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1148a940 je 0x1148a954 */
  if (C.zf) goto L_1148a954;
L_1148a942:;
  /* 1148a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148a944 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148a945 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1148a946 je 0x1148a9d6 */
  if (C.zf) goto L_1148a9d6;
  /* 1148a94c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1148a952 jne 0x1148a942 */
  if (!C.zf) goto L_1148a942;
L_1148a954:;
  /* 1148a954 mov ebx, ecx */
  EBX = (ECX);
  /* 1148a956 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148a959 jne 0x1148a9c7 */
  if (!C.zf) goto L_1148a9c7;
L_1148a95b:;
  /* 1148a95b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148a95d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1148a95e:;
  /* 1148a95e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1148a95f jne 0x1148a95b */
  if (!C.zf) goto L_1148a95b;
  /* 1148a961 pop ebx */
  EBX = (pop32());
  /* 1148a962 pop esi */
  ESI = (pop32());
L_1148a963:;
  /* 1148a963 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148a967 pop edi */
  EDI = (pop32());
  /* 1148a968 ret  */
  ESPCHK(0x1148a8e0u, _esp0);
  ESP += 4; return;
L_1148a969:;
  /* 1148a969 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1148a96b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a96e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1148a96f je 0x1148a920 */
  if (C.zf) goto L_1148a920;
L_1148a971:;
  /* 1148a971 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1148a976 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1148a978 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a97a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148a97d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a97f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1148a981 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a984 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1148a989 je 0x1148a969 */
  if (C.zf) goto L_1148a969;
  /* 1148a98b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1148a98d je 0x1148a9bb */
  if (C.zf) goto L_1148a9bb;
  /* 1148a98f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1148a991 je 0x1148a9b1 */
  if (C.zf) goto L_1148a9b1;
  /* 1148a993 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1148a999 je 0x1148a9a7 */
  if (C.zf) goto L_1148a9a7;
  /* 1148a99b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1148a9a1 jne 0x1148a969 */
  if (!C.zf) goto L_1148a969;
  /* 1148a9a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1148a9a5 jmp 0x1148a9bf */
  goto L_1148a9bf;
L_1148a9a7:;
  /* 1148a9a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148a9ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1148a9af jmp 0x1148a9bf */
  goto L_1148a9bf;
L_1148a9b1:;
  /* 1148a9b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148a9b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1148a9b9 jmp 0x1148a9bf */
  goto L_1148a9bf;
L_1148a9bb:;
  /* 1148a9bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148a9bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1148a9bf:;
  /* 1148a9bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a9c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148a9c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1148a9c5 je 0x1148a9d1 */
  if (C.zf) goto L_1148a9d1;
L_1148a9c7:;
  /* 1148a9c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1148a9c9:;
  /* 1148a9c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1148a9cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a9ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1148a9cf jne 0x1148a9c9 */
  if (!C.zf) goto L_1148a9c9;
L_1148a9d1:;
  /* 1148a9d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1148a9d4 jne 0x1148a95b */
  if (!C.zf) goto L_1148a95b;
L_1148a9d6:;
  /* 1148a9d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1148a9da pop ebx */
  EBX = (pop32());
  /* 1148a9db pop esi */
  ESI = (pop32());
  /* 1148a9dc pop edi */
  EDI = (pop32());
  /* 1148a9dd ret  */
  ESPCHK(0x1148a8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9e0 @ 0x1148a9e0 (31 bytes, 18 insns) */
void f_1148a9e0(void) {
  FTRACE(0x1148a9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148a9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148a9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1148a9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148a9e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1148a9e5 push esi */
  push32((uint32_t)(ESI));
  /* 1148a9e6 push edi */
  push32((uint32_t)(EDI));
  /* 1148a9e7 wait  */
  /* wait (no observable integer/reg state) */
  /* 1148a9e8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 1148a9eb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148a9ef push eax */
  push32((uint32_t)(EAX));
  /* 1148a9f0 call 0x1148add0 */
  push32(0x1148a9f5u); f_1148add0();
  /* 1148a9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148a9f8 pop edi */
  EDI = (pop32());
  /* 1148a9f9 pop esi */
  ESI = (pop32());
  /* 1148a9fa pop ebx */
  EBX = (pop32());
  /* 1148a9fb mov esp, ebp */
  ESP = (EBP);
  /* 1148a9fd pop ebp */
  EBP = (pop32());
  /* 1148a9fe ret  */
  ESPCHK(0x1148a9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa00 @ 0x1148aa00 (32 bytes, 18 insns) */
void f_1148aa00(void) {
  FTRACE(0x1148aa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148aa00 push ebp */
  push32((uint32_t)(EBP));
  /* 1148aa01 mov ebp, esp */
  EBP = (ESP);
  /* 1148aa03 push ecx */
  push32((uint32_t)(ECX));
  /* 1148aa04 push ebx */
  push32((uint32_t)(EBX));
  /* 1148aa05 push esi */
  push32((uint32_t)(ESI));
  /* 1148aa06 push edi */
  push32((uint32_t)(EDI));
  /* 1148aa07 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 1148aa0a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 1148aa0c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148aa10 push eax */
  push32((uint32_t)(EAX));
  /* 1148aa11 call 0x1148add0 */
  push32(0x1148aa16u); f_1148add0();
  /* 1148aa16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148aa19 pop edi */
  EDI = (pop32());
  /* 1148aa1a pop esi */
  ESI = (pop32());
  /* 1148aa1b pop ebx */
  EBX = (pop32());
  /* 1148aa1c mov esp, ebp */
  ESP = (EBP);
  /* 1148aa1e pop ebp */
  EBP = (pop32());
  /* 1148aa1f ret  */
  ESPCHK(0x1148aa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1148aa20 (79 bytes, 34 insns) */
void f_1148aa20(void) {
  FTRACE(0x1148aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1148aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1148aa23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148aa26 push ebx */
  push32((uint32_t)(EBX));
  /* 1148aa27 push esi */
  push32((uint32_t)(ESI));
  /* 1148aa28 push edi */
  push32((uint32_t)(EDI));
  /* 1148aa29 wait  */
  /* wait (no observable integer/reg state) */
  /* 1148aa2a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 1148aa2d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 1148aa31 push eax */
  push32((uint32_t)(EAX));
  /* 1148aa32 call 0x1148aaf0 */
  push32(0x1148aa37u); f_1148aaf0();
  /* 1148aa37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148aa3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148aa3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148aa40 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 1148aa43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148aa46 not edx */
  EDX = (~(EDX));
  /* 1148aa48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148aa4b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148aa4d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148aa4f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148aa52 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148aa55 push ecx */
  push32((uint32_t)(ECX));
  /* 1148aa56 call 0x1148ac70 */
  push32(0x1148aa5bu); f_1148ac70();
  /* 1148aa5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148aa5e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1148aa62 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 1148aa65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148aa68 pop edi */
  EDI = (pop32());
  /* 1148aa69 pop esi */
  ESI = (pop32());
  /* 1148aa6a pop ebx */
  EBX = (pop32());
  /* 1148aa6b mov esp, ebp */
  ESP = (EBP);
  /* 1148aa6d pop ebp */
  EBP = (pop32());
  /* 1148aa6e ret  */
  ESPCHK(0x1148aa20u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x1148aa70 (26 bytes, 11 insns) */
void f_1148aa70(void) {
  FTRACE(0x1148aa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148aa70 push ebp */
  push32((uint32_t)(EBP));
  /* 1148aa71 mov ebp, esp */
  EBP = (ESP);
  /* 1148aa73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148aa76 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148aa7b push eax */
  push32((uint32_t)(EAX));
  /* 1148aa7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148aa7f push ecx */
  push32((uint32_t)(ECX));
  /* 1148aa80 call 0x1148aa20 */
  push32(0x1148aa85u); f_1148aa20();
  /* 1148aa85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148aa88 pop ebp */
  EBP = (pop32());
  /* 1148aa89 ret  */
  ESPCHK(0x1148aa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa90 @ 0x1148aa90 (88 bytes, 33 insns) */
void f_1148aa90(void) {
  FTRACE(0x1148aa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148aa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1148aa91 mov ebp, esp */
  EBP = (ESP);
  /* 1148aa93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148aa96 push ebx */
  push32((uint32_t)(EBX));
  /* 1148aa97 push esi */
  push32((uint32_t)(ESI));
  /* 1148aa98 push edi */
  push32((uint32_t)(EDI));
  /* 1148aa99 call 0x1148a810 */
  push32(0x1148aa9eu); f_1148a810();
  /* 1148aa9e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1148aaa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148aaa3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 1148aaa5 call 0x11484f00 */
  push32(0x1148aaaau); f_11484f00();
  /* 1148aaaa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148aaae je 0x1148aae1 */
  if (C.zf) goto L_1148aae1;
  /* 1148aab0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148aab3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148aab6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148aab8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 1148aabd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148aabf je 0x1148aae1 */
  if (C.zf) goto L_1148aae1;
  /* 1148aac1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148aac4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148aac7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148aaca mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148aacd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148aad0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1148aad7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148aada mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_1148aae1:;
  /* 1148aae1 pop edi */
  EDI = (pop32());
  /* 1148aae2 pop esi */
  ESI = (pop32());
  /* 1148aae3 pop ebx */
  EBX = (pop32());
  /* 1148aae4 mov esp, ebp */
  ESP = (EBP);
  /* 1148aae6 pop ebp */
  EBP = (pop32());
  /* 1148aae7 ret  */
  ESPCHK(0x1148aa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaf0 @ 0x1148aaf0 (377 bytes, 115 insns) */
void f_1148aaf0(void) {
  FTRACE(0x1148aaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148aaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148aaf1 mov ebp, esp */
  EBP = (ESP);
  /* 1148aaf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148aaf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148aafd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab00 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148ab05 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ab08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ab0a je 0x1148ab15 */
  if (C.zf) goto L_1148ab15;
  /* 1148ab0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ab0f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ab12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148ab15:;
  /* 1148ab15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab18 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148ab1e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ab21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148ab23 je 0x1148ab2d */
  if (C.zf) goto L_1148ab2d;
  /* 1148ab25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ab28 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1148ab2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148ab2d:;
  /* 1148ab2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab30 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148ab36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ab39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148ab3b je 0x1148ab46 */
  if (C.zf) goto L_1148ab46;
  /* 1148ab3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ab40 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ab43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148ab46:;
  /* 1148ab46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148ab4e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ab51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ab53 je 0x1148ab5e */
  if (C.zf) goto L_1148ab5e;
  /* 1148ab55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ab58 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ab5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148ab5e:;
  /* 1148ab5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab61 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148ab67 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ab6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148ab6c je 0x1148ab76 */
  if (C.zf) goto L_1148ab76;
  /* 1148ab6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ab71 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1148ab73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148ab76:;
  /* 1148ab76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab79 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148ab7f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ab82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148ab84 je 0x1148ab92 */
  if (C.zf) goto L_1148ab92;
  /* 1148ab86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ab89 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ab8f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148ab92:;
  /* 1148ab92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ab95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148ab9a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ab9f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148aba2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148aba9 jg 0x1148abc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1148abc5;
  /* 1148abab cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148abb2 je 0x1148abd8 */
  if (C.zf) goto L_1148abd8;
  /* 1148abb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148abb8 je 0x1148abd0 */
  if (C.zf) goto L_1148abd0;
  /* 1148abba cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148abc1 je 0x1148abe3 */
  if (C.zf) goto L_1148abe3;
  /* 1148abc3 jmp 0x1148abf7 */
  goto L_1148abf7;
L_1148abc5:;
  /* 1148abc5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148abcc je 0x1148abee */
  if (C.zf) goto L_1148abee;
  /* 1148abce jmp 0x1148abf7 */
  goto L_1148abf7;
L_1148abd0:;
  /* 1148abd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148abd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148abd6 jmp 0x1148abf7 */
  goto L_1148abf7;
L_1148abd8:;
  /* 1148abd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148abdb or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1148abde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148abe1 jmp 0x1148abf7 */
  goto L_1148abf7;
L_1148abe3:;
  /* 1148abe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148abe6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1148abe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148abec jmp 0x1148abf7 */
  goto L_1148abf7;
L_1148abee:;
  /* 1148abee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148abf1 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1148abf4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148abf7:;
  /* 1148abf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148abfa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148ac00 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ac06 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1148ac09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ac0d je 0x1148ac39 */
  if (C.zf) goto L_1148ac39;
  /* 1148ac0f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ac16 je 0x1148ac2b */
  if (C.zf) goto L_1148ac2b;
  /* 1148ac18 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ac1f je 0x1148ac23 */
  if (C.zf) goto L_1148ac23;
  /* 1148ac21 jmp 0x1148ac45 */
  goto L_1148ac45;
L_1148ac23:;
  /* 1148ac23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ac26 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148ac29 jmp 0x1148ac45 */
  goto L_1148ac45;
L_1148ac2b:;
  /* 1148ac2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ac2e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ac34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148ac37 jmp 0x1148ac45 */
  goto L_1148ac45;
L_1148ac39:;
  /* 1148ac39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ac3c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ac42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148ac45:;
  /* 1148ac45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ac48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148ac4d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ac52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ac54 je 0x1148ac62 */
  if (C.zf) goto L_1148ac62;
  /* 1148ac56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ac59 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ac5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148ac62:;
  /* 1148ac62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ac65 mov esp, ebp */
  ESP = (EBP);
  /* 1148ac67 pop ebp */
  EBP = (pop32());
  /* 1148ac68 ret  */
  ESPCHK(0x1148aaf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac70 @ 0x1148ac70 (346 bytes, 106 insns) */
void f_1148ac70(void) {
  FTRACE(0x1148ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ac70 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ac71 mov ebp, esp */
  EBP = (ESP);
  /* 1148ac73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ac76 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148ac7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ac7f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ac82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ac84 je 0x1148ac91 */
  if (C.zf) goto L_1148ac91;
  /* 1148ac86 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ac8a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 1148ac8d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1148ac91:;
  /* 1148ac91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ac94 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ac97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148ac99 je 0x1148aca5 */
  if (C.zf) goto L_1148aca5;
  /* 1148ac9b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ac9f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1148aca1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_1148aca5:;
  /* 1148aca5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148aca8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1148acab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148acad je 0x1148acba */
  if (C.zf) goto L_1148acba;
  /* 1148acaf mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148acb3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1148acb6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1148acba:;
  /* 1148acba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148acbd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1148acc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148acc2 je 0x1148accf */
  if (C.zf) goto L_1148accf;
  /* 1148acc4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148acc8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1148accb mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1148accf:;
  /* 1148accf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148acd2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1148acd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148acd7 je 0x1148ace3 */
  if (C.zf) goto L_1148ace3;
  /* 1148acd9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148acdd or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1148acdf mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_1148ace3:;
  /* 1148ace3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ace6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148acec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148acee je 0x1148acfb */
  if (C.zf) goto L_1148acfb;
  /* 1148acf0 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148acf4 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 1148acf7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1148acfb:;
  /* 1148acfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148acfe and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ad03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148ad06 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad0d ja 0x1148ad29 */
  if ((!C.cf&&!C.zf)) goto L_1148ad29;
  /* 1148ad0f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad16 je 0x1148ad3e */
  if (C.zf) goto L_1148ad3e;
  /* 1148ad18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad1c je 0x1148ad34 */
  if (C.zf) goto L_1148ad34;
  /* 1148ad1e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad25 je 0x1148ad4b */
  if (C.zf) goto L_1148ad4b;
  /* 1148ad27 jmp 0x1148ad63 */
  goto L_1148ad63;
L_1148ad29:;
  /* 1148ad29 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad30 je 0x1148ad58 */
  if (C.zf) goto L_1148ad58;
  /* 1148ad32 jmp 0x1148ad63 */
  goto L_1148ad63;
L_1148ad34:;
  /* 1148ad34 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ad38 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1148ad3c jmp 0x1148ad63 */
  goto L_1148ad63;
L_1148ad3e:;
  /* 1148ad3e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ad42 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1148ad45 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 1148ad49 jmp 0x1148ad63 */
  goto L_1148ad63;
L_1148ad4b:;
  /* 1148ad4b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ad4f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1148ad52 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1148ad56 jmp 0x1148ad63 */
  goto L_1148ad63;
L_1148ad58:;
  /* 1148ad58 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ad5c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1148ad5f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1148ad63:;
  /* 1148ad63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ad66 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ad6c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1148ad6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad73 je 0x1148ad89 */
  if (C.zf) goto L_1148ad89;
  /* 1148ad75 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad7c je 0x1148ad96 */
  if (C.zf) goto L_1148ad96;
  /* 1148ad7e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ad85 je 0x1148ada3 */
  if (C.zf) goto L_1148ada3;
  /* 1148ad87 jmp 0x1148adab */
  goto L_1148adab;
L_1148ad89:;
  /* 1148ad89 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ad8d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 1148ad90 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1148ad94 jmp 0x1148adab */
  goto L_1148adab;
L_1148ad96:;
  /* 1148ad96 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ad9a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1148ad9d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1148ada1 jmp 0x1148adab */
  goto L_1148adab;
L_1148ada3:;
  /* 1148ada3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ada7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1148adab:;
  /* 1148adab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148adae and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148adb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148adb5 je 0x1148adc2 */
  if (C.zf) goto L_1148adc2;
  /* 1148adb7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148adbb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1148adbe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_1148adc2:;
  /* 1148adc2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148adc6 mov esp, ebp */
  ESP = (EBP);
  /* 1148adc8 pop ebp */
  EBP = (pop32());
  /* 1148adc9 ret  */
  ESPCHK(0x1148ac70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000add0 @ 0x1148add0 (167 bytes, 56 insns) */
void f_1148add0(void) {
  FTRACE(0x1148add0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148add0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148add1 mov ebp, esp */
  EBP = (ESP);
  /* 1148add3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148add4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148addb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148adde and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148ade3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ade6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ade8 je 0x1148adf3 */
  if (C.zf) goto L_1148adf3;
  /* 1148adea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148aded or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1148adf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148adf3:;
  /* 1148adf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148adf6 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148adfc and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1148adff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148ae01 je 0x1148ae0b */
  if (C.zf) goto L_1148ae0b;
  /* 1148ae03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ae06 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1148ae08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148ae0b:;
  /* 1148ae0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ae0e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148ae14 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ae17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148ae19 je 0x1148ae24 */
  if (C.zf) goto L_1148ae24;
  /* 1148ae1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ae1e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ae21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148ae24:;
  /* 1148ae24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ae27 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148ae2c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1148ae2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148ae31 je 0x1148ae3c */
  if (C.zf) goto L_1148ae3c;
  /* 1148ae33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ae36 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ae39 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148ae3c:;
  /* 1148ae3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ae3f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148ae45 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ae48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148ae4a je 0x1148ae54 */
  if (C.zf) goto L_1148ae54;
  /* 1148ae4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ae4f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1148ae51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148ae54:;
  /* 1148ae54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ae57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148ae5d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1148ae60 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148ae62 je 0x1148ae70 */
  if (C.zf) goto L_1148ae70;
  /* 1148ae64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ae67 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 1148ae6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148ae70:;
  /* 1148ae70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148ae73 mov esp, ebp */
  ESP = (EBP);
  /* 1148ae75 pop ebp */
  EBP = (pop32());
  /* 1148ae76 ret  */
  ESPCHK(0x1148add0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x1148ae80 (183 bytes, 58 insns) */
void f_1148ae80(void) {
  FTRACE(0x1148ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ae81 mov ebp, esp */
  EBP = (ESP);
  /* 1148ae83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ae89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ae8c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148ae91 ja 0x1148aeaa */
  if ((!C.cf&&!C.zf)) goto L_1148aeaa;
  /* 1148ae93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148ae96 mov edx, dword ptr [0x114b3b8c] */
  EDX = (r32((uint32_t)(0x114b3b8c)));
  /* 1148ae9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148ae9e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1148aea2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1148aea5 jmp 0x1148af33 */
  goto L_1148af33;
L_1148aeaa:;
  /* 1148aeaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148aead sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1148aeb0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148aeb6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148aebc mov edx, dword ptr [0x114b3b8c] */
  EDX = (r32((uint32_t)(0x114b3b8c)));
  /* 1148aec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148aec4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1148aec8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148aecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148aecf je 0x1148aef3 */
  if (C.zf) goto L_1148aef3;
  /* 1148aed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148aed4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1148aed7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148aedd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1148aee0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1148aee3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1148aee6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1148aeea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1148aef1 jmp 0x1148af04 */
  goto L_1148af04;
L_1148aef3:;
  /* 1148aef3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1148aef6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1148aef9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1148aefd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1148af04:;
  /* 1148af04 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148af06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148af08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148af0a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1148af0d push ecx */
  push32((uint32_t)(ECX));
  /* 1148af0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148af11 push edx */
  push32((uint32_t)(EDX));
  /* 1148af12 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1148af15 push eax */
  push32((uint32_t)(EAX));
  /* 1148af16 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148af18 call 0x1148faf0 */
  push32(0x1148af1du); f_1148faf0();
  /* 1148af1d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148af20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148af22 jne 0x1148af28 */
  if (!C.zf) goto L_1148af28;
  /* 1148af24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148af26 jmp 0x1148af33 */
  goto L_1148af33;
L_1148af28:;
  /* 1148af28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148af2b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148af30 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1148af33:;
  /* 1148af33 mov esp, ebp */
  ESP = (EBP);
  /* 1148af35 pop ebp */
  EBP = (pop32());
  /* 1148af36 ret  */
  ESPCHK(0x1148ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x1148af40 (11 bytes, 6 insns) */
void f_1148af40(void) {
  FTRACE(0x1148af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1148af41 mov ebp, esp */
  EBP = (ESP);
  /* 1148af43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148af46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148af49 pop ebp */
  EBP = (pop32());
  /* 1148af4a ret  */
  ESPCHK(0x1148af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af50 @ 0x1148af50 (147 bytes, 43 insns) */
void f_1148af50(void) {
  FTRACE(0x1148af50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148af50 push ebp */
  push32((uint32_t)(EBP));
  /* 1148af51 mov ebp, esp */
  EBP = (ESP);
  /* 1148af53 push ecx */
  push32((uint32_t)(ECX));
  /* 1148af54 cmp dword ptr [0x114b6704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148af5b jne 0x1148af77 */
  if (!C.zf) goto L_1148af77;
  /* 1148af5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148af61 jl 0x1148af72 */
  if ((C.sf!=C.of)) goto L_1148af72;
  /* 1148af63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148af67 jg 0x1148af72 */
  if ((!C.zf&&C.sf==C.of)) goto L_1148af72;
  /* 1148af69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148af6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148af6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1148af72:;
  /* 1148af72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148af75 jmp 0x1148afdf */
  goto L_1148afdf;
L_1148af77:;
  /* 1148af77 push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 1148af7c call dword ptr [0x114b937c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b937c))), 0x1148af82u);
  /* 1148af82 cmp dword ptr [0x114b6874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148af89 je 0x1148afa9 */
  if (C.zf) goto L_1148afa9;
  /* 1148af8b push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 1148af90 call dword ptr [0x114b936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b936c))), 0x1148af96u);
  /* 1148af96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148af98 call 0x1148ca30 */
  push32(0x1148af9du); f_1148ca30();
  /* 1148af9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148afa0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1148afa7 jmp 0x1148afb0 */
  goto L_1148afb0;
L_1148afa9:;
  /* 1148afa9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1148afb0:;
  /* 1148afb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148afb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148afb4 call 0x1148aff0 */
  push32(0x1148afb9u); f_1148aff0();
  /* 1148afb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148afbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1148afbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148afc3 je 0x1148afd1 */
  if (C.zf) goto L_1148afd1;
  /* 1148afc5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148afc7 call 0x1148cad0 */
  push32(0x1148afccu); f_1148cad0();
  /* 1148afcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148afcf jmp 0x1148afdc */
  goto L_1148afdc;
L_1148afd1:;
  /* 1148afd1 push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 1148afd6 call dword ptr [0x114b936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b936c))), 0x1148afdcu);
L_1148afdc:;
  /* 1148afdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1148afdf:;
  /* 1148afdf mov esp, ebp */
  ESP = (EBP);
  /* 1148afe1 pop ebp */
  EBP = (pop32());
  /* 1148afe2 ret  */
  ESPCHK(0x1148af50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aff0 @ 0x1148aff0 (299 bytes, 91 insns) */
void f_1148aff0(void) {
  FTRACE(0x1148aff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148aff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148aff1 mov ebp, esp */
  EBP = (ESP);
  /* 1148aff3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148aff6 cmp dword ptr [0x114b6704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148affd jne 0x1148b01c */
  if (!C.zf) goto L_1148b01c;
  /* 1148afff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b003 jl 0x1148b014 */
  if ((C.sf!=C.of)) goto L_1148b014;
  /* 1148b005 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b009 jg 0x1148b014 */
  if ((!C.zf&&C.sf==C.of)) goto L_1148b014;
  /* 1148b00b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b00e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b011 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1148b014:;
  /* 1148b014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b017 jmp 0x1148b117 */
  goto L_1148b117;
L_1148b01c:;
  /* 1148b01c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b023 jge 0x1148b063 */
  if ((C.sf==C.of)) goto L_1148b063;
  /* 1148b025 cmp dword ptr [0x114b3b80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114b3b80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b02c jle 0x1148b041 */
  if ((C.zf||C.sf!=C.of)) goto L_1148b041;
  /* 1148b02e push 1 */
  push32((uint32_t)(0x1u));
  /* 1148b030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b033 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b034 call 0x1148ae80 */
  push32(0x1148b039u); f_1148ae80();
  /* 1148b039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b03c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148b03f jmp 0x1148b055 */
  goto L_1148b055;
L_1148b041:;
  /* 1148b041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b044 mov eax, dword ptr [0x114b3b8c] */
  EAX = (r32((uint32_t)(0x114b3b8c)));
  /* 1148b049 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148b04b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1148b04f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148b052 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1148b055:;
  /* 1148b055 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b059 jne 0x1148b063 */
  if (!C.zf) goto L_1148b063;
  /* 1148b05b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b05e jmp 0x1148b117 */
  goto L_1148b117;
L_1148b063:;
  /* 1148b063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b066 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1148b069 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b06f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b075 mov eax, dword ptr [0x114b3b8c] */
  EAX = (r32((uint32_t)(0x114b3b8c)));
  /* 1148b07a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148b07c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1148b080 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148b086 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148b088 je 0x1148b0ac */
  if (C.zf) goto L_1148b0ac;
  /* 1148b08a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b08d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1148b090 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b096 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 1148b099 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1148b09c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1148b09f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 1148b0a3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1148b0aa jmp 0x1148b0bd */
  goto L_1148b0bd;
L_1148b0ac:;
  /* 1148b0ac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1148b0af mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1148b0b2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 1148b0b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1148b0bd:;
  /* 1148b0bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1148b0bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b0c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 1148b0c3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1148b0c6 push edx */
  push32((uint32_t)(EDX));
  /* 1148b0c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b0ca push eax */
  push32((uint32_t)(EAX));
  /* 1148b0cb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1148b0ce push ecx */
  push32((uint32_t)(ECX));
  /* 1148b0cf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1148b0d4 mov edx, dword ptr [0x114b6704] */
  EDX = (r32((uint32_t)(0x114b6704)));
  /* 1148b0da push edx */
  push32((uint32_t)(EDX));
  /* 1148b0db call 0x11490700 */
  push32(0x1148b0e0u); f_11490700();
  /* 1148b0e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b0e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b0e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b0ea jne 0x1148b0f1 */
  if (!C.zf) goto L_1148b0f1;
  /* 1148b0ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b0ef jmp 0x1148b117 */
  goto L_1148b117;
L_1148b0f1:;
  /* 1148b0f1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b0f5 jne 0x1148b101 */
  if (!C.zf) goto L_1148b101;
  /* 1148b0f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b0fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b0ff jmp 0x1148b117 */
  goto L_1148b117;
L_1148b101:;
  /* 1148b101 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b104 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b109 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1148b10c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148b112 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1148b115 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1148b117:;
  /* 1148b117 mov esp, ebp */
  ESP = (EBP);
  /* 1148b119 pop ebp */
  EBP = (pop32());
  /* 1148b11a ret  */
  ESPCHK(0x1148aff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b120 @ 0x1148b120 (132 bytes, 51 insns) */
void f_1148b120(void) {
  FTRACE(0x1148b120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b120 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b121 mov ebp, esp */
  EBP = (ESP);
  /* 1148b123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b126 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b129 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1148b12a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b12d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b12f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148b132 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148b135 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b138 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b13d jns 0x1148b144 */
  if (!C.sf) goto L_1148b144;
  /* 1148b13f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148b140 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 1148b143 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1148b144:;
  /* 1148b144 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 1148b149 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b14b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148b14e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b151 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b154 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b156 not edx */
  EDX = (~(EDX));
  /* 1148b158 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148b15b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b15e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b161 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1148b164 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1148b167 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148b169 je 0x1148b16f */
  if (C.zf) goto L_1148b16f;
  /* 1148b16b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b16d jmp 0x1148b1a0 */
  goto L_1148b1a0;
L_1148b16f:;
  /* 1148b16f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b172 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b175 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148b178 jmp 0x1148b183 */
  goto L_1148b183;
L_1148b17a:;
  /* 1148b17a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b17d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b180 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1148b183:;
  /* 1148b183 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b187 jge 0x1148b19b */
  if ((C.sf==C.of)) goto L_1148b19b;
  /* 1148b189 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b18c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b18f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b193 je 0x1148b199 */
  if (C.zf) goto L_1148b199;
  /* 1148b195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b197 jmp 0x1148b1a0 */
  goto L_1148b1a0;
L_1148b199:;
  /* 1148b199 jmp 0x1148b17a */
  goto L_1148b17a;
L_1148b19b:;
  /* 1148b19b mov eax, 1 */
  EAX = (0x1u);
L_1148b1a0:;
  /* 1148b1a0 mov esp, ebp */
  ESP = (EBP);
  /* 1148b1a2 pop ebp */
  EBP = (pop32());
  /* 1148b1a3 ret  */
  ESPCHK(0x1148b120u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x1148b1b0 (168 bytes, 63 insns) */
void f_1148b1b0(void) {
  FTRACE(0x1148b1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1148b1b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b1b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b1b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1148b1ba and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b1bd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b1bf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148b1c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148b1c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b1c8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b1cd jns 0x1148b1d4 */
  if (!C.sf) goto L_1148b1d4;
  /* 1148b1cf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148b1d0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 1148b1d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1148b1d4:;
  /* 1148b1d4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 1148b1d9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b1db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148b1de mov edx, 1 */
  EDX = (0x1u);
  /* 1148b1e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b1e6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b1e8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148b1eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b1f1 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 1148b1f4 push edx */
  push32((uint32_t)(EDX));
  /* 1148b1f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b1f8 push eax */
  push32((uint32_t)(EAX));
  /* 1148b1f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b1fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b1ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1148b202 push eax */
  push32((uint32_t)(EAX));
  /* 1148b203 call 0x11490a60 */
  push32(0x1148b208u); f_11490a60();
  /* 1148b208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b20b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148b20e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b211 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b214 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148b217 jmp 0x1148b222 */
  goto L_1148b222;
L_1148b219:;
  /* 1148b219 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b21c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b21f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1148b222:;
  /* 1148b222 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b226 jl 0x1148b251 */
  if ((C.sf!=C.of)) goto L_1148b251;
  /* 1148b228 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b22c je 0x1148b251 */
  if (C.zf) goto L_1148b251;
  /* 1148b22e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b234 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 1148b237 push edx */
  push32((uint32_t)(EDX));
  /* 1148b238 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148b23a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b240 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1148b243 push edx */
  push32((uint32_t)(EDX));
  /* 1148b244 call 0x11490a60 */
  push32(0x1148b249u); f_11490a60();
  /* 1148b249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b24c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148b24f jmp 0x1148b219 */
  goto L_1148b219;
L_1148b251:;
  /* 1148b251 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148b254 mov esp, ebp */
  ESP = (EBP);
  /* 1148b256 pop ebp */
  EBP = (pop32());
  /* 1148b257 ret  */
  ESPCHK(0x1148b1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x1148b260 (219 bytes, 78 insns) */
void f_1148b260(void) {
  FTRACE(0x1148b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b260 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b261 mov ebp, esp */
  EBP = (ESP);
  /* 1148b263 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b266 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1148b26d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b270 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b279 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b27c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148b27f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b282 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1148b283 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b286 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b288 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148b28b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1148b28e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b291 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b297 jns 0x1148b29e */
  if (!C.sf) goto L_1148b29e;
  /* 1148b299 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1148b29a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 1148b29d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_1148b29e:;
  /* 1148b29e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 1148b2a3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b2a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148b2a8 mov edx, 1 */
  EDX = (0x1u);
  /* 1148b2ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b2b0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b2b2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148b2b5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148b2b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b2bb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1148b2be and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 1148b2c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148b2c3 je 0x1148b2ef */
  if (C.zf) goto L_1148b2ef;
  /* 1148b2c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b2c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b2cb push eax */
  push32((uint32_t)(EAX));
  /* 1148b2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b2cf push ecx */
  push32((uint32_t)(ECX));
  /* 1148b2d0 call 0x1148b120 */
  push32(0x1148b2d5u); f_1148b120();
  /* 1148b2d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b2d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148b2da jne 0x1148b2ef */
  if (!C.zf) goto L_1148b2ef;
  /* 1148b2dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b2df push edx */
  push32((uint32_t)(EDX));
  /* 1148b2e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1148b2e4 call 0x1148b1b0 */
  push32(0x1148b2e9u); f_1148b1b0();
  /* 1148b2e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b2ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1148b2ef:;
  /* 1148b2ef or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b2f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b2f5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b2f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148b2fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b2fd mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1148b300 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b302 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148b305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b308 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1148b30b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148b30e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b311 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148b314 jmp 0x1148b31f */
  goto L_1148b31f;
L_1148b316:;
  /* 1148b316 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148b319 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b31c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1148b31f:;
  /* 1148b31f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b323 jge 0x1148b334 */
  if ((C.sf==C.of)) goto L_1148b334;
  /* 1148b325 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148b328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b32b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 1148b332 jmp 0x1148b316 */
  goto L_1148b316;
L_1148b334:;
  /* 1148b334 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148b337 mov esp, ebp */
  ESP = (EBP);
  /* 1148b339 pop ebp */
  EBP = (pop32());
  /* 1148b33a ret  */
  ESPCHK(0x1148b260u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x1148b340 (76 bytes, 28 insns) */
void f_1148b340(void) {
  FTRACE(0x1148b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b341 mov ebp, esp */
  EBP = (ESP);
  /* 1148b343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b346 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b349 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b34c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b34f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148b352 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148b359 jmp 0x1148b364 */
  goto L_1148b364;
L_1148b35b:;
  /* 1148b35b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b35e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b361 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1148b364:;
  /* 1148b364 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b368 jge 0x1148b388 */
  if ((C.sf==C.of)) goto L_1148b388;
  /* 1148b36a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b36d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b370 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148b372 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1148b374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b377 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b37a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148b37d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b380 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b383 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148b386 jmp 0x1148b35b */
  goto L_1148b35b;
L_1148b388:;
  /* 1148b388 mov esp, ebp */
  ESP = (EBP);
  /* 1148b38a pop ebp */
  EBP = (pop32());
  /* 1148b38b ret  */
  ESPCHK(0x1148b340u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x1148b390 (47 bytes, 17 insns) */
void f_1148b390(void) {
  FTRACE(0x1148b390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b390 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b391 mov ebp, esp */
  EBP = (ESP);
  /* 1148b393 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b394 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148b39b jmp 0x1148b3a6 */
  goto L_1148b3a6;
L_1148b39d:;
  /* 1148b39d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b3a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b3a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148b3a6:;
  /* 1148b3a6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b3aa jge 0x1148b3bb */
  if ((C.sf==C.of)) goto L_1148b3bb;
  /* 1148b3ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b3af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b3b2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 1148b3b9 jmp 0x1148b39d */
  goto L_1148b39d;
L_1148b3bb:;
  /* 1148b3bb mov esp, ebp */
  ESP = (EBP);
  /* 1148b3bd pop ebp */
  EBP = (pop32());
  /* 1148b3be ret  */
  ESPCHK(0x1148b390u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x1148b3c0 (55 bytes, 21 insns) */
void f_1148b3c0(void) {
  FTRACE(0x1148b3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1148b3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b3c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148b3cb jmp 0x1148b3d6 */
  goto L_1148b3d6;
L_1148b3cd:;
  /* 1148b3cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b3d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b3d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148b3d6:;
  /* 1148b3d6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b3da jge 0x1148b3ee */
  if ((C.sf==C.of)) goto L_1148b3ee;
  /* 1148b3dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b3df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b3e2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b3e6 je 0x1148b3ec */
  if (C.zf) goto L_1148b3ec;
  /* 1148b3e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b3ea jmp 0x1148b3f3 */
  goto L_1148b3f3;
L_1148b3ec:;
  /* 1148b3ec jmp 0x1148b3cd */
  goto L_1148b3cd;
L_1148b3ee:;
  /* 1148b3ee mov eax, 1 */
  EAX = (0x1u);
L_1148b3f3:;
  /* 1148b3f3 mov esp, ebp */
  ESP = (EBP);
  /* 1148b3f5 pop ebp */
  EBP = (pop32());
  /* 1148b3f6 ret  */
  ESPCHK(0x1148b3c0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x1148b400 (236 bytes, 82 insns) */
void f_1148b400(void) {
  FTRACE(0x1148b400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b400 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b401 mov ebp, esp */
  EBP = (ESP);
  /* 1148b403 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b406 push esi */
  push32((uint32_t)(ESI));
  /* 1148b407 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b40a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1148b40b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b40e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b410 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148b413 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148b416 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b419 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b41e jns 0x1148b425 */
  if (!C.sf) goto L_1148b425;
  /* 1148b420 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148b421 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 1148b424 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1148b425:;
  /* 1148b425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b428 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b42b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b42e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b430 not edx */
  EDX = (~(EDX));
  /* 1148b432 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1148b435 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148b43c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148b443 jmp 0x1148b44e */
  goto L_1148b44e;
L_1148b445:;
  /* 1148b445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b448 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b44b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1148b44e:;
  /* 1148b44e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b452 jge 0x1148b4a1 */
  if ((C.sf==C.of)) goto L_1148b4a1;
  /* 1148b454 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b457 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b45a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1148b45d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 1148b460 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148b463 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b469 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1148b46c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b46f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1148b471 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b477 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1148b47a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b47d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b480 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1148b483 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1148b486 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b48c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1148b48f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 1148b494 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b497 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148b49a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b49c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148b49f jmp 0x1148b445 */
  goto L_1148b445;
L_1148b4a1:;
  /* 1148b4a1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 1148b4a8 jmp 0x1148b4b3 */
  goto L_1148b4b3;
L_1148b4aa:;
  /* 1148b4aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b4ad sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b4b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1148b4b3:;
  /* 1148b4b3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b4b7 jl 0x1148b4e7 */
  if ((C.sf!=C.of)) goto L_1148b4e7;
  /* 1148b4b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b4bc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b4bf jl 0x1148b4d8 */
  if ((C.sf!=C.of)) goto L_1148b4d8;
  /* 1148b4c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b4c4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b4c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b4ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b4cd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b4d0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 1148b4d3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1148b4d6 jmp 0x1148b4e5 */
  goto L_1148b4e5;
L_1148b4d8:;
  /* 1148b4d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b4db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b4de mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1148b4e5:;
  /* 1148b4e5 jmp 0x1148b4aa */
  goto L_1148b4aa;
L_1148b4e7:;
  /* 1148b4e7 pop esi */
  ESI = (pop32());
  /* 1148b4e8 mov esp, ebp */
  ESP = (EBP);
  /* 1148b4ea pop ebp */
  EBP = (pop32());
  /* 1148b4eb ret  */
  ESPCHK(0x1148b400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f0 @ 0x1148b4f0 (578 bytes, 188 insns) */
void f_1148b4f0(void) {
  FTRACE(0x1148b4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1148b4f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b4f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b4f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148b4fb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 1148b4ff and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148b505 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b50b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148b50e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b511 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b513 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 1148b517 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148b51c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1148b51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b522 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 1148b525 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1148b528 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b52b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1148b52e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1148b531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b536 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1148b539 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1148b53c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1148b53f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b546 jne 0x1148b580 */
  if (!C.zf) goto L_1148b580;
  /* 1148b548 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148b54f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 1148b552 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b553 call 0x1148b3c0 */
  push32(0x1148b558u); f_1148b3c0();
  /* 1148b558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b55b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148b55d je 0x1148b568 */
  if (C.zf) goto L_1148b568;
  /* 1148b55f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1148b566 jmp 0x1148b57b */
  goto L_1148b57b;
L_1148b568:;
  /* 1148b568 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1148b56b push edx */
  push32((uint32_t)(EDX));
  /* 1148b56c call 0x1148b390 */
  push32(0x1148b571u); f_1148b390();
  /* 1148b571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b574 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_1148b57b:;
  /* 1148b57b jmp 0x1148b6cc */
  goto L_1148b6cc;
L_1148b580:;
  /* 1148b580 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1148b583 push eax */
  push32((uint32_t)(EAX));
  /* 1148b584 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 1148b587 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b588 call 0x1148b340 */
  push32(0x1148b58du); f_1148b340();
  /* 1148b58d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b590 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b593 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148b596 push eax */
  push32((uint32_t)(EAX));
  /* 1148b597 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 1148b59a push ecx */
  push32((uint32_t)(ECX));
  /* 1148b59b call 0x1148b260 */
  push32(0x1148b5a0u); f_1148b260();
  /* 1148b5a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b5a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148b5a5 je 0x1148b5b0 */
  if (C.zf) goto L_1148b5b0;
  /* 1148b5a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b5aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b5ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148b5b0:;
  /* 1148b5b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b5b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b5b6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148b5b9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b5bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b5bf jge 0x1148b5e0 */
  if ((C.sf==C.of)) goto L_1148b5e0;
  /* 1148b5c1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1148b5c4 push eax */
  push32((uint32_t)(EAX));
  /* 1148b5c5 call 0x1148b390 */
  push32(0x1148b5cau); f_1148b390();
  /* 1148b5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b5cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148b5d4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1148b5db jmp 0x1148b6cc */
  goto L_1148b6cc;
L_1148b5e0:;
  /* 1148b5e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b5e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b5e6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b5e9 jg 0x1148b650 */
  if ((!C.zf&&C.sf==C.of)) goto L_1148b650;
  /* 1148b5eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b5ee mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148b5f1 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b5f4 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 1148b5f7 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 1148b5fa push edx */
  push32((uint32_t)(EDX));
  /* 1148b5fb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1148b5fe push eax */
  push32((uint32_t)(EAX));
  /* 1148b5ff call 0x1148b340 */
  push32(0x1148b604u); f_1148b340();
  /* 1148b604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b607 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1148b60a push ecx */
  push32((uint32_t)(ECX));
  /* 1148b60b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1148b60e push edx */
  push32((uint32_t)(EDX));
  /* 1148b60f call 0x1148b400 */
  push32(0x1148b614u); f_1148b400();
  /* 1148b614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b617 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b61a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1148b61d push ecx */
  push32((uint32_t)(ECX));
  /* 1148b61e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1148b621 push edx */
  push32((uint32_t)(EDX));
  /* 1148b622 call 0x1148b260 */
  push32(0x1148b627u); f_1148b260();
  /* 1148b627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b62a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b62d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1148b630 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b633 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b634 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1148b637 push edx */
  push32((uint32_t)(EDX));
  /* 1148b638 call 0x1148b400 */
  push32(0x1148b63du); f_1148b400();
  /* 1148b63d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b640 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148b647 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 1148b64e jmp 0x1148b6cc */
  goto L_1148b6cc;
L_1148b650:;
  /* 1148b650 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b656 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b658 jl 0x1148b69b */
  if ((C.sf!=C.of)) goto L_1148b69b;
  /* 1148b65a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 1148b65d push edx */
  push32((uint32_t)(EDX));
  /* 1148b65e call 0x1148b390 */
  push32(0x1148b663u); f_1148b390();
  /* 1148b663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b666 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148b669 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148b66e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148b671 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b674 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148b677 push edx */
  push32((uint32_t)(EDX));
  /* 1148b678 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1148b67b push eax */
  push32((uint32_t)(EAX));
  /* 1148b67c call 0x1148b400 */
  push32(0x1148b681u); f_1148b400();
  /* 1148b681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b684 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b687 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148b689 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b68c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b68f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148b692 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1148b699 jmp 0x1148b6cc */
  goto L_1148b6cc;
L_1148b69b:;
  /* 1148b69b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b69e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b6a1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b6a4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148b6a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148b6aa and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b6af mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1148b6b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b6b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148b6b8 push edx */
  push32((uint32_t)(EDX));
  /* 1148b6b9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1148b6bc push eax */
  push32((uint32_t)(EAX));
  /* 1148b6bd call 0x1148b400 */
  push32(0x1148b6c2u); f_1148b400();
  /* 1148b6c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b6c5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_1148b6cc:;
  /* 1148b6cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b6cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148b6d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b6d5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 1148b6da sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b6dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148b6df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b6e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b6e5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1148b6e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148b6ea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b6ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1148b6ef neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148b6f1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b6f3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148b6f9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b6fb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1148b6fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b701 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b705 jne 0x1148b71a */
  if (!C.zf) goto L_1148b71a;
  /* 1148b707 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b70a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148b70d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1148b710 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b713 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148b716 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1148b718 jmp 0x1148b72b */
  goto L_1148b72b;
L_1148b71a:;
  /* 1148b71a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b71d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b721 jne 0x1148b72b */
  if (!C.zf) goto L_1148b72b;
  /* 1148b723 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b726 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1148b729 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_1148b72b:;
  /* 1148b72b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1148b72e mov esp, ebp */
  ESP = (EBP);
  /* 1148b730 pop ebp */
  EBP = (pop32());
  /* 1148b731 ret  */
  ESPCHK(0x1148b4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b740 @ 0x1148b740 (26 bytes, 11 insns) */
void f_1148b740(void) {
  FTRACE(0x1148b740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b740 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b741 mov ebp, esp */
  EBP = (ESP);
  /* 1148b743 push 0x114b3d98 */
  push32((uint32_t)(0x114b3d98u));
  /* 1148b748 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b74b push eax */
  push32((uint32_t)(EAX));
  /* 1148b74c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b74f push ecx */
  push32((uint32_t)(ECX));
  /* 1148b750 call 0x1148b4f0 */
  push32(0x1148b755u); f_1148b4f0();
  /* 1148b755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b758 pop ebp */
  EBP = (pop32());
  /* 1148b759 ret  */
  ESPCHK(0x1148b740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b760 @ 0x1148b760 (26 bytes, 11 insns) */
void f_1148b760(void) {
  FTRACE(0x1148b760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b760 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b761 mov ebp, esp */
  EBP = (ESP);
  /* 1148b763 push 0x114b3db0 */
  push32((uint32_t)(0x114b3db0u));
  /* 1148b768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b76b push eax */
  push32((uint32_t)(EAX));
  /* 1148b76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b76f push ecx */
  push32((uint32_t)(ECX));
  /* 1148b770 call 0x1148b4f0 */
  push32(0x1148b775u); f_1148b4f0();
  /* 1148b775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b778 pop ebp */
  EBP = (pop32());
  /* 1148b779 ret  */
  ESPCHK(0x1148b760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x1148b780 (191 bytes, 58 insns) */
void f_1148b780(void) {
  FTRACE(0x1148b780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b780 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b781 mov ebp, esp */
  EBP = (ESP);
  /* 1148b783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b786 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1148b78d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b790 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148b792 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 1148b796 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148b79c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1148b7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b7a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b7a5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 1148b7a9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148b7ae mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 1148b7b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b7b5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 1148b7b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1148b7bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b7be mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1148b7c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1148b7c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b7c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148b7c9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1148b7cc shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1148b7cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148b7d2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1148b7d4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1148b7d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b7d8 call 0x1148b260 */
  push32(0x1148b7ddu); f_1148b260();
  /* 1148b7dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b7e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148b7e2 je 0x1148b7f7 */
  if (C.zf) goto L_1148b7f7;
  /* 1148b7e4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 1148b7eb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148b7ef add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 1148b7f3 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1148b7f7:;
  /* 1148b7f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b7fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b7ff cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b804 jne 0x1148b80d */
  if (!C.zf) goto L_1148b80d;
  /* 1148b806 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1148b80d:;
  /* 1148b80d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b810 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148b813 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1148b816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b819 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148b81c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148b81e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148b821 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148b827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b82a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148b82f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1148b831 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b834 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 1148b838 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148b83b mov esp, ebp */
  ESP = (EBP);
  /* 1148b83d pop ebp */
  EBP = (pop32());
  /* 1148b83e ret  */
  ESPCHK(0x1148b780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x1148b840 (54 bytes, 24 insns) */
void f_1148b840(void) {
  FTRACE(0x1148b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b840 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b841 mov ebp, esp */
  EBP = (ESP);
  /* 1148b843 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b846 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b84a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b84c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b84e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b851 push eax */
  push32((uint32_t)(EAX));
  /* 1148b852 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1148b855 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b856 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1148b859 push edx */
  push32((uint32_t)(EDX));
  /* 1148b85a call 0x11490d60 */
  push32(0x1148b85fu); f_11490d60();
  /* 1148b85f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b865 push eax */
  push32((uint32_t)(EAX));
  /* 1148b866 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1148b869 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b86a call 0x1148b740 */
  push32(0x1148b86fu); f_1148b740();
  /* 1148b86f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b872 mov esp, ebp */
  ESP = (EBP);
  /* 1148b874 pop ebp */
  EBP = (pop32());
  /* 1148b875 ret  */
  ESPCHK(0x1148b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x1148b880 (54 bytes, 24 insns) */
void f_1148b880(void) {
  FTRACE(0x1148b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b880 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b881 mov ebp, esp */
  EBP = (ESP);
  /* 1148b883 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b886 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b88a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b88c push 1 */
  push32((uint32_t)(0x1u));
  /* 1148b88e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b891 push eax */
  push32((uint32_t)(EAX));
  /* 1148b892 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1148b895 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b896 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1148b899 push edx */
  push32((uint32_t)(EDX));
  /* 1148b89a call 0x11490d60 */
  push32(0x1148b89fu); f_11490d60();
  /* 1148b89f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b8a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b8a5 push eax */
  push32((uint32_t)(EAX));
  /* 1148b8a6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1148b8a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b8aa call 0x1148b780 */
  push32(0x1148b8afu); f_1148b780();
  /* 1148b8af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b8b2 mov esp, ebp */
  ESP = (EBP);
  /* 1148b8b4 pop ebp */
  EBP = (pop32());
  /* 1148b8b5 ret  */
  ESPCHK(0x1148b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x1148b8c0 (54 bytes, 24 insns) */
void f_1148b8c0(void) {
  FTRACE(0x1148b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1148b8c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b8c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b8c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b8ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b8cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1148b8ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b8d1 push eax */
  push32((uint32_t)(EAX));
  /* 1148b8d2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1148b8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b8d6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1148b8d9 push edx */
  push32((uint32_t)(EDX));
  /* 1148b8da call 0x11490d60 */
  push32(0x1148b8dfu); f_11490d60();
  /* 1148b8df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b8e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b8e5 push eax */
  push32((uint32_t)(EAX));
  /* 1148b8e6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1148b8e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b8ea call 0x1148b760 */
  push32(0x1148b8efu); f_1148b760();
  /* 1148b8ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b8f2 mov esp, ebp */
  ESP = (EBP);
  /* 1148b8f4 pop ebp */
  EBP = (pop32());
  /* 1148b8f5 ret  */
  ESPCHK(0x1148b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b900 @ 0x1148b900 (250 bytes, 90 insns) */
void f_1148b900(void) {
  FTRACE(0x1148b900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148b900 push ebp */
  push32((uint32_t)(EBP));
  /* 1148b901 mov ebp, esp */
  EBP = (ESP);
  /* 1148b903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b90c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b90f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148b912 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148b915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b918 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1148b91b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b91e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b921 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1148b924:;
  /* 1148b924 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b928 jle 0x1148b96b */
  if ((C.zf||C.sf!=C.of)) goto L_1148b96b;
  /* 1148b92a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b92d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1148b930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148b932 je 0x1148b948 */
  if (C.zf) goto L_1148b948;
  /* 1148b934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b937 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1148b93a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1148b93d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b940 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b943 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148b946 jmp 0x1148b94f */
  goto L_1148b94f;
L_1148b948:;
  /* 1148b948 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_1148b94f:;
  /* 1148b94f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b952 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1148b955 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1148b957 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b95a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b95d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b960 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148b963 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b966 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1148b969 jmp 0x1148b924 */
  goto L_1148b924;
L_1148b96b:;
  /* 1148b96b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b96e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1148b971 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b975 jl 0x1148b9b4 */
  if ((C.sf!=C.of)) goto L_1148b9b4;
  /* 1148b977 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148b97a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148b97d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b980 jl 0x1148b9b4 */
  if ((C.sf!=C.of)) goto L_1148b9b4;
  /* 1148b982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b985 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b988 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148b98b:;
  /* 1148b98b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b98e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1148b991 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b994 jne 0x1148b9a7 */
  if (!C.zf) goto L_1148b9a7;
  /* 1148b996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b999 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1148b99c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b99f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148b9a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148b9a5 jmp 0x1148b98b */
  goto L_1148b98b;
L_1148b9a7:;
  /* 1148b9a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b9aa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1148b9ac add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1148b9af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148b9b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_1148b9b4:;
  /* 1148b9b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b9b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1148b9ba cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148b9bd jne 0x1148b9d0 */
  if (!C.zf) goto L_1148b9d0;
  /* 1148b9bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b9c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148b9c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b9c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148b9cb mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1148b9ce jmp 0x1148b9f6 */
  goto L_1148b9f6;
L_1148b9d0:;
  /* 1148b9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b9d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b9d6 push eax */
  push32((uint32_t)(EAX));
  /* 1148b9d7 call 0x11489ef0 */
  push32(0x1148b9dcu); f_11489ef0();
  /* 1148b9dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b9df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b9e2 push eax */
  push32((uint32_t)(EAX));
  /* 1148b9e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b9e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148b9e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1148b9ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148b9ed push edx */
  push32((uint32_t)(EDX));
  /* 1148b9ee call 0x1148bc50 */
  push32(0x1148b9f3u); f_1148bc50();
  /* 1148b9f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148b9f6:;
  /* 1148b9f6 mov esp, ebp */
  ESP = (EBP);
  /* 1148b9f8 pop ebp */
  EBP = (pop32());
  /* 1148b9f9 ret  */
  ESPCHK(0x1148b900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x1148ba00 (119 bytes, 44 insns) */
void f_1148ba00(void) {
  FTRACE(0x1148ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ba01 mov ebp, esp */
  EBP = (ESP);
  /* 1148ba03 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ba06 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1148ba09 push eax */
  push32((uint32_t)(EAX));
  /* 1148ba0a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 1148ba0d push ecx */
  push32((uint32_t)(ECX));
  /* 1148ba0e call 0x1148ba80 */
  push32(0x1148ba13u); f_1148ba80();
  /* 1148ba13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ba16 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 1148ba19 push edx */
  push32((uint32_t)(EDX));
  /* 1148ba1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1148ba1c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1148ba1e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ba21 mov eax, esp */
  EAX = (ESP);
  /* 1148ba23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148ba26 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148ba28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148ba2b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1148ba2e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148ba32 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 1148ba36 call 0x114918e0 */
  push32(0x1148ba3bu); f_114918e0();
  /* 1148ba3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ba3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148ba41 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1148ba44 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 1148ba48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148ba4b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1148ba4d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 1148ba51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148ba54 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1148ba57 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 1148ba5a push ecx */
  push32((uint32_t)(ECX));
  /* 1148ba5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148ba5e push edx */
  push32((uint32_t)(EDX));
  /* 1148ba5f call 0x1148a070 */
  push32(0x1148ba64u); f_1148a070();
  /* 1148ba64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148ba67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148ba6a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1148ba6d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1148ba70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148ba73 mov esp, ebp */
  ESP = (EBP);
  /* 1148ba75 pop ebp */
  EBP = (pop32());
  /* 1148ba76 ret  */
  ESPCHK(0x1148ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba80 @ 0x1148ba80 (354 bytes, 104 insns) */
void f_1148ba80(void) {
  FTRACE(0x1148ba80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148ba80 push ebp */
  push32((uint32_t)(EBP));
  /* 1148ba81 mov ebp, esp */
  EBP = (ESP);
  /* 1148ba83 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148ba86 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 1148ba8d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148ba93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148ba96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148ba98 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 1148ba9c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1148baa2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1148baa5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 1148baa9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148baac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148baae mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 1148bab2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1148bab7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 1148babb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148babe mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1148bac1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148bac7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1148baca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148bacd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1148bacf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1148bad2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1148bad5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1148badb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1148bade cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bae2 je 0x1148baf7 */
  if (C.zf) goto L_1148baf7;
  /* 1148bae4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148baeb je 0x1148baef */
  if (C.zf) goto L_1148baef;
  /* 1148baed jmp 0x1148bb3a */
  goto L_1148bb3a;
L_1148baef:;
  /* 1148baef mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 1148baf5 jmp 0x1148bb55 */
  goto L_1148bb55;
L_1148baf7:;
  /* 1148baf7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bafb jne 0x1148bb24 */
  if (!C.zf) goto L_1148bb24;
  /* 1148bafd cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bb01 jne 0x1148bb24 */
  if (!C.zf) goto L_1148bb24;
  /* 1148bb03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb06 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1148bb0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb10 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1148bb16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb19 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 1148bb1f jmp 0x1148bbde */
  goto L_1148bbde;
L_1148bb24:;
  /* 1148bb24 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 1148bb28 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bb2d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1148bb31 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148bb38 jmp 0x1148bb55 */
  goto L_1148bb55;
L_1148bb3a:;
  /* 1148bb3a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1148bb3e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1148bb43 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 1148bb47 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 1148bb4b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bb51 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_1148bb55:;
  /* 1148bb55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148bb58 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 1148bb5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148bb5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1148bb60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148bb63 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 1148bb66 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1148bb68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb6b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1148bb6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148bb71 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 1148bb74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1148bb79:;
  /* 1148bb79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1148bb7f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1148bb85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148bb87 jne 0x1148bbc4 */
  if (!C.zf) goto L_1148bbc4;
  /* 1148bb89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb8c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1148bb8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1148bb91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bb94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1148bb96 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 1148bb9c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148bb9e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148bba0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148bba2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1148bba4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bba7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1148bbaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bbad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1148bbaf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1148bbb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bbb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1148bbb6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 1148bbba sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 1148bbbe mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 1148bbc2 jmp 0x1148bb79 */
  goto L_1148bb79;
L_1148bbc4:;
  /* 1148bbc4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1148bbc7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148bbcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148bbcf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1148bbd5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1148bbd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bbda mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_1148bbde:;
  /* 1148bbde mov esp, ebp */
  ESP = (EBP);
  /* 1148bbe0 pop ebp */
  EBP = (pop32());
  /* 1148bbe1 ret  */
  ESPCHK(0x1148ba80u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1148bbf0 (88 bytes, 40 insns) */
void f_1148bbf0(void) {
  FTRACE(0x1148bbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148bbf0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1148bbf4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1148bbf8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148bbfa je 0x1148bc43 */
  if (C.zf) goto L_1148bc43;
  /* 1148bbfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148bbfe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1148bc02 push edi */
  push32((uint32_t)(EDI));
  /* 1148bc03 mov edi, ecx */
  EDI = (ECX);
  /* 1148bc05 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bc08 jb 0x1148bc37 */
  if (C.cf) goto L_1148bc37;
  /* 1148bc0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148bc0c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1148bc0f je 0x1148bc19 */
  if (C.zf) goto L_1148bc19;
  /* 1148bc11 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1148bc13:;
  /* 1148bc13 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bc15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148bc16 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1148bc17 jne 0x1148bc13 */
  if (!C.zf) goto L_1148bc13;
L_1148bc19:;
  /* 1148bc19 mov ecx, eax */
  ECX = (EAX);
  /* 1148bc1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1148bc1e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bc20 mov ecx, eax */
  ECX = (EAX);
  /* 1148bc22 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1148bc25 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bc27 mov ecx, edx */
  ECX = (EDX);
  /* 1148bc29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1148bc2c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bc2f je 0x1148bc37 */
  if (C.zf) goto L_1148bc37;
  /* 1148bc31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1148bc33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1148bc35 je 0x1148bc3d */
  if (C.zf) goto L_1148bc3d;
L_1148bc37:;
  /* 1148bc37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bc39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148bc3a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1148bc3b jne 0x1148bc37 */
  if (!C.zf) goto L_1148bc37;
L_1148bc3d:;
  /* 1148bc3d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1148bc41 pop edi */
  EDI = (pop32());
  /* 1148bc42 ret  */
  ESPCHK(0x1148bbf0u, _esp0);
  ESP += 4; return;
L_1148bc43:;
  /* 1148bc43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1148bc47 ret  */
  ESPCHK(0x1148bbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1148bc50 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1148bc50(void) {
  FTRACE(0x1148bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1148bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1148bc53 push edi */
  push32((uint32_t)(EDI));
  /* 1148bc54 push esi */
  push32((uint32_t)(ESI));
  /* 1148bc55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1148bc58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148bc5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bc5e mov eax, ecx */
  EAX = (ECX);
  /* 1148bc60 mov edx, ecx */
  EDX = (ECX);
  /* 1148bc62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bc64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bc66 jbe 0x1148bc70 */
  if ((C.cf||C.zf)) goto L_1148bc70;
  /* 1148bc68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bc6a jb 0x1148bde8 */
  if (C.cf) goto L_1148bde8;
L_1148bc70:;
  /* 1148bc70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1148bc76 jne 0x1148bc8c */
  if (!C.zf) goto L_1148bc8c;
  /* 1148bc78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bc7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1148bc7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bc81 jb 0x1148bcac */
  if (C.cf) goto L_1148bcac;
  /* 1148bc83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148bc85 jmp dword ptr [edx*4 + 0x1148bd98] */
  switch (EDX) {
    case 0: goto L_1148bda8;
    case 1: goto L_1148bdb0;
    case 2: goto L_1148bdbc;
    case 3: goto L_1148bdd0;
    default: x86_unimpl("switch@0x1148bc85 out of table"); return;
  }
L_1148bc8c:;
  /* 1148bc8c mov eax, edi */
  EAX = (EDI);
  /* 1148bc8e mov edx, 3 */
  EDX = (0x3u);
  /* 1148bc93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148bc96 jb 0x1148bca4 */
  if (C.cf) goto L_1148bca4;
  /* 1148bc98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1148bc9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bc9d jmp dword ptr [eax*4 + 0x1148bcb0] */
  switch (EAX) {
    case 1: goto L_1148bcc0;
    case 2: goto L_1148bcec;
    case 3: goto L_1148bd10;
    default: x86_unimpl("switch@0x1148bc9d out of table"); return;
  }
L_1148bca4:;
  /* 1148bca4 jmp dword ptr [ecx*4 + 0x1148bda8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1148bda8)))); return;
  /* 1148bcab nop  */
  /* nop */
L_1148bcac:;
  /* 1148bcac jmp dword ptr [ecx*4 + 0x1148bd2c] */
  switch (ECX) {
    case 0: goto L_1148bd8f;
    case 1: goto L_1148bd7c;
    case 2: goto L_1148bd74;
    case 3: goto L_1148bd6c;
    case 4: goto L_1148bd64;
    case 5: goto L_1148bd5c;
    case 6: goto L_1148bd54;
    case 7: goto L_1148bd4c;
    default: x86_unimpl("switch@0x1148bcac out of table"); return;
  }
  /* 1148bcb3 nop  */
  /* nop */
L_1148bcc0:;
  /* 1148bcc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148bcc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148bcc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bcc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148bcc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148bccc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148bccf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bcd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148bcd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bcd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bcdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bcde jb 0x1148bcac */
  if (C.cf) goto L_1148bcac;
  /* 1148bce0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148bce2 jmp dword ptr [edx*4 + 0x1148bd98] */
  switch (EDX) {
    case 0: goto L_1148bda8;
    case 1: goto L_1148bdb0;
    case 2: goto L_1148bdbc;
    case 3: goto L_1148bdd0;
    default: x86_unimpl("switch@0x1148bce2 out of table"); return;
  }
  /* 1148bce9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148bcec:;
  /* 1148bcec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148bcee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148bcf0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bcf2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148bcf5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bcf8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148bcfb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bcfe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bd01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bd04 jb 0x1148bcac */
  if (C.cf) goto L_1148bcac;
  /* 1148bd06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148bd08 jmp dword ptr [edx*4 + 0x1148bd98] */
  switch (EDX) {
    case 0: goto L_1148bda8;
    case 1: goto L_1148bdb0;
    case 2: goto L_1148bdbc;
    case 3: goto L_1148bdd0;
    default: x86_unimpl("switch@0x1148bd08 out of table"); return;
  }
  /* 1148bd0f nop  */
  /* nop */
L_1148bd10:;
  /* 1148bd10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148bd12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148bd14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bd16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1148bd17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bd1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1148bd1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bd1e jb 0x1148bcac */
  if (C.cf) goto L_1148bcac;
  /* 1148bd20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148bd22 jmp dword ptr [edx*4 + 0x1148bd98] */
  switch (EDX) {
    case 0: goto L_1148bda8;
    case 1: goto L_1148bdb0;
    case 2: goto L_1148bdbc;
    case 3: goto L_1148bdd0;
    default: x86_unimpl("switch@0x1148bd22 out of table"); return;
  }
  /* 1148bd29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148bd4c:;
  /* 1148bd4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1148bd50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1148bd54:;
  /* 1148bd54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1148bd58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1148bd5c:;
  /* 1148bd5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1148bd60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1148bd64:;
  /* 1148bd64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1148bd68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1148bd6c:;
  /* 1148bd6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1148bd70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1148bd74:;
  /* 1148bd74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1148bd78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1148bd7c:;
  /* 1148bd7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1148bd80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1148bd84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1148bd8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bd8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1148bd8f:;
  /* 1148bd8f jmp dword ptr [edx*4 + 0x1148bd98] */
  switch (EDX) {
    case 0: goto L_1148bda8;
    case 1: goto L_1148bdb0;
    case 2: goto L_1148bdbc;
    case 3: goto L_1148bdd0;
    default: x86_unimpl("switch@0x1148bd8f out of table"); return;
  }
  /* 1148bd96 mov edi, edi */
  EDI = (EDI);
L_1148bda8:;
  /* 1148bda8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bdab pop esi */
  ESI = (pop32());
  /* 1148bdac pop edi */
  EDI = (pop32());
  /* 1148bdad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bdae ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bdaf nop  */
  /* nop */
L_1148bdb0:;
  /* 1148bdb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148bdb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bdb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bdb7 pop esi */
  ESI = (pop32());
  /* 1148bdb8 pop edi */
  EDI = (pop32());
  /* 1148bdb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bdba ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bdbb nop  */
  /* nop */
L_1148bdbc:;
  /* 1148bdbc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148bdbe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bdc0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148bdc3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148bdc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bdc9 pop esi */
  ESI = (pop32());
  /* 1148bdca pop edi */
  EDI = (pop32());
  /* 1148bdcb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bdcc ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bdcd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148bdd0:;
  /* 1148bdd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1148bdd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1148bdd4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148bdd7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148bdda mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148bddd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148bde0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bde3 pop esi */
  ESI = (pop32());
  /* 1148bde4 pop edi */
  EDI = (pop32());
  /* 1148bde5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bde6 ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bde7 nop  */
  /* nop */
L_1148bde8:;
  /* 1148bde8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1148bdec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1148bdf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1148bdf6 jne 0x1148be1c */
  if (!C.zf) goto L_1148be1c;
  /* 1148bdf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bdfb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1148bdfe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148be01 jb 0x1148be10 */
  if (C.cf) goto L_1148be10;
  /* 1148be03 std  */
  C.df=1;
  /* 1148be04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148be06 cld  */
  C.df=0;
  /* 1148be07 jmp dword ptr [edx*4 + 0x1148bf30] */
  switch (EDX) {
    case 0: goto L_1148bf40;
    case 1: goto L_1148bf48;
    case 2: goto L_1148bf58;
    case 3: goto L_1148bf6c;
    default: x86_unimpl("switch@0x1148be07 out of table"); return;
  }
  /* 1148be0e mov edi, edi */
  EDI = (EDI);
L_1148be10:;
  /* 1148be10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1148be12 jmp dword ptr [ecx*4 + 0x1148bee0] */
  switch (ECX) {
    case 0: goto L_1148bf27;
    default: x86_unimpl("switch@0x1148be12 out of table"); return;
  }
  /* 1148be19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148be1c:;
  /* 1148be1c mov eax, edi */
  EAX = (EDI);
  /* 1148be1e mov edx, 3 */
  EDX = (0x3u);
  /* 1148be23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148be26 jb 0x1148be34 */
  if (C.cf) goto L_1148be34;
  /* 1148be28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1148be2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148be2d jmp dword ptr [eax*4 + 0x1148be38] */
  switch (EAX) {
    case 1: goto L_1148be48;
    case 2: goto L_1148be68;
    case 3: goto L_1148be90;
    default: x86_unimpl("switch@0x1148be2d out of table"); return;
  }
L_1148be34:;
  /* 1148be34 jmp dword ptr [ecx*4 + 0x1148bf30] */
  switch (ECX) {
    case 0: goto L_1148bf40;
    case 1: goto L_1148bf48;
    case 2: goto L_1148bf58;
    case 3: goto L_1148bf6c;
    default: x86_unimpl("switch@0x1148be34 out of table"); return;
  }
  /* 1148be3b nop  */
  /* nop */
L_1148be48:;
  /* 1148be48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148be4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148be4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148be50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1148be51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148be54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1148be55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148be58 jb 0x1148be10 */
  if (C.cf) goto L_1148be10;
  /* 1148be5a std  */
  C.df=1;
  /* 1148be5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148be5d cld  */
  C.df=0;
  /* 1148be5e jmp dword ptr [edx*4 + 0x1148bf30] */
  switch (EDX) {
    case 0: goto L_1148bf40;
    case 1: goto L_1148bf48;
    case 2: goto L_1148bf58;
    case 3: goto L_1148bf6c;
    default: x86_unimpl("switch@0x1148be5e out of table"); return;
  }
  /* 1148be65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148be68:;
  /* 1148be68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148be6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148be6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148be70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148be73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148be76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148be79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148be7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148be7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148be82 jb 0x1148be10 */
  if (C.cf) goto L_1148be10;
  /* 1148be84 std  */
  C.df=1;
  /* 1148be85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148be87 cld  */
  C.df=0;
  /* 1148be88 jmp dword ptr [edx*4 + 0x1148bf30] */
  switch (EDX) {
    case 0: goto L_1148bf40;
    case 1: goto L_1148bf48;
    case 2: goto L_1148bf58;
    case 3: goto L_1148bf6c;
    default: x86_unimpl("switch@0x1148be88 out of table"); return;
  }
  /* 1148be8f nop  */
  /* nop */
L_1148be90:;
  /* 1148be90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148be93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1148be95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148be98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148be9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148be9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148bea1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1148bea4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148bea7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148beaa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148bead cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148beb0 jb 0x1148be10 */
  if (C.cf) goto L_1148be10;
  /* 1148beb6 std  */
  C.df=1;
  /* 1148beb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1148beb9 cld  */
  C.df=0;
  /* 1148beba jmp dword ptr [edx*4 + 0x1148bf30] */
  switch (EDX) {
    case 0: goto L_1148bf40;
    case 1: goto L_1148bf48;
    case 2: goto L_1148bf58;
    case 3: goto L_1148bf6c;
    default: x86_unimpl("switch@0x1148beba out of table"); return;
  }
  /* 1148bec1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1148bec4 in al, 0xbe */
  x86_unimpl("in @ 0x1148bec4");
  /* 1148bec6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148bec7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bec9 mov esi, 0xbef41148 */
  ESI = (0xbef41148u);
  /* 1148bece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148becf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bed1 mov esi, 0xbf041148 */
  ESI = (0xbf041148u);
  /* 1148bed6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148bed7 adc dword ptr [edi + edi*4], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + EDI*4))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EDI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1148beda dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148bedb adc dword ptr [edi + edi*4], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + EDI*4))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EDI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1148bede dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1148bee4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1148bee8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1148beec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1148bef0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1148bef4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1148bef8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1148befc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1148bf00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1148bf04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1148bf08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1148bf0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1148bf10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1148bf14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1148bf18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1148bf1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1148bf23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bf25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1148bf27:;
  /* 1148bf27 jmp dword ptr [edx*4 + 0x1148bf30] */
  switch (EDX) {
    case 0: goto L_1148bf40;
    case 1: goto L_1148bf48;
    case 2: goto L_1148bf58;
    case 3: goto L_1148bf6c;
    default: x86_unimpl("switch@0x1148bf27 out of table"); return;
  }
  /* 1148bf2e mov edi, edi */
  EDI = (EDI);
L_1148bf40:;
  /* 1148bf40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bf43 pop esi */
  ESI = (pop32());
  /* 1148bf44 pop edi */
  EDI = (pop32());
  /* 1148bf45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bf46 ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bf47 nop  */
  /* nop */
L_1148bf48:;
  /* 1148bf48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148bf4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148bf4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bf51 pop esi */
  ESI = (pop32());
  /* 1148bf52 pop edi */
  EDI = (pop32());
  /* 1148bf53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bf54 ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bf55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1148bf58:;
  /* 1148bf58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148bf5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148bf5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148bf61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148bf64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bf67 pop esi */
  ESI = (pop32());
  /* 1148bf68 pop edi */
  EDI = (pop32());
  /* 1148bf69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bf6a ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
  /* 1148bf6b nop  */
  /* nop */
L_1148bf6c:;
  /* 1148bf6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1148bf6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1148bf72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1148bf75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1148bf78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1148bf7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1148bf7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bf81 pop esi */
  ESI = (pop32());
  /* 1148bf82 pop edi */
  EDI = (pop32());
  /* 1148bf83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1148bf84 ret  */
  ESPCHK(0x1148bc50u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1148bf90 (15 bytes, 7 insns) */
void f_1148bf90(void) {
  FTRACE(0x1148bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 1148bf91 mov ebp, esp */
  EBP = (ESP);
  /* 1148bf93 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148bf95 call 0x11484710 */
  push32(0x1148bf9au); f_11484710();
  /* 1148bf9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bf9d pop ebp */
  EBP = (pop32());
  /* 1148bf9e ret  */
  ESPCHK(0x1148bf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x1148bfa0 (130 bytes, 43 insns) */
void f_1148bfa0(void) {
  FTRACE(0x1148bfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148bfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148bfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1148bfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148bfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bfa7 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148bfad jae 0x1148bfd1 */
  if (!C.cf) goto L_1148bfd1;
  /* 1148bfaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bfb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148bfb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bfb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148bfbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148bfbe mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148bfc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1148bfca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148bfcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148bfcf jne 0x1148bfec */
  if (!C.zf) goto L_1148bfec;
L_1148bfd1:;
  /* 1148bfd1 call 0x1148fad0 */
  push32(0x1148bfd6u); f_1148fad0();
  /* 1148bfd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1148bfdc call 0x1148fae0 */
  push32(0x1148bfe1u); f_1148fae0();
  /* 1148bfe1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148bfe7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148bfea jmp 0x1148c01e */
  goto L_1148c01e;
L_1148bfec:;
  /* 1148bfec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148bfef push edx */
  push32((uint32_t)(EDX));
  /* 1148bff0 call 0x11492310 */
  push32(0x1148bff5u); f_11492310();
  /* 1148bff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148bff8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148bffb push eax */
  push32((uint32_t)(EAX));
  /* 1148bffc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148bfff push ecx */
  push32((uint32_t)(ECX));
  /* 1148c000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c003 push edx */
  push32((uint32_t)(EDX));
  /* 1148c004 call 0x1148c030 */
  push32(0x1148c009u); f_1148c030();
  /* 1148c009 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c00c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148c00f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c012 push eax */
  push32((uint32_t)(EAX));
  /* 1148c013 call 0x114923a0 */
  push32(0x1148c018u); f_114923a0();
  /* 1148c018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1148c01e:;
  /* 1148c01e mov esp, ebp */
  ESP = (EBP);
  /* 1148c020 pop ebp */
  EBP = (pop32());
  /* 1148c021 ret  */
  ESPCHK(0x1148bfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c030 @ 0x1148c030 (178 bytes, 56 insns) */
void f_1148c030(void) {
  FTRACE(0x1148c030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c030 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c031 mov ebp, esp */
  EBP = (ESP);
  /* 1148c033 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c039 push eax */
  push32((uint32_t)(EAX));
  /* 1148c03a call 0x11492190 */
  push32(0x1148c03fu); f_11492190();
  /* 1148c03f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c042 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148c045 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c049 jne 0x1148c05e */
  if (!C.zf) goto L_1148c05e;
  /* 1148c04b call 0x1148fad0 */
  push32(0x1148c050u); f_1148fad0();
  /* 1148c050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1148c056 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c059 jmp 0x1148c0de */
  goto L_1148c0de;
L_1148c05e:;
  /* 1148c05e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148c061 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c062 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148c064 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c067 push edx */
  push32((uint32_t)(EDX));
  /* 1148c068 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148c06b push eax */
  push32((uint32_t)(EAX));
  /* 1148c06c call dword ptr [0x114b933c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b933c))), 0x1148c072u);
  /* 1148c072 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148c075 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c079 jne 0x1148c086 */
  if (!C.zf) goto L_1148c086;
  /* 1148c07b call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x1148c081u);
  /* 1148c081 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148c084 jmp 0x1148c08d */
  goto L_1148c08d;
L_1148c086:;
  /* 1148c086 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1148c08d:;
  /* 1148c08d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c091 je 0x1148c0a4 */
  if (C.zf) goto L_1148c0a4;
  /* 1148c093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c096 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c097 call 0x1148fa30 */
  push32(0x1148c09cu); f_1148fa30();
  /* 1148c09c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c09f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c0a2 jmp 0x1148c0de */
  goto L_1148c0de;
L_1148c0a4:;
  /* 1148c0a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c0a7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1148c0aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c0ad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c0b0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c0b3 mov ecx, dword ptr [edx*4 + 0x114b7ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x114b7ec0)));
  /* 1148c0ba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1148c0be and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1148c0c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c0c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c0c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c0ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1148c0cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c0d0 mov eax, dword ptr [eax*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 1148c0d7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1148c0db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1148c0de:;
  /* 1148c0de mov esp, ebp */
  ESP = (EBP);
  /* 1148c0e0 pop ebp */
  EBP = (pop32());
  /* 1148c0e1 ret  */
  ESPCHK(0x1148c030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f0 @ 0x1148c0f0 (130 bytes, 43 insns) */
void f_1148c0f0(void) {
  FTRACE(0x1148c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1148c0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c0f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c0f7 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c0fd jae 0x1148c121 */
  if (!C.cf) goto L_1148c121;
  /* 1148c0ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c102 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c108 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148c10b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c10e mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148c115 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1148c11a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1148c11d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148c11f jne 0x1148c13c */
  if (!C.zf) goto L_1148c13c;
L_1148c121:;
  /* 1148c121 call 0x1148fad0 */
  push32(0x1148c126u); f_1148fad0();
  /* 1148c126 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1148c12c call 0x1148fae0 */
  push32(0x1148c131u); f_1148fae0();
  /* 1148c131 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148c137 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c13a jmp 0x1148c16e */
  goto L_1148c16e;
L_1148c13c:;
  /* 1148c13c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c13f push edx */
  push32((uint32_t)(EDX));
  /* 1148c140 call 0x11492310 */
  push32(0x1148c145u); f_11492310();
  /* 1148c145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c148 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148c14b push eax */
  push32((uint32_t)(EAX));
  /* 1148c14c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c14f push ecx */
  push32((uint32_t)(ECX));
  /* 1148c150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c153 push edx */
  push32((uint32_t)(EDX));
  /* 1148c154 call 0x1148c180 */
  push32(0x1148c159u); f_1148c180();
  /* 1148c159 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c15c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148c15f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c162 push eax */
  push32((uint32_t)(EAX));
  /* 1148c163 call 0x114923a0 */
  push32(0x1148c168u); f_114923a0();
  /* 1148c168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c16b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1148c16e:;
  /* 1148c16e mov esp, ebp */
  ESP = (EBP);
  /* 1148c170 pop ebp */
  EBP = (pop32());
  /* 1148c171 ret  */
  ESPCHK(0x1148c0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x1148c180 (627 bytes, 182 insns) */
void f_1148c180(void) {
  FTRACE(0x1148c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c180 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c181 mov ebp, esp */
  EBP = (ESP);
  /* 1148c183 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c189 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1148c190 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148c193 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1148c199 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c19d jne 0x1148c1a6 */
  if (!C.zf) goto L_1148c1a6;
  /* 1148c19f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c1a1 jmp 0x1148c3ef */
  goto L_1148c3ef;
L_1148c1a6:;
  /* 1148c1a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c1a9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c1ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c1af and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148c1b2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c1b5 mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148c1bc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1148c1c1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1148c1c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1148c1c6 je 0x1148c1d8 */
  if (C.zf) goto L_1148c1d8;
  /* 1148c1c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148c1ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1148c1cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c1cf push edx */
  push32((uint32_t)(EDX));
  /* 1148c1d0 call 0x1148c030 */
  push32(0x1148c1d5u); f_1148c030();
  /* 1148c1d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148c1d8:;
  /* 1148c1d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c1db sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c1de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c1e1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1148c1e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c1e7 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 1148c1ee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1148c1f3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1148c1f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148c1fa je 0x1148c30c */
  if (C.zf) goto L_1148c30c;
  /* 1148c200 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c203 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1148c206 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1148c20d:;
  /* 1148c20d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c210 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c213 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c216 jae 0x1148c30a */
  if (!C.cf) goto L_1148c30a;
  /* 1148c21c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1148c222 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1148c225:;
  /* 1148c225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c228 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1148c22e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c230 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c236 jge 0x1148c297 */
  if ((C.sf==C.of)) goto L_1148c297;
  /* 1148c238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c23b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c23e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c241 jae 0x1148c297 */
  if (!C.cf) goto L_1148c297;
  /* 1148c243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c246 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1148c248 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1148c24e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c251 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148c257 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1148c25e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c261 jne 0x1148c281 */
  if (!C.zf) goto L_1148c281;
  /* 1148c263 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1148c269 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c26c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1148c272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c275 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1148c278 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c27b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c27e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1148c281:;
  /* 1148c281 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c284 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1148c28a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1148c28c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c28f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c292 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1148c295 jmp 0x1148c225 */
  goto L_1148c225;
L_1148c297:;
  /* 1148c297 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148c299 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1148c29f push edx */
  push32((uint32_t)(EDX));
  /* 1148c2a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c2a3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1148c2a9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c2ab push eax */
  push32((uint32_t)(EAX));
  /* 1148c2ac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1148c2b2 push edx */
  push32((uint32_t)(EDX));
  /* 1148c2b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c2b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c2b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c2bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1148c2bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c2c2 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 1148c2c9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1148c2cc push eax */
  push32((uint32_t)(EAX));
  /* 1148c2cd call dword ptr [0x114b9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9368))), 0x1148c2d3u);
  /* 1148c2d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148c2d5 je 0x1148c2fa */
  if (C.zf) goto L_1148c2fa;
  /* 1148c2d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148c2da add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c2e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1148c2e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c2e6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1148c2ec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c2ee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c2f4 jge 0x1148c2f8 */
  if ((C.sf==C.of)) goto L_1148c2f8;
  /* 1148c2f6 jmp 0x1148c30a */
  goto L_1148c30a;
L_1148c2f8:;
  /* 1148c2f8 jmp 0x1148c305 */
  goto L_1148c305;
L_1148c2fa:;
  /* 1148c2fa call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x1148c300u);
  /* 1148c300 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1148c303 jmp 0x1148c30a */
  goto L_1148c30a;
L_1148c305:;
  /* 1148c305 jmp 0x1148c20d */
  goto L_1148c20d;
L_1148c30a:;
  /* 1148c30a jmp 0x1148c35c */
  goto L_1148c35c;
L_1148c30c:;
  /* 1148c30c push 0 */
  push32((uint32_t)(0x0u));
  /* 1148c30e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1148c314 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c315 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1148c318 push edx */
  push32((uint32_t)(EDX));
  /* 1148c319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c31c push eax */
  push32((uint32_t)(EAX));
  /* 1148c31d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c320 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c326 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148c329 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c32c mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148c333 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1148c336 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c337 call dword ptr [0x114b9368] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9368))), 0x1148c33du);
  /* 1148c33d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148c33f je 0x1148c353 */
  if (C.zf) goto L_1148c353;
  /* 1148c341 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1148c348 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1148c34e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1148c351 jmp 0x1148c35c */
  goto L_1148c35c;
L_1148c353:;
  /* 1148c353 call dword ptr [0x114b93ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b93ac))), 0x1148c359u);
  /* 1148c359 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1148c35c:;
  /* 1148c35c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c360 jne 0x1148c3e6 */
  if (!C.zf) goto L_1148c3e6;
  /* 1148c366 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c36a je 0x1148c39a */
  if (C.zf) goto L_1148c39a;
  /* 1148c36c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c370 jne 0x1148c389 */
  if (!C.zf) goto L_1148c389;
  /* 1148c372 call 0x1148fad0 */
  push32(0x1148c377u); f_1148fad0();
  /* 1148c377 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1148c37d call 0x1148fae0 */
  push32(0x1148c382u); f_1148fae0();
  /* 1148c382 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148c385 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1148c387 jmp 0x1148c395 */
  goto L_1148c395;
L_1148c389:;
  /* 1148c389 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1148c38c push edx */
  push32((uint32_t)(EDX));
  /* 1148c38d call 0x1148fa30 */
  push32(0x1148c392u); f_1148fa30();
  /* 1148c392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148c395:;
  /* 1148c395 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c398 jmp 0x1148c3ef */
  goto L_1148c3ef;
L_1148c39a:;
  /* 1148c39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c39d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c3a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c3a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1148c3a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c3a9 mov edx, dword ptr [eax*4 + 0x114b7ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x114b7ec0)));
  /* 1148c3b0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1148c3b5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1148c3b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148c3ba je 0x1148c3cb */
  if (C.zf) goto L_1148c3cb;
  /* 1148c3bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c3bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1148c3c2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c3c5 jne 0x1148c3cb */
  if (!C.zf) goto L_1148c3cb;
  /* 1148c3c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c3c9 jmp 0x1148c3ef */
  goto L_1148c3ef;
L_1148c3cb:;
  /* 1148c3cb call 0x1148fad0 */
  push32(0x1148c3d0u); f_1148fad0();
  /* 1148c3d0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1148c3d6 call 0x1148fae0 */
  push32(0x1148c3dbu); f_1148fae0();
  /* 1148c3db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1148c3e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c3e4 jmp 0x1148c3ef */
  goto L_1148c3ef;
L_1148c3e6:;
  /* 1148c3e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1148c3e9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1148c3ef:;
  /* 1148c3ef mov esp, ebp */
  ESP = (EBP);
  /* 1148c3f1 pop ebp */
  EBP = (pop32());
  /* 1148c3f2 ret  */
  ESPCHK(0x1148c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x1148c400 (199 bytes, 68 insns) */
void f_1148c400(void) {
  FTRACE(0x1148c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c400 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c401 mov ebp, esp */
  EBP = (ESP);
  /* 1148c403 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c404 push ebx */
  push32((uint32_t)(EBX));
  /* 1148c405 push esi */
  push32((uint32_t)(ESI));
  /* 1148c406 push edi */
  push32((uint32_t)(EDI));
L_1148c407:;
  /* 1148c407 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c40b jne 0x1148c42b */
  if (!C.zf) goto L_1148c42b;
  /* 1148c40d push 0x114b06fc */
  push32((uint32_t)(0x114b06fcu));
  /* 1148c412 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148c414 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1148c416 push 0x114b1214 */
  push32((uint32_t)(0x114b1214u));
  /* 1148c41b push 2 */
  push32((uint32_t)(0x2u));
  /* 1148c41d call 0x11484860 */
  push32(0x1148c422u); f_11484860();
  /* 1148c422 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c425 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c428 jne 0x1148c42b */
  if (!C.zf) goto L_1148c42b;
  /* 1148c42a int3  */
  x86_unimpl("int3 @ 0x1148c42a");
L_1148c42b:;
  /* 1148c42b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c42d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148c42f jne 0x1148c407 */
  if (!C.zf) goto L_1148c407;
  /* 1148c431 mov ecx, dword ptr [0x114b667c] */
  ECX = (r32((uint32_t)(0x114b667c)));
  /* 1148c437 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c43a mov dword ptr [0x114b667c], ecx */
  w32((uint32_t)(0x114b667c), (ECX));
  /* 1148c440 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c443 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1148c446 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1148c448 push 0x114b1214 */
  push32((uint32_t)(0x114b1214u));
  /* 1148c44d push 2 */
  push32((uint32_t)(0x2u));
  /* 1148c44f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1148c454 call 0x114870c0 */
  push32(0x1148c459u); f_114870c0();
  /* 1148c459 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c45c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c45f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1148c462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c465 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c469 je 0x1148c486 */
  if (C.zf) goto L_1148c486;
  /* 1148c46b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c46e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1148c471 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1148c474 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c477 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1148c47a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c47d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1148c484 jmp 0x1148c4ab */
  goto L_1148c4ab;
L_1148c486:;
  /* 1148c486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c489 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1148c48c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1148c48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c492 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1148c495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c498 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c49b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c49e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1148c4a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c4a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1148c4ab:;
  /* 1148c4ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c4ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c4b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1148c4b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1148c4b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c4b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1148c4c0 pop edi */
  EDI = (pop32());
  /* 1148c4c1 pop esi */
  ESI = (pop32());
  /* 1148c4c2 pop ebx */
  EBX = (pop32());
  /* 1148c4c3 mov esp, ebp */
  ESP = (EBP);
  /* 1148c4c5 pop ebp */
  EBP = (pop32());
  /* 1148c4c6 ret  */
  ESPCHK(0x1148c400u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1148c4d0 (50 bytes, 17 insns) */
void f_1148c4d0(void) {
  FTRACE(0x1148c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1148c4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c4d6 cmp eax, dword ptr [0x114b7ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114b7ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c4dc jb 0x1148c4e2 */
  if (C.cf) goto L_1148c4e2;
  /* 1148c4de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c4e0 jmp 0x1148c500 */
  goto L_1148c500;
L_1148c4e2:;
  /* 1148c4e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c4e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c4e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c4eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148c4ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c4f1 mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148c4f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1148c4fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1148c500:;
  /* 1148c500 pop ebp */
  EBP = (pop32());
  /* 1148c501 ret  */
  ESPCHK(0x1148c4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x1148c510 (300 bytes, 80 insns) */
void f_1148c510(void) {
  FTRACE(0x1148c510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c510 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c511 mov ebp, esp */
  EBP = (ESP);
  /* 1148c513 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c514 cmp dword ptr [0x114b7ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b7ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c51b jne 0x1148c529 */
  if (!C.zf) goto L_1148c529;
  /* 1148c51d mov dword ptr [0x114b7ea0], 0x200 */
  w32((uint32_t)(0x114b7ea0), (0x200u));
  /* 1148c527 jmp 0x1148c53c */
  goto L_1148c53c;
L_1148c529:;
  /* 1148c529 cmp dword ptr [0x114b7ea0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x114b7ea0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c530 jge 0x1148c53c */
  if ((C.sf==C.of)) goto L_1148c53c;
  /* 1148c532 mov dword ptr [0x114b7ea0], 0x14 */
  w32((uint32_t)(0x114b7ea0), (0x14u));
L_1148c53c:;
  /* 1148c53c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1148c541 push 0x114b1220 */
  push32((uint32_t)(0x114b1220u));
  /* 1148c546 push 2 */
  push32((uint32_t)(0x2u));
  /* 1148c548 push 4 */
  push32((uint32_t)(0x4u));
  /* 1148c54a mov eax, dword ptr [0x114b7ea0] */
  EAX = (r32((uint32_t)(0x114b7ea0)));
  /* 1148c54f push eax */
  push32((uint32_t)(EAX));
  /* 1148c550 call 0x114874d0 */
  push32(0x1148c555u); f_114874d0();
  /* 1148c555 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c558 mov dword ptr [0x114b6b4c], eax */
  w32((uint32_t)(0x114b6b4c), (EAX));
  /* 1148c55d cmp dword ptr [0x114b6b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c564 jne 0x1148c5a5 */
  if (!C.zf) goto L_1148c5a5;
  /* 1148c566 mov dword ptr [0x114b7ea0], 0x14 */
  w32((uint32_t)(0x114b7ea0), (0x14u));
  /* 1148c570 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1148c575 push 0x114b1220 */
  push32((uint32_t)(0x114b1220u));
  /* 1148c57a push 2 */
  push32((uint32_t)(0x2u));
  /* 1148c57c push 4 */
  push32((uint32_t)(0x4u));
  /* 1148c57e mov ecx, dword ptr [0x114b7ea0] */
  ECX = (r32((uint32_t)(0x114b7ea0)));
  /* 1148c584 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c585 call 0x114874d0 */
  push32(0x1148c58au); f_114874d0();
  /* 1148c58a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c58d mov dword ptr [0x114b6b4c], eax */
  w32((uint32_t)(0x114b6b4c), (EAX));
  /* 1148c592 cmp dword ptr [0x114b6b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c599 jne 0x1148c5a5 */
  if (!C.zf) goto L_1148c5a5;
  /* 1148c59b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1148c59d call 0x11484710 */
  push32(0x1148c5a2u); f_11484710();
  /* 1148c5a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1148c5a5:;
  /* 1148c5a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148c5ac jmp 0x1148c5b7 */
  goto L_1148c5b7;
L_1148c5ae:;
  /* 1148c5ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c5b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c5b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1148c5b7:;
  /* 1148c5b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c5bb jge 0x1148c5d6 */
  if ((C.sf==C.of)) goto L_1148c5d6;
  /* 1148c5bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c5c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c5c3 add eax, 0x114b3dd0 */
  { uint32_t _a=(EAX),_b=(0x114b3dd0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c5c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c5cb mov edx, dword ptr [0x114b6b4c] */
  EDX = (r32((uint32_t)(0x114b6b4c)));
  /* 1148c5d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1148c5d4 jmp 0x1148c5ae */
  goto L_1148c5ae;
L_1148c5d6:;
  /* 1148c5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1148c5dd jmp 0x1148c5e8 */
  goto L_1148c5e8;
L_1148c5df:;
  /* 1148c5df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c5e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c5e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1148c5e8:;
  /* 1148c5e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c5ec jge 0x1148c638 */
  if ((C.sf==C.of)) goto L_1148c638;
  /* 1148c5ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c5f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c5f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c5f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148c5fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c5fd mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148c604 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c608 je 0x1148c626 */
  if (C.zf) goto L_1148c626;
  /* 1148c60a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c60d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c610 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c613 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1148c616 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1148c619 mov eax, dword ptr [ecx*4 + 0x114b7ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x114b7ec0)));
  /* 1148c620 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c624 jne 0x1148c636 */
  if (!C.zf) goto L_1148c636;
L_1148c626:;
  /* 1148c626 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1148c629 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1148c62c mov dword ptr [ecx + 0x114b3de0], 0xffffffff */
  w32((uint32_t)(ECX + 0x114b3de0), (0xffffffffu));
L_1148c636:;
  /* 1148c636 jmp 0x1148c5df */
  goto L_1148c5df;
L_1148c638:;
  /* 1148c638 mov esp, ebp */
  ESP = (EBP);
  /* 1148c63a pop ebp */
  EBP = (pop32());
  /* 1148c63b ret  */
  ESPCHK(0x1148c510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x1148c640 (26 bytes, 9 insns) */
void f_1148c640(void) {
  FTRACE(0x1148c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c640 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c641 mov ebp, esp */
  EBP = (ESP);
  /* 1148c643 call 0x11492610 */
  push32(0x1148c648u); f_11492610();
  /* 1148c648 movsx eax, byte ptr [0x114b652c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114b652c))));
  /* 1148c64f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1148c651 je 0x1148c658 */
  if (C.zf) goto L_1148c658;
  /* 1148c653 call 0x114923d0 */
  push32(0x1148c658u); f_114923d0();
L_1148c658:;
  /* 1148c658 pop ebp */
  EBP = (pop32());
  /* 1148c659 ret  */
  ESPCHK(0x1148c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c660 @ 0x1148c660 (61 bytes, 20 insns) */
void f_1148c660(void) {
  FTRACE(0x1148c660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c660 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c661 mov ebp, esp */
  EBP = (ESP);
  /* 1148c663 cmp dword ptr [ebp + 8], 0x114b3dd0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114b3dd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c66a jb 0x1148c68e */
  if (C.cf) goto L_1148c68e;
  /* 1148c66c cmp dword ptr [ebp + 8], 0x114b4030 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114b4030u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c673 ja 0x1148c68e */
  if ((!C.cf&&!C.zf)) goto L_1148c68e;
  /* 1148c675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c678 sub eax, 0x114b3dd0 */
  { uint32_t _a=(EAX),_b=(0x114b3dd0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c67d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c680 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c683 push eax */
  push32((uint32_t)(EAX));
  /* 1148c684 call 0x1148ca30 */
  push32(0x1148c689u); f_1148ca30();
  /* 1148c689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c68c jmp 0x1148c69b */
  goto L_1148c69b;
L_1148c68e:;
  /* 1148c68e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c691 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c694 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c695 call dword ptr [0x114b9338] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9338))), 0x1148c69bu);
L_1148c69b:;
  /* 1148c69b pop ebp */
  EBP = (pop32());
  /* 1148c69c ret  */
  ESPCHK(0x1148c660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a0 @ 0x1148c6a0 (41 bytes, 16 insns) */
void f_1148c6a0(void) {
  FTRACE(0x1148c6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1148c6a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c6a7 jge 0x1148c6ba */
  if ((C.sf==C.of)) goto L_1148c6ba;
  /* 1148c6a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c6ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c6af push eax */
  push32((uint32_t)(EAX));
  /* 1148c6b0 call 0x1148ca30 */
  push32(0x1148c6b5u); f_1148ca30();
  /* 1148c6b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c6b8 jmp 0x1148c6c7 */
  goto L_1148c6c7;
L_1148c6ba:;
  /* 1148c6ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c6bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c6c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c6c1 call dword ptr [0x114b9338] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9338))), 0x1148c6c7u);
L_1148c6c7:;
  /* 1148c6c7 pop ebp */
  EBP = (pop32());
  /* 1148c6c8 ret  */
  ESPCHK(0x1148c6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6d0 @ 0x1148c6d0 (61 bytes, 20 insns) */
void f_1148c6d0(void) {
  FTRACE(0x1148c6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1148c6d3 cmp dword ptr [ebp + 8], 0x114b3dd0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114b3dd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c6da jb 0x1148c6fe */
  if (C.cf) goto L_1148c6fe;
  /* 1148c6dc cmp dword ptr [ebp + 8], 0x114b4030 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114b4030u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c6e3 ja 0x1148c6fe */
  if ((!C.cf&&!C.zf)) goto L_1148c6fe;
  /* 1148c6e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c6e8 sub eax, 0x114b3dd0 */
  { uint32_t _a=(EAX),_b=(0x114b3dd0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c6ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1148c6f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c6f3 push eax */
  push32((uint32_t)(EAX));
  /* 1148c6f4 call 0x1148cad0 */
  push32(0x1148c6f9u); f_1148cad0();
  /* 1148c6f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c6fc jmp 0x1148c70b */
  goto L_1148c70b;
L_1148c6fe:;
  /* 1148c6fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c701 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c704 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c705 call dword ptr [0x114b9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9334))), 0x1148c70bu);
L_1148c70b:;
  /* 1148c70b pop ebp */
  EBP = (pop32());
  /* 1148c70c ret  */
  ESPCHK(0x1148c6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c710 @ 0x1148c710 (41 bytes, 16 insns) */
void f_1148c710(void) {
  FTRACE(0x1148c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c710 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c711 mov ebp, esp */
  EBP = (ESP);
  /* 1148c713 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c717 jge 0x1148c72a */
  if ((C.sf==C.of)) goto L_1148c72a;
  /* 1148c719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c71c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c71f push eax */
  push32((uint32_t)(EAX));
  /* 1148c720 call 0x1148cad0 */
  push32(0x1148c725u); f_1148cad0();
  /* 1148c725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c728 jmp 0x1148c737 */
  goto L_1148c737;
L_1148c72a:;
  /* 1148c72a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c72d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c730 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c731 call dword ptr [0x114b9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9334))), 0x1148c737u);
L_1148c737:;
  /* 1148c737 pop ebp */
  EBP = (pop32());
  /* 1148c738 ret  */
  ESPCHK(0x1148c710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c740 @ 0x1148c740 (119 bytes, 34 insns) */
void f_1148c740(void) {
  FTRACE(0x1148c740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c740 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c741 mov ebp, esp */
  EBP = (ESP);
  /* 1148c743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c746 push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 1148c74b call dword ptr [0x114b937c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b937c))), 0x1148c751u);
  /* 1148c751 cmp dword ptr [0x114b6874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c758 je 0x1148c778 */
  if (C.zf) goto L_1148c778;
  /* 1148c75a push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 1148c75f call dword ptr [0x114b936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b936c))), 0x1148c765u);
  /* 1148c765 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148c767 call 0x1148ca30 */
  push32(0x1148c76cu); f_1148ca30();
  /* 1148c76c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c76f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1148c776 jmp 0x1148c77f */
  goto L_1148c77f;
L_1148c778:;
  /* 1148c778 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1148c77f:;
  /* 1148c77f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1148c783 push eax */
  push32((uint32_t)(EAX));
  /* 1148c784 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c787 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c788 call 0x1148c7c0 */
  push32(0x1148c78du); f_1148c7c0();
  /* 1148c78d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c790 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1148c793 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c797 je 0x1148c7a5 */
  if (C.zf) goto L_1148c7a5;
  /* 1148c799 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1148c79b call 0x1148cad0 */
  push32(0x1148c7a0u); f_1148cad0();
  /* 1148c7a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c7a3 jmp 0x1148c7b0 */
  goto L_1148c7b0;
L_1148c7a5:;
  /* 1148c7a5 push 0x114b6884 */
  push32((uint32_t)(0x114b6884u));
  /* 1148c7aa call dword ptr [0x114b936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b936c))), 0x1148c7b0u);
L_1148c7b0:;
  /* 1148c7b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1148c7b3 mov esp, ebp */
  ESP = (EBP);
  /* 1148c7b5 pop ebp */
  EBP = (pop32());
  /* 1148c7b6 ret  */
  ESPCHK(0x1148c740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x1148c7c0 (160 bytes, 50 insns) */
void f_1148c7c0(void) {
  FTRACE(0x1148c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1148c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1148c7c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1148c7c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c7ca jne 0x1148c7d3 */
  if (!C.zf) goto L_1148c7d3;
  /* 1148c7cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c7ce jmp 0x1148c85c */
  goto L_1148c85c;
L_1148c7d3:;
  /* 1148c7d3 cmp dword ptr [0x114b6704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114b6704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c7da jne 0x1148c80a */
  if (!C.zf) goto L_1148c80a;
  /* 1148c7dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1148c7df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c7e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c7e9 jle 0x1148c7fb */
  if ((C.zf||C.sf!=C.of)) goto L_1148c7fb;
  /* 1148c7eb call 0x1148fad0 */
  push32(0x1148c7f0u); f_1148fad0();
  /* 1148c7f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1148c7f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c7f9 jmp 0x1148c85c */
  goto L_1148c85c;
L_1148c7fb:;
  /* 1148c7fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c7fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1148c801 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1148c803 mov eax, 1 */
  EAX = (0x1u);
  /* 1148c808 jmp 0x1148c85c */
  goto L_1148c85c;
L_1148c80a:;
  /* 1148c80a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1148c811 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1148c814 push eax */
  push32((uint32_t)(EAX));
  /* 1148c815 push 0 */
  push32((uint32_t)(0x0u));
  /* 1148c817 mov ecx, dword ptr [0x114b3b80] */
  ECX = (r32((uint32_t)(0x114b3b80)));
  /* 1148c81d push ecx */
  push32((uint32_t)(ECX));
  /* 1148c81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1148c821 push edx */
  push32((uint32_t)(EDX));
  /* 1148c822 push 1 */
  push32((uint32_t)(0x1u));
  /* 1148c824 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1148c827 push eax */
  push32((uint32_t)(EAX));
  /* 1148c828 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1148c82d mov ecx, dword ptr [0x114b6714] */
  ECX = (r32((uint32_t)(0x114b6714)));
  /* 1148c833 push ecx */
  push32((uint32_t)(ECX));
  /* 1148c834 call dword ptr [0x114b9394] */
  call_ind((uint32_t)(r32((uint32_t)(0x114b9394))), 0x1148c83au);
  /* 1148c83a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1148c83d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c841 je 0x1148c849 */
  if (C.zf) goto L_1148c849;
  /* 1148c843 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c847 je 0x1148c859 */
  if (C.zf) goto L_1148c859;
L_1148c849:;
  /* 1148c849 call 0x1148fad0 */
  push32(0x1148c84eu); f_1148fad0();
  /* 1148c84e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1148c854 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1148c857 jmp 0x1148c85c */
  goto L_1148c85c;
L_1148c859:;
  /* 1148c859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1148c85c:;
  /* 1148c85c mov esp, ebp */
  ESP = (EBP);
  /* 1148c85e pop ebp */
  EBP = (pop32());
  /* 1148c85f ret  */
  ESPCHK(0x1148c7c0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1148c860 (104 bytes, 43 insns) */
void f_1148c860(void) {
  FTRACE(0x1148c860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1148c860 push ebx */
  push32((uint32_t)(EBX));
  /* 1148c861 push esi */
  push32((uint32_t)(ESI));
  /* 1148c862 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1148c866 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1148c868 jne 0x1148c882 */
  if (!C.zf) goto L_1148c882;
  /* 1148c86a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1148c86e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1148c872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148c874 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1148c876 mov ebx, eax */
  EBX = (EAX);
  /* 1148c878 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1148c87c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1148c87e mov edx, ebx */
  EDX = (EBX);
  /* 1148c880 jmp 0x1148c8c3 */
  goto L_1148c8c3;
L_1148c882:;
  /* 1148c882 mov ecx, eax */
  ECX = (EAX);
  /* 1148c884 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1148c888 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1148c88c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1148c890:;
  /* 1148c890 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1148c892 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1148c894 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1148c896 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1148c898 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1148c89a jne 0x1148c890 */
  if (!C.zf) goto L_1148c890;
  /* 1148c89c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1148c89e mov esi, eax */
  ESI = (EAX);
  /* 1148c8a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1148c8a4 mov ecx, eax */
  ECX = (EAX);
  /* 1148c8a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1148c8aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1148c8ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1148c8ae jb 0x1148c8be */
  if (C.cf) goto L_1148c8be;
  /* 1148c8b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c8b4 ja 0x1148c8be */
  if ((!C.cf&&!C.zf)) goto L_1148c8be;
  /* 1148c8b6 jb 0x1148c8bf */
  if (C.cf) goto L_1148c8bf;
  /* 1148c8b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1148c8bc jbe 0x1148c8bf */
  if ((C.cf||C.zf)) goto L_1148c8bf;
L_1148c8be:;
  /* 1148c8be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1148c8bf:;
  /* 1148c8bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1148c8c1 mov eax, esi */
  EAX = (ESI);
L_1148c8c3:;
  /* 1148c8c3 pop esi */
  ESI = (pop32());
  /* 1148c8c4 pop ebx */
  EBX = (pop32());
  /* 1148c8c5 ret 0x10 */
  ESPCHK(0x1148c860u, _esp0);
  ESP += 20; return;
}

