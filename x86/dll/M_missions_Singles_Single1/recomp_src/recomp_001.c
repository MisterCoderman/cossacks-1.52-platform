#include "recomp.h"

/* FUN_10009b80 @ 0x10e59b80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10e59b80(void) {
  FTRACE(0x10e59b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59b81 mov ebp, esp */
  EBP = (ESP);
  /* 10e59b83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59b86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e59b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59b90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e59b93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e59b96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59b99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e59b9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59ba0 ja 0x10e59c4e */
  if ((!C.cf&&!C.zf)) goto L_10e59c4e;
  /* 10e59ba6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e59ba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e59bab mov dl, byte ptr [eax + 0x10e59da2] */
  DL = (r8((uint32_t)(EAX + 0x10e59da2)));
  /* 10e59bb1 jmp dword ptr [edx*4 + 0x10e59d8a] */
  switch (EDX) {
    case 0: goto L_10e59bb8;
    case 1: goto L_10e59c23;
    case 2: goto L_10e59c09;
    case 3: goto L_10e59bd5;
    case 4: goto L_10e59bef;
    case 5: goto L_10e59c4e;
    default: x86_unimpl("switch@0x10e59bb1 out of table"); return;
  }
L_10e59bb8:;
  /* 10e59bb8 mov dword ptr [ebp - 0x18], 0x10e82918 */
  w32((uint32_t)(EBP + -0x18), (0x10e82918u));
  /* 10e59bbf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e59bc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e59bc4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e59bc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59bca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59bcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59bd0 jmp 0x10e59c56 */
  goto L_10e59c56;
L_10e59bd5:;
  /* 10e59bd5 mov dword ptr [ebp - 0x18], 0x10e8291c */
  w32((uint32_t)(EBP + -0x18), (0x10e8291cu));
  /* 10e59bdc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e59bdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e59be1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e59be4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59be7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59bea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59bed jmp 0x10e59c56 */
  goto L_10e59c56;
L_10e59bef:;
  /* 10e59bef mov dword ptr [ebp - 0x18], 0x10e82920 */
  w32((uint32_t)(EBP + -0x18), (0x10e82920u));
  /* 10e59bf6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e59bf9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e59bfb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e59bfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59c01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59c04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59c07 jmp 0x10e59c56 */
  goto L_10e59c56;
L_10e59c09:;
  /* 10e59c09 mov dword ptr [ebp - 0x18], 0x10e82924 */
  w32((uint32_t)(EBP + -0x18), (0x10e82924u));
  /* 10e59c10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e59c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e59c15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e59c18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e59c1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59c1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e59c21 jmp 0x10e59c56 */
  goto L_10e59c56;
L_10e59c23:;
  /* 10e59c23 call 0x10e56120 */
  push32(0x10e59c28u); f_10e56120();
  /* 10e59c28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e59c2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59c2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e59c31 push edx */
  push32((uint32_t)(EDX));
  /* 10e59c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59c35 push eax */
  push32((uint32_t)(EAX));
  /* 10e59c36 call 0x10e59dc0 */
  push32(0x10e59c3bu); f_10e59dc0();
  /* 10e59c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59c3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59c41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e59c44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e59c47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e59c49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e59c4c jmp 0x10e59c56 */
  goto L_10e59c56;
L_10e59c4e:;
  /* 10e59c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e59c51 jmp 0x10e59d86 */
  goto L_10e59d86;
L_10e59c56:;
  /* 10e59c56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59c5a je 0x10e59c66 */
  if (C.zf) goto L_10e59c66;
  /* 10e59c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59c5e call 0x10e5a0e0 */
  push32(0x10e59c63u); f_10e5a0e0();
  /* 10e59c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59c66:;
  /* 10e59c66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59c6a jne 0x10e59c83 */
  if (!C.zf) goto L_10e59c83;
  /* 10e59c6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59c70 je 0x10e59c7c */
  if (C.zf) goto L_10e59c7c;
  /* 10e59c72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59c74 call 0x10e5a180 */
  push32(0x10e59c79u); f_10e5a180();
  /* 10e59c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59c7c:;
  /* 10e59c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e59c7e jmp 0x10e59d86 */
  goto L_10e59d86;
L_10e59c83:;
  /* 10e59c83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59c87 jne 0x10e59ca0 */
  if (!C.zf) goto L_10e59ca0;
  /* 10e59c89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59c8d je 0x10e59c99 */
  if (C.zf) goto L_10e59c99;
  /* 10e59c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59c91 call 0x10e5a180 */
  push32(0x10e59c96u); f_10e5a180();
  /* 10e59c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59c99:;
  /* 10e59c99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e59c9b call 0x10e55ea0 */
  push32(0x10e59ca0u); f_10e55ea0();
L_10e59ca0:;
  /* 10e59ca0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59ca4 je 0x10e59cb2 */
  if (C.zf) goto L_10e59cb2;
  /* 10e59ca6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59caa je 0x10e59cb2 */
  if (C.zf) goto L_10e59cb2;
  /* 10e59cac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59cb0 jne 0x10e59cde */
  if (!C.zf) goto L_10e59cde;
L_10e59cb2:;
  /* 10e59cb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59cb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10e59cb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e59cbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59cbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10e59cc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59cc9 jne 0x10e59cde */
  if (!C.zf) goto L_10e59cde;
  /* 10e59ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59cce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10e59cd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e59cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59cd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10e59cde:;
  /* 10e59cde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59ce2 jne 0x10e59d20 */
  if (!C.zf) goto L_10e59d20;
  /* 10e59ce4 mov eax, dword ptr [0x10e80c88] */
  EAX = (r32((uint32_t)(0x10e80c88)));
  /* 10e59ce9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e59cec jmp 0x10e59cf7 */
  goto L_10e59cf7;
L_10e59cee:;
  /* 10e59cee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e59cf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59cf4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e59cf7:;
  /* 10e59cf7 mov edx, dword ptr [0x10e80c88] */
  EDX = (r32((uint32_t)(0x10e80c88)));
  /* 10e59cfd add edx, dword ptr [0x10e80c8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e80c8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59d03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d06 jge 0x10e59d1e */
  if ((C.sf==C.of)) goto L_10e59d1e;
  /* 10e59d08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e59d0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e59d0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59d11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e59d14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10e59d1c jmp 0x10e59cee */
  goto L_10e59cee;
L_10e59d1e:;
  /* 10e59d1e jmp 0x10e59d29 */
  goto L_10e59d29;
L_10e59d20:;
  /* 10e59d20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e59d23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e59d29:;
  /* 10e59d29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d2d je 0x10e59d39 */
  if (C.zf) goto L_10e59d39;
  /* 10e59d2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e59d31 call 0x10e5a180 */
  push32(0x10e59d36u); f_10e5a180();
  /* 10e59d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59d39:;
  /* 10e59d39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d3d jne 0x10e59d50 */
  if (!C.zf) goto L_10e59d50;
  /* 10e59d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59d42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10e59d45 push edx */
  push32((uint32_t)(EDX));
  /* 10e59d46 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e59d48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10e59d4bu);
  /* 10e59d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59d4e jmp 0x10e59d5a */
  goto L_10e59d5a;
L_10e59d50:;
  /* 10e59d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59d53 push eax */
  push32((uint32_t)(EAX));
  /* 10e59d54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10e59d57u);
  /* 10e59d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e59d5a:;
  /* 10e59d5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d5e je 0x10e59d6c */
  if (C.zf) goto L_10e59d6c;
  /* 10e59d60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d64 je 0x10e59d6c */
  if (C.zf) goto L_10e59d6c;
  /* 10e59d66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d6a jne 0x10e59d84 */
  if (!C.zf) goto L_10e59d84;
L_10e59d6c:;
  /* 10e59d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59d6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e59d72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10e59d75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59d79 jne 0x10e59d84 */
  if (!C.zf) goto L_10e59d84;
  /* 10e59d7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59d81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10e59d84:;
  /* 10e59d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e59d86:;
  /* 10e59d86 mov esp, ebp */
  ESP = (EBP);
  /* 10e59d88 pop ebp */
  EBP = (pop32());
  /* 10e59d89 ret  */
  ESPCHK(0x10e59b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dc0 @ 0x10e59dc0 (91 bytes, 35 insns) */
void f_10e59dc0(void) {
  FTRACE(0x10e59dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e59dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59dc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59dc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e59dca:;
  /* 10e59dca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59dcd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e59dd0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59dd3 je 0x10e59df3 */
  if (C.zf) goto L_10e59df3;
  /* 10e59dd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59dd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59ddb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e59dde mov ecx, dword ptr [0x10e80c94] */
  ECX = (r32((uint32_t)(0x10e80c94)));
  /* 10e59de4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e59de7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59dea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59dec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59def jae 0x10e59df3 */
  if (!C.cf) goto L_10e59df3;
  /* 10e59df1 jmp 0x10e59dca */
  goto L_10e59dca;
L_10e59df3:;
  /* 10e59df3 mov eax, dword ptr [0x10e80c94] */
  EAX = (r32((uint32_t)(0x10e80c94)));
  /* 10e59df8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e59dfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59dfe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59e00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59e03 jae 0x10e59e15 */
  if (!C.cf) goto L_10e59e15;
  /* 10e59e05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59e08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e59e0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59e0e jne 0x10e59e15 */
  if (!C.zf) goto L_10e59e15;
  /* 10e59e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59e13 jmp 0x10e59e17 */
  goto L_10e59e17;
L_10e59e15:;
  /* 10e59e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e59e17:;
  /* 10e59e17 mov esp, ebp */
  ESP = (EBP);
  /* 10e59e19 pop ebp */
  EBP = (pop32());
  /* 10e59e1a ret  */
  ESPCHK(0x10e59dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e20 @ 0x10e59e20 (13 bytes, 6 insns) */
void f_10e59e20(void) {
  FTRACE(0x10e59e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59e21 mov ebp, esp */
  EBP = (ESP);
  /* 10e59e23 call 0x10e56120 */
  push32(0x10e59e28u); f_10e56120();
  /* 10e59e28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59e2b pop ebp */
  EBP = (pop32());
  /* 10e59e2c ret  */
  ESPCHK(0x10e59e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e30 @ 0x10e59e30 (13 bytes, 6 insns) */
void f_10e59e30(void) {
  FTRACE(0x10e59e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59e31 mov ebp, esp */
  EBP = (ESP);
  /* 10e59e33 call 0x10e56120 */
  push32(0x10e59e38u); f_10e56120();
  /* 10e59e38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59e3b pop ebp */
  EBP = (pop32());
  /* 10e59e3c ret  */
  ESPCHK(0x10e59e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e40 @ 0x10e59e40 (187 bytes, 54 insns) */
void f_10e59e40(void) {
  FTRACE(0x10e59e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e59e41 mov ebp, esp */
  EBP = (ESP);
  /* 10e59e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e59e46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e59e4d cmp dword ptr [0x10e8292c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e8292c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59e54 jne 0x10e59eb3 */
  if (!C.zf) goto L_10e59eb3;
  /* 10e59e56 push 0x10e7d5e8 */
  push32((uint32_t)(0x10e7d5e8u));
  /* 10e59e5b call dword ptr [0x10e852f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852f0))), 0x10e59e61u);
  /* 10e59e61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e59e64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59e68 je 0x10e59e87 */
  if (C.zf) goto L_10e59e87;
  /* 10e59e6a push 0x10e7e1ec */
  push32((uint32_t)(0x10e7e1ecu));
  /* 10e59e6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59e72 push eax */
  push32((uint32_t)(EAX));
  /* 10e59e73 call dword ptr [0x10e853e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e0))), 0x10e59e79u);
  /* 10e59e79 mov dword ptr [0x10e8292c], eax */
  w32((uint32_t)(0x10e8292c), (EAX));
  /* 10e59e7e cmp dword ptr [0x10e8292c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e8292c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59e85 jne 0x10e59e8b */
  if (!C.zf) goto L_10e59e8b;
L_10e59e87:;
  /* 10e59e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e59e89 jmp 0x10e59ef7 */
  goto L_10e59ef7;
L_10e59e8b:;
  /* 10e59e8b push 0x10e7e1dc */
  push32((uint32_t)(0x10e7e1dcu));
  /* 10e59e90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59e94 call dword ptr [0x10e853e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e0))), 0x10e59e9au);
  /* 10e59e9a mov dword ptr [0x10e82930], eax */
  w32((uint32_t)(0x10e82930), (EAX));
  /* 10e59e9f push 0x10e7e1c8 */
  push32((uint32_t)(0x10e7e1c8u));
  /* 10e59ea4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e59ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10e59ea8 call dword ptr [0x10e853e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853e0))), 0x10e59eaeu);
  /* 10e59eae mov dword ptr [0x10e82934], eax */
  w32((uint32_t)(0x10e82934), (EAX));
L_10e59eb3:;
  /* 10e59eb3 cmp dword ptr [0x10e82930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59eba je 0x10e59ec5 */
  if (C.zf) goto L_10e59ec5;
  /* 10e59ebc call dword ptr [0x10e82930] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82930))), 0x10e59ec2u);
  /* 10e59ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e59ec5:;
  /* 10e59ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59ec9 je 0x10e59ee1 */
  if (C.zf) goto L_10e59ee1;
  /* 10e59ecb cmp dword ptr [0x10e82934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e59ed2 je 0x10e59ee1 */
  if (C.zf) goto L_10e59ee1;
  /* 10e59ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59ed7 push eax */
  push32((uint32_t)(EAX));
  /* 10e59ed8 call dword ptr [0x10e82934] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82934))), 0x10e59edeu);
  /* 10e59ede mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e59ee1:;
  /* 10e59ee1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e59ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59ee5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e59ee8 push edx */
  push32((uint32_t)(EDX));
  /* 10e59ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e59eec push eax */
  push32((uint32_t)(EAX));
  /* 10e59eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e59ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e59ef1 call dword ptr [0x10e8292c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8292c))), 0x10e59ef7u);
L_10e59ef7:;
  /* 10e59ef7 mov esp, ebp */
  ESP = (EBP);
  /* 10e59ef9 pop ebp */
  EBP = (pop32());
  /* 10e59efa ret  */
  ESPCHK(0x10e59e40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10e59f00 (254 bytes, 109 insns) */
void f_10e59f00(void) {
  FTRACE(0x10e59f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e59f00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e59f04 push edi */
  push32((uint32_t)(EDI));
  /* 10e59f05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e59f07 je 0x10e59f83 */
  if (C.zf) goto L_10e59f83;
  /* 10e59f09 push esi */
  push32((uint32_t)(ESI));
  /* 10e59f0a push ebx */
  push32((uint32_t)(EBX));
  /* 10e59f0b mov ebx, ecx */
  EBX = (ECX);
  /* 10e59f0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10e59f11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10e59f17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10e59f1b jne 0x10e59f24 */
  if (!C.zf) goto L_10e59f24;
  /* 10e59f1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e59f20 jne 0x10e59f91 */
  if (!C.zf) goto L_10e59f91;
  /* 10e59f22 jmp 0x10e59f45 */
  goto L_10e59f45;
L_10e59f24:;
  /* 10e59f24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e59f26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e59f27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e59f29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e59f2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e59f2b je 0x10e59f52 */
  if (C.zf) goto L_10e59f52;
  /* 10e59f2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e59f2f je 0x10e59f5a */
  if (C.zf) goto L_10e59f5a;
  /* 10e59f31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10e59f37 jne 0x10e59f24 */
  if (!C.zf) goto L_10e59f24;
  /* 10e59f39 mov ebx, ecx */
  EBX = (ECX);
  /* 10e59f3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e59f3e jne 0x10e59f91 */
  if (!C.zf) goto L_10e59f91;
L_10e59f40:;
  /* 10e59f40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10e59f43 je 0x10e59f52 */
  if (C.zf) goto L_10e59f52;
L_10e59f45:;
  /* 10e59f45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e59f47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e59f48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e59f4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e59f4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e59f4d je 0x10e59f7e */
  if (C.zf) goto L_10e59f7e;
  /* 10e59f4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10e59f50 jne 0x10e59f45 */
  if (!C.zf) goto L_10e59f45;
L_10e59f52:;
  /* 10e59f52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e59f56 pop ebx */
  EBX = (pop32());
  /* 10e59f57 pop esi */
  ESI = (pop32());
  /* 10e59f58 pop edi */
  EDI = (pop32());
  /* 10e59f59 ret  */
  ESPCHK(0x10e59f00u, _esp0);
  ESP += 4; return;
L_10e59f5a:;
  /* 10e59f5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e59f60 je 0x10e59f74 */
  if (C.zf) goto L_10e59f74;
L_10e59f62:;
  /* 10e59f62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e59f64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e59f65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e59f66 je 0x10e59ff6 */
  if (C.zf) goto L_10e59ff6;
  /* 10e59f6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e59f72 jne 0x10e59f62 */
  if (!C.zf) goto L_10e59f62;
L_10e59f74:;
  /* 10e59f74 mov ebx, ecx */
  EBX = (ECX);
  /* 10e59f76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e59f79 jne 0x10e59fe7 */
  if (!C.zf) goto L_10e59fe7;
L_10e59f7b:;
  /* 10e59f7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e59f7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10e59f7e:;
  /* 10e59f7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10e59f7f jne 0x10e59f7b */
  if (!C.zf) goto L_10e59f7b;
  /* 10e59f81 pop ebx */
  EBX = (pop32());
  /* 10e59f82 pop esi */
  ESI = (pop32());
L_10e59f83:;
  /* 10e59f83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e59f87 pop edi */
  EDI = (pop32());
  /* 10e59f88 ret  */
  ESPCHK(0x10e59f00u, _esp0);
  ESP += 4; return;
L_10e59f89:;
  /* 10e59f89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e59f8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59f8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e59f8f je 0x10e59f40 */
  if (C.zf) goto L_10e59f40;
L_10e59f91:;
  /* 10e59f91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e59f96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10e59f98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59f9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e59f9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e59f9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10e59fa1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59fa4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e59fa9 je 0x10e59f89 */
  if (C.zf) goto L_10e59f89;
  /* 10e59fab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e59fad je 0x10e59fdb */
  if (C.zf) goto L_10e59fdb;
  /* 10e59faf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10e59fb1 je 0x10e59fd1 */
  if (C.zf) goto L_10e59fd1;
  /* 10e59fb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e59fb9 je 0x10e59fc7 */
  if (C.zf) goto L_10e59fc7;
  /* 10e59fbb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e59fc1 jne 0x10e59f89 */
  if (!C.zf) goto L_10e59f89;
  /* 10e59fc3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e59fc5 jmp 0x10e59fdf */
  goto L_10e59fdf;
L_10e59fc7:;
  /* 10e59fc7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e59fcd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e59fcf jmp 0x10e59fdf */
  goto L_10e59fdf;
L_10e59fd1:;
  /* 10e59fd1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e59fd7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e59fd9 jmp 0x10e59fdf */
  goto L_10e59fdf;
L_10e59fdb:;
  /* 10e59fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e59fdd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10e59fdf:;
  /* 10e59fdf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e59fe4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e59fe5 je 0x10e59ff1 */
  if (C.zf) goto L_10e59ff1;
L_10e59fe7:;
  /* 10e59fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e59fe9:;
  /* 10e59fe9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10e59feb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e59fee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e59fef jne 0x10e59fe9 */
  if (!C.zf) goto L_10e59fe9;
L_10e59ff1:;
  /* 10e59ff1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10e59ff4 jne 0x10e59f7b */
  if (!C.zf) goto L_10e59f7b;
L_10e59ff6:;
  /* 10e59ff6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e59ffa pop ebx */
  EBX = (pop32());
  /* 10e59ffb pop esi */
  ESI = (pop32());
  /* 10e59ffc pop edi */
  EDI = (pop32());
  /* 10e59ffd ret  */
  ESPCHK(0x10e59f00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a000 @ 0x10e5a000 (55 bytes, 16 insns) */
void f_10e5a000(void) {
  FTRACE(0x10e5a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a000 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a001 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a003 mov eax, dword ptr [0x10e80b94] */
  EAX = (r32((uint32_t)(0x10e80b94)));
  /* 10e5a008 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a009 call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5a00fu);
  /* 10e5a00f mov ecx, dword ptr [0x10e80b84] */
  ECX = (r32((uint32_t)(0x10e80b84)));
  /* 10e5a015 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a016 call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5a01cu);
  /* 10e5a01c mov edx, dword ptr [0x10e80b74] */
  EDX = (r32((uint32_t)(0x10e80b74)));
  /* 10e5a022 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a023 call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5a029u);
  /* 10e5a029 mov eax, dword ptr [0x10e80b54] */
  EAX = (r32((uint32_t)(0x10e80b54)));
  /* 10e5a02e push eax */
  push32((uint32_t)(EAX));
  /* 10e5a02f call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5a035u);
  /* 10e5a035 pop ebp */
  EBP = (pop32());
  /* 10e5a036 ret  */
  ESPCHK(0x10e5a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a040 @ 0x10e5a040 (159 bytes, 47 insns) */
void f_10e5a040(void) {
  FTRACE(0x10e5a040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a040 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a041 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a043 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5a04b jmp 0x10e5a056 */
  goto L_10e5a056;
L_10e5a04d:;
  /* 10e5a04d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a053 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5a056:;
  /* 10e5a056 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a05a jge 0x10e5a0a9 */
  if ((C.sf==C.of)) goto L_10e5a0a9;
  /* 10e5a05c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a05f cmp dword ptr [ecx*4 + 0x10e80b50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e80b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a067 je 0x10e5a0a7 */
  if (C.zf) goto L_10e5a0a7;
  /* 10e5a069 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a06d je 0x10e5a0a7 */
  if (C.zf) goto L_10e5a0a7;
  /* 10e5a06f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a073 je 0x10e5a0a7 */
  if (C.zf) goto L_10e5a0a7;
  /* 10e5a075 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a079 je 0x10e5a0a7 */
  if (C.zf) goto L_10e5a0a7;
  /* 10e5a07b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a07f je 0x10e5a0a7 */
  if (C.zf) goto L_10e5a0a7;
  /* 10e5a081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a084 mov eax, dword ptr [edx*4 + 0x10e80b50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e80b50)));
  /* 10e5a08b push eax */
  push32((uint32_t)(EAX));
  /* 10e5a08c call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5a092u);
  /* 10e5a092 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5a094 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a097 mov edx, dword ptr [ecx*4 + 0x10e80b50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e80b50)));
  /* 10e5a09e push edx */
  push32((uint32_t)(EDX));
  /* 10e5a09f call 0x10e57170 */
  push32(0x10e5a0a4u); f_10e57170();
  /* 10e5a0a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a0a7:;
  /* 10e5a0a7 jmp 0x10e5a04d */
  goto L_10e5a04d;
L_10e5a0a9:;
  /* 10e5a0a9 mov eax, dword ptr [0x10e80b74] */
  EAX = (r32((uint32_t)(0x10e80b74)));
  /* 10e5a0ae push eax */
  push32((uint32_t)(EAX));
  /* 10e5a0af call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5a0b5u);
  /* 10e5a0b5 mov ecx, dword ptr [0x10e80b84] */
  ECX = (r32((uint32_t)(0x10e80b84)));
  /* 10e5a0bb push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a0bc call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5a0c2u);
  /* 10e5a0c2 mov edx, dword ptr [0x10e80b94] */
  EDX = (r32((uint32_t)(0x10e80b94)));
  /* 10e5a0c8 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a0c9 call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5a0cfu);
  /* 10e5a0cf mov eax, dword ptr [0x10e80b54] */
  EAX = (r32((uint32_t)(0x10e80b54)));
  /* 10e5a0d4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a0d5 call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5a0dbu);
  /* 10e5a0db mov esp, ebp */
  ESP = (EBP);
  /* 10e5a0dd pop ebp */
  EBP = (pop32());
  /* 10e5a0de ret  */
  ESPCHK(0x10e5a040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0e0 @ 0x10e5a0e0 (151 bytes, 46 insns) */
void f_10e5a0e0(void) {
  FTRACE(0x10e5a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a0e7 cmp dword ptr [eax*4 + 0x10e80b50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10e80b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a0ef jne 0x10e5a162 */
  if (!C.zf) goto L_10e5a162;
  /* 10e5a0f1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10e5a0f6 push 0x10e7e1f8 */
  push32((uint32_t)(0x10e7e1f8u));
  /* 10e5a0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5a0fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10e5a0ff call 0x10e566e0 */
  push32(0x10e5a104u); f_10e566e0();
  /* 10e5a104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a107 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a10a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a10e jne 0x10e5a11a */
  if (!C.zf) goto L_10e5a11a;
  /* 10e5a110 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5a112 call 0x10e55650 */
  push32(0x10e5a117u); f_10e55650();
  /* 10e5a117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a11a:;
  /* 10e5a11a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5a11c call 0x10e5a0e0 */
  push32(0x10e5a121u); f_10e5a0e0();
  /* 10e5a121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a124 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a127 cmp dword ptr [ecx*4 + 0x10e80b50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e80b50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a12f jne 0x10e5a14a */
  if (!C.zf) goto L_10e5a14a;
  /* 10e5a131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a134 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a135 call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5a13bu);
  /* 10e5a13b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a13e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a141 mov dword ptr [eax*4 + 0x10e80b50], ecx */
  w32((uint32_t)(EAX*4 + 0x10e80b50), (ECX));
  /* 10e5a148 jmp 0x10e5a158 */
  goto L_10e5a158;
L_10e5a14a:;
  /* 10e5a14a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5a14c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a14f push edx */
  push32((uint32_t)(EDX));
  /* 10e5a150 call 0x10e57170 */
  push32(0x10e5a155u); f_10e57170();
  /* 10e5a155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a158:;
  /* 10e5a158 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5a15a call 0x10e5a180 */
  push32(0x10e5a15fu); f_10e5a180();
  /* 10e5a15f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a162:;
  /* 10e5a162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a165 mov ecx, dword ptr [eax*4 + 0x10e80b50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e80b50)));
  /* 10e5a16c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a16d call dword ptr [0x10e85370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85370))), 0x10e5a173u);
  /* 10e5a173 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a175 pop ebp */
  EBP = (pop32());
  /* 10e5a176 ret  */
  ESPCHK(0x10e5a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a180 @ 0x10e5a180 (22 bytes, 8 insns) */
void f_10e5a180(void) {
  FTRACE(0x10e5a180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a180 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a181 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a186 mov ecx, dword ptr [eax*4 + 0x10e80b50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e80b50)));
  /* 10e5a18d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a18e call dword ptr [0x10e8536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8536c))), 0x10e5a194u);
  /* 10e5a194 pop ebp */
  EBP = (pop32());
  /* 10e5a195 ret  */
  ESPCHK(0x10e5a180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x10e5a1a0 (26 bytes, 10 insns) */
void f_10e5a1a0(void) {
  FTRACE(0x10e5a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a1a6 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a1a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a1a9 call dword ptr [0x10e85368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85368))), 0x10e5a1afu);
  /* 10e5a1af push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e5a1b4 call dword ptr [0x10e853f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853f0))), 0x10e5a1bau);
  /* 10e5a1ba pop ebp */
  EBP = (pop32());
  /* 10e5a1bb ret  */
  ESPCHK(0x10e5a1a0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10e5a1c0 (446 bytes, 130 insns) */
void f_10e5a1c0(void) {
  FTRACE(0x10e5a1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a1c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a1c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5a1c6 call 0x10e56120 */
  push32(0x10e5a1cbu); f_10e56120();
  /* 10e5a1cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5a1ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a1d1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10e5a1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a1d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a1d8 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a1d9 call 0x10e5a380 */
  push32(0x10e5a1deu); f_10e5a380();
  /* 10e5a1de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a1e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e5a1e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a1e8 je 0x10e5a1f3 */
  if (C.zf) goto L_10e5a1f3;
  /* 10e5a1ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a1ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a1f1 jne 0x10e5a202 */
  if (!C.zf) goto L_10e5a202;
L_10e5a1f3:;
  /* 10e5a1f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a1f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a1f7 call dword ptr [0x10e85364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85364))), 0x10e5a1fdu);
  /* 10e5a1fd jmp 0x10e5a37a */
  goto L_10e5a37a;
L_10e5a202:;
  /* 10e5a202 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a205 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a209 jne 0x10e5a21f */
  if (!C.zf) goto L_10e5a21f;
  /* 10e5a20b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a20e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e5a215 mov eax, 1 */
  EAX = (0x1u);
  /* 10e5a21a jmp 0x10e5a37a */
  goto L_10e5a37a;
L_10e5a21f:;
  /* 10e5a21f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a222 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a226 jne 0x10e5a230 */
  if (!C.zf) goto L_10e5a230;
  /* 10e5a228 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a22b jmp 0x10e5a37a */
  goto L_10e5a37a;
L_10e5a230:;
  /* 10e5a230 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a233 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5a236 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a23c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10e5a23f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e5a242 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a245 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a248 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10e5a24b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a24e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a252 jne 0x10e5a357 */
  if (!C.zf) goto L_10e5a357;
  /* 10e5a258 mov eax, dword ptr [0x10e80c88] */
  EAX = (r32((uint32_t)(0x10e80c88)));
  /* 10e5a25d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e5a260 jmp 0x10e5a26b */
  goto L_10e5a26b;
L_10e5a262:;
  /* 10e5a262 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5a265 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a268 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e5a26b:;
  /* 10e5a26b mov edx, dword ptr [0x10e80c88] */
  EDX = (r32((uint32_t)(0x10e80c88)));
  /* 10e5a271 add edx, dword ptr [0x10e80c8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e80c8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a277 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a27a jge 0x10e5a292 */
  if ((C.sf==C.of)) goto L_10e5a292;
  /* 10e5a27c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5a27f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5a282 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a285 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e5a288 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10e5a290 jmp 0x10e5a262 */
  goto L_10e5a262;
L_10e5a292:;
  /* 10e5a292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a295 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10e5a298 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e5a29b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a29e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a2a4 jne 0x10e5a2b5 */
  if (!C.zf) goto L_10e5a2b5;
  /* 10e5a2a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a2a9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10e5a2b0 jmp 0x10e5a33d */
  goto L_10e5a33d;
L_10e5a2b5:;
  /* 10e5a2b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a2b8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a2be jne 0x10e5a2cc */
  if (!C.zf) goto L_10e5a2cc;
  /* 10e5a2c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a2c3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10e5a2ca jmp 0x10e5a33d */
  goto L_10e5a33d;
L_10e5a2cc:;
  /* 10e5a2cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a2cf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a2d5 jne 0x10e5a2e3 */
  if (!C.zf) goto L_10e5a2e3;
  /* 10e5a2d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a2da mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10e5a2e1 jmp 0x10e5a33d */
  goto L_10e5a33d;
L_10e5a2e3:;
  /* 10e5a2e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a2e6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a2ec jne 0x10e5a2fa */
  if (!C.zf) goto L_10e5a2fa;
  /* 10e5a2ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a2f1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10e5a2f8 jmp 0x10e5a33d */
  goto L_10e5a33d;
L_10e5a2fa:;
  /* 10e5a2fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a2fd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a303 jne 0x10e5a311 */
  if (!C.zf) goto L_10e5a311;
  /* 10e5a305 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a308 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10e5a30f jmp 0x10e5a33d */
  goto L_10e5a33d;
L_10e5a311:;
  /* 10e5a311 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a314 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a31a jne 0x10e5a328 */
  if (!C.zf) goto L_10e5a328;
  /* 10e5a31c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a31f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10e5a326 jmp 0x10e5a33d */
  goto L_10e5a33d;
L_10e5a328:;
  /* 10e5a328 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a32b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a331 jne 0x10e5a33d */
  if (!C.zf) goto L_10e5a33d;
  /* 10e5a333 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a336 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10e5a33d:;
  /* 10e5a33d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a340 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10e5a343 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a344 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e5a346 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e5a349u);
  /* 10e5a349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a34c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a34f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5a352 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10e5a355 jmp 0x10e5a36e */
  goto L_10e5a36e;
L_10e5a357:;
  /* 10e5a357 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a35a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e5a361 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a364 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5a367 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a368 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e5a36bu);
  /* 10e5a36b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a36e:;
  /* 10e5a36e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a371 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5a374 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10e5a377 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e5a37a:;
  /* 10e5a37a mov esp, ebp */
  ESP = (EBP);
  /* 10e5a37c pop ebp */
  EBP = (pop32());
  /* 10e5a37d ret  */
  ESPCHK(0x10e5a1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a380 @ 0x10e5a380 (89 bytes, 35 insns) */
void f_10e5a380(void) {
  FTRACE(0x10e5a380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a380 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a381 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a383 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a384 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a387 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5a38a:;
  /* 10e5a38a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a38d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5a38f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a392 je 0x10e5a3b2 */
  if (C.zf) goto L_10e5a3b2;
  /* 10e5a394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a397 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a39a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a39d mov ecx, dword ptr [0x10e80c94] */
  ECX = (r32((uint32_t)(0x10e80c94)));
  /* 10e5a3a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5a3a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a3a9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a3ab cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a3ae jae 0x10e5a3b2 */
  if (!C.cf) goto L_10e5a3b2;
  /* 10e5a3b0 jmp 0x10e5a38a */
  goto L_10e5a38a;
L_10e5a3b2:;
  /* 10e5a3b2 mov eax, dword ptr [0x10e80c94] */
  EAX = (r32((uint32_t)(0x10e80c94)));
  /* 10e5a3b7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5a3ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a3bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a3bf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a3c2 jae 0x10e5a3ce */
  if (!C.cf) goto L_10e5a3ce;
  /* 10e5a3c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a3c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5a3c9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a3cc je 0x10e5a3d2 */
  if (C.zf) goto L_10e5a3d2;
L_10e5a3ce:;
  /* 10e5a3ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a3d0 jmp 0x10e5a3d5 */
  goto L_10e5a3d5;
L_10e5a3d2:;
  /* 10e5a3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5a3d5:;
  /* 10e5a3d5 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a3d7 pop ebp */
  EBP = (pop32());
  /* 10e5a3d8 ret  */
  ESPCHK(0x10e5a380u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10e5a3e0 (48 bytes, 17 insns) */
void f_10e5a3e0(void) {
  FTRACE(0x10e5a3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a3e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a3e6 call 0x10e5a0e0 */
  push32(0x10e5a3ebu); f_10e5a0e0();
  /* 10e5a3eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a3ee mov eax, dword ptr [0x10e8299c] */
  EAX = (r32((uint32_t)(0x10e8299c)));
  /* 10e5a3f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a3f9 mov dword ptr [0x10e8299c], ecx */
  w32((uint32_t)(0x10e8299c), (ECX));
  /* 10e5a3ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a401 call 0x10e5a180 */
  push32(0x10e5a406u); f_10e5a180();
  /* 10e5a406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a409 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a40c mov esp, ebp */
  ESP = (EBP);
  /* 10e5a40e pop ebp */
  EBP = (pop32());
  /* 10e5a40f ret  */
  ESPCHK(0x10e5a3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a410 @ 0x10e5a410 (10 bytes, 5 insns) */
void f_10e5a410(void) {
  FTRACE(0x10e5a410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a410 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a411 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a413 mov eax, dword ptr [0x10e8299c] */
  EAX = (r32((uint32_t)(0x10e8299c)));
  /* 10e5a418 pop ebp */
  EBP = (pop32());
  /* 10e5a419 ret  */
  ESPCHK(0x10e5a410u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10e5a420 (45 bytes, 19 insns) */
void f_10e5a420(void) {
  FTRACE(0x10e5a420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a420 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a421 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a423 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a424 mov eax, dword ptr [0x10e8299c] */
  EAX = (r32((uint32_t)(0x10e8299c)));
  /* 10e5a429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a42c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a430 je 0x10e5a440 */
  if (C.zf) goto L_10e5a440;
  /* 10e5a432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a435 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a436 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e5a439u);
  /* 10e5a439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a43c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a43e jne 0x10e5a444 */
  if (!C.zf) goto L_10e5a444;
L_10e5a440:;
  /* 10e5a440 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a442 jmp 0x10e5a449 */
  goto L_10e5a449;
L_10e5a444:;
  /* 10e5a444 mov eax, 1 */
  EAX = (0x1u);
L_10e5a449:;
  /* 10e5a449 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a44b pop ebp */
  EBP = (pop32());
  /* 10e5a44c ret  */
  ESPCHK(0x10e5a420u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10e5a450 (88 bytes, 40 insns) */
void f_10e5a450(void) {
  FTRACE(0x10e5a450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a450 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e5a454 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e5a458 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5a45a je 0x10e5a4a3 */
  if (C.zf) goto L_10e5a4a3;
  /* 10e5a45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a45e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10e5a462 push edi */
  push32((uint32_t)(EDI));
  /* 10e5a463 mov edi, ecx */
  EDI = (ECX);
  /* 10e5a465 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a468 jb 0x10e5a497 */
  if (C.cf) goto L_10e5a497;
  /* 10e5a46a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5a46c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5a46f je 0x10e5a479 */
  if (C.zf) goto L_10e5a479;
  /* 10e5a471 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e5a473:;
  /* 10e5a473 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5a475 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e5a476 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e5a477 jne 0x10e5a473 */
  if (!C.zf) goto L_10e5a473;
L_10e5a479:;
  /* 10e5a479 mov ecx, eax */
  ECX = (EAX);
  /* 10e5a47b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e5a47e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a480 mov ecx, eax */
  ECX = (EAX);
  /* 10e5a482 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e5a485 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a487 mov ecx, edx */
  ECX = (EDX);
  /* 10e5a489 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5a48c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5a48f je 0x10e5a497 */
  if (C.zf) goto L_10e5a497;
  /* 10e5a491 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e5a493 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5a495 je 0x10e5a49d */
  if (C.zf) goto L_10e5a49d;
L_10e5a497:;
  /* 10e5a497 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5a499 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e5a49a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10e5a49b jne 0x10e5a497 */
  if (!C.zf) goto L_10e5a497;
L_10e5a49d:;
  /* 10e5a49d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e5a4a1 pop edi */
  EDI = (pop32());
  /* 10e5a4a2 ret  */
  ESPCHK(0x10e5a450u, _esp0);
  ESP += 4; return;
L_10e5a4a3:;
  /* 10e5a4a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e5a4a7 ret  */
  ESPCHK(0x10e5a450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4b0 @ 0x10e5a4b0 (23 bytes, 10 insns) */
void f_10e5a4b0(void) {
  FTRACE(0x10e5a4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a4b3 mov eax, dword ptr [0x10e82998] */
  EAX = (r32((uint32_t)(0x10e82998)));
  /* 10e5a4b8 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a4b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a4bc push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a4bd call 0x10e5a4d0 */
  push32(0x10e5a4c2u); f_10e5a4d0();
  /* 10e5a4c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a4c5 pop ebp */
  EBP = (pop32());
  /* 10e5a4c6 ret  */
  ESPCHK(0x10e5a4b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10e5a4d0 (87 bytes, 34 insns) */
void f_10e5a4d0(void) {
  FTRACE(0x10e5a4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a4d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a4d8 jbe 0x10e5a4de */
  if ((C.cf||C.zf)) goto L_10e5a4de;
  /* 10e5a4da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a4dc jmp 0x10e5a523 */
  goto L_10e5a523;
L_10e5a4de:;
  /* 10e5a4de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a4e2 ja 0x10e5a4f5 */
  if ((!C.cf&&!C.zf)) goto L_10e5a4f5;
  /* 10e5a4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a4e7 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a4e8 call 0x10e5a530 */
  push32(0x10e5a4edu); f_10e5a530();
  /* 10e5a4ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a4f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a4f3 jmp 0x10e5a4fc */
  goto L_10e5a4fc;
L_10e5a4f5:;
  /* 10e5a4f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e5a4fc:;
  /* 10e5a4fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a500 jne 0x10e5a508 */
  if (!C.zf) goto L_10e5a508;
  /* 10e5a502 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a506 jne 0x10e5a50d */
  if (!C.zf) goto L_10e5a50d;
L_10e5a508:;
  /* 10e5a508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a50b jmp 0x10e5a523 */
  goto L_10e5a523;
L_10e5a50d:;
  /* 10e5a50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a510 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a511 call 0x10e5a420 */
  push32(0x10e5a516u); f_10e5a420();
  /* 10e5a516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a51b jne 0x10e5a521 */
  if (!C.zf) goto L_10e5a521;
  /* 10e5a51d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a51f jmp 0x10e5a523 */
  goto L_10e5a523;
L_10e5a521:;
  /* 10e5a521 jmp 0x10e5a4de */
  goto L_10e5a4de;
L_10e5a523:;
  /* 10e5a523 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a525 pop ebp */
  EBP = (pop32());
  /* 10e5a526 ret  */
  ESPCHK(0x10e5a4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a530 @ 0x10e5a530 (109 bytes, 37 insns) */
void f_10e5a530(void) {
  FTRACE(0x10e5a530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a530 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a531 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a533 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a537 cmp eax, dword ptr [0x10e80ca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e80ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a53d ja 0x10e5a56d */
  if ((!C.cf&&!C.zf)) goto L_10e5a56d;
  /* 10e5a53f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a541 call 0x10e5a0e0 */
  push32(0x10e5a546u); f_10e5a0e0();
  /* 10e5a546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a54c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a54d call 0x10e5b070 */
  push32(0x10e5a552u); f_10e5b070();
  /* 10e5a552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a558 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a55a call 0x10e5a180 */
  push32(0x10e5a55fu); f_10e5a180();
  /* 10e5a55f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a562 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a566 je 0x10e5a56d */
  if (C.zf) goto L_10e5a56d;
  /* 10e5a568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a56b jmp 0x10e5a599 */
  goto L_10e5a599;
L_10e5a56d:;
  /* 10e5a56d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a571 jne 0x10e5a57a */
  if (!C.zf) goto L_10e5a57a;
  /* 10e5a573 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10e5a57a:;
  /* 10e5a57a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a57d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a580 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5a583 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e5a586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a589 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a58a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a58c mov ecx, dword ptr [0x10e8414c] */
  ECX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a592 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a593 call dword ptr [0x10e85360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85360))), 0x10e5a599u);
L_10e5a599:;
  /* 10e5a599 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a59b pop ebp */
  EBP = (pop32());
  /* 10e5a59c ret  */
  ESPCHK(0x10e5a530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5a0 @ 0x10e5a5a0 (10 bytes, 5 insns) */
void f_10e5a5a0(void) {
  FTRACE(0x10e5a5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a5a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a5a3 mov eax, 1 */
  EAX = (0x1u);
  /* 10e5a5a8 pop ebp */
  EBP = (pop32());
  /* 10e5a5a9 ret  */
  ESPCHK(0x10e5a5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x10e5a5b0 (173 bytes, 59 insns) */
void f_10e5a5b0(void) {
  FTRACE(0x10e5a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5a5b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a5ba jbe 0x10e5a5c3 */
  if ((C.cf||C.zf)) goto L_10e5a5c3;
  /* 10e5a5bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a5be jmp 0x10e5a659 */
  goto L_10e5a659;
L_10e5a5c3:;
  /* 10e5a5c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a5c5 call 0x10e5a0e0 */
  push32(0x10e5a5cau); f_10e5a0e0();
  /* 10e5a5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a5cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a5d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a5d1 call 0x10e5a9e0 */
  push32(0x10e5a5d6u); f_10e5a9e0();
  /* 10e5a5d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a5d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5a5dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a5e0 je 0x10e5a621 */
  if (C.zf) goto L_10e5a621;
  /* 10e5a5e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5a5e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a5ec cmp ecx, dword ptr [0x10e80ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e80ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a5f2 ja 0x10e5a612 */
  if ((!C.cf&&!C.zf)) goto L_10e5a612;
  /* 10e5a5f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a5f7 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a5f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a5fb push eax */
  push32((uint32_t)(EAX));
  /* 10e5a5fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a5ff push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a600 call 0x10e5b8b0 */
  push32(0x10e5a605u); f_10e5b8b0();
  /* 10e5a605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a60a je 0x10e5a612 */
  if (C.zf) goto L_10e5a612;
  /* 10e5a60c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a60f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5a612:;
  /* 10e5a612 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a614 call 0x10e5a180 */
  push32(0x10e5a619u); f_10e5a180();
  /* 10e5a619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a61c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a61f jmp 0x10e5a659 */
  goto L_10e5a659;
L_10e5a621:;
  /* 10e5a621 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a623 call 0x10e5a180 */
  push32(0x10e5a628u); f_10e5a180();
  /* 10e5a628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a62b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a62f jne 0x10e5a638 */
  if (!C.zf) goto L_10e5a638;
  /* 10e5a631 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e5a638:;
  /* 10e5a638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a63b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a63e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10e5a640 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e5a643 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a646 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a64a push edx */
  push32((uint32_t)(EDX));
  /* 10e5a64b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e5a64d mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a652 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a653 call dword ptr [0x10e8535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8535c))), 0x10e5a659u);
L_10e5a659:;
  /* 10e5a659 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a65b pop ebp */
  EBP = (pop32());
  /* 10e5a65c ret  */
  ESPCHK(0x10e5a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x10e5a660 (490 bytes, 165 insns) */
void f_10e5a660(void) {
  FTRACE(0x10e5a660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a660 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a661 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5a666 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a66a jne 0x10e5a67d */
  if (!C.zf) goto L_10e5a67d;
  /* 10e5a66c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a66f push eax */
  push32((uint32_t)(EAX));
  /* 10e5a670 call 0x10e5a4b0 */
  push32(0x10e5a675u); f_10e5a4b0();
  /* 10e5a675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a678 jmp 0x10e5a846 */
  goto L_10e5a846;
L_10e5a67d:;
  /* 10e5a67d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a681 jne 0x10e5a696 */
  if (!C.zf) goto L_10e5a696;
  /* 10e5a683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a686 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a687 call 0x10e5a850 */
  push32(0x10e5a68cu); f_10e5a850();
  /* 10e5a68c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a68f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a691 jmp 0x10e5a846 */
  goto L_10e5a846;
L_10e5a696:;
  /* 10e5a696 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e5a69d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a6a1 ja 0x10e5a819 */
  if ((!C.cf&&!C.zf)) goto L_10e5a819;
  /* 10e5a6a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a6a9 call 0x10e5a0e0 */
  push32(0x10e5a6aeu); f_10e5a0e0();
  /* 10e5a6ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a6b4 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a6b5 call 0x10e5a9e0 */
  push32(0x10e5a6bau); f_10e5a9e0();
  /* 10e5a6ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a6bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e5a6c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a6c4 je 0x10e5a7dc */
  if (C.zf) goto L_10e5a7dc;
  /* 10e5a6ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a6cd cmp eax, dword ptr [0x10e80ca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e80ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a6d3 ja 0x10e5a750 */
  if ((!C.cf&&!C.zf)) goto L_10e5a750;
  /* 10e5a6d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a6d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a6dc push edx */
  push32((uint32_t)(EDX));
  /* 10e5a6dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5a6e0 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a6e1 call 0x10e5b8b0 */
  push32(0x10e5a6e6u); f_10e5b8b0();
  /* 10e5a6e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a6e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a6eb je 0x10e5a6f5 */
  if (C.zf) goto L_10e5a6f5;
  /* 10e5a6ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a6f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5a6f3 jmp 0x10e5a750 */
  goto L_10e5a750;
L_10e5a6f5:;
  /* 10e5a6f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a6f8 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a6f9 call 0x10e5b070 */
  push32(0x10e5a6feu); f_10e5b070();
  /* 10e5a6fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a701 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5a704 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a708 je 0x10e5a750 */
  if (C.zf) goto L_10e5a750;
  /* 10e5a70a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a70d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10e5a710 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5a713 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5a716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a719 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a71c jae 0x10e5a726 */
  if (!C.cf) goto L_10e5a726;
  /* 10e5a71e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a721 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e5a724 jmp 0x10e5a72c */
  goto L_10e5a72c;
L_10e5a726:;
  /* 10e5a726 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a729 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e5a72c:;
  /* 10e5a72c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5a72f push edx */
  push32((uint32_t)(EDX));
  /* 10e5a730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a733 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a737 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a738 call 0x10e5cfc0 */
  push32(0x10e5a73du); f_10e5cfc0();
  /* 10e5a73d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a743 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a744 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5a747 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a748 call 0x10e5aaa0 */
  push32(0x10e5a74du); f_10e5aaa0();
  /* 10e5a74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a750:;
  /* 10e5a750 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a754 jne 0x10e5a7d0 */
  if (!C.zf) goto L_10e5a7d0;
  /* 10e5a756 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a75a jne 0x10e5a763 */
  if (!C.zf) goto L_10e5a763;
  /* 10e5a75c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e5a763:;
  /* 10e5a763 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a766 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a769 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5a76c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e5a76f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a772 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a773 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a775 mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a77a push eax */
  push32((uint32_t)(EAX));
  /* 10e5a77b call dword ptr [0x10e85360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85360))), 0x10e5a781u);
  /* 10e5a781 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5a784 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a788 je 0x10e5a7d0 */
  if (C.zf) goto L_10e5a7d0;
  /* 10e5a78a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a78d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e5a790 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5a793 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5a796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a799 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a79c jae 0x10e5a7a6 */
  if (!C.cf) goto L_10e5a7a6;
  /* 10e5a79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a7a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e5a7a4 jmp 0x10e5a7ac */
  goto L_10e5a7ac;
L_10e5a7a6:;
  /* 10e5a7a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a7a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e5a7ac:;
  /* 10e5a7ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5a7af push eax */
  push32((uint32_t)(EAX));
  /* 10e5a7b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a7b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a7b7 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a7b8 call 0x10e5cfc0 */
  push32(0x10e5a7bdu); f_10e5cfc0();
  /* 10e5a7bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a7c3 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a7c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5a7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a7c8 call 0x10e5aaa0 */
  push32(0x10e5a7cdu); f_10e5aaa0();
  /* 10e5a7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5a7d0:;
  /* 10e5a7d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a7d2 call 0x10e5a180 */
  push32(0x10e5a7d7u); f_10e5a180();
  /* 10e5a7d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a7da jmp 0x10e5a819 */
  goto L_10e5a819;
L_10e5a7dc:;
  /* 10e5a7dc push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a7de call 0x10e5a180 */
  push32(0x10e5a7e3u); f_10e5a180();
  /* 10e5a7e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a7e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a7ea jne 0x10e5a7f3 */
  if (!C.zf) goto L_10e5a7f3;
  /* 10e5a7ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e5a7f3:;
  /* 10e5a7f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a7f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a7f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5a7fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e5a7ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a802 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a806 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a809 mov edx, dword ptr [0x10e8414c] */
  EDX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a80f push edx */
  push32((uint32_t)(EDX));
  /* 10e5a810 call dword ptr [0x10e8535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8535c))), 0x10e5a816u);
  /* 10e5a816 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e5a819:;
  /* 10e5a819 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a81d jne 0x10e5a828 */
  if (!C.zf) goto L_10e5a828;
  /* 10e5a81f cmp dword ptr [0x10e82998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a826 jne 0x10e5a82d */
  if (!C.zf) goto L_10e5a82d;
L_10e5a828:;
  /* 10e5a828 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5a82b jmp 0x10e5a846 */
  goto L_10e5a846;
L_10e5a82d:;
  /* 10e5a82d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5a830 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a831 call 0x10e5a420 */
  push32(0x10e5a836u); f_10e5a420();
  /* 10e5a836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a83b jne 0x10e5a841 */
  if (!C.zf) goto L_10e5a841;
  /* 10e5a83d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a83f jmp 0x10e5a846 */
  goto L_10e5a846;
L_10e5a841:;
  /* 10e5a841 jmp 0x10e5a696 */
  goto L_10e5a696;
L_10e5a846:;
  /* 10e5a846 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a848 pop ebp */
  EBP = (pop32());
  /* 10e5a849 ret  */
  ESPCHK(0x10e5a660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a850 @ 0x10e5a850 (104 bytes, 38 insns) */
void f_10e5a850(void) {
  FTRACE(0x10e5a850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a850 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a851 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a853 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a854 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a858 jne 0x10e5a85c */
  if (!C.zf) goto L_10e5a85c;
  /* 10e5a85a jmp 0x10e5a8b4 */
  goto L_10e5a8b4;
L_10e5a85c:;
  /* 10e5a85c push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a85e call 0x10e5a0e0 */
  push32(0x10e5a863u); f_10e5a0e0();
  /* 10e5a863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a869 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a86a call 0x10e5a9e0 */
  push32(0x10e5a86fu); f_10e5a9e0();
  /* 10e5a86f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5a875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a879 je 0x10e5a897 */
  if (C.zf) goto L_10e5a897;
  /* 10e5a87b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a87e push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a87f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a882 push edx */
  push32((uint32_t)(EDX));
  /* 10e5a883 call 0x10e5aaa0 */
  push32(0x10e5a888u); f_10e5aaa0();
  /* 10e5a888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a88b push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a88d call 0x10e5a180 */
  push32(0x10e5a892u); f_10e5a180();
  /* 10e5a892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a895 jmp 0x10e5a8b4 */
  goto L_10e5a8b4;
L_10e5a897:;
  /* 10e5a897 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a899 call 0x10e5a180 */
  push32(0x10e5a89eu); f_10e5a180();
  /* 10e5a89e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a8a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a8a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a8a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a8a7 mov ecx, dword ptr [0x10e8414c] */
  ECX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a8ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a8ae call dword ptr [0x10e85380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85380))), 0x10e5a8b4u);
L_10e5a8b4:;
  /* 10e5a8b4 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a8b6 pop ebp */
  EBP = (pop32());
  /* 10e5a8b7 ret  */
  ESPCHK(0x10e5a850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x10e5a8c0 (116 bytes, 34 insns) */
void f_10e5a8c0(void) {
  FTRACE(0x10e5a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5a8c4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10e5a8cb push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a8cd call 0x10e5a0e0 */
  push32(0x10e5a8d2u); f_10e5a0e0();
  /* 10e5a8d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a8d5 call 0x10e5bfd0 */
  push32(0x10e5a8dau); f_10e5bfd0();
  /* 10e5a8da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a8dc jge 0x10e5a8e5 */
  if ((C.sf==C.of)) goto L_10e5a8e5;
  /* 10e5a8de mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10e5a8e5:;
  /* 10e5a8e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e5a8e7 call 0x10e5a180 */
  push32(0x10e5a8ecu); f_10e5a180();
  /* 10e5a8ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a8ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a8f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a8f3 mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a8f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e5a8f9 call dword ptr [0x10e853a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a0))), 0x10e5a8ffu);
  /* 10e5a8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5a901 jne 0x10e5a92d */
  if (!C.zf) goto L_10e5a92d;
  /* 10e5a903 call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e5a909u);
  /* 10e5a909 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a90c jne 0x10e5a926 */
  if (!C.zf) goto L_10e5a926;
  /* 10e5a90e call 0x10e5e5c0 */
  push32(0x10e5a913u); f_10e5e5c0();
  /* 10e5a913 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10e5a919 call 0x10e5e5b0 */
  push32(0x10e5a91eu); f_10e5e5b0();
  /* 10e5a91e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10e5a924 jmp 0x10e5a92d */
  goto L_10e5a92d;
L_10e5a926:;
  /* 10e5a926 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10e5a92d:;
  /* 10e5a92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5a930 mov esp, ebp */
  ESP = (EBP);
  /* 10e5a932 pop ebp */
  EBP = (pop32());
  /* 10e5a933 ret  */
  ESPCHK(0x10e5a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a940 @ 0x10e5a940 (10 bytes, 5 insns) */
void f_10e5a940(void) {
  FTRACE(0x10e5a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a940 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a941 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a943 call 0x10e5a8c0 */
  push32(0x10e5a948u); f_10e5a8c0();
  /* 10e5a948 pop ebp */
  EBP = (pop32());
  /* 10e5a949 ret  */
  ESPCHK(0x10e5a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a950 @ 0x10e5a950 (10 bytes, 5 insns) */
void f_10e5a950(void) {
  FTRACE(0x10e5a950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a950 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a951 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a953 mov eax, dword ptr [0x10e80ca4] */
  EAX = (r32((uint32_t)(0x10e80ca4)));
  /* 10e5a958 pop ebp */
  EBP = (pop32());
  /* 10e5a959 ret  */
  ESPCHK(0x10e5a950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x10e5a960 (31 bytes, 11 insns) */
void f_10e5a960(void) {
  FTRACE(0x10e5a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a960 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a961 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a963 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a96a jbe 0x10e5a970 */
  if ((C.cf||C.zf)) goto L_10e5a970;
  /* 10e5a96c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a96e jmp 0x10e5a97d */
  goto L_10e5a97d;
L_10e5a970:;
  /* 10e5a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5a973 mov dword ptr [0x10e80ca4], eax */
  w32((uint32_t)(0x10e80ca4), (EAX));
  /* 10e5a978 mov eax, 1 */
  EAX = (0x1u);
L_10e5a97d:;
  /* 10e5a97d pop ebp */
  EBP = (pop32());
  /* 10e5a97e ret  */
  ESPCHK(0x10e5a960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a980 @ 0x10e5a980 (89 bytes, 20 insns) */
void f_10e5a980(void) {
  FTRACE(0x10e5a980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a980 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a981 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a983 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10e5a988 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5a98a mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5a98f push eax */
  push32((uint32_t)(EAX));
  /* 10e5a990 call dword ptr [0x10e85360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85360))), 0x10e5a996u);
  /* 10e5a996 mov dword ptr [0x10e84148], eax */
  w32((uint32_t)(0x10e84148), (EAX));
  /* 10e5a99b cmp dword ptr [0x10e84148], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e84148))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5a9a2 jne 0x10e5a9a8 */
  if (!C.zf) goto L_10e5a9a8;
  /* 10e5a9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5a9a6 jmp 0x10e5a9d7 */
  goto L_10e5a9d7;
L_10e5a9a8:;
  /* 10e5a9a8 mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5a9ae mov dword ptr [0x10e8413c], ecx */
  w32((uint32_t)(0x10e8413c), (ECX));
  /* 10e5a9b4 mov dword ptr [0x10e84140], 0 */
  w32((uint32_t)(0x10e84140), (0x0u));
  /* 10e5a9be mov dword ptr [0x10e84144], 0 */
  w32((uint32_t)(0x10e84144), (0x0u));
  /* 10e5a9c8 mov dword ptr [0x10e84128], 0x10 */
  w32((uint32_t)(0x10e84128), (0x10u));
  /* 10e5a9d2 mov eax, 1 */
  EAX = (0x1u);
L_10e5a9d7:;
  /* 10e5a9d7 pop ebp */
  EBP = (pop32());
  /* 10e5a9d8 ret  */
  ESPCHK(0x10e5a980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9e0 @ 0x10e5a9e0 (85 bytes, 29 insns) */
void f_10e5a9e0(void) {
  FTRACE(0x10e5a9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5a9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5a9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5a9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5a9e6 mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5a9eb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5a9ee mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5a9f4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5a9f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e5a9f9 mov edx, dword ptr [0x10e84148] */
  EDX = (r32((uint32_t)(0x10e84148)));
  /* 10e5a9ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e5aa02:;
  /* 10e5aa02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5aa08 jae 0x10e5aa2f */
  if (!C.cf) goto L_10e5aa2f;
  /* 10e5aa0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aa10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aa13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5aa16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5aa1d jae 0x10e5aa24 */
  if (!C.cf) goto L_10e5aa24;
  /* 10e5aa1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa22 jmp 0x10e5aa31 */
  goto L_10e5aa31;
L_10e5aa24:;
  /* 10e5aa24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5aa2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5aa2d jmp 0x10e5aa02 */
  goto L_10e5aa02;
L_10e5aa2f:;
  /* 10e5aa2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5aa31:;
  /* 10e5aa31 mov esp, ebp */
  ESP = (EBP);
  /* 10e5aa33 pop ebp */
  EBP = (pop32());
  /* 10e5aa34 ret  */
  ESPCHK(0x10e5a9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x10e5aa40 (95 bytes, 33 insns) */
void f_10e5aa40(void) {
  FTRACE(0x10e5aa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5aa40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5aa41 mov ebp, esp */
  EBP = (ESP);
  /* 10e5aa43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aa46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aa49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5aa4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aa4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5aa52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e5aa58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5aa5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5aa60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5aa63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5aa65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aa68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5aa6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5aa6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5aa6f jne 0x10e5aa91 */
  if (!C.zf) goto L_10e5aa91;
  /* 10e5aa71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5aa77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5aa79 jne 0x10e5aa91 */
  if (!C.zf) goto L_10e5aa91;
  /* 10e5aa7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aa7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5aa84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5aa86 je 0x10e5aa91 */
  if (C.zf) goto L_10e5aa91;
  /* 10e5aa88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10e5aa8f jmp 0x10e5aa98 */
  goto L_10e5aa98;
L_10e5aa91:;
  /* 10e5aa91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e5aa98:;
  /* 10e5aa98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5aa9b mov esp, ebp */
  ESP = (EBP);
  /* 10e5aa9d pop ebp */
  EBP = (pop32());
  /* 10e5aa9e ret  */
  ESPCHK(0x10e5aa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa0 @ 0x10e5aaa0 (1485 bytes, 453 insns) */
void f_10e5aaa0(void) {
  FTRACE(0x10e5aaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5aaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5aaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5aaa3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aaa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aaa9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5aaac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10e5aaaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aab2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5aab5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aab8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e5aabb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5aabe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10e5aac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5aac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5aac7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5aacd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5aad0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10e5aad7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5aada mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5aadd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aae0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e5aae3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5aae6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5aae8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aaeb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e5aaee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5aaf1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5aaf4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10e5aaf7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5aafa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5aafc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e5aaff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ab02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10e5ab05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e5ab08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5ab0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ab0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5ab10 jne 0x10e5ac38 */
  if (!C.zf) goto L_10e5ac38;
  /* 10e5ab16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5ab19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e5ab1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ab1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e5ab22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ab26 jbe 0x10e5ab2f */
  if ((C.cf||C.zf)) goto L_10e5ab2f;
  /* 10e5ab28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e5ab2f:;
  /* 10e5ab2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5ab32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5ab35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5ab38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ab3b jne 0x10e5ac11 */
  if (!C.zf) goto L_10e5ac11;
  /* 10e5ab41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ab45 jae 0x10e5aba6 */
  if (!C.cf) goto L_10e5aba6;
  /* 10e5ab47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5ab4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ab4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5ab51 not eax */
  EAX = (~(EAX));
  /* 10e5ab53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ab56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ab59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e5ab5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ab5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ab62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ab65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e5ab69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ab6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ab6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e5ab72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5ab75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ab78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ab7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e5ab7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ab81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ab84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5ab88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ab8a jne 0x10e5aba4 */
  if (!C.zf) goto L_10e5aba4;
  /* 10e5ab8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5ab91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ab94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5ab96 not eax */
  EAX = (~(EAX));
  /* 10e5ab98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ab9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5ab9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ab9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aba2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e5aba4:;
  /* 10e5aba4 jmp 0x10e5ac11 */
  goto L_10e5ac11;
L_10e5aba6:;
  /* 10e5aba6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5aba9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5abac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5abb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5abb3 not edx */
  EDX = (~(EDX));
  /* 10e5abb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5abb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5abbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e5abc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5abc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5abc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5abca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10e5abd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5abd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5abd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5abda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5abdd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5abe0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5abe3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e5abe6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5abe9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5abec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5abf0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5abf2 jne 0x10e5ac11 */
  if (!C.zf) goto L_10e5ac11;
  /* 10e5abf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5abf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5abfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5abff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5ac01 not edx */
  EDX = (~(EDX));
  /* 10e5ac03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ac06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5ac09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ac0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ac0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e5ac11:;
  /* 10e5ac11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5ac14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5ac17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5ac1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5ac1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e5ac20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5ac23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5ac26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5ac29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5ac2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5ac2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ac32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ac35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10e5ac38:;
  /* 10e5ac38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ac3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e5ac3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ac41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5ac44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ac48 jbe 0x10e5ac51 */
  if ((C.cf||C.zf)) goto L_10e5ac51;
  /* 10e5ac4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10e5ac51:;
  /* 10e5ac51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5ac54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ac57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5ac59 jne 0x10e5adb5 */
  if (!C.zf) goto L_10e5adb5;
  /* 10e5ac5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ac62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ac65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10e5ac68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5ac6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e5ac6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ac71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e5ac74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ac78 jbe 0x10e5ac81 */
  if ((C.cf||C.zf)) goto L_10e5ac81;
  /* 10e5ac7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10e5ac81:;
  /* 10e5ac81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ac84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ac87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e5ac8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ac8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e5ac90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ac93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e5ac96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ac9a jbe 0x10e5aca3 */
  if ((C.cf||C.zf)) goto L_10e5aca3;
  /* 10e5ac9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10e5aca3:;
  /* 10e5aca3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5aca6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5aca9 je 0x10e5adaf */
  if (C.zf) goto L_10e5adaf;
  /* 10e5acaf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5acb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5acb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5acb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5acbb jne 0x10e5ad91 */
  if (!C.zf) goto L_10e5ad91;
  /* 10e5acc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5acc5 jae 0x10e5ad26 */
  if (!C.cf) goto L_10e5ad26;
  /* 10e5acc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5accc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5accf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5acd1 not edx */
  EDX = (~(EDX));
  /* 10e5acd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5acd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5acd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e5acdd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5acdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ace2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ace5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e5ace9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5acec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5acef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5acf2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5acf5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5acf8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5acfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e5acfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ad01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ad04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5ad08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5ad0a jne 0x10e5ad24 */
  if (!C.zf) goto L_10e5ad24;
  /* 10e5ad0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5ad11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ad14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5ad16 not edx */
  EDX = (~(EDX));
  /* 10e5ad18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ad1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5ad1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ad1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ad22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e5ad24:;
  /* 10e5ad24 jmp 0x10e5ad91 */
  goto L_10e5ad91;
L_10e5ad26:;
  /* 10e5ad26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ad29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ad2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5ad31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5ad33 not eax */
  EAX = (~(EAX));
  /* 10e5ad35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ad38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ad3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e5ad42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ad44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ad47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ad4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e5ad51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ad54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ad57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e5ad5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5ad5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ad60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ad63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e5ad66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ad69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ad6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5ad70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ad72 jne 0x10e5ad91 */
  if (!C.zf) goto L_10e5ad91;
  /* 10e5ad74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ad77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ad7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5ad7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5ad81 not eax */
  EAX = (~(EAX));
  /* 10e5ad83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ad86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5ad89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ad8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ad8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e5ad91:;
  /* 10e5ad91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5ad94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5ad97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5ad9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5ad9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e5ada0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5ada3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5ada6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5ada9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5adac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10e5adaf:;
  /* 10e5adaf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5adb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10e5adb5:;
  /* 10e5adb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5adb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5adbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5adbd jne 0x10e5adcb */
  if (!C.zf) goto L_10e5adcb;
  /* 10e5adbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5adc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5adc5 je 0x10e5aedb */
  if (C.zf) goto L_10e5aedb;
L_10e5adcb:;
  /* 10e5adcb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5adce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5add1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10e5add4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e5add7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5adda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5addd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5ade0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e5ade3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ade6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ade9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e5adec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5adef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5adf2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e5adf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5adf8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5adfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5adfe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e5ae01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ae04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ae07 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5ae0a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ae0d jne 0x10e5aedb */
  if (!C.zf) goto L_10e5aedb;
  /* 10e5ae13 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ae17 jae 0x10e5ae74 */
  if (!C.cf) goto L_10e5ae74;
  /* 10e5ae19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae1c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ae1f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5ae23 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae26 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ae29 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5ae2c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5ae2f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae32 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ae35 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e5ae38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ae3a jne 0x10e5ae52 */
  if (!C.zf) goto L_10e5ae52;
  /* 10e5ae3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5ae41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5ae44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5ae46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ae49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5ae4b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ae4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ae50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e5ae52:;
  /* 10e5ae52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5ae57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5ae5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5ae5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ae5f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e5ae66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ae68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ae6b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e5ae72 jmp 0x10e5aedb */
  goto L_10e5aedb;
L_10e5ae74:;
  /* 10e5ae74 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae77 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ae7a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5ae7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae81 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ae84 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5ae87 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5ae8a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5ae8d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ae90 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e5ae93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ae95 jne 0x10e5aeb2 */
  if (!C.zf) goto L_10e5aeb2;
  /* 10e5ae97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5ae9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ae9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5aea2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5aea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aea7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5aeaa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5aeac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5aeaf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e5aeb2:;
  /* 10e5aeb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5aeb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aeb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5aebd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5aebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5aec2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5aec5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e5aecc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5aece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5aed1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10e5aed4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10e5aedb:;
  /* 10e5aedb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5aede mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5aee1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e5aee3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5aee6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5aee9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5aeec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10e5aeef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aef2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5aef4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5aef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aefa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e5aefc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5aeff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5af02 jne 0x10e5b069 */
  if (!C.zf) goto L_10e5b069;
  /* 10e5af08 cmp dword ptr [0x10e84140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e84140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5af0f je 0x10e5b058 */
  if (C.zf) goto L_10e5b058;
  /* 10e5af15 mov eax, dword ptr [0x10e84138] */
  EAX = (r32((uint32_t)(0x10e84138)));
  /* 10e5af1a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10e5af1d mov ecx, dword ptr [0x10e84140] */
  ECX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5af26 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5af28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e5af2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e5af30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e5af35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5af38 push eax */
  push32((uint32_t)(EAX));
  /* 10e5af39 call dword ptr [0x10e8537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8537c))), 0x10e5af3fu);
  /* 10e5af3f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5af44 mov ecx, dword ptr [0x10e84138] */
  ECX = (r32((uint32_t)(0x10e84138)));
  /* 10e5af4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5af4c mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af51 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5af54 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5af56 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5af5f mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af64 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5af67 mov edx, dword ptr [0x10e84138] */
  EDX = (r32((uint32_t)(0x10e84138)));
  /* 10e5af6d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10e5af78 mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5af80 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10e5af83 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5af86 mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5af8e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10e5af91 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5af97 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5af9a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10e5af9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5afa0 jne 0x10e5afb6 */
  if (!C.zf) goto L_10e5afb6;
  /* 10e5afa2 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5afa8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5afab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10e5afad mov ecx, dword ptr [0x10e84140] */
  ECX = (r32((uint32_t)(0x10e84140)));
  /* 10e5afb3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10e5afb6:;
  /* 10e5afb6 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5afbc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5afc0 jne 0x10e5b058 */
  if (!C.zf) goto L_10e5b058;
  /* 10e5afc6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e5afcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5afcd mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5afd2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5afd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5afd6 call dword ptr [0x10e8537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8537c))), 0x10e5afdcu);
  /* 10e5afdc mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5afe2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5afe5 push eax */
  push32((uint32_t)(EAX));
  /* 10e5afe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5afe8 mov ecx, dword ptr [0x10e8414c] */
  ECX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5afee push ecx */
  push32((uint32_t)(ECX));
  /* 10e5afef call dword ptr [0x10e85380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85380))), 0x10e5aff5u);
  /* 10e5aff5 mov edx, dword ptr [0x10e84144] */
  EDX = (r32((uint32_t)(0x10e84144)));
  /* 10e5affb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5affe mov eax, dword ptr [0x10e84148] */
  EAX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b003 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b005 mov ecx, dword ptr [0x10e84140] */
  ECX = (r32((uint32_t)(0x10e84140)));
  /* 10e5b00b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b00e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b010 push eax */
  push32((uint32_t)(EAX));
  /* 10e5b011 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5b017 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b01a push edx */
  push32((uint32_t)(EDX));
  /* 10e5b01b mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5b020 push eax */
  push32((uint32_t)(EAX));
  /* 10e5b021 call 0x10e5e5d0 */
  push32(0x10e5b026u); f_10e5e5d0();
  /* 10e5b026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b029 mov ecx, dword ptr [0x10e84144] */
  ECX = (r32((uint32_t)(0x10e84144)));
  /* 10e5b02f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b032 mov dword ptr [0x10e84144], ecx */
  w32((uint32_t)(0x10e84144), (ECX));
  /* 10e5b038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b03b cmp edx, dword ptr [0x10e84140] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e84140))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b041 jbe 0x10e5b04c */
  if ((C.cf||C.zf)) goto L_10e5b04c;
  /* 10e5b043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b046 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b049 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e5b04c:;
  /* 10e5b04c mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b052 mov dword ptr [0x10e8413c], ecx */
  w32((uint32_t)(0x10e8413c), (ECX));
L_10e5b058:;
  /* 10e5b058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b05b mov dword ptr [0x10e84140], edx */
  w32((uint32_t)(0x10e84140), (EDX));
  /* 10e5b061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b064 mov dword ptr [0x10e84138], eax */
  w32((uint32_t)(0x10e84138), (EAX));
L_10e5b069:;
  /* 10e5b069 mov esp, ebp */
  ESP = (EBP);
  /* 10e5b06b pop ebp */
  EBP = (pop32());
  /* 10e5b06c ret  */
  ESPCHK(0x10e5aaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b070 @ 0x10e5b070 (1334 bytes, 427 insns) */
void f_10e5b070(void) {
  FTRACE(0x10e5b070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5b070 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5b071 mov ebp, esp */
  EBP = (ESP);
  /* 10e5b073 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b076 push esi */
  push32((uint32_t)(ESI));
  /* 10e5b077 mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5b07c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5b07f mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b085 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b087 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e5b08a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b08d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b090 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b093 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e5b096 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b099 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e5b09c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b09f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5b0a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b0a6 jge 0x10e5b0bc */
  if ((C.sf==C.of)) goto L_10e5b0bc;
  /* 10e5b0a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b0ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b0ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b0b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e5b0b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10e5b0ba jmp 0x10e5b0d1 */
  goto L_10e5b0d1;
L_10e5b0bc:;
  /* 10e5b0bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e5b0c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b0c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b0c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b0cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5b0ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10e5b0d1:;
  /* 10e5b0d1 mov ecx, dword ptr [0x10e8413c] */
  ECX = (r32((uint32_t)(0x10e8413c)));
  /* 10e5b0d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e5b0da:;
  /* 10e5b0da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b0dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b0e0 jae 0x10e5b106 */
  if (!C.cf) goto L_10e5b106;
  /* 10e5b0e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b0e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5b0e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b0ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b0ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5b0f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b0f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b0f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b0f7 je 0x10e5b0fb */
  if (C.zf) goto L_10e5b0fb;
  /* 10e5b0f9 jmp 0x10e5b106 */
  goto L_10e5b106;
L_10e5b0fb:;
  /* 10e5b0fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b0fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b101 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e5b104 jmp 0x10e5b0da */
  goto L_10e5b0da;
L_10e5b106:;
  /* 10e5b106 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b109 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b10c jne 0x10e5b1ed */
  if (!C.zf) goto L_10e5b1ed;
  /* 10e5b112 mov eax, dword ptr [0x10e84148] */
  EAX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b117 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e5b11a:;
  /* 10e5b11a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b11d cmp ecx, dword ptr [0x10e8413c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e8413c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b123 jae 0x10e5b149 */
  if (!C.cf) goto L_10e5b149;
  /* 10e5b125 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b128 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5b12b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b12d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b130 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5b133 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b136 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5b13a je 0x10e5b13e */
  if (C.zf) goto L_10e5b13e;
  /* 10e5b13c jmp 0x10e5b149 */
  goto L_10e5b149;
L_10e5b13e:;
  /* 10e5b13e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b141 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b144 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b147 jmp 0x10e5b11a */
  goto L_10e5b11a;
L_10e5b149:;
  /* 10e5b149 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b14c cmp ecx, dword ptr [0x10e8413c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e8413c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b152 jne 0x10e5b1ed */
  if (!C.zf) goto L_10e5b1ed;
L_10e5b158:;
  /* 10e5b158 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b15b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b15e jae 0x10e5b176 */
  if (!C.cf) goto L_10e5b176;
  /* 10e5b160 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b163 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b167 je 0x10e5b16b */
  if (C.zf) goto L_10e5b16b;
  /* 10e5b169 jmp 0x10e5b176 */
  goto L_10e5b176;
L_10e5b16b:;
  /* 10e5b16b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b16e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b171 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e5b174 jmp 0x10e5b158 */
  goto L_10e5b158;
L_10e5b176:;
  /* 10e5b176 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b179 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b17c jne 0x10e5b1c7 */
  if (!C.zf) goto L_10e5b1c7;
  /* 10e5b17e mov eax, dword ptr [0x10e84148] */
  EAX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b183 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e5b186:;
  /* 10e5b186 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b189 cmp ecx, dword ptr [0x10e8413c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e8413c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b18f jae 0x10e5b1a7 */
  if (!C.cf) goto L_10e5b1a7;
  /* 10e5b191 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b194 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b198 je 0x10e5b19c */
  if (C.zf) goto L_10e5b19c;
  /* 10e5b19a jmp 0x10e5b1a7 */
  goto L_10e5b1a7;
L_10e5b19c:;
  /* 10e5b19c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b19f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b1a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b1a5 jmp 0x10e5b186 */
  goto L_10e5b186;
L_10e5b1a7:;
  /* 10e5b1a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b1aa cmp ecx, dword ptr [0x10e8413c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e8413c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b1b0 jne 0x10e5b1c7 */
  if (!C.zf) goto L_10e5b1c7;
  /* 10e5b1b2 call 0x10e5b5b0 */
  push32(0x10e5b1b7u); f_10e5b5b0();
  /* 10e5b1b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b1ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b1be jne 0x10e5b1c7 */
  if (!C.zf) goto L_10e5b1c7;
  /* 10e5b1c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b1c2 jmp 0x10e5b5a1 */
  goto L_10e5b5a1;
L_10e5b1c7:;
  /* 10e5b1c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b1ca push edx */
  push32((uint32_t)(EDX));
  /* 10e5b1cb call 0x10e5b6c0 */
  push32(0x10e5b1d0u); f_10e5b6c0();
  /* 10e5b1d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b1d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b1d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e5b1d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e5b1db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b1de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5b1e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b1e4 jne 0x10e5b1ed */
  if (!C.zf) goto L_10e5b1ed;
  /* 10e5b1e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b1e8 jmp 0x10e5b5a1 */
  goto L_10e5b5a1;
L_10e5b1ed:;
  /* 10e5b1ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b1f0 mov dword ptr [0x10e8413c], edx */
  w32((uint32_t)(0x10e8413c), (EDX));
  /* 10e5b1f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b1f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5b1fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10e5b1ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b202 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5b204 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e5b207 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b20b je 0x10e5b230 */
  if (C.zf) goto L_10e5b230;
  /* 10e5b20d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b210 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5b216 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b21a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b21d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b220 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5b223 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10e5b22a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5b22e jne 0x10e5b265 */
  if (!C.zf) goto L_10e5b265;
L_10e5b230:;
  /* 10e5b230 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10e5b237:;
  /* 10e5b237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b23a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b23d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5b240 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b244 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b247 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b24a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5b24d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10e5b254 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b256 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5b258 jne 0x10e5b265 */
  if (!C.zf) goto L_10e5b265;
  /* 10e5b25a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b25d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b260 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e5b263 jmp 0x10e5b237 */
  goto L_10e5b237;
L_10e5b265:;
  /* 10e5b265 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b268 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5b26e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b271 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e5b278 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5b27b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e5b282 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b285 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b288 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5b28b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b28f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e5b292 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b296 jne 0x10e5b2b2 */
  if (!C.zf) goto L_10e5b2b2;
  /* 10e5b298 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10e5b29f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b2a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b2a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5b2a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b2af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10e5b2b2:;
  /* 10e5b2b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b2b6 jl 0x10e5b2cb */
  if ((C.sf!=C.of)) goto L_10e5b2cb;
  /* 10e5b2b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5b2bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e5b2bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e5b2c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b2c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b2c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e5b2c9 jmp 0x10e5b2b2 */
  goto L_10e5b2b2;
L_10e5b2cb:;
  /* 10e5b2cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b2ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b2d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10e5b2d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e5b2d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b2db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5b2dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b2e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5b2e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5b2e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e5b2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b2ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e5b2ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b2f3 jle 0x10e5b2fc */
  if ((C.zf||C.sf!=C.of)) goto L_10e5b2fc;
  /* 10e5b2f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10e5b2fc:;
  /* 10e5b2fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b2ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b302 je 0x10e5b520 */
  if (C.zf) goto L_10e5b520;
  /* 10e5b308 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b30b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b30e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5b311 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b314 jne 0x10e5b3ea */
  if (!C.zf) goto L_10e5b3ea;
  /* 10e5b31a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b31e jge 0x10e5b37f */
  if ((C.sf==C.of)) goto L_10e5b37f;
  /* 10e5b320 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5b325 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b328 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5b32a not eax */
  EAX = (~(EAX));
  /* 10e5b32c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b32f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b332 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e5b336 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b338 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b33b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b33e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e5b342 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b345 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b348 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e5b34b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5b34e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b351 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b354 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e5b357 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b35a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b35d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5b361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5b363 jne 0x10e5b37d */
  if (!C.zf) goto L_10e5b37d;
  /* 10e5b365 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5b36a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b36d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5b36f not eax */
  EAX = (~(EAX));
  /* 10e5b371 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b374 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5b376 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b378 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b37b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e5b37d:;
  /* 10e5b37d jmp 0x10e5b3ea */
  goto L_10e5b3ea;
L_10e5b37f:;
  /* 10e5b37f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b382 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b385 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b38a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b38c not edx */
  EDX = (~(EDX));
  /* 10e5b38e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b391 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b394 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e5b39b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b39d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b3a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b3a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10e5b3aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b3ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b3b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5b3b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5b3b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b3b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b3bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e5b3bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b3c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b3c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5b3c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b3cb jne 0x10e5b3ea */
  if (!C.zf) goto L_10e5b3ea;
  /* 10e5b3cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b3d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b3d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b3d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b3da not edx */
  EDX = (~(EDX));
  /* 10e5b3dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b3df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5b3e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b3e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b3e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e5b3ea:;
  /* 10e5b3ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b3ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5b3f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b3f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5b3f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e5b3f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b3fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5b3ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b402 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5b405 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5b408 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b40c je 0x10e5b520 */
  if (C.zf) goto L_10e5b520;
  /* 10e5b412 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b418 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10e5b41b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e5b41e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5b424 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5b427 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e5b42a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b42d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5b430 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e5b433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5b436 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b439 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e5b43c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b43f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5b442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b445 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e5b448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b44b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b44e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5b451 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b454 jne 0x10e5b520 */
  if (!C.zf) goto L_10e5b520;
  /* 10e5b45a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b45e jge 0x10e5b4ba */
  if ((C.sf==C.of)) goto L_10e5b4ba;
  /* 10e5b460 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b463 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b466 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5b46a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b46d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b470 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e5b473 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5b475 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b478 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b47b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e5b47e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b480 jne 0x10e5b498 */
  if (!C.zf) goto L_10e5b498;
  /* 10e5b482 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5b487 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b48a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5b48c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b48f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5b491 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b496 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e5b498:;
  /* 10e5b498 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b49d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b4a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b4a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b4a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b4a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e5b4ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b4ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b4b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b4b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e5b4b8 jmp 0x10e5b520 */
  goto L_10e5b520;
L_10e5b4ba:;
  /* 10e5b4ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b4bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b4c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5b4c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b4c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b4ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e5b4cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5b4cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b4d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b4d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e5b4d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b4da jne 0x10e5b4f7 */
  if (!C.zf) goto L_10e5b4f7;
  /* 10e5b4dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b4df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b4e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5b4e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5b4e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b4ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5b4ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b4f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b4f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e5b4f7:;
  /* 10e5b4f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b4fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b4fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b502 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b504 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b507 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b50a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e5b511 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b513 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b516 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b519 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10e5b520:;
  /* 10e5b520 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b524 je 0x10e5b53a */
  if (C.zf) goto L_10e5b53a;
  /* 10e5b526 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5b52c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e5b52e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b531 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5b537 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10e5b53a:;
  /* 10e5b53a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b53d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b540 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e5b543 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b546 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b54c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e5b54e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b554 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b557 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b55a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10e5b55d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b560 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5b562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b565 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5b567 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b56a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b56d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e5b56f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b571 jne 0x10e5b593 */
  if (!C.zf) goto L_10e5b593;
  /* 10e5b573 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b576 cmp eax, dword ptr [0x10e84140] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e84140))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b57c jne 0x10e5b593 */
  if (!C.zf) goto L_10e5b593;
  /* 10e5b57e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b581 cmp ecx, dword ptr [0x10e84138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e84138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b587 jne 0x10e5b593 */
  if (!C.zf) goto L_10e5b593;
  /* 10e5b589 mov dword ptr [0x10e84140], 0 */
  w32((uint32_t)(0x10e84140), (0x0u));
L_10e5b593:;
  /* 10e5b593 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10e5b596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b599 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e5b59b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b59e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e5b5a1:;
  /* 10e5b5a1 pop esi */
  ESI = (pop32());
  /* 10e5b5a2 mov esp, ebp */
  ESP = (EBP);
  /* 10e5b5a4 pop ebp */
  EBP = (pop32());
  /* 10e5b5a5 ret  */
  ESPCHK(0x10e5b070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x10e5b5b0 (271 bytes, 78 insns) */
void f_10e5b5b0(void) {
  FTRACE(0x10e5b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5b5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5b5b4 mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5b5b9 cmp eax, dword ptr [0x10e84128] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e84128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b5bf jne 0x10e5b60b */
  if (!C.zf) goto L_10e5b60b;
  /* 10e5b5c1 mov ecx, dword ptr [0x10e84128] */
  ECX = (r32((uint32_t)(0x10e84128)));
  /* 10e5b5c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b5ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5b5cd push ecx */
  push32((uint32_t)(ECX));
  /* 10e5b5ce mov edx, dword ptr [0x10e84148] */
  EDX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b5d4 push edx */
  push32((uint32_t)(EDX));
  /* 10e5b5d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5b5d7 mov eax, dword ptr [0x10e8414c] */
  EAX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5b5dc push eax */
  push32((uint32_t)(EAX));
  /* 10e5b5dd call dword ptr [0x10e8535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8535c))), 0x10e5b5e3u);
  /* 10e5b5e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5b5e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b5ea jne 0x10e5b5f3 */
  if (!C.zf) goto L_10e5b5f3;
  /* 10e5b5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b5ee jmp 0x10e5b6bb */
  goto L_10e5b6bb;
L_10e5b5f3:;
  /* 10e5b5f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b5f6 mov dword ptr [0x10e84148], ecx */
  w32((uint32_t)(0x10e84148), (ECX));
  /* 10e5b5fc mov edx, dword ptr [0x10e84128] */
  EDX = (r32((uint32_t)(0x10e84128)));
  /* 10e5b602 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b605 mov dword ptr [0x10e84128], edx */
  w32((uint32_t)(0x10e84128), (EDX));
L_10e5b60b:;
  /* 10e5b60b mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5b610 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5b613 mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5b619 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b61b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5b61e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10e5b623 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e5b625 mov edx, dword ptr [0x10e8414c] */
  EDX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5b62b push edx */
  push32((uint32_t)(EDX));
  /* 10e5b62c call dword ptr [0x10e85360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85360))), 0x10e5b632u);
  /* 10e5b632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b635 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10e5b638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b63b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b63f jne 0x10e5b645 */
  if (!C.zf) goto L_10e5b645;
  /* 10e5b641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b643 jmp 0x10e5b6bb */
  goto L_10e5b6bb;
L_10e5b645:;
  /* 10e5b645 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5b647 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10e5b64c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10e5b651 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5b653 call dword ptr [0x10e85358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85358))), 0x10e5b659u);
  /* 10e5b659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b65c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10e5b65f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b662 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b666 jne 0x10e5b682 */
  if (!C.zf) goto L_10e5b682;
  /* 10e5b668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b66b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5b66e push ecx */
  push32((uint32_t)(ECX));
  /* 10e5b66f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5b671 mov edx, dword ptr [0x10e8414c] */
  EDX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5b677 push edx */
  push32((uint32_t)(EDX));
  /* 10e5b678 call dword ptr [0x10e85380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85380))), 0x10e5b67eu);
  /* 10e5b67e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b680 jmp 0x10e5b6bb */
  goto L_10e5b6bb;
L_10e5b682:;
  /* 10e5b682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b685 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5b68b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b68e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e5b695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b698 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10e5b69f mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5b6a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b6a7 mov dword ptr [0x10e84144], eax */
  w32((uint32_t)(0x10e84144), (EAX));
  /* 10e5b6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b6af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e5b6b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10e5b6b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5b6bb:;
  /* 10e5b6bb mov esp, ebp */
  ESP = (EBP);
  /* 10e5b6bd pop ebp */
  EBP = (pop32());
  /* 10e5b6be ret  */
  ESPCHK(0x10e5b5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x10e5b6c0 (494 bytes, 149 insns) */
void f_10e5b6c0(void) {
  FTRACE(0x10e5b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5b6c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b6c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5b6cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e5b6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b6d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5b6d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5b6d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10e5b6df:;
  /* 10e5b6df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b6e3 jl 0x10e5b6f8 */
  if ((C.sf!=C.of)) goto L_10e5b6f8;
  /* 10e5b6e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5b6e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e5b6ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5b6ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b6f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b6f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e5b6f6 jmp 0x10e5b6df */
  goto L_10e5b6df;
L_10e5b6f8:;
  /* 10e5b6f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b6fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5b701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b704 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e5b70b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e5b70e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e5b715 jmp 0x10e5b720 */
  goto L_10e5b720;
L_10e5b717:;
  /* 10e5b717 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b71a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b71d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10e5b720:;
  /* 10e5b720 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b724 jge 0x10e5b746 */
  if ((C.sf==C.of)) goto L_10e5b746;
  /* 10e5b726 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5b72c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10e5b72f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b732 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b735 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b738 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e5b73b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b73e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b741 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e5b744 jmp 0x10e5b717 */
  goto L_10e5b717;
L_10e5b746:;
  /* 10e5b746 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b749 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e5b74c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b74f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5b752 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b754 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e5b757 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5b759 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e5b75e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e5b763 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b766 push edx */
  push32((uint32_t)(EDX));
  /* 10e5b767 call dword ptr [0x10e85358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85358))), 0x10e5b76du);
  /* 10e5b76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5b76f jne 0x10e5b779 */
  if (!C.zf) goto L_10e5b779;
  /* 10e5b771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b774 jmp 0x10e5b8aa */
  goto L_10e5b8aa;
L_10e5b779:;
  /* 10e5b779 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b77c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b781 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e5b784 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b787 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5b78a jmp 0x10e5b798 */
  goto L_10e5b798;
L_10e5b78c:;
  /* 10e5b78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b78f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b795 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5b798:;
  /* 10e5b798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b79b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b79e ja 0x10e5b7fd */
  if ((!C.cf&&!C.zf)) goto L_10e5b7fd;
  /* 10e5b7a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b7a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10e5b7aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b7ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10e5b7b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b7ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b7bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b7c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b7c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10e5b7c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b7cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b7d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b7d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e5b7d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b7db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b7e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b7e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5b7e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b7ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b7ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e5b7f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5b7f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10e5b7fb jmp 0x10e5b78c */
  goto L_10e5b78c;
L_10e5b7fd:;
  /* 10e5b7fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5b800 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b806 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e5b809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b80c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b80f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b812 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e5b815 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b818 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5b81b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b81e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b821 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b824 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e5b827 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5b82a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b82d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b830 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e5b833 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b836 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5b839 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5b83c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5b83f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b842 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e5b845 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b848 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b84b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10e5b853 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b856 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b859 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10e5b864 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b867 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10e5b86b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b86e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10e5b871 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5b874 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b877 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10e5b87a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5b87c jne 0x10e5b88d */
  if (!C.zf) goto L_10e5b88d;
  /* 10e5b87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b881 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5b884 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5b887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b88a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e5b88d:;
  /* 10e5b88d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b892 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b895 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b897 not edx */
  EDX = (~(EDX));
  /* 10e5b899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b89c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5b89f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b8a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b8a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5b8a7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10e5b8aa:;
  /* 10e5b8aa mov esp, ebp */
  ESP = (EBP);
  /* 10e5b8ac pop ebp */
  EBP = (pop32());
  /* 10e5b8ad ret  */
  ESPCHK(0x10e5b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b0 @ 0x10e5b8b0 (1515 bytes, 489 insns) */
void f_10e5b8b0(void) {
  FTRACE(0x10e5b8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5b8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5b8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5b8b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b8b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5b8b9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b8bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10e5b8be mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e5b8c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b8c4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e5b8c7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e5b8ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b8cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5b8d0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b8d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e5b8d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5b8d9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10e5b8dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5b8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b8e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5b8e8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b8eb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10e5b8f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e5b8f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5b8f8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b8fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e5b8fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b901 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5b903 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b906 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10e5b909 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5b90c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b90f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e5b912 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b915 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5b917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e5b91a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5b91d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b920 jle 0x10e5bbd6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5bbd6;
  /* 10e5b926 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b929 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b92c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b92e jne 0x10e5b93b */
  if (!C.zf) goto L_10e5b93b;
  /* 10e5b930 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5b933 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b936 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b939 jle 0x10e5b942 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5b942;
L_10e5b93b:;
  /* 10e5b93b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b93d jmp 0x10e5be97 */
  goto L_10e5be97;
L_10e5b942:;
  /* 10e5b942 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5b945 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e5b948 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b94b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5b94e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b952 jbe 0x10e5b95b */
  if ((C.cf||C.zf)) goto L_10e5b95b;
  /* 10e5b954 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e5b95b:;
  /* 10e5b95b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b95e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5b961 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5b964 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b967 jne 0x10e5ba3d */
  if (!C.zf) goto L_10e5ba3d;
  /* 10e5b96d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5b971 jae 0x10e5b9d2 */
  if (!C.cf) goto L_10e5b9d2;
  /* 10e5b973 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b978 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b97b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b97d not edx */
  EDX = (~(EDX));
  /* 10e5b97f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b982 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b985 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e5b989 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5b98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b98e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b991 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e5b995 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b998 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b99b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5b99e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5b9a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b9a4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b9a7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e5b9aa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b9ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5b9b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5b9b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5b9b6 jne 0x10e5b9d0 */
  if (!C.zf) goto L_10e5b9d0;
  /* 10e5b9b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5b9bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b9c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5b9c2 not edx */
  EDX = (~(EDX));
  /* 10e5b9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b9c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5b9c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5b9ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e5b9d0:;
  /* 10e5b9d0 jmp 0x10e5ba3d */
  goto L_10e5ba3d;
L_10e5b9d2:;
  /* 10e5b9d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5b9d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5b9d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5b9dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5b9df not eax */
  EAX = (~(EAX));
  /* 10e5b9e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b9e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b9e7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e5b9ee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5b9f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5b9f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5b9f6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e5b9fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ba00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ba03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e5ba06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5ba09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ba0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ba0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e5ba12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ba15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ba18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5ba1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ba1e jne 0x10e5ba3d */
  if (!C.zf) goto L_10e5ba3d;
  /* 10e5ba20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ba23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ba26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5ba2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5ba2d not eax */
  EAX = (~(EAX));
  /* 10e5ba2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ba32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5ba35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ba37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ba3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e5ba3d:;
  /* 10e5ba3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ba40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5ba43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ba46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5ba49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e5ba4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ba4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5ba52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ba55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5ba58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e5ba5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5ba5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ba61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ba64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e5ba67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ba6b jle 0x10e5bbb7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5bbb7;
  /* 10e5ba71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5ba74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ba77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e5ba7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5ba7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e5ba80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ba83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e5ba86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ba8a jbe 0x10e5ba93 */
  if ((C.cf||C.zf)) goto L_10e5ba93;
  /* 10e5ba8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e5ba93:;
  /* 10e5ba93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ba96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5ba99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10e5ba9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e5ba9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5baa2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5baa5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5baa8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e5baab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5baae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5bab1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e5bab4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5bab7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5baba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e5babd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bac0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5bac3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bac6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e5bac9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bacc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bacf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5bad2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bad5 jne 0x10e5bba3 */
  if (!C.zf) goto L_10e5bba3;
  /* 10e5badb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5badf jae 0x10e5bb3c */
  if (!C.cf) goto L_10e5bb3c;
  /* 10e5bae1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bae4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bae7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5baeb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5baee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5baf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5baf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5baf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bafa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bafd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e5bb00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5bb02 jne 0x10e5bb1a */
  if (!C.zf) goto L_10e5bb1a;
  /* 10e5bb04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5bb09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bb0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5bb0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bb11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5bb13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bb15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bb18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e5bb1a:;
  /* 10e5bb1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5bb1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bb22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5bb24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bb27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10e5bb2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bb30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bb33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10e5bb3a jmp 0x10e5bba3 */
  goto L_10e5bba3;
L_10e5bb3c:;
  /* 10e5bb3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bb42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5bb46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bb4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5bb4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5bb52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bb58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10e5bb5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5bb5d jne 0x10e5bb7a */
  if (!C.zf) goto L_10e5bb7a;
  /* 10e5bb5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bb62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bb65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5bb6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5bb6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bb6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5bb72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bb74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bb77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10e5bb7a:;
  /* 10e5bb7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bb7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bb80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5bb85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5bb87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bb8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e5bb94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bb96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bb99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bb9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10e5bba3:;
  /* 10e5bba3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bba6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5bba9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e5bbab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bbae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5bbb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10e5bbb7:;
  /* 10e5bbb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5bbba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e5bbc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5bbc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bbcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10e5bbd1 jmp 0x10e5be92 */
  goto L_10e5be92;
L_10e5bbd6:;
  /* 10e5bbd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5bbd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bbdc jge 0x10e5be92 */
  if ((C.sf==C.of)) goto L_10e5be92;
  /* 10e5bbe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5bbe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bbeb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e5bbed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5bbf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbf3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bbf6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bbf9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10e5bbfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bbff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bc02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e5bc05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5bc08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bc0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5bc0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5bc11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e5bc14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bc17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e5bc1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bc1e jbe 0x10e5bc27 */
  if ((C.cf||C.zf)) goto L_10e5bc27;
  /* 10e5bc20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e5bc27:;
  /* 10e5bc27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5bc2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5bc2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5bc2f jne 0x10e5bd70 */
  if (!C.zf) goto L_10e5bd70;
  /* 10e5bc35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5bc38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10e5bc3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bc3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5bc41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bc45 jbe 0x10e5bc4e */
  if ((C.cf||C.zf)) goto L_10e5bc4e;
  /* 10e5bc47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10e5bc4e:;
  /* 10e5bc4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bc51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bc54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5bc57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bc5a jne 0x10e5bd30 */
  if (!C.zf) goto L_10e5bd30;
  /* 10e5bc60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bc64 jae 0x10e5bcc5 */
  if (!C.cf) goto L_10e5bcc5;
  /* 10e5bc66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5bc6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bc6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5bc70 not edx */
  EDX = (~(EDX));
  /* 10e5bc72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bc75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bc78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e5bc7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5bc7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bc81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bc84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e5bc88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bc8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bc8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e5bc91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5bc94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bc97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bc9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10e5bc9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bca0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bca3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5bca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5bca9 jne 0x10e5bcc3 */
  if (!C.zf) goto L_10e5bcc3;
  /* 10e5bcab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5bcb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bcb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5bcb5 not edx */
  EDX = (~(EDX));
  /* 10e5bcb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bcba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5bcbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bcbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bcc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e5bcc3:;
  /* 10e5bcc3 jmp 0x10e5bd30 */
  goto L_10e5bd30;
L_10e5bcc5:;
  /* 10e5bcc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bcc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bccb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5bcd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5bcd2 not eax */
  EAX = (~(EAX));
  /* 10e5bcd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bcd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bcda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10e5bce1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bce6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bce9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10e5bcf0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bcf3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bcf6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10e5bcf9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5bcfc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bcff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bd02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10e5bd05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bd08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bd0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5bd0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5bd11 jne 0x10e5bd30 */
  if (!C.zf) goto L_10e5bd30;
  /* 10e5bd13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5bd16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bd19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5bd1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5bd20 not eax */
  EAX = (~(EAX));
  /* 10e5bd22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bd25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5bd28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5bd2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bd2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e5bd30:;
  /* 10e5bd30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bd33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5bd36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bd39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5bd3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e5bd3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bd42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5bd45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5bd48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5bd4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e5bd4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5bd51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bd54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5bd57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5bd5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e5bd5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bd60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e5bd63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bd67 jbe 0x10e5bd70 */
  if ((C.cf||C.zf)) goto L_10e5bd70;
  /* 10e5bd69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10e5bd70:;
  /* 10e5bd70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5bd73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5bd76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10e5bd79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e5bd7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bd7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5bd82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5bd85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e5bd88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bd8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5bd8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e5bd91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5bd94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bd97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e5bd9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bd9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5bda0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bda3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e5bda6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bda9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5bdac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5bdaf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bdb2 jne 0x10e5be7e */
  if (!C.zf) goto L_10e5be7e;
  /* 10e5bdb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bdbc jae 0x10e5be18 */
  if (!C.cf) goto L_10e5be18;
  /* 10e5bdbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bdc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bdc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5bdc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bdcb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bdce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e5bdd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5bdd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5bdd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bdd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e5bddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5bdde jne 0x10e5bdf6 */
  if (!C.zf) goto L_10e5bdf6;
  /* 10e5bde0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5bde5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5bde8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5bdea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bded mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5bdef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5bdf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5bdf4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e5bdf6:;
  /* 10e5bdf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5bdfb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5bdfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5be00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5be03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be06 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10e5be0a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5be0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5be0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be12 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10e5be16 jmp 0x10e5be7e */
  goto L_10e5be7e;
L_10e5be18:;
  /* 10e5be18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be1b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5be1e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10e5be22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be25 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5be28 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e5be2b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5be2d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5be33 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10e5be36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5be38 jne 0x10e5be55 */
  if (!C.zf) goto L_10e5be55;
  /* 10e5be3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5be3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5be40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10e5be45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10e5be47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5be4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5be4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5be4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5be52 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10e5be55:;
  /* 10e5be55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5be58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5be5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5be60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5be62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5be65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be68 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10e5be6f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5be71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5be74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5be77 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10e5be7e:;
  /* 10e5be7e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5be81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5be84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e5be86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5be89 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5be8c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5be8f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10e5be92:;
  /* 10e5be92 mov eax, 1 */
  EAX = (0x1u);
L_10e5be97:;
  /* 10e5be97 mov esp, ebp */
  ESP = (EBP);
  /* 10e5be99 pop ebp */
  EBP = (pop32());
  /* 10e5be9a ret  */
  ESPCHK(0x10e5b8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x10e5bea0 (304 bytes, 79 insns) */
void f_10e5bea0(void) {
  FTRACE(0x10e5bea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5bea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5bea1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5bea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5bea4 cmp dword ptr [0x10e84140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e84140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5beab je 0x10e5bfcc */
  if (C.zf) goto L_10e5bfcc;
  /* 10e5beb1 mov eax, dword ptr [0x10e84138] */
  EAX = (r32((uint32_t)(0x10e84138)));
  /* 10e5beb6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10e5beb9 mov ecx, dword ptr [0x10e84140] */
  ECX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bebf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5bec2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bec4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5bec7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e5becc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e5bed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5bed4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5bed5 call dword ptr [0x10e8537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8537c))), 0x10e5bedbu);
  /* 10e5bedb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5bee0 mov ecx, dword ptr [0x10e84138] */
  ECX = (r32((uint32_t)(0x10e84138)));
  /* 10e5bee6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5bee8 mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5beed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5bef0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5bef2 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bef8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5befb mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5bf03 mov edx, dword ptr [0x10e84138] */
  EDX = (r32((uint32_t)(0x10e84138)));
  /* 10e5bf09 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10e5bf14 mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5bf1c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10e5bf1f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e5bf22 mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf27 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5bf2a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10e5bf2d mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5bf36 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10e5bf3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5bf3c jne 0x10e5bf52 */
  if (!C.zf) goto L_10e5bf52;
  /* 10e5bf3e mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5bf47 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10e5bf49 mov ecx, dword ptr [0x10e84140] */
  ECX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf4f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10e5bf52:;
  /* 10e5bf52 mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf58 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bf5c jne 0x10e5bfc2 */
  if (!C.zf) goto L_10e5bfc2;
  /* 10e5bf5e cmp dword ptr [0x10e84144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e84144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5bf65 jle 0x10e5bfc2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5bfc2;
  /* 10e5bf67 mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf6c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5bf6f push ecx */
  push32((uint32_t)(ECX));
  /* 10e5bf70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5bf72 mov edx, dword ptr [0x10e8414c] */
  EDX = (r32((uint32_t)(0x10e8414c)));
  /* 10e5bf78 push edx */
  push32((uint32_t)(EDX));
  /* 10e5bf79 call dword ptr [0x10e85380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85380))), 0x10e5bf7fu);
  /* 10e5bf7f mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5bf84 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5bf87 mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5bf8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bf8f mov edx, dword ptr [0x10e84140] */
  EDX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bf95 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bf98 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bf9a push ecx */
  push32((uint32_t)(ECX));
  /* 10e5bf9b mov eax, dword ptr [0x10e84140] */
  EAX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bfa0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bfa3 push eax */
  push32((uint32_t)(EAX));
  /* 10e5bfa4 mov ecx, dword ptr [0x10e84140] */
  ECX = (r32((uint32_t)(0x10e84140)));
  /* 10e5bfaa push ecx */
  push32((uint32_t)(ECX));
  /* 10e5bfab call 0x10e5e5d0 */
  push32(0x10e5bfb0u); f_10e5e5d0();
  /* 10e5bfb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5bfb3 mov edx, dword ptr [0x10e84144] */
  EDX = (r32((uint32_t)(0x10e84144)));
  /* 10e5bfb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bfbc mov dword ptr [0x10e84144], edx */
  w32((uint32_t)(0x10e84144), (EDX));
L_10e5bfc2:;
  /* 10e5bfc2 mov dword ptr [0x10e84140], 0 */
  w32((uint32_t)(0x10e84140), (0x0u));
L_10e5bfcc:;
  /* 10e5bfcc mov esp, ebp */
  ESP = (EBP);
  /* 10e5bfce pop ebp */
  EBP = (pop32());
  /* 10e5bfcf ret  */
  ESPCHK(0x10e5bea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x10e5bfd0 (1565 bytes, 343 insns) */
void f_10e5bfd0(void) {
  FTRACE(0x10e5bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5bfd3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5bfd9 mov eax, dword ptr [0x10e84144] */
  EAX = (r32((uint32_t)(0x10e84144)));
  /* 10e5bfde imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5bfe1 push eax */
  push32((uint32_t)(EAX));
  /* 10e5bfe2 mov ecx, dword ptr [0x10e84148] */
  ECX = (r32((uint32_t)(0x10e84148)));
  /* 10e5bfe8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5bfe9 call dword ptr [0x10e853a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a8))), 0x10e5bfefu);
  /* 10e5bfef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5bff1 je 0x10e5bffb */
  if (C.zf) goto L_10e5bffb;
  /* 10e5bff3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5bff6 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5bffb:;
  /* 10e5bffb mov edx, dword ptr [0x10e84148] */
  EDX = (r32((uint32_t)(0x10e84148)));
  /* 10e5c001 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10e5c007 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10e5c011 jmp 0x10e5c022 */
  goto L_10e5c022;
L_10e5c013:;
  /* 10e5c013 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10e5c019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c01c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10e5c022:;
  /* 10e5c022 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10e5c028 cmp ecx, dword ptr [0x10e84144] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e84144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c02e jge 0x10e5c5e7 */
  if ((C.sf==C.of)) goto L_10e5c5e7;
  /* 10e5c034 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e5c03a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5c03d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10e5c043 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10e5c048 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e5c04e push ecx */
  push32((uint32_t)(ECX));
  /* 10e5c04f call dword ptr [0x10e853a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a8))), 0x10e5c055u);
  /* 10e5c055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c057 je 0x10e5c063 */
  if (C.zf) goto L_10e5c063;
  /* 10e5c059 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10e5c05e jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c063:;
  /* 10e5c063 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e5c069 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e5c06c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10e5c072 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e5c078 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c07e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e5c081 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e5c087 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5c08a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5c08d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10e5c097 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10e5c0a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5c0a8 jmp 0x10e5c0b3 */
  goto L_10e5c0b3;
L_10e5c0aa:;
  /* 10e5c0aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c0ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c0b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e5c0b3:;
  /* 10e5c0b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c0b7 jge 0x10e5c5ab */
  if ((C.sf==C.of)) goto L_10e5c5ab;
  /* 10e5c0bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10e5c0c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10e5c0d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10e5c0db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10e5c0e5 jmp 0x10e5c0f6 */
  goto L_10e5c0f6;
L_10e5c0e7:;
  /* 10e5c0e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e5c0ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c0f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10e5c0f6:;
  /* 10e5c0f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c0fd jge 0x10e5c112 */
  if ((C.sf==C.of)) goto L_10e5c112;
  /* 10e5c0ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e5c105 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10e5c110 jmp 0x10e5c0e7 */
  goto L_10e5c0e7;
L_10e5c112:;
  /* 10e5c112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c116 jl 0x10e5c54d */
  if ((C.sf!=C.of)) goto L_10e5c54d;
  /* 10e5c11c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e5c121 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e5c127 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5c128 call dword ptr [0x10e853a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853a8))), 0x10e5c12eu);
  /* 10e5c12e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c130 je 0x10e5c13c */
  if (C.zf) goto L_10e5c13c;
  /* 10e5c132 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10e5c137 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c13c:;
  /* 10e5c13c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e5c142 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e5c145 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10e5c14f jmp 0x10e5c160 */
  goto L_10e5c160;
L_10e5c151:;
  /* 10e5c151 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10e5c157 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c15a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10e5c160:;
  /* 10e5c160 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c167 jge 0x10e5c2e4 */
  if ((C.sf==C.of)) goto L_10e5c2e4;
  /* 10e5c16d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c170 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c173 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10e5c179 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c17f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c185 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10e5c18b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c191 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c195 jne 0x10e5c1a2 */
  if (!C.zf) goto L_10e5c1a2;
  /* 10e5c197 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10e5c19d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c1a0 je 0x10e5c1ac */
  if (C.zf) goto L_10e5c1ac;
L_10e5c1a2:;
  /* 10e5c1a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10e5c1a7 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c1ac:;
  /* 10e5c1ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c1b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5c1b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10e5c1ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e5c1c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10e5c1c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10e5c1cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5c1cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5c1d1 je 0x10e5c209 */
  if (C.zf) goto L_10e5c209;
  /* 10e5c1d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e5c1d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c1dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10e5c1e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c1ec jle 0x10e5c1f8 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5c1f8;
  /* 10e5c1ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10e5c1f3 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c1f8:;
  /* 10e5c1f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10e5c1fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c201 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10e5c207 jmp 0x10e5c24b */
  goto L_10e5c24b;
L_10e5c209:;
  /* 10e5c209 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e5c20f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e5c212 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c215 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10e5c21b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c222 jle 0x10e5c22e */
  if ((C.zf||C.sf!=C.of)) goto L_10e5c22e;
  /* 10e5c224 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10e5c22e:;
  /* 10e5c22e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e5c234 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10e5c23b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c23e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e5c244 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10e5c24b:;
  /* 10e5c24b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c252 jl 0x10e5c26d */
  if ((C.sf!=C.of)) goto L_10e5c26d;
  /* 10e5c254 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10e5c25a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c25f jne 0x10e5c26d */
  if (!C.zf) goto L_10e5c26d;
  /* 10e5c261 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c26b jle 0x10e5c277 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5c277;
L_10e5c26d:;
  /* 10e5c26d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10e5c272 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c277:;
  /* 10e5c277 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c27d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c283 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e5c286 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c28c je 0x10e5c298 */
  if (C.zf) goto L_10e5c298;
  /* 10e5c28e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10e5c293 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c298:;
  /* 10e5c298 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c29e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c2a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10e5c2aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c2b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c2b6 jb 0x10e5c1ac */
  if (C.cf) goto L_10e5c1ac;
  /* 10e5c2bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c2c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c2c8 je 0x10e5c2d4 */
  if (C.zf) goto L_10e5c2d4;
  /* 10e5c2ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10e5c2cf jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c2d4:;
  /* 10e5c2d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c2d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c2dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5c2df jmp 0x10e5c151 */
  goto L_10e5c151;
L_10e5c2e4:;
  /* 10e5c2e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5c2e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5c2e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c2ef je 0x10e5c2fb */
  if (C.zf) goto L_10e5c2fb;
  /* 10e5c2f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10e5c2f6 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c2fb:;
  /* 10e5c2fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5c2fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10e5c304 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e5c30b jmp 0x10e5c316 */
  goto L_10e5c316;
L_10e5c30d:;
  /* 10e5c30d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c310 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c313 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e5c316:;
  /* 10e5c316 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c31a jge 0x10e5c54d */
  if ((C.sf==C.of)) goto L_10e5c54d;
  /* 10e5c320 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10e5c32a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e5c330 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10e5c336:;
  /* 10e5c336 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c33c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5c33f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10e5c345 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e5c34b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c351 je 0x10e5c47a */
  if (C.zf) goto L_10e5c47a;
  /* 10e5c357 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c35a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e5c360 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c367 je 0x10e5c47a */
  if (C.zf) goto L_10e5c47a;
  /* 10e5c36d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e5c373 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c379 jb 0x10e5c38e */
  if (C.cf) goto L_10e5c38e;
  /* 10e5c37b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e5c381 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c386 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c38c jb 0x10e5c398 */
  if (C.cf) goto L_10e5c398;
L_10e5c38e:;
  /* 10e5c38e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10e5c393 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c398:;
  /* 10e5c398 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e5c39e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c3a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10e5c3aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10e5c3b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c3b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e5c3b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5c3b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c3be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10e5c3c4:;
  /* 10e5c3c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5c3c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c3cd je 0x10e5c3ee */
  if (C.zf) goto L_10e5c3ee;
  /* 10e5c3cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5c3d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c3d8 jne 0x10e5c3dc */
  if (!C.zf) goto L_10e5c3dc;
  /* 10e5c3da jmp 0x10e5c3ee */
  goto L_10e5c3ee;
L_10e5c3dc:;
  /* 10e5c3dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5c3df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5c3e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c3e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5c3e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c3e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e5c3ec jmp 0x10e5c3c4 */
  goto L_10e5c3c4;
L_10e5c3ee:;
  /* 10e5c3ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5c3f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c3f7 jne 0x10e5c403 */
  if (!C.zf) goto L_10e5c403;
  /* 10e5c3f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10e5c3fe jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c403:;
  /* 10e5c403 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e5c409 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5c40b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e5c40e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c411 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10e5c417 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c41e jle 0x10e5c42a */
  if ((C.zf||C.sf!=C.of)) goto L_10e5c42a;
  /* 10e5c420 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10e5c42a:;
  /* 10e5c42a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10e5c430 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c433 je 0x10e5c43f */
  if (C.zf) goto L_10e5c43f;
  /* 10e5c435 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10e5c43a jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c43f:;
  /* 10e5c43f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e5c445 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5c448 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c44e je 0x10e5c45a */
  if (C.zf) goto L_10e5c45a;
  /* 10e5c450 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10e5c455 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c45a:;
  /* 10e5c45a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10e5c460 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10e5c466 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e5c46c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c46f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10e5c475 jmp 0x10e5c336 */
  goto L_10e5c336;
L_10e5c47a:;
  /* 10e5c47a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c481 je 0x10e5c4f1 */
  if (C.zf) goto L_10e5c4f1;
  /* 10e5c483 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c487 jge 0x10e5c4bb */
  if ((C.sf==C.of)) goto L_10e5c4bb;
  /* 10e5c489 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5c48e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c491 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5c493 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10e5c499 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c49b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10e5c4a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5c4a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c4a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5c4ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10e5c4b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c4b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10e5c4b9 jmp 0x10e5c4f1 */
  goto L_10e5c4f1;
L_10e5c4bb:;
  /* 10e5c4bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c4be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c4c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5c4c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5c4c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10e5c4ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c4d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10e5c4d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c4d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c4dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10e5c4e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10e5c4e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10e5c4e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c4eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10e5c4f1:;
  /* 10e5c4f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10e5c4f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5c4fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c500 jne 0x10e5c514 */
  if (!C.zf) goto L_10e5c514;
  /* 10e5c502 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5c505 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10e5c50b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c512 je 0x10e5c51e */
  if (C.zf) goto L_10e5c51e;
L_10e5c514:;
  /* 10e5c514 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10e5c519 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c51e:;
  /* 10e5c51e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e5c524 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5c527 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c52d je 0x10e5c539 */
  if (C.zf) goto L_10e5c539;
  /* 10e5c52f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10e5c534 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c539:;
  /* 10e5c539 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10e5c53f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c542 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10e5c548 jmp 0x10e5c30d */
  goto L_10e5c30d;
L_10e5c54d:;
  /* 10e5c54d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c550 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e5c556 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10e5c55c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c560 jne 0x10e5c57a */
  if (!C.zf) goto L_10e5c57a;
  /* 10e5c562 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c565 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10e5c56b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10e5c571 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c578 je 0x10e5c581 */
  if (C.zf) goto L_10e5c581;
L_10e5c57a:;
  /* 10e5c57a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10e5c57f jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c581:;
  /* 10e5c581 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10e5c587 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c58d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10e5c593 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5c596 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c59b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e5c59e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5c5a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e5c5a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5c5a6 jmp 0x10e5c0aa */
  goto L_10e5c0aa;
L_10e5c5ab:;
  /* 10e5c5ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e5c5b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10e5c5b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c5b9 jne 0x10e5c5cc */
  if (!C.zf) goto L_10e5c5cc;
  /* 10e5c5bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e5c5c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10e5c5c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c5ca je 0x10e5c5d3 */
  if (C.zf) goto L_10e5c5d3;
L_10e5c5cc:;
  /* 10e5c5cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10e5c5d1 jmp 0x10e5c5e9 */
  goto L_10e5c5e9;
L_10e5c5d3:;
  /* 10e5c5d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10e5c5d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c5dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10e5c5e2 jmp 0x10e5c013 */
  goto L_10e5c013;
L_10e5c5e7:;
  /* 10e5c5e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5c5e9:;
  /* 10e5c5e9 mov esp, ebp */
  ESP = (EBP);
  /* 10e5c5eb pop ebp */
  EBP = (pop32());
  /* 10e5c5ec ret  */
  ESPCHK(0x10e5bfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f0 @ 0x10e5c5f0 (250 bytes, 92 insns) */
void f_10e5c5f0(void) {
  FTRACE(0x10e5c5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5c5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5c5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5c5f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c5f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5c5f7 push esi */
  push32((uint32_t)(ESI));
  /* 10e5c5f8 push edi */
  push32((uint32_t)(EDI));
  /* 10e5c5f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e5c5fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e5c5ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e5c602 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10e5c605:;
  /* 10e5c605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c609 jne 0x10e5c629 */
  if (!C.zf) goto L_10e5c629;
  /* 10e5c60b push 0x10e7e1a0 */
  push32((uint32_t)(0x10e7e1a0u));
  /* 10e5c610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5c612 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10e5c614 push 0x10e7e194 */
  push32((uint32_t)(0x10e7e194u));
  /* 10e5c619 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5c61b call 0x10e557a0 */
  push32(0x10e5c620u); f_10e557a0();
  /* 10e5c620 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c623 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c626 jne 0x10e5c629 */
  if (!C.zf) goto L_10e5c629;
  /* 10e5c628 int3  */
  x86_unimpl("int3 @ 0x10e5c628");
L_10e5c629:;
  /* 10e5c629 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5c62b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5c62d jne 0x10e5c605 */
  if (!C.zf) goto L_10e5c605;
L_10e5c62f:;
  /* 10e5c62f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c633 jne 0x10e5c653 */
  if (!C.zf) goto L_10e5c653;
  /* 10e5c635 push 0x10e7e184 */
  push32((uint32_t)(0x10e7e184u));
  /* 10e5c63a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5c63c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e5c63e push 0x10e7e194 */
  push32((uint32_t)(0x10e7e194u));
  /* 10e5c643 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5c645 call 0x10e557a0 */
  push32(0x10e5c64au); f_10e557a0();
  /* 10e5c64a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c64d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c650 jne 0x10e5c653 */
  if (!C.zf) goto L_10e5c653;
  /* 10e5c652 int3  */
  x86_unimpl("int3 @ 0x10e5c652");
L_10e5c653:;
  /* 10e5c653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c657 jne 0x10e5c62f */
  if (!C.zf) goto L_10e5c62f;
  /* 10e5c659 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c65c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10e5c663 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c669 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e5c66c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c672 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e5c674 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c677 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10e5c67e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5c681 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5c682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5c685 push edx */
  push32((uint32_t)(EDX));
  /* 10e5c686 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c689 push eax */
  push32((uint32_t)(EAX));
  /* 10e5c68a call 0x10e5d670 */
  push32(0x10e5c68fu); f_10e5d670();
  /* 10e5c68f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c692 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5c695 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c698 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5c69b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c69e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c6a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e5c6a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c6a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c6ab jl 0x10e5c6cf */
  if ((C.sf!=C.of)) goto L_10e5c6cf;
  /* 10e5c6ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c6b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5c6b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e5c6b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c6b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c6bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10e5c6c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c6c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5c6c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c6c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c6cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e5c6cd jmp 0x10e5c6e0 */
  goto L_10e5c6e0;
L_10e5c6cf:;
  /* 10e5c6cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c6d2 push edx */
  push32((uint32_t)(EDX));
  /* 10e5c6d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5c6d5 call 0x10e5d3f0 */
  push32(0x10e5c6dau); f_10e5d3f0();
  /* 10e5c6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c6dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10e5c6e0:;
  /* 10e5c6e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5c6e3 pop edi */
  EDI = (pop32());
  /* 10e5c6e4 pop esi */
  ESI = (pop32());
  /* 10e5c6e5 pop ebx */
  EBX = (pop32());
  /* 10e5c6e6 mov esp, ebp */
  ESP = (EBP);
  /* 10e5c6e8 pop ebp */
  EBP = (pop32());
  /* 10e5c6e9 ret  */
  ESPCHK(0x10e5c5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6f0 @ 0x10e5c6f0 (183 bytes, 58 insns) */
void f_10e5c6f0(void) {
  FTRACE(0x10e5c6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5c6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5c6f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5c6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c6f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c6f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c6fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c701 ja 0x10e5c71a */
  if ((!C.cf&&!C.zf)) goto L_10e5c71a;
  /* 10e5c703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c706 mov edx, dword ptr [0x10e80ca8] */
  EDX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e5c70c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c70e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e5c712 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c715 jmp 0x10e5c7a3 */
  goto L_10e5c7a3;
L_10e5c71a:;
  /* 10e5c71a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c71d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e5c720 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c726 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c72c mov edx, dword ptr [0x10e80ca8] */
  EDX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e5c732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c734 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e5c738 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c73d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c73f je 0x10e5c763 */
  if (C.zf) goto L_10e5c763;
  /* 10e5c741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c744 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e5c747 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c74d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10e5c750 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e5c753 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10e5c756 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10e5c75a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10e5c761 jmp 0x10e5c774 */
  goto L_10e5c774;
L_10e5c763:;
  /* 10e5c763 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e5c766 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10e5c769 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10e5c76d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10e5c774:;
  /* 10e5c774 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5c776 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5c778 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5c77a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10e5c77d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5c77e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c781 push edx */
  push32((uint32_t)(EDX));
  /* 10e5c782 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e5c785 push eax */
  push32((uint32_t)(EAX));
  /* 10e5c786 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5c788 call 0x10e5e910 */
  push32(0x10e5c78du); f_10e5e910();
  /* 10e5c78d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c792 jne 0x10e5c798 */
  if (!C.zf) goto L_10e5c798;
  /* 10e5c794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c796 jmp 0x10e5c7a3 */
  goto L_10e5c7a3;
L_10e5c798:;
  /* 10e5c798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5c79b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c7a0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10e5c7a3:;
  /* 10e5c7a3 mov esp, ebp */
  ESP = (EBP);
  /* 10e5c7a5 pop ebp */
  EBP = (pop32());
  /* 10e5c7a6 ret  */
  ESPCHK(0x10e5c6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b0 @ 0x10e5c7b0 (836 bytes, 238 insns) */
void f_10e5c7b0(void) {
  FTRACE(0x10e5c7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5c7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5c7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5c7b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5c7b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5c7b8 call 0x10e5a0e0 */
  push32(0x10e5c7bdu); f_10e5a0e0();
  /* 10e5c7bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c7c3 push eax */
  push32((uint32_t)(EAX));
  /* 10e5c7c4 call 0x10e5cb00 */
  push32(0x10e5c7c9u); f_10e5cb00();
  /* 10e5c7c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c7cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e5c7cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c7d2 cmp ecx, dword ptr [0x10e83e84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e83e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c7d8 jne 0x10e5c7eb */
  if (!C.zf) goto L_10e5c7eb;
  /* 10e5c7da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5c7dc call 0x10e5a180 */
  push32(0x10e5c7e1u); f_10e5a180();
  /* 10e5c7e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c7e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c7e6 jmp 0x10e5caf0 */
  goto L_10e5caf0;
L_10e5c7eb:;
  /* 10e5c7eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c7ef jne 0x10e5c80c */
  if (!C.zf) goto L_10e5c80c;
  /* 10e5c7f1 call 0x10e5cbe0 */
  push32(0x10e5c7f6u); f_10e5cbe0();
  /* 10e5c7f6 call 0x10e5cc60 */
  push32(0x10e5c7fbu); f_10e5cc60();
  /* 10e5c7fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5c7fd call 0x10e5a180 */
  push32(0x10e5c802u); f_10e5a180();
  /* 10e5c802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c807 jmp 0x10e5caf0 */
  goto L_10e5caf0;
L_10e5c80c:;
  /* 10e5c80c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5c813 jmp 0x10e5c81e */
  goto L_10e5c81e;
L_10e5c815:;
  /* 10e5c815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5c818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c81b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5c81e:;
  /* 10e5c81e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c822 jae 0x10e5c96f */
  if (!C.cf) goto L_10e5c96f;
  /* 10e5c828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5c82b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5c82e mov ecx, dword ptr [eax + 0x10e80ec8] */
  ECX = (r32((uint32_t)(EAX + 0x10e80ec8)));
  /* 10e5c834 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c837 jne 0x10e5c96a */
  if (!C.zf) goto L_10e5c96a;
  /* 10e5c83d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e5c844 jmp 0x10e5c84f */
  goto L_10e5c84f;
L_10e5c846:;
  /* 10e5c846 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c849 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c84c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10e5c84f:;
  /* 10e5c84f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c856 jae 0x10e5c864 */
  if (!C.cf) goto L_10e5c864;
  /* 10e5c858 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c85b mov byte ptr [eax + 0x10e84020], 0 */
  w8((uint32_t)(EAX + 0x10e84020), (0x0u));
  /* 10e5c862 jmp 0x10e5c846 */
  goto L_10e5c846;
L_10e5c864:;
  /* 10e5c864 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5c86b jmp 0x10e5c876 */
  goto L_10e5c876;
L_10e5c86d:;
  /* 10e5c86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e5c876:;
  /* 10e5c876 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c87a jae 0x10e5c8f7 */
  if (!C.cf) goto L_10e5c8f7;
  /* 10e5c87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5c87f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5c882 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c885 lea ecx, [edx + eax*8 + 0x10e80ed8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10e80ed8));
  /* 10e5c88c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5c88f jmp 0x10e5c89a */
  goto L_10e5c89a;
L_10e5c891:;
  /* 10e5c891 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c894 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c897 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e5c89a:;
  /* 10e5c89a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c89d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c89f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e5c8a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5c8a3 je 0x10e5c8f2 */
  if (C.zf) goto L_10e5c8f2;
  /* 10e5c8a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c8a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c8aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e5c8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c8af je 0x10e5c8f2 */
  if (C.zf) goto L_10e5c8f2;
  /* 10e5c8b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c8b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5c8b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5c8b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e5c8bb jmp 0x10e5c8c6 */
  goto L_10e5c8c6;
L_10e5c8bd:;
  /* 10e5c8bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c8c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e5c8c6:;
  /* 10e5c8c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5c8c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5c8cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e5c8ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c8d1 ja 0x10e5c8f0 */
  if ((!C.cf&&!C.zf)) goto L_10e5c8f0;
  /* 10e5c8d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c8d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c8d9 mov dl, byte ptr [eax + 0x10e84021] */
  DL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e5c8df or dl, byte ptr [ecx + 0x10e80ec0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10e80ec0))); DL = (_r); fl_logic(_r,8); }
  /* 10e5c8e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c8e8 mov byte ptr [eax + 0x10e84021], dl */
  w8((uint32_t)(EAX + 0x10e84021), (DL));
  /* 10e5c8ee jmp 0x10e5c8bd */
  goto L_10e5c8bd;
L_10e5c8f0:;
  /* 10e5c8f0 jmp 0x10e5c891 */
  goto L_10e5c891;
L_10e5c8f2:;
  /* 10e5c8f2 jmp 0x10e5c86d */
  goto L_10e5c86d;
L_10e5c8f7:;
  /* 10e5c8f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c8fa mov dword ptr [0x10e83e84], ecx */
  w32((uint32_t)(0x10e83e84), (ECX));
  /* 10e5c900 mov dword ptr [0x10e83f0c], 1 */
  w32((uint32_t)(0x10e83f0c), (0x1u));
  /* 10e5c90a mov edx, dword ptr [0x10e83e84] */
  EDX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5c910 push edx */
  push32((uint32_t)(EDX));
  /* 10e5c911 call 0x10e5cb60 */
  push32(0x10e5c916u); f_10e5cb60();
  /* 10e5c916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c919 mov dword ptr [0x10e84124], eax */
  w32((uint32_t)(0x10e84124), (EAX));
  /* 10e5c91e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5c925 jmp 0x10e5c930 */
  goto L_10e5c930;
L_10e5c927:;
  /* 10e5c927 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c92a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c92d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e5c930:;
  /* 10e5c930 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c934 jae 0x10e5c954 */
  if (!C.cf) goto L_10e5c954;
  /* 10e5c936 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5c939 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5c93c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c93f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5c942 mov cx, word ptr [ecx + eax*2 + 0x10e80ecc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10e80ecc)));
  /* 10e5c94a mov word ptr [edx*2 + 0x10e83f00], cx */
  w16((uint32_t)(EDX*2 + 0x10e83f00), (CX));
  /* 10e5c952 jmp 0x10e5c927 */
  goto L_10e5c927;
L_10e5c954:;
  /* 10e5c954 call 0x10e5cc60 */
  push32(0x10e5c959u); f_10e5cc60();
  /* 10e5c959 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5c95b call 0x10e5a180 */
  push32(0x10e5c960u); f_10e5a180();
  /* 10e5c960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c965 jmp 0x10e5caf0 */
  goto L_10e5caf0;
L_10e5c96a:;
  /* 10e5c96a jmp 0x10e5c815 */
  goto L_10e5c815;
L_10e5c96f:;
  /* 10e5c96f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10e5c972 push edx */
  push32((uint32_t)(EDX));
  /* 10e5c973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c976 push eax */
  push32((uint32_t)(EAX));
  /* 10e5c977 call dword ptr [0x10e85354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85354))), 0x10e5c97du);
  /* 10e5c97d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c980 jne 0x10e5cac2 */
  if (!C.zf) goto L_10e5cac2;
  /* 10e5c986 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e5c98d jmp 0x10e5c998 */
  goto L_10e5c998;
L_10e5c98f:;
  /* 10e5c98f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c995 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10e5c998:;
  /* 10e5c998 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c99f jae 0x10e5c9ad */
  if (!C.cf) goto L_10e5c9ad;
  /* 10e5c9a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5c9a4 mov byte ptr [edx + 0x10e84020], 0 */
  w8((uint32_t)(EDX + 0x10e84020), (0x0u));
  /* 10e5c9ab jmp 0x10e5c98f */
  goto L_10e5c98f;
L_10e5c9ad:;
  /* 10e5c9ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5c9b0 mov dword ptr [0x10e83e84], eax */
  w32((uint32_t)(0x10e83e84), (EAX));
  /* 10e5c9b5 mov dword ptr [0x10e84124], 0 */
  w32((uint32_t)(0x10e84124), (0x0u));
  /* 10e5c9bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5c9c3 jbe 0x10e5ca7e */
  if ((C.cf||C.zf)) goto L_10e5ca7e;
  /* 10e5c9c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10e5c9cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e5c9cf jmp 0x10e5c9da */
  goto L_10e5c9da;
L_10e5c9d1:;
  /* 10e5c9d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5c9d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5c9d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10e5c9da:;
  /* 10e5c9da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5c9dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5c9df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e5c9e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5c9e3 je 0x10e5ca2c */
  if (C.zf) goto L_10e5ca2c;
  /* 10e5c9e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5c9e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5c9ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e5c9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5c9ef je 0x10e5ca2c */
  if (C.zf) goto L_10e5ca2c;
  /* 10e5c9f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5c9f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5c9f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5c9f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e5c9fb jmp 0x10e5ca06 */
  goto L_10e5ca06;
L_10e5c9fd:;
  /* 10e5c9fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ca00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ca03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e5ca06:;
  /* 10e5ca06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5ca09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ca0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e5ca0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ca11 ja 0x10e5ca2a */
  if ((!C.cf&&!C.zf)) goto L_10e5ca2a;
  /* 10e5ca13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ca16 mov cl, byte ptr [eax + 0x10e84021] */
  CL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e5ca1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10e5ca1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ca22 mov byte ptr [edx + 0x10e84021], cl */
  w8((uint32_t)(EDX + 0x10e84021), (CL));
  /* 10e5ca28 jmp 0x10e5c9fd */
  goto L_10e5c9fd;
L_10e5ca2a:;
  /* 10e5ca2a jmp 0x10e5c9d1 */
  goto L_10e5c9d1;
L_10e5ca2c:;
  /* 10e5ca2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10e5ca33 jmp 0x10e5ca3e */
  goto L_10e5ca3e;
L_10e5ca35:;
  /* 10e5ca35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ca38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ca3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e5ca3e:;
  /* 10e5ca3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ca45 jae 0x10e5ca5e */
  if (!C.cf) goto L_10e5ca5e;
  /* 10e5ca47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ca4a mov dl, byte ptr [ecx + 0x10e84021] */
  DL = (r8((uint32_t)(ECX + 0x10e84021)));
  /* 10e5ca50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10e5ca53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ca56 mov byte ptr [eax + 0x10e84021], dl */
  w8((uint32_t)(EAX + 0x10e84021), (DL));
  /* 10e5ca5c jmp 0x10e5ca35 */
  goto L_10e5ca35;
L_10e5ca5e:;
  /* 10e5ca5e mov ecx, dword ptr [0x10e83e84] */
  ECX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5ca64 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ca65 call 0x10e5cb60 */
  push32(0x10e5ca6au); f_10e5cb60();
  /* 10e5ca6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ca6d mov dword ptr [0x10e84124], eax */
  w32((uint32_t)(0x10e84124), (EAX));
  /* 10e5ca72 mov dword ptr [0x10e83f0c], 1 */
  w32((uint32_t)(0x10e83f0c), (0x1u));
  /* 10e5ca7c jmp 0x10e5ca88 */
  goto L_10e5ca88;
L_10e5ca7e:;
  /* 10e5ca7e mov dword ptr [0x10e83f0c], 0 */
  w32((uint32_t)(0x10e83f0c), (0x0u));
L_10e5ca88:;
  /* 10e5ca88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5ca8f jmp 0x10e5ca9a */
  goto L_10e5ca9a;
L_10e5ca91:;
  /* 10e5ca91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5ca94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ca97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e5ca9a:;
  /* 10e5ca9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ca9e jae 0x10e5caaf */
  if (!C.cf) goto L_10e5caaf;
  /* 10e5caa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5caa3 mov word ptr [eax*2 + 0x10e83f00], 0 */
  w16((uint32_t)(EAX*2 + 0x10e83f00), (0x0u));
  /* 10e5caad jmp 0x10e5ca91 */
  goto L_10e5ca91;
L_10e5caaf:;
  /* 10e5caaf call 0x10e5cc60 */
  push32(0x10e5cab4u); f_10e5cc60();
  /* 10e5cab4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5cab6 call 0x10e5a180 */
  push32(0x10e5cabbu); f_10e5a180();
  /* 10e5cabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cabe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5cac0 jmp 0x10e5caf0 */
  goto L_10e5caf0;
L_10e5cac2:;
  /* 10e5cac2 cmp dword ptr [0x10e829a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cac9 je 0x10e5cae3 */
  if (C.zf) goto L_10e5cae3;
  /* 10e5cacb call 0x10e5cbe0 */
  push32(0x10e5cad0u); f_10e5cbe0();
  /* 10e5cad0 call 0x10e5cc60 */
  push32(0x10e5cad5u); f_10e5cc60();
  /* 10e5cad5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5cad7 call 0x10e5a180 */
  push32(0x10e5cadcu); f_10e5a180();
  /* 10e5cadc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5cae1 jmp 0x10e5caf0 */
  goto L_10e5caf0;
L_10e5cae3:;
  /* 10e5cae3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e5cae5 call 0x10e5a180 */
  push32(0x10e5caeau); f_10e5a180();
  /* 10e5caea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5caed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e5caf0:;
  /* 10e5caf0 mov esp, ebp */
  ESP = (EBP);
  /* 10e5caf2 pop ebp */
  EBP = (pop32());
  /* 10e5caf3 ret  */
  ESPCHK(0x10e5c7b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10e5cb00 (89 bytes, 21 insns) */
void f_10e5cb00(void) {
  FTRACE(0x10e5cb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cb00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cb01 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cb03 mov dword ptr [0x10e829a0], 0 */
  w32((uint32_t)(0x10e829a0), (0x0u));
  /* 10e5cb0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cb11 jne 0x10e5cb25 */
  if (!C.zf) goto L_10e5cb25;
  /* 10e5cb13 mov dword ptr [0x10e829a0], 1 */
  w32((uint32_t)(0x10e829a0), (0x1u));
  /* 10e5cb1d call dword ptr [0x10e8534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8534c))), 0x10e5cb23u);
  /* 10e5cb23 jmp 0x10e5cb57 */
  goto L_10e5cb57;
L_10e5cb25:;
  /* 10e5cb25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cb29 jne 0x10e5cb3d */
  if (!C.zf) goto L_10e5cb3d;
  /* 10e5cb2b mov dword ptr [0x10e829a0], 1 */
  w32((uint32_t)(0x10e829a0), (0x1u));
  /* 10e5cb35 call dword ptr [0x10e85350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85350))), 0x10e5cb3bu);
  /* 10e5cb3b jmp 0x10e5cb57 */
  goto L_10e5cb57;
L_10e5cb3d:;
  /* 10e5cb3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cb41 jne 0x10e5cb54 */
  if (!C.zf) goto L_10e5cb54;
  /* 10e5cb43 mov dword ptr [0x10e829a0], 1 */
  w32((uint32_t)(0x10e829a0), (0x1u));
  /* 10e5cb4d mov eax, dword ptr [0x10e829c0] */
  EAX = (r32((uint32_t)(0x10e829c0)));
  /* 10e5cb52 jmp 0x10e5cb57 */
  goto L_10e5cb57;
L_10e5cb54:;
  /* 10e5cb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10e5cb57:;
  /* 10e5cb57 pop ebp */
  EBP = (pop32());
  /* 10e5cb58 ret  */
  ESPCHK(0x10e5cb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb60 @ 0x10e5cb60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10e5cb60(void) {
  FTRACE(0x10e5cb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cb61 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cb63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5cb67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5cb6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cb6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5cb73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5cb76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cb7a ja 0x10e5cbaa */
  if ((!C.cf&&!C.zf)) goto L_10e5cbaa;
  /* 10e5cb7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cb7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5cb81 mov dl, byte ptr [eax + 0x10e5cbc4] */
  DL = (r8((uint32_t)(EAX + 0x10e5cbc4)));
  /* 10e5cb87 jmp dword ptr [edx*4 + 0x10e5cbb0] */
  switch (EDX) {
    case 0: goto L_10e5cb8e;
    case 1: goto L_10e5cb95;
    case 2: goto L_10e5cb9c;
    case 3: goto L_10e5cba3;
    case 4: goto L_10e5cbaa;
    default: x86_unimpl("switch@0x10e5cb87 out of table"); return;
  }
L_10e5cb8e:;
  /* 10e5cb8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10e5cb93 jmp 0x10e5cbac */
  goto L_10e5cbac;
L_10e5cb95:;
  /* 10e5cb95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10e5cb9a jmp 0x10e5cbac */
  goto L_10e5cbac;
L_10e5cb9c:;
  /* 10e5cb9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10e5cba1 jmp 0x10e5cbac */
  goto L_10e5cbac;
L_10e5cba3:;
  /* 10e5cba3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10e5cba8 jmp 0x10e5cbac */
  goto L_10e5cbac;
L_10e5cbaa:;
  /* 10e5cbaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5cbac:;
  /* 10e5cbac mov esp, ebp */
  ESP = (EBP);
  /* 10e5cbae pop ebp */
  EBP = (pop32());
  /* 10e5cbaf ret  */
  ESPCHK(0x10e5cb60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10e5cbe0 (116 bytes, 29 insns) */
void f_10e5cbe0(void) {
  FTRACE(0x10e5cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cbe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5cbeb jmp 0x10e5cbf6 */
  goto L_10e5cbf6;
L_10e5cbed:;
  /* 10e5cbed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cbf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cbf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5cbf6:;
  /* 10e5cbf6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cbfd jge 0x10e5cc0b */
  if ((C.sf==C.of)) goto L_10e5cc0b;
  /* 10e5cbff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cc02 mov byte ptr [ecx + 0x10e84020], 0 */
  w8((uint32_t)(ECX + 0x10e84020), (0x0u));
  /* 10e5cc09 jmp 0x10e5cbed */
  goto L_10e5cbed;
L_10e5cc0b:;
  /* 10e5cc0b mov dword ptr [0x10e83e84], 0 */
  w32((uint32_t)(0x10e83e84), (0x0u));
  /* 10e5cc15 mov dword ptr [0x10e83f0c], 0 */
  w32((uint32_t)(0x10e83f0c), (0x0u));
  /* 10e5cc1f mov dword ptr [0x10e84124], 0 */
  w32((uint32_t)(0x10e84124), (0x0u));
  /* 10e5cc29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5cc30 jmp 0x10e5cc3b */
  goto L_10e5cc3b;
L_10e5cc32:;
  /* 10e5cc32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cc35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cc38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5cc3b:;
  /* 10e5cc3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cc3f jge 0x10e5cc50 */
  if ((C.sf==C.of)) goto L_10e5cc50;
  /* 10e5cc41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cc44 mov word ptr [eax*2 + 0x10e83f00], 0 */
  w16((uint32_t)(EAX*2 + 0x10e83f00), (0x0u));
  /* 10e5cc4e jmp 0x10e5cc32 */
  goto L_10e5cc32;
L_10e5cc50:;
  /* 10e5cc50 mov esp, ebp */
  ESP = (EBP);
  /* 10e5cc52 pop ebp */
  EBP = (pop32());
  /* 10e5cc53 ret  */
  ESPCHK(0x10e5cbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x10e5cc60 (770 bytes, 175 insns) */
void f_10e5cc60(void) {
  FTRACE(0x10e5cc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cc60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cc61 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cc63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5cc69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10e5cc6f push eax */
  push32((uint32_t)(EAX));
  /* 10e5cc70 mov ecx, dword ptr [0x10e83e84] */
  ECX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5cc76 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cc77 call dword ptr [0x10e85354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85354))), 0x10e5cc7du);
  /* 10e5cc7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cc80 jne 0x10e5ce99 */
  if (!C.zf) goto L_10e5ce99;
  /* 10e5cc86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e5cc90 jmp 0x10e5cca1 */
  goto L_10e5cca1;
L_10e5cc92:;
  /* 10e5cc92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cc98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cc9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10e5cca1:;
  /* 10e5cca1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ccab jae 0x10e5ccc2 */
  if (!C.cf) goto L_10e5ccc2;
  /* 10e5ccad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ccb3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10e5ccb9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10e5ccc0 jmp 0x10e5cc92 */
  goto L_10e5cc92;
L_10e5ccc2:;
  /* 10e5ccc2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10e5ccc9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10e5cccf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5ccd2 jmp 0x10e5ccdd */
  goto L_10e5ccdd;
L_10e5ccd4:;
  /* 10e5ccd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ccd7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ccda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5ccdd:;
  /* 10e5ccdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cce0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5cce2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5cce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5cce6 je 0x10e5cd28 */
  if (C.zf) goto L_10e5cd28;
  /* 10e5cce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5cced mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e5ccef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10e5ccf5 jmp 0x10e5cd06 */
  goto L_10e5cd06;
L_10e5ccf7:;
  /* 10e5ccf7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ccfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cd00 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10e5cd06:;
  /* 10e5cd06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5cd09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5cd0b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e5cd0e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cd14 ja 0x10e5cd26 */
  if ((!C.cf&&!C.zf)) goto L_10e5cd26;
  /* 10e5cd16 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cd1c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10e5cd24 jmp 0x10e5ccf7 */
  goto L_10e5ccf7;
L_10e5cd26:;
  /* 10e5cd26 jmp 0x10e5ccd4 */
  goto L_10e5ccd4;
L_10e5cd28:;
  /* 10e5cd28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5cd2a mov eax, dword ptr [0x10e84124] */
  EAX = (r32((uint32_t)(0x10e84124)));
  /* 10e5cd2f push eax */
  push32((uint32_t)(EAX));
  /* 10e5cd30 mov ecx, dword ptr [0x10e83e84] */
  ECX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5cd36 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cd37 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10e5cd3d push edx */
  push32((uint32_t)(EDX));
  /* 10e5cd3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5cd43 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10e5cd49 push eax */
  push32((uint32_t)(EAX));
  /* 10e5cd4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5cd4c call 0x10e5e910 */
  push32(0x10e5cd51u); f_10e5e910();
  /* 10e5cd51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cd54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5cd56 mov ecx, dword ptr [0x10e83e84] */
  ECX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5cd5c push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cd5d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5cd62 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10e5cd68 push edx */
  push32((uint32_t)(EDX));
  /* 10e5cd69 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5cd6e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10e5cd74 push eax */
  push32((uint32_t)(EAX));
  /* 10e5cd75 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5cd7a mov ecx, dword ptr [0x10e84124] */
  ECX = (r32((uint32_t)(0x10e84124)));
  /* 10e5cd80 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cd81 call 0x10e5ead0 */
  push32(0x10e5cd86u); f_10e5ead0();
  /* 10e5cd86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cd89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5cd8b mov edx, dword ptr [0x10e83e84] */
  EDX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5cd91 push edx */
  push32((uint32_t)(EDX));
  /* 10e5cd92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5cd97 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10e5cd9d push eax */
  push32((uint32_t)(EAX));
  /* 10e5cd9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5cda3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10e5cda9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5cdaa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10e5cdaf mov edx, dword ptr [0x10e84124] */
  EDX = (r32((uint32_t)(0x10e84124)));
  /* 10e5cdb5 push edx */
  push32((uint32_t)(EDX));
  /* 10e5cdb6 call 0x10e5ead0 */
  push32(0x10e5cdbbu); f_10e5ead0();
  /* 10e5cdbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cdbe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e5cdc8 jmp 0x10e5cdd9 */
  goto L_10e5cdd9;
L_10e5cdca:;
  /* 10e5cdca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cdd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cdd3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10e5cdd9:;
  /* 10e5cdd9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cde3 jae 0x10e5ce94 */
  if (!C.cf) goto L_10e5ce94;
  /* 10e5cde9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cdef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5cdf1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10e5cdf9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5cdfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5cdfe je 0x10e5ce36 */
  if (C.zf) goto L_10e5ce36;
  /* 10e5ce00 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce06 mov cl, byte ptr [eax + 0x10e84021] */
  CL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e5ce0c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10e5ce0f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce15 mov byte ptr [edx + 0x10e84021], cl */
  w8((uint32_t)(EDX + 0x10e84021), (CL));
  /* 10e5ce1b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce27 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10e5ce2e mov byte ptr [eax + 0x10e83f20], dl */
  w8((uint32_t)(EAX + 0x10e83f20), (DL));
  /* 10e5ce34 jmp 0x10e5ce8f */
  goto L_10e5ce8f;
L_10e5ce36:;
  /* 10e5ce36 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ce3e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10e5ce46 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ce49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5ce4b je 0x10e5ce82 */
  if (C.zf) goto L_10e5ce82;
  /* 10e5ce4d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce53 mov al, byte ptr [edx + 0x10e84021] */
  AL = (r8((uint32_t)(EDX + 0x10e84021)));
  /* 10e5ce59 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e5ce5b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce61 mov byte ptr [ecx + 0x10e84021], al */
  w8((uint32_t)(ECX + 0x10e84021), (AL));
  /* 10e5ce67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce73 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10e5ce7a mov byte ptr [edx + 0x10e83f20], cl */
  w8((uint32_t)(EDX + 0x10e83f20), (CL));
  /* 10e5ce80 jmp 0x10e5ce8f */
  goto L_10e5ce8f;
L_10e5ce82:;
  /* 10e5ce82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ce88 mov byte ptr [edx + 0x10e83f20], 0 */
  w8((uint32_t)(EDX + 0x10e83f20), (0x0u));
L_10e5ce8f:;
  /* 10e5ce8f jmp 0x10e5cdca */
  goto L_10e5cdca;
L_10e5ce94:;
  /* 10e5ce94 jmp 0x10e5cf5e */
  goto L_10e5cf5e;
L_10e5ce99:;
  /* 10e5ce99 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10e5cea3 jmp 0x10e5ceb4 */
  goto L_10e5ceb4;
L_10e5cea5:;
  /* 10e5cea5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ceab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ceae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10e5ceb4:;
  /* 10e5ceb4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cebe jae 0x10e5cf5e */
  if (!C.cf) goto L_10e5cf5e;
  /* 10e5cec4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cecb jb 0x10e5cf08 */
  if (C.cf) goto L_10e5cf08;
  /* 10e5cecd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ced4 ja 0x10e5cf08 */
  if ((!C.cf&&!C.zf)) goto L_10e5cf08;
  /* 10e5ced6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cedc mov dl, byte ptr [ecx + 0x10e84021] */
  DL = (r8((uint32_t)(ECX + 0x10e84021)));
  /* 10e5cee2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10e5cee5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5ceeb mov byte ptr [eax + 0x10e84021], dl */
  w8((uint32_t)(EAX + 0x10e84021), (DL));
  /* 10e5cef1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cef7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cefa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cf00 mov byte ptr [edx + 0x10e83f20], cl */
  w8((uint32_t)(EDX + 0x10e83f20), (CL));
  /* 10e5cf06 jmp 0x10e5cf59 */
  goto L_10e5cf59;
L_10e5cf08:;
  /* 10e5cf08 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cf0f jb 0x10e5cf4c */
  if (C.cf) goto L_10e5cf4c;
  /* 10e5cf11 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cf18 ja 0x10e5cf4c */
  if ((!C.cf&&!C.zf)) goto L_10e5cf4c;
  /* 10e5cf1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cf20 mov cl, byte ptr [eax + 0x10e84021] */
  CL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e5cf26 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e5cf29 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cf2f mov byte ptr [edx + 0x10e84021], cl */
  w8((uint32_t)(EDX + 0x10e84021), (CL));
  /* 10e5cf35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cf3b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5cf3e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cf44 mov byte ptr [ecx + 0x10e83f20], al */
  w8((uint32_t)(ECX + 0x10e83f20), (AL));
  /* 10e5cf4a jmp 0x10e5cf59 */
  goto L_10e5cf59;
L_10e5cf4c:;
  /* 10e5cf4c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10e5cf52 mov byte ptr [edx + 0x10e83f20], 0 */
  w8((uint32_t)(EDX + 0x10e83f20), (0x0u));
L_10e5cf59:;
  /* 10e5cf59 jmp 0x10e5cea5 */
  goto L_10e5cea5;
L_10e5cf5e:;
  /* 10e5cf5e mov esp, ebp */
  ESP = (EBP);
  /* 10e5cf60 pop ebp */
  EBP = (pop32());
  /* 10e5cf61 ret  */
  ESPCHK(0x10e5cc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf70 @ 0x10e5cf70 (23 bytes, 9 insns) */
void f_10e5cf70(void) {
  FTRACE(0x10e5cf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cf70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cf71 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cf73 cmp dword ptr [0x10e83f0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e83f0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cf7a je 0x10e5cf83 */
  if (C.zf) goto L_10e5cf83;
  /* 10e5cf7c mov eax, dword ptr [0x10e83e84] */
  EAX = (r32((uint32_t)(0x10e83e84)));
  /* 10e5cf81 jmp 0x10e5cf85 */
  goto L_10e5cf85;
L_10e5cf83:;
  /* 10e5cf83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5cf85:;
  /* 10e5cf85 pop ebp */
  EBP = (pop32());
  /* 10e5cf86 ret  */
  ESPCHK(0x10e5cf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf90 @ 0x10e5cf90 (34 bytes, 10 insns) */
void f_10e5cf90(void) {
  FTRACE(0x10e5cf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cf91 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cf93 cmp dword ptr [0x10e842d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cf9a jne 0x10e5cfb0 */
  if (!C.zf) goto L_10e5cfb0;
  /* 10e5cf9c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10e5cf9e call 0x10e5c7b0 */
  push32(0x10e5cfa3u); f_10e5c7b0();
  /* 10e5cfa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cfa6 mov dword ptr [0x10e842d0], 1 */
  w32((uint32_t)(0x10e842d0), (0x1u));
L_10e5cfb0:;
  /* 10e5cfb0 pop ebp */
  EBP = (pop32());
  /* 10e5cfb1 ret  */
  ESPCHK(0x10e5cf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x10e5cfc0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_10e5cfc0(void) {
  FTRACE(0x10e5cfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5cfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5cfc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5cfc3 push edi */
  push32((uint32_t)(EDI));
  /* 10e5cfc4 push esi */
  push32((uint32_t)(ESI));
  /* 10e5cfc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5cfc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5cfcb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5cfce mov eax, ecx */
  EAX = (ECX);
  /* 10e5cfd0 mov edx, ecx */
  EDX = (ECX);
  /* 10e5cfd2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5cfd4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cfd6 jbe 0x10e5cfe0 */
  if ((C.cf||C.zf)) goto L_10e5cfe0;
  /* 10e5cfd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cfda jb 0x10e5d158 */
  if (C.cf) goto L_10e5d158;
L_10e5cfe0:;
  /* 10e5cfe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e5cfe6 jne 0x10e5cffc */
  if (!C.zf) goto L_10e5cffc;
  /* 10e5cfe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5cfeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5cfee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5cff1 jb 0x10e5d01c */
  if (C.cf) goto L_10e5d01c;
  /* 10e5cff3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5cff5 jmp dword ptr [edx*4 + 0x10e5d108] */
  switch (EDX) {
    case 0: goto L_10e5d118;
    case 1: goto L_10e5d120;
    case 2: goto L_10e5d12c;
    case 3: goto L_10e5d140;
    default: x86_unimpl("switch@0x10e5cff5 out of table"); return;
  }
L_10e5cffc:;
  /* 10e5cffc mov eax, edi */
  EAX = (EDI);
  /* 10e5cffe mov edx, 3 */
  EDX = (0x3u);
  /* 10e5d003 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d006 jb 0x10e5d014 */
  if (C.cf) goto L_10e5d014;
  /* 10e5d008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d00b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d00d jmp dword ptr [eax*4 + 0x10e5d020] */
  switch (EAX) {
    case 1: goto L_10e5d030;
    case 2: goto L_10e5d05c;
    case 3: goto L_10e5d080;
    default: x86_unimpl("switch@0x10e5d00d out of table"); return;
  }
L_10e5d014:;
  /* 10e5d014 jmp dword ptr [ecx*4 + 0x10e5d118] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10e5d118)))); return;
  /* 10e5d01b nop  */
  /* nop */
L_10e5d01c:;
  /* 10e5d01c jmp dword ptr [ecx*4 + 0x10e5d09c] */
  switch (ECX) {
    case 0: goto L_10e5d0ff;
    case 1: goto L_10e5d0ec;
    case 2: goto L_10e5d0e4;
    case 3: goto L_10e5d0dc;
    case 4: goto L_10e5d0d4;
    case 5: goto L_10e5d0cc;
    case 6: goto L_10e5d0c4;
    case 7: goto L_10e5d0bc;
    default: x86_unimpl("switch@0x10e5d01c out of table"); return;
  }
  /* 10e5d023 nop  */
  /* nop */
L_10e5d030:;
  /* 10e5d030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5d034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5d036 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5d039 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5d03c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5d03f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d042 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5d045 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d048 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d04b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d04e jb 0x10e5d01c */
  if (C.cf) goto L_10e5d01c;
  /* 10e5d050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d052 jmp dword ptr [edx*4 + 0x10e5d108] */
  switch (EDX) {
    case 0: goto L_10e5d118;
    case 1: goto L_10e5d120;
    case 2: goto L_10e5d12c;
    case 3: goto L_10e5d140;
    default: x86_unimpl("switch@0x10e5d052 out of table"); return;
  }
  /* 10e5d059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5d05c:;
  /* 10e5d05c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d05e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5d060 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5d062 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5d065 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d068 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5d06b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d06e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d071 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d074 jb 0x10e5d01c */
  if (C.cf) goto L_10e5d01c;
  /* 10e5d076 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d078 jmp dword ptr [edx*4 + 0x10e5d108] */
  switch (EDX) {
    case 0: goto L_10e5d118;
    case 1: goto L_10e5d120;
    case 2: goto L_10e5d12c;
    case 3: goto L_10e5d140;
    default: x86_unimpl("switch@0x10e5d078 out of table"); return;
  }
  /* 10e5d07f nop  */
  /* nop */
L_10e5d080:;
  /* 10e5d080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5d084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5d086 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e5d087 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d08a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e5d08b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d08e jb 0x10e5d01c */
  if (C.cf) goto L_10e5d01c;
  /* 10e5d090 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d092 jmp dword ptr [edx*4 + 0x10e5d108] */
  switch (EDX) {
    case 0: goto L_10e5d118;
    case 1: goto L_10e5d120;
    case 2: goto L_10e5d12c;
    case 3: goto L_10e5d140;
    default: x86_unimpl("switch@0x10e5d092 out of table"); return;
  }
  /* 10e5d099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5d0bc:;
  /* 10e5d0bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10e5d0c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10e5d0c4:;
  /* 10e5d0c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10e5d0c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10e5d0cc:;
  /* 10e5d0cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10e5d0d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10e5d0d4:;
  /* 10e5d0d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10e5d0d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10e5d0dc:;
  /* 10e5d0dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10e5d0e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10e5d0e4:;
  /* 10e5d0e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10e5d0e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10e5d0ec:;
  /* 10e5d0ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10e5d0f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10e5d0f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e5d0fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d0fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e5d0ff:;
  /* 10e5d0ff jmp dword ptr [edx*4 + 0x10e5d108] */
  switch (EDX) {
    case 0: goto L_10e5d118;
    case 1: goto L_10e5d120;
    case 2: goto L_10e5d12c;
    case 3: goto L_10e5d140;
    default: x86_unimpl("switch@0x10e5d0ff out of table"); return;
  }
  /* 10e5d106 mov edi, edi */
  EDI = (EDI);
L_10e5d118:;
  /* 10e5d118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d11b pop esi */
  ESI = (pop32());
  /* 10e5d11c pop edi */
  EDI = (pop32());
  /* 10e5d11d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d11e ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d11f nop  */
  /* nop */
L_10e5d120:;
  /* 10e5d120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5d122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5d124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d127 pop esi */
  ESI = (pop32());
  /* 10e5d128 pop edi */
  EDI = (pop32());
  /* 10e5d129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d12a ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d12b nop  */
  /* nop */
L_10e5d12c:;
  /* 10e5d12c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5d12e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5d130 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5d133 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5d136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d139 pop esi */
  ESI = (pop32());
  /* 10e5d13a pop edi */
  EDI = (pop32());
  /* 10e5d13b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d13c ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d13d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5d140:;
  /* 10e5d140 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5d142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5d144 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5d147 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5d14a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5d14d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5d150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d153 pop esi */
  ESI = (pop32());
  /* 10e5d154 pop edi */
  EDI = (pop32());
  /* 10e5d155 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d156 ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d157 nop  */
  /* nop */
L_10e5d158:;
  /* 10e5d158 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10e5d15c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10e5d160 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e5d166 jne 0x10e5d18c */
  if (!C.zf) goto L_10e5d18c;
  /* 10e5d168 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d16b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d16e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d171 jb 0x10e5d180 */
  if (C.cf) goto L_10e5d180;
  /* 10e5d173 std  */
  C.df=1;
  /* 10e5d174 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d176 cld  */
  C.df=0;
  /* 10e5d177 jmp dword ptr [edx*4 + 0x10e5d2a0] */
  switch (EDX) {
    case 0: goto L_10e5d2b0;
    case 1: goto L_10e5d2b8;
    case 2: goto L_10e5d2c8;
    case 3: goto L_10e5d2dc;
    default: x86_unimpl("switch@0x10e5d177 out of table"); return;
  }
  /* 10e5d17e mov edi, edi */
  EDI = (EDI);
L_10e5d180:;
  /* 10e5d180 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5d182 jmp dword ptr [ecx*4 + 0x10e5d250] */
  switch (ECX) {
    case 0: goto L_10e5d297;
    default: x86_unimpl("switch@0x10e5d182 out of table"); return;
  }
  /* 10e5d189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5d18c:;
  /* 10e5d18c mov eax, edi */
  EAX = (EDI);
  /* 10e5d18e mov edx, 3 */
  EDX = (0x3u);
  /* 10e5d193 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d196 jb 0x10e5d1a4 */
  if (C.cf) goto L_10e5d1a4;
  /* 10e5d198 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d19b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d19d jmp dword ptr [eax*4 + 0x10e5d1a8] */
  switch (EAX) {
    case 1: goto L_10e5d1b8;
    case 2: goto L_10e5d1d8;
    case 3: goto L_10e5d200;
    default: x86_unimpl("switch@0x10e5d19d out of table"); return;
  }
L_10e5d1a4:;
  /* 10e5d1a4 jmp dword ptr [ecx*4 + 0x10e5d2a0] */
  switch (ECX) {
    case 0: goto L_10e5d2b0;
    case 1: goto L_10e5d2b8;
    case 2: goto L_10e5d2c8;
    case 3: goto L_10e5d2dc;
    default: x86_unimpl("switch@0x10e5d1a4 out of table"); return;
  }
  /* 10e5d1ab nop  */
  /* nop */
L_10e5d1b8:;
  /* 10e5d1b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5d1bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d1bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5d1c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10e5d1c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d1c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10e5d1c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d1c8 jb 0x10e5d180 */
  if (C.cf) goto L_10e5d180;
  /* 10e5d1ca std  */
  C.df=1;
  /* 10e5d1cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d1cd cld  */
  C.df=0;
  /* 10e5d1ce jmp dword ptr [edx*4 + 0x10e5d2a0] */
  switch (EDX) {
    case 0: goto L_10e5d2b0;
    case 1: goto L_10e5d2b8;
    case 2: goto L_10e5d2c8;
    case 3: goto L_10e5d2dc;
    default: x86_unimpl("switch@0x10e5d1ce out of table"); return;
  }
  /* 10e5d1d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5d1d8:;
  /* 10e5d1d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5d1db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d1dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5d1e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5d1e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d1e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5d1e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d1ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d1ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d1f2 jb 0x10e5d180 */
  if (C.cf) goto L_10e5d180;
  /* 10e5d1f4 std  */
  C.df=1;
  /* 10e5d1f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d1f7 cld  */
  C.df=0;
  /* 10e5d1f8 jmp dword ptr [edx*4 + 0x10e5d2a0] */
  switch (EDX) {
    case 0: goto L_10e5d2b0;
    case 1: goto L_10e5d2b8;
    case 2: goto L_10e5d2c8;
    case 3: goto L_10e5d2dc;
    default: x86_unimpl("switch@0x10e5d1f8 out of table"); return;
  }
  /* 10e5d1ff nop  */
  /* nop */
L_10e5d200:;
  /* 10e5d200 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5d203 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d205 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5d208 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5d20b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5d20e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5d211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5d214 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5d217 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d21a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d21d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d220 jb 0x10e5d180 */
  if (C.cf) goto L_10e5d180;
  /* 10e5d226 std  */
  C.df=1;
  /* 10e5d227 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5d229 cld  */
  C.df=0;
  /* 10e5d22a jmp dword ptr [edx*4 + 0x10e5d2a0] */
  switch (EDX) {
    case 0: goto L_10e5d2b0;
    case 1: goto L_10e5d2b8;
    case 2: goto L_10e5d2c8;
    case 3: goto L_10e5d2dc;
    default: x86_unimpl("switch@0x10e5d22a out of table"); return;
  }
  /* 10e5d231 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10e5d234 push esp */
  push32((uint32_t)(ESP));
  /* 10e5d235 shl ch, cl */
  C.c.b.h = (sh_shl((uint32_t)(C.c.b.h), (CL)&0x1f, 8));
  /* 10e5d237 adc byte ptr [edx + edx*8 - 0x1b], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + EDX*8 + -0x1b))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDX*8 + -0x1b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e5d23b adc byte ptr [edx + edx*8 - 0x1b], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + EDX*8 + -0x1b))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDX*8 + -0x1b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e5d23f adc byte ptr [edx + edx*8 - 0x1b], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + EDX*8 + -0x1b))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDX*8 + -0x1b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e5d243 adc byte ptr [edx + edx*8 - 0x1b], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + EDX*8 + -0x1b))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDX*8 + -0x1b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e5d247 adc byte ptr [edx + edx*8 - 0x1b], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EDX*8 + -0x1b))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDX*8 + -0x1b), (_r)); fl_add(_a,_b,_r,8); }
  /* 10e5d24c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e5d24e in eax, 0x10 */
  x86_unimpl("in @ 0x10e5d24e");
  /* 10e5d254 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10e5d258 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10e5d25c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10e5d260 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10e5d264 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10e5d268 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10e5d26c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10e5d270 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10e5d274 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10e5d278 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10e5d27c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10e5d280 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10e5d284 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10e5d288 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10e5d28c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e5d293 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d295 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e5d297:;
  /* 10e5d297 jmp dword ptr [edx*4 + 0x10e5d2a0] */
  switch (EDX) {
    case 0: goto L_10e5d2b0;
    case 1: goto L_10e5d2b8;
    case 2: goto L_10e5d2c8;
    case 3: goto L_10e5d2dc;
    default: x86_unimpl("switch@0x10e5d297 out of table"); return;
  }
  /* 10e5d29e mov edi, edi */
  EDI = (EDI);
L_10e5d2b0:;
  /* 10e5d2b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d2b3 pop esi */
  ESI = (pop32());
  /* 10e5d2b4 pop edi */
  EDI = (pop32());
  /* 10e5d2b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d2b6 ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d2b7 nop  */
  /* nop */
L_10e5d2b8:;
  /* 10e5d2b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5d2bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5d2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d2c1 pop esi */
  ESI = (pop32());
  /* 10e5d2c2 pop edi */
  EDI = (pop32());
  /* 10e5d2c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d2c4 ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d2c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5d2c8:;
  /* 10e5d2c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5d2cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5d2ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5d2d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5d2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d2d7 pop esi */
  ESI = (pop32());
  /* 10e5d2d8 pop edi */
  EDI = (pop32());
  /* 10e5d2d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d2da ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
  /* 10e5d2db nop  */
  /* nop */
L_10e5d2dc:;
  /* 10e5d2dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5d2df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5d2e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5d2e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5d2e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5d2eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5d2ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d2f1 pop esi */
  ESI = (pop32());
  /* 10e5d2f2 pop edi */
  EDI = (pop32());
  /* 10e5d2f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5d2f4 ret  */
  ESPCHK(0x10e5cfc0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10e5d300 (104 bytes, 43 insns) */
void f_10e5d300(void) {
  FTRACE(0x10e5d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5d300 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5d301 push esi */
  push32((uint32_t)(ESI));
  /* 10e5d302 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10e5d306 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d308 jne 0x10e5d322 */
  if (!C.zf) goto L_10e5d322;
  /* 10e5d30a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e5d30e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e5d312 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d314 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5d316 mov ebx, eax */
  EBX = (EAX);
  /* 10e5d318 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e5d31c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5d31e mov edx, ebx */
  EDX = (EBX);
  /* 10e5d320 jmp 0x10e5d363 */
  goto L_10e5d363;
L_10e5d322:;
  /* 10e5d322 mov ecx, eax */
  ECX = (EAX);
  /* 10e5d324 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e5d328 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e5d32c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10e5d330:;
  /* 10e5d330 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e5d332 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10e5d334 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e5d336 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10e5d338 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d33a jne 0x10e5d330 */
  if (!C.zf) goto L_10e5d330;
  /* 10e5d33c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5d33e mov esi, eax */
  ESI = (EAX);
  /* 10e5d340 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e5d344 mov ecx, eax */
  ECX = (EAX);
  /* 10e5d346 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e5d34a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e5d34c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d34e jb 0x10e5d35e */
  if (C.cf) goto L_10e5d35e;
  /* 10e5d350 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d354 ja 0x10e5d35e */
  if ((!C.cf&&!C.zf)) goto L_10e5d35e;
  /* 10e5d356 jb 0x10e5d35f */
  if (C.cf) goto L_10e5d35f;
  /* 10e5d358 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d35c jbe 0x10e5d35f */
  if ((C.cf||C.zf)) goto L_10e5d35f;
L_10e5d35e:;
  /* 10e5d35e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10e5d35f:;
  /* 10e5d35f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d361 mov eax, esi */
  EAX = (ESI);
L_10e5d363:;
  /* 10e5d363 pop esi */
  ESI = (pop32());
  /* 10e5d364 pop ebx */
  EBX = (pop32());
  /* 10e5d365 ret 0x10 */
  ESPCHK(0x10e5d300u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10e5d370 (117 bytes, 44 insns) */
void f_10e5d370(void) {
  FTRACE(0x10e5d370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5d370 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5d371 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10e5d375 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d377 jne 0x10e5d391 */
  if (!C.zf) goto L_10e5d391;
  /* 10e5d379 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e5d37d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e5d381 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d383 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5d385 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e5d389 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5d38b mov eax, edx */
  EAX = (EDX);
  /* 10e5d38d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d38f jmp 0x10e5d3e1 */
  goto L_10e5d3e1;
L_10e5d391:;
  /* 10e5d391 mov ecx, eax */
  ECX = (EAX);
  /* 10e5d393 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e5d397 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e5d39b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10e5d39f:;
  /* 10e5d39f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e5d3a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10e5d3a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e5d3a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10e5d3a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d3a9 jne 0x10e5d39f */
  if (!C.zf) goto L_10e5d39f;
  /* 10e5d3ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5d3ad mov ecx, eax */
  ECX = (EAX);
  /* 10e5d3af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e5d3b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10e5d3b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e5d3b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d3ba jb 0x10e5d3ca */
  if (C.cf) goto L_10e5d3ca;
  /* 10e5d3bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d3c0 ja 0x10e5d3ca */
  if ((!C.cf&&!C.zf)) goto L_10e5d3ca;
  /* 10e5d3c2 jb 0x10e5d3d2 */
  if (C.cf) goto L_10e5d3d2;
  /* 10e5d3c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d3c8 jbe 0x10e5d3d2 */
  if ((C.cf||C.zf)) goto L_10e5d3d2;
L_10e5d3ca:;
  /* 10e5d3ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d3ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e5d3d2:;
  /* 10e5d3d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d3d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d3da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5d3dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5d3de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e5d3e1:;
  /* 10e5d3e1 pop ebx */
  EBX = (pop32());
  /* 10e5d3e2 ret 0x10 */
  ESPCHK(0x10e5d370u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d3f0 @ 0x10e5d3f0 (628 bytes, 214 insns) */
void f_10e5d3f0(void) {
  FTRACE(0x10e5d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5d3f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d3f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5d3f7 push esi */
  push32((uint32_t)(ESI));
  /* 10e5d3f8 push edi */
  push32((uint32_t)(EDI));
L_10e5d3f9:;
  /* 10e5d3f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d3fd jne 0x10e5d41d */
  if (!C.zf) goto L_10e5d41d;
  /* 10e5d3ff push 0x10e7e24c */
  push32((uint32_t)(0x10e7e24cu));
  /* 10e5d404 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5d406 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10e5d408 push 0x10e7e240 */
  push32((uint32_t)(0x10e7e240u));
  /* 10e5d40d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5d40f call 0x10e557a0 */
  push32(0x10e5d414u); f_10e557a0();
  /* 10e5d414 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d41a jne 0x10e5d41d */
  if (!C.zf) goto L_10e5d41d;
  /* 10e5d41c int3  */
  x86_unimpl("int3 @ 0x10e5d41c");
L_10e5d41d:;
  /* 10e5d41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d421 jne 0x10e5d3f9 */
  if (!C.zf) goto L_10e5d3f9;
  /* 10e5d423 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d426 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5d429 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d42c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e5d42f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e5d432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d435 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5d438 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d43e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5d440 je 0x10e5d44f */
  if (C.zf) goto L_10e5d44f;
  /* 10e5d442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d445 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5d448 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d44b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5d44d je 0x10e5d465 */
  if (C.zf) goto L_10e5d465;
L_10e5d44f:;
  /* 10e5d44f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d452 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e5d455 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e5d457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d45a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10e5d45d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d460 jmp 0x10e5d65d */
  goto L_10e5d65d;
L_10e5d465:;
  /* 10e5d465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d468 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e5d46b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d470 je 0x10e5d4bc */
  if (C.zf) goto L_10e5d4bc;
  /* 10e5d472 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d475 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e5d47c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d47f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e5d482 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d487 je 0x10e5d4a5 */
  if (C.zf) goto L_10e5d4a5;
  /* 10e5d489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d48c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d48f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5d492 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e5d494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d497 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5d49a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d49d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e5d4a3 jmp 0x10e5d4bc */
  goto L_10e5d4bc;
L_10e5d4a5:;
  /* 10e5d4a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5d4ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d4ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e5d4b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d4b7 jmp 0x10e5d65d */
  goto L_10e5d65d;
L_10e5d4bc:;
  /* 10e5d4bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5d4c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d4c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e5d4cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5d4d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e5d4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e5d4e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5d4eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d4ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e5d4f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d4f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5d4f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d4fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5d4ff jne 0x10e5d52f */
  if (!C.zf) goto L_10e5d52f;
  /* 10e5d501 cmp dword ptr [ebp - 8], 0x10e81150 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10e81150u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d508 je 0x10e5d513 */
  if (C.zf) goto L_10e5d513;
  /* 10e5d50a cmp dword ptr [ebp - 8], 0x10e81170 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10e81170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d511 jne 0x10e5d523 */
  if (!C.zf) goto L_10e5d523;
L_10e5d513:;
  /* 10e5d513 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5d516 push edx */
  push32((uint32_t)(EDX));
  /* 10e5d517 call 0x10e5f360 */
  push32(0x10e5d51cu); f_10e5f360();
  /* 10e5d51c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d51f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d521 jne 0x10e5d52f */
  if (!C.zf) goto L_10e5d52f;
L_10e5d523:;
  /* 10e5d523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d526 push eax */
  push32((uint32_t)(EAX));
  /* 10e5d527 call 0x10e5f290 */
  push32(0x10e5d52cu); f_10e5f290();
  /* 10e5d52c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5d52f:;
  /* 10e5d52f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d532 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5d535 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d53b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5d53d je 0x10e5d61b */
  if (C.zf) goto L_10e5d61b;
L_10e5d543:;
  /* 10e5d543 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d546 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d549 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10e5d54b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d54e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5d550 jge 0x10e5d573 */
  if ((C.sf==C.of)) goto L_10e5d573;
  /* 10e5d552 push 0x10e7e200 */
  push32((uint32_t)(0x10e7e200u));
  /* 10e5d557 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5d559 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10e5d55e push 0x10e7e240 */
  push32((uint32_t)(0x10e7e240u));
  /* 10e5d563 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5d565 call 0x10e557a0 */
  push32(0x10e5d56au); f_10e557a0();
  /* 10e5d56a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d56d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d570 jne 0x10e5d573 */
  if (!C.zf) goto L_10e5d573;
  /* 10e5d572 int3  */
  x86_unimpl("int3 @ 0x10e5d572");
L_10e5d573:;
  /* 10e5d573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d577 jne 0x10e5d543 */
  if (!C.zf) goto L_10e5d543;
  /* 10e5d579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d57c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d57f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e5d581 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d584 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5d587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d58a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e5d58d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d593 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e5d595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d598 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e5d59b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d59e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d5a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e5d5a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d5a8 jle 0x10e5d5c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5d5c6;
  /* 10e5d5aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d5ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e5d5ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d5b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5d5b4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5d5b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5d5b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5d5b9 call 0x10e5ef80 */
  push32(0x10e5d5beu); f_10e5ef80();
  /* 10e5d5be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d5c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e5d5c4 jmp 0x10e5d60e */
  goto L_10e5d60e;
L_10e5d5c6:;
  /* 10e5d5c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d5ca je 0x10e5d5e9 */
  if (C.zf) goto L_10e5d5e9;
  /* 10e5d5cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5d5cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e5d5d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5d5d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d5d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5d5db mov ecx, dword ptr [edx*4 + 0x10e84180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5d5e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d5e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e5d5e7 jmp 0x10e5d5f0 */
  goto L_10e5d5f0;
L_10e5d5e9:;
  /* 10e5d5e9 mov dword ptr [ebp - 0x14], 0x10e80a68 */
  w32((uint32_t)(EBP + -0x14), (0x10e80a68u));
L_10e5d5f0:;
  /* 10e5d5f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e5d5f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10e5d5f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d5fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d5fc je 0x10e5d60e */
  if (C.zf) goto L_10e5d60e;
  /* 10e5d5fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5d600 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5d602 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5d605 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5d606 call 0x10e5ee30 */
  push32(0x10e5d60bu); f_10e5ee30();
  /* 10e5d60b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5d60e:;
  /* 10e5d60e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d611 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5d614 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e5d617 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e5d619 jmp 0x10e5d639 */
  goto L_10e5d639;
L_10e5d61b:;
  /* 10e5d61b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e5d622 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d625 push edx */
  push32((uint32_t)(EDX));
  /* 10e5d626 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10e5d629 push eax */
  push32((uint32_t)(EAX));
  /* 10e5d62a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5d62d push ecx */
  push32((uint32_t)(ECX));
  /* 10e5d62e call 0x10e5ef80 */
  push32(0x10e5d633u); f_10e5ef80();
  /* 10e5d633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d636 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e5d639:;
  /* 10e5d639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5d63c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d63f je 0x10e5d655 */
  if (C.zf) goto L_10e5d655;
  /* 10e5d641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d644 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5d647 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d64a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d64d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e5d650 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d653 jmp 0x10e5d65d */
  goto L_10e5d65d;
L_10e5d655:;
  /* 10e5d655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d658 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10e5d65d:;
  /* 10e5d65d pop edi */
  EDI = (pop32());
  /* 10e5d65e pop esi */
  ESI = (pop32());
  /* 10e5d65f pop ebx */
  EBX = (pop32());
  /* 10e5d660 mov esp, ebp */
  ESP = (EBP);
  /* 10e5d662 pop ebp */
  EBP = (pop32());
  /* 10e5d663 ret  */
  ESPCHK(0x10e5d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x10e5d670 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10e5d670(void) {
  FTRACE(0x10e5d670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5d670 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5d671 mov ebp, esp */
  EBP = (ESP);
  /* 10e5d673 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d679 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5d67a push esi */
  push32((uint32_t)(ESI));
  /* 10e5d67b push edi */
  push32((uint32_t)(EDI));
  /* 10e5d67c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e5d683 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10e5d68d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10e5d694:;
  /* 10e5d694 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d697 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e5d699 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10e5d69c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d6a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d6a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d6a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e5d6a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5d6ab je 0x10e5e287 */
  if (C.zf) goto L_10e5e287;
  /* 10e5d6b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d6b8 jl 0x10e5e287 */
  if ((C.sf!=C.of)) goto L_10e5e287;
  /* 10e5d6be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d6c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d6c5 jl 0x10e5d6e6 */
  if ((C.sf!=C.of)) goto L_10e5d6e6;
  /* 10e5d6c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d6cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d6ce jg 0x10e5d6e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e5d6e6;
  /* 10e5d6d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d6d4 movsx ecx, byte ptr [eax + 0x10e7e238] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10e7e238))));
  /* 10e5d6db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d6de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10e5d6e4 jmp 0x10e5d6f0 */
  goto L_10e5d6f0;
L_10e5d6e6:;
  /* 10e5d6e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10e5d6f0:;
  /* 10e5d6f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10e5d6f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e5d6f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5d6fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5d6ff movsx edx, byte ptr [ecx + eax*8 + 0x10e7e258] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10e7e258))));
  /* 10e5d707 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10e5d70a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e5d70d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5d710 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10e5d716 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d71d ja 0x10e5e282 */
  if ((!C.cf&&!C.zf)) goto L_10e5e282;
  /* 10e5d723 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10e5d729 jmp dword ptr [ecx*4 + 0x10e5e294] */
  switch (ECX) {
    case 0: goto L_10e5d730;
    case 1: goto L_10e5d7ca;
    case 2: goto L_10e5d80c;
    case 3: goto L_10e5d87b;
    case 4: goto L_10e5d8d3;
    case 5: goto L_10e5d8e2;
    case 6: goto L_10e5d92e;
    case 7: goto L_10e5d9c1;
    case 8: goto L_10e5d858;
    case 9: goto L_10e5d863;
    case 10: goto L_10e5d84e;
    case 11: goto L_10e5d843;
    case 12: goto L_10e5d86e;
    case 13: goto L_10e5d876;
    default: x86_unimpl("switch@0x10e5d729 out of table"); return;
  }
L_10e5d730:;
  /* 10e5d730 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e5d737 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5d73a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d740 mov eax, dword ptr [0x10e80ca8] */
  EAX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e5d745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d747 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e5d74b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d751 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5d753 je 0x10e5d7ad */
  if (C.zf) goto L_10e5d7ad;
  /* 10e5d755 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10e5d75b push edx */
  push32((uint32_t)(EDX));
  /* 10e5d75c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d75f push eax */
  push32((uint32_t)(EAX));
  /* 10e5d760 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d764 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5d765 call 0x10e5e3a0 */
  push32(0x10e5d76au); f_10e5e3a0();
  /* 10e5d76a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d76d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d770 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e5d772 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10e5d775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d778 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d77b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e5d77e:;
  /* 10e5d77e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5d784 jne 0x10e5d7a7 */
  if (!C.zf) goto L_10e5d7a7;
  /* 10e5d786 push 0x10e7e2d8 */
  push32((uint32_t)(0x10e7e2d8u));
  /* 10e5d78b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5d78d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10e5d792 push 0x10e7e2cc */
  push32((uint32_t)(0x10e7e2ccu));
  /* 10e5d797 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5d799 call 0x10e557a0 */
  push32(0x10e5d79eu); f_10e557a0();
  /* 10e5d79e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d7a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d7a4 jne 0x10e5d7a7 */
  if (!C.zf) goto L_10e5d7a7;
  /* 10e5d7a6 int3  */
  x86_unimpl("int3 @ 0x10e5d7a6");
L_10e5d7a7:;
  /* 10e5d7a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d7a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5d7ab jne 0x10e5d77e */
  if (!C.zf) goto L_10e5d77e;
L_10e5d7ad:;
  /* 10e5d7ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10e5d7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5d7b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5d7b7 push edx */
  push32((uint32_t)(EDX));
  /* 10e5d7b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d7bc push eax */
  push32((uint32_t)(EAX));
  /* 10e5d7bd call 0x10e5e3a0 */
  push32(0x10e5d7c2u); f_10e5e3a0();
  /* 10e5d7c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d7c5 jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d7ca:;
  /* 10e5d7ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e5d7d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5d7d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10e5d7da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10e5d7e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10e5d7e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e5d7ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e5d7ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5d7f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10e5d800 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e5d807 jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d80c:;
  /* 10e5d80c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d810 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10e5d816 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10e5d81c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d81f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10e5d825 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d82c ja 0x10e5d876 */
  if ((!C.cf&&!C.zf)) goto L_10e5d876;
  /* 10e5d82e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10e5d834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d836 mov al, byte ptr [ecx + 0x10e5e2cc] */
  AL = (r8((uint32_t)(ECX + 0x10e5e2cc)));
  /* 10e5d83c jmp dword ptr [eax*4 + 0x10e5e2b4] */
  switch (EAX) {
    case 0: goto L_10e5d858;
    case 1: goto L_10e5d863;
    case 2: goto L_10e5d84e;
    case 3: goto L_10e5d843;
    case 4: goto L_10e5d86e;
    case 5: goto L_10e5d876;
    default: x86_unimpl("switch@0x10e5d83c out of table"); return;
  }
L_10e5d843:;
  /* 10e5d843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d846 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d849 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5d84c jmp 0x10e5d876 */
  goto L_10e5d876;
L_10e5d84e:;
  /* 10e5d84e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d851 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10e5d853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5d856 jmp 0x10e5d876 */
  goto L_10e5d876;
L_10e5d858:;
  /* 10e5d858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d85b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d85e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5d861 jmp 0x10e5d876 */
  goto L_10e5d876;
L_10e5d863:;
  /* 10e5d863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d866 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10e5d869 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5d86c jmp 0x10e5d876 */
  goto L_10e5d876;
L_10e5d86e:;
  /* 10e5d86e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d871 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10e5d873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5d876:;
  /* 10e5d876 jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d87b:;
  /* 10e5d87b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d87f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d882 jne 0x10e5d8b7 */
  if (!C.zf) goto L_10e5d8b7;
  /* 10e5d884 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e5d887 push edx */
  push32((uint32_t)(EDX));
  /* 10e5d888 call 0x10e5e4b0 */
  push32(0x10e5d88du); f_10e5e4b0();
  /* 10e5d88d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d890 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10e5d896 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d89d jge 0x10e5d8b5 */
  if ((C.sf==C.of)) goto L_10e5d8b5;
  /* 10e5d89f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d8a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e5d8a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5d8a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e5d8ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5d8af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10e5d8b5:;
  /* 10e5d8b5 jmp 0x10e5d8ce */
  goto L_10e5d8ce;
L_10e5d8b7:;
  /* 10e5d8b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e5d8bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5d8c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d8c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10e5d8c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10e5d8ce:;
  /* 10e5d8ce jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d8d3:;
  /* 10e5d8d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10e5d8dd jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d8e2:;
  /* 10e5d8e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d8e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d8e9 jne 0x10e5d912 */
  if (!C.zf) goto L_10e5d912;
  /* 10e5d8eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e5d8ee push eax */
  push32((uint32_t)(EAX));
  /* 10e5d8ef call 0x10e5e4b0 */
  push32(0x10e5d8f4u); f_10e5e4b0();
  /* 10e5d8f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d8f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10e5d8fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d904 jge 0x10e5d910 */
  if ((C.sf==C.of)) goto L_10e5d910;
  /* 10e5d906 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10e5d910:;
  /* 10e5d910 jmp 0x10e5d929 */
  goto L_10e5d929;
L_10e5d912:;
  /* 10e5d912 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e5d918 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5d91b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d91f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e5d923 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10e5d929:;
  /* 10e5d929 jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d92e:;
  /* 10e5d92e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d932 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10e5d938 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10e5d93e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d941 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10e5d947 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d94e ja 0x10e5d9bc */
  if ((!C.cf&&!C.zf)) goto L_10e5d9bc;
  /* 10e5d950 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10e5d956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5d958 mov al, byte ptr [ecx + 0x10e5e2f1] */
  AL = (r8((uint32_t)(ECX + 0x10e5e2f1)));
  /* 10e5d95e jmp dword ptr [eax*4 + 0x10e5e2dd] */
  switch (EAX) {
    case 0: goto L_10e5d970;
    case 1: goto L_10e5d9a9;
    case 2: goto L_10e5d965;
    case 3: goto L_10e5d9b3;
    case 4: goto L_10e5d9bc;
    default: x86_unimpl("switch@0x10e5d95e out of table"); return;
  }
L_10e5d965:;
  /* 10e5d965 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d968 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5d96b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5d96e jmp 0x10e5d9bc */
  goto L_10e5d9bc;
L_10e5d970:;
  /* 10e5d970 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d973 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e5d976 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d979 jne 0x10e5d99b */
  if (!C.zf) goto L_10e5d99b;
  /* 10e5d97b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d97e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e5d982 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d985 jne 0x10e5d99b */
  if (!C.zf) goto L_10e5d99b;
  /* 10e5d987 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5d98a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5d98d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e5d990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d993 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e5d996 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5d999 jmp 0x10e5d9a7 */
  goto L_10e5d9a7;
L_10e5d99b:;
  /* 10e5d99b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10e5d9a2 jmp 0x10e5d730 */
  goto L_10e5d730;
L_10e5d9a7:;
  /* 10e5d9a7 jmp 0x10e5d9bc */
  goto L_10e5d9bc;
L_10e5d9a9:;
  /* 10e5d9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d9ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10e5d9ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5d9b1 jmp 0x10e5d9bc */
  goto L_10e5d9bc;
L_10e5d9b3:;
  /* 10e5d9b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d9b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e5d9b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5d9bc:;
  /* 10e5d9bc jmp 0x10e5e282 */
  goto L_10e5e282;
L_10e5d9c1:;
  /* 10e5d9c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5d9c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10e5d9cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10e5d9d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5d9d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10e5d9da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5d9e1 ja 0x10e5e0a7 */
  if ((!C.cf&&!C.zf)) goto L_10e5e0a7;
  /* 10e5d9e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10e5d9ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5d9ef mov cl, byte ptr [edx + 0x10e5e35c] */
  CL = (r8((uint32_t)(EDX + 0x10e5e35c)));
  /* 10e5d9f5 jmp dword ptr [ecx*4 + 0x10e5e320] */
  switch (ECX) {
    case 0: goto L_10e5d9fc;
    case 1: goto L_10e5dc90;
    case 2: goto L_10e5db20;
    case 3: goto L_10e5ddc9;
    case 4: goto L_10e5da8b;
    case 5: goto L_10e5da11;
    case 6: goto L_10e5dd9b;
    case 7: goto L_10e5dca0;
    case 8: goto L_10e5dc45;
    case 9: goto L_10e5de15;
    case 10: goto L_10e5ddbf;
    case 11: goto L_10e5db36;
    case 12: goto L_10e5ddb3;
    case 13: goto L_10e5ddd5;
    case 14: goto L_10e5e0a7;
    default: x86_unimpl("switch@0x10e5d9f5 out of table"); return;
  }
L_10e5d9fc:;
  /* 10e5d9fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5d9ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5da04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5da06 jne 0x10e5da11 */
  if (!C.zf) goto L_10e5da11;
  /* 10e5da08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5da0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e5da0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5da11:;
  /* 10e5da11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5da14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5da1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5da1c je 0x10e5da57 */
  if (C.zf) goto L_10e5da57;
  /* 10e5da1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e5da21 push eax */
  push32((uint32_t)(EAX));
  /* 10e5da22 call 0x10e5e4f0 */
  push32(0x10e5da27u); f_10e5e4f0();
  /* 10e5da27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5da2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10e5da2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10e5da32 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5da33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10e5da39 push edx */
  push32((uint32_t)(EDX));
  /* 10e5da3a call 0x10e5f5d0 */
  push32(0x10e5da3fu); f_10e5f5d0();
  /* 10e5da3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5da42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e5da45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5da49 jge 0x10e5da55 */
  if ((C.sf==C.of)) goto L_10e5da55;
  /* 10e5da4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10e5da55:;
  /* 10e5da55 jmp 0x10e5da7d */
  goto L_10e5da7d;
L_10e5da57:;
  /* 10e5da57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e5da5a push eax */
  push32((uint32_t)(EAX));
  /* 10e5da5b call 0x10e5e4b0 */
  push32(0x10e5da60u); f_10e5e4b0();
  /* 10e5da60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5da63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10e5da6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10e5da70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10e5da76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10e5da7d:;
  /* 10e5da7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10e5da83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e5da86 jmp 0x10e5e0a7 */
  goto L_10e5e0a7;
L_10e5da8b:;
  /* 10e5da8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e5da8e push eax */
  push32((uint32_t)(EAX));
  /* 10e5da8f call 0x10e5e4b0 */
  push32(0x10e5da94u); f_10e5e4b0();
  /* 10e5da94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5da97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10e5da9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5daa4 je 0x10e5dab2 */
  if (C.zf) goto L_10e5dab2;
  /* 10e5daa6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e5daac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dab0 jne 0x10e5dacc */
  if (!C.zf) goto L_10e5dacc;
L_10e5dab2:;
  /* 10e5dab2 mov edx, dword ptr [0x10e80fc0] */
  EDX = (r32((uint32_t)(0x10e80fc0)));
  /* 10e5dab8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e5dabb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dabe push eax */
  push32((uint32_t)(EAX));
  /* 10e5dabf call 0x10e59510 */
  push32(0x10e5dac4u); f_10e59510();
  /* 10e5dac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dac7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e5daca jmp 0x10e5db1b */
  goto L_10e5db1b;
L_10e5dacc:;
  /* 10e5dacc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dacf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5dad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5dad7 je 0x10e5dafc */
  if (C.zf) goto L_10e5dafc;
  /* 10e5dad9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e5dadf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e5dae2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5dae5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e5daeb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10e5daee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e5daf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e5daf3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e5dafa jmp 0x10e5db1b */
  goto L_10e5db1b;
L_10e5dafc:;
  /* 10e5dafc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10e5db03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e5db09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5db0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e5db0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10e5db15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10e5db18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e5db1b:;
  /* 10e5db1b jmp 0x10e5e0a7 */
  goto L_10e5e0a7;
L_10e5db20:;
  /* 10e5db20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5db23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5db29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5db2b jne 0x10e5db36 */
  if (!C.zf) goto L_10e5db36;
  /* 10e5db2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5db30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e5db33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5db36:;
  /* 10e5db36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5db3d jne 0x10e5db4b */
  if (!C.zf) goto L_10e5db4b;
  /* 10e5db3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10e5db49 jmp 0x10e5db57 */
  goto L_10e5db57;
L_10e5db4b:;
  /* 10e5db4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e5db51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10e5db57:;
  /* 10e5db57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10e5db5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10e5db63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e5db66 push edx */
  push32((uint32_t)(EDX));
  /* 10e5db67 call 0x10e5e4b0 */
  push32(0x10e5db6cu); f_10e5e4b0();
  /* 10e5db6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5db6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5db72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5db75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5db7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5db7c je 0x10e5dbe6 */
  if (C.zf) goto L_10e5dbe6;
  /* 10e5db7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5db82 jne 0x10e5db8d */
  if (!C.zf) goto L_10e5db8d;
  /* 10e5db84 mov ecx, dword ptr [0x10e80fc4] */
  ECX = (r32((uint32_t)(0x10e80fc4)));
  /* 10e5db8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e5db8d:;
  /* 10e5db8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10e5db94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5db97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10e5db9d:;
  /* 10e5db9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e5dba3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e5dba9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5dbac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10e5dbb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5dbb4 je 0x10e5dbd6 */
  if (C.zf) goto L_10e5dbd6;
  /* 10e5dbb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e5dbbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5dbbe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10e5dbc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5dbc3 je 0x10e5dbd6 */
  if (C.zf) goto L_10e5dbd6;
  /* 10e5dbc5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e5dbcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dbce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10e5dbd4 jmp 0x10e5db9d */
  goto L_10e5db9d;
L_10e5dbd6:;
  /* 10e5dbd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10e5dbdc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5dbdf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e5dbe1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10e5dbe4 jmp 0x10e5dc40 */
  goto L_10e5dc40;
L_10e5dbe6:;
  /* 10e5dbe6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dbea jne 0x10e5dbf4 */
  if (!C.zf) goto L_10e5dbf4;
  /* 10e5dbec mov eax, dword ptr [0x10e80fc0] */
  EAX = (r32((uint32_t)(0x10e80fc0)));
  /* 10e5dbf1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10e5dbf4:;
  /* 10e5dbf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dbf7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10e5dbfd:;
  /* 10e5dbfd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e5dc03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10e5dc09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5dc0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10e5dc12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5dc14 je 0x10e5dc34 */
  if (C.zf) goto L_10e5dc34;
  /* 10e5dc16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e5dc1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e5dc1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5dc21 je 0x10e5dc34 */
  if (C.zf) goto L_10e5dc34;
  /* 10e5dc23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e5dc29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dc2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10e5dc32 jmp 0x10e5dbfd */
  goto L_10e5dbfd;
L_10e5dc34:;
  /* 10e5dc34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10e5dc3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5dc3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10e5dc40:;
  /* 10e5dc40 jmp 0x10e5e0a7 */
  goto L_10e5e0a7;
L_10e5dc45:;
  /* 10e5dc45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e5dc48 push edx */
  push32((uint32_t)(EDX));
  /* 10e5dc49 call 0x10e5e4b0 */
  push32(0x10e5dc4eu); f_10e5e4b0();
  /* 10e5dc4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dc51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10e5dc57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dc5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5dc5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5dc5f je 0x10e5dc73 */
  if (C.zf) goto L_10e5dc73;
  /* 10e5dc61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10e5dc67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10e5dc6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10e5dc71 jmp 0x10e5dc81 */
  goto L_10e5dc81;
L_10e5dc73:;
  /* 10e5dc73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10e5dc79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10e5dc7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10e5dc81:;
  /* 10e5dc81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10e5dc8b jmp 0x10e5e0a7 */
  goto L_10e5e0a7;
L_10e5dc90:;
  /* 10e5dc90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e5dc97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10e5dc9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e5dc9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10e5dca0:;
  /* 10e5dca0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dca3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10e5dca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5dca8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10e5dcae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e5dcb1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dcb8 jge 0x10e5dcc6 */
  if ((C.sf==C.of)) goto L_10e5dcc6;
  /* 10e5dcba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10e5dcc4 jmp 0x10e5dce2 */
  goto L_10e5dce2;
L_10e5dcc6:;
  /* 10e5dcc6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dccd jne 0x10e5dce2 */
  if (!C.zf) goto L_10e5dce2;
  /* 10e5dccf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5dcd3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dcd6 jne 0x10e5dce2 */
  if (!C.zf) goto L_10e5dce2;
  /* 10e5dcd8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10e5dce2:;
  /* 10e5dce2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5dce5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dce8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10e5dceb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5dcee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5dcf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5dcf3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5dcf6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10e5dcfc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10e5dd02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5dd05 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5dd06 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e5dd0c push edx */
  push32((uint32_t)(EDX));
  /* 10e5dd0d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5dd11 push eax */
  push32((uint32_t)(EAX));
  /* 10e5dd12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dd15 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5dd16 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10e5dd1c push edx */
  push32((uint32_t)(EDX));
  /* 10e5dd1d call dword ptr [0x10e813b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e813b0))), 0x10e5dd23u);
  /* 10e5dd23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dd26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dd29 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5dd2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5dd30 je 0x10e5dd48 */
  if (C.zf) goto L_10e5dd48;
  /* 10e5dd32 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dd39 jne 0x10e5dd48 */
  if (!C.zf) goto L_10e5dd48;
  /* 10e5dd3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dd3e push ecx */
  push32((uint32_t)(ECX));
  /* 10e5dd3f call dword ptr [0x10e813bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e813bc))), 0x10e5dd45u);
  /* 10e5dd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5dd48:;
  /* 10e5dd48 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10e5dd4c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dd4f jne 0x10e5dd6a */
  if (!C.zf) goto L_10e5dd6a;
  /* 10e5dd51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dd54 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5dd59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5dd5b jne 0x10e5dd6a */
  if (!C.zf) goto L_10e5dd6a;
  /* 10e5dd5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dd60 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5dd61 call dword ptr [0x10e813b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e813b4))), 0x10e5dd67u);
  /* 10e5dd67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5dd6a:;
  /* 10e5dd6a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dd6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e5dd70 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5dd73 jne 0x10e5dd87 */
  if (!C.zf) goto L_10e5dd87;
  /* 10e5dd75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dd78 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e5dd7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5dd7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dd81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dd84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e5dd87:;
  /* 10e5dd87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5dd8a push eax */
  push32((uint32_t)(EAX));
  /* 10e5dd8b call 0x10e59510 */
  push32(0x10e5dd90u); f_10e59510();
  /* 10e5dd90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dd93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e5dd96 jmp 0x10e5e0a7 */
  goto L_10e5e0a7;
L_10e5dd9b:;
  /* 10e5dd9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5dd9e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5dda1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5dda4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10e5ddae jmp 0x10e5de35 */
  goto L_10e5de35;
L_10e5ddb3:;
  /* 10e5ddb3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10e5ddbd jmp 0x10e5de35 */
  goto L_10e5de35;
L_10e5ddbf:;
  /* 10e5ddbf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10e5ddc9:;
  /* 10e5ddc9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10e5ddd3 jmp 0x10e5dddf */
  goto L_10e5dddf;
L_10e5ddd5:;
  /* 10e5ddd5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10e5dddf:;
  /* 10e5dddf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10e5dde9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ddec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ddf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ddf4 je 0x10e5de13 */
  if (C.zf) goto L_10e5de13;
  /* 10e5ddf6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10e5ddfd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10e5de03 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5de06 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10e5de0c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10e5de13:;
  /* 10e5de13 jmp 0x10e5de35 */
  goto L_10e5de35;
L_10e5de15:;
  /* 10e5de15 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10e5de1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5de22 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5de28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5de2a je 0x10e5de35 */
  if (C.zf) goto L_10e5de35;
  /* 10e5de2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5de2f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e5de32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5de35:;
  /* 10e5de35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5de38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5de3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5de3f je 0x10e5de5e */
  if (C.zf) goto L_10e5de5e;
  /* 10e5de41 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e5de44 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5de45 call 0x10e5e4d0 */
  push32(0x10e5de4au); f_10e5e4d0();
  /* 10e5de4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5de4d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e5de53 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e5de59 jmp 0x10e5deef */
  goto L_10e5deef;
L_10e5de5e:;
  /* 10e5de5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5de61 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5de64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5de66 je 0x10e5deb0 */
  if (C.zf) goto L_10e5deb0;
  /* 10e5de68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5de6b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5de6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5de70 je 0x10e5de90 */
  if (C.zf) goto L_10e5de90;
  /* 10e5de72 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e5de75 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5de76 call 0x10e5e4b0 */
  push32(0x10e5de7bu); f_10e5e4b0();
  /* 10e5de7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5de7e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10e5de81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e5de82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e5de88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e5de8e jmp 0x10e5deae */
  goto L_10e5deae;
L_10e5de90:;
  /* 10e5de90 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e5de93 push edx */
  push32((uint32_t)(EDX));
  /* 10e5de94 call 0x10e5e4b0 */
  push32(0x10e5de99u); f_10e5e4b0();
  /* 10e5de99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5de9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5dea1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e5dea2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e5dea8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10e5deae:;
  /* 10e5deae jmp 0x10e5deef */
  goto L_10e5deef;
L_10e5deb0:;
  /* 10e5deb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5deb3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5deb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5deb8 je 0x10e5ded5 */
  if (C.zf) goto L_10e5ded5;
  /* 10e5deba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10e5debd push ecx */
  push32((uint32_t)(ECX));
  /* 10e5debe call 0x10e5e4b0 */
  push32(0x10e5dec3u); f_10e5e4b0();
  /* 10e5dec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dec6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e5dec7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e5decd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10e5ded3 jmp 0x10e5deef */
  goto L_10e5deef;
L_10e5ded5:;
  /* 10e5ded5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10e5ded8 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ded9 call 0x10e5e4b0 */
  push32(0x10e5dedeu); f_10e5e4b0();
  /* 10e5dede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e5dee3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10e5dee9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10e5deef:;
  /* 10e5deef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5def2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5def5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5def7 je 0x10e5df37 */
  if (C.zf) goto L_10e5df37;
  /* 10e5def9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5df00 jg 0x10e5df37 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e5df37;
  /* 10e5df02 jl 0x10e5df0d */
  if ((C.sf!=C.of)) goto L_10e5df0d;
  /* 10e5df04 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5df0b jae 0x10e5df37 */
  if (!C.cf) goto L_10e5df37;
L_10e5df0d:;
  /* 10e5df0d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10e5df13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5df15 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10e5df1b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5df1e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5df20 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e5df26 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10e5df2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5df2f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e5df32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5df35 jmp 0x10e5df4f */
  goto L_10e5df4f;
L_10e5df37:;
  /* 10e5df37 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10e5df3d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e5df43 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10e5df49 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10e5df4f:;
  /* 10e5df4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5df52 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5df58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5df5a jne 0x10e5df77 */
  if (!C.zf) goto L_10e5df77;
  /* 10e5df5c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e5df62 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e5df68 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5df6b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e5df71 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10e5df77:;
  /* 10e5df77 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5df7e jge 0x10e5df8c */
  if ((C.sf==C.of)) goto L_10e5df8c;
  /* 10e5df80 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10e5df8a jmp 0x10e5df95 */
  goto L_10e5df95;
L_10e5df8c:;
  /* 10e5df8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5df8f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5df92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5df95:;
  /* 10e5df95 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e5df9b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10e5dfa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5dfa3 jne 0x10e5dfac */
  if (!C.zf) goto L_10e5dfac;
  /* 10e5dfa5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e5dfac:;
  /* 10e5dfac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10e5dfaf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e5dfb2:;
  /* 10e5dfb2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e5dfb8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10e5dfbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5dfc1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10e5dfc7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5dfc9 jg 0x10e5dfdf */
  if ((!C.zf&&C.sf==C.of)) goto L_10e5dfdf;
  /* 10e5dfcb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e5dfd1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10e5dfd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5dfd9 je 0x10e5e060 */
  if (C.zf) goto L_10e5e060;
L_10e5dfdf:;
  /* 10e5dfdf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10e5dfe5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e5dfe6 push edx */
  push32((uint32_t)(EDX));
  /* 10e5dfe7 push eax */
  push32((uint32_t)(EAX));
  /* 10e5dfe8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e5dfee push edx */
  push32((uint32_t)(EDX));
  /* 10e5dfef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e5dff5 push eax */
  push32((uint32_t)(EAX));
  /* 10e5dff6 call 0x10e5d370 */
  push32(0x10e5dffbu); f_10e5d370();
  /* 10e5dffb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5dffe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10e5e004 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10e5e00a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e5e00b push edx */
  push32((uint32_t)(EDX));
  /* 10e5e00c push eax */
  push32((uint32_t)(EAX));
  /* 10e5e00d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10e5e013 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e014 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10e5e01a push edx */
  push32((uint32_t)(EDX));
  /* 10e5e01b call 0x10e5d300 */
  push32(0x10e5e020u); f_10e5d300();
  /* 10e5e020 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10e5e026 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10e5e02c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e033 jle 0x10e5e047 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5e047;
  /* 10e5e035 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10e5e03b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e041 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10e5e047:;
  /* 10e5e047 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e04a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10e5e050 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10e5e052 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e055 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e058 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5e05b jmp 0x10e5dfb2 */
  goto L_10e5dfb2;
L_10e5e060:;
  /* 10e5e060 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10e5e063 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e066 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e5e069 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e06c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e06f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e5e072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e075 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5e07a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e07c je 0x10e5e0a7 */
  if (C.zf) goto L_10e5e0a7;
  /* 10e5e07e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e081 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e5e084 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e087 jne 0x10e5e08f */
  if (!C.zf) goto L_10e5e08f;
  /* 10e5e089 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e08d jne 0x10e5e0a7 */
  if (!C.zf) goto L_10e5e0a7;
L_10e5e08f:;
  /* 10e5e08f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e092 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e095 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5e098 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e09b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10e5e09e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5e0a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e0a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10e5e0a7:;
  /* 10e5e0a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e0ae jne 0x10e5e282 */
  if (!C.zf) goto L_10e5e282;
  /* 10e5e0b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e0b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5e0ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e0bc je 0x10e5e10d */
  if (C.zf) goto L_10e5e10d;
  /* 10e5e0be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e0c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5e0c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5e0c9 je 0x10e5e0db */
  if (C.zf) goto L_10e5e0db;
  /* 10e5e0cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10e5e0d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e5e0d9 jmp 0x10e5e10d */
  goto L_10e5e10d;
L_10e5e0db:;
  /* 10e5e0db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e0de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e0e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5e0e3 je 0x10e5e0f5 */
  if (C.zf) goto L_10e5e0f5;
  /* 10e5e0e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10e5e0ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e5e0f3 jmp 0x10e5e10d */
  goto L_10e5e10d;
L_10e5e0f5:;
  /* 10e5e0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e0f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5e0fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e0fd je 0x10e5e10d */
  if (C.zf) goto L_10e5e10d;
  /* 10e5e0ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10e5e106 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10e5e10d:;
  /* 10e5e10d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10e5e113 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e116 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e119 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10e5e11f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e122 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e125 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5e127 jne 0x10e5e145 */
  if (!C.zf) goto L_10e5e145;
  /* 10e5e129 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e5e12f push eax */
  push32((uint32_t)(EAX));
  /* 10e5e130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e133 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e134 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e5e13a push edx */
  push32((uint32_t)(EDX));
  /* 10e5e13b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e5e13d call 0x10e5e420 */
  push32(0x10e5e142u); f_10e5e420();
  /* 10e5e142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5e145:;
  /* 10e5e145 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e5e14b push eax */
  push32((uint32_t)(EAX));
  /* 10e5e14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e14f push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e150 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5e153 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e154 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10e5e15a push eax */
  push32((uint32_t)(EAX));
  /* 10e5e15b call 0x10e5e460 */
  push32(0x10e5e160u); f_10e5e460();
  /* 10e5e160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e166 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5e169 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5e16b je 0x10e5e193 */
  if (C.zf) goto L_10e5e193;
  /* 10e5e16d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e170 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e173 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5e175 jne 0x10e5e193 */
  if (!C.zf) goto L_10e5e193;
  /* 10e5e177 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e5e17d push eax */
  push32((uint32_t)(EAX));
  /* 10e5e17e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e181 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e182 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e5e188 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e189 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e5e18b call 0x10e5e420 */
  push32(0x10e5e190u); f_10e5e420();
  /* 10e5e190 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5e193:;
  /* 10e5e193 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e197 je 0x10e5e241 */
  if (C.zf) goto L_10e5e241;
  /* 10e5e19d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e1a1 jle 0x10e5e241 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5e241;
  /* 10e5e1a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e1aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10e5e1b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5e1b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10e5e1b9:;
  /* 10e5e1b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10e5e1bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10e5e1c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e1c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10e5e1ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5e1d0 je 0x10e5e23f */
  if (C.zf) goto L_10e5e23f;
  /* 10e5e1d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10e5e1d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e5e1db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10e5e1e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10e5e1e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e1ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10e5e1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e1f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10e5e1f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e1fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10e5e200 call 0x10e5f5d0 */
  push32(0x10e5e205u); f_10e5f5d0();
  /* 10e5e205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e208 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10e5e20e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e215 jg 0x10e5e219 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e5e219;
  /* 10e5e217 jmp 0x10e5e23f */
  goto L_10e5e23f;
L_10e5e219:;
  /* 10e5e219 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e5e21f push eax */
  push32((uint32_t)(EAX));
  /* 10e5e220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e223 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e224 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10e5e22a push edx */
  push32((uint32_t)(EDX));
  /* 10e5e22b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10e5e231 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e232 call 0x10e5e460 */
  push32(0x10e5e237u); f_10e5e460();
  /* 10e5e237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e23a jmp 0x10e5e1b9 */
  goto L_10e5e1b9;
L_10e5e23f:;
  /* 10e5e23f jmp 0x10e5e25c */
  goto L_10e5e25c;
L_10e5e241:;
  /* 10e5e241 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10e5e247 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e24b push edx */
  push32((uint32_t)(EDX));
  /* 10e5e24c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5e24f push eax */
  push32((uint32_t)(EAX));
  /* 10e5e250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5e253 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e254 call 0x10e5e460 */
  push32(0x10e5e259u); f_10e5e460();
  /* 10e5e259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5e25c:;
  /* 10e5e25c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e25f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5e264 je 0x10e5e282 */
  if (C.zf) goto L_10e5e282;
  /* 10e5e266 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10e5e26c push eax */
  push32((uint32_t)(EAX));
  /* 10e5e26d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e270 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e271 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10e5e277 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e278 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e5e27a call 0x10e5e420 */
  push32(0x10e5e27fu); f_10e5e420();
  /* 10e5e27f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5e282:;
  /* 10e5e282 jmp 0x10e5d694 */
  goto L_10e5d694;
L_10e5e287:;
  /* 10e5e287 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10e5e28d pop edi */
  EDI = (pop32());
  /* 10e5e28e pop esi */
  ESI = (pop32());
  /* 10e5e28f pop ebx */
  EBX = (pop32());
  /* 10e5e290 mov esp, ebp */
  ESP = (EBP);
  /* 10e5e292 pop ebp */
  EBP = (pop32());
  /* 10e5e293 ret  */
  ESPCHK(0x10e5d670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x10e5e3a0 (119 bytes, 44 insns) */
void f_10e5e3a0(void) {
  FTRACE(0x10e5e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e3a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e5e3aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e3ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10e5e3b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e3ba jl 0x10e5e3e2 */
  if ((C.sf!=C.of)) goto L_10e5e3e2;
  /* 10e5e3bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e5e3c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e5e3c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e5e3c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10e5e3ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5e3d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5e3d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5e3d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e3db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e5e3e0 jmp 0x10e5e3f5 */
  goto L_10e5e3f5;
L_10e5e3e2:;
  /* 10e5e3e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e3e5 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e3e9 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e3ea call 0x10e5d3f0 */
  push32(0x10e5e3efu); f_10e5d3f0();
  /* 10e5e3ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e3f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5e3f5:;
  /* 10e5e3f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e3f9 jne 0x10e5e406 */
  if (!C.zf) goto L_10e5e406;
  /* 10e5e3fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e3fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e5e404 jmp 0x10e5e413 */
  goto L_10e5e413;
L_10e5e406:;
  /* 10e5e406 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e409 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e5e40b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e40e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e411 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e5e413:;
  /* 10e5e413 mov esp, ebp */
  ESP = (EBP);
  /* 10e5e415 pop ebp */
  EBP = (pop32());
  /* 10e5e416 ret  */
  ESPCHK(0x10e5e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x10e5e420 (53 bytes, 23 insns) */
void f_10e5e420(void) {
  FTRACE(0x10e5e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e420 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e421 mov ebp, esp */
  EBP = (ESP);
L_10e5e423:;
  /* 10e5e423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e426 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e429 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e42c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e5e42f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e431 jle 0x10e5e453 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5e453;
  /* 10e5e433 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5e436 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e437 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e43a push eax */
  push32((uint32_t)(EAX));
  /* 10e5e43b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e43e push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e43f call 0x10e5e3a0 */
  push32(0x10e5e444u); f_10e5e3a0();
  /* 10e5e444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e447 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5e44a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e44d jne 0x10e5e451 */
  if (!C.zf) goto L_10e5e451;
  /* 10e5e44f jmp 0x10e5e453 */
  goto L_10e5e453;
L_10e5e451:;
  /* 10e5e451 jmp 0x10e5e423 */
  goto L_10e5e423;
L_10e5e453:;
  /* 10e5e453 pop ebp */
  EBP = (pop32());
  /* 10e5e454 ret  */
  ESPCHK(0x10e5e420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e460 @ 0x10e5e460 (74 bytes, 31 insns) */
void f_10e5e460(void) {
  FTRACE(0x10e5e460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e460 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e461 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e463 push ecx */
  push32((uint32_t)(ECX));
L_10e5e464:;
  /* 10e5e464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e467 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e46a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e46d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e5e470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e472 jle 0x10e5e4a6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e5e4a6;
  /* 10e5e474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5e477 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e478 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e47b push eax */
  push32((uint32_t)(EAX));
  /* 10e5e47c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e47f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e5e482 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5e485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e488 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e48c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e48f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e5e492 call 0x10e5e3a0 */
  push32(0x10e5e497u); f_10e5e3a0();
  /* 10e5e497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e49a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5e49d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e4a0 jne 0x10e5e4a4 */
  if (!C.zf) goto L_10e5e4a4;
  /* 10e5e4a2 jmp 0x10e5e4a6 */
  goto L_10e5e4a6;
L_10e5e4a4:;
  /* 10e5e4a4 jmp 0x10e5e464 */
  goto L_10e5e464;
L_10e5e4a6:;
  /* 10e5e4a6 mov esp, ebp */
  ESP = (EBP);
  /* 10e5e4a8 pop ebp */
  EBP = (pop32());
  /* 10e5e4a9 ret  */
  ESPCHK(0x10e5e460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x10e5e4b0 (26 bytes, 12 insns) */
void f_10e5e4b0(void) {
  FTRACE(0x10e5e4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5e4b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e4bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e5e4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5e4c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e5e4c8 pop ebp */
  EBP = (pop32());
  /* 10e5e4c9 ret  */
  ESPCHK(0x10e5e4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d0 @ 0x10e5e4d0 (31 bytes, 14 insns) */
void f_10e5e4d0(void) {
  FTRACE(0x10e5e4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e4d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5e4d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e4db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e5e4e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5e4e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e4e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e5e4ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e5e4ed pop ebp */
  EBP = (pop32());
  /* 10e5e4ee ret  */
  ESPCHK(0x10e5e4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4f0 @ 0x10e5e4f0 (27 bytes, 12 insns) */
void f_10e5e4f0(void) {
  FTRACE(0x10e5e4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5e4f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e4fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e4fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e5e500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e503 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e5e505 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10e5e509 pop ebp */
  EBP = (pop32());
  /* 10e5e50a ret  */
  ESPCHK(0x10e5e4f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10e5e510 (145 bytes, 42 insns) */
void f_10e5e510(void) {
  FTRACE(0x10e5e510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e510 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e511 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e513 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e514 call 0x10e5e5c0 */
  push32(0x10e5e519u); f_10e5e5c0();
  /* 10e5e519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e51c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e5e51e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5e525 jmp 0x10e5e530 */
  goto L_10e5e530;
L_10e5e527:;
  /* 10e5e527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e52a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e52d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5e530:;
  /* 10e5e530 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e534 jae 0x10e5e55a */
  if (!C.cf) goto L_10e5e55a;
  /* 10e5e536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e53c cmp ecx, dword ptr [eax*8 + 0x10e80fc8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10e80fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e543 jne 0x10e5e558 */
  if (!C.zf) goto L_10e5e558;
  /* 10e5e545 call 0x10e5e5b0 */
  push32(0x10e5e54au); f_10e5e5b0();
  /* 10e5e54a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5e54d mov ecx, dword ptr [edx*8 + 0x10e80fcc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10e80fcc)));
  /* 10e5e554 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e5e556 jmp 0x10e5e59d */
  goto L_10e5e59d;
L_10e5e558:;
  /* 10e5e558 jmp 0x10e5e527 */
  goto L_10e5e527;
L_10e5e55a:;
  /* 10e5e55a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e55e jb 0x10e5e573 */
  if (C.cf) goto L_10e5e573;
  /* 10e5e560 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e564 ja 0x10e5e573 */
  if ((!C.cf&&!C.zf)) goto L_10e5e573;
  /* 10e5e566 call 0x10e5e5b0 */
  push32(0x10e5e56bu); f_10e5e5b0();
  /* 10e5e56b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10e5e571 jmp 0x10e5e59d */
  goto L_10e5e59d;
L_10e5e573:;
  /* 10e5e573 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e57a jb 0x10e5e592 */
  if (C.cf) goto L_10e5e592;
  /* 10e5e57c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e583 ja 0x10e5e592 */
  if ((!C.cf&&!C.zf)) goto L_10e5e592;
  /* 10e5e585 call 0x10e5e5b0 */
  push32(0x10e5e58au); f_10e5e5b0();
  /* 10e5e58a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10e5e590 jmp 0x10e5e59d */
  goto L_10e5e59d;
L_10e5e592:;
  /* 10e5e592 call 0x10e5e5b0 */
  push32(0x10e5e597u); f_10e5e5b0();
  /* 10e5e597 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10e5e59d:;
  /* 10e5e59d mov esp, ebp */
  ESP = (EBP);
  /* 10e5e59f pop ebp */
  EBP = (pop32());
  /* 10e5e5a0 ret  */
  ESPCHK(0x10e5e510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x10e5e5b0 (13 bytes, 6 insns) */
void f_10e5e5b0(void) {
  FTRACE(0x10e5e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e5b3 call 0x10e56120 */
  push32(0x10e5e5b8u); f_10e56120();
  /* 10e5e5b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e5bb pop ebp */
  EBP = (pop32());
  /* 10e5e5bc ret  */
  ESPCHK(0x10e5e5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x10e5e5c0 (13 bytes, 6 insns) */
void f_10e5e5c0(void) {
  FTRACE(0x10e5e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e5c3 call 0x10e56120 */
  push32(0x10e5e5c8u); f_10e56120();
  /* 10e5e5c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e5cb pop ebp */
  EBP = (pop32());
  /* 10e5e5cc ret  */
  ESPCHK(0x10e5e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5d0 @ 0x10e5e5d0 (664 bytes, 263 insns) [15 switch table(s)] */
void f_10e5e5d0(void) {
  FTRACE(0x10e5e5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e5d3 push edi */
  push32((uint32_t)(EDI));
  /* 10e5e5d4 push esi */
  push32((uint32_t)(ESI));
  /* 10e5e5d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e5d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e5db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e5de mov eax, ecx */
  EAX = (ECX);
  /* 10e5e5e0 mov edx, ecx */
  EDX = (ECX);
  /* 10e5e5e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e5e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e5e6 jbe 0x10e5e5f0 */
  if ((C.cf||C.zf)) goto L_10e5e5f0;
  /* 10e5e5e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e5ea jb 0x10e5e768 */
  if (C.cf) goto L_10e5e768;
L_10e5e5f0:;
  /* 10e5e5f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e5e5f6 jne 0x10e5e60c */
  if (!C.zf) goto L_10e5e60c;
  /* 10e5e5f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e5fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e5fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e601 jb 0x10e5e62c */
  if (C.cf) goto L_10e5e62c;
  /* 10e5e603 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e605 jmp dword ptr [edx*4 + 0x10e5e718] */
  switch (EDX) {
    case 0: goto L_10e5e728;
    case 1: goto L_10e5e730;
    case 2: goto L_10e5e73c;
    case 3: goto L_10e5e750;
    default: x86_unimpl("switch@0x10e5e605 out of table"); return;
  }
L_10e5e60c:;
  /* 10e5e60c mov eax, edi */
  EAX = (EDI);
  /* 10e5e60e mov edx, 3 */
  EDX = (0x3u);
  /* 10e5e613 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e616 jb 0x10e5e624 */
  if (C.cf) goto L_10e5e624;
  /* 10e5e618 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5e61b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e61d jmp dword ptr [eax*4 + 0x10e5e630] */
  switch (EAX) {
    case 1: goto L_10e5e640;
    case 2: goto L_10e5e66c;
    case 3: goto L_10e5e690;
    default: x86_unimpl("switch@0x10e5e61d out of table"); return;
  }
L_10e5e624:;
  /* 10e5e624 jmp dword ptr [ecx*4 + 0x10e5e728] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10e5e728)))); return;
  /* 10e5e62b nop  */
  /* nop */
L_10e5e62c:;
  /* 10e5e62c jmp dword ptr [ecx*4 + 0x10e5e6ac] */
  switch (ECX) {
    case 0: goto L_10e5e70f;
    case 1: goto L_10e5e6fc;
    case 2: goto L_10e5e6f4;
    case 3: goto L_10e5e6ec;
    case 4: goto L_10e5e6e4;
    case 5: goto L_10e5e6dc;
    case 6: goto L_10e5e6d4;
    case 7: goto L_10e5e6cc;
    default: x86_unimpl("switch@0x10e5e62c out of table"); return;
  }
  /* 10e5e633 nop  */
  /* nop */
L_10e5e640:;
  /* 10e5e640 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e642 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5e644 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5e646 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5e649 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5e64c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5e64f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e652 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5e655 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e658 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e65b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e65e jb 0x10e5e62c */
  if (C.cf) goto L_10e5e62c;
  /* 10e5e660 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e662 jmp dword ptr [edx*4 + 0x10e5e718] */
  switch (EDX) {
    case 0: goto L_10e5e728;
    case 1: goto L_10e5e730;
    case 2: goto L_10e5e73c;
    case 3: goto L_10e5e750;
    default: x86_unimpl("switch@0x10e5e662 out of table"); return;
  }
  /* 10e5e669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5e66c:;
  /* 10e5e66c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e66e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5e670 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5e672 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5e675 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e678 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5e67b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e67e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e681 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e684 jb 0x10e5e62c */
  if (C.cf) goto L_10e5e62c;
  /* 10e5e686 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e688 jmp dword ptr [edx*4 + 0x10e5e718] */
  switch (EDX) {
    case 0: goto L_10e5e728;
    case 1: goto L_10e5e730;
    case 2: goto L_10e5e73c;
    case 3: goto L_10e5e750;
    default: x86_unimpl("switch@0x10e5e688 out of table"); return;
  }
  /* 10e5e68f nop  */
  /* nop */
L_10e5e690:;
  /* 10e5e690 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e692 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5e694 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5e696 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e5e697 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e69a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e5e69b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e69e jb 0x10e5e62c */
  if (C.cf) goto L_10e5e62c;
  /* 10e5e6a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e6a2 jmp dword ptr [edx*4 + 0x10e5e718] */
  switch (EDX) {
    case 0: goto L_10e5e728;
    case 1: goto L_10e5e730;
    case 2: goto L_10e5e73c;
    case 3: goto L_10e5e750;
    default: x86_unimpl("switch@0x10e5e6a2 out of table"); return;
  }
  /* 10e5e6a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5e6cc:;
  /* 10e5e6cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10e5e6d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10e5e6d4:;
  /* 10e5e6d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10e5e6d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10e5e6dc:;
  /* 10e5e6dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10e5e6e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10e5e6e4:;
  /* 10e5e6e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10e5e6e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10e5e6ec:;
  /* 10e5e6ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10e5e6f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10e5e6f4:;
  /* 10e5e6f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10e5e6f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10e5e6fc:;
  /* 10e5e6fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10e5e700 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10e5e704 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e5e70b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e70d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e5e70f:;
  /* 10e5e70f jmp dword ptr [edx*4 + 0x10e5e718] */
  switch (EDX) {
    case 0: goto L_10e5e728;
    case 1: goto L_10e5e730;
    case 2: goto L_10e5e73c;
    case 3: goto L_10e5e750;
    default: x86_unimpl("switch@0x10e5e70f out of table"); return;
  }
  /* 10e5e716 mov edi, edi */
  EDI = (EDI);
L_10e5e728:;
  /* 10e5e728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e72b pop esi */
  ESI = (pop32());
  /* 10e5e72c pop edi */
  EDI = (pop32());
  /* 10e5e72d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e72e ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e72f nop  */
  /* nop */
L_10e5e730:;
  /* 10e5e730 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5e732 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5e734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e737 pop esi */
  ESI = (pop32());
  /* 10e5e738 pop edi */
  EDI = (pop32());
  /* 10e5e739 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e73a ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e73b nop  */
  /* nop */
L_10e5e73c:;
  /* 10e5e73c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5e73e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5e740 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5e743 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5e746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e749 pop esi */
  ESI = (pop32());
  /* 10e5e74a pop edi */
  EDI = (pop32());
  /* 10e5e74b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e74c ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e74d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5e750:;
  /* 10e5e750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e5e752 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e5e754 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5e757 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5e75a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5e75d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5e760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e763 pop esi */
  ESI = (pop32());
  /* 10e5e764 pop edi */
  EDI = (pop32());
  /* 10e5e765 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e766 ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e767 nop  */
  /* nop */
L_10e5e768:;
  /* 10e5e768 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10e5e76c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10e5e770 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e5e776 jne 0x10e5e79c */
  if (!C.zf) goto L_10e5e79c;
  /* 10e5e778 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e77b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e77e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e781 jb 0x10e5e790 */
  if (C.cf) goto L_10e5e790;
  /* 10e5e783 std  */
  C.df=1;
  /* 10e5e784 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e786 cld  */
  C.df=0;
  /* 10e5e787 jmp dword ptr [edx*4 + 0x10e5e8b0] */
  switch (EDX) {
    case 0: goto L_10e5e8c0;
    case 1: goto L_10e5e8c8;
    case 2: goto L_10e5e8d8;
    case 3: goto L_10e5e8ec;
    default: x86_unimpl("switch@0x10e5e787 out of table"); return;
  }
  /* 10e5e78e mov edi, edi */
  EDI = (EDI);
L_10e5e790:;
  /* 10e5e790 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5e792 jmp dword ptr [ecx*4 + 0x10e5e860] */
  switch (ECX) {
    case 0: goto L_10e5e8a7;
    default: x86_unimpl("switch@0x10e5e792 out of table"); return;
  }
  /* 10e5e799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5e79c:;
  /* 10e5e79c mov eax, edi */
  EAX = (EDI);
  /* 10e5e79e mov edx, 3 */
  EDX = (0x3u);
  /* 10e5e7a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e7a6 jb 0x10e5e7b4 */
  if (C.cf) goto L_10e5e7b4;
  /* 10e5e7a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5e7ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e7ad jmp dword ptr [eax*4 + 0x10e5e7b8] */
  switch (EAX) {
    case 1: goto L_10e5e7c8;
    case 2: goto L_10e5e7e8;
    case 3: goto L_10e5e810;
    default: x86_unimpl("switch@0x10e5e7ad out of table"); return;
  }
L_10e5e7b4:;
  /* 10e5e7b4 jmp dword ptr [ecx*4 + 0x10e5e8b0] */
  switch (ECX) {
    case 0: goto L_10e5e8c0;
    case 1: goto L_10e5e8c8;
    case 2: goto L_10e5e8d8;
    case 3: goto L_10e5e8ec;
    default: x86_unimpl("switch@0x10e5e7b4 out of table"); return;
  }
  /* 10e5e7bb nop  */
  /* nop */
L_10e5e7c8:;
  /* 10e5e7c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5e7cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e7cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5e7d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10e5e7d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e7d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10e5e7d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e7d8 jb 0x10e5e790 */
  if (C.cf) goto L_10e5e790;
  /* 10e5e7da std  */
  C.df=1;
  /* 10e5e7db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e7dd cld  */
  C.df=0;
  /* 10e5e7de jmp dword ptr [edx*4 + 0x10e5e8b0] */
  switch (EDX) {
    case 0: goto L_10e5e8c0;
    case 1: goto L_10e5e8c8;
    case 2: goto L_10e5e8d8;
    case 3: goto L_10e5e8ec;
    default: x86_unimpl("switch@0x10e5e7de out of table"); return;
  }
  /* 10e5e7e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5e7e8:;
  /* 10e5e7e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5e7eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e7ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5e7f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5e7f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e7f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5e7f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e7fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e7ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e802 jb 0x10e5e790 */
  if (C.cf) goto L_10e5e790;
  /* 10e5e804 std  */
  C.df=1;
  /* 10e5e805 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e807 cld  */
  C.df=0;
  /* 10e5e808 jmp dword ptr [edx*4 + 0x10e5e8b0] */
  switch (EDX) {
    case 0: goto L_10e5e8c0;
    case 1: goto L_10e5e8c8;
    case 2: goto L_10e5e8d8;
    case 3: goto L_10e5e8ec;
    default: x86_unimpl("switch@0x10e5e808 out of table"); return;
  }
  /* 10e5e80f nop  */
  /* nop */
L_10e5e810:;
  /* 10e5e810 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5e813 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e815 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5e818 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5e81b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5e81e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5e821 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e5e824 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5e827 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e82a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e82d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e830 jb 0x10e5e790 */
  if (C.cf) goto L_10e5e790;
L_10e5e836:;
  /* 10e5e836 std  */
  C.df=1;
  /* 10e5e837 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10e5e839 cld  */
  C.df=0;
L_10e5e83a:;
  /* 10e5e83a jmp dword ptr [edx*4 + 0x10e5e8b0] */
  switch (EDX) {
    case 0: goto L_10e5e8c0;
    case 1: goto L_10e5e8c8;
    case 2: goto L_10e5e8d8;
    case 3: goto L_10e5e8ec;
    default: x86_unimpl("switch@0x10e5e83a out of table"); return;
  }
  /* 10e5e841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10e5e844 call 0xf951f92f */
  call_ind(0xf951f92fu, 0x10e5e84au);
  /* 10e5e84a in eax, 0x10 */
  x86_unimpl("in @ 0x10e5e84a");
  /* 10e5e84c je 0x10e5e836 */
  if (C.zf) goto L_10e5e836;
  /* 10e5e84e in eax, 0x10 */
  x86_unimpl("in @ 0x10e5e84e");
  /* 10e5e850 jl 0x10e5e83a */
  if ((C.sf!=C.of)) goto L_10e5e83a;
  /* 10e5e852 in eax, 0x10 */
  x86_unimpl("in @ 0x10e5e852");
  /* 10e5e854 test al, ch */
  { uint32_t _r=(AL)&(C.c.b.h); fl_logic(_r,8); }
  /* 10e5e856 in eax, 0x10 */
  x86_unimpl("in @ 0x10e5e856");
  /* 10e5e858 mov eax, gs */
  EAX = (C.seg_gs);
  /* 10e5e85a in eax, 0x10 */
  x86_unimpl("in @ 0x10e5e85a");
  /* 10e5e85c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10e5e85e in eax, 0x10 */
  x86_unimpl("in @ 0x10e5e85e");
  /* 10e5e864 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10e5e868 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10e5e86c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10e5e870 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10e5e874 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10e5e878 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10e5e87c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10e5e880 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10e5e884 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10e5e888 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10e5e88c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10e5e890 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10e5e894 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10e5e898 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10e5e89c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10e5e8a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e8a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e5e8a7:;
  /* 10e5e8a7 jmp dword ptr [edx*4 + 0x10e5e8b0] */
  switch (EDX) {
    case 0: goto L_10e5e8c0;
    case 1: goto L_10e5e8c8;
    case 2: goto L_10e5e8d8;
    case 3: goto L_10e5e8ec;
    default: x86_unimpl("switch@0x10e5e8a7 out of table"); return;
  }
  /* 10e5e8ae mov edi, edi */
  EDI = (EDI);
L_10e5e8c0:;
  /* 10e5e8c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e8c3 pop esi */
  ESI = (pop32());
  /* 10e5e8c4 pop edi */
  EDI = (pop32());
  /* 10e5e8c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e8c6 ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e8c7 nop  */
  /* nop */
L_10e5e8c8:;
  /* 10e5e8c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5e8cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5e8ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e8d1 pop esi */
  ESI = (pop32());
  /* 10e5e8d2 pop edi */
  EDI = (pop32());
  /* 10e5e8d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e8d4 ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e8d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e5e8d8:;
  /* 10e5e8d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5e8db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5e8de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5e8e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5e8e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e8e7 pop esi */
  ESI = (pop32());
  /* 10e5e8e8 pop edi */
  EDI = (pop32());
  /* 10e5e8e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e8ea ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
  /* 10e5e8eb nop  */
  /* nop */
L_10e5e8ec:;
  /* 10e5e8ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10e5e8ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10e5e8f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10e5e8f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10e5e8f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10e5e8fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10e5e8fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e901 pop esi */
  ESI = (pop32());
  /* 10e5e902 pop edi */
  EDI = (pop32());
  /* 10e5e903 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e5e904 ret  */
  ESPCHK(0x10e5e5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x10e5e910 (421 bytes, 148 insns) */
void f_10e5e910(void) {
  FTRACE(0x10e5e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5e910 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5e911 mov ebp, esp */
  EBP = (ESP);
  /* 10e5e913 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e5e915 push 0x10e7e2f0 */
  push32((uint32_t)(0x10e7e2f0u));
  /* 10e5e91a push 0x10e5f7e8 */
  push32((uint32_t)(0x10e5f7e8u));
  /* 10e5e91f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e5e925 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e926 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e5e92d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e930 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5e931 push esi */
  push32((uint32_t)(ESI));
  /* 10e5e932 push edi */
  push32((uint32_t)(EDI));
  /* 10e5e933 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e5e936 cmp dword ptr [0x10e829a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e93d jne 0x10e5e98e */
  if (!C.zf) goto L_10e5e98e;
  /* 10e5e93f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10e5e942 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5e945 push 0x10e7e2ec */
  push32((uint32_t)(0x10e7e2ecu));
  /* 10e5e94a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5e94c call dword ptr [0x10e85340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85340))), 0x10e5e952u);
  /* 10e5e952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e954 je 0x10e5e962 */
  if (C.zf) goto L_10e5e962;
  /* 10e5e956 mov dword ptr [0x10e829a4], 1 */
  w32((uint32_t)(0x10e829a4), (0x1u));
  /* 10e5e960 jmp 0x10e5e98e */
  goto L_10e5e98e;
L_10e5e962:;
  /* 10e5e962 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10e5e965 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e966 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5e968 push 0x10e7e2e8 */
  push32((uint32_t)(0x10e7e2e8u));
  /* 10e5e96d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5e96f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5e971 call dword ptr [0x10e85344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85344))), 0x10e5e977u);
  /* 10e5e977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5e979 je 0x10e5e987 */
  if (C.zf) goto L_10e5e987;
  /* 10e5e97b mov dword ptr [0x10e829a4], 2 */
  w32((uint32_t)(0x10e829a4), (0x2u));
  /* 10e5e985 jmp 0x10e5e98e */
  goto L_10e5e98e;
L_10e5e987:;
  /* 10e5e987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5e989 jmp 0x10e5eab8 */
  goto L_10e5eab8;
L_10e5e98e:;
  /* 10e5e98e cmp dword ptr [0x10e829a4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e829a4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e995 jne 0x10e5e9c5 */
  if (!C.zf) goto L_10e5e9c5;
  /* 10e5e997 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e99b jne 0x10e5e9a6 */
  if (!C.zf) goto L_10e5e9a6;
  /* 10e5e99d mov edx, dword ptr [0x10e829b0] */
  EDX = (r32((uint32_t)(0x10e829b0)));
  /* 10e5e9a3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10e5e9a6:;
  /* 10e5e9a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5e9a9 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e9aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e9ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e9ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e9b1 push edx */
  push32((uint32_t)(EDX));
  /* 10e5e9b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5e9b5 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e9b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e5e9b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e9ba call dword ptr [0x10e85344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85344))), 0x10e5e9c0u);
  /* 10e5e9c0 jmp 0x10e5eab8 */
  goto L_10e5eab8;
L_10e5e9c5:;
  /* 10e5e9c5 cmp dword ptr [0x10e829a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e829a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e9cc jne 0x10e5eab6 */
  if (!C.zf) goto L_10e5eab6;
  /* 10e5e9d2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5e9d6 jne 0x10e5e9e1 */
  if (!C.zf) goto L_10e5e9e1;
  /* 10e5e9d8 mov edx, dword ptr [0x10e829c0] */
  EDX = (r32((uint32_t)(0x10e829c0)));
  /* 10e5e9de mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10e5e9e1:;
  /* 10e5e9e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5e9e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5e9e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5e9e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e5e9e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5e9ec push ecx */
  push32((uint32_t)(ECX));
  /* 10e5e9ed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e5e9f0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5e9f2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5e9f4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5e9f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5e9fa push edx */
  push32((uint32_t)(EDX));
  /* 10e5e9fb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5e9fe push eax */
  push32((uint32_t)(EAX));
  /* 10e5e9ff call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e5ea05u);
  /* 10e5ea05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e5ea08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ea0c jne 0x10e5ea15 */
  if (!C.zf) goto L_10e5ea15;
  /* 10e5ea0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ea10 jmp 0x10e5eab8 */
  goto L_10e5eab8;
L_10e5ea15:;
  /* 10e5ea15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5ea1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ea1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e5ea21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ea24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e5ea26 call 0x10e59880 */
  push32(0x10e5ea2bu); f_10e59880();
  /* 10e5ea2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10e5ea2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e5ea31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ea34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e5ea37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ea3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10e5ea3c push edx */
  push32((uint32_t)(EDX));
  /* 10e5ea3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ea3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ea42 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ea43 call 0x10e5a450 */
  push32(0x10e5ea48u); f_10e5a450();
  /* 10e5ea48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ea4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e5ea52 jmp 0x10e5ea6b */
  goto L_10e5ea6b;
  /* 10e5ea54 mov eax, 1 */
  EAX = (0x1u);
  /* 10e5ea59 ret  */
  ESPCHK(0x10e5e910u, _esp0);
  ESP += 4; return;
  /* 10e5ea5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5ea5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e5ea64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e5ea6b:;
  /* 10e5ea6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ea6f jne 0x10e5ea75 */
  if (!C.zf) goto L_10e5ea75;
  /* 10e5ea71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ea73 jmp 0x10e5eab8 */
  goto L_10e5eab8;
L_10e5ea75:;
  /* 10e5ea75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ea78 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ea79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ea7c push edx */
  push32((uint32_t)(EDX));
  /* 10e5ea7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5ea80 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ea81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ea84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ea85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5ea87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5ea8a push edx */
  push32((uint32_t)(EDX));
  /* 10e5ea8b call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e5ea91u);
  /* 10e5ea91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5ea94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ea98 jne 0x10e5ea9e */
  if (!C.zf) goto L_10e5ea9e;
  /* 10e5ea9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ea9c jmp 0x10e5eab8 */
  goto L_10e5eab8;
L_10e5ea9e:;
  /* 10e5ea9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5eaa1 push eax */
  push32((uint32_t)(EAX));
  /* 10e5eaa2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5eaa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5eaa6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5eaa9 push edx */
  push32((uint32_t)(EDX));
  /* 10e5eaaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5eaad push eax */
  push32((uint32_t)(EAX));
  /* 10e5eaae call dword ptr [0x10e85340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85340))), 0x10e5eab4u);
  /* 10e5eab4 jmp 0x10e5eab8 */
  goto L_10e5eab8;
L_10e5eab6:;
  /* 10e5eab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5eab8:;
  /* 10e5eab8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10e5eabb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5eabe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e5eac5 pop edi */
  EDI = (pop32());
  /* 10e5eac6 pop esi */
  ESI = (pop32());
  /* 10e5eac7 pop ebx */
  EBX = (pop32());
  /* 10e5eac8 mov esp, ebp */
  ESP = (EBP);
  /* 10e5eaca pop ebp */
  EBP = (pop32());
  /* 10e5eacb ret  */
  ESPCHK(0x10e5e910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ead0 @ 0x10e5ead0 (727 bytes, 263 insns) */
void f_10e5ead0(void) {
  FTRACE(0x10e5ead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5ead0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5ead1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5ead3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e5ead5 push 0x10e7e300 */
  push32((uint32_t)(0x10e7e300u));
  /* 10e5eada push 0x10e5f7e8 */
  push32((uint32_t)(0x10e5f7e8u));
  /* 10e5eadf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e5eae5 push eax */
  push32((uint32_t)(EAX));
  /* 10e5eae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e5eaed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5eaf0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5eaf1 push esi */
  push32((uint32_t)(ESI));
  /* 10e5eaf2 push edi */
  push32((uint32_t)(EDI));
  /* 10e5eaf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e5eaf6 cmp dword ptr [0x10e829c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5eafd jne 0x10e5eb56 */
  if (!C.zf) goto L_10e5eb56;
  /* 10e5eaff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eb01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eb03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5eb05 push 0x10e7e2ec */
  push32((uint32_t)(0x10e7e2ecu));
  /* 10e5eb0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5eb0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eb11 call dword ptr [0x10e85338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85338))), 0x10e5eb17u);
  /* 10e5eb17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5eb19 je 0x10e5eb27 */
  if (C.zf) goto L_10e5eb27;
  /* 10e5eb1b mov dword ptr [0x10e829c8], 1 */
  w32((uint32_t)(0x10e829c8), (0x1u));
  /* 10e5eb25 jmp 0x10e5eb56 */
  goto L_10e5eb56;
L_10e5eb27:;
  /* 10e5eb27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eb29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eb2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5eb2d push 0x10e7e2e8 */
  push32((uint32_t)(0x10e7e2e8u));
  /* 10e5eb32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e5eb37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eb39 call dword ptr [0x10e8533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8533c))), 0x10e5eb3fu);
  /* 10e5eb3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5eb41 je 0x10e5eb4f */
  if (C.zf) goto L_10e5eb4f;
  /* 10e5eb43 mov dword ptr [0x10e829c8], 2 */
  w32((uint32_t)(0x10e829c8), (0x2u));
  /* 10e5eb4d jmp 0x10e5eb56 */
  goto L_10e5eb56;
L_10e5eb4f:;
  /* 10e5eb4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5eb51 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5eb56:;
  /* 10e5eb56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5eb5a jle 0x10e5eb6f */
  if ((C.zf||C.sf!=C.of)) goto L_10e5eb6f;
  /* 10e5eb5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5eb5f push eax */
  push32((uint32_t)(EAX));
  /* 10e5eb60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5eb63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5eb64 call 0x10e5ede0 */
  push32(0x10e5eb69u); f_10e5ede0();
  /* 10e5eb69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5eb6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10e5eb6f:;
  /* 10e5eb6f cmp dword ptr [0x10e829c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e829c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5eb76 jne 0x10e5eb9b */
  if (!C.zf) goto L_10e5eb9b;
  /* 10e5eb78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e5eb7b push edx */
  push32((uint32_t)(EDX));
  /* 10e5eb7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5eb7f push eax */
  push32((uint32_t)(EAX));
  /* 10e5eb80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5eb83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5eb84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5eb87 push edx */
  push32((uint32_t)(EDX));
  /* 10e5eb88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5eb8b push eax */
  push32((uint32_t)(EAX));
  /* 10e5eb8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5eb8f push ecx */
  push32((uint32_t)(ECX));
  /* 10e5eb90 call dword ptr [0x10e8533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8533c))), 0x10e5eb96u);
  /* 10e5eb96 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5eb9b:;
  /* 10e5eb9b cmp dword ptr [0x10e829c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e829c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5eba2 jne 0x10e5edbf */
  if (!C.zf) goto L_10e5edbf;
  /* 10e5eba8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ebac jne 0x10e5ebb7 */
  if (!C.zf) goto L_10e5ebb7;
  /* 10e5ebae mov edx, dword ptr [0x10e829c0] */
  EDX = (r32((uint32_t)(0x10e829c0)));
  /* 10e5ebb4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10e5ebb7:;
  /* 10e5ebb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ebb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ebbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5ebbe push eax */
  push32((uint32_t)(EAX));
  /* 10e5ebbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5ebc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ebc3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e5ebc6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5ebc8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ebca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ebcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ebd0 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ebd1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e5ebd4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ebd5 call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e5ebdbu);
  /* 10e5ebdb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e5ebde cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ebe2 jne 0x10e5ebeb */
  if (!C.zf) goto L_10e5ebeb;
  /* 10e5ebe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ebe6 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ebeb:;
  /* 10e5ebeb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5ebf2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ebf5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e5ebf7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ebfa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e5ebfc call 0x10e59880 */
  push32(0x10e5ec01u); f_10e59880();
  /* 10e5ec01 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10e5ec04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e5ec07 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e5ec0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e5ec0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e5ec14 jmp 0x10e5ec2d */
  goto L_10e5ec2d;
  /* 10e5ec16 mov eax, 1 */
  EAX = (0x1u);
  /* 10e5ec1b ret  */
  ESPCHK(0x10e5ead0u, _esp0);
  ESP += 4; return;
  /* 10e5ec1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5ec1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e5ec26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e5ec2d:;
  /* 10e5ec2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ec31 jne 0x10e5ec3a */
  if (!C.zf) goto L_10e5ec3a;
  /* 10e5ec33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ec35 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ec3a:;
  /* 10e5ec3a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ec3d push edx */
  push32((uint32_t)(EDX));
  /* 10e5ec3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ec41 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ec42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e5ec45 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ec46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5ec49 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ec4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5ec4c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e5ec4f push eax */
  push32((uint32_t)(EAX));
  /* 10e5ec50 call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e5ec56u);
  /* 10e5ec56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5ec58 jne 0x10e5ec61 */
  if (!C.zf) goto L_10e5ec61;
  /* 10e5ec5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ec5c jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ec61:;
  /* 10e5ec61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ec63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ec65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ec68 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ec69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ec6c push edx */
  push32((uint32_t)(EDX));
  /* 10e5ec6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ec70 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ec71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ec74 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ec75 call dword ptr [0x10e85338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85338))), 0x10e5ec7bu);
  /* 10e5ec7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5ec7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ec82 jne 0x10e5ec8b */
  if (!C.zf) goto L_10e5ec8b;
  /* 10e5ec84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ec86 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ec8b:;
  /* 10e5ec8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ec8e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ec94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ec96 je 0x10e5ecdb */
  if (C.zf) goto L_10e5ecdb;
  /* 10e5ec98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ec9c je 0x10e5ecd6 */
  if (C.zf) goto L_10e5ecd6;
  /* 10e5ec9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5eca1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5eca4 jle 0x10e5ecad */
  if ((C.zf||C.sf!=C.of)) goto L_10e5ecad;
  /* 10e5eca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5eca8 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ecad:;
  /* 10e5ecad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e5ecb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ecb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5ecb4 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ecb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ecb8 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ecb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ecbc push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ecbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ecc0 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ecc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ecc4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ecc5 call dword ptr [0x10e85338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85338))), 0x10e5eccbu);
  /* 10e5eccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5eccd jne 0x10e5ecd6 */
  if (!C.zf) goto L_10e5ecd6;
  /* 10e5eccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ecd1 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ecd6:;
  /* 10e5ecd6 jmp 0x10e5edba */
  goto L_10e5edba;
L_10e5ecdb:;
  /* 10e5ecdb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5ecde mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e5ece1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e5ece8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5eceb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e5eced add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ecf0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e5ecf2 call 0x10e59880 */
  push32(0x10e5ecf7u); f_10e59880();
  /* 10e5ecf7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10e5ecfa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e5ecfd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e5ed00 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e5ed03 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e5ed0a jmp 0x10e5ed23 */
  goto L_10e5ed23;
  /* 10e5ed0c mov eax, 1 */
  EAX = (0x1u);
  /* 10e5ed11 ret  */
  ESPCHK(0x10e5ead0u, _esp0);
  ESP += 4; return;
  /* 10e5ed12 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e5ed15 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e5ed1c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e5ed23:;
  /* 10e5ed23 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ed27 jne 0x10e5ed30 */
  if (!C.zf) goto L_10e5ed30;
  /* 10e5ed29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ed2b jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ed30:;
  /* 10e5ed30 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ed33 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ed34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ed37 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ed38 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e5ed3b push edx */
  push32((uint32_t)(EDX));
  /* 10e5ed3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e5ed3f push eax */
  push32((uint32_t)(EAX));
  /* 10e5ed40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ed43 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ed44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ed47 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ed48 call dword ptr [0x10e85338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85338))), 0x10e5ed4eu);
  /* 10e5ed4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5ed50 jne 0x10e5ed56 */
  if (!C.zf) goto L_10e5ed56;
  /* 10e5ed52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ed54 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ed56:;
  /* 10e5ed56 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ed5a jne 0x10e5ed8a */
  if (!C.zf) goto L_10e5ed8a;
  /* 10e5ed5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ed5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ed60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ed62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ed64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ed67 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ed68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ed6b push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ed6c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e5ed71 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e5ed74 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ed75 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e5ed7bu);
  /* 10e5ed7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5ed7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ed82 jne 0x10e5ed88 */
  if (!C.zf) goto L_10e5ed88;
  /* 10e5ed84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ed86 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5ed88:;
  /* 10e5ed88 jmp 0x10e5edba */
  goto L_10e5edba;
L_10e5ed8a:;
  /* 10e5ed8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ed8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ed8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e5ed91 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ed92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e5ed95 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ed96 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e5ed99 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ed9a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e5ed9d push eax */
  push32((uint32_t)(EAX));
  /* 10e5ed9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e5eda3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e5eda6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5eda7 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e5edadu);
  /* 10e5edad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e5edb0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5edb4 jne 0x10e5edba */
  if (!C.zf) goto L_10e5edba;
  /* 10e5edb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5edb8 jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5edba:;
  /* 10e5edba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e5edbd jmp 0x10e5edc1 */
  goto L_10e5edc1;
L_10e5edbf:;
  /* 10e5edbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5edc1:;
  /* 10e5edc1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10e5edc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5edc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e5edce pop edi */
  EDI = (pop32());
  /* 10e5edcf pop esi */
  ESI = (pop32());
  /* 10e5edd0 pop ebx */
  EBX = (pop32());
  /* 10e5edd1 mov esp, ebp */
  ESP = (EBP);
  /* 10e5edd3 pop ebp */
  EBP = (pop32());
  /* 10e5edd4 ret  */
  ESPCHK(0x10e5ead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ede0 @ 0x10e5ede0 (80 bytes, 32 insns) */
void f_10e5ede0(void) {
  FTRACE(0x10e5ede0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5ede0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5ede1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5ede3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ede6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ede9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5edec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5edef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5edf2:;
  /* 10e5edf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5edf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5edf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5edfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5edfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ee00 je 0x10e5ee17 */
  if (C.zf) goto L_10e5ee17;
  /* 10e5ee02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ee05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e5ee08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ee0a je 0x10e5ee17 */
  if (C.zf) goto L_10e5ee17;
  /* 10e5ee0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ee0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ee12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5ee15 jmp 0x10e5edf2 */
  goto L_10e5edf2;
L_10e5ee17:;
  /* 10e5ee17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ee1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e5ee1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ee1f jne 0x10e5ee29 */
  if (!C.zf) goto L_10e5ee29;
  /* 10e5ee21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ee24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5ee27 jmp 0x10e5ee2c */
  goto L_10e5ee2c;
L_10e5ee29:;
  /* 10e5ee29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10e5ee2c:;
  /* 10e5ee2c mov esp, ebp */
  ESP = (EBP);
  /* 10e5ee2e pop ebp */
  EBP = (pop32());
  /* 10e5ee2f ret  */
  ESPCHK(0x10e5ede0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x10e5ee30 (130 bytes, 43 insns) */
void f_10e5ee30(void) {
  FTRACE(0x10e5ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5ee31 mov ebp, esp */
  EBP = (ESP);
  /* 10e5ee33 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ee34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ee37 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ee3d jae 0x10e5ee61 */
  if (!C.cf) goto L_10e5ee61;
  /* 10e5ee3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ee42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5ee45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ee48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ee4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5ee4e mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5ee55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e5ee5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ee5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5ee5f jne 0x10e5ee7c */
  if (!C.zf) goto L_10e5ee7c;
L_10e5ee61:;
  /* 10e5ee61 call 0x10e5e5b0 */
  push32(0x10e5ee66u); f_10e5e5b0();
  /* 10e5ee66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5ee6c call 0x10e5e5c0 */
  push32(0x10e5ee71u); f_10e5e5c0();
  /* 10e5ee71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5ee77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ee7a jmp 0x10e5eeae */
  goto L_10e5eeae;
L_10e5ee7c:;
  /* 10e5ee7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ee7f push edx */
  push32((uint32_t)(EDX));
  /* 10e5ee80 call 0x10e5fdd0 */
  push32(0x10e5ee85u); f_10e5fdd0();
  /* 10e5ee85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ee88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5ee8b push eax */
  push32((uint32_t)(EAX));
  /* 10e5ee8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5ee8f push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ee90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ee93 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ee94 call 0x10e5eec0 */
  push32(0x10e5ee99u); f_10e5eec0();
  /* 10e5ee99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ee9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5ee9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5eea2 push eax */
  push32((uint32_t)(EAX));
  /* 10e5eea3 call 0x10e5fe60 */
  push32(0x10e5eea8u); f_10e5fe60();
  /* 10e5eea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5eeab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5eeae:;
  /* 10e5eeae mov esp, ebp */
  ESP = (EBP);
  /* 10e5eeb0 pop ebp */
  EBP = (pop32());
  /* 10e5eeb1 ret  */
  ESPCHK(0x10e5ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eec0 @ 0x10e5eec0 (178 bytes, 56 insns) */
void f_10e5eec0(void) {
  FTRACE(0x10e5eec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5eec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5eec1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5eec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5eec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5eec9 push eax */
  push32((uint32_t)(EAX));
  /* 10e5eeca call 0x10e5fc50 */
  push32(0x10e5eecfu); f_10e5fc50();
  /* 10e5eecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5eed2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e5eed5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5eed9 jne 0x10e5eeee */
  if (!C.zf) goto L_10e5eeee;
  /* 10e5eedb call 0x10e5e5b0 */
  push32(0x10e5eee0u); f_10e5e5b0();
  /* 10e5eee0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5eee6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5eee9 jmp 0x10e5ef6e */
  goto L_10e5ef6e;
L_10e5eeee:;
  /* 10e5eeee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5eef1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5eef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5eef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5eef7 push edx */
  push32((uint32_t)(EDX));
  /* 10e5eef8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5eefb push eax */
  push32((uint32_t)(EAX));
  /* 10e5eefc call dword ptr [0x10e85334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85334))), 0x10e5ef02u);
  /* 10e5ef02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5ef05 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ef09 jne 0x10e5ef16 */
  if (!C.zf) goto L_10e5ef16;
  /* 10e5ef0b call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e5ef11u);
  /* 10e5ef11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5ef14 jmp 0x10e5ef1d */
  goto L_10e5ef1d;
L_10e5ef16:;
  /* 10e5ef16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e5ef1d:;
  /* 10e5ef1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ef21 je 0x10e5ef34 */
  if (C.zf) goto L_10e5ef34;
  /* 10e5ef23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ef26 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ef27 call 0x10e5e510 */
  push32(0x10e5ef2cu); f_10e5e510();
  /* 10e5ef2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ef2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ef32 jmp 0x10e5ef6e */
  goto L_10e5ef6e;
L_10e5ef34:;
  /* 10e5ef34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef37 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e5ef3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef3d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ef40 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5ef43 mov ecx, dword ptr [edx*4 + 0x10e84180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5ef4a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10e5ef4e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10e5ef51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5ef57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5ef5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5ef60 mov eax, dword ptr [eax*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5ef67 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10e5ef6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e5ef6e:;
  /* 10e5ef6e mov esp, ebp */
  ESP = (EBP);
  /* 10e5ef70 pop ebp */
  EBP = (pop32());
  /* 10e5ef71 ret  */
  ESPCHK(0x10e5eec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x10e5ef80 (130 bytes, 43 insns) */
void f_10e5ef80(void) {
  FTRACE(0x10e5ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5ef81 mov ebp, esp */
  EBP = (ESP);
  /* 10e5ef83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ef84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef87 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ef8d jae 0x10e5efb1 */
  if (!C.cf) goto L_10e5efb1;
  /* 10e5ef8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5ef95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ef98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ef9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5ef9e mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5efa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e5efaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5efad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5efaf jne 0x10e5efcc */
  if (!C.zf) goto L_10e5efcc;
L_10e5efb1:;
  /* 10e5efb1 call 0x10e5e5b0 */
  push32(0x10e5efb6u); f_10e5e5b0();
  /* 10e5efb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5efbc call 0x10e5e5c0 */
  push32(0x10e5efc1u); f_10e5e5c0();
  /* 10e5efc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5efc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5efca jmp 0x10e5effe */
  goto L_10e5effe;
L_10e5efcc:;
  /* 10e5efcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5efcf push edx */
  push32((uint32_t)(EDX));
  /* 10e5efd0 call 0x10e5fdd0 */
  push32(0x10e5efd5u); f_10e5fdd0();
  /* 10e5efd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5efd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5efdb push eax */
  push32((uint32_t)(EAX));
  /* 10e5efdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5efdf push ecx */
  push32((uint32_t)(ECX));
  /* 10e5efe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5efe3 push edx */
  push32((uint32_t)(EDX));
  /* 10e5efe4 call 0x10e5f010 */
  push32(0x10e5efe9u); f_10e5f010();
  /* 10e5efe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5efec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5efef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5eff2 push eax */
  push32((uint32_t)(EAX));
  /* 10e5eff3 call 0x10e5fe60 */
  push32(0x10e5eff8u); f_10e5fe60();
  /* 10e5eff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5effb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5effe:;
  /* 10e5effe mov esp, ebp */
  ESP = (EBP);
  /* 10e5f000 pop ebp */
  EBP = (pop32());
  /* 10e5f001 ret  */
  ESPCHK(0x10e5ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f010 @ 0x10e5f010 (627 bytes, 182 insns) */
void f_10e5f010(void) {
  FTRACE(0x10e5f010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f010 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f011 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f013 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f019 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e5f020 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5f023 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10e5f029 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f02d jne 0x10e5f036 */
  if (!C.zf) goto L_10e5f036;
  /* 10e5f02f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f031 jmp 0x10e5f27f */
  goto L_10e5f27f;
L_10e5f036:;
  /* 10e5f036 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f039 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f03c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f03f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f042 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f045 mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5f04c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e5f051 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5f054 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5f056 je 0x10e5f068 */
  if (C.zf) goto L_10e5f068;
  /* 10e5f058 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5f05a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f05f push edx */
  push32((uint32_t)(EDX));
  /* 10e5f060 call 0x10e5eec0 */
  push32(0x10e5f065u); f_10e5eec0();
  /* 10e5f065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5f068:;
  /* 10e5f068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f06b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5f06e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f071 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5f074 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f077 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5f07e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e5f083 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5f08a je 0x10e5f19c */
  if (C.zf) goto L_10e5f19c;
  /* 10e5f090 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5f093 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5f096 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e5f09d:;
  /* 10e5f09d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f0a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f0a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f0a6 jae 0x10e5f19a */
  if (!C.cf) goto L_10e5f19a;
  /* 10e5f0ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10e5f0b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e5f0b5:;
  /* 10e5f0b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f0b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10e5f0be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f0c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f0c6 jge 0x10e5f127 */
  if ((C.sf==C.of)) goto L_10e5f127;
  /* 10e5f0c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f0cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f0ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f0d1 jae 0x10e5f127 */
  if (!C.cf) goto L_10e5f127;
  /* 10e5f0d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f0d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e5f0d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10e5f0de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f0e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f0e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5f0e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10e5f0ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f0f1 jne 0x10e5f111 */
  if (!C.zf) goto L_10e5f111;
  /* 10e5f0f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10e5f0f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f0fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10e5f102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f105 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10e5f108 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f10b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f10e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e5f111:;
  /* 10e5f111 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f114 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10e5f11a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e5f11c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f11f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f122 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5f125 jmp 0x10e5f0b5 */
  goto L_10e5f0b5;
L_10e5f127:;
  /* 10e5f127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f129 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10e5f12f push edx */
  push32((uint32_t)(EDX));
  /* 10e5f130 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f133 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10e5f139 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f13b push eax */
  push32((uint32_t)(EAX));
  /* 10e5f13c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10e5f142 push edx */
  push32((uint32_t)(EDX));
  /* 10e5f143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f146 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5f149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f14c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5f14f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f152 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5f159 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10e5f15c push eax */
  push32((uint32_t)(EAX));
  /* 10e5f15d call dword ptr [0x10e853d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d4))), 0x10e5f163u);
  /* 10e5f163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5f165 je 0x10e5f18a */
  if (C.zf) goto L_10e5f18a;
  /* 10e5f167 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5f16a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f170 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e5f173 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f176 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10e5f17c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f17e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f184 jge 0x10e5f188 */
  if ((C.sf==C.of)) goto L_10e5f188;
  /* 10e5f186 jmp 0x10e5f19a */
  goto L_10e5f19a;
L_10e5f188:;
  /* 10e5f188 jmp 0x10e5f195 */
  goto L_10e5f195;
L_10e5f18a:;
  /* 10e5f18a call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e5f190u);
  /* 10e5f190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e5f193 jmp 0x10e5f19a */
  goto L_10e5f19a;
L_10e5f195:;
  /* 10e5f195 jmp 0x10e5f09d */
  goto L_10e5f09d;
L_10e5f19a:;
  /* 10e5f19a jmp 0x10e5f1ec */
  goto L_10e5f1ec;
L_10e5f19c:;
  /* 10e5f19c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f19e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10e5f1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f1a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e5f1a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e5f1a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5f1ac push eax */
  push32((uint32_t)(EAX));
  /* 10e5f1ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f1b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f1b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f1b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f1b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f1bc mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5f1c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10e5f1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f1c7 call dword ptr [0x10e853d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d4))), 0x10e5f1cdu);
  /* 10e5f1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5f1cf je 0x10e5f1e3 */
  if (C.zf) goto L_10e5f1e3;
  /* 10e5f1d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5f1d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10e5f1de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e5f1e1 jmp 0x10e5f1ec */
  goto L_10e5f1ec;
L_10e5f1e3:;
  /* 10e5f1e3 call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e5f1e9u);
  /* 10e5f1e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e5f1ec:;
  /* 10e5f1ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f1f0 jne 0x10e5f276 */
  if (!C.zf) goto L_10e5f276;
  /* 10e5f1f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f1fa je 0x10e5f22a */
  if (C.zf) goto L_10e5f22a;
  /* 10e5f1fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f200 jne 0x10e5f219 */
  if (!C.zf) goto L_10e5f219;
  /* 10e5f202 call 0x10e5e5b0 */
  push32(0x10e5f207u); f_10e5e5b0();
  /* 10e5f207 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5f20d call 0x10e5e5c0 */
  push32(0x10e5f212u); f_10e5e5c0();
  /* 10e5f212 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f215 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e5f217 jmp 0x10e5f225 */
  goto L_10e5f225;
L_10e5f219:;
  /* 10e5f219 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f21c push edx */
  push32((uint32_t)(EDX));
  /* 10e5f21d call 0x10e5e510 */
  push32(0x10e5f222u); f_10e5e510();
  /* 10e5f222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5f225:;
  /* 10e5f225 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f228 jmp 0x10e5f27f */
  goto L_10e5f27f;
L_10e5f22a:;
  /* 10e5f22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f22d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5f230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f233 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5f236 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f239 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5f240 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e5f245 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5f24a je 0x10e5f25b */
  if (C.zf) goto L_10e5f25b;
  /* 10e5f24c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5f24f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e5f252 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f255 jne 0x10e5f25b */
  if (!C.zf) goto L_10e5f25b;
  /* 10e5f257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f259 jmp 0x10e5f27f */
  goto L_10e5f27f;
L_10e5f25b:;
  /* 10e5f25b call 0x10e5e5b0 */
  push32(0x10e5f260u); f_10e5e5b0();
  /* 10e5f260 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10e5f266 call 0x10e5e5c0 */
  push32(0x10e5f26bu); f_10e5e5c0();
  /* 10e5f26b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5f271 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f274 jmp 0x10e5f27f */
  goto L_10e5f27f;
L_10e5f276:;
  /* 10e5f276 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e5f279 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e5f27f:;
  /* 10e5f27f mov esp, ebp */
  ESP = (EBP);
  /* 10e5f281 pop ebp */
  EBP = (pop32());
  /* 10e5f282 ret  */
  ESPCHK(0x10e5f010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f290 @ 0x10e5f290 (199 bytes, 68 insns) */
void f_10e5f290(void) {
  FTRACE(0x10e5f290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f290 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f291 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f293 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f294 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5f295 push esi */
  push32((uint32_t)(ESI));
  /* 10e5f296 push edi */
  push32((uint32_t)(EDI));
L_10e5f297:;
  /* 10e5f297 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f29b jne 0x10e5f2bb */
  if (!C.zf) goto L_10e5f2bb;
  /* 10e5f29d push 0x10e7e24c */
  push32((uint32_t)(0x10e7e24cu));
  /* 10e5f2a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f2a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e5f2a6 push 0x10e7e318 */
  push32((uint32_t)(0x10e7e318u));
  /* 10e5f2ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5f2ad call 0x10e557a0 */
  push32(0x10e5f2b2u); f_10e557a0();
  /* 10e5f2b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f2b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f2b8 jne 0x10e5f2bb */
  if (!C.zf) goto L_10e5f2bb;
  /* 10e5f2ba int3  */
  x86_unimpl("int3 @ 0x10e5f2ba");
L_10e5f2bb:;
  /* 10e5f2bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f2bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5f2bf jne 0x10e5f297 */
  if (!C.zf) goto L_10e5f297;
  /* 10e5f2c1 mov ecx, dword ptr [0x10e829cc] */
  ECX = (r32((uint32_t)(0x10e829cc)));
  /* 10e5f2c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f2ca mov dword ptr [0x10e829cc], ecx */
  w32((uint32_t)(0x10e829cc), (ECX));
  /* 10e5f2d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f2d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5f2d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10e5f2d8 push 0x10e7e318 */
  push32((uint32_t)(0x10e7e318u));
  /* 10e5f2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5f2df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e5f2e4 call 0x10e566e0 */
  push32(0x10e5f2e9u); f_10e566e0();
  /* 10e5f2e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f2ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f2ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e5f2f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f2f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f2f9 je 0x10e5f316 */
  if (C.zf) goto L_10e5f316;
  /* 10e5f2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f2fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5f301 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5f304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f307 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e5f30a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f30d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10e5f314 jmp 0x10e5f33b */
  goto L_10e5f33b;
L_10e5f316:;
  /* 10e5f316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f319 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5f31c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f322 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e5f325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f328 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f32b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f32e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10e5f331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f334 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10e5f33b:;
  /* 10e5f33b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f33e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f341 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e5f344 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e5f346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f349 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e5f350 pop edi */
  EDI = (pop32());
  /* 10e5f351 pop esi */
  ESI = (pop32());
  /* 10e5f352 pop ebx */
  EBX = (pop32());
  /* 10e5f353 mov esp, ebp */
  ESP = (EBP);
  /* 10e5f355 pop ebp */
  EBP = (pop32());
  /* 10e5f356 ret  */
  ESPCHK(0x10e5f290u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10e5f360 (50 bytes, 17 insns) */
void f_10e5f360(void) {
  FTRACE(0x10e5f360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f360 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f361 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f366 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f36c jb 0x10e5f372 */
  if (C.cf) goto L_10e5f372;
  /* 10e5f36e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f370 jmp 0x10e5f390 */
  goto L_10e5f390;
L_10e5f372:;
  /* 10e5f372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f375 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f37b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f37e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f381 mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5f388 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e5f38d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10e5f390:;
  /* 10e5f390 pop ebp */
  EBP = (pop32());
  /* 10e5f391 ret  */
  ESPCHK(0x10e5f360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3a0 @ 0x10e5f3a0 (300 bytes, 80 insns) */
void f_10e5f3a0(void) {
  FTRACE(0x10e5f3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f3a4 cmp dword ptr [0x10e83e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e83e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f3ab jne 0x10e5f3b9 */
  if (!C.zf) goto L_10e5f3b9;
  /* 10e5f3ad mov dword ptr [0x10e83e80], 0x200 */
  w32((uint32_t)(0x10e83e80), (0x200u));
  /* 10e5f3b7 jmp 0x10e5f3cc */
  goto L_10e5f3cc;
L_10e5f3b9:;
  /* 10e5f3b9 cmp dword ptr [0x10e83e80], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10e83e80))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f3c0 jge 0x10e5f3cc */
  if ((C.sf==C.of)) goto L_10e5f3cc;
  /* 10e5f3c2 mov dword ptr [0x10e83e80], 0x14 */
  w32((uint32_t)(0x10e83e80), (0x14u));
L_10e5f3cc:;
  /* 10e5f3cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10e5f3d1 push 0x10e7e324 */
  push32((uint32_t)(0x10e7e324u));
  /* 10e5f3d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5f3d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5f3da mov eax, dword ptr [0x10e83e80] */
  EAX = (r32((uint32_t)(0x10e83e80)));
  /* 10e5f3df push eax */
  push32((uint32_t)(EAX));
  /* 10e5f3e0 call 0x10e56af0 */
  push32(0x10e5f3e5u); f_10e56af0();
  /* 10e5f3e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f3e8 mov dword ptr [0x10e82b40], eax */
  w32((uint32_t)(0x10e82b40), (EAX));
  /* 10e5f3ed cmp dword ptr [0x10e82b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f3f4 jne 0x10e5f435 */
  if (!C.zf) goto L_10e5f435;
  /* 10e5f3f6 mov dword ptr [0x10e83e80], 0x14 */
  w32((uint32_t)(0x10e83e80), (0x14u));
  /* 10e5f400 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10e5f405 push 0x10e7e324 */
  push32((uint32_t)(0x10e7e324u));
  /* 10e5f40a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5f40c push 4 */
  push32((uint32_t)(0x4u));
  /* 10e5f40e mov ecx, dword ptr [0x10e83e80] */
  ECX = (r32((uint32_t)(0x10e83e80)));
  /* 10e5f414 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f415 call 0x10e56af0 */
  push32(0x10e5f41au); f_10e56af0();
  /* 10e5f41a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f41d mov dword ptr [0x10e82b40], eax */
  w32((uint32_t)(0x10e82b40), (EAX));
  /* 10e5f422 cmp dword ptr [0x10e82b40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f429 jne 0x10e5f435 */
  if (!C.zf) goto L_10e5f435;
  /* 10e5f42b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10e5f42d call 0x10e55650 */
  push32(0x10e5f432u); f_10e55650();
  /* 10e5f432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5f435:;
  /* 10e5f435 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5f43c jmp 0x10e5f447 */
  goto L_10e5f447;
L_10e5f43e:;
  /* 10e5f43e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f441 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f444 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5f447:;
  /* 10e5f447 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f44b jge 0x10e5f466 */
  if ((C.sf==C.of)) goto L_10e5f466;
  /* 10e5f44d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f450 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5f453 add eax, 0x10e81130 */
  { uint32_t _a=(EAX),_b=(0x10e81130u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f45b mov edx, dword ptr [0x10e82b40] */
  EDX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5f461 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10e5f464 jmp 0x10e5f43e */
  goto L_10e5f43e;
L_10e5f466:;
  /* 10e5f466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5f46d jmp 0x10e5f478 */
  goto L_10e5f478;
L_10e5f46f:;
  /* 10e5f46f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f472 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f475 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5f478:;
  /* 10e5f478 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f47c jge 0x10e5f4c8 */
  if ((C.sf==C.of)) goto L_10e5f4c8;
  /* 10e5f47e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f481 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f487 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f48a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f48d mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5f494 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f498 je 0x10e5f4b6 */
  if (C.zf) goto L_10e5f4b6;
  /* 10e5f49a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f49d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f4a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f4a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f4a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5f4a9 mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5f4b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f4b4 jne 0x10e5f4c6 */
  if (!C.zf) goto L_10e5f4c6;
L_10e5f4b6:;
  /* 10e5f4b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f4b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f4bc mov dword ptr [ecx + 0x10e81140], 0xffffffff */
  w32((uint32_t)(ECX + 0x10e81140), (0xffffffffu));
L_10e5f4c6:;
  /* 10e5f4c6 jmp 0x10e5f46f */
  goto L_10e5f46f;
L_10e5f4c8:;
  /* 10e5f4c8 mov esp, ebp */
  ESP = (EBP);
  /* 10e5f4ca pop ebp */
  EBP = (pop32());
  /* 10e5f4cb ret  */
  ESPCHK(0x10e5f3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4d0 @ 0x10e5f4d0 (26 bytes, 9 insns) */
void f_10e5f4d0(void) {
  FTRACE(0x10e5f4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f4d3 call 0x10e600d0 */
  push32(0x10e5f4d8u); f_10e600d0();
  /* 10e5f4d8 movsx eax, byte ptr [0x10e827e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10e827e8))));
  /* 10e5f4df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5f4e1 je 0x10e5f4e8 */
  if (C.zf) goto L_10e5f4e8;
  /* 10e5f4e3 call 0x10e5fe90 */
  push32(0x10e5f4e8u); f_10e5fe90();
L_10e5f4e8:;
  /* 10e5f4e8 pop ebp */
  EBP = (pop32());
  /* 10e5f4e9 ret  */
  ESPCHK(0x10e5f4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4f0 @ 0x10e5f4f0 (61 bytes, 20 insns) */
void f_10e5f4f0(void) {
  FTRACE(0x10e5f4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f4f3 cmp dword ptr [ebp + 8], 0x10e81130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e81130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f4fa jb 0x10e5f51e */
  if (C.cf) goto L_10e5f51e;
  /* 10e5f4fc cmp dword ptr [ebp + 8], 0x10e81390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e81390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f503 ja 0x10e5f51e */
  if ((!C.cf&&!C.zf)) goto L_10e5f51e;
  /* 10e5f505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f508 sub eax, 0x10e81130 */
  { uint32_t _a=(EAX),_b=(0x10e81130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f50d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5f510 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f513 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f514 call 0x10e5a0e0 */
  push32(0x10e5f519u); f_10e5a0e0();
  /* 10e5f519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f51c jmp 0x10e5f52b */
  goto L_10e5f52b;
L_10e5f51e:;
  /* 10e5f51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f521 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f524 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f525 call dword ptr [0x10e85370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85370))), 0x10e5f52bu);
L_10e5f52b:;
  /* 10e5f52b pop ebp */
  EBP = (pop32());
  /* 10e5f52c ret  */
  ESPCHK(0x10e5f4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f530 @ 0x10e5f530 (41 bytes, 16 insns) */
void f_10e5f530(void) {
  FTRACE(0x10e5f530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f530 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f531 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f533 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f537 jge 0x10e5f54a */
  if ((C.sf==C.of)) goto L_10e5f54a;
  /* 10e5f539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f53c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f53f push eax */
  push32((uint32_t)(EAX));
  /* 10e5f540 call 0x10e5a0e0 */
  push32(0x10e5f545u); f_10e5a0e0();
  /* 10e5f545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f548 jmp 0x10e5f557 */
  goto L_10e5f557;
L_10e5f54a:;
  /* 10e5f54a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5f54d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f550 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f551 call dword ptr [0x10e85370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85370))), 0x10e5f557u);
L_10e5f557:;
  /* 10e5f557 pop ebp */
  EBP = (pop32());
  /* 10e5f558 ret  */
  ESPCHK(0x10e5f530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x10e5f560 (61 bytes, 20 insns) */
void f_10e5f560(void) {
  FTRACE(0x10e5f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f560 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f561 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f563 cmp dword ptr [ebp + 8], 0x10e81130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e81130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f56a jb 0x10e5f58e */
  if (C.cf) goto L_10e5f58e;
  /* 10e5f56c cmp dword ptr [ebp + 8], 0x10e81390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10e81390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f573 ja 0x10e5f58e */
  if ((!C.cf&&!C.zf)) goto L_10e5f58e;
  /* 10e5f575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f578 sub eax, 0x10e81130 */
  { uint32_t _a=(EAX),_b=(0x10e81130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f57d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5f580 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f583 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f584 call 0x10e5a180 */
  push32(0x10e5f589u); f_10e5a180();
  /* 10e5f589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f58c jmp 0x10e5f59b */
  goto L_10e5f59b;
L_10e5f58e:;
  /* 10e5f58e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f591 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f594 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f595 call dword ptr [0x10e8536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8536c))), 0x10e5f59bu);
L_10e5f59b:;
  /* 10e5f59b pop ebp */
  EBP = (pop32());
  /* 10e5f59c ret  */
  ESPCHK(0x10e5f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5a0 @ 0x10e5f5a0 (41 bytes, 16 insns) */
void f_10e5f5a0(void) {
  FTRACE(0x10e5f5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f5a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f5a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f5a7 jge 0x10e5f5ba */
  if ((C.sf==C.of)) goto L_10e5f5ba;
  /* 10e5f5a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f5ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f5af push eax */
  push32((uint32_t)(EAX));
  /* 10e5f5b0 call 0x10e5a180 */
  push32(0x10e5f5b5u); f_10e5a180();
  /* 10e5f5b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f5b8 jmp 0x10e5f5c7 */
  goto L_10e5f5c7;
L_10e5f5ba:;
  /* 10e5f5ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5f5bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f5c1 call dword ptr [0x10e8536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8536c))), 0x10e5f5c7u);
L_10e5f5c7:;
  /* 10e5f5c7 pop ebp */
  EBP = (pop32());
  /* 10e5f5c8 ret  */
  ESPCHK(0x10e5f5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5d0 @ 0x10e5f5d0 (119 bytes, 34 insns) */
void f_10e5f5d0(void) {
  FTRACE(0x10e5f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f5d6 push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e5f5db call dword ptr [0x10e852ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852ec))), 0x10e5f5e1u);
  /* 10e5f5e1 cmp dword ptr [0x10e82b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f5e8 je 0x10e5f608 */
  if (C.zf) goto L_10e5f608;
  /* 10e5f5ea push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e5f5ef call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e5f5f5u);
  /* 10e5f5f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e5f5f7 call 0x10e5a0e0 */
  push32(0x10e5f5fcu); f_10e5a0e0();
  /* 10e5f5fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f5ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e5f606 jmp 0x10e5f60f */
  goto L_10e5f60f;
L_10e5f608:;
  /* 10e5f608 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e5f60f:;
  /* 10e5f60f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10e5f613 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f617 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f618 call 0x10e5f650 */
  push32(0x10e5f61du); f_10e5f650();
  /* 10e5f61d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f620 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5f623 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f627 je 0x10e5f635 */
  if (C.zf) goto L_10e5f635;
  /* 10e5f629 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e5f62b call 0x10e5a180 */
  push32(0x10e5f630u); f_10e5a180();
  /* 10e5f630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f633 jmp 0x10e5f640 */
  goto L_10e5f640;
L_10e5f635:;
  /* 10e5f635 push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e5f63a call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e5f640u);
L_10e5f640:;
  /* 10e5f640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5f643 mov esp, ebp */
  ESP = (EBP);
  /* 10e5f645 pop ebp */
  EBP = (pop32());
  /* 10e5f646 ret  */
  ESPCHK(0x10e5f5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x10e5f650 (160 bytes, 50 insns) */
void f_10e5f650(void) {
  FTRACE(0x10e5f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f650 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f651 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f656 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f65a jne 0x10e5f663 */
  if (!C.zf) goto L_10e5f663;
  /* 10e5f65c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f65e jmp 0x10e5f6ec */
  goto L_10e5f6ec;
L_10e5f663:;
  /* 10e5f663 cmp dword ptr [0x10e829b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f66a jne 0x10e5f69a */
  if (!C.zf) goto L_10e5f69a;
  /* 10e5f66c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5f66f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f674 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f679 jle 0x10e5f68b */
  if ((C.zf||C.sf!=C.of)) goto L_10e5f68b;
  /* 10e5f67b call 0x10e5e5b0 */
  push32(0x10e5f680u); f_10e5e5b0();
  /* 10e5f680 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10e5f686 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f689 jmp 0x10e5f6ec */
  goto L_10e5f6ec;
L_10e5f68b:;
  /* 10e5f68b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f68e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10e5f691 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10e5f693 mov eax, 1 */
  EAX = (0x1u);
  /* 10e5f698 jmp 0x10e5f6ec */
  goto L_10e5f6ec;
L_10e5f69a:;
  /* 10e5f69a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e5f6a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e5f6a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f6a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f6a7 mov ecx, dword ptr [0x10e80eb4] */
  ECX = (r32((uint32_t)(0x10e80eb4)));
  /* 10e5f6ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f6ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f6b1 push edx */
  push32((uint32_t)(EDX));
  /* 10e5f6b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e5f6b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10e5f6b7 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f6b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e5f6bd mov ecx, dword ptr [0x10e829c0] */
  ECX = (r32((uint32_t)(0x10e829c0)));
  /* 10e5f6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f6c4 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e5f6cau);
  /* 10e5f6ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5f6cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f6d1 je 0x10e5f6d9 */
  if (C.zf) goto L_10e5f6d9;
  /* 10e5f6d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f6d7 je 0x10e5f6e9 */
  if (C.zf) goto L_10e5f6e9;
L_10e5f6d9:;
  /* 10e5f6d9 call 0x10e5e5b0 */
  push32(0x10e5f6deu); f_10e5e5b0();
  /* 10e5f6de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10e5f6e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5f6e7 jmp 0x10e5f6ec */
  goto L_10e5f6ec;
L_10e5f6e9:;
  /* 10e5f6e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5f6ec:;
  /* 10e5f6ec mov esp, ebp */
  ESP = (EBP);
  /* 10e5f6ee pop ebp */
  EBP = (pop32());
  /* 10e5f6ef ret  */
  ESPCHK(0x10e5f650u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10e5f6f0 (32 bytes, 18 insns) */
void f_10e5f6f0(void) {
  FTRACE(0x10e5f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f6f3 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5f6f4 push esi */
  push32((uint32_t)(ESI));
  /* 10e5f6f5 push edi */
  push32((uint32_t)(EDI));
  /* 10e5f6f6 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f6f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5f6fb push 0x10e5f708 */
  push32((uint32_t)(0x10e5f708u));
  /* 10e5f700 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10e5f703 call 0x10e66e3c */
  push32(0x10e5f708u); f_10e66e3c();
  /* 10e5f708 pop ebp */
  EBP = (pop32());
  /* 10e5f709 pop edi */
  EDI = (pop32());
  /* 10e5f70a pop esi */
  ESI = (pop32());
  /* 10e5f70b pop ebx */
  EBX = (pop32());
  /* 10e5f70c mov esp, ebp */
  ESP = (EBP);
  /* 10e5f70e pop ebp */
  EBP = (pop32());
  /* 10e5f70f ret  */
  ESPCHK(0x10e5f6f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10e5f732 (104 bytes, 33 insns) */
void f_10e5f732(void) {
  FTRACE(0x10e5f732u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f732 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5f733 push esi */
  push32((uint32_t)(ESI));
  /* 10e5f734 push edi */
  push32((uint32_t)(EDI));
  /* 10e5f735 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e5f739 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f73a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10e5f73c push 0x10e5f710 */
  push32((uint32_t)(0x10e5f710u));
  /* 10e5f741 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10e5f748 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10e5f74f:;
  /* 10e5f74f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10e5f753 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5f756 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5f759 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f75c je 0x10e5f78c */
  if (C.zf) goto L_10e5f78c;
  /* 10e5f75e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f762 je 0x10e5f78c */
  if (C.zf) goto L_10e5f78c;
  /* 10e5f764 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10e5f767 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10e5f76a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10e5f76e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10e5f771 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f776 jne 0x10e5f78a */
  if (!C.zf) goto L_10e5f78a;
  /* 10e5f778 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10e5f77d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10e5f781 call 0x10e5f7c6 */
  push32(0x10e5f786u); f_10e5f7c6();
  /* 10e5f786 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10e5f78au);
L_10e5f78a:;
  /* 10e5f78a jmp 0x10e5f74f */
  goto L_10e5f74f;
L_10e5f78c:;
  /* 10e5f78c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10e5f793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f796 pop edi */
  EDI = (pop32());
  /* 10e5f797 pop esi */
  ESI = (pop32());
  /* 10e5f798 pop ebx */
  EBX = (pop32());
  /* 10e5f799 ret  */
  ESPCHK(0x10e5f732u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7c6 @ 0x10e5f7c6 (24 bytes, 10 insns) */
void f_10e5f7c6(void) {
  FTRACE(0x10e5f7c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f7c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e5f7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5f7c8 mov ebx, 0x10e813c8 */
  EBX = (0x10e813c8u);
  /* 10e5f7cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5f7d0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10e5f7d3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10e5f7d6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10e5f7d9 pop ecx */
  ECX = (pop32());
  /* 10e5f7da pop ebx */
  EBX = (pop32());
  /* 10e5f7db ret 4 */
  ESPCHK(0x10e5f7c6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f8a5 @ 0x10e5f8a5 (27 bytes, 11 insns) */
void f_10e5f8a5(void) {
  FTRACE(0x10e5f8a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f8a5 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f8a6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e5f8aa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10e5f8ac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e5f8af push eax */
  push32((uint32_t)(EAX));
  /* 10e5f8b0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e5f8b3 push eax */
  push32((uint32_t)(EAX));
  /* 10e5f8b4 call 0x10e5f732 */
  push32(0x10e5f8b9u); f_10e5f732();
  /* 10e5f8b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f8bc pop ebp */
  EBP = (pop32());
  /* 10e5f8bd ret 4 */
  ESPCHK(0x10e5f8a5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f8c0 @ 0x10e5f8c0 (482 bytes, 138 insns) */
void f_10e5f8c0(void) {
  FTRACE(0x10e5f8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5f8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5f8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5f8c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f8c6 push esi */
  push32((uint32_t)(ESI));
  /* 10e5f8c7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10e5f8ce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10e5f8d0 call 0x10e5a0e0 */
  push32(0x10e5f8d5u); f_10e5a0e0();
  /* 10e5f8d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f8d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5f8df jmp 0x10e5f8ea */
  goto L_10e5f8ea;
L_10e5f8e1:;
  /* 10e5f8e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f8e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f8e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e5f8ea:;
  /* 10e5f8ea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f8ee jge 0x10e5fa90 */
  if ((C.sf==C.of)) goto L_10e5fa90;
  /* 10e5f8f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f8f7 cmp dword ptr [ecx*4 + 0x10e84180], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e84180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f8ff je 0x10e5f9f6 */
  if (C.zf) goto L_10e5f9f6;
  /* 10e5f905 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f908 mov eax, dword ptr [edx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5f90f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5f912 jmp 0x10e5f91d */
  goto L_10e5f91d;
L_10e5f914:;
  /* 10e5f914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f917 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f91a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e5f91d:;
  /* 10e5f91d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f920 mov eax, dword ptr [edx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5f927 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f92c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f92f jae 0x10e5f9e6 */
  if (!C.cf) goto L_10e5f9e6;
  /* 10e5f935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f938 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5f93c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f93f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5f941 jne 0x10e5f9e1 */
  if (!C.zf) goto L_10e5f9e1;
  /* 10e5f947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f94a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f94e jne 0x10e5f989 */
  if (!C.zf) goto L_10e5f989;
  /* 10e5f950 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5f952 call 0x10e5a0e0 */
  push32(0x10e5f957u); f_10e5a0e0();
  /* 10e5f957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f95a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f95d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f961 jne 0x10e5f97f */
  if (!C.zf) goto L_10e5f97f;
  /* 10e5f963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f966 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f969 push edx */
  push32((uint32_t)(EDX));
  /* 10e5f96a call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5f970u);
  /* 10e5f970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f973 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5f976 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f97c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10e5f97f:;
  /* 10e5f97f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5f981 call 0x10e5a180 */
  push32(0x10e5f986u); f_10e5a180();
  /* 10e5f986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5f989:;
  /* 10e5f989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f98c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f98f push eax */
  push32((uint32_t)(EAX));
  /* 10e5f990 call dword ptr [0x10e85370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85370))), 0x10e5f996u);
  /* 10e5f996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f999 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10e5f99d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5f9a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5f9a2 je 0x10e5f9b6 */
  if (C.zf) goto L_10e5f9b6;
  /* 10e5f9a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f9a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f9aa push eax */
  push32((uint32_t)(EAX));
  /* 10e5f9ab call dword ptr [0x10e8536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8536c))), 0x10e5f9b1u);
  /* 10e5f9b1 jmp 0x10e5f914 */
  goto L_10e5f914;
L_10e5f9b6:;
  /* 10e5f9b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f9b9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e5f9bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f9c2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5f9c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5f9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5f9cb sub eax, dword ptr [edx*4 + 0x10e84180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10e84180))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5f9d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e5f9d3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10e5f9d8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e5f9da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5f9dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5f9df jmp 0x10e5f9e6 */
  goto L_10e5f9e6;
L_10e5f9e1:;
  /* 10e5f9e1 jmp 0x10e5f914 */
  goto L_10e5f914;
L_10e5f9e6:;
  /* 10e5f9e6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5f9ea je 0x10e5f9f1 */
  if (C.zf) goto L_10e5f9f1;
  /* 10e5f9ec jmp 0x10e5fa90 */
  goto L_10e5fa90;
L_10e5f9f1:;
  /* 10e5f9f1 jmp 0x10e5fa8b */
  goto L_10e5fa8b;
L_10e5f9f6:;
  /* 10e5f9f6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10e5f9f8 push 0x10e7e32c */
  push32((uint32_t)(0x10e7e32cu));
  /* 10e5f9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5f9ff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e5fa04 call 0x10e566e0 */
  push32(0x10e5fa09u); f_10e566e0();
  /* 10e5fa09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fa0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5fa0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fa13 je 0x10e5fa89 */
  if (C.zf) goto L_10e5fa89;
  /* 10e5fa15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5fa18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fa1b mov dword ptr [eax*4 + 0x10e84180], ecx */
  w32((uint32_t)(EAX*4 + 0x10e84180), (ECX));
  /* 10e5fa22 mov edx, dword ptr [0x10e842bc] */
  EDX = (r32((uint32_t)(0x10e842bc)));
  /* 10e5fa28 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fa2b mov dword ptr [0x10e842bc], edx */
  w32((uint32_t)(0x10e842bc), (EDX));
  /* 10e5fa31 jmp 0x10e5fa3c */
  goto L_10e5fa3c;
L_10e5fa33:;
  /* 10e5fa33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fa36 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fa39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e5fa3c:;
  /* 10e5fa3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5fa3f mov edx, dword ptr [ecx*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5fa46 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fa4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fa4f jae 0x10e5fa74 */
  if (!C.cf) goto L_10e5fa74;
  /* 10e5fa51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fa54 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e5fa58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fa5b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e5fa61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fa64 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e5fa68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fa6b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e5fa72 jmp 0x10e5fa33 */
  goto L_10e5fa33;
L_10e5fa74:;
  /* 10e5fa74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e5fa77 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5fa7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e5fa7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fa80 push edx */
  push32((uint32_t)(EDX));
  /* 10e5fa81 call 0x10e5fdd0 */
  push32(0x10e5fa86u); f_10e5fdd0();
  /* 10e5fa86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5fa89:;
  /* 10e5fa89 jmp 0x10e5fa90 */
  goto L_10e5fa90;
L_10e5fa8b:;
  /* 10e5fa8b jmp 0x10e5f8e1 */
  goto L_10e5f8e1;
L_10e5fa90:;
  /* 10e5fa90 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10e5fa92 call 0x10e5a180 */
  push32(0x10e5fa97u); f_10e5a180();
  /* 10e5fa97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fa9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fa9d pop esi */
  ESI = (pop32());
  /* 10e5fa9e mov esp, ebp */
  ESP = (EBP);
  /* 10e5faa0 pop ebp */
  EBP = (pop32());
  /* 10e5faa1 ret  */
  ESPCHK(0x10e5f8c0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10e5fab0 (183 bytes, 57 insns) */
void f_10e5fab0(void) {
  FTRACE(0x10e5fab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fab1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fab7 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fabd jae 0x10e5fb4a */
  if (!C.cf) goto L_10e5fb4a;
  /* 10e5fac3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fac6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5fac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5facc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5facf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fad2 mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5fad9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fadd jne 0x10e5fb4a */
  if (!C.zf) goto L_10e5fb4a;
  /* 10e5fadf cmp dword ptr [0x10e827a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fae6 jne 0x10e5fb2a */
  if (!C.zf) goto L_10e5fb2a;
  /* 10e5fae8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5faeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e5faee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5faf2 je 0x10e5fb02 */
  if (C.zf) goto L_10e5fb02;
  /* 10e5faf4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5faf8 je 0x10e5fb10 */
  if (C.zf) goto L_10e5fb10;
  /* 10e5fafa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fafe je 0x10e5fb1e */
  if (C.zf) goto L_10e5fb1e;
  /* 10e5fb00 jmp 0x10e5fb2a */
  goto L_10e5fb2a;
L_10e5fb02:;
  /* 10e5fb02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fb05 push edx */
  push32((uint32_t)(EDX));
  /* 10e5fb06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10e5fb08 call dword ptr [0x10e8532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8532c))), 0x10e5fb0eu);
  /* 10e5fb0e jmp 0x10e5fb2a */
  goto L_10e5fb2a;
L_10e5fb10:;
  /* 10e5fb10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fb13 push eax */
  push32((uint32_t)(EAX));
  /* 10e5fb14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e5fb16 call dword ptr [0x10e8532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8532c))), 0x10e5fb1cu);
  /* 10e5fb1c jmp 0x10e5fb2a */
  goto L_10e5fb2a;
L_10e5fb1e:;
  /* 10e5fb1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fb21 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fb22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e5fb24 call dword ptr [0x10e8532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8532c))), 0x10e5fb2au);
L_10e5fb2a:;
  /* 10e5fb2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fb2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e5fb30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fb33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fb36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fb39 mov ecx, dword ptr [edx*4 + 0x10e84180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5fb40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fb43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10e5fb46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fb48 jmp 0x10e5fb63 */
  goto L_10e5fb63;
L_10e5fb4a:;
  /* 10e5fb4a call 0x10e5e5b0 */
  push32(0x10e5fb4fu); f_10e5e5b0();
  /* 10e5fb4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5fb55 call 0x10e5e5c0 */
  push32(0x10e5fb5au); f_10e5e5c0();
  /* 10e5fb5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5fb60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e5fb63:;
  /* 10e5fb63 mov esp, ebp */
  ESP = (EBP);
  /* 10e5fb65 pop ebp */
  EBP = (pop32());
  /* 10e5fb66 ret  */
  ESPCHK(0x10e5fab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x10e5fb70 (216 bytes, 63 insns) */
void f_10e5fb70(void) {
  FTRACE(0x10e5fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fb71 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fb73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fb77 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fb7d jae 0x10e5fc2b */
  if (!C.cf) goto L_10e5fc2b;
  /* 10e5fb83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fb86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5fb89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fb8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5fb8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fb92 mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5fb99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e5fb9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5fba3 je 0x10e5fc2b */
  if (C.zf) goto L_10e5fc2b;
  /* 10e5fba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fbac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e5fbaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fbb2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fbb5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fbb8 mov ecx, dword ptr [edx*4 + 0x10e84180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5fbbf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fbc3 je 0x10e5fc2b */
  if (C.zf) goto L_10e5fc2b;
  /* 10e5fbc5 cmp dword ptr [0x10e827a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e827a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fbcc jne 0x10e5fc0a */
  if (!C.zf) goto L_10e5fc0a;
  /* 10e5fbce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fbd1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5fbd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fbd8 je 0x10e5fbe8 */
  if (C.zf) goto L_10e5fbe8;
  /* 10e5fbda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fbde je 0x10e5fbf4 */
  if (C.zf) goto L_10e5fbf4;
  /* 10e5fbe0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fbe4 je 0x10e5fc00 */
  if (C.zf) goto L_10e5fc00;
  /* 10e5fbe6 jmp 0x10e5fc0a */
  goto L_10e5fc0a;
L_10e5fbe8:;
  /* 10e5fbe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5fbea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10e5fbec call dword ptr [0x10e8532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8532c))), 0x10e5fbf2u);
  /* 10e5fbf2 jmp 0x10e5fc0a */
  goto L_10e5fc0a;
L_10e5fbf4:;
  /* 10e5fbf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5fbf6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e5fbf8 call dword ptr [0x10e8532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8532c))), 0x10e5fbfeu);
  /* 10e5fbfe jmp 0x10e5fc0a */
  goto L_10e5fc0a;
L_10e5fc00:;
  /* 10e5fc00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5fc02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e5fc04 call dword ptr [0x10e8532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8532c))), 0x10e5fc0au);
L_10e5fc0a:;
  /* 10e5fc0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5fc10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fc16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fc19 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5fc20 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10e5fc27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fc29 jmp 0x10e5fc44 */
  goto L_10e5fc44;
L_10e5fc2b:;
  /* 10e5fc2b call 0x10e5e5b0 */
  push32(0x10e5fc30u); f_10e5e5b0();
  /* 10e5fc30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5fc36 call 0x10e5e5c0 */
  push32(0x10e5fc3bu); f_10e5e5c0();
  /* 10e5fc3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5fc41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e5fc44:;
  /* 10e5fc44 mov esp, ebp */
  ESP = (EBP);
  /* 10e5fc46 pop ebp */
  EBP = (pop32());
  /* 10e5fc47 ret  */
  ESPCHK(0x10e5fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc50 @ 0x10e5fc50 (102 bytes, 30 insns) */
void f_10e5fc50(void) {
  FTRACE(0x10e5fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fc51 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fc53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc56 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fc5c jae 0x10e5fc9b */
  if (!C.cf) goto L_10e5fc9b;
  /* 10e5fc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc61 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e5fc64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc67 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e5fc6a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fc6d mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e5fc74 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e5fc79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fc7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5fc7e je 0x10e5fc9b */
  if (C.zf) goto L_10e5fc9b;
  /* 10e5fc80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc83 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10e5fc86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fc89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fc8c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fc8f mov ecx, dword ptr [edx*4 + 0x10e84180] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10e84180)));
  /* 10e5fc96 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10e5fc99 jmp 0x10e5fcb4 */
  goto L_10e5fcb4;
L_10e5fc9b:;
  /* 10e5fc9b call 0x10e5e5b0 */
  push32(0x10e5fca0u); f_10e5e5b0();
  /* 10e5fca0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e5fca6 call 0x10e5e5c0 */
  push32(0x10e5fcabu); f_10e5e5c0();
  /* 10e5fcab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5fcb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e5fcb4:;
  /* 10e5fcb4 pop ebp */
  EBP = (pop32());
  /* 10e5fcb5 ret  */
  ESPCHK(0x10e5fc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcc0 @ 0x10e5fcc0 (260 bytes, 83 insns) */
void f_10e5fcc0(void) {
  FTRACE(0x10e5fcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fcc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fcc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5fcc6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e5fcca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fccd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fcd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5fcd2 je 0x10e5fcdd */
  if (C.zf) goto L_10e5fcdd;
  /* 10e5fcd4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fcd7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e5fcda mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10e5fcdd:;
  /* 10e5fcdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fce0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5fce6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5fce8 je 0x10e5fcf2 */
  if (C.zf) goto L_10e5fcf2;
  /* 10e5fcea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fced or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10e5fcef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10e5fcf2:;
  /* 10e5fcf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e5fcf5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fcfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5fcfd je 0x10e5fd08 */
  if (C.zf) goto L_10e5fd08;
  /* 10e5fcff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fd02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10e5fd05 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10e5fd08:;
  /* 10e5fd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fd0b push eax */
  push32((uint32_t)(EAX));
  /* 10e5fd0c call dword ptr [0x10e853b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853b4))), 0x10e5fd12u);
  /* 10e5fd12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5fd15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fd19 jne 0x10e5fd32 */
  if (!C.zf) goto L_10e5fd32;
  /* 10e5fd1b call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e5fd21u);
  /* 10e5fd21 push eax */
  push32((uint32_t)(EAX));
  /* 10e5fd22 call 0x10e5e510 */
  push32(0x10e5fd27u); f_10e5e510();
  /* 10e5fd27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fd2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fd2d jmp 0x10e5fdc0 */
  goto L_10e5fdc0;
L_10e5fd32:;
  /* 10e5fd32 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fd36 jne 0x10e5fd43 */
  if (!C.zf) goto L_10e5fd43;
  /* 10e5fd38 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fd3b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10e5fd3e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10e5fd41 jmp 0x10e5fd52 */
  goto L_10e5fd52;
L_10e5fd43:;
  /* 10e5fd43 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fd47 jne 0x10e5fd52 */
  if (!C.zf) goto L_10e5fd52;
  /* 10e5fd49 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fd4c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10e5fd4f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10e5fd52:;
  /* 10e5fd52 call 0x10e5f8c0 */
  push32(0x10e5fd57u); f_10e5f8c0();
  /* 10e5fd57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e5fd5a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fd5e jne 0x10e5fd7b */
  if (!C.zf) goto L_10e5fd7b;
  /* 10e5fd60 call 0x10e5e5b0 */
  push32(0x10e5fd65u); f_10e5e5b0();
  /* 10e5fd65 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10e5fd6b call 0x10e5e5c0 */
  push32(0x10e5fd70u); f_10e5e5c0();
  /* 10e5fd70 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e5fd76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5fd79 jmp 0x10e5fdc0 */
  goto L_10e5fdc0;
L_10e5fd7b:;
  /* 10e5fd7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fd7e push eax */
  push32((uint32_t)(EAX));
  /* 10e5fd7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fd82 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fd83 call 0x10e5fab0 */
  push32(0x10e5fd88u); f_10e5fab0();
  /* 10e5fd88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fd8b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fd8e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10e5fd91 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10e5fd94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fd97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5fd9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fd9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fda0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fda3 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5fdaa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e5fdad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10e5fdb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fdb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fdb5 call 0x10e5fe60 */
  push32(0x10e5fdbau); f_10e5fe60();
  /* 10e5fdba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fdbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e5fdc0:;
  /* 10e5fdc0 mov esp, ebp */
  ESP = (EBP);
  /* 10e5fdc2 pop ebp */
  EBP = (pop32());
  /* 10e5fdc3 ret  */
  ESPCHK(0x10e5fcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x10e5fdd0 (134 bytes, 44 insns) */
void f_10e5fdd0(void) {
  FTRACE(0x10e5fdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fdd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fdd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fdd7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5fdda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fddd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fde0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fde3 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5fdea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fdec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e5fdef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fdf2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fdf6 jne 0x10e5fe31 */
  if (!C.zf) goto L_10e5fe31;
  /* 10e5fdf8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5fdfa call 0x10e5a0e0 */
  push32(0x10e5fdffu); f_10e5a0e0();
  /* 10e5fdff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fe02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fe05 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fe09 jne 0x10e5fe27 */
  if (!C.zf) goto L_10e5fe27;
  /* 10e5fe0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fe0e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fe11 push edx */
  push32((uint32_t)(EDX));
  /* 10e5fe12 call dword ptr [0x10e85374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85374))), 0x10e5fe18u);
  /* 10e5fe18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fe1b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e5fe1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fe21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5fe24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10e5fe27:;
  /* 10e5fe27 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e5fe29 call 0x10e5a180 */
  push32(0x10e5fe2eu); f_10e5a180();
  /* 10e5fe2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e5fe31:;
  /* 10e5fe31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fe34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5fe37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fe3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fe3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fe40 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5fe47 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10e5fe4b push eax */
  push32((uint32_t)(EAX));
  /* 10e5fe4c call dword ptr [0x10e85370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85370))), 0x10e5fe52u);
  /* 10e5fe52 mov esp, ebp */
  ESP = (EBP);
  /* 10e5fe54 pop ebp */
  EBP = (pop32());
  /* 10e5fe55 ret  */
  ESPCHK(0x10e5fdd0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10e5fe60 (38 bytes, 13 insns) */
void f_10e5fe60(void) {
  FTRACE(0x10e5fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fe61 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fe63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fe66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e5fe69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5fe6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e5fe6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e5fe72 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e5fe79 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10e5fe7d push eax */
  push32((uint32_t)(EAX));
  /* 10e5fe7e call dword ptr [0x10e8536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8536c))), 0x10e5fe84u);
  /* 10e5fe84 pop ebp */
  EBP = (pop32());
  /* 10e5fe85 ret  */
  ESPCHK(0x10e5fe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x10e5fe90 (218 bytes, 63 insns) */
void f_10e5fe90(void) {
  FTRACE(0x10e5fe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5fe90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5fe91 mov ebp, esp */
  EBP = (ESP);
  /* 10e5fe93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5fe96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e5fe9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5fe9f call 0x10e5a0e0 */
  push32(0x10e5fea4u); f_10e5a0e0();
  /* 10e5fea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fea7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10e5feae jmp 0x10e5feb9 */
  goto L_10e5feb9;
L_10e5feb0:;
  /* 10e5feb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5feb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5feb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e5feb9:;
  /* 10e5feb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5febc cmp ecx, dword ptr [0x10e83e80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e83e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fec2 jge 0x10e5ff59 */
  if ((C.sf==C.of)) goto L_10e5ff59;
  /* 10e5fec8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fecb mov eax, dword ptr [0x10e82b40] */
  EAX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5fed0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5fed4 je 0x10e5ff54 */
  if (C.zf) goto L_10e5ff54;
  /* 10e5fed6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fed9 mov edx, dword ptr [0x10e82b40] */
  EDX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5fedf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e5fee2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e5fee5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10e5feeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e5feed je 0x10e5ff11 */
  if (C.zf) goto L_10e5ff11;
  /* 10e5feef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5fef2 mov eax, dword ptr [0x10e82b40] */
  EAX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5fef7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e5fefa push ecx */
  push32((uint32_t)(ECX));
  /* 10e5fefb call 0x10e60c80 */
  push32(0x10e5ff00u); f_10e60c80();
  /* 10e5ff00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff03 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ff06 je 0x10e5ff11 */
  if (C.zf) goto L_10e5ff11;
  /* 10e5ff08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ff0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e5ff11:;
  /* 10e5ff11 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ff15 jl 0x10e5ff54 */
  if ((C.sf!=C.of)) goto L_10e5ff54;
  /* 10e5ff17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5ff1a mov ecx, dword ptr [0x10e82b40] */
  ECX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5ff20 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e5ff23 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff26 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ff27 call dword ptr [0x10e853ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853ac))), 0x10e5ff2du);
  /* 10e5ff2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5ff2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5ff32 mov ecx, dword ptr [0x10e82b40] */
  ECX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5ff38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e5ff3b push edx */
  push32((uint32_t)(EDX));
  /* 10e5ff3c call 0x10e57170 */
  push32(0x10e5ff41u); f_10e57170();
  /* 10e5ff41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e5ff47 mov ecx, dword ptr [0x10e82b40] */
  ECX = (r32((uint32_t)(0x10e82b40)));
  /* 10e5ff4d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10e5ff54:;
  /* 10e5ff54 jmp 0x10e5feb0 */
  goto L_10e5feb0;
L_10e5ff59:;
  /* 10e5ff59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e5ff5b call 0x10e5a180 */
  push32(0x10e5ff60u); f_10e5a180();
  /* 10e5ff60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e5ff66 mov esp, ebp */
  ESP = (EBP);
  /* 10e5ff68 pop ebp */
  EBP = (pop32());
  /* 10e5ff69 ret  */
  ESPCHK(0x10e5fe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff70 @ 0x10e5ff70 (68 bytes, 26 insns) */
void f_10e5ff70(void) {
  FTRACE(0x10e5ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5ff71 mov ebp, esp */
  EBP = (ESP);
  /* 10e5ff73 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ff74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e5ff78 jne 0x10e5ff86 */
  if (!C.zf) goto L_10e5ff86;
  /* 10e5ff7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e5ff7c call 0x10e600e0 */
  push32(0x10e5ff81u); f_10e600e0();
  /* 10e5ff81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff84 jmp 0x10e5ffb0 */
  goto L_10e5ffb0;
L_10e5ff86:;
  /* 10e5ff86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ff89 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ff8a call 0x10e5f4f0 */
  push32(0x10e5ff8fu); f_10e5f4f0();
  /* 10e5ff8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ff95 push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ff96 call 0x10e5ffc0 */
  push32(0x10e5ff9bu); f_10e5ffc0();
  /* 10e5ff9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ff9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e5ffa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ffa4 push edx */
  push32((uint32_t)(EDX));
  /* 10e5ffa5 call 0x10e5f560 */
  push32(0x10e5ffaau); f_10e5f560();
  /* 10e5ffaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ffad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e5ffb0:;
  /* 10e5ffb0 mov esp, ebp */
  ESP = (EBP);
  /* 10e5ffb2 pop ebp */
  EBP = (pop32());
  /* 10e5ffb3 ret  */
  ESPCHK(0x10e5ff70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffc0 @ 0x10e5ffc0 (65 bytes, 26 insns) */
void f_10e5ffc0(void) {
  FTRACE(0x10e5ffc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e5ffc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e5ffc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e5ffc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ffc6 push eax */
  push32((uint32_t)(EAX));
  /* 10e5ffc7 call 0x10e60010 */
  push32(0x10e5ffccu); f_10e60010();
  /* 10e5ffcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5ffcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e5ffd1 je 0x10e5ffd8 */
  if (C.zf) goto L_10e5ffd8;
  /* 10e5ffd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e5ffd6 jmp 0x10e5ffff */
  goto L_10e5ffff;
L_10e5ffd8:;
  /* 10e5ffd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ffdb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e5ffde and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e5ffe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e5ffe6 je 0x10e5fffd */
  if (C.zf) goto L_10e5fffd;
  /* 10e5ffe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e5ffeb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e5ffee push ecx */
  push32((uint32_t)(ECX));
  /* 10e5ffef call 0x10e60dd0 */
  push32(0x10e5fff4u); f_10e60dd0();
  /* 10e5fff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e5fff7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e5fff9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e5fffb jmp 0x10e5ffff */
  goto L_10e5ffff;
L_10e5fffd:;
  /* 10e5fffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e5ffff:;
  /* 10e5ffff pop ebp */
  EBP = (pop32());
  /* 10e60000 ret  */
  ESPCHK(0x10e5ffc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x10e60010 (183 bytes, 62 insns) */
void f_10e60010(void) {
  FTRACE(0x10e60010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60010 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60011 mov ebp, esp */
  EBP = (ESP);
  /* 10e60013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60016 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e6001d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60020 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e60023 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60026 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e60029 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e6002c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6002f jne 0x10e600ab */
  if (!C.zf) goto L_10e600ab;
  /* 10e60031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60034 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e60037 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10e6003d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6003f je 0x10e600ab */
  if (C.zf) goto L_10e600ab;
  /* 10e60041 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60044 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60047 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10e60049 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6004c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6004f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60053 jle 0x10e600ab */
  if ((C.zf||C.sf!=C.of)) goto L_10e600ab;
  /* 10e60055 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60058 push edx */
  push32((uint32_t)(EDX));
  /* 10e60059 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6005c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e6005f push ecx */
  push32((uint32_t)(ECX));
  /* 10e60060 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60063 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e60066 push eax */
  push32((uint32_t)(EAX));
  /* 10e60067 call 0x10e5ef80 */
  push32(0x10e6006cu); f_10e5ef80();
  /* 10e6006c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6006f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60072 jne 0x10e60095 */
  if (!C.zf) goto L_10e60095;
  /* 10e60074 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60077 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e6007a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10e60080 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e60082 je 0x10e60093 */
  if (C.zf) goto L_10e60093;
  /* 10e60084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60087 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e6008a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10e6008d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60090 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10e60093:;
  /* 10e60093 jmp 0x10e600ab */
  goto L_10e600ab;
L_10e60095:;
  /* 10e60095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60098 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e6009b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10e6009e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e600a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10e600a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e600ab:;
  /* 10e600ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e600ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e600b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e600b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e600b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e600b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e600c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e600c3 mov esp, ebp */
  ESP = (EBP);
  /* 10e600c5 pop ebp */
  EBP = (pop32());
  /* 10e600c6 ret  */
  ESPCHK(0x10e60010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100d0 @ 0x10e600d0 (15 bytes, 7 insns) */
void f_10e600d0(void) {
  FTRACE(0x10e600d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e600d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e600d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e600d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e600d5 call 0x10e600e0 */
  push32(0x10e600dau); f_10e600e0();
  /* 10e600da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e600dd pop ebp */
  EBP = (pop32());
  /* 10e600de ret  */
  ESPCHK(0x10e600d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100100e0 @ 0x10e600e0 (319 bytes, 94 insns) */
void f_10e600e0(void) {
  FTRACE(0x10e600e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e600e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e600e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e600e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e600e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e600ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e600f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e600f6 call 0x10e5a0e0 */
  push32(0x10e600fbu); f_10e5a0e0();
  /* 10e600fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e600fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e60105 jmp 0x10e60110 */
  goto L_10e60110;
L_10e60107:;
  /* 10e60107 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6010a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6010d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e60110:;
  /* 10e60110 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60113 cmp ecx, dword ptr [0x10e83e80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e83e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60119 jge 0x10e60203 */
  if ((C.sf==C.of)) goto L_10e60203;
  /* 10e6011f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60122 mov eax, dword ptr [0x10e82b40] */
  EAX = (r32((uint32_t)(0x10e82b40)));
  /* 10e60127 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6012b je 0x10e601fe */
  if (C.zf) goto L_10e601fe;
  /* 10e60131 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60134 mov edx, dword ptr [0x10e82b40] */
  EDX = (r32((uint32_t)(0x10e82b40)));
  /* 10e6013a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e6013d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e60140 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10e60146 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e60148 je 0x10e601fe */
  if (C.zf) goto L_10e601fe;
  /* 10e6014e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60151 mov eax, dword ptr [0x10e82b40] */
  EAX = (r32((uint32_t)(0x10e82b40)));
  /* 10e60156 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e60159 push ecx */
  push32((uint32_t)(ECX));
  /* 10e6015a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6015d push edx */
  push32((uint32_t)(EDX));
  /* 10e6015e call 0x10e5f530 */
  push32(0x10e60163u); f_10e5f530();
  /* 10e60163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60166 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60169 mov ecx, dword ptr [0x10e82b40] */
  ECX = (r32((uint32_t)(0x10e82b40)));
  /* 10e6016f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e60172 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e60175 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10e6017a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6017c je 0x10e601e5 */
  if (C.zf) goto L_10e601e5;
  /* 10e6017e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60182 jne 0x10e601a9 */
  if (!C.zf) goto L_10e601a9;
  /* 10e60184 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60187 mov edx, dword ptr [0x10e82b40] */
  EDX = (r32((uint32_t)(0x10e82b40)));
  /* 10e6018d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e60190 push eax */
  push32((uint32_t)(EAX));
  /* 10e60191 call 0x10e5ffc0 */
  push32(0x10e60196u); f_10e5ffc0();
  /* 10e60196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60199 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6019c je 0x10e601a7 */
  if (C.zf) goto L_10e601a7;
  /* 10e6019e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e601a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e601a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e601a7:;
  /* 10e601a7 jmp 0x10e601e5 */
  goto L_10e601e5;
L_10e601a9:;
  /* 10e601a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e601ad jne 0x10e601e5 */
  if (!C.zf) goto L_10e601e5;
  /* 10e601af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e601b2 mov eax, dword ptr [0x10e82b40] */
  EAX = (r32((uint32_t)(0x10e82b40)));
  /* 10e601b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e601ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e601bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e601c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e601c2 je 0x10e601e5 */
  if (C.zf) goto L_10e601e5;
  /* 10e601c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e601c7 mov ecx, dword ptr [0x10e82b40] */
  ECX = (r32((uint32_t)(0x10e82b40)));
  /* 10e601cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e601d0 push edx */
  push32((uint32_t)(EDX));
  /* 10e601d1 call 0x10e5ffc0 */
  push32(0x10e601d6u); f_10e5ffc0();
  /* 10e601d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e601d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e601dc jne 0x10e601e5 */
  if (!C.zf) goto L_10e601e5;
  /* 10e601de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10e601e5:;
  /* 10e601e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e601e8 mov ecx, dword ptr [0x10e82b40] */
  ECX = (r32((uint32_t)(0x10e82b40)));
  /* 10e601ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e601f1 push edx */
  push32((uint32_t)(EDX));
  /* 10e601f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e601f5 push eax */
  push32((uint32_t)(EAX));
  /* 10e601f6 call 0x10e5f5a0 */
  push32(0x10e601fbu); f_10e5f5a0();
  /* 10e601fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e601fe:;
  /* 10e601fe jmp 0x10e60107 */
  goto L_10e60107;
L_10e60203:;
  /* 10e60203 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60205 call 0x10e5a180 */
  push32(0x10e6020au); f_10e5a180();
  /* 10e6020a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6020d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60211 jne 0x10e60218 */
  if (!C.zf) goto L_10e60218;
  /* 10e60213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60216 jmp 0x10e6021b */
  goto L_10e6021b;
L_10e60218:;
  /* 10e60218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e6021b:;
  /* 10e6021b mov esp, ebp */
  ESP = (EBP);
  /* 10e6021d pop ebp */
  EBP = (pop32());
  /* 10e6021e ret  */
  ESPCHK(0x10e600e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10e60220 (15 bytes, 7 insns) */
void f_10e60220(void) {
  FTRACE(0x10e60220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60220 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60221 mov ebp, esp */
  EBP = (ESP);
  /* 10e60223 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60225 call 0x10e55650 */
  push32(0x10e6022au); f_10e55650();
  /* 10e6022a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6022d pop ebp */
  EBP = (pop32());
  /* 10e6022e ret  */
  ESPCHK(0x10e60220u, _esp0);
  ESP += 4; return;
}

/* FUN_10010230 @ 0x10e60230 (1007 bytes, 269 insns) */
void f_10e60230(void) {
  FTRACE(0x10e60230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60230 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60231 mov ebp, esp */
  EBP = (ESP);
  /* 10e60233 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6023d jl 0x10e60245 */
  if ((C.sf!=C.of)) goto L_10e60245;
  /* 10e6023f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60243 jle 0x10e6024c */
  if ((C.zf||C.sf!=C.of)) goto L_10e6024c;
L_10e60245:;
  /* 10e60245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60247 jmp 0x10e6061b */
  goto L_10e6061b;
L_10e6024c:;
  /* 10e6024c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e6024e call 0x10e5a0e0 */
  push32(0x10e60253u); f_10e5a0e0();
  /* 10e60253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60256 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e6025d mov eax, dword ptr [0x10e82b2c] */
  EAX = (r32((uint32_t)(0x10e82b2c)));
  /* 10e60262 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60265 mov dword ptr [0x10e82b2c], eax */
  w32((uint32_t)(0x10e82b2c), (EAX));
L_10e6026a:;
  /* 10e6026a cmp dword ptr [0x10e82b3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60271 je 0x10e6027d */
  if (C.zf) goto L_10e6027d;
  /* 10e60273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e60275 call dword ptr [0x10e85328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85328))), 0x10e6027bu);
  /* 10e6027b jmp 0x10e6026a */
  goto L_10e6026a;
L_10e6027d:;
  /* 10e6027d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60281 je 0x10e602c1 */
  if (C.zf) goto L_10e602c1;
  /* 10e60283 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60287 je 0x10e602a1 */
  if (C.zf) goto L_10e602a1;
  /* 10e60289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6028c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6028d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60290 push edx */
  push32((uint32_t)(EDX));
  /* 10e60291 call 0x10e60620 */
  push32(0x10e60296u); f_10e60620();
  /* 10e60296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60299 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10e6029f jmp 0x10e602b3 */
  goto L_10e602b3;
L_10e602a1:;
  /* 10e602a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e602a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e602a7 mov ecx, dword ptr [eax + 0x10e814ec] */
  ECX = (r32((uint32_t)(EAX + 0x10e814ec)));
  /* 10e602ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10e602b3:;
  /* 10e602b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10e602b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e602bc jmp 0x10e605fb */
  goto L_10e605fb;
L_10e602c1:;
  /* 10e602c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10e602c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e602cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e602d3 je 0x10e605f3 */
  if (C.zf) goto L_10e605f3;
  /* 10e602d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e602dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e602df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e602e2 jne 0x10e60504 */
  if (!C.zf) goto L_10e60504;
  /* 10e602e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e602eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e602ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e602f2 jne 0x10e60504 */
  if (!C.zf) goto L_10e60504;
  /* 10e602f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e602fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10e602ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60302 jne 0x10e60504 */
  if (!C.zf) goto L_10e60504;
  /* 10e60308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6030b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10e60311:;
  /* 10e60311 push 0x10e7e37c */
  push32((uint32_t)(0x10e7e37cu));
  /* 10e60316 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e6031c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6031d call 0x10e62480 */
  push32(0x10e60322u); f_10e62480();
  /* 10e60322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60325 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10e6032b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60332 je 0x10e6035d */
  if (C.zf) goto L_10e6035d;
  /* 10e60334 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e6033a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60340 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10e60346 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6034d je 0x10e6035d */
  if (C.zf) goto L_10e6035d;
  /* 10e6034f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e60355 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e60358 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6035b jne 0x10e60383 */
  if (!C.zf) goto L_10e60383;
L_10e6035d:;
  /* 10e6035d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60361 je 0x10e6037c */
  if (C.zf) goto L_10e6037c;
  /* 10e60363 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e60365 call 0x10e5a180 */
  push32(0x10e6036au); f_10e5a180();
  /* 10e6036a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6036d mov edx, dword ptr [0x10e82b2c] */
  EDX = (r32((uint32_t)(0x10e82b2c)));
  /* 10e60373 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60376 mov dword ptr [0x10e82b2c], edx */
  w32((uint32_t)(0x10e82b2c), (EDX));
L_10e6037c:;
  /* 10e6037c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6037e jmp 0x10e6061b */
  goto L_10e6061b;
L_10e60383:;
  /* 10e60383 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e6038a jmp 0x10e60395 */
  goto L_10e60395;
L_10e6038c:;
  /* 10e6038c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6038f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60392 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e60395:;
  /* 10e60395 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60399 jg 0x10e603e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e603e3;
  /* 10e6039b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e603a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e603a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e603a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e603a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e603ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e603af mov ecx, dword ptr [eax + 0x10e814e8] */
  ECX = (r32((uint32_t)(EAX + 0x10e814e8)));
  /* 10e603b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e603b6 call 0x10e62440 */
  push32(0x10e603bbu); f_10e62440();
  /* 10e603bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e603be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e603c0 jne 0x10e603e1 */
  if (!C.zf) goto L_10e603e1;
  /* 10e603c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e603c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e603c8 mov eax, dword ptr [edx + 0x10e814e8] */
  EAX = (r32((uint32_t)(EDX + 0x10e814e8)));
  /* 10e603ce push eax */
  push32((uint32_t)(EAX));
  /* 10e603cf call 0x10e59510 */
  push32(0x10e603d4u); f_10e59510();
  /* 10e603d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e603d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e603dd jne 0x10e603e1 */
  if (!C.zf) goto L_10e603e1;
  /* 10e603df jmp 0x10e603e3 */
  goto L_10e603e3;
L_10e603e1:;
  /* 10e603e1 jmp 0x10e6038c */
  goto L_10e6038c;
L_10e603e3:;
  /* 10e603e3 push 0x10e7e378 */
  push32((uint32_t)(0x10e7e378u));
  /* 10e603e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e603ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e603f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10e603f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e603fd push edx */
  push32((uint32_t)(EDX));
  /* 10e603fe call 0x10e62400 */
  push32(0x10e60403u); f_10e62400();
  /* 10e60403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60406 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10e6040c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60413 jne 0x10e60449 */
  if (!C.zf) goto L_10e60449;
  /* 10e60415 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e6041b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e6041e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60421 je 0x10e60449 */
  if (C.zf) goto L_10e60449;
  /* 10e60423 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60427 je 0x10e60442 */
  if (C.zf) goto L_10e60442;
  /* 10e60429 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e6042b call 0x10e5a180 */
  push32(0x10e60430u); f_10e5a180();
  /* 10e60430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60433 mov edx, dword ptr [0x10e82b2c] */
  EDX = (r32((uint32_t)(0x10e82b2c)));
  /* 10e60439 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6043c mov dword ptr [0x10e82b2c], edx */
  w32((uint32_t)(0x10e82b2c), (EDX));
L_10e60442:;
  /* 10e60442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60444 jmp 0x10e6061b */
  goto L_10e6061b;
L_10e60449:;
  /* 10e60449 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6044d jg 0x10e6049a */
  if ((!C.zf&&C.sf==C.of)) goto L_10e6049a;
  /* 10e6044f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e60455 push eax */
  push32((uint32_t)(EAX));
  /* 10e60456 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e6045c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6045d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10e60463 push edx */
  push32((uint32_t)(EDX));
  /* 10e60464 call 0x10e59f00 */
  push32(0x10e60469u); f_10e59f00();
  /* 10e60469 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6046c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e60472 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10e6047a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10e60480 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60481 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e60484 push edx */
  push32((uint32_t)(EDX));
  /* 10e60485 call 0x10e60620 */
  push32(0x10e6048au); f_10e60620();
  /* 10e6048a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6048d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6048f je 0x10e6049a */
  if (C.zf) goto L_10e6049a;
  /* 10e60491 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60494 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60497 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e6049a:;
  /* 10e6049a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e604a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e604a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10e604ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e604b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e604b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e604b7 je 0x10e604c8 */
  if (C.zf) goto L_10e604c8;
  /* 10e604b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e604bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e604c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10e604c8:;
  /* 10e604c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e604ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e604d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e604d3 jne 0x10e60311 */
  if (!C.zf) goto L_10e60311;
  /* 10e604d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e604dd je 0x10e604ec */
  if (C.zf) goto L_10e604ec;
  /* 10e604df call 0x10e607c0 */
  push32(0x10e604e4u); f_10e607c0();
  /* 10e604e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10e604ea jmp 0x10e604f6 */
  goto L_10e604f6;
L_10e604ec:;
  /* 10e604ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10e604f6:;
  /* 10e604f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10e604fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e604ff jmp 0x10e605f1 */
  goto L_10e605f1;
L_10e60504:;
  /* 10e60504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60507 push edx */
  push32((uint32_t)(EDX));
  /* 10e60508 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6050a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6050c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10e60512 push eax */
  push32((uint32_t)(EAX));
  /* 10e60513 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60516 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60517 call 0x10e608c0 */
  push32(0x10e6051cu); f_10e608c0();
  /* 10e6051c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6051f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e60522 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60526 je 0x10e605f1 */
  if (C.zf) goto L_10e605f1;
  /* 10e6052c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e60533 jmp 0x10e6053e */
  goto L_10e6053e;
L_10e60535:;
  /* 10e60535 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e60538 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6053b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e6053e:;
  /* 10e6053e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60542 jg 0x10e605a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e605a0;
  /* 10e60544 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60548 je 0x10e6059e */
  if (C.zf) goto L_10e6059e;
  /* 10e6054a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6054d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60550 mov ecx, dword ptr [eax + 0x10e814ec] */
  ECX = (r32((uint32_t)(EAX + 0x10e814ec)));
  /* 10e60556 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60557 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10e6055d push edx */
  push32((uint32_t)(EDX));
  /* 10e6055e call 0x10e62370 */
  push32(0x10e60563u); f_10e62370();
  /* 10e60563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60568 je 0x10e60595 */
  if (C.zf) goto L_10e60595;
  /* 10e6056a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10e60570 push eax */
  push32((uint32_t)(EAX));
  /* 10e60571 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e60574 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60575 call 0x10e60620 */
  push32(0x10e6057au); f_10e60620();
  /* 10e6057a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6057d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6057f je 0x10e6058c */
  if (C.zf) goto L_10e6058c;
  /* 10e60581 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60584 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60587 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e6058a jmp 0x10e60593 */
  goto L_10e60593;
L_10e6058c:;
  /* 10e6058c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10e60593:;
  /* 10e60593 jmp 0x10e6059e */
  goto L_10e6059e;
L_10e60595:;
  /* 10e60595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60598 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6059b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e6059e:;
  /* 10e6059e jmp 0x10e60535 */
  goto L_10e60535;
L_10e605a0:;
  /* 10e605a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e605a4 je 0x10e605cb */
  if (C.zf) goto L_10e605cb;
  /* 10e605a6 call 0x10e607c0 */
  push32(0x10e605abu); f_10e607c0();
  /* 10e605ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e605ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10e605b0 mov ecx, dword ptr [0x10e814ec] */
  ECX = (r32((uint32_t)(0x10e814ec)));
  /* 10e605b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e605b7 call 0x10e57170 */
  push32(0x10e605bcu); f_10e57170();
  /* 10e605bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e605bf mov dword ptr [0x10e814ec], 0 */
  w32((uint32_t)(0x10e814ec), (0x0u));
  /* 10e605c9 jmp 0x10e605f1 */
  goto L_10e605f1;
L_10e605cb:;
  /* 10e605cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e605cf je 0x10e605de */
  if (C.zf) goto L_10e605de;
  /* 10e605d1 call 0x10e607c0 */
  push32(0x10e605d6u); f_10e607c0();
  /* 10e605d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10e605dc jmp 0x10e605e8 */
  goto L_10e605e8;
L_10e605de:;
  /* 10e605de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10e605e8:;
  /* 10e605e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10e605ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e605f1:;
  /* 10e605f1 jmp 0x10e605fb */
  goto L_10e605fb;
L_10e605f3:;
  /* 10e605f3 call 0x10e607c0 */
  push32(0x10e605f8u); f_10e607c0();
  /* 10e605f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e605fb:;
  /* 10e605fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e605ff je 0x10e60618 */
  if (C.zf) goto L_10e60618;
  /* 10e60601 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e60603 call 0x10e5a180 */
  push32(0x10e60608u); f_10e5a180();
  /* 10e60608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6060b mov eax, dword ptr [0x10e82b2c] */
  EAX = (r32((uint32_t)(0x10e82b2c)));
  /* 10e60610 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60613 mov dword ptr [0x10e82b2c], eax */
  w32((uint32_t)(0x10e82b2c), (EAX));
L_10e60618:;
  /* 10e60618 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e6061b:;
  /* 10e6061b mov esp, ebp */
  ESP = (EBP);
  /* 10e6061d pop ebp */
  EBP = (pop32());
  /* 10e6061e ret  */
  ESPCHK(0x10e60230u, _esp0);
  ESP += 4; return;
}

/* FUN_10010620 @ 0x10e60620 (403 bytes, 117 insns) */
void f_10e60620(void) {
  FTRACE(0x10e60620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60620 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60621 mov ebp, esp */
  EBP = (ESP);
  /* 10e60623 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6062c push eax */
  push32((uint32_t)(EAX));
  /* 10e6062d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10e60633 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60634 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10e6063a push edx */
  push32((uint32_t)(EDX));
  /* 10e6063b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10e60641 push eax */
  push32((uint32_t)(EAX));
  /* 10e60642 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60645 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60646 call 0x10e608c0 */
  push32(0x10e6064bu); f_10e608c0();
  /* 10e6064b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6064e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60650 jne 0x10e60659 */
  if (!C.zf) goto L_10e60659;
  /* 10e60652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60654 jmp 0x10e607af */
  goto L_10e607af;
L_10e60659:;
  /* 10e60659 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10e6065e push 0x10e7e380 */
  push32((uint32_t)(0x10e7e380u));
  /* 10e60663 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60665 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10e6066b push edx */
  push32((uint32_t)(EDX));
  /* 10e6066c call 0x10e59510 */
  push32(0x10e60671u); f_10e59510();
  /* 10e60671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60674 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60677 push eax */
  push32((uint32_t)(EAX));
  /* 10e60678 call 0x10e566e0 */
  push32(0x10e6067du); f_10e566e0();
  /* 10e6067d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60680 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e60683 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60687 jne 0x10e60690 */
  if (!C.zf) goto L_10e60690;
  /* 10e60689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6068b jmp 0x10e607af */
  goto L_10e607af;
L_10e60690:;
  /* 10e60690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60693 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60696 mov ecx, dword ptr [eax + 0x10e814ec] */
  ECX = (r32((uint32_t)(EAX + 0x10e814ec)));
  /* 10e6069c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6069f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e606a2 mov eax, dword ptr [edx*4 + 0x10e829a8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e829a8)));
  /* 10e606a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e606ac push 6 */
  push32((uint32_t)(0x6u));
  /* 10e606ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e606b1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e606b4 add ecx, 0x10e829f8 */
  { uint32_t _a=(ECX),_b=(0x10e829f8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e606ba push ecx */
  push32((uint32_t)(ECX));
  /* 10e606bb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10e606be push edx */
  push32((uint32_t)(EDX));
  /* 10e606bf call 0x10e5cfc0 */
  push32(0x10e606c4u); f_10e5cfc0();
  /* 10e606c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e606c7 mov eax, dword ptr [0x10e829c0] */
  EAX = (r32((uint32_t)(0x10e829c0)));
  /* 10e606cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e606cf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10e606d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e606d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e606d9 push edx */
  push32((uint32_t)(EDX));
  /* 10e606da call 0x10e59690 */
  push32(0x10e606dfu); f_10e59690();
  /* 10e606df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e606e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e606e5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e606e8 mov dword ptr [ecx + 0x10e814ec], eax */
  w32((uint32_t)(ECX + 0x10e814ec), (EAX));
  /* 10e606ee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10e606f4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e606fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e606fd mov dword ptr [eax*4 + 0x10e829a8], edx */
  w32((uint32_t)(EAX*4 + 0x10e829a8), (EDX));
  /* 10e60704 push 6 */
  push32((uint32_t)(0x6u));
  /* 10e60706 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10e6070c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6070d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60710 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60713 add edx, 0x10e829f8 */
  { uint32_t _a=(EDX),_b=(0x10e829f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60719 push edx */
  push32((uint32_t)(EDX));
  /* 10e6071a call 0x10e5cfc0 */
  push32(0x10e6071fu); f_10e5cfc0();
  /* 10e6071f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60722 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60726 jne 0x10e60733 */
  if (!C.zf) goto L_10e60733;
  /* 10e60728 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e6072e mov dword ptr [0x10e829c0], eax */
  w32((uint32_t)(0x10e829c0), (EAX));
L_10e60733:;
  /* 10e60733 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60737 jne 0x10e60745 */
  if (!C.zf) goto L_10e60745;
  /* 10e60739 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e6073f mov dword ptr [0x10e829c4], ecx */
  w32((uint32_t)(0x10e829c4), (ECX));
L_10e60745:;
  /* 10e60745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60748 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6074b call dword ptr [edx + 0x10e814f0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10e814f0))), 0x10e60751u);
  /* 10e60751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60753 je 0x10e6078c */
  if (C.zf) goto L_10e6078c;
  /* 10e60755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60758 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6075b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6075e mov dword ptr [eax + 0x10e814ec], ecx */
  w32((uint32_t)(EAX + 0x10e814ec), (ECX));
  /* 10e60764 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60766 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60769 push edx */
  push32((uint32_t)(EDX));
  /* 10e6076a call 0x10e57170 */
  push32(0x10e6076fu); f_10e57170();
  /* 10e6076f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60778 mov dword ptr [eax*4 + 0x10e829a8], ecx */
  w32((uint32_t)(EAX*4 + 0x10e829a8), (ECX));
  /* 10e6077f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e60782 mov dword ptr [0x10e829c0], edx */
  w32((uint32_t)(0x10e829c0), (EDX));
  /* 10e60788 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6078a jmp 0x10e607af */
  goto L_10e607af;
L_10e6078c:;
  /* 10e6078c cmp dword ptr [ebp - 0xc], 0x10e813d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10e813d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60793 je 0x10e607a3 */
  if (C.zf) goto L_10e607a3;
  /* 10e60795 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6079a push eax */
  push32((uint32_t)(EAX));
  /* 10e6079b call 0x10e57170 */
  push32(0x10e607a0u); f_10e57170();
  /* 10e607a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e607a3:;
  /* 10e607a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e607a6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e607a9 mov eax, dword ptr [ecx + 0x10e814ec] */
  EAX = (r32((uint32_t)(ECX + 0x10e814ec)));
L_10e607af:;
  /* 10e607af mov esp, ebp */
  ESP = (EBP);
  /* 10e607b1 pop ebp */
  EBP = (pop32());
  /* 10e607b2 ret  */
  ESPCHK(0x10e60620u, _esp0);
  ESP += 4; return;
}

/* FUN_100107c0 @ 0x10e607c0 (256 bytes, 72 insns) */
void f_10e607c0(void) {
  FTRACE(0x10e607c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e607c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e607c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e607c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e607c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e607cd cmp dword ptr [0x10e814ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e814ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e607d4 jne 0x10e607f4 */
  if (!C.zf) goto L_10e607f4;
  /* 10e607d6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10e607db push 0x10e7e380 */
  push32((uint32_t)(0x10e7e380u));
  /* 10e607e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e607e2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10e607e7 call 0x10e566e0 */
  push32(0x10e607ecu); f_10e566e0();
  /* 10e607ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e607ef mov dword ptr [0x10e814ec], eax */
  w32((uint32_t)(0x10e814ec), (EAX));
L_10e607f4:;
  /* 10e607f4 mov eax, dword ptr [0x10e814ec] */
  EAX = (r32((uint32_t)(0x10e814ec)));
  /* 10e607f9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e607fc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e60803 jmp 0x10e6080e */
  goto L_10e6080e;
L_10e60805:;
  /* 10e60805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60808 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6080b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e6080e:;
  /* 10e6080e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60811 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60814 mov eax, dword ptr [edx + 0x10e814ec] */
  EAX = (r32((uint32_t)(EDX + 0x10e814ec)));
  /* 10e6081a push eax */
  push32((uint32_t)(EAX));
  /* 10e6081b push 0x10e7e38c */
  push32((uint32_t)(0x10e7e38cu));
  /* 10e60820 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60823 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60826 mov edx, dword ptr [ecx + 0x10e814e8] */
  EDX = (r32((uint32_t)(ECX + 0x10e814e8)));
  /* 10e6082c push edx */
  push32((uint32_t)(EDX));
  /* 10e6082d push 3 */
  push32((uint32_t)(0x3u));
  /* 10e6082f mov eax, dword ptr [0x10e814ec] */
  EAX = (r32((uint32_t)(0x10e814ec)));
  /* 10e60834 push eax */
  push32((uint32_t)(EAX));
  /* 10e60835 call 0x10e60a60 */
  push32(0x10e6083au); f_10e60a60();
  /* 10e6083a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6083d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60841 jge 0x10e60889 */
  if ((C.sf==C.of)) goto L_10e60889;
  /* 10e60843 push 0x10e7e378 */
  push32((uint32_t)(0x10e7e378u));
  /* 10e60848 mov ecx, dword ptr [0x10e814ec] */
  ECX = (r32((uint32_t)(0x10e814ec)));
  /* 10e6084e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6084f call 0x10e596a0 */
  push32(0x10e60854u); f_10e596a0();
  /* 10e60854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6085a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6085d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60860 mov eax, dword ptr [edx + 0x10e814ec] */
  EAX = (r32((uint32_t)(EDX + 0x10e814ec)));
  /* 10e60866 push eax */
  push32((uint32_t)(EAX));
  /* 10e60867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6086a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6086d mov edx, dword ptr [ecx + 0x10e814ec] */
  EDX = (r32((uint32_t)(ECX + 0x10e814ec)));
  /* 10e60873 push edx */
  push32((uint32_t)(EDX));
  /* 10e60874 call 0x10e62370 */
  push32(0x10e60879u); f_10e62370();
  /* 10e60879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6087c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6087e je 0x10e60887 */
  if (C.zf) goto L_10e60887;
  /* 10e60880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e60887:;
  /* 10e60887 jmp 0x10e608b7 */
  goto L_10e608b7;
L_10e60889:;
  /* 10e60889 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6088d jne 0x10e60896 */
  if (!C.zf) goto L_10e60896;
  /* 10e6088f mov eax, dword ptr [0x10e814ec] */
  EAX = (r32((uint32_t)(0x10e814ec)));
  /* 10e60894 jmp 0x10e608bc */
  goto L_10e608bc;
L_10e60896:;
  /* 10e60896 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60898 mov eax, dword ptr [0x10e814ec] */
  EAX = (r32((uint32_t)(0x10e814ec)));
  /* 10e6089d push eax */
  push32((uint32_t)(EAX));
  /* 10e6089e call 0x10e57170 */
  push32(0x10e608a3u); f_10e57170();
  /* 10e608a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e608a6 mov dword ptr [0x10e814ec], 0 */
  w32((uint32_t)(0x10e814ec), (0x0u));
  /* 10e608b0 mov eax, dword ptr [0x10e81504] */
  EAX = (r32((uint32_t)(0x10e81504)));
  /* 10e608b5 jmp 0x10e608bc */
  goto L_10e608bc;
L_10e608b7:;
  /* 10e608b7 jmp 0x10e60805 */
  goto L_10e60805;
L_10e608bc:;
  /* 10e608bc mov esp, ebp */
  ESP = (EBP);
  /* 10e608be pop ebp */
  EBP = (pop32());
  /* 10e608bf ret  */
  ESPCHK(0x10e607c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108c0 @ 0x10e608c0 (388 bytes, 115 insns) */
void f_10e608c0(void) {
  FTRACE(0x10e608c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e608c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e608c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e608c3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e608c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e608cd jne 0x10e608d6 */
  if (!C.zf) goto L_10e608d6;
  /* 10e608cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e608d1 jmp 0x10e60a40 */
  goto L_10e60a40;
L_10e608d6:;
  /* 10e608d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e608d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e608dc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e608df jne 0x10e60930 */
  if (!C.zf) goto L_10e60930;
  /* 10e608e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e608e4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e608e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e608ea jne 0x10e60930 */
  if (!C.zf) goto L_10e60930;
  /* 10e608ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e608ef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10e608f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e608f5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10e608f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e608fd je 0x10e60919 */
  if (C.zf) goto L_10e60919;
  /* 10e608ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e60902 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10e60907 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6090a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10e60910 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e60913 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10e60919:;
  /* 10e60919 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6091d je 0x10e60928 */
  if (C.zf) goto L_10e60928;
  /* 10e6091f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e60922 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e60928:;
  /* 10e60928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6092b jmp 0x10e60a40 */
  goto L_10e60a40;
L_10e60930:;
  /* 10e60930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60933 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60934 push 0x10e81460 */
  push32((uint32_t)(0x10e81460u));
  /* 10e60939 call 0x10e62370 */
  push32(0x10e6093eu); f_10e62370();
  /* 10e6093e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60943 je 0x10e609f8 */
  if (C.zf) goto L_10e609f8;
  /* 10e60949 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6094c push edx */
  push32((uint32_t)(EDX));
  /* 10e6094d push 0x10e813dc */
  push32((uint32_t)(0x10e813dcu));
  /* 10e60952 call 0x10e62370 */
  push32(0x10e60957u); f_10e62370();
  /* 10e60957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6095a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6095c je 0x10e609f8 */
  if (C.zf) goto L_10e609f8;
  /* 10e60962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60965 push eax */
  push32((uint32_t)(EAX));
  /* 10e60966 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10e6096c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6096d call 0x10e60ab0 */
  push32(0x10e60972u); f_10e60ab0();
  /* 10e60972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60977 je 0x10e60980 */
  if (C.zf) goto L_10e60980;
  /* 10e60979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6097b jmp 0x10e60a40 */
  goto L_10e60a40;
L_10e60980:;
  /* 10e60980 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10e60986 push edx */
  push32((uint32_t)(EDX));
  /* 10e60987 push 0x10e829d0 */
  push32((uint32_t)(0x10e829d0u));
  /* 10e6098c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10e60992 push eax */
  push32((uint32_t)(EAX));
  /* 10e60993 call 0x10e624c0 */
  push32(0x10e60998u); f_10e624c0();
  /* 10e60998 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6099b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6099d jne 0x10e609a6 */
  if (!C.zf) goto L_10e609a6;
  /* 10e6099f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e609a1 jmp 0x10e60a40 */
  goto L_10e60a40;
L_10e609a6:;
  /* 10e609a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e609a8 mov cx, word ptr [0x10e829d4] */
  CX = (r16((uint32_t)(0x10e829d4)));
  /* 10e609af mov dword ptr [0x10e829d8], ecx */
  w32((uint32_t)(0x10e829d8), (ECX));
  /* 10e609b5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10e609bb push edx */
  push32((uint32_t)(EDX));
  /* 10e609bc push 0x10e81460 */
  push32((uint32_t)(0x10e81460u));
  /* 10e609c1 call 0x10e60c10 */
  push32(0x10e609c6u); f_10e60c10();
  /* 10e609c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e609c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e609cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e609cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e609d1 je 0x10e609e6 */
  if (C.zf) goto L_10e609e6;
  /* 10e609d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e609d6 push edx */
  push32((uint32_t)(EDX));
  /* 10e609d7 push 0x10e813dc */
  push32((uint32_t)(0x10e813dcu));
  /* 10e609dc call 0x10e59690 */
  push32(0x10e609e1u); f_10e59690();
  /* 10e609e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e609e4 jmp 0x10e609f8 */
  goto L_10e609f8;
L_10e609e6:;
  /* 10e609e6 push 0x10e81460 */
  push32((uint32_t)(0x10e81460u));
  /* 10e609eb push 0x10e813dc */
  push32((uint32_t)(0x10e813dcu));
  /* 10e609f0 call 0x10e59690 */
  push32(0x10e609f5u); f_10e59690();
  /* 10e609f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e609f8:;
  /* 10e609f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e609fc je 0x10e60a11 */
  if (C.zf) goto L_10e60a11;
  /* 10e609fe push 6 */
  push32((uint32_t)(0x6u));
  /* 10e60a00 push 0x10e829d0 */
  push32((uint32_t)(0x10e829d0u));
  /* 10e60a05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e60a08 push eax */
  push32((uint32_t)(EAX));
  /* 10e60a09 call 0x10e5cfc0 */
  push32(0x10e60a0eu); f_10e5cfc0();
  /* 10e60a0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e60a11:;
  /* 10e60a11 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60a15 je 0x10e60a2a */
  if (C.zf) goto L_10e60a2a;
  /* 10e60a17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e60a19 push 0x10e829d8 */
  push32((uint32_t)(0x10e829d8u));
  /* 10e60a1e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e60a21 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60a22 call 0x10e5cfc0 */
  push32(0x10e60a27u); f_10e5cfc0();
  /* 10e60a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e60a2a:;
  /* 10e60a2a push 0x10e81460 */
  push32((uint32_t)(0x10e81460u));
  /* 10e60a2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60a32 push edx */
  push32((uint32_t)(EDX));
  /* 10e60a33 call 0x10e59690 */
  push32(0x10e60a38u); f_10e59690();
  /* 10e60a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60a3b mov eax, 0x10e81460 */
  EAX = (0x10e81460u);
L_10e60a40:;
  /* 10e60a40 mov esp, ebp */
  ESP = (EBP);
  /* 10e60a42 pop ebp */
  EBP = (pop32());
  /* 10e60a43 ret  */
  ESPCHK(0x10e608c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x10e60a50 (7 bytes, 5 insns) */
void f_10e60a50(void) {
  FTRACE(0x10e60a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60a51 mov ebp, esp */
  EBP = (ESP);
  /* 10e60a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60a55 pop ebp */
  EBP = (pop32());
  /* 10e60a56 ret  */
  ESPCHK(0x10e60a50u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10e60a60 (79 bytes, 28 insns) */
void f_10e60a60(void) {
  FTRACE(0x10e60a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60a61 mov ebp, esp */
  EBP = (ESP);
  /* 10e60a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60a66 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10e60a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60a6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e60a73 jmp 0x10e60a7e */
  goto L_10e60a7e;
L_10e60a75:;
  /* 10e60a75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60a78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60a7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e60a7e:;
  /* 10e60a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60a81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60a84 jge 0x10e60aa4 */
  if ((C.sf==C.of)) goto L_10e60aa4;
  /* 10e60a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60a89 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60a8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60a92 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e60a95 push edx */
  push32((uint32_t)(EDX));
  /* 10e60a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60a99 push eax */
  push32((uint32_t)(EAX));
  /* 10e60a9a call 0x10e596a0 */
  push32(0x10e60a9fu); f_10e596a0();
  /* 10e60a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60aa2 jmp 0x10e60a75 */
  goto L_10e60a75;
L_10e60aa4:;
  /* 10e60aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e60aab mov esp, ebp */
  ESP = (EBP);
  /* 10e60aad pop ebp */
  EBP = (pop32());
  /* 10e60aae ret  */
  ESPCHK(0x10e60a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ab0 @ 0x10e60ab0 (349 bytes, 122 insns) */
void f_10e60ab0(void) {
  FTRACE(0x10e60ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10e60ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60ab6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10e60abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e60abd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60ac0 push eax */
  push32((uint32_t)(EAX));
  /* 10e60ac1 call 0x10e5a450 */
  push32(0x10e60ac6u); f_10e5a450();
  /* 10e60ac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60acc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e60acf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e60ad1 jne 0x10e60ada */
  if (!C.zf) goto L_10e60ada;
  /* 10e60ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60ad5 jmp 0x10e60c09 */
  goto L_10e60c09;
L_10e60ada:;
  /* 10e60ada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60add movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e60ae0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60ae3 jne 0x10e60b10 */
  if (!C.zf) goto L_10e60b10;
  /* 10e60ae5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60ae8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e60aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60aee je 0x10e60b10 */
  if (C.zf) goto L_10e60b10;
  /* 10e60af0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60af3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60af6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60afa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b00 push edx */
  push32((uint32_t)(EDX));
  /* 10e60b01 call 0x10e59690 */
  push32(0x10e60b06u); f_10e59690();
  /* 10e60b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60b0b jmp 0x10e60c09 */
  goto L_10e60c09;
L_10e60b10:;
  /* 10e60b10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e60b17 jmp 0x10e60b22 */
  goto L_10e60b22;
L_10e60b19:;
  /* 10e60b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e60b22:;
  /* 10e60b22 push 0x10e7e390 */
  push32((uint32_t)(0x10e7e390u));
  /* 10e60b27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60b2a push ecx */
  push32((uint32_t)(ECX));
  /* 10e60b2b call 0x10e62400 */
  push32(0x10e60b30u); f_10e62400();
  /* 10e60b30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e60b36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b3a jne 0x10e60b44 */
  if (!C.zf) goto L_10e60b44;
  /* 10e60b3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e60b3f jmp 0x10e60c09 */
  goto L_10e60c09;
L_10e60b44:;
  /* 10e60b44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60b47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e60b4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10e60b4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b53 jne 0x10e60b7a */
  if (!C.zf) goto L_10e60b7a;
  /* 10e60b55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b59 jge 0x10e60b7a */
  if ((C.sf==C.of)) goto L_10e60b7a;
  /* 10e60b5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e60b5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b62 je 0x10e60b7a */
  if (C.zf) goto L_10e60b7a;
  /* 10e60b64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60b67 push edx */
  push32((uint32_t)(EDX));
  /* 10e60b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60b6b push eax */
  push32((uint32_t)(EAX));
  /* 10e60b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60b6f push ecx */
  push32((uint32_t)(ECX));
  /* 10e60b70 call 0x10e59f00 */
  push32(0x10e60b75u); f_10e59f00();
  /* 10e60b75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b78 jmp 0x10e60be0 */
  goto L_10e60be0;
L_10e60b7a:;
  /* 10e60b7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b7e jne 0x10e60ba8 */
  if (!C.zf) goto L_10e60ba8;
  /* 10e60b80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b84 jge 0x10e60ba8 */
  if ((C.sf==C.of)) goto L_10e60ba8;
  /* 10e60b86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e60b8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60b8d je 0x10e60ba8 */
  if (C.zf) goto L_10e60ba8;
  /* 10e60b8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60b92 push eax */
  push32((uint32_t)(EAX));
  /* 10e60b93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60b96 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60b9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60b9d push edx */
  push32((uint32_t)(EDX));
  /* 10e60b9e call 0x10e59f00 */
  push32(0x10e60ba3u); f_10e59f00();
  /* 10e60ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60ba6 jmp 0x10e60be0 */
  goto L_10e60be0;
L_10e60ba8:;
  /* 10e60ba8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60bac jne 0x10e60bdb */
  if (!C.zf) goto L_10e60bdb;
  /* 10e60bae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e60bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60bb4 je 0x10e60bbf */
  if (C.zf) goto L_10e60bbf;
  /* 10e60bb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e60bba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60bbd jne 0x10e60bdb */
  if (!C.zf) goto L_10e60bdb;
L_10e60bbf:;
  /* 10e60bbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60bc2 push edx */
  push32((uint32_t)(EDX));
  /* 10e60bc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60bc6 push eax */
  push32((uint32_t)(EAX));
  /* 10e60bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60bca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60bd1 call 0x10e59f00 */
  push32(0x10e60bd6u); f_10e59f00();
  /* 10e60bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60bd9 jmp 0x10e60be0 */
  goto L_10e60be0;
L_10e60bdb:;
  /* 10e60bdb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e60bde jmp 0x10e60c09 */
  goto L_10e60c09;
L_10e60be0:;
  /* 10e60be0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e60be4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60be7 jne 0x10e60beb */
  if (!C.zf) goto L_10e60beb;
  /* 10e60be9 jmp 0x10e60c07 */
  goto L_10e60c07;
L_10e60beb:;
  /* 10e60beb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e60bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60bf1 jne 0x10e60bf5 */
  if (!C.zf) goto L_10e60bf5;
  /* 10e60bf3 jmp 0x10e60c07 */
  goto L_10e60c07;
L_10e60bf5:;
  /* 10e60bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60bf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60bfb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10e60bff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e60c02 jmp 0x10e60b19 */
  goto L_10e60b19;
L_10e60c07:;
  /* 10e60c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e60c09:;
  /* 10e60c09 mov esp, ebp */
  ESP = (EBP);
  /* 10e60c0b pop ebp */
  EBP = (pop32());
  /* 10e60c0c ret  */
  ESPCHK(0x10e60ab0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10e60c10 (101 bytes, 36 insns) */
void f_10e60c10(void) {
  FTRACE(0x10e60c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60c11 mov ebp, esp */
  EBP = (ESP);
  /* 10e60c13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60c16 push eax */
  push32((uint32_t)(EAX));
  /* 10e60c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60c1a push ecx */
  push32((uint32_t)(ECX));
  /* 10e60c1b call 0x10e59690 */
  push32(0x10e60c20u); f_10e59690();
  /* 10e60c20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60c23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60c26 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10e60c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60c2c je 0x10e60c48 */
  if (C.zf) goto L_10e60c48;
  /* 10e60c2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60c31 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60c35 push 0x10e7e398 */
  push32((uint32_t)(0x10e7e398u));
  /* 10e60c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60c3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60c3f push edx */
  push32((uint32_t)(EDX));
  /* 10e60c40 call 0x10e60a60 */
  push32(0x10e60c45u); f_10e60a60();
  /* 10e60c45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e60c48:;
  /* 10e60c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60c4b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10e60c52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e60c54 je 0x10e60c73 */
  if (C.zf) goto L_10e60c73;
  /* 10e60c56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e60c59 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60c5f push edx */
  push32((uint32_t)(EDX));
  /* 10e60c60 push 0x10e7e394 */
  push32((uint32_t)(0x10e7e394u));
  /* 10e60c65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60c6a push eax */
  push32((uint32_t)(EAX));
  /* 10e60c6b call 0x10e60a60 */
  push32(0x10e60c70u); f_10e60a60();
  /* 10e60c70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e60c73:;
  /* 10e60c73 pop ebp */
  EBP = (pop32());
  /* 10e60c74 ret  */
  ESPCHK(0x10e60c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c80 @ 0x10e60c80 (130 bytes, 50 insns) */
void f_10e60c80(void) {
  FTRACE(0x10e60c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60c81 mov ebp, esp */
  EBP = (ESP);
  /* 10e60c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60c84 push ebx */
  push32((uint32_t)(EBX));
  /* 10e60c85 push esi */
  push32((uint32_t)(ESI));
  /* 10e60c86 push edi */
  push32((uint32_t)(EDI));
  /* 10e60c87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e60c8e:;
  /* 10e60c8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60c92 jne 0x10e60cb2 */
  if (!C.zf) goto L_10e60cb2;
  /* 10e60c94 push 0x10e7e3a8 */
  push32((uint32_t)(0x10e7e3a8u));
  /* 10e60c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e60c9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10e60c9d push 0x10e7e39c */
  push32((uint32_t)(0x10e7e39cu));
  /* 10e60ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60ca4 call 0x10e557a0 */
  push32(0x10e60ca9u); f_10e557a0();
  /* 10e60ca9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60cac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60caf jne 0x10e60cb2 */
  if (!C.zf) goto L_10e60cb2;
  /* 10e60cb1 int3  */
  x86_unimpl("int3 @ 0x10e60cb1");
L_10e60cb2:;
  /* 10e60cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60cb6 jne 0x10e60c8e */
  if (!C.zf) goto L_10e60c8e;
  /* 10e60cb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60cbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e60cbe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10e60cc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e60cc3 je 0x10e60cd1 */
  if (C.zf) goto L_10e60cd1;
  /* 10e60cc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60cc8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10e60ccf jmp 0x10e60cf8 */
  goto L_10e60cf8;
L_10e60cd1:;
  /* 10e60cd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60cd5 call 0x10e5f4f0 */
  push32(0x10e60cdau); f_10e5f4f0();
  /* 10e60cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60ce0 push edx */
  push32((uint32_t)(EDX));
  /* 10e60ce1 call 0x10e60d10 */
  push32(0x10e60ce6u); f_10e60d10();
  /* 10e60ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60cef push eax */
  push32((uint32_t)(EAX));
  /* 10e60cf0 call 0x10e5f560 */
  push32(0x10e60cf5u); f_10e5f560();
  /* 10e60cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e60cf8:;
  /* 10e60cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60cfb pop edi */
  EDI = (pop32());
  /* 10e60cfc pop esi */
  ESI = (pop32());
  /* 10e60cfd pop ebx */
  EBX = (pop32());
  /* 10e60cfe mov esp, ebp */
  ESP = (EBP);
  /* 10e60d00 pop ebp */
  EBP = (pop32());
  /* 10e60d01 ret  */
  ESPCHK(0x10e60c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x10e60d10 (190 bytes, 67 insns) */
void f_10e60d10(void) {
  FTRACE(0x10e60d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60d11 mov ebp, esp */
  EBP = (ESP);
  /* 10e60d13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60d16 push ebx */
  push32((uint32_t)(EBX));
  /* 10e60d17 push esi */
  push32((uint32_t)(ESI));
  /* 10e60d18 push edi */
  push32((uint32_t)(EDI));
  /* 10e60d19 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e60d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60d23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e60d26:;
  /* 10e60d26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60d2a jne 0x10e60d4a */
  if (!C.zf) goto L_10e60d4a;
  /* 10e60d2c push 0x10e7e24c */
  push32((uint32_t)(0x10e7e24cu));
  /* 10e60d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e60d33 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10e60d35 push 0x10e7e39c */
  push32((uint32_t)(0x10e7e39cu));
  /* 10e60d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60d3c call 0x10e557a0 */
  push32(0x10e60d41u); f_10e557a0();
  /* 10e60d41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60d44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60d47 jne 0x10e60d4a */
  if (!C.zf) goto L_10e60d4a;
  /* 10e60d49 int3  */
  x86_unimpl("int3 @ 0x10e60d49");
L_10e60d4a:;
  /* 10e60d4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e60d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e60d4e jne 0x10e60d26 */
  if (!C.zf) goto L_10e60d26;
  /* 10e60d50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60d53 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e60d56 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10e60d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60d5d je 0x10e60dba */
  if (C.zf) goto L_10e60dba;
  /* 10e60d5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60d62 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60d63 call 0x10e60010 */
  push32(0x10e60d68u); f_10e60010();
  /* 10e60d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60d6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60d6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60d71 push edx */
  push32((uint32_t)(EDX));
  /* 10e60d72 call 0x10e63390 */
  push32(0x10e60d77u); f_10e63390();
  /* 10e60d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60d7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60d7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e60d80 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60d81 call 0x10e63260 */
  push32(0x10e60d86u); f_10e63260();
  /* 10e60d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60d8b jge 0x10e60d96 */
  if ((C.sf==C.of)) goto L_10e60d96;
  /* 10e60d8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e60d94 jmp 0x10e60dba */
  goto L_10e60dba;
L_10e60d96:;
  /* 10e60d96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60d99 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60d9d je 0x10e60dba */
  if (C.zf) goto L_10e60dba;
  /* 10e60d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60da1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60da4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e60da7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60da8 call 0x10e57170 */
  push32(0x10e60dadu); f_10e57170();
  /* 10e60dad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60db0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60db3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10e60dba:;
  /* 10e60dba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e60dbd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10e60dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60dc7 pop edi */
  EDI = (pop32());
  /* 10e60dc8 pop esi */
  ESI = (pop32());
  /* 10e60dc9 pop ebx */
  EBX = (pop32());
  /* 10e60dca mov esp, ebp */
  ESP = (EBP);
  /* 10e60dcc pop ebp */
  EBP = (pop32());
  /* 10e60dcd ret  */
  ESPCHK(0x10e60d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x10e60dd0 (210 bytes, 63 insns) */
void f_10e60dd0(void) {
  FTRACE(0x10e60dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e60dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60dd7 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60ddd jae 0x10e60e01 */
  if (!C.cf) goto L_10e60e01;
  /* 10e60ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60de2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e60de5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60de8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e60deb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60dee mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e60df5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e60dfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e60dfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e60dff jne 0x10e60e14 */
  if (!C.zf) goto L_10e60e14;
L_10e60e01:;
  /* 10e60e01 call 0x10e5e5b0 */
  push32(0x10e60e06u); f_10e5e5b0();
  /* 10e60e06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e60e0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e60e0f jmp 0x10e60e9e */
  goto L_10e60e9e;
L_10e60e14:;
  /* 10e60e14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60e17 push edx */
  push32((uint32_t)(EDX));
  /* 10e60e18 call 0x10e5fdd0 */
  push32(0x10e60e1du); f_10e5fdd0();
  /* 10e60e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60e23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e60e26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60e29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e60e2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e60e2f mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e60e36 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10e60e3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e60e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60e40 je 0x10e60e7d */
  if (C.zf) goto L_10e60e7d;
  /* 10e60e42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60e45 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60e46 call 0x10e5fc50 */
  push32(0x10e60e4bu); f_10e5fc50();
  /* 10e60e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60e4e push eax */
  push32((uint32_t)(EAX));
  /* 10e60e4f call dword ptr [0x10e85324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85324))), 0x10e60e55u);
  /* 10e60e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60e57 jne 0x10e60e64 */
  if (!C.zf) goto L_10e60e64;
  /* 10e60e59 call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e60e5fu);
  /* 10e60e5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60e62 jmp 0x10e60e6b */
  goto L_10e60e6b;
L_10e60e64:;
  /* 10e60e64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e60e6b:;
  /* 10e60e6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60e6f jne 0x10e60e73 */
  if (!C.zf) goto L_10e60e73;
  /* 10e60e71 jmp 0x10e60e8f */
  goto L_10e60e8f;
L_10e60e73:;
  /* 10e60e73 call 0x10e5e5c0 */
  push32(0x10e60e78u); f_10e5e5c0();
  /* 10e60e78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60e7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e60e7d:;
  /* 10e60e7d call 0x10e5e5b0 */
  push32(0x10e60e82u); f_10e5e5b0();
  /* 10e60e82 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e60e88 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e60e8f:;
  /* 10e60e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60e92 push eax */
  push32((uint32_t)(EAX));
  /* 10e60e93 call 0x10e5fe60 */
  push32(0x10e60e98u); f_10e5fe60();
  /* 10e60e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e60e9e:;
  /* 10e60e9e mov esp, ebp */
  ESP = (EBP);
  /* 10e60ea0 pop ebp */
  EBP = (pop32());
  /* 10e60ea1 ret  */
  ESPCHK(0x10e60dd0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10e60eb0 (219 bytes, 64 insns) */
void f_10e60eb0(void) {
  FTRACE(0x10e60eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e60eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60eb4 cmp dword ptr [0x10e829bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60ebb je 0x10e60f51 */
  if (C.zf) goto L_10e60f51;
  /* 10e60ec1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10e60ec3 push 0x10e7e3b8 */
  push32((uint32_t)(0x10e7e3b8u));
  /* 10e60ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60eca push 0xac */
  push32((uint32_t)(0xacu));
  /* 10e60ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 10e60ed1 call 0x10e56af0 */
  push32(0x10e60ed6u); f_10e56af0();
  /* 10e60ed6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60edc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60ee0 jne 0x10e60eec */
  if (!C.zf) goto L_10e60eec;
  /* 10e60ee2 mov eax, 1 */
  EAX = (0x1u);
  /* 10e60ee7 jmp 0x10e60f87 */
  goto L_10e60f87;
L_10e60eec:;
  /* 10e60eec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60eef push eax */
  push32((uint32_t)(EAX));
  /* 10e60ef0 call 0x10e60f90 */
  push32(0x10e60ef5u); f_10e60f90();
  /* 10e60ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e60efa je 0x10e60f1d */
  if (C.zf) goto L_10e60f1d;
  /* 10e60efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60eff push ecx */
  push32((uint32_t)(ECX));
  /* 10e60f00 call 0x10e61520 */
  push32(0x10e60f05u); f_10e61520();
  /* 10e60f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60f0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60f0d push edx */
  push32((uint32_t)(EDX));
  /* 10e60f0e call 0x10e57170 */
  push32(0x10e60f13u); f_10e57170();
  /* 10e60f13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60f16 mov eax, 1 */
  EAX = (0x1u);
  /* 10e60f1b jmp 0x10e60f87 */
  goto L_10e60f87;
L_10e60f1d:;
  /* 10e60f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60f20 mov dword ptr [0x10e81ca8], eax */
  w32((uint32_t)(0x10e81ca8), (EAX));
  /* 10e60f25 mov ecx, dword ptr [0x10e829dc] */
  ECX = (r32((uint32_t)(0x10e829dc)));
  /* 10e60f2b push ecx */
  push32((uint32_t)(ECX));
  /* 10e60f2c call 0x10e61520 */
  push32(0x10e60f31u); f_10e61520();
  /* 10e60f31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60f34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60f36 mov edx, dword ptr [0x10e829dc] */
  EDX = (r32((uint32_t)(0x10e829dc)));
  /* 10e60f3c push edx */
  push32((uint32_t)(EDX));
  /* 10e60f3d call 0x10e57170 */
  push32(0x10e60f42u); f_10e57170();
  /* 10e60f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60f48 mov dword ptr [0x10e829dc], eax */
  w32((uint32_t)(0x10e829dc), (EAX));
  /* 10e60f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60f4f jmp 0x10e60f87 */
  goto L_10e60f87;
L_10e60f51:;
  /* 10e60f51 mov dword ptr [0x10e81ca8], 0x10e81cb0 */
  w32((uint32_t)(0x10e81ca8), (0x10e81cb0u));
  /* 10e60f5b mov ecx, dword ptr [0x10e829dc] */
  ECX = (r32((uint32_t)(0x10e829dc)));
  /* 10e60f61 push ecx */
  push32((uint32_t)(ECX));
  /* 10e60f62 call 0x10e61520 */
  push32(0x10e60f67u); f_10e61520();
  /* 10e60f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60f6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e60f6c mov edx, dword ptr [0x10e829dc] */
  EDX = (r32((uint32_t)(0x10e829dc)));
  /* 10e60f72 push edx */
  push32((uint32_t)(EDX));
  /* 10e60f73 call 0x10e57170 */
  push32(0x10e60f78u); f_10e57170();
  /* 10e60f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60f7b mov dword ptr [0x10e829dc], 0 */
  w32((uint32_t)(0x10e829dc), (0x0u));
  /* 10e60f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e60f87:;
  /* 10e60f87 mov esp, ebp */
  ESP = (EBP);
  /* 10e60f89 pop ebp */
  EBP = (pop32());
  /* 10e60f8a ret  */
  ESPCHK(0x10e60eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x10e60f90 (1423 bytes, 533 insns) */
void f_10e60f90(void) {
  FTRACE(0x10e60f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e60f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e60f91 mov ebp, esp */
  EBP = (ESP);
  /* 10e60f93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e60f96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e60f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e60f9f mov ax, word ptr [0x10e82a16] */
  AX = (r16((uint32_t)(0x10e82a16)));
  /* 10e60fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e60fa8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e60faa mov cx, word ptr [0x10e82a18] */
  CX = (r16((uint32_t)(0x10e82a18)));
  /* 10e60fb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e60fb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e60fb8 jne 0x10e60fc2 */
  if (!C.zf) goto L_10e60fc2;
  /* 10e60fba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e60fbd jmp 0x10e6151b */
  goto L_10e6151b;
L_10e60fc2:;
  /* 10e60fc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60fc5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60fc8 push edx */
  push32((uint32_t)(EDX));
  /* 10e60fc9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10e60fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60fce push eax */
  push32((uint32_t)(EAX));
  /* 10e60fcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10e60fd1 call 0x10e648a0 */
  push32(0x10e60fd6u); f_10e648a0();
  /* 10e60fd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60fd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60fdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e60fde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e60fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e60fe4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10e60fe8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10e60fea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e60fed push eax */
  push32((uint32_t)(EAX));
  /* 10e60fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e60ff0 call 0x10e648a0 */
  push32(0x10e60ff5u); f_10e648a0();
  /* 10e60ff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e60ff8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e60ffb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e60ffd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61003 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61006 push edx */
  push32((uint32_t)(EDX));
  /* 10e61007 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10e61009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6100c push eax */
  push32((uint32_t)(EAX));
  /* 10e6100d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6100f call 0x10e648a0 */
  push32(0x10e61014u); f_10e648a0();
  /* 10e61014 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61017 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6101a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6101c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6101f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61022 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61025 push edx */
  push32((uint32_t)(EDX));
  /* 10e61026 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10e61028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6102b push eax */
  push32((uint32_t)(EAX));
  /* 10e6102c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6102e call 0x10e648a0 */
  push32(0x10e61033u); f_10e648a0();
  /* 10e61033 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61039 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6103b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6103e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61041 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61044 push edx */
  push32((uint32_t)(EDX));
  /* 10e61045 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10e61047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6104a push eax */
  push32((uint32_t)(EAX));
  /* 10e6104b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6104d call 0x10e648a0 */
  push32(0x10e61052u); f_10e648a0();
  /* 10e61052 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61058 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6105a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6105d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61060 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61063 push edx */
  push32((uint32_t)(EDX));
  /* 10e61064 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10e61066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61069 push eax */
  push32((uint32_t)(EAX));
  /* 10e6106a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6106c call 0x10e648a0 */
  push32(0x10e61071u); f_10e648a0();
  /* 10e61071 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61074 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61077 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61079 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6107c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6107f push edx */
  push32((uint32_t)(EDX));
  /* 10e61080 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10e61082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61085 push eax */
  push32((uint32_t)(EAX));
  /* 10e61086 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61088 call 0x10e648a0 */
  push32(0x10e6108du); f_10e648a0();
  /* 10e6108d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61093 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61095 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61098 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6109b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6109e push edx */
  push32((uint32_t)(EDX));
  /* 10e6109f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10e610a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e610a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e610a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e610a7 call 0x10e648a0 */
  push32(0x10e610acu); f_10e648a0();
  /* 10e610ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e610af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e610b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e610b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e610b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e610ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e610bd push edx */
  push32((uint32_t)(EDX));
  /* 10e610be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10e610c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e610c3 push eax */
  push32((uint32_t)(EAX));
  /* 10e610c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e610c6 call 0x10e648a0 */
  push32(0x10e610cbu); f_10e648a0();
  /* 10e610cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e610ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e610d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e610d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e610d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e610d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e610dc push edx */
  push32((uint32_t)(EDX));
  /* 10e610dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10e610df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e610e2 push eax */
  push32((uint32_t)(EAX));
  /* 10e610e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e610e5 call 0x10e648a0 */
  push32(0x10e610eau); f_10e648a0();
  /* 10e610ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e610ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e610f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e610f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e610f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e610f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e610fb push edx */
  push32((uint32_t)(EDX));
  /* 10e610fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10e610fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61101 push eax */
  push32((uint32_t)(EAX));
  /* 10e61102 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61104 call 0x10e648a0 */
  push32(0x10e61109u); f_10e648a0();
  /* 10e61109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6110c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6110f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61111 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61117 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6111a push edx */
  push32((uint32_t)(EDX));
  /* 10e6111b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10e6111d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61120 push eax */
  push32((uint32_t)(EAX));
  /* 10e61121 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61123 call 0x10e648a0 */
  push32(0x10e61128u); f_10e648a0();
  /* 10e61128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6112b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6112e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61130 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61136 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61139 push edx */
  push32((uint32_t)(EDX));
  /* 10e6113a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10e6113c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6113f push eax */
  push32((uint32_t)(EAX));
  /* 10e61140 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61142 call 0x10e648a0 */
  push32(0x10e61147u); f_10e648a0();
  /* 10e61147 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6114a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6114d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6114f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61152 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61155 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61158 push edx */
  push32((uint32_t)(EDX));
  /* 10e61159 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e6115b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6115e push eax */
  push32((uint32_t)(EAX));
  /* 10e6115f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61161 call 0x10e648a0 */
  push32(0x10e61166u); f_10e648a0();
  /* 10e61166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61169 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6116c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6116e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61174 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61177 push edx */
  push32((uint32_t)(EDX));
  /* 10e61178 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e6117a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6117d push eax */
  push32((uint32_t)(EAX));
  /* 10e6117e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61180 call 0x10e648a0 */
  push32(0x10e61185u); f_10e648a0();
  /* 10e61185 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61188 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6118b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6118d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61193 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61196 push edx */
  push32((uint32_t)(EDX));
  /* 10e61197 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10e61199 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6119c push eax */
  push32((uint32_t)(EAX));
  /* 10e6119d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6119f call 0x10e648a0 */
  push32(0x10e611a4u); f_10e648a0();
  /* 10e611a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e611a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e611aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e611ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e611af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e611b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e611b5 push edx */
  push32((uint32_t)(EDX));
  /* 10e611b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10e611b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e611bb push eax */
  push32((uint32_t)(EAX));
  /* 10e611bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10e611be call 0x10e648a0 */
  push32(0x10e611c3u); f_10e648a0();
  /* 10e611c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e611c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e611c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e611cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e611ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e611d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e611d4 push edx */
  push32((uint32_t)(EDX));
  /* 10e611d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10e611d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e611da push eax */
  push32((uint32_t)(EAX));
  /* 10e611db push 1 */
  push32((uint32_t)(0x1u));
  /* 10e611dd call 0x10e648a0 */
  push32(0x10e611e2u); f_10e648a0();
  /* 10e611e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e611e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e611e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e611ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e611ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e611f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e611f3 push edx */
  push32((uint32_t)(EDX));
  /* 10e611f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10e611f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e611f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e611fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10e611fc call 0x10e648a0 */
  push32(0x10e61201u); f_10e648a0();
  /* 10e61201 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61204 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61207 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61209 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6120c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6120f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61212 push edx */
  push32((uint32_t)(EDX));
  /* 10e61213 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10e61215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61218 push eax */
  push32((uint32_t)(EAX));
  /* 10e61219 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6121b call 0x10e648a0 */
  push32(0x10e61220u); f_10e648a0();
  /* 10e61220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6122b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6122e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61231 push edx */
  push32((uint32_t)(EDX));
  /* 10e61232 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10e61234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61237 push eax */
  push32((uint32_t)(EAX));
  /* 10e61238 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6123a call 0x10e648a0 */
  push32(0x10e6123fu); f_10e648a0();
  /* 10e6123f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61242 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61245 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61247 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6124a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6124d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61250 push edx */
  push32((uint32_t)(EDX));
  /* 10e61251 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10e61253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61256 push eax */
  push32((uint32_t)(EAX));
  /* 10e61257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61259 call 0x10e648a0 */
  push32(0x10e6125eu); f_10e648a0();
  /* 10e6125e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61261 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61264 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61266 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6126c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6126f push edx */
  push32((uint32_t)(EDX));
  /* 10e61270 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10e61272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61275 push eax */
  push32((uint32_t)(EAX));
  /* 10e61276 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61278 call 0x10e648a0 */
  push32(0x10e6127du); f_10e648a0();
  /* 10e6127d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6128b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6128e push edx */
  push32((uint32_t)(EDX));
  /* 10e6128f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10e61291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61294 push eax */
  push32((uint32_t)(EAX));
  /* 10e61295 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61297 call 0x10e648a0 */
  push32(0x10e6129cu); f_10e648a0();
  /* 10e6129c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6129f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e612a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e612a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e612a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e612aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e612ad push edx */
  push32((uint32_t)(EDX));
  /* 10e612ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10e612b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e612b3 push eax */
  push32((uint32_t)(EAX));
  /* 10e612b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e612b6 call 0x10e648a0 */
  push32(0x10e612bbu); f_10e648a0();
  /* 10e612bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e612be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e612c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e612c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e612c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e612c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e612cc push edx */
  push32((uint32_t)(EDX));
  /* 10e612cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10e612cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e612d2 push eax */
  push32((uint32_t)(EAX));
  /* 10e612d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e612d5 call 0x10e648a0 */
  push32(0x10e612dau); f_10e648a0();
  /* 10e612da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e612dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e612e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e612e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e612e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e612e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e612eb push edx */
  push32((uint32_t)(EDX));
  /* 10e612ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10e612ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e612f1 push eax */
  push32((uint32_t)(EAX));
  /* 10e612f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e612f4 call 0x10e648a0 */
  push32(0x10e612f9u); f_10e648a0();
  /* 10e612f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e612fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e612ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61301 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61307 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6130a push edx */
  push32((uint32_t)(EDX));
  /* 10e6130b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10e6130d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61310 push eax */
  push32((uint32_t)(EAX));
  /* 10e61311 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61313 call 0x10e648a0 */
  push32(0x10e61318u); f_10e648a0();
  /* 10e61318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6131b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6131e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61320 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61326 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61329 push edx */
  push32((uint32_t)(EDX));
  /* 10e6132a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10e6132c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6132f push eax */
  push32((uint32_t)(EAX));
  /* 10e61330 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61332 call 0x10e648a0 */
  push32(0x10e61337u); f_10e648a0();
  /* 10e61337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6133a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6133d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6133f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61345 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61348 push edx */
  push32((uint32_t)(EDX));
  /* 10e61349 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10e6134b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6134e push eax */
  push32((uint32_t)(EAX));
  /* 10e6134f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61351 call 0x10e648a0 */
  push32(0x10e61356u); f_10e648a0();
  /* 10e61356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61359 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6135c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6135e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61364 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61367 push edx */
  push32((uint32_t)(EDX));
  /* 10e61368 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10e6136a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6136d push eax */
  push32((uint32_t)(EAX));
  /* 10e6136e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61370 call 0x10e648a0 */
  push32(0x10e61375u); f_10e648a0();
  /* 10e61375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61378 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6137b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6137d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61383 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61386 push edx */
  push32((uint32_t)(EDX));
  /* 10e61387 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e61389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6138c push eax */
  push32((uint32_t)(EAX));
  /* 10e6138d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6138f call 0x10e648a0 */
  push32(0x10e61394u); f_10e648a0();
  /* 10e61394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6139a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6139c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6139f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e613a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e613a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e613a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10e613ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e613ae push eax */
  push32((uint32_t)(EAX));
  /* 10e613af push 1 */
  push32((uint32_t)(0x1u));
  /* 10e613b1 call 0x10e648a0 */
  push32(0x10e613b6u); f_10e648a0();
  /* 10e613b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e613b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e613bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e613be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e613c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e613c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e613ca push edx */
  push32((uint32_t)(EDX));
  /* 10e613cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e613cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e613d0 push eax */
  push32((uint32_t)(EAX));
  /* 10e613d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e613d3 call 0x10e648a0 */
  push32(0x10e613d8u); f_10e648a0();
  /* 10e613d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e613db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e613de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e613e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e613e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e613e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e613ec push edx */
  push32((uint32_t)(EDX));
  /* 10e613ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e613ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e613f2 push eax */
  push32((uint32_t)(EAX));
  /* 10e613f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e613f5 call 0x10e648a0 */
  push32(0x10e613fau); f_10e648a0();
  /* 10e613fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e613fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61400 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61402 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61408 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6140e push edx */
  push32((uint32_t)(EDX));
  /* 10e6140f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10e61411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61414 push eax */
  push32((uint32_t)(EAX));
  /* 10e61415 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61417 call 0x10e648a0 */
  push32(0x10e6141cu); f_10e648a0();
  /* 10e6141c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6141f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61422 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61424 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6142a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61430 push edx */
  push32((uint32_t)(EDX));
  /* 10e61431 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10e61433 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61436 push eax */
  push32((uint32_t)(EAX));
  /* 10e61437 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61439 call 0x10e648a0 */
  push32(0x10e6143eu); f_10e648a0();
  /* 10e6143e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61441 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61444 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6144c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61452 push edx */
  push32((uint32_t)(EDX));
  /* 10e61453 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e61455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61458 push eax */
  push32((uint32_t)(EAX));
  /* 10e61459 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6145b call 0x10e648a0 */
  push32(0x10e61460u); f_10e648a0();
  /* 10e61460 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61463 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61466 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61468 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6146b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6146e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61474 push edx */
  push32((uint32_t)(EDX));
  /* 10e61475 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10e61477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6147a push eax */
  push32((uint32_t)(EAX));
  /* 10e6147b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6147d call 0x10e648a0 */
  push32(0x10e61482u); f_10e648a0();
  /* 10e61482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6148a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e6148d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61490 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61496 push edx */
  push32((uint32_t)(EDX));
  /* 10e61497 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10e61499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6149c push eax */
  push32((uint32_t)(EAX));
  /* 10e6149d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6149f call 0x10e648a0 */
  push32(0x10e614a4u); f_10e648a0();
  /* 10e614a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e614a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e614aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e614ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e614af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e614b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e614b8 push edx */
  push32((uint32_t)(EDX));
  /* 10e614b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10e614bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e614be push eax */
  push32((uint32_t)(EAX));
  /* 10e614bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10e614c1 call 0x10e648a0 */
  push32(0x10e614c6u); f_10e648a0();
  /* 10e614c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e614c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e614cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e614ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e614d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e614d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e614da push edx */
  push32((uint32_t)(EDX));
  /* 10e614db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e614dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e614e0 push eax */
  push32((uint32_t)(EAX));
  /* 10e614e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e614e3 call 0x10e648a0 */
  push32(0x10e614e8u); f_10e648a0();
  /* 10e614e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e614eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e614ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e614f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e614f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e614f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e614fc push edx */
  push32((uint32_t)(EDX));
  /* 10e614fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10e61502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61505 push eax */
  push32((uint32_t)(EAX));
  /* 10e61506 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61508 call 0x10e648a0 */
  push32(0x10e6150du); f_10e648a0();
  /* 10e6150d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e61513 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61515 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e61518 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10e6151b:;
  /* 10e6151b mov esp, ebp */
  ESP = (EBP);
  /* 10e6151d pop ebp */
  EBP = (pop32());
  /* 10e6151e ret  */
  ESPCHK(0x10e60f90u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10e61520 (779 bytes, 265 insns) */
void f_10e61520(void) {
  FTRACE(0x10e61520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61520 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61521 mov ebp, esp */
  EBP = (ESP);
  /* 10e61523 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61527 jne 0x10e6152e */
  if (!C.zf) goto L_10e6152e;
  /* 10e61529 jmp 0x10e61829 */
  goto L_10e61829;
L_10e6152e:;
  /* 10e6152e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61533 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e61536 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61537 call 0x10e57170 */
  push32(0x10e6153cu); f_10e57170();
  /* 10e6153c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6153f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61544 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e61547 push eax */
  push32((uint32_t)(EAX));
  /* 10e61548 call 0x10e57170 */
  push32(0x10e6154du); f_10e57170();
  /* 10e6154d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61550 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61555 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e61558 push edx */
  push32((uint32_t)(EDX));
  /* 10e61559 call 0x10e57170 */
  push32(0x10e6155eu); f_10e57170();
  /* 10e6155e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61561 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61566 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e61569 push ecx */
  push32((uint32_t)(ECX));
  /* 10e6156a call 0x10e57170 */
  push32(0x10e6156fu); f_10e57170();
  /* 10e6156f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61572 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61577 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e6157a push eax */
  push32((uint32_t)(EAX));
  /* 10e6157b call 0x10e57170 */
  push32(0x10e61580u); f_10e57170();
  /* 10e61580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61583 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61585 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61588 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e6158b push edx */
  push32((uint32_t)(EDX));
  /* 10e6158c call 0x10e57170 */
  push32(0x10e61591u); f_10e57170();
  /* 10e61591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61594 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61599 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e6159b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6159c call 0x10e57170 */
  push32(0x10e615a1u); f_10e57170();
  /* 10e615a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e615a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e615a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e615a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10e615ac push eax */
  push32((uint32_t)(EAX));
  /* 10e615ad call 0x10e57170 */
  push32(0x10e615b2u); f_10e57170();
  /* 10e615b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e615b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e615b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e615ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10e615bd push edx */
  push32((uint32_t)(EDX));
  /* 10e615be call 0x10e57170 */
  push32(0x10e615c3u); f_10e57170();
  /* 10e615c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e615c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e615c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e615cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10e615ce push ecx */
  push32((uint32_t)(ECX));
  /* 10e615cf call 0x10e57170 */
  push32(0x10e615d4u); f_10e57170();
  /* 10e615d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e615d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e615d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e615dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10e615df push eax */
  push32((uint32_t)(EAX));
  /* 10e615e0 call 0x10e57170 */
  push32(0x10e615e5u); f_10e57170();
  /* 10e615e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e615e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e615ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e615ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10e615f0 push edx */
  push32((uint32_t)(EDX));
  /* 10e615f1 call 0x10e57170 */
  push32(0x10e615f6u); f_10e57170();
  /* 10e615f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e615f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e615fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e615fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10e61601 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61602 call 0x10e57170 */
  push32(0x10e61607u); f_10e57170();
  /* 10e61607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6160a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6160c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6160f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e61612 push eax */
  push32((uint32_t)(EAX));
  /* 10e61613 call 0x10e57170 */
  push32(0x10e61618u); f_10e57170();
  /* 10e61618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6161b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6161d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61620 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10e61623 push edx */
  push32((uint32_t)(EDX));
  /* 10e61624 call 0x10e57170 */
  push32(0x10e61629u); f_10e57170();
  /* 10e61629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6162c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6162e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61631 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10e61634 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61635 call 0x10e57170 */
  push32(0x10e6163au); f_10e57170();
  /* 10e6163a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6163d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6163f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61642 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10e61645 push eax */
  push32((uint32_t)(EAX));
  /* 10e61646 call 0x10e57170 */
  push32(0x10e6164bu); f_10e57170();
  /* 10e6164b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6164e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61653 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10e61656 push edx */
  push32((uint32_t)(EDX));
  /* 10e61657 call 0x10e57170 */
  push32(0x10e6165cu); f_10e57170();
  /* 10e6165c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6165f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61664 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10e61667 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61668 call 0x10e57170 */
  push32(0x10e6166du); f_10e57170();
  /* 10e6166d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61670 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61675 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10e61678 push eax */
  push32((uint32_t)(EAX));
  /* 10e61679 call 0x10e57170 */
  push32(0x10e6167eu); f_10e57170();
  /* 10e6167e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61681 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61686 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e61689 push edx */
  push32((uint32_t)(EDX));
  /* 10e6168a call 0x10e57170 */
  push32(0x10e6168fu); f_10e57170();
  /* 10e6168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61692 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61697 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10e6169a push ecx */
  push32((uint32_t)(ECX));
  /* 10e6169b call 0x10e57170 */
  push32(0x10e616a0u); f_10e57170();
  /* 10e616a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e616a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e616a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e616a8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10e616ab push eax */
  push32((uint32_t)(EAX));
  /* 10e616ac call 0x10e57170 */
  push32(0x10e616b1u); f_10e57170();
  /* 10e616b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e616b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e616b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e616b9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10e616bc push edx */
  push32((uint32_t)(EDX));
  /* 10e616bd call 0x10e57170 */
  push32(0x10e616c2u); f_10e57170();
  /* 10e616c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e616c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e616c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e616ca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10e616cd push ecx */
  push32((uint32_t)(ECX));
  /* 10e616ce call 0x10e57170 */
  push32(0x10e616d3u); f_10e57170();
  /* 10e616d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e616d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e616d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e616db mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10e616de push eax */
  push32((uint32_t)(EAX));
  /* 10e616df call 0x10e57170 */
  push32(0x10e616e4u); f_10e57170();
  /* 10e616e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e616e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e616e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e616ec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10e616ef push edx */
  push32((uint32_t)(EDX));
  /* 10e616f0 call 0x10e57170 */
  push32(0x10e616f5u); f_10e57170();
  /* 10e616f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e616f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e616fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e616fd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10e61700 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61701 call 0x10e57170 */
  push32(0x10e61706u); f_10e57170();
  /* 10e61706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61709 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6170b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6170e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10e61711 push eax */
  push32((uint32_t)(EAX));
  /* 10e61712 call 0x10e57170 */
  push32(0x10e61717u); f_10e57170();
  /* 10e61717 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6171a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6171c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6171f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10e61722 push edx */
  push32((uint32_t)(EDX));
  /* 10e61723 call 0x10e57170 */
  push32(0x10e61728u); f_10e57170();
  /* 10e61728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6172b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6172d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61730 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10e61733 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61734 call 0x10e57170 */
  push32(0x10e61739u); f_10e57170();
  /* 10e61739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6173c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6173e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61741 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10e61744 push eax */
  push32((uint32_t)(EAX));
  /* 10e61745 call 0x10e57170 */
  push32(0x10e6174au); f_10e57170();
  /* 10e6174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6174d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6174f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61752 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10e61758 push edx */
  push32((uint32_t)(EDX));
  /* 10e61759 call 0x10e57170 */
  push32(0x10e6175eu); f_10e57170();
  /* 10e6175e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61761 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61766 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10e6176c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6176d call 0x10e57170 */
  push32(0x10e61772u); f_10e57170();
  /* 10e61772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61775 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6177a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10e61780 push eax */
  push32((uint32_t)(EAX));
  /* 10e61781 call 0x10e57170 */
  push32(0x10e61786u); f_10e57170();
  /* 10e61786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61789 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6178b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6178e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10e61794 push edx */
  push32((uint32_t)(EDX));
  /* 10e61795 call 0x10e57170 */
  push32(0x10e6179au); f_10e57170();
  /* 10e6179a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6179d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6179f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e617a2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10e617a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e617a9 call 0x10e57170 */
  push32(0x10e617aeu); f_10e57170();
  /* 10e617ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e617b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e617b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e617b6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10e617bc push eax */
  push32((uint32_t)(EAX));
  /* 10e617bd call 0x10e57170 */
  push32(0x10e617c2u); f_10e57170();
  /* 10e617c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e617c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e617c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e617ca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10e617d0 push edx */
  push32((uint32_t)(EDX));
  /* 10e617d1 call 0x10e57170 */
  push32(0x10e617d6u); f_10e57170();
  /* 10e617d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e617d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e617db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e617de mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10e617e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e617e5 call 0x10e57170 */
  push32(0x10e617eau); f_10e57170();
  /* 10e617ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e617ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10e617ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e617f2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10e617f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e617f9 call 0x10e57170 */
  push32(0x10e617feu); f_10e57170();
  /* 10e617fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61801 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61806 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10e6180c push edx */
  push32((uint32_t)(EDX));
  /* 10e6180d call 0x10e57170 */
  push32(0x10e61812u); f_10e57170();
  /* 10e61812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61815 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6181a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10e61820 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61821 call 0x10e57170 */
  push32(0x10e61826u); f_10e57170();
  /* 10e61826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e61829:;
  /* 10e61829 pop ebp */
  EBP = (pop32());
  /* 10e6182a ret  */
  ESPCHK(0x10e61520u, _esp0);
  ESP += 4; return;
}

/* FUN_10011830 @ 0x10e61830 (678 bytes, 180 insns) */
void f_10e61830(void) {
  FTRACE(0x10e61830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61830 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61831 mov ebp, esp */
  EBP = (ESP);
  /* 10e61833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e61836 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e6183d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6183f mov ax, word ptr [0x10e82a12] */
  AX = (r16((uint32_t)(0x10e82a12)));
  /* 10e61845 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e61848 cmp dword ptr [0x10e829b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6184f je 0x10e619aa */
  if (C.zf) goto L_10e619aa;
  /* 10e61855 push 0x10e829e0 */
  push32((uint32_t)(0x10e829e0u));
  /* 10e6185a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10e6185c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6185f push ecx */
  push32((uint32_t)(ECX));
  /* 10e61860 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61862 call 0x10e648a0 */
  push32(0x10e61867u); f_10e648a0();
  /* 10e61867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6186a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6186d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10e6186f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e61872 push 0x10e829e4 */
  push32((uint32_t)(0x10e829e4u));
  /* 10e61877 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10e61879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6187c push eax */
  push32((uint32_t)(EAX));
  /* 10e6187d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6187f call 0x10e648a0 */
  push32(0x10e61884u); f_10e648a0();
  /* 10e61884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6188a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6188c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e6188f push 0x10e829e8 */
  push32((uint32_t)(0x10e829e8u));
  /* 10e61894 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e61896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61899 push edx */
  push32((uint32_t)(EDX));
  /* 10e6189a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6189c call 0x10e648a0 */
  push32(0x10e618a1u); f_10e648a0();
  /* 10e618a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e618a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e618a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e618a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e618ac mov edx, dword ptr [0x10e829e8] */
  EDX = (r32((uint32_t)(0x10e829e8)));
  /* 10e618b2 push edx */
  push32((uint32_t)(EDX));
  /* 10e618b3 call 0x10e61ae0 */
  push32(0x10e618b8u); f_10e61ae0();
  /* 10e618b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e618bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e618bf je 0x10e61919 */
  if (C.zf) goto L_10e61919;
  /* 10e618c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e618c3 mov eax, dword ptr [0x10e829e0] */
  EAX = (r32((uint32_t)(0x10e829e0)));
  /* 10e618c8 push eax */
  push32((uint32_t)(EAX));
  /* 10e618c9 call 0x10e57170 */
  push32(0x10e618ceu); f_10e57170();
  /* 10e618ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e618d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e618d3 mov ecx, dword ptr [0x10e829e4] */
  ECX = (r32((uint32_t)(0x10e829e4)));
  /* 10e618d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e618da call 0x10e57170 */
  push32(0x10e618dfu); f_10e57170();
  /* 10e618df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e618e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e618e4 mov edx, dword ptr [0x10e829e8] */
  EDX = (r32((uint32_t)(0x10e829e8)));
  /* 10e618ea push edx */
  push32((uint32_t)(EDX));
  /* 10e618eb call 0x10e57170 */
  push32(0x10e618f0u); f_10e57170();
  /* 10e618f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e618f3 mov dword ptr [0x10e829e0], 0 */
  w32((uint32_t)(0x10e829e0), (0x0u));
  /* 10e618fd mov dword ptr [0x10e829e4], 0 */
  w32((uint32_t)(0x10e829e4), (0x0u));
  /* 10e61907 mov dword ptr [0x10e829e8], 0 */
  w32((uint32_t)(0x10e829e8), (0x0u));
  /* 10e61911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e61914 jmp 0x10e61ad2 */
  goto L_10e61ad2;
L_10e61919:;
  /* 10e61919 mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e6191e cmp dword ptr [eax], 0x10e81d60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10e81d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61924 je 0x10e61960 */
  if (C.zf) goto L_10e61960;
  /* 10e61926 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61928 mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e6192e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e61930 push edx */
  push32((uint32_t)(EDX));
  /* 10e61931 call 0x10e57170 */
  push32(0x10e61936u); f_10e57170();
  /* 10e61936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61939 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6193b mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61940 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e61943 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61944 call 0x10e57170 */
  push32(0x10e61949u); f_10e57170();
  /* 10e61949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6194c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6194e mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61954 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e61957 push eax */
  push32((uint32_t)(EAX));
  /* 10e61958 call 0x10e57170 */
  push32(0x10e6195du); f_10e57170();
  /* 10e6195d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e61960:;
  /* 10e61960 mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61966 mov edx, dword ptr [0x10e829e0] */
  EDX = (r32((uint32_t)(0x10e829e0)));
  /* 10e6196c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e6196e mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61973 mov ecx, dword ptr [0x10e829e4] */
  ECX = (r32((uint32_t)(0x10e829e4)));
  /* 10e61979 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e6197c mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61982 mov eax, dword ptr [0x10e829e8] */
  EAX = (r32((uint32_t)(0x10e829e8)));
  /* 10e61987 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e6198a mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61990 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e61992 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e61994 mov byte ptr [0x10e80eb8], al */
  w8((uint32_t)(0x10e80eb8), (AL));
  /* 10e61999 mov dword ptr [0x10e80ebc], 1 */
  w32((uint32_t)(0x10e80ebc), (0x1u));
  /* 10e619a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e619a5 jmp 0x10e61ad2 */
  goto L_10e61ad2;
L_10e619aa:;
  /* 10e619aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e619ac mov ecx, dword ptr [0x10e829e0] */
  ECX = (r32((uint32_t)(0x10e829e0)));
  /* 10e619b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e619b3 call 0x10e57170 */
  push32(0x10e619b8u); f_10e57170();
  /* 10e619b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e619bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e619bd mov edx, dword ptr [0x10e829e4] */
  EDX = (r32((uint32_t)(0x10e829e4)));
  /* 10e619c3 push edx */
  push32((uint32_t)(EDX));
  /* 10e619c4 call 0x10e57170 */
  push32(0x10e619c9u); f_10e57170();
  /* 10e619c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e619cc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e619ce mov eax, dword ptr [0x10e829e8] */
  EAX = (r32((uint32_t)(0x10e829e8)));
  /* 10e619d3 push eax */
  push32((uint32_t)(EAX));
  /* 10e619d4 call 0x10e57170 */
  push32(0x10e619d9u); f_10e57170();
  /* 10e619d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e619dc mov dword ptr [0x10e829e0], 0 */
  w32((uint32_t)(0x10e829e0), (0x0u));
  /* 10e619e6 mov dword ptr [0x10e829e4], 0 */
  w32((uint32_t)(0x10e829e4), (0x0u));
  /* 10e619f0 mov dword ptr [0x10e829e8], 0 */
  w32((uint32_t)(0x10e829e8), (0x0u));
  /* 10e619fa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10e619ff push 0x10e7e3c4 */
  push32((uint32_t)(0x10e7e3c4u));
  /* 10e61a04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61a06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61a08 call 0x10e566e0 */
  push32(0x10e61a0du); f_10e566e0();
  /* 10e61a0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61a10 mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e61a18 mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a1e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61a21 jne 0x10e61a2b */
  if (!C.zf) goto L_10e61a2b;
  /* 10e61a23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e61a26 jmp 0x10e61ad2 */
  goto L_10e61ad2;
L_10e61a2b:;
  /* 10e61a2b push 0x10e7e394 */
  push32((uint32_t)(0x10e7e394u));
  /* 10e61a30 mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a35 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e61a37 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61a38 call 0x10e59690 */
  push32(0x10e61a3du); f_10e59690();
  /* 10e61a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61a40 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10e61a45 push 0x10e7e3c4 */
  push32((uint32_t)(0x10e7e3c4u));
  /* 10e61a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61a4e call 0x10e566e0 */
  push32(0x10e61a53u); f_10e566e0();
  /* 10e61a53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61a56 mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a5c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e61a5f mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a64 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61a68 jne 0x10e61a6f */
  if (!C.zf) goto L_10e61a6f;
  /* 10e61a6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e61a6d jmp 0x10e61ad2 */
  goto L_10e61ad2;
L_10e61a6f:;
  /* 10e61a6f mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e61a78 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e61a7b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10e61a80 push 0x10e7e3c4 */
  push32((uint32_t)(0x10e7e3c4u));
  /* 10e61a85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61a89 call 0x10e566e0 */
  push32(0x10e61a8eu); f_10e566e0();
  /* 10e61a8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61a91 mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61a97 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10e61a9a mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61aa0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61aa4 jne 0x10e61aab */
  if (!C.zf) goto L_10e61aab;
  /* 10e61aa6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e61aa9 jmp 0x10e61ad2 */
  goto L_10e61ad2;
L_10e61aab:;
  /* 10e61aab mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61ab0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e61ab3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e61ab6 mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61abc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e61abe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e61ac0 mov byte ptr [0x10e80eb8], cl */
  w8((uint32_t)(0x10e80eb8), (CL));
  /* 10e61ac6 mov dword ptr [0x10e80ebc], 1 */
  w32((uint32_t)(0x10e80ebc), (0x1u));
  /* 10e61ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e61ad2:;
  /* 10e61ad2 mov esp, ebp */
  ESP = (EBP);
  /* 10e61ad4 pop ebp */
  EBP = (pop32());
  /* 10e61ad5 ret  */
  ESPCHK(0x10e61830u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10e61ae0 (125 bytes, 49 insns) */
void f_10e61ae0(void) {
  FTRACE(0x10e61ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10e61ae3 push ecx */
  push32((uint32_t)(ECX));
L_10e61ae4:;
  /* 10e61ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ae7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e61aea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e61aec je 0x10e61b59 */
  if (C.zf) goto L_10e61b59;
  /* 10e61aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61af1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e61af4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61af7 jl 0x10e61b1d */
  if ((C.sf!=C.of)) goto L_10e61b1d;
  /* 10e61af9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61afc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e61aff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61b02 jg 0x10e61b1d */
  if ((!C.zf&&C.sf==C.of)) goto L_10e61b1d;
  /* 10e61b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61b07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e61b0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e61b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61b10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e61b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61b15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61b18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e61b1b jmp 0x10e61b57 */
  goto L_10e61b57;
L_10e61b1d:;
  /* 10e61b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61b20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e61b23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61b26 jne 0x10e61b4e */
  if (!C.zf) goto L_10e61b4e;
  /* 10e61b28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61b2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e61b2e:;
  /* 10e61b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61b34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e61b37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e61b39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61b3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61b3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e61b42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61b45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e61b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e61b4a jne 0x10e61b2e */
  if (!C.zf) goto L_10e61b2e;
  /* 10e61b4c jmp 0x10e61b57 */
  goto L_10e61b57;
L_10e61b4e:;
  /* 10e61b4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61b51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61b54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e61b57:;
  /* 10e61b57 jmp 0x10e61ae4 */
  goto L_10e61ae4;
L_10e61b59:;
  /* 10e61b59 mov esp, ebp */
  ESP = (EBP);
  /* 10e61b5b pop ebp */
  EBP = (pop32());
  /* 10e61b5c ret  */
  ESPCHK(0x10e61ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x10e61b60 (304 bytes, 85 insns) */
void f_10e61b60(void) {
  FTRACE(0x10e61b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61b61 mov ebp, esp */
  EBP = (ESP);
  /* 10e61b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61b64 cmp dword ptr [0x10e829b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61b6b je 0x10e61c2c */
  if (C.zf) goto L_10e61c2c;
  /* 10e61b71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10e61b73 push 0x10e7e3d0 */
  push32((uint32_t)(0x10e7e3d0u));
  /* 10e61b78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61b7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e61b7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61b7e call 0x10e56af0 */
  push32(0x10e61b83u); f_10e56af0();
  /* 10e61b83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61b86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e61b89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61b8d jne 0x10e61b99 */
  if (!C.zf) goto L_10e61b99;
  /* 10e61b8f mov eax, 1 */
  EAX = (0x1u);
  /* 10e61b94 jmp 0x10e61c8c */
  goto L_10e61c8c;
L_10e61b99:;
  /* 10e61b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61b9c push eax */
  push32((uint32_t)(EAX));
  /* 10e61b9d call 0x10e61c90 */
  push32(0x10e61ba2u); f_10e61c90();
  /* 10e61ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e61ba7 je 0x10e61bcd */
  if (C.zf) goto L_10e61bcd;
  /* 10e61ba9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61bac push ecx */
  push32((uint32_t)(ECX));
  /* 10e61bad call 0x10e61f20 */
  push32(0x10e61bb2u); f_10e61f20();
  /* 10e61bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61bb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61bb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61bba push edx */
  push32((uint32_t)(EDX));
  /* 10e61bbb call 0x10e57170 */
  push32(0x10e61bc0u); f_10e57170();
  /* 10e61bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61bc3 mov eax, 1 */
  EAX = (0x1u);
  /* 10e61bc8 jmp 0x10e61c8c */
  goto L_10e61c8c;
L_10e61bcd:;
  /* 10e61bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61bd0 mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61bd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e61bd8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e61bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61bdd mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61be3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e61be6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e61be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61bec mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61bf2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e61bf5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10e61bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61bfb mov dword ptr [0x10e81d98], eax */
  w32((uint32_t)(0x10e81d98), (EAX));
  /* 10e61c00 mov ecx, dword ptr [0x10e829ec] */
  ECX = (r32((uint32_t)(0x10e829ec)));
  /* 10e61c06 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61c07 call 0x10e61f20 */
  push32(0x10e61c0cu); f_10e61f20();
  /* 10e61c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61c0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61c11 mov edx, dword ptr [0x10e829ec] */
  EDX = (r32((uint32_t)(0x10e829ec)));
  /* 10e61c17 push edx */
  push32((uint32_t)(EDX));
  /* 10e61c18 call 0x10e57170 */
  push32(0x10e61c1du); f_10e57170();
  /* 10e61c1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61c20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61c23 mov dword ptr [0x10e829ec], eax */
  w32((uint32_t)(0x10e829ec), (EAX));
  /* 10e61c28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e61c2a jmp 0x10e61c8c */
  goto L_10e61c8c;
L_10e61c2c:;
  /* 10e61c2c mov ecx, dword ptr [0x10e81d98] */
  ECX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61c32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e61c34 mov dword ptr [0x10e81d68], edx */
  w32((uint32_t)(0x10e81d68), (EDX));
  /* 10e61c3a mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61c3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e61c42 mov dword ptr [0x10e81d6c], ecx */
  w32((uint32_t)(0x10e81d6c), (ECX));
  /* 10e61c48 mov edx, dword ptr [0x10e81d98] */
  EDX = (r32((uint32_t)(0x10e81d98)));
  /* 10e61c4e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e61c51 mov dword ptr [0x10e81d70], eax */
  w32((uint32_t)(0x10e81d70), (EAX));
  /* 10e61c56 mov dword ptr [0x10e81d98], 0x10e81d68 */
  w32((uint32_t)(0x10e81d98), (0x10e81d68u));
  /* 10e61c60 mov ecx, dword ptr [0x10e829ec] */
  ECX = (r32((uint32_t)(0x10e829ec)));
  /* 10e61c66 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61c67 call 0x10e61f20 */
  push32(0x10e61c6cu); f_10e61f20();
  /* 10e61c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61c6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61c71 mov edx, dword ptr [0x10e829ec] */
  EDX = (r32((uint32_t)(0x10e829ec)));
  /* 10e61c77 push edx */
  push32((uint32_t)(EDX));
  /* 10e61c78 call 0x10e57170 */
  push32(0x10e61c7du); f_10e57170();
  /* 10e61c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61c80 mov dword ptr [0x10e829ec], 0 */
  w32((uint32_t)(0x10e829ec), (0x0u));
  /* 10e61c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e61c8c:;
  /* 10e61c8c mov esp, ebp */
  ESP = (EBP);
  /* 10e61c8e pop ebp */
  EBP = (pop32());
  /* 10e61c8f ret  */
  ESPCHK(0x10e61b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c90 @ 0x10e61c90 (525 bytes, 200 insns) */
void f_10e61c90(void) {
  FTRACE(0x10e61c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61c91 mov ebp, esp */
  EBP = (ESP);
  /* 10e61c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e61c96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e61c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e61c9f mov ax, word ptr [0x10e82a0c] */
  AX = (r16((uint32_t)(0x10e82a0c)));
  /* 10e61ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e61ca8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61cac jne 0x10e61cb6 */
  if (!C.zf) goto L_10e61cb6;
  /* 10e61cae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e61cb1 jmp 0x10e61e99 */
  goto L_10e61e99;
L_10e61cb6:;
  /* 10e61cb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61cb9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61cbc push ecx */
  push32((uint32_t)(ECX));
  /* 10e61cbd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10e61cbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61cc2 push edx */
  push32((uint32_t)(EDX));
  /* 10e61cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61cc5 call 0x10e648a0 */
  push32(0x10e61ccau); f_10e648a0();
  /* 10e61cca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61ccd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61cd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61cd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61cd8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61cdb push edx */
  push32((uint32_t)(EDX));
  /* 10e61cdc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10e61cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61ce1 push eax */
  push32((uint32_t)(EAX));
  /* 10e61ce2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61ce4 call 0x10e648a0 */
  push32(0x10e61ce9u); f_10e648a0();
  /* 10e61ce9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61cec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61cef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61cf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61cf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61cf7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61cfa push edx */
  push32((uint32_t)(EDX));
  /* 10e61cfb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e61cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61d00 push eax */
  push32((uint32_t)(EAX));
  /* 10e61d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61d03 call 0x10e648a0 */
  push32(0x10e61d08u); f_10e648a0();
  /* 10e61d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61d0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61d10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61d13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61d16 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d19 push edx */
  push32((uint32_t)(EDX));
  /* 10e61d1a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10e61d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61d1f push eax */
  push32((uint32_t)(EAX));
  /* 10e61d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61d22 call 0x10e648a0 */
  push32(0x10e61d27u); f_10e648a0();
  /* 10e61d27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61d2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61d2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61d35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d38 push edx */
  push32((uint32_t)(EDX));
  /* 10e61d39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10e61d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61d3e push eax */
  push32((uint32_t)(EAX));
  /* 10e61d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61d41 call 0x10e648a0 */
  push32(0x10e61d46u); f_10e648a0();
  /* 10e61d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61d4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61d4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61d54 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e61d57 push eax */
  push32((uint32_t)(EAX));
  /* 10e61d58 call 0x10e61ea0 */
  push32(0x10e61d5du); f_10e61ea0();
  /* 10e61d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61d63 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d66 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61d67 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10e61d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61d6c push edx */
  push32((uint32_t)(EDX));
  /* 10e61d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61d6f call 0x10e648a0 */
  push32(0x10e61d74u); f_10e648a0();
  /* 10e61d74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61d7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61d7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61d82 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d85 push edx */
  push32((uint32_t)(EDX));
  /* 10e61d86 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10e61d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61d8b push eax */
  push32((uint32_t)(EAX));
  /* 10e61d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e61d8e call 0x10e648a0 */
  push32(0x10e61d93u); f_10e648a0();
  /* 10e61d93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61d96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61d99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61d9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61d9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61da1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61da4 push edx */
  push32((uint32_t)(EDX));
  /* 10e61da5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10e61da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61daa push eax */
  push32((uint32_t)(EAX));
  /* 10e61dab push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61dad call 0x10e648a0 */
  push32(0x10e61db2u); f_10e648a0();
  /* 10e61db2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61db5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61db8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61dba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61dc0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61dc3 push edx */
  push32((uint32_t)(EDX));
  /* 10e61dc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e61dc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10e61dca push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61dcc call 0x10e648a0 */
  push32(0x10e61dd1u); f_10e648a0();
  /* 10e61dd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61dd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61dd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61dd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61ddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ddf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61de2 push edx */
  push32((uint32_t)(EDX));
  /* 10e61de3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10e61de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61de8 push eax */
  push32((uint32_t)(EAX));
  /* 10e61de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61deb call 0x10e648a0 */
  push32(0x10e61df0u); f_10e648a0();
  /* 10e61df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61df6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61df8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61dfe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e01 push edx */
  push32((uint32_t)(EDX));
  /* 10e61e02 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10e61e04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61e07 push eax */
  push32((uint32_t)(EAX));
  /* 10e61e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61e0a call 0x10e648a0 */
  push32(0x10e61e0fu); f_10e648a0();
  /* 10e61e0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61e15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61e17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61e1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61e1d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e20 push edx */
  push32((uint32_t)(EDX));
  /* 10e61e21 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10e61e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61e26 push eax */
  push32((uint32_t)(EAX));
  /* 10e61e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61e29 call 0x10e648a0 */
  push32(0x10e61e2eu); f_10e648a0();
  /* 10e61e2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61e34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61e36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61e39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61e3c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e3f push edx */
  push32((uint32_t)(EDX));
  /* 10e61e40 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10e61e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61e45 push eax */
  push32((uint32_t)(EAX));
  /* 10e61e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61e48 call 0x10e648a0 */
  push32(0x10e61e4du); f_10e648a0();
  /* 10e61e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61e53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61e55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61e58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61e5b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e5e push edx */
  push32((uint32_t)(EDX));
  /* 10e61e5f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10e61e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61e64 push eax */
  push32((uint32_t)(EAX));
  /* 10e61e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61e67 call 0x10e648a0 */
  push32(0x10e61e6cu); f_10e648a0();
  /* 10e61e6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61e72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61e74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61e7a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e7d push edx */
  push32((uint32_t)(EDX));
  /* 10e61e7e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10e61e80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61e83 push eax */
  push32((uint32_t)(EAX));
  /* 10e61e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61e86 call 0x10e648a0 */
  push32(0x10e61e8bu); f_10e648a0();
  /* 10e61e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61e8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e61e91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e61e93 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e61e96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e61e99:;
  /* 10e61e99 mov esp, ebp */
  ESP = (EBP);
  /* 10e61e9b pop ebp */
  EBP = (pop32());
  /* 10e61e9c ret  */
  ESPCHK(0x10e61c90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10e61ea0 (125 bytes, 49 insns) */
void f_10e61ea0(void) {
  FTRACE(0x10e61ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10e61ea3 push ecx */
  push32((uint32_t)(ECX));
L_10e61ea4:;
  /* 10e61ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ea7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e61eaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e61eac je 0x10e61f19 */
  if (C.zf) goto L_10e61f19;
  /* 10e61eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61eb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e61eb4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61eb7 jl 0x10e61edd */
  if ((C.sf!=C.of)) goto L_10e61edd;
  /* 10e61eb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ebc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e61ebf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61ec2 jg 0x10e61edd */
  if ((!C.zf&&C.sf==C.of)) goto L_10e61edd;
  /* 10e61ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ec7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e61eca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e61ecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ed0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e61ed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ed5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61ed8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e61edb jmp 0x10e61f17 */
  goto L_10e61f17;
L_10e61edd:;
  /* 10e61edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61ee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e61ee3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61ee6 jne 0x10e61f0e */
  if (!C.zf) goto L_10e61f0e;
  /* 10e61ee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61eeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e61eee:;
  /* 10e61eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61ef1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61ef4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e61ef7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e61ef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61efc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61eff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e61f02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e61f05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e61f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e61f0a jne 0x10e61eee */
  if (!C.zf) goto L_10e61eee;
  /* 10e61f0c jmp 0x10e61f17 */
  goto L_10e61f17;
L_10e61f0e:;
  /* 10e61f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61f14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e61f17:;
  /* 10e61f17 jmp 0x10e61ea4 */
  goto L_10e61ea4;
L_10e61f19:;
  /* 10e61f19 mov esp, ebp */
  ESP = (EBP);
  /* 10e61f1b pop ebp */
  EBP = (pop32());
  /* 10e61f1c ret  */
  ESPCHK(0x10e61ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f20 @ 0x10e61f20 (147 bytes, 52 insns) */
void f_10e61f20(void) {
  FTRACE(0x10e61f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61f21 mov ebp, esp */
  EBP = (ESP);
  /* 10e61f23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61f27 jne 0x10e61f2e */
  if (!C.zf) goto L_10e61f2e;
  /* 10e61f29 jmp 0x10e61fb1 */
  goto L_10e61fb1;
L_10e61f2e:;
  /* 10e61f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f31 cmp dword ptr [eax + 0xc], 0x10e82a48 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10e82a48u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61f38 je 0x10e61fb1 */
  if (C.zf) goto L_10e61fb1;
  /* 10e61f3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61f3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e61f42 push edx */
  push32((uint32_t)(EDX));
  /* 10e61f43 call 0x10e57170 */
  push32(0x10e61f48u); f_10e57170();
  /* 10e61f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61f4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f50 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e61f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61f54 call 0x10e57170 */
  push32(0x10e61f59u); f_10e57170();
  /* 10e61f59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61f5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e61f64 push eax */
  push32((uint32_t)(EAX));
  /* 10e61f65 call 0x10e57170 */
  push32(0x10e61f6au); f_10e57170();
  /* 10e61f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61f6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61f6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f72 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e61f75 push edx */
  push32((uint32_t)(EDX));
  /* 10e61f76 call 0x10e57170 */
  push32(0x10e61f7bu); f_10e57170();
  /* 10e61f7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61f7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f83 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e61f86 push ecx */
  push32((uint32_t)(ECX));
  /* 10e61f87 call 0x10e57170 */
  push32(0x10e61f8cu); f_10e57170();
  /* 10e61f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61f8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61f91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61f94 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10e61f97 push eax */
  push32((uint32_t)(EAX));
  /* 10e61f98 call 0x10e57170 */
  push32(0x10e61f9du); f_10e57170();
  /* 10e61f9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e61fa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e61fa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e61fa5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10e61fa8 push edx */
  push32((uint32_t)(EDX));
  /* 10e61fa9 call 0x10e57170 */
  push32(0x10e61faeu); f_10e57170();
  /* 10e61fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e61fb1:;
  /* 10e61fb1 pop ebp */
  EBP = (pop32());
  /* 10e61fb2 ret  */
  ESPCHK(0x10e61f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x10e61fc0 (928 bytes, 284 insns) */
void f_10e61fc0(void) {
  FTRACE(0x10e61fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e61fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e61fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e61fc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e61fc6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10e61fcd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10e61fd4 cmp dword ptr [0x10e829b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61fdb je 0x10e62311 */
  if (C.zf) goto L_10e62311;
  /* 10e61fe1 cmp dword ptr [0x10e829c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e61fe8 jne 0x10e62010 */
  if (!C.zf) goto L_10e62010;
  /* 10e61fea push 0x10e829c0 */
  push32((uint32_t)(0x10e829c0u));
  /* 10e61fef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10e61ff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e61ff6 mov ax, word ptr [0x10e82a04] */
  AX = (r16((uint32_t)(0x10e82a04)));
  /* 10e61ffc push eax */
  push32((uint32_t)(EAX));
  /* 10e61ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e61fff call 0x10e648a0 */
  push32(0x10e62004u); f_10e648a0();
  /* 10e62004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62009 je 0x10e62010 */
  if (C.zf) goto L_10e62010;
  /* 10e6200b jmp 0x10e622d2 */
  goto L_10e622d2;
L_10e62010:;
  /* 10e62010 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10e62012 push 0x10e7e3dc */
  push32((uint32_t)(0x10e7e3dcu));
  /* 10e62017 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62019 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e6201e call 0x10e566e0 */
  push32(0x10e62023u); f_10e566e0();
  /* 10e62023 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62026 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e62029 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e6202b push 0x10e7e3dc */
  push32((uint32_t)(0x10e7e3dcu));
  /* 10e62030 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62032 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e62037 call 0x10e566e0 */
  push32(0x10e6203cu); f_10e566e0();
  /* 10e6203c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6203f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e62042 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10e62044 push 0x10e7e3dc */
  push32((uint32_t)(0x10e7e3dcu));
  /* 10e62049 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6204b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10e62050 call 0x10e566e0 */
  push32(0x10e62055u); f_10e566e0();
  /* 10e62055 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62058 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10e6205b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10e6205d push 0x10e7e3dc */
  push32((uint32_t)(0x10e7e3dcu));
  /* 10e62062 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62064 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10e62069 call 0x10e566e0 */
  push32(0x10e6206eu); f_10e566e0();
  /* 10e6206e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62071 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e62074 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62078 je 0x10e6208c */
  if (C.zf) goto L_10e6208c;
  /* 10e6207a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6207e je 0x10e6208c */
  if (C.zf) goto L_10e6208c;
  /* 10e62080 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62084 je 0x10e6208c */
  if (C.zf) goto L_10e6208c;
  /* 10e62086 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6208a jne 0x10e62091 */
  if (!C.zf) goto L_10e62091;
L_10e6208c:;
  /* 10e6208c jmp 0x10e622d2 */
  goto L_10e622d2;
L_10e62091:;
  /* 10e62091 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e62094 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e62097 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e6209e jmp 0x10e620a9 */
  goto L_10e620a9;
L_10e620a0:;
  /* 10e620a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e620a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e620a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e620a9:;
  /* 10e620a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e620b0 jge 0x10e620c5 */
  if ((C.sf==C.of)) goto L_10e620c5;
  /* 10e620b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e620b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10e620b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e620ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e620bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e620c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e620c3 jmp 0x10e620a0 */
  goto L_10e620a0;
L_10e620c5:;
  /* 10e620c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10e620c8 push eax */
  push32((uint32_t)(EAX));
  /* 10e620c9 mov ecx, dword ptr [0x10e829c0] */
  ECX = (r32((uint32_t)(0x10e829c0)));
  /* 10e620cf push ecx */
  push32((uint32_t)(ECX));
  /* 10e620d0 call dword ptr [0x10e85354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85354))), 0x10e620d6u);
  /* 10e620d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e620d8 jne 0x10e620df */
  if (!C.zf) goto L_10e620df;
  /* 10e620da jmp 0x10e622d2 */
  goto L_10e622d2;
L_10e620df:;
  /* 10e620df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e620e3 jbe 0x10e620ea */
  if ((C.cf||C.zf)) goto L_10e620ea;
  /* 10e620e5 jmp 0x10e622d2 */
  goto L_10e622d2;
L_10e620ea:;
  /* 10e620ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e620ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e620f3 mov dword ptr [0x10e80eb4], edx */
  w32((uint32_t)(0x10e80eb4), (EDX));
  /* 10e620f9 cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62100 jle 0x10e62159 */
  if ((C.zf||C.sf!=C.of)) goto L_10e62159;
  /* 10e62102 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10e62105 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e62108 jmp 0x10e62113 */
  goto L_10e62113;
L_10e6210a:;
  /* 10e6210a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e6210d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62110 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10e62113:;
  /* 10e62113 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62118 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e6211a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6211c je 0x10e62159 */
  if (C.zf) goto L_10e62159;
  /* 10e6211e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62121 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e62123 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e62126 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e62128 je 0x10e62159 */
  if (C.zf) goto L_10e62159;
  /* 10e6212a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e6212d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6212f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e62131 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e62134 jmp 0x10e6213f */
  goto L_10e6213f;
L_10e62136:;
  /* 10e62136 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e62139 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6213c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10e6213f:;
  /* 10e6213f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62142 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62144 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e62147 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6214a jg 0x10e62157 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e62157;
  /* 10e6214c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e6214f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62152 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e62155 jmp 0x10e62136 */
  goto L_10e62136;
L_10e62157:;
  /* 10e62157 jmp 0x10e6210a */
  goto L_10e6210a;
L_10e62159:;
  /* 10e62159 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6215b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6215d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6215f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e62162 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62165 push eax */
  push32((uint32_t)(EAX));
  /* 10e62166 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e6216b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e6216e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6216f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62171 call 0x10e5e910 */
  push32(0x10e62176u); f_10e5e910();
  /* 10e62176 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6217b jne 0x10e62182 */
  if (!C.zf) goto L_10e62182;
  /* 10e6217d jmp 0x10e622d2 */
  goto L_10e622d2;
L_10e62182:;
  /* 10e62182 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e62185 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10e6218a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e6218d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e62190 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e62197 jmp 0x10e621a2 */
  goto L_10e621a2;
L_10e62199:;
  /* 10e62199 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e6219c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6219f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e621a2:;
  /* 10e621a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e621a9 jge 0x10e621c0 */
  if ((C.sf==C.of)) goto L_10e621c0;
  /* 10e621ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e621ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10e621b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10e621b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e621b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e621bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e621be jmp 0x10e62199 */
  goto L_10e62199;
L_10e621c0:;
  /* 10e621c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e621c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e621c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e621c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e621ca push edx */
  push32((uint32_t)(EDX));
  /* 10e621cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e621d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e621d3 push eax */
  push32((uint32_t)(EAX));
  /* 10e621d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e621d6 call 0x10e64b40 */
  push32(0x10e621dbu); f_10e64b40();
  /* 10e621db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e621de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e621e0 jne 0x10e621e7 */
  if (!C.zf) goto L_10e621e7;
  /* 10e621e2 jmp 0x10e622d2 */
  goto L_10e622d2;
L_10e621e7:;
  /* 10e621e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e621ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10e621ef cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e621f6 jle 0x10e62253 */
  if ((C.zf||C.sf!=C.of)) goto L_10e62253;
  /* 10e621f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10e621fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e621fe jmp 0x10e62209 */
  goto L_10e62209;
L_10e62200:;
  /* 10e62200 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62203 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62206 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10e62209:;
  /* 10e62209 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e6220c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e6220e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e62210 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e62212 je 0x10e62253 */
  if (C.zf) goto L_10e62253;
  /* 10e62214 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62217 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62219 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e6221c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6221e je 0x10e62253 */
  if (C.zf) goto L_10e62253;
  /* 10e62220 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62225 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e62227 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e6222a jmp 0x10e62235 */
  goto L_10e62235;
L_10e6222c:;
  /* 10e6222c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e6222f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62232 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10e62235:;
  /* 10e62235 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e62238 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6223a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e6223d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62240 jg 0x10e62251 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e62251;
  /* 10e62242 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e62245 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e62248 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10e6224f jmp 0x10e6222c */
  goto L_10e6222c;
L_10e62251:;
  /* 10e62251 jmp 0x10e62200 */
  goto L_10e62200;
L_10e62253:;
  /* 10e62253 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e62256 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62259 mov dword ptr [0x10e80ca8], eax */
  w32((uint32_t)(0x10e80ca8), (EAX));
  /* 10e6225e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e62261 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62264 mov dword ptr [0x10e80cac], ecx */
  w32((uint32_t)(0x10e80cac), (ECX));
  /* 10e6226a cmp dword ptr [0x10e829f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62271 je 0x10e62284 */
  if (C.zf) goto L_10e62284;
  /* 10e62273 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62275 mov edx, dword ptr [0x10e829f0] */
  EDX = (r32((uint32_t)(0x10e829f0)));
  /* 10e6227b push edx */
  push32((uint32_t)(EDX));
  /* 10e6227c call 0x10e57170 */
  push32(0x10e62281u); f_10e57170();
  /* 10e62281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e62284:;
  /* 10e62284 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e62287 mov dword ptr [0x10e829f0], eax */
  w32((uint32_t)(0x10e829f0), (EAX));
  /* 10e6228c cmp dword ptr [0x10e829f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62293 je 0x10e622a6 */
  if (C.zf) goto L_10e622a6;
  /* 10e62295 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62297 mov ecx, dword ptr [0x10e829f4] */
  ECX = (r32((uint32_t)(0x10e829f4)));
  /* 10e6229d push ecx */
  push32((uint32_t)(ECX));
  /* 10e6229e call 0x10e57170 */
  push32(0x10e622a3u); f_10e57170();
  /* 10e622a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e622a6:;
  /* 10e622a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e622a9 mov dword ptr [0x10e829f4], edx */
  w32((uint32_t)(0x10e829f4), (EDX));
  /* 10e622af push 2 */
  push32((uint32_t)(0x2u));
  /* 10e622b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e622b4 push eax */
  push32((uint32_t)(EAX));
  /* 10e622b5 call 0x10e57170 */
  push32(0x10e622bau); f_10e57170();
  /* 10e622ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e622bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e622bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e622c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e622c3 call 0x10e57170 */
  push32(0x10e622c8u); f_10e57170();
  /* 10e622c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e622cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e622cd jmp 0x10e6235c */
  goto L_10e6235c;
L_10e622d2:;
  /* 10e622d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e622d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e622d7 push edx */
  push32((uint32_t)(EDX));
  /* 10e622d8 call 0x10e57170 */
  push32(0x10e622ddu); f_10e57170();
  /* 10e622dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e622e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e622e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e622e5 push eax */
  push32((uint32_t)(EAX));
  /* 10e622e6 call 0x10e57170 */
  push32(0x10e622ebu); f_10e57170();
  /* 10e622eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e622ee push 2 */
  push32((uint32_t)(0x2u));
  /* 10e622f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e622f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e622f4 call 0x10e57170 */
  push32(0x10e622f9u); f_10e57170();
  /* 10e622f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e622fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e622fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e62301 push edx */
  push32((uint32_t)(EDX));
  /* 10e62302 call 0x10e57170 */
  push32(0x10e62307u); f_10e57170();
  /* 10e62307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6230a mov eax, 1 */
  EAX = (0x1u);
  /* 10e6230f jmp 0x10e6235c */
  goto L_10e6235c;
L_10e62311:;
  /* 10e62311 mov dword ptr [0x10e80ca8], 0x10e80cb2 */
  w32((uint32_t)(0x10e80ca8), (0x10e80cb2u));
  /* 10e6231b mov dword ptr [0x10e80cac], 0x10e80cb2 */
  w32((uint32_t)(0x10e80cac), (0x10e80cb2u));
  /* 10e62325 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62327 mov eax, dword ptr [0x10e829f0] */
  EAX = (r32((uint32_t)(0x10e829f0)));
  /* 10e6232c push eax */
  push32((uint32_t)(EAX));
  /* 10e6232d call 0x10e57170 */
  push32(0x10e62332u); f_10e57170();
  /* 10e62332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62335 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e62337 mov ecx, dword ptr [0x10e829f4] */
  ECX = (r32((uint32_t)(0x10e829f4)));
  /* 10e6233d push ecx */
  push32((uint32_t)(ECX));
  /* 10e6233e call 0x10e57170 */
  push32(0x10e62343u); f_10e57170();
  /* 10e62343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62346 mov dword ptr [0x10e829f0], 0 */
  w32((uint32_t)(0x10e829f0), (0x0u));
  /* 10e62350 mov dword ptr [0x10e829f4], 0 */
  w32((uint32_t)(0x10e829f4), (0x0u));
  /* 10e6235a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e6235c:;
  /* 10e6235c mov esp, ebp */
  ESP = (EBP);
  /* 10e6235e pop ebp */
  EBP = (pop32());
  /* 10e6235f ret  */
  ESPCHK(0x10e61fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x10e62360 (7 bytes, 5 insns) */
void f_10e62360(void) {
  FTRACE(0x10e62360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62360 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62361 mov ebp, esp */
  EBP = (ESP);
  /* 10e62363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62365 pop ebp */
  EBP = (pop32());
  /* 10e62366 ret  */
  ESPCHK(0x10e62360u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10e62370 (129 bytes, 56 insns) */
void f_10e62370(void) {
  FTRACE(0x10e62370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62370 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e62374 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e62378 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e6237e jne 0x10e623bc */
  if (!C.zf) goto L_10e623bc;
L_10e62380:;
  /* 10e62380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e62382 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e62384 jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e62386 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e62388 je 0x10e623b0 */
  if (C.zf) goto L_10e623b0;
  /* 10e6238a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e6238d jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e6238f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e62391 je 0x10e623b0 */
  if (C.zf) goto L_10e623b0;
  /* 10e62393 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e62396 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e62399 jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e6239b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e6239d je 0x10e623b0 */
  if (C.zf) goto L_10e623b0;
  /* 10e6239f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e623a2 jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e623a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e623a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e623aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e623ac jne 0x10e62380 */
  if (!C.zf) goto L_10e62380;
  /* 10e623ae mov edi, edi */
  EDI = (EDI);
L_10e623b0:;
  /* 10e623b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e623b2 ret  */
  ESPCHK(0x10e62370u, _esp0);
  ESP += 4; return;
  /* 10e623b3 nop  */
  /* nop */
L_10e623b4:;
  /* 10e623b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e623b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e623b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10e623b9 ret  */
  ESPCHK(0x10e62370u, _esp0);
  ESP += 4; return;
  /* 10e623ba mov edi, edi */
  EDI = (EDI);
L_10e623bc:;
  /* 10e623bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10e623c2 je 0x10e623d8 */
  if (C.zf) goto L_10e623d8;
  /* 10e623c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e623c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e623c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e623c9 jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e623cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e623cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e623ce je 0x10e623b0 */
  if (C.zf) goto L_10e623b0;
  /* 10e623d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10e623d6 je 0x10e62380 */
  if (C.zf) goto L_10e62380;
L_10e623d8:;
  /* 10e623d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10e623db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e623de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e623e0 jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e623e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e623e4 je 0x10e623b0 */
  if (C.zf) goto L_10e623b0;
  /* 10e623e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e623e9 jne 0x10e623b4 */
  if (!C.zf) goto L_10e623b4;
  /* 10e623eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e623ed je 0x10e623b0 */
  if (C.zf) goto L_10e623b0;
  /* 10e623ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e623f2 jmp 0x10e62380 */
  goto L_10e62380;
}

