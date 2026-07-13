#include "recomp.h"

/* FUN_1000f7b0 @ 0x11ccf7b0 (31 bytes, 14 insns) */
void f_11ccf7b0(void) {
  FTRACE(0x11ccf7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf7b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccf7b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf7b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf7bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccf7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf7c5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf7c8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ccf7ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ccf7cd pop ebp */
  EBP = (pop32());
  /* 11ccf7ce ret  */
  ESPCHK(0x11ccf7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x11ccf7d0 (27 bytes, 12 insns) */
void f_11ccf7d0(void) {
  FTRACE(0x11ccf7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccf7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf7d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf7db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccf7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccf7e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf7e5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11ccf7e9 pop ebp */
  EBP = (pop32());
  /* 11ccf7ea ret  */
  ESPCHK(0x11ccf7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x11ccf7f0 (804 bytes, 236 insns) */
void f_11ccf7f0(void) {
  FTRACE(0x11ccf7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccf7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccf7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccf7f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccf7f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11ccf7fb push 0x11cfa010 */
  push32((uint32_t)(0x11cfa010u));
  /* 11ccf800 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccf802 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ccf807 call 0x11ccb4c0 */
  push32(0x11ccf80cu); f_11ccb4c0();
  /* 11ccf80c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf80f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11ccf812 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf816 jne 0x11ccf822 */
  if (!C.zf) goto L_11ccf822;
  /* 11ccf818 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11ccf81a call 0x11cc9f30 */
  push32(0x11ccf81fu); f_11cc9f30();
  /* 11ccf81f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccf822:;
  /* 11ccf822 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf825 mov dword ptr [0x11d00e20], eax */
  w32((uint32_t)(0x11d00e20), (EAX));
  /* 11ccf82a mov dword ptr [0x11d00f5c], 0x20 */
  w32((uint32_t)(0x11d00f5c), (0x20u));
  /* 11ccf834 jmp 0x11ccf83f */
  goto L_11ccf83f;
L_11ccf836:;
  /* 11ccf836 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf839 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf83c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11ccf83f:;
  /* 11ccf83f mov edx, dword ptr [0x11d00e20] */
  EDX = (r32((uint32_t)(0x11d00e20)));
  /* 11ccf845 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf84b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf84e jae 0x11ccf873 */
  if (!C.cf) goto L_11ccf873;
  /* 11ccf850 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf853 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ccf857 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf85a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ccf860 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf863 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ccf867 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf86a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ccf871 jmp 0x11ccf836 */
  goto L_11ccf836;
L_11ccf873:;
  /* 11ccf873 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11ccf876 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccf877 call dword ptr [0x11d013a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013a8))), 0x11ccf87du);
  /* 11ccf87d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11ccf880 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccf886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccf888 je 0x11ccfa15 */
  if (C.zf) goto L_11ccfa15;
  /* 11ccf88e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf892 je 0x11ccfa15 */
  if (C.zf) goto L_11ccfa15;
  /* 11ccf898 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccf89b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccf89d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11ccf8a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccf8a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf8a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccf8a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf8ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf8af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11ccf8b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf8b9 jge 0x11ccf8c3 */
  if ((C.sf==C.of)) goto L_11ccf8c3;
  /* 11ccf8bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ccf8be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11ccf8c1 jmp 0x11ccf8ca */
  goto L_11ccf8ca;
L_11ccf8c3:;
  /* 11ccf8c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11ccf8ca:;
  /* 11ccf8ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ccf8cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11ccf8d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11ccf8d7 jmp 0x11ccf8e2 */
  goto L_11ccf8e2;
L_11ccf8d9:;
  /* 11ccf8d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11ccf8dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf8df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11ccf8e2:;
  /* 11ccf8e2 mov ecx, dword ptr [0x11d00f5c] */
  ECX = (r32((uint32_t)(0x11d00f5c)));
  /* 11ccf8e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf8eb jge 0x11ccf982 */
  if ((C.sf==C.of)) goto L_11ccf982;
  /* 11ccf8f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11ccf8f6 push 0x11cfa010 */
  push32((uint32_t)(0x11cfa010u));
  /* 11ccf8fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccf8fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ccf902 call 0x11ccb4c0 */
  push32(0x11ccf907u); f_11ccb4c0();
  /* 11ccf907 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf90a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11ccf90d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf911 jne 0x11ccf91e */
  if (!C.zf) goto L_11ccf91e;
  /* 11ccf913 mov edx, dword ptr [0x11d00f5c] */
  EDX = (r32((uint32_t)(0x11d00f5c)));
  /* 11ccf919 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11ccf91c jmp 0x11ccf982 */
  goto L_11ccf982;
L_11ccf91e:;
  /* 11ccf91e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11ccf921 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf924 mov dword ptr [eax*4 + 0x11d00e20], ecx */
  w32((uint32_t)(EAX*4 + 0x11d00e20), (ECX));
  /* 11ccf92b mov edx, dword ptr [0x11d00f5c] */
  EDX = (r32((uint32_t)(0x11d00f5c)));
  /* 11ccf931 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf934 mov dword ptr [0x11d00f5c], edx */
  w32((uint32_t)(0x11d00f5c), (EDX));
  /* 11ccf93a jmp 0x11ccf945 */
  goto L_11ccf945;
L_11ccf93c:;
  /* 11ccf93c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf93f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf942 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11ccf945:;
  /* 11ccf945 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11ccf948 mov edx, dword ptr [ecx*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11ccf94f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf955 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf958 jae 0x11ccf97d */
  if (!C.cf) goto L_11ccf97d;
  /* 11ccf95a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf95d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ccf961 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf964 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ccf96a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf96d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ccf971 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf974 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ccf97b jmp 0x11ccf93c */
  goto L_11ccf93c;
L_11ccf97d:;
  /* 11ccf97d jmp 0x11ccf8d9 */
  goto L_11ccf8d9;
L_11ccf982:;
  /* 11ccf982 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ccf989 jmp 0x11ccf9a6 */
  goto L_11ccf9a6;
L_11ccf98b:;
  /* 11ccf98b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccf98e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf991 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11ccf994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf997 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf99a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccf99d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ccf9a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf9a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11ccf9a6:;
  /* 11ccf9a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccf9a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf9ac jge 0x11ccfa15 */
  if ((C.sf==C.of)) goto L_11ccfa15;
  /* 11ccf9ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ccf9b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccf9b4 je 0x11ccfa10 */
  if (C.zf) goto L_11ccfa10;
  /* 11ccf9b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf9b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccf9bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf9bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccf9c1 je 0x11ccfa10 */
  if (C.zf) goto L_11ccfa10;
  /* 11ccf9c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccf9c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccf9c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccf9cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf9ce jne 0x11ccf9e0 */
  if (!C.zf) goto L_11ccf9e0;
  /* 11ccf9d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ccf9d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccf9d5 push edx */
  push32((uint32_t)(EDX));
  /* 11ccf9d6 call dword ptr [0x11d013a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013a0))), 0x11ccf9dcu);
  /* 11ccf9dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccf9de je 0x11ccfa10 */
  if (C.zf) goto L_11ccfa10;
L_11ccf9e0:;
  /* 11ccf9e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccf9e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ccf9e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccf9e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccf9ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ccf9ef mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11ccf9f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccf9f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11ccf9fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccf9fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ccfa01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccfa03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ccfa05 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfa08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfa0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ccfa0d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11ccfa10:;
  /* 11ccfa10 jmp 0x11ccf98b */
  goto L_11ccf98b;
L_11ccfa15:;
  /* 11ccfa15 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ccfa1c jmp 0x11ccfa27 */
  goto L_11ccfa27;
L_11ccfa1e:;
  /* 11ccfa1e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccfa21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfa24 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11ccfa27:;
  /* 11ccfa27 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfa2b jge 0x11ccfb04 */
  if ((C.sf==C.of)) goto L_11ccfb04;
  /* 11ccfa31 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccfa34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ccfa37 mov edx, dword ptr [0x11d00e20] */
  EDX = (r32((uint32_t)(0x11d00e20)));
  /* 11ccfa3d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfa3f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11ccfa42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfa45 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfa48 jne 0x11ccfaf0 */
  if (!C.zf) goto L_11ccfaf0;
  /* 11ccfa4e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfa51 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11ccfa55 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfa59 jne 0x11ccfa64 */
  if (!C.zf) goto L_11ccfa64;
  /* 11ccfa5b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11ccfa62 jmp 0x11ccfa74 */
  goto L_11ccfa74;
L_11ccfa64:;
  /* 11ccfa64 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ccfa67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfa6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ccfa6c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfa6e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfa71 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11ccfa74:;
  /* 11ccfa74 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ccfa77 push eax */
  push32((uint32_t)(EAX));
  /* 11ccfa78 call dword ptr [0x11d013d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d0))), 0x11ccfa7eu);
  /* 11ccfa7e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11ccfa81 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfa85 je 0x11ccfadf */
  if (C.zf) goto L_11ccfadf;
  /* 11ccfa87 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccfa8a push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfa8b call dword ptr [0x11d013a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013a0))), 0x11ccfa91u);
  /* 11ccfa91 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11ccfa94 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfa98 je 0x11ccfadf */
  if (C.zf) goto L_11ccfadf;
  /* 11ccfa9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfa9d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ccfaa0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ccfaa2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11ccfaa5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccfaab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfaae jne 0x11ccfac0 */
  if (!C.zf) goto L_11ccfac0;
  /* 11ccfab0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfab3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ccfab6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11ccfab8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfabb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11ccfabe jmp 0x11ccfadd */
  goto L_11ccfadd;
L_11ccfac0:;
  /* 11ccfac0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11ccfac3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccfac9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfacc jne 0x11ccfadd */
  if (!C.zf) goto L_11ccfadd;
  /* 11ccface mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfad1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ccfad4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11ccfad7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfada mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11ccfadd:;
  /* 11ccfadd jmp 0x11ccfaee */
  goto L_11ccfaee;
L_11ccfadf:;
  /* 11ccfadf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfae2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ccfae5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11ccfae8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfaeb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11ccfaee:;
  /* 11ccfaee jmp 0x11ccfaff */
  goto L_11ccfaff;
L_11ccfaf0:;
  /* 11ccfaf0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfaf3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ccfaf6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11ccfaf9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ccfafc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11ccfaff:;
  /* 11ccfaff jmp 0x11ccfa1e */
  goto L_11ccfa1e;
L_11ccfb04:;
  /* 11ccfb04 mov eax, dword ptr [0x11d00f5c] */
  EAX = (r32((uint32_t)(0x11d00f5c)));
  /* 11ccfb09 push eax */
  push32((uint32_t)(EAX));
  /* 11ccfb0a call dword ptr [0x11d013a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013a4))), 0x11ccfb10u);
  /* 11ccfb10 mov esp, ebp */
  ESP = (EBP);
  /* 11ccfb12 pop ebp */
  EBP = (pop32());
  /* 11ccfb13 ret  */
  ESPCHK(0x11ccf7f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11ccfb20 (155 bytes, 45 insns) */
void f_11ccfb20(void) {
  FTRACE(0x11ccfb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccfb20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccfb21 mov ebp, esp */
  EBP = (ESP);
  /* 11ccfb23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfb26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ccfb2d jmp 0x11ccfb38 */
  goto L_11ccfb38;
L_11ccfb2f:;
  /* 11ccfb2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfb32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfb35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ccfb38:;
  /* 11ccfb38 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfb3c jge 0x11ccfbb7 */
  if ((C.sf==C.of)) goto L_11ccfbb7;
  /* 11ccfb3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfb41 cmp dword ptr [ecx*4 + 0x11d00e20], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11d00e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfb49 je 0x11ccfbb2 */
  if (C.zf) goto L_11ccfbb2;
  /* 11ccfb4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfb4e mov eax, dword ptr [edx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11ccfb55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccfb58 jmp 0x11ccfb63 */
  goto L_11ccfb63;
L_11ccfb5a:;
  /* 11ccfb5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfb5d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfb60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccfb63:;
  /* 11ccfb63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfb66 mov eax, dword ptr [edx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11ccfb6d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfb72 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfb75 jae 0x11ccfb8f */
  if (!C.cf) goto L_11ccfb8f;
  /* 11ccfb77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfb7a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfb7e je 0x11ccfb8d */
  if (C.zf) goto L_11ccfb8d;
  /* 11ccfb80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfb83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfb86 push edx */
  push32((uint32_t)(EDX));
  /* 11ccfb87 call dword ptr [0x11d013f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f8))), 0x11ccfb8du);
L_11ccfb8d:;
  /* 11ccfb8d jmp 0x11ccfb5a */
  goto L_11ccfb5a;
L_11ccfb8f:;
  /* 11ccfb8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccfb91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfb94 mov ecx, dword ptr [eax*4 + 0x11d00e20] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11ccfb9b push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfb9c call 0x11ccbf50 */
  push32(0x11ccfba1u); f_11ccbf50();
  /* 11ccfba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfba4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfba7 mov dword ptr [edx*4 + 0x11d00e20], 0 */
  w32((uint32_t)(EDX*4 + 0x11d00e20), (0x0u));
L_11ccfbb2:;
  /* 11ccfbb2 jmp 0x11ccfb2f */
  goto L_11ccfb2f;
L_11ccfbb7:;
  /* 11ccfbb7 mov esp, ebp */
  ESP = (EBP);
  /* 11ccfbb9 pop ebp */
  EBP = (pop32());
  /* 11ccfbba ret  */
  ESPCHK(0x11ccfb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x11ccfbc0 (329 bytes, 102 insns) */
void f_11ccfbc0(void) {
  FTRACE(0x11ccfbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccfbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccfbc1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccfbc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfbc6 cmp dword ptr [0x11d00f70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfbcd jne 0x11ccfbd4 */
  if (!C.zf) goto L_11ccfbd4;
  /* 11ccfbcf call 0x11cd64d0 */
  push32(0x11ccfbd4u); f_11cd64d0();
L_11ccfbd4:;
  /* 11ccfbd4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ccfbdb mov eax, dword ptr [0x11cff438] */
  EAX = (r32((uint32_t)(0x11cff438)));
  /* 11ccfbe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ccfbe3:;
  /* 11ccfbe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfbe6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccfbe9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccfbeb je 0x11ccfc19 */
  if (C.zf) goto L_11ccfc19;
  /* 11ccfbed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfbf0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccfbf3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfbf6 je 0x11ccfc01 */
  if (C.zf) goto L_11ccfc01;
  /* 11ccfbf8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfbfb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfbfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ccfc01:;
  /* 11ccfc01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfc04 push eax */
  push32((uint32_t)(EAX));
  /* 11ccfc05 call 0x11cd0a80 */
  push32(0x11ccfc0au); f_11cd0a80();
  /* 11ccfc0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfc0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfc10 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11ccfc14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccfc17 jmp 0x11ccfbe3 */
  goto L_11ccfbe3;
L_11ccfc19:;
  /* 11ccfc19 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11ccfc1b push 0x11cfa01c */
  push32((uint32_t)(0x11cfa01cu));
  /* 11ccfc20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccfc22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfc25 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11ccfc2c push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfc2d call 0x11ccb4c0 */
  push32(0x11ccfc32u); f_11ccb4c0();
  /* 11ccfc32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfc35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ccfc38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfc3b mov dword ptr [0x11cff4e4], edx */
  w32((uint32_t)(0x11cff4e4), (EDX));
  /* 11ccfc41 cmp dword ptr [0x11cff4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfc48 jne 0x11ccfc54 */
  if (!C.zf) goto L_11ccfc54;
  /* 11ccfc4a push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccfc4c call 0x11cc9f30 */
  push32(0x11ccfc51u); f_11cc9f30();
  /* 11ccfc51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccfc54:;
  /* 11ccfc54 mov eax, dword ptr [0x11cff438] */
  EAX = (r32((uint32_t)(0x11cff438)));
  /* 11ccfc59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccfc5c jmp 0x11ccfc67 */
  goto L_11ccfc67;
L_11ccfc5e:;
  /* 11ccfc5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfc61 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfc64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccfc67:;
  /* 11ccfc67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfc6a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccfc6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccfc6f je 0x11ccfcd7 */
  if (C.zf) goto L_11ccfcd7;
  /* 11ccfc71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfc74 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfc75 call 0x11cd0a80 */
  push32(0x11ccfc7au); f_11cd0a80();
  /* 11ccfc7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfc7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfc80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ccfc83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfc86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccfc89 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfc8c je 0x11ccfcd5 */
  if (C.zf) goto L_11ccfcd5;
  /* 11ccfc8e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11ccfc90 push 0x11cfa01c */
  push32((uint32_t)(0x11cfa01cu));
  /* 11ccfc95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccfc97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccfc9a push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfc9b call 0x11ccb4c0 */
  push32(0x11ccfca0u); f_11ccb4c0();
  /* 11ccfca0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfca3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfca6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ccfca8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfcab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfcae jne 0x11ccfcba */
  if (!C.zf) goto L_11ccfcba;
  /* 11ccfcb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ccfcb2 call 0x11cc9f30 */
  push32(0x11ccfcb7u); f_11cc9f30();
  /* 11ccfcb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccfcba:;
  /* 11ccfcba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfcbd push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfcbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfcc1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ccfcc3 push eax */
  push32((uint32_t)(EAX));
  /* 11ccfcc4 call 0x11cd0c00 */
  push32(0x11ccfcc9u); f_11cd0c00();
  /* 11ccfcc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfccc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfccf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfcd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ccfcd5:;
  /* 11ccfcd5 jmp 0x11ccfc5e */
  goto L_11ccfc5e;
L_11ccfcd7:;
  /* 11ccfcd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccfcd9 mov edx, dword ptr [0x11cff438] */
  EDX = (r32((uint32_t)(0x11cff438)));
  /* 11ccfcdf push edx */
  push32((uint32_t)(EDX));
  /* 11ccfce0 call 0x11ccbf50 */
  push32(0x11ccfce5u); f_11ccbf50();
  /* 11ccfce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfce8 mov dword ptr [0x11cff438], 0 */
  w32((uint32_t)(0x11cff438), (0x0u));
  /* 11ccfcf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfcf5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ccfcfb mov dword ptr [0x11d00f60], 1 */
  w32((uint32_t)(0x11d00f60), (0x1u));
  /* 11ccfd05 mov esp, ebp */
  ESP = (EBP);
  /* 11ccfd07 pop ebp */
  EBP = (pop32());
  /* 11ccfd08 ret  */
  ESPCHK(0x11ccfbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x11ccfd10 (216 bytes, 69 insns) */
void f_11ccfd10(void) {
  FTRACE(0x11ccfd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccfd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccfd11 mov ebp, esp */
  EBP = (ESP);
  /* 11ccfd13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfd16 cmp dword ptr [0x11d00f70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00f70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfd1d jne 0x11ccfd24 */
  if (!C.zf) goto L_11ccfd24;
  /* 11ccfd1f call 0x11cd64d0 */
  push32(0x11ccfd24u); f_11cd64d0();
L_11ccfd24:;
  /* 11ccfd24 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ccfd29 push 0x11cff50c */
  push32((uint32_t)(0x11cff50cu));
  /* 11ccfd2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccfd30 call dword ptr [0x11d013ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013ec))), 0x11ccfd36u);
  /* 11ccfd36 mov dword ptr [0x11cff4f4], 0x11cff50c */
  w32((uint32_t)(0x11cff4f4), (0x11cff50cu));
  /* 11ccfd40 mov eax, dword ptr [0x11d00f94] */
  EAX = (r32((uint32_t)(0x11d00f94)));
  /* 11ccfd45 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccfd48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ccfd4a jne 0x11ccfd57 */
  if (!C.zf) goto L_11ccfd57;
  /* 11ccfd4c mov edx, dword ptr [0x11cff4f4] */
  EDX = (r32((uint32_t)(0x11cff4f4)));
  /* 11ccfd52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ccfd55 jmp 0x11ccfd5f */
  goto L_11ccfd5f;
L_11ccfd57:;
  /* 11ccfd57 mov eax, dword ptr [0x11d00f94] */
  EAX = (r32((uint32_t)(0x11d00f94)));
  /* 11ccfd5c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ccfd5f:;
  /* 11ccfd5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ccfd62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ccfd65 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11ccfd68 push edx */
  push32((uint32_t)(EDX));
  /* 11ccfd69 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ccfd6c push eax */
  push32((uint32_t)(EAX));
  /* 11ccfd6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccfd6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ccfd71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccfd74 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfd75 call 0x11ccfdf0 */
  push32(0x11ccfd7au); f_11ccfdf0();
  /* 11ccfd7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfd7d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11ccfd82 push 0x11cfa028 */
  push32((uint32_t)(0x11cfa028u));
  /* 11ccfd87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ccfd89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfd8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfd8f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11ccfd92 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfd93 call 0x11ccb4c0 */
  push32(0x11ccfd98u); f_11ccb4c0();
  /* 11ccfd98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfd9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ccfd9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfda2 jne 0x11ccfdae */
  if (!C.zf) goto L_11ccfdae;
  /* 11ccfda4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ccfda6 call 0x11cc9f30 */
  push32(0x11ccfdabu); f_11cc9f30();
  /* 11ccfdab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ccfdae:;
  /* 11ccfdae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11ccfdb1 push edx */
  push32((uint32_t)(EDX));
  /* 11ccfdb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ccfdb5 push eax */
  push32((uint32_t)(EAX));
  /* 11ccfdb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfdb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfdbc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11ccfdbf push eax */
  push32((uint32_t)(EAX));
  /* 11ccfdc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ccfdc4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ccfdc7 push edx */
  push32((uint32_t)(EDX));
  /* 11ccfdc8 call 0x11ccfdf0 */
  push32(0x11ccfdcdu); f_11ccfdf0();
  /* 11ccfdcd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfdd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccfdd3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfdd6 mov dword ptr [0x11cff4d8], eax */
  w32((uint32_t)(0x11cff4d8), (EAX));
  /* 11ccfddb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ccfdde mov dword ptr [0x11cff4dc], ecx */
  w32((uint32_t)(0x11cff4dc), (ECX));
  /* 11ccfde4 mov esp, ebp */
  ESP = (EBP);
  /* 11ccfde6 pop ebp */
  EBP = (pop32());
  /* 11ccfde7 ret  */
  ESPCHK(0x11ccfd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdf0 @ 0x11ccfdf0 (1060 bytes, 360 insns) */
void f_11ccfdf0(void) {
  FTRACE(0x11ccfdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ccfdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ccfdf1 mov ebp, esp */
  EBP = (ESP);
  /* 11ccfdf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccfdf6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfdf9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ccfdff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ccfe02 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11ccfe08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ccfe0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccfe0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfe12 je 0x11ccfe25 */
  if (C.zf) goto L_11ccfe25;
  /* 11ccfe14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccfe17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfe1a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ccfe1c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ccfe1f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfe22 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11ccfe25:;
  /* 11ccfe25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe28 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccfe2b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfe2e jne 0x11ccfefd */
  if (!C.zf) goto L_11ccfefd;
L_11ccfe34:;
  /* 11ccfe34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfe3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccfe3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe40 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccfe43 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfe46 je 0x11ccfec2 */
  if (C.zf) goto L_11ccfec2;
  /* 11ccfe48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe4b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccfe4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccfe50 je 0x11ccfec2 */
  if (C.zf) goto L_11ccfec2;
  /* 11ccfe52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccfe57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ccfe59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ccfe5b mov al, byte ptr [edx + 0x11cff981] */
  AL = (r8((uint32_t)(EDX + 0x11cff981)));
  /* 11ccfe61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ccfe64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccfe66 je 0x11ccfe97 */
  if (C.zf) goto L_11ccfe97;
  /* 11ccfe68 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfe6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccfe6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfe70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfe73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ccfe75 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfe79 je 0x11ccfe97 */
  if (C.zf) goto L_11ccfe97;
  /* 11ccfe7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfe7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ccfe83 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ccfe85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfe88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfe8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11ccfe8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfe91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfe94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccfe97:;
  /* 11ccfe97 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfe9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccfe9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfe9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfea2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccfea4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfea8 je 0x11ccfebd */
  if (C.zf) goto L_11ccfebd;
  /* 11ccfeaa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfead mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfeb0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ccfeb2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ccfeb4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfeb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfeba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11ccfebd:;
  /* 11ccfebd jmp 0x11ccfe34 */
  goto L_11ccfe34;
L_11ccfec2:;
  /* 11ccfec2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfec5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ccfec7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfeca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccfecd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ccfecf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfed3 je 0x11ccfee4 */
  if (C.zf) goto L_11ccfee4;
  /* 11ccfed5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfed8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11ccfedb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccfede add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfee1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11ccfee4:;
  /* 11ccfee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfee7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccfeea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfeed jne 0x11ccfef8 */
  if (!C.zf) goto L_11ccfef8;
  /* 11ccfeef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfef2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfef5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ccfef8:;
  /* 11ccfef8 jmp 0x11ccffcc */
  goto L_11ccffcc;
L_11ccfefd:;
  /* 11ccfefd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccff00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccff02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccff05 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccff08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccff0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccff0e je 0x11ccff23 */
  if (C.zf) goto L_11ccff23;
  /* 11ccff10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccff13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccff16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ccff18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ccff1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccff1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccff20 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11ccff23:;
  /* 11ccff23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccff26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ccff28 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11ccff2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccff2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccff31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccff34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccff37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccff3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ccff3f mov dl, byte ptr [ecx + 0x11cff981] */
  DL = (r8((uint32_t)(ECX + 0x11cff981)));
  /* 11ccff45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ccff48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccff4a je 0x11ccff7b */
  if (C.zf) goto L_11ccff7b;
  /* 11ccff4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccff4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ccff51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccff54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ccff57 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ccff59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccff5d je 0x11ccff72 */
  if (C.zf) goto L_11ccff72;
  /* 11ccff5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccff62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccff65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ccff67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11ccff69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccff6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccff6f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11ccff72:;
  /* 11ccff72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccff75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccff78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ccff7b:;
  /* 11ccff7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccff7e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccff84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccff87 je 0x11ccffa7 */
  if (C.zf) goto L_11ccffa7;
  /* 11ccff89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccff8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ccff91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccff93 je 0x11ccffa7 */
  if (C.zf) goto L_11ccffa7;
  /* 11ccff95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccff98 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ccff9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccffa1 jne 0x11ccfefd */
  if (!C.zf) goto L_11ccfefd;
L_11ccffa7:;
  /* 11ccffa7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ccffaa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ccffb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ccffb2 jne 0x11ccffbf */
  if (!C.zf) goto L_11ccffbf;
  /* 11ccffb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccffb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ccffba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ccffbd jmp 0x11ccffcc */
  goto L_11ccffcc;
L_11ccffbf:;
  /* 11ccffbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccffc3 je 0x11ccffcc */
  if (C.zf) goto L_11ccffcc;
  /* 11ccffc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ccffc8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11ccffcc:;
  /* 11ccffcc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11ccffd3:;
  /* 11ccffd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccffd6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ccffd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ccffdb je 0x11ccfffe */
  if (C.zf) goto L_11ccfffe;
L_11ccffdd:;
  /* 11ccffdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccffe0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ccffe3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccffe6 je 0x11ccfff3 */
  if (C.zf) goto L_11ccfff3;
  /* 11ccffe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccffeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ccffee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ccfff1 jne 0x11ccfffe */
  if (!C.zf) goto L_11ccfffe;
L_11ccfff3:;
  /* 11ccfff3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ccfff6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ccfff9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ccfffc jmp 0x11ccffdd */
  goto L_11ccffdd;
L_11ccfffe:;
  /* 11ccfffe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0001 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd0004 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd0006 jne 0x11cd000d */
  if (!C.zf) goto L_11cd000d;
  /* 11cd0008 jmp 0x11cd01eb */
  goto L_11cd01eb;
L_11cd000d:;
  /* 11cd000d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0011 je 0x11cd0024 */
  if (C.zf) goto L_11cd0024;
  /* 11cd0013 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0016 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0019 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd001b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd001e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0021 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11cd0024:;
  /* 11cd0024 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd0027 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd0029 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd002c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd002f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11cd0031:;
  /* 11cd0031 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11cd0038 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11cd003f:;
  /* 11cd003f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0042 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd0045 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0048 jne 0x11cd005e */
  if (!C.zf) goto L_11cd005e;
  /* 11cd004a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd004d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0050 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd0053 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd0056 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0059 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd005c jmp 0x11cd003f */
  goto L_11cd003f;
L_11cd005e:;
  /* 11cd005e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0061 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd0064 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0067 jne 0x11cd00ba */
  if (!C.zf) goto L_11cd00ba;
  /* 11cd0069 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd006c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd006e mov ecx, 2 */
  ECX = (0x2u);
  /* 11cd0073 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd0075 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd0077 jne 0x11cd00b2 */
  if (!C.zf) goto L_11cd00b2;
  /* 11cd0079 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd007d je 0x11cd009f */
  if (C.zf) goto L_11cd009f;
  /* 11cd007f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0082 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11cd0086 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0089 jne 0x11cd0096 */
  if (!C.zf) goto L_11cd0096;
  /* 11cd008b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd008e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0091 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd0094 jmp 0x11cd009d */
  goto L_11cd009d;
L_11cd0096:;
  /* 11cd0096 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cd009d:;
  /* 11cd009d jmp 0x11cd00a6 */
  goto L_11cd00a6;
L_11cd009f:;
  /* 11cd009f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11cd00a6:;
  /* 11cd00a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd00a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd00ac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11cd00af mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11cd00b2:;
  /* 11cd00b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd00b5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd00b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11cd00ba:;
  /* 11cd00ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd00bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd00c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd00c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd00c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd00c8 je 0x11cd00ee */
  if (C.zf) goto L_11cd00ee;
  /* 11cd00ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd00ce je 0x11cd00df */
  if (C.zf) goto L_11cd00df;
  /* 11cd00d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd00d3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11cd00d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd00d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd00dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11cd00df:;
  /* 11cd00df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd00e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd00e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd00e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd00ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd00ec jmp 0x11cd00ba */
  goto L_11cd00ba;
L_11cd00ee:;
  /* 11cd00ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd00f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd00f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd00f6 je 0x11cd0114 */
  if (C.zf) goto L_11cd0114;
  /* 11cd00f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd00fc jne 0x11cd0119 */
  if (!C.zf) goto L_11cd0119;
  /* 11cd00fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0101 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd0104 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0107 je 0x11cd0114 */
  if (C.zf) goto L_11cd0114;
  /* 11cd0109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd010c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd010f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0112 jne 0x11cd0119 */
  if (!C.zf) goto L_11cd0119;
L_11cd0114:;
  /* 11cd0114 jmp 0x11cd01c4 */
  goto L_11cd01c4;
L_11cd0119:;
  /* 11cd0119 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd011d je 0x11cd01b6 */
  if (C.zf) goto L_11cd01b6;
  /* 11cd0123 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0127 je 0x11cd017d */
  if (C.zf) goto L_11cd017d;
  /* 11cd0129 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd012c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd012e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd0130 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd0132 mov cl, byte ptr [eax + 0x11cff981] */
  CL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11cd0138 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd013b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd013d je 0x11cd0168 */
  if (C.zf) goto L_11cd0168;
  /* 11cd013f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0145 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd0147 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11cd0149 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd014c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd014f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11cd0152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0155 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0158 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd015b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd015e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd0160 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0163 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd0166 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd0168:;
  /* 11cd0168 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd016b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd016e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd0170 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11cd0172 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0175 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0178 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11cd017b jmp 0x11cd01a9 */
  goto L_11cd01a9;
L_11cd017d:;
  /* 11cd017d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0182 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd0184 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd0186 mov cl, byte ptr [eax + 0x11cff981] */
  CL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11cd018c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd018f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd0191 je 0x11cd01a9 */
  if (C.zf) goto L_11cd01a9;
  /* 11cd0193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0196 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0199 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd019c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd019f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd01a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd01a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd01a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd01a9:;
  /* 11cd01a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd01ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd01ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd01b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd01b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd01b6:;
  /* 11cd01b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd01b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd01bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd01bf jmp 0x11cd0031 */
  goto L_11cd0031;
L_11cd01c4:;
  /* 11cd01c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd01c8 je 0x11cd01d9 */
  if (C.zf) goto L_11cd01d9;
  /* 11cd01ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd01cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11cd01d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd01d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd01d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11cd01d9:;
  /* 11cd01d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd01dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd01de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd01e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cd01e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cd01e6 jmp 0x11ccffd3 */
  goto L_11ccffd3;
L_11cd01eb:;
  /* 11cd01eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd01ef je 0x11cd0203 */
  if (C.zf) goto L_11cd0203;
  /* 11cd01f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd01f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd01fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd01fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0200 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11cd0203:;
  /* 11cd0203 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd0206 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd0208 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd020b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd020e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd0210 mov esp, ebp */
  ESP = (EBP);
  /* 11cd0212 pop ebp */
  EBP = (pop32());
  /* 11cd0213 ret  */
  ESPCHK(0x11ccfdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x11cd0220 (537 bytes, 173 insns) */
void f_11cd0220(void) {
  FTRACE(0x11cd0220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0220 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0221 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0223 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0226 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11cd022d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11cd0234 cmp dword ptr [0x11cff610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd023b jne 0x11cd027a */
  if (!C.zf) goto L_11cd027a;
  /* 11cd023d call dword ptr [0x11d01388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01388))), 0x11cd0243u);
  /* 11cd0243 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd0246 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd024a je 0x11cd0258 */
  if (C.zf) goto L_11cd0258;
  /* 11cd024c mov dword ptr [0x11cff610], 1 */
  w32((uint32_t)(0x11cff610), (0x1u));
  /* 11cd0256 jmp 0x11cd027a */
  goto L_11cd027a;
L_11cd0258:;
  /* 11cd0258 call dword ptr [0x11d0138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0138c))), 0x11cd025eu);
  /* 11cd025e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd0261 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0265 je 0x11cd0273 */
  if (C.zf) goto L_11cd0273;
  /* 11cd0267 mov dword ptr [0x11cff610], 2 */
  w32((uint32_t)(0x11cff610), (0x2u));
  /* 11cd0271 jmp 0x11cd027a */
  goto L_11cd027a;
L_11cd0273:;
  /* 11cd0273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0275 jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd027a:;
  /* 11cd027a cmp dword ptr [0x11cff610], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff610))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0281 jne 0x11cd037e */
  if (!C.zf) goto L_11cd037e;
  /* 11cd0287 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd028b jne 0x11cd02a3 */
  if (!C.zf) goto L_11cd02a3;
  /* 11cd028d call dword ptr [0x11d01388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01388))), 0x11cd0293u);
  /* 11cd0293 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd0296 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd029a jne 0x11cd02a3 */
  if (!C.zf) goto L_11cd02a3;
  /* 11cd029c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd029e jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd02a3:;
  /* 11cd02a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd02a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd02a9:;
  /* 11cd02a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd02ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd02ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11cd02b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd02b3 je 0x11cd02d5 */
  if (C.zf) goto L_11cd02d5;
  /* 11cd02b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd02b8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd02bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd02be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd02c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd02c3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11cd02c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd02c8 jne 0x11cd02d3 */
  if (!C.zf) goto L_11cd02d3;
  /* 11cd02ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd02cd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd02d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd02d3:;
  /* 11cd02d3 jmp 0x11cd02a9 */
  goto L_11cd02a9;
L_11cd02d5:;
  /* 11cd02d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd02d8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd02db sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd02dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd02e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd02e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd02e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd02e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd02e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd02eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd02ee push edx */
  push32((uint32_t)(EDX));
  /* 11cd02ef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd02f2 push eax */
  push32((uint32_t)(EAX));
  /* 11cd02f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd02f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd02f7 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cd02fdu);
  /* 11cd02fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd0300 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0304 je 0x11cd0324 */
  if (C.zf) goto L_11cd0324;
  /* 11cd0306 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11cd0308 push 0x11cfa034 */
  push32((uint32_t)(0x11cfa034u));
  /* 11cd030d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd030f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd0312 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0313 call 0x11ccb4c0 */
  push32(0x11cd0318u); f_11ccb4c0();
  /* 11cd0318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd031b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd031e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0322 jne 0x11cd0335 */
  if (!C.zf) goto L_11cd0335;
L_11cd0324:;
  /* 11cd0324 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd0327 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0328 call dword ptr [0x11d01394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01394))), 0x11cd032eu);
  /* 11cd032e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0330 jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd0335:;
  /* 11cd0335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0337 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0339 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd033c push eax */
  push32((uint32_t)(EAX));
  /* 11cd033d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd0340 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0344 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0345 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd0348 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0349 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd034b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd034d call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cd0353u);
  /* 11cd0353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd0355 jne 0x11cd036c */
  if (!C.zf) goto L_11cd036c;
  /* 11cd0357 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd0359 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd035c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd035d call 0x11ccbf50 */
  push32(0x11cd0362u); f_11ccbf50();
  /* 11cd0362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0365 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11cd036c:;
  /* 11cd036c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd036f push edx */
  push32((uint32_t)(EDX));
  /* 11cd0370 call dword ptr [0x11d01394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01394))), 0x11cd0376u);
  /* 11cd0376 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd0379 jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd037e:;
  /* 11cd037e cmp dword ptr [0x11cff610], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11cff610))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0385 jne 0x11cd0433 */
  if (!C.zf) goto L_11cd0433;
  /* 11cd038b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd038f jne 0x11cd03a7 */
  if (!C.zf) goto L_11cd03a7;
  /* 11cd0391 call dword ptr [0x11d0138c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0138c))), 0x11cd0397u);
  /* 11cd0397 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd039a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd039e jne 0x11cd03a7 */
  if (!C.zf) goto L_11cd03a7;
  /* 11cd03a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd03a2 jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd03a7:;
  /* 11cd03a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd03aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd03ad:;
  /* 11cd03ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd03b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd03b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd03b5 je 0x11cd03d5 */
  if (C.zf) goto L_11cd03d5;
  /* 11cd03b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd03ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd03bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd03c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd03c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd03c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd03c8 jne 0x11cd03d3 */
  if (!C.zf) goto L_11cd03d3;
  /* 11cd03ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd03cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd03d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd03d3:;
  /* 11cd03d3 jmp 0x11cd03ad */
  goto L_11cd03ad;
L_11cd03d5:;
  /* 11cd03d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd03d8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd03db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd03de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd03e1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11cd03e6 push 0x11cfa034 */
  push32((uint32_t)(0x11cfa034u));
  /* 11cd03eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd03ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd03f0 push edx */
  push32((uint32_t)(EDX));
  /* 11cd03f1 call 0x11ccb4c0 */
  push32(0x11cd03f6u); f_11ccb4c0();
  /* 11cd03f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd03f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd03fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0400 jne 0x11cd0410 */
  if (!C.zf) goto L_11cd0410;
  /* 11cd0402 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd0405 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0406 call dword ptr [0x11d01398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01398))), 0x11cd040cu);
  /* 11cd040c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd040e jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd0410:;
  /* 11cd0410 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd0413 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0414 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd0417 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0418 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd041b push eax */
  push32((uint32_t)(EAX));
  /* 11cd041c call 0x11cd6500 */
  push32(0x11cd0421u); f_11cd6500();
  /* 11cd0421 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0424 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd0427 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0428 call dword ptr [0x11d01398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01398))), 0x11cd042eu);
  /* 11cd042e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd0431 jmp 0x11cd0435 */
  goto L_11cd0435;
L_11cd0433:;
  /* 11cd0433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd0435:;
  /* 11cd0435 mov esp, ebp */
  ESP = (EBP);
  /* 11cd0437 pop ebp */
  EBP = (pop32());
  /* 11cd0438 ret  */
  ESPCHK(0x11cd0220u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x11cd0440 (77 bytes, 25 insns) */
void f_11cd0440(void) {
  FTRACE(0x11cd0440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0440 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0441 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0443 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0445 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cd044a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd044c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0450 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11cd0453 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0454 call dword ptr [0x11d01380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01380))), 0x11cd045au);
  /* 11cd045a mov dword ptr [0x11d00e08], eax */
  w32((uint32_t)(0x11d00e08), (EAX));
  /* 11cd045f cmp dword ptr [0x11d00e08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00e08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0466 jne 0x11cd046c */
  if (!C.zf) goto L_11cd046c;
  /* 11cd0468 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd046a jmp 0x11cd048b */
  goto L_11cd048b;
L_11cd046c:;
  /* 11cd046c call 0x11cd31f0 */
  push32(0x11cd0471u); f_11cd31f0();
  /* 11cd0471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd0473 jne 0x11cd0486 */
  if (!C.zf) goto L_11cd0486;
  /* 11cd0475 mov ecx, dword ptr [0x11d00e08] */
  ECX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd047b push ecx */
  push32((uint32_t)(ECX));
  /* 11cd047c call dword ptr [0x11d01390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01390))), 0x11cd0482u);
  /* 11cd0482 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0484 jmp 0x11cd048b */
  goto L_11cd048b;
L_11cd0486:;
  /* 11cd0486 mov eax, 1 */
  EAX = (0x1u);
L_11cd048b:;
  /* 11cd048b pop ebp */
  EBP = (pop32());
  /* 11cd048c ret  */
  ESPCHK(0x11cd0440u, _esp0);
  ESP += 4; return;
}

/* FUN_10010490 @ 0x11cd0490 (156 bytes, 48 insns) */
void f_11cd0490(void) {
  FTRACE(0x11cd0490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0490 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0491 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0496 mov eax, dword ptr [0x11d00e04] */
  EAX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd049b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd049e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd04a5 jmp 0x11cd04b0 */
  goto L_11cd04b0;
L_11cd04a7:;
  /* 11cd04a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd04aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd04ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd04b0:;
  /* 11cd04b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd04b3 cmp edx, dword ptr [0x11d00e00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d00e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd04b9 jge 0x11cd0506 */
  if ((C.sf==C.of)) goto L_11cd0506;
  /* 11cd04bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11cd04c0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11cd04c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd04c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd04cb push ecx */
  push32((uint32_t)(ECX));
  /* 11cd04cc call dword ptr [0x11d01384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01384))), 0x11cd04d2u);
  /* 11cd04d2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cd04d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd04d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd04dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cd04df push eax */
  push32((uint32_t)(EAX));
  /* 11cd04e0 call dword ptr [0x11d01384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01384))), 0x11cd04e6u);
  /* 11cd04e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd04e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cd04ec push edx */
  push32((uint32_t)(EDX));
  /* 11cd04ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd04ef mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd04f4 push eax */
  push32((uint32_t)(EAX));
  /* 11cd04f5 call dword ptr [0x11d0137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0137c))), 0x11cd04fbu);
  /* 11cd04fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd04fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0501 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd0504 jmp 0x11cd04a7 */
  goto L_11cd04a7;
L_11cd0506:;
  /* 11cd0506 mov edx, dword ptr [0x11d00e04] */
  EDX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd050c push edx */
  push32((uint32_t)(EDX));
  /* 11cd050d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd050f mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd0514 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0515 call dword ptr [0x11d0137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0137c))), 0x11cd051bu);
  /* 11cd051b mov ecx, dword ptr [0x11d00e08] */
  ECX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd0521 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0522 call dword ptr [0x11d01390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01390))), 0x11cd0528u);
  /* 11cd0528 mov esp, ebp */
  ESP = (EBP);
  /* 11cd052a pop ebp */
  EBP = (pop32());
  /* 11cd052b ret  */
  ESPCHK(0x11cd0490u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11cd0530 (73 bytes, 19 insns) */
void f_11cd0530(void) {
  FTRACE(0x11cd0530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0530 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0531 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0533 cmp dword ptr [0x11cff440], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff440))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd053a je 0x11cd054e */
  if (C.zf) goto L_11cd054e;
  /* 11cd053c cmp dword ptr [0x11cff440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0543 jne 0x11cd0577 */
  if (!C.zf) goto L_11cd0577;
  /* 11cd0545 cmp dword ptr [0x11cff444], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff444))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd054c jne 0x11cd0577 */
  if (!C.zf) goto L_11cd0577;
L_11cd054e:;
  /* 11cd054e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11cd0553 call 0x11cd0580 */
  push32(0x11cd0558u); f_11cd0580();
  /* 11cd0558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd055b cmp dword ptr [0x11cff614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0562 je 0x11cd056a */
  if (C.zf) goto L_11cd056a;
  /* 11cd0564 call dword ptr [0x11cff614] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff614))), 0x11cd056au);
L_11cd056a:;
  /* 11cd056a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11cd056f call 0x11cd0580 */
  push32(0x11cd0574u); f_11cd0580();
  /* 11cd0574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd0577:;
  /* 11cd0577 pop ebp */
  EBP = (pop32());
  /* 11cd0578 ret  */
  ESPCHK(0x11cd0530u, _esp0);
  ESP += 4; return;
}

/* FUN_10010580 @ 0x11cd0580 (447 bytes, 131 insns) */
void f_11cd0580(void) {
  FTRACE(0x11cd0580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0580 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0581 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0583 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0589 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd058a push esi */
  push32((uint32_t)(ESI));
  /* 11cd058b push edi */
  push32((uint32_t)(EDI));
  /* 11cd058c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd0593 jmp 0x11cd059e */
  goto L_11cd059e;
L_11cd0595:;
  /* 11cd0595 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0598 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd059b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd059e:;
  /* 11cd059e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd05a2 jae 0x11cd05b7 */
  if (!C.cf) goto L_11cd05b7;
  /* 11cd05a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd05a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd05aa cmp edx, dword ptr [ecx*8 + 0x11cfcf68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11cfcf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd05b1 jne 0x11cd05b5 */
  if (!C.zf) goto L_11cd05b5;
  /* 11cd05b3 jmp 0x11cd05b7 */
  goto L_11cd05b7;
L_11cd05b5:;
  /* 11cd05b5 jmp 0x11cd0595 */
  goto L_11cd0595;
L_11cd05b7:;
  /* 11cd05b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd05ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd05bd cmp ecx, dword ptr [eax*8 + 0x11cfcf68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11cfcf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd05c4 jne 0x11cd0738 */
  if (!C.zf) goto L_11cd0738;
  /* 11cd05ca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd05d1 je 0x11cd05f4 */
  if (C.zf) goto L_11cd05f4;
  /* 11cd05d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd05d6 mov eax, dword ptr [edx*8 + 0x11cfcf6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11cfcf6c)));
  /* 11cd05dd push eax */
  push32((uint32_t)(EAX));
  /* 11cd05de push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd05e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd05e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd05e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd05e6 call 0x11cca080 */
  push32(0x11cd05ebu); f_11cca080();
  /* 11cd05eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd05ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd05f1 jne 0x11cd05f4 */
  if (!C.zf) goto L_11cd05f4;
  /* 11cd05f3 int3  */
  x86_unimpl("int3 @ 0x11cd05f3");
L_11cd05f4:;
  /* 11cd05f4 cmp dword ptr [0x11cff440], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff440))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd05fb je 0x11cd060f */
  if (C.zf) goto L_11cd060f;
  /* 11cd05fd cmp dword ptr [0x11cff440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0604 jne 0x11cd0648 */
  if (!C.zf) goto L_11cd0648;
  /* 11cd0606 cmp dword ptr [0x11cff444], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cff444))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd060d jne 0x11cd0648 */
  if (!C.zf) goto L_11cd0648;
L_11cd060f:;
  /* 11cd060f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0611 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11cd0614 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0615 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0618 mov eax, dword ptr [edx*8 + 0x11cfcf6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11cfcf6c)));
  /* 11cd061f push eax */
  push32((uint32_t)(EAX));
  /* 11cd0620 call 0x11cd0a80 */
  push32(0x11cd0625u); f_11cd0a80();
  /* 11cd0625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0628 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd062c mov edx, dword ptr [ecx*8 + 0x11cfcf6c] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11cfcf6c)));
  /* 11cd0633 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0634 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11cd0636 call dword ptr [0x11d013d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d0))), 0x11cd063cu);
  /* 11cd063c push eax */
  push32((uint32_t)(EAX));
  /* 11cd063d call dword ptr [0x11d013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d4))), 0x11cd0643u);
  /* 11cd0643 jmp 0x11cd0738 */
  goto L_11cd0738;
L_11cd0648:;
  /* 11cd0648 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd064f je 0x11cd0738 */
  if (C.zf) goto L_11cd0738;
  /* 11cd0655 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11cd065a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11cd0660 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0661 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0663 call dword ptr [0x11d013ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013ec))), 0x11cd0669u);
  /* 11cd0669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd066b jne 0x11cd0681 */
  if (!C.zf) goto L_11cd0681;
  /* 11cd066d push 0x11cf96cc */
  push32((uint32_t)(0x11cf96ccu));
  /* 11cd0672 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11cd0678 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0679 call 0x11cd0c00 */
  push32(0x11cd067eu); f_11cd0c00();
  /* 11cd067e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd0681:;
  /* 11cd0681 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11cd0687 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd068a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd068d push eax */
  push32((uint32_t)(EAX));
  /* 11cd068e call 0x11cd0a80 */
  push32(0x11cd0693u); f_11cd0a80();
  /* 11cd0693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0696 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0699 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd069c jbe 0x11cd06ca */
  if ((C.cf||C.zf)) goto L_11cd06ca;
  /* 11cd069e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11cd06a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd06a5 call 0x11cd0a80 */
  push32(0x11cd06aau); f_11cd0a80();
  /* 11cd06aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd06ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd06b0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11cd06b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd06b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cd06b9 push 0x11cf96c8 */
  push32((uint32_t)(0x11cf96c8u));
  /* 11cd06be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd06c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd06c2 call 0x11cd1470 */
  push32(0x11cd06c7u); f_11cd1470();
  /* 11cd06c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd06ca:;
  /* 11cd06ca push 0x11cfa2f0 */
  push32((uint32_t)(0x11cfa2f0u));
  /* 11cd06cf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11cd06d5 push edx */
  push32((uint32_t)(EDX));
  /* 11cd06d6 call 0x11cd0c00 */
  push32(0x11cd06dbu); f_11cd0c00();
  /* 11cd06db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd06de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd06e1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd06e2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11cd06e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd06e9 call 0x11cd0c10 */
  push32(0x11cd06eeu); f_11cd0c10();
  /* 11cd06ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd06f1 push 0x11cf9640 */
  push32((uint32_t)(0x11cf9640u));
  /* 11cd06f6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11cd06fc push edx */
  push32((uint32_t)(EDX));
  /* 11cd06fd call 0x11cd0c10 */
  push32(0x11cd0702u); f_11cd0c10();
  /* 11cd0702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0705 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0708 mov ecx, dword ptr [eax*8 + 0x11cfcf6c] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11cfcf6c)));
  /* 11cd070f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0710 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11cd0716 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0717 call 0x11cd0c10 */
  push32(0x11cd071cu); f_11cd0c10();
  /* 11cd071c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd071f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11cd0724 push 0x11cfa2c8 */
  push32((uint32_t)(0x11cfa2c8u));
  /* 11cd0729 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11cd072f push eax */
  push32((uint32_t)(EAX));
  /* 11cd0730 call 0x11cd13b0 */
  push32(0x11cd0735u); f_11cd13b0();
  /* 11cd0735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd0738:;
  /* 11cd0738 pop edi */
  EDI = (pop32());
  /* 11cd0739 pop esi */
  ESI = (pop32());
  /* 11cd073a pop ebx */
  EBX = (pop32());
  /* 11cd073b mov esp, ebp */
  ESP = (EBP);
  /* 11cd073d pop ebp */
  EBP = (pop32());
  /* 11cd073e ret  */
  ESPCHK(0x11cd0580u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11cd0740 (80 bytes, 27 insns) */
void f_11cd0740(void) {
  FTRACE(0x11cd0740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0740 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0741 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0743 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd074b jmp 0x11cd0756 */
  goto L_11cd0756;
L_11cd074d:;
  /* 11cd074d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd0756:;
  /* 11cd0756 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd075a jae 0x11cd076f */
  if (!C.cf) goto L_11cd076f;
  /* 11cd075c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd075f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0762 cmp edx, dword ptr [ecx*8 + 0x11cfcf68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11cfcf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0769 jne 0x11cd076d */
  if (!C.zf) goto L_11cd076d;
  /* 11cd076b jmp 0x11cd076f */
  goto L_11cd076f;
L_11cd076d:;
  /* 11cd076d jmp 0x11cd074d */
  goto L_11cd074d;
L_11cd076f:;
  /* 11cd076f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0775 cmp ecx, dword ptr [eax*8 + 0x11cfcf68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11cfcf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd077c jne 0x11cd078a */
  if (!C.zf) goto L_11cd078a;
  /* 11cd077e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0781 mov eax, dword ptr [edx*8 + 0x11cfcf6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11cfcf6c)));
  /* 11cd0788 jmp 0x11cd078c */
  goto L_11cd078c;
L_11cd078a:;
  /* 11cd078a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd078c:;
  /* 11cd078c mov esp, ebp */
  ESP = (EBP);
  /* 11cd078e pop ebp */
  EBP = (pop32());
  /* 11cd078f ret  */
  ESPCHK(0x11cd0740u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11cd0790 (66 bytes, 28 insns) */
void f_11cd0790(void) {
  FTRACE(0x11cd0790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0790 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0791 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0793 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0797 jne 0x11cd07b7 */
  if (!C.zf) goto L_11cd07b7;
  /* 11cd0799 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd079d jge 0x11cd07b7 */
  if ((C.sf==C.of)) goto L_11cd07b7;
  /* 11cd079f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd07a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd07a4 push eax */
  push32((uint32_t)(EAX));
  /* 11cd07a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd07a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd07a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd07ac push edx */
  push32((uint32_t)(EDX));
  /* 11cd07ad call 0x11cd07e0 */
  push32(0x11cd07b2u); f_11cd07e0();
  /* 11cd07b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd07b5 jmp 0x11cd07cd */
  goto L_11cd07cd;
L_11cd07b7:;
  /* 11cd07b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd07b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd07bc push eax */
  push32((uint32_t)(EAX));
  /* 11cd07bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd07c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd07c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd07c4 push edx */
  push32((uint32_t)(EDX));
  /* 11cd07c5 call 0x11cd07e0 */
  push32(0x11cd07cau); f_11cd07e0();
  /* 11cd07ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd07cd:;
  /* 11cd07cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd07d0 pop ebp */
  EBP = (pop32());
  /* 11cd07d1 ret  */
  ESPCHK(0x11cd0790u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11cd07e0 (194 bytes, 71 insns) */
void f_11cd07e0(void) {
  FTRACE(0x11cd07e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd07e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd07e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd07e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd07e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd07e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd07ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd07f0 je 0x11cd0809 */
  if (C.zf) goto L_11cd0809;
  /* 11cd07f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd07f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11cd07f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd07fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd07fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd0801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0804 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd0806 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cd0809:;
  /* 11cd0809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd080c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cd080f:;
  /* 11cd080f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0812 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd0814 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd0817 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd081a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd081d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd081f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd0822 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cd0825 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0829 jbe 0x11cd0841 */
  if ((C.cf||C.zf)) goto L_11cd0841;
  /* 11cd082b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd082e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0831 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0834 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd0836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0839 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd083c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd083f jmp 0x11cd0855 */
  goto L_11cd0855;
L_11cd0841:;
  /* 11cd0841 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd0844 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0847 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd084a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd084c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd084f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0852 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd0855:;
  /* 11cd0855 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0859 ja 0x11cd080f */
  if ((!C.cf&&!C.zf)) goto L_11cd080f;
  /* 11cd085b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd085e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11cd0861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0864 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0867 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd086a:;
  /* 11cd086a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd086d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd086f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11cd0872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0875 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0878 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd087a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd087c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd087f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11cd0882 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11cd0884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0887 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd088a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd088d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0893 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd0896 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0899 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd089c jb 0x11cd086a */
  if (C.cf) goto L_11cd086a;
  /* 11cd089e mov esp, ebp */
  ESP = (EBP);
  /* 11cd08a0 pop ebp */
  EBP = (pop32());
  /* 11cd08a1 ret  */
  ESPCHK(0x11cd07e0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11cd08b0 (63 bytes, 24 insns) */
void f_11cd08b0(void) {
  FTRACE(0x11cd08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd08b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd08b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd08b4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd08b8 jne 0x11cd08c9 */
  if (!C.zf) goto L_11cd08c9;
  /* 11cd08ba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd08be jge 0x11cd08c9 */
  if ((C.sf==C.of)) goto L_11cd08c9;
  /* 11cd08c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd08c7 jmp 0x11cd08d0 */
  goto L_11cd08d0;
L_11cd08c9:;
  /* 11cd08c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd08d0:;
  /* 11cd08d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd08d3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd08d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd08d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd08d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd08db push edx */
  push32((uint32_t)(EDX));
  /* 11cd08dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd08df push eax */
  push32((uint32_t)(EAX));
  /* 11cd08e0 call 0x11cd07e0 */
  push32(0x11cd08e5u); f_11cd07e0();
  /* 11cd08e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd08e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd08eb mov esp, ebp */
  ESP = (EBP);
  /* 11cd08ed pop ebp */
  EBP = (pop32());
  /* 11cd08ee ret  */
  ESPCHK(0x11cd08b0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11cd08f0 (30 bytes, 14 insns) */
void f_11cd08f0(void) {
  FTRACE(0x11cd08f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd08f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd08f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd08f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd08f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd08f8 push eax */
  push32((uint32_t)(EAX));
  /* 11cd08f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd08fc push ecx */
  push32((uint32_t)(ECX));
  /* 11cd08fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0900 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0901 call 0x11cd07e0 */
  push32(0x11cd0906u); f_11cd07e0();
  /* 11cd0906 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0909 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd090c pop ebp */
  EBP = (pop32());
  /* 11cd090d ret  */
  ESPCHK(0x11cd08f0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11cd0910 (72 bytes, 28 insns) */
void f_11cd0910(void) {
  FTRACE(0x11cd0910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0910 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0911 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0913 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0914 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0918 jne 0x11cd0931 */
  if (!C.zf) goto L_11cd0931;
  /* 11cd091a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd091e jg 0x11cd0931 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd0931;
  /* 11cd0920 jl 0x11cd0928 */
  if ((C.sf!=C.of)) goto L_11cd0928;
  /* 11cd0922 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0926 jae 0x11cd0931 */
  if (!C.cf) goto L_11cd0931;
L_11cd0928:;
  /* 11cd0928 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd092f jmp 0x11cd0938 */
  goto L_11cd0938;
L_11cd0931:;
  /* 11cd0931 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd0938:;
  /* 11cd0938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd093b push eax */
  push32((uint32_t)(EAX));
  /* 11cd093c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd093f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0940 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0943 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0944 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0947 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0948 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd094b push ecx */
  push32((uint32_t)(ECX));
  /* 11cd094c call 0x11cd0960 */
  push32(0x11cd0951u); f_11cd0960();
  /* 11cd0951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0954 mov esp, ebp */
  ESP = (EBP);
  /* 11cd0956 pop ebp */
  EBP = (pop32());
  /* 11cd0957 ret  */
  ESPCHK(0x11cd0910u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11cd0960 (242 bytes, 91 insns) */
void f_11cd0960(void) {
  FTRACE(0x11cd0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0960 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0961 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0963 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0966 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0969 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd096c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0970 je 0x11cd0994 */
  if (C.zf) goto L_11cd0994;
  /* 11cd0972 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0975 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11cd0978 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd097b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd097e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd0981 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0984 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd0986 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0989 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd098c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd098e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cd0991 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11cd0994:;
  /* 11cd0994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0997 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cd099a:;
  /* 11cd099a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd099d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd099f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd09a0 push eax */
  push32((uint32_t)(EAX));
  /* 11cd09a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd09a4 push edx */
  push32((uint32_t)(EDX));
  /* 11cd09a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd09a8 push eax */
  push32((uint32_t)(EAX));
  /* 11cd09a9 call 0x11cd5c70 */
  push32(0x11cd09aeu); f_11cd5c70();
  /* 11cd09ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd09b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd09b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd09b6 push edx */
  push32((uint32_t)(EDX));
  /* 11cd09b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd09b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd09bb push eax */
  push32((uint32_t)(EAX));
  /* 11cd09bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd09bf push ecx */
  push32((uint32_t)(ECX));
  /* 11cd09c0 call 0x11cd5c00 */
  push32(0x11cd09c5u); f_11cd5c00();
  /* 11cd09c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cd09c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11cd09cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd09cf jbe 0x11cd09e7 */
  if ((C.cf||C.zf)) goto L_11cd09e7;
  /* 11cd09d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd09d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd09d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd09da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd09dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd09df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd09e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd09e5 jmp 0x11cd09fb */
  goto L_11cd09fb;
L_11cd09e7:;
  /* 11cd09e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd09ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd09ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd09f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd09f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd09f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd09f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd09fb:;
  /* 11cd09fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd09ff ja 0x11cd099a */
  if ((!C.cf&&!C.zf)) goto L_11cd099a;
  /* 11cd0a01 jb 0x11cd0a09 */
  if (C.cf) goto L_11cd0a09;
  /* 11cd0a03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0a07 ja 0x11cd099a */
  if ((!C.cf&&!C.zf)) goto L_11cd099a;
L_11cd0a09:;
  /* 11cd0a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0a0c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11cd0a0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0a12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0a15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd0a18:;
  /* 11cd0a18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0a1b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd0a1d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11cd0a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0a26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd0a28 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11cd0a2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0a2d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11cd0a30 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11cd0a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0a35 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0a38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd0a3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0a3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0a41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd0a44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0a47 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0a4a jb 0x11cd0a18 */
  if (C.cf) goto L_11cd0a18;
  /* 11cd0a4c mov esp, ebp */
  ESP = (EBP);
  /* 11cd0a4e pop ebp */
  EBP = (pop32());
  /* 11cd0a4f ret 0x14 */
  ESPCHK(0x11cd0960u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11cd0a60 (31 bytes, 15 insns) */
void f_11cd0a60(void) {
  FTRACE(0x11cd0a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0a61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0a65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd0a68 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0a69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0a6c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0a6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0a70 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0a74 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0a75 call 0x11cd0960 */
  push32(0x11cd0a7au); f_11cd0960();
  /* 11cd0a7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0a7d pop ebp */
  EBP = (pop32());
  /* 11cd0a7e ret  */
  ESPCHK(0x11cd0a60u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11cd0a80 (123 bytes, 44 insns) */
void f_11cd0a80(void) {
  FTRACE(0x11cd0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0a80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd0a84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cd0a8a je 0x11cd0aa0 */
  if (C.zf) goto L_11cd0aa0;
L_11cd0a8c:;
  /* 11cd0a8c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11cd0a8e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cd0a8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cd0a91 je 0x11cd0ad3 */
  if (C.zf) goto L_11cd0ad3;
  /* 11cd0a93 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cd0a99 jne 0x11cd0a8c */
  if (!C.zf) goto L_11cd0a8c;
  /* 11cd0a9b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11cd0aa0:;
  /* 11cd0aa0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cd0aa2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cd0aa7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0aa9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0aac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0aae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0ab1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cd0ab6 je 0x11cd0aa0 */
  if (C.zf) goto L_11cd0aa0;
  /* 11cd0ab8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cd0abb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cd0abd je 0x11cd0af1 */
  if (C.zf) goto L_11cd0af1;
  /* 11cd0abf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11cd0ac1 je 0x11cd0ae7 */
  if (C.zf) goto L_11cd0ae7;
  /* 11cd0ac3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cd0ac8 je 0x11cd0add */
  if (C.zf) goto L_11cd0add;
  /* 11cd0aca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cd0acf je 0x11cd0ad3 */
  if (C.zf) goto L_11cd0ad3;
  /* 11cd0ad1 jmp 0x11cd0aa0 */
  goto L_11cd0aa0;
L_11cd0ad3:;
  /* 11cd0ad3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11cd0ad6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd0ada sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0adc ret  */
  ESPCHK(0x11cd0a80u, _esp0);
  ESP += 4; return;
L_11cd0add:;
  /* 11cd0add lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11cd0ae0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd0ae4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0ae6 ret  */
  ESPCHK(0x11cd0a80u, _esp0);
  ESP += 4; return;
L_11cd0ae7:;
  /* 11cd0ae7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11cd0aea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd0aee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0af0 ret  */
  ESPCHK(0x11cd0a80u, _esp0);
  ESP += 4; return;
L_11cd0af1:;
  /* 11cd0af1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11cd0af4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd0af8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0afa ret  */
  ESPCHK(0x11cd0a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b00 @ 0x11cd0b00 (249 bytes, 93 insns) */
void f_11cd0b00(void) {
  FTRACE(0x11cd0b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0b01 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0b03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0b06 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd0b07 push esi */
  push32((uint32_t)(ESI));
  /* 11cd0b08 push edi */
  push32((uint32_t)(EDI));
  /* 11cd0b09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11cd0b0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cd0b0f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11cd0b12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11cd0b15:;
  /* 11cd0b15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0b19 jne 0x11cd0b39 */
  if (!C.zf) goto L_11cd0b39;
  /* 11cd0b1b push 0x11cf94c4 */
  push32((uint32_t)(0x11cf94c4u));
  /* 11cd0b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0b22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11cd0b24 push 0x11cf94b8 */
  push32((uint32_t)(0x11cf94b8u));
  /* 11cd0b29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd0b2b call 0x11cca080 */
  push32(0x11cd0b30u); f_11cca080();
  /* 11cd0b30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0b33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0b36 jne 0x11cd0b39 */
  if (!C.zf) goto L_11cd0b39;
  /* 11cd0b38 int3  */
  x86_unimpl("int3 @ 0x11cd0b38");
L_11cd0b39:;
  /* 11cd0b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd0b3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd0b3d jne 0x11cd0b15 */
  if (!C.zf) goto L_11cd0b15;
L_11cd0b3f:;
  /* 11cd0b3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0b43 jne 0x11cd0b63 */
  if (!C.zf) goto L_11cd0b63;
  /* 11cd0b45 push 0x11cf94a8 */
  push32((uint32_t)(0x11cf94a8u));
  /* 11cd0b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0b4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11cd0b4e push 0x11cf94b8 */
  push32((uint32_t)(0x11cf94b8u));
  /* 11cd0b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd0b55 call 0x11cca080 */
  push32(0x11cd0b5au); f_11cca080();
  /* 11cd0b5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0b5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0b60 jne 0x11cd0b63 */
  if (!C.zf) goto L_11cd0b63;
  /* 11cd0b62 int3  */
  x86_unimpl("int3 @ 0x11cd0b62");
L_11cd0b63:;
  /* 11cd0b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd0b67 jne 0x11cd0b3f */
  if (!C.zf) goto L_11cd0b3f;
  /* 11cd0b69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0b6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11cd0b73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0b79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd0b7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0b7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0b82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd0b84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0b87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0b8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cd0b8d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd0b90 push edx */
  push32((uint32_t)(EDX));
  /* 11cd0b91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0b94 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0b95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0b98 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0b99 call 0x11cce950 */
  push32(0x11cd0b9eu); f_11cce950();
  /* 11cd0b9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0ba1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd0ba4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0ba7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd0baa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0bad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0bb0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd0bb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0bb6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0bba jl 0x11cd0bde */
  if ((C.sf!=C.of)) goto L_11cd0bde;
  /* 11cd0bbc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0bbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd0bc1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11cd0bc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd0bc6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd0bcc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11cd0bcf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0bd2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd0bd4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0bd7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0bda mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cd0bdc jmp 0x11cd0bef */
  goto L_11cd0bef;
L_11cd0bde:;
  /* 11cd0bde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0be1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0be4 call 0x11cce6d0 */
  push32(0x11cd0be9u); f_11cce6d0();
  /* 11cd0be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0bec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11cd0bef:;
  /* 11cd0bef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd0bf2 pop edi */
  EDI = (pop32());
  /* 11cd0bf3 pop esi */
  ESI = (pop32());
  /* 11cd0bf4 pop ebx */
  EBX = (pop32());
  /* 11cd0bf5 mov esp, ebp */
  ESP = (EBP);
  /* 11cd0bf7 pop ebp */
  EBP = (pop32());
  /* 11cd0bf8 ret  */
  ESPCHK(0x11cd0b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c00 @ 0x11cd0c00 (7 bytes, 3 insns) */
void f_11cd0c00(void) {
  FTRACE(0x11cd0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0c00 push edi */
  push32((uint32_t)(EDI));
  /* 11cd0c01 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd0c05 jmp 0x11cd0c71 */
  jmp_ind(0x11cd0c71u); return;
}

/* FUN_10010c10 @ 0x11cd0c10 (224 bytes, 84 insns) */
void f_11cd0c10(void) {
  FTRACE(0x11cd0c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0c10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd0c14 push edi */
  push32((uint32_t)(EDI));
  /* 11cd0c15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cd0c1b je 0x11cd0c2c */
  if (C.zf) goto L_11cd0c2c;
L_11cd0c1d:;
  /* 11cd0c1d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11cd0c1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cd0c20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cd0c22 je 0x11cd0c5f */
  if (C.zf) goto L_11cd0c5f;
  /* 11cd0c24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cd0c2a jne 0x11cd0c1d */
  if (!C.zf) goto L_11cd0c1d;
L_11cd0c2c:;
  /* 11cd0c2c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cd0c2e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cd0c33 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0c35 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0c38 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0c3a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0c3d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cd0c42 je 0x11cd0c2c */
  if (C.zf) goto L_11cd0c2c;
  /* 11cd0c44 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cd0c47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cd0c49 je 0x11cd0c6e */
  if (C.zf) goto L_11cd0c6e;
  /* 11cd0c4b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11cd0c4d je 0x11cd0c69 */
  if (C.zf) goto L_11cd0c69;
  /* 11cd0c4f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cd0c54 je 0x11cd0c64 */
  if (C.zf) goto L_11cd0c64;
  /* 11cd0c56 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cd0c5b je 0x11cd0c5f */
  if (C.zf) goto L_11cd0c5f;
  /* 11cd0c5d jmp 0x11cd0c2c */
  goto L_11cd0c2c;
L_11cd0c5f:;
  /* 11cd0c5f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11cd0c62 jmp 0x11cd0c71 */
  goto L_11cd0c71;
L_11cd0c64:;
  /* 11cd0c64 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11cd0c67 jmp 0x11cd0c71 */
  goto L_11cd0c71;
L_11cd0c69:;
  /* 11cd0c69 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11cd0c6c jmp 0x11cd0c71 */
  goto L_11cd0c71;
L_11cd0c6e:;
  /* 11cd0c6e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11cd0c71:;
  /* 11cd0c71 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cd0c75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cd0c7b je 0x11cd0c96 */
  if (C.zf) goto L_11cd0c96;
L_11cd0c7d:;
  /* 11cd0c7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd0c7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cd0c80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cd0c82 je 0x11cd0ce8 */
  if (C.zf) goto L_11cd0ce8;
  /* 11cd0c84 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11cd0c86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd0c87 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11cd0c8d jne 0x11cd0c7d */
  if (!C.zf) goto L_11cd0c7d;
  /* 11cd0c8f jmp 0x11cd0c96 */
  goto L_11cd0c96;
L_11cd0c91:;
  /* 11cd0c91 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cd0c93 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cd0c96:;
  /* 11cd0c96 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cd0c9b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11cd0c9d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0c9f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0ca2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd0ca4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd0ca6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0ca9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cd0cae je 0x11cd0c91 */
  if (C.zf) goto L_11cd0c91;
  /* 11cd0cb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cd0cb2 je 0x11cd0ce8 */
  if (C.zf) goto L_11cd0ce8;
  /* 11cd0cb4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11cd0cb6 je 0x11cd0cdf */
  if (C.zf) goto L_11cd0cdf;
  /* 11cd0cb8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cd0cbe je 0x11cd0cd2 */
  if (C.zf) goto L_11cd0cd2;
  /* 11cd0cc0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cd0cc6 je 0x11cd0cca */
  if (C.zf) goto L_11cd0cca;
  /* 11cd0cc8 jmp 0x11cd0c91 */
  goto L_11cd0c91;
L_11cd0cca:;
  /* 11cd0cca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cd0ccc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd0cd0 pop edi */
  EDI = (pop32());
  /* 11cd0cd1 ret  */
  ESPCHK(0x11cd0c10u, _esp0);
  ESP += 4; return;
L_11cd0cd2:;
  /* 11cd0cd2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11cd0cd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd0cd9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11cd0cdd pop edi */
  EDI = (pop32());
  /* 11cd0cde ret  */
  ESPCHK(0x11cd0c10u, _esp0);
  ESP += 4; return;
L_11cd0cdf:;
  /* 11cd0cdf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11cd0ce2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd0ce6 pop edi */
  EDI = (pop32());
  /* 11cd0ce7 ret  */
  ESPCHK(0x11cd0c10u, _esp0);
  ESP += 4; return;
L_11cd0ce8:;
  /* 11cd0ce8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11cd0cea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd0cee pop edi */
  EDI = (pop32());
  /* 11cd0cef ret  */
  ESPCHK(0x11cd0c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x11cd0cf0 (243 bytes, 91 insns) */
void f_11cd0cf0(void) {
  FTRACE(0x11cd0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0cf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd0cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11cd0cf8 push edi */
  push32((uint32_t)(EDI));
  /* 11cd0cf9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11cd0cfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11cd0cff:;
  /* 11cd0cff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0d03 jne 0x11cd0d23 */
  if (!C.zf) goto L_11cd0d23;
  /* 11cd0d05 push 0x11cf94c4 */
  push32((uint32_t)(0x11cf94c4u));
  /* 11cd0d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0d0c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11cd0d0e push 0x11cfa30c */
  push32((uint32_t)(0x11cfa30cu));
  /* 11cd0d13 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd0d15 call 0x11cca080 */
  push32(0x11cd0d1au); f_11cca080();
  /* 11cd0d1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0d1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0d20 jne 0x11cd0d23 */
  if (!C.zf) goto L_11cd0d23;
  /* 11cd0d22 int3  */
  x86_unimpl("int3 @ 0x11cd0d22");
L_11cd0d23:;
  /* 11cd0d23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd0d25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd0d27 jne 0x11cd0cff */
  if (!C.zf) goto L_11cd0cff;
L_11cd0d29:;
  /* 11cd0d29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0d2d jne 0x11cd0d4d */
  if (!C.zf) goto L_11cd0d4d;
  /* 11cd0d2f push 0x11cf94a8 */
  push32((uint32_t)(0x11cf94a8u));
  /* 11cd0d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0d36 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11cd0d38 push 0x11cfa30c */
  push32((uint32_t)(0x11cfa30cu));
  /* 11cd0d3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd0d3f call 0x11cca080 */
  push32(0x11cd0d44u); f_11cca080();
  /* 11cd0d44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0d47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0d4a jne 0x11cd0d4d */
  if (!C.zf) goto L_11cd0d4d;
  /* 11cd0d4c int3  */
  x86_unimpl("int3 @ 0x11cd0d4c");
L_11cd0d4d:;
  /* 11cd0d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd0d4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd0d51 jne 0x11cd0d29 */
  if (!C.zf) goto L_11cd0d29;
  /* 11cd0d53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d56 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11cd0d5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0d63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cd0d66 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0d6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd0d6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0d74 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11cd0d77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd0d7a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0d7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd0d7e push edx */
  push32((uint32_t)(EDX));
  /* 11cd0d7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d82 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0d83 call 0x11cce950 */
  push32(0x11cd0d88u); f_11cce950();
  /* 11cd0d88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0d8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd0d8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd0d94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0d97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0d9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd0d9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0da0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0da4 jl 0x11cd0dc8 */
  if ((C.sf!=C.of)) goto L_11cd0dc8;
  /* 11cd0da6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0da9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd0dab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11cd0dae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd0db0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd0db6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11cd0db9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0dbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd0dbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0dc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0dc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd0dc6 jmp 0x11cd0dd9 */
  goto L_11cd0dd9;
L_11cd0dc8:;
  /* 11cd0dc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd0dcb push edx */
  push32((uint32_t)(EDX));
  /* 11cd0dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd0dce call 0x11cce6d0 */
  push32(0x11cd0dd3u); f_11cce6d0();
  /* 11cd0dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0dd6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11cd0dd9:;
  /* 11cd0dd9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd0ddc pop edi */
  EDI = (pop32());
  /* 11cd0ddd pop esi */
  ESI = (pop32());
  /* 11cd0dde pop ebx */
  EBX = (pop32());
  /* 11cd0ddf mov esp, ebp */
  ESP = (EBP);
  /* 11cd0de1 pop ebp */
  EBP = (pop32());
  /* 11cd0de2 ret  */
  ESPCHK(0x11cd0cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010df0 @ 0x11cd0df0 (47 bytes, 17 insns) */
void f_11cd0df0(void) {
  FTRACE(0x11cd0df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0df0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0df1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0df6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11cd0dfa jb 0x11cd0e10 */
  if (C.cf) goto L_11cd0e10;
L_11cd0dfc:;
  /* 11cd0dfc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0e02 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0e07 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11cd0e09 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e0e jae 0x11cd0dfc */
  if (!C.cf) goto L_11cd0dfc;
L_11cd0e10:;
  /* 11cd0e10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0e12 mov eax, esp */
  EAX = (ESP);
  /* 11cd0e14 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11cd0e16 mov esp, ecx */
  ESP = (ECX);
  /* 11cd0e18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd0e1a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd0e1d push eax */
  push32((uint32_t)(EAX));
  /* 11cd0e1e ret  */
  ESPCHK(0x11cd0df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e20 @ 0x11cd0e20 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11cd0e20(void) {
  FTRACE(0x11cd0e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd0e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd0e21 mov ebp, esp */
  EBP = (ESP);
  /* 11cd0e23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0e26 push esi */
  push32((uint32_t)(ESI));
  /* 11cd0e27 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e2b je 0x11cd0e33 */
  if (C.zf) goto L_11cd0e33;
  /* 11cd0e2d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e31 jne 0x11cd0e38 */
  if (!C.zf) goto L_11cd0e38;
L_11cd0e33:;
  /* 11cd0e33 jmp 0x11cd1008 */
  goto L_11cd1008;
L_11cd0e38:;
  /* 11cd0e38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e3c je 0x11cd0e54 */
  if (C.zf) goto L_11cd0e54;
  /* 11cd0e3e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e42 je 0x11cd0e54 */
  if (C.zf) goto L_11cd0e54;
  /* 11cd0e44 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e48 je 0x11cd0e54 */
  if (C.zf) goto L_11cd0e54;
  /* 11cd0e4a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e4e jne 0x11cd0f31 */
  if (!C.zf) goto L_11cd0f31;
L_11cd0e54:;
  /* 11cd0e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd0e56 call 0x11ccb3c0 */
  push32(0x11cd0e5bu); f_11ccb3c0();
  /* 11cd0e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0e5e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e62 je 0x11cd0e6a */
  if (C.zf) goto L_11cd0e6a;
  /* 11cd0e64 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e68 jne 0x11cd0eaf */
  if (!C.zf) goto L_11cd0eaf;
L_11cd0e6a:;
  /* 11cd0e6a cmp dword ptr [0x11cff628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e71 jne 0x11cd0eaf */
  if (!C.zf) goto L_11cd0eaf;
  /* 11cd0e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd0e75 push 0x11cd1050 */
  push32((uint32_t)(0x11cd1050u));
  /* 11cd0e7a call dword ptr [0x11d01374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01374))), 0x11cd0e80u);
  /* 11cd0e80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0e83 jne 0x11cd0e91 */
  if (!C.zf) goto L_11cd0e91;
  /* 11cd0e85 mov dword ptr [0x11cff628], 1 */
  w32((uint32_t)(0x11cff628), (0x1u));
  /* 11cd0e8f jmp 0x11cd0eaf */
  goto L_11cd0eaf;
L_11cd0e91:;
  /* 11cd0e91 call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cd0e97u);
  /* 11cd0e97 mov esi, eax */
  ESI = (EAX);
  /* 11cd0e99 call 0x11cd68f0 */
  push32(0x11cd0e9eu); f_11cd68f0();
  /* 11cd0e9e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11cd0ea0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd0ea2 call 0x11ccb460 */
  push32(0x11cd0ea7u); f_11ccb460();
  /* 11cd0ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0eaa jmp 0x11cd1008 */
  goto L_11cd1008;
L_11cd0eaf:;
  /* 11cd0eaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0eb2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd0eb5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd0eb8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd0ebb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd0ebe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0ec2 ja 0x11cd0f22 */
  if ((!C.cf&&!C.zf)) goto L_11cd0f22;
  /* 11cd0ec4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd0ec7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd0ec9 mov dl, byte ptr [eax + 0x11cd102f] */
  DL = (r8((uint32_t)(EAX + 0x11cd102f)));
  /* 11cd0ecf jmp dword ptr [edx*4 + 0x11cd101b] */
  switch (EDX) {
    case 0: goto L_11cd0ed6;
    case 1: goto L_11cd0f10;
    case 2: goto L_11cd0eea;
    case 3: goto L_11cd0efd;
    case 4: goto L_11cd0f22;
    default: x86_unimpl("switch@0x11cd0ecf out of table"); return;
  }
L_11cd0ed6:;
  /* 11cd0ed6 mov ecx, dword ptr [0x11cff618] */
  ECX = (r32((uint32_t)(0x11cff618)));
  /* 11cd0edc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd0edf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0ee2 mov dword ptr [0x11cff618], edx */
  w32((uint32_t)(0x11cff618), (EDX));
  /* 11cd0ee8 jmp 0x11cd0f22 */
  goto L_11cd0f22;
L_11cd0eea:;
  /* 11cd0eea mov eax, dword ptr [0x11cff61c] */
  EAX = (r32((uint32_t)(0x11cff61c)));
  /* 11cd0eef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd0ef2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0ef5 mov dword ptr [0x11cff61c], ecx */
  w32((uint32_t)(0x11cff61c), (ECX));
  /* 11cd0efb jmp 0x11cd0f22 */
  goto L_11cd0f22;
L_11cd0efd:;
  /* 11cd0efd mov edx, dword ptr [0x11cff620] */
  EDX = (r32((uint32_t)(0x11cff620)));
  /* 11cd0f03 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd0f06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0f09 mov dword ptr [0x11cff620], eax */
  w32((uint32_t)(0x11cff620), (EAX));
  /* 11cd0f0e jmp 0x11cd0f22 */
  goto L_11cd0f22;
L_11cd0f10:;
  /* 11cd0f10 mov ecx, dword ptr [0x11cff624] */
  ECX = (r32((uint32_t)(0x11cff624)));
  /* 11cd0f16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd0f19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0f1c mov dword ptr [0x11cff624], edx */
  w32((uint32_t)(0x11cff624), (EDX));
L_11cd0f22:;
  /* 11cd0f22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd0f24 call 0x11ccb460 */
  push32(0x11cd0f29u); f_11ccb460();
  /* 11cd0f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0f2c jmp 0x11cd1003 */
  goto L_11cd1003;
L_11cd0f31:;
  /* 11cd0f31 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0f35 je 0x11cd0f48 */
  if (C.zf) goto L_11cd0f48;
  /* 11cd0f37 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0f3b je 0x11cd0f48 */
  if (C.zf) goto L_11cd0f48;
  /* 11cd0f3d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0f41 je 0x11cd0f48 */
  if (C.zf) goto L_11cd0f48;
  /* 11cd0f43 jmp 0x11cd1008 */
  goto L_11cd1008;
L_11cd0f48:;
  /* 11cd0f48 call 0x11cce1c0 */
  push32(0x11cd0f4du); f_11cce1c0();
  /* 11cd0f4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd0f50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0f53 cmp dword ptr [eax + 0x50], 0x11cfd260 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11cfd260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0f5a jne 0x11cd0fa5 */
  if (!C.zf) goto L_11cd0fa5;
  /* 11cd0f5c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11cd0f61 push 0x11cfa318 */
  push32((uint32_t)(0x11cfa318u));
  /* 11cd0f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd0f68 mov ecx, dword ptr [0x11cfd2e0] */
  ECX = (r32((uint32_t)(0x11cfd2e0)));
  /* 11cd0f6e push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0f6f call 0x11ccb4c0 */
  push32(0x11cd0f74u); f_11ccb4c0();
  /* 11cd0f74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0f77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0f7a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11cd0f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0f80 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0f84 je 0x11cd0fa3 */
  if (C.zf) goto L_11cd0fa3;
  /* 11cd0f86 mov ecx, dword ptr [0x11cfd2e0] */
  ECX = (r32((uint32_t)(0x11cfd2e0)));
  /* 11cd0f8c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd0f8d push 0x11cfd260 */
  push32((uint32_t)(0x11cfd260u));
  /* 11cd0f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0f95 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11cd0f98 push eax */
  push32((uint32_t)(EAX));
  /* 11cd0f99 call 0x11cd6500 */
  push32(0x11cd0f9eu); f_11cd6500();
  /* 11cd0f9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0fa1 jmp 0x11cd0fa5 */
  goto L_11cd0fa5;
L_11cd0fa3:;
  /* 11cd0fa3 jmp 0x11cd1008 */
  goto L_11cd1008;
L_11cd0fa5:;
  /* 11cd0fa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0fa8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11cd0fab push edx */
  push32((uint32_t)(EDX));
  /* 11cd0fac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd0faf push eax */
  push32((uint32_t)(EAX));
  /* 11cd0fb0 call 0x11cd1330 */
  push32(0x11cd0fb5u); f_11cd1330();
  /* 11cd0fb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0fb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd0fbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0fbf jne 0x11cd0fc3 */
  if (!C.zf) goto L_11cd0fc3;
  /* 11cd0fc1 jmp 0x11cd1008 */
  goto L_11cd1008;
L_11cd0fc3:;
  /* 11cd0fc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0fc6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd0fc9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cd0fcc:;
  /* 11cd0fcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0fcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd0fd2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0fd5 jne 0x11cd1003 */
  if (!C.zf) goto L_11cd1003;
  /* 11cd0fd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0fda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd0fdd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd0fe0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd0fe3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0fe6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd0fe9 mov edx, dword ptr [0x11cfd2e4] */
  EDX = (r32((uint32_t)(0x11cfd2e4)));
  /* 11cd0fef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd0ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd0ff5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11cd0ff8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd0ffa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd0ffd jb 0x11cd1001 */
  if (C.cf) goto L_11cd1001;
  /* 11cd0fff jmp 0x11cd1003 */
  goto L_11cd1003;
L_11cd1001:;
  /* 11cd1001 jmp 0x11cd0fcc */
  goto L_11cd0fcc;
L_11cd1003:;
  /* 11cd1003 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1006 jmp 0x11cd1016 */
  goto L_11cd1016;
L_11cd1008:;
  /* 11cd1008 call 0x11cd68e0 */
  push32(0x11cd100du); f_11cd68e0();
  /* 11cd100d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11cd1013 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cd1016:;
  /* 11cd1016 pop esi */
  ESI = (pop32());
  /* 11cd1017 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1019 pop ebp */
  EBP = (pop32());
  /* 11cd101a ret  */
  ESPCHK(0x11cd0e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x11cd1050 (146 bytes, 45 insns) */
void f_11cd1050(void) {
  FTRACE(0x11cd1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1050 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1051 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1056 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1058 call 0x11ccb3c0 */
  push32(0x11cd105du); f_11ccb3c0();
  /* 11cd105d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1060 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1064 jne 0x11cd107e */
  if (!C.zf) goto L_11cd107e;
  /* 11cd1066 mov dword ptr [ebp - 8], 0x11cff618 */
  w32((uint32_t)(EBP + -0x8), (0x11cff618u));
  /* 11cd106d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1070 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd1072 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd1075 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11cd107c jmp 0x11cd1094 */
  goto L_11cd1094;
L_11cd107e:;
  /* 11cd107e mov dword ptr [ebp - 8], 0x11cff61c */
  w32((uint32_t)(EBP + -0x8), (0x11cff61cu));
  /* 11cd1085 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1088 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd108a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd108d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11cd1094:;
  /* 11cd1094 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1098 jne 0x11cd10a8 */
  if (!C.zf) goto L_11cd10a8;
  /* 11cd109a push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd109c call 0x11ccb460 */
  push32(0x11cd10a1u); f_11ccb460();
  /* 11cd10a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd10a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd10a6 jmp 0x11cd10dc */
  goto L_11cd10dc;
L_11cd10a8:;
  /* 11cd10a8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd10ac je 0x11cd10cd */
  if (C.zf) goto L_11cd10cd;
  /* 11cd10ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd10b1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11cd10b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd10b9 call 0x11ccb460 */
  push32(0x11cd10beu); f_11ccb460();
  /* 11cd10be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd10c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd10c4 push edx */
  push32((uint32_t)(EDX));
  /* 11cd10c5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11cd10c8u);
  /* 11cd10c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd10cb jmp 0x11cd10d7 */
  goto L_11cd10d7;
L_11cd10cd:;
  /* 11cd10cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd10cf call 0x11ccb460 */
  push32(0x11cd10d4u); f_11ccb460();
  /* 11cd10d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd10d7:;
  /* 11cd10d7 mov eax, 1 */
  EAX = (0x1u);
L_11cd10dc:;
  /* 11cd10dc mov esp, ebp */
  ESP = (EBP);
  /* 11cd10de pop ebp */
  EBP = (pop32());
  /* 11cd10df ret 4 */
  ESPCHK(0x11cd1050u, _esp0);
  ESP += 8; return;
}

/* FUN_100110f0 @ 0x11cd10f0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11cd10f0(void) {
  FTRACE(0x11cd10f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd10f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd10f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd10f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd10f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd10fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1100 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd1103 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd1106 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1109 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11cd110c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1110 ja 0x11cd11be */
  if ((!C.cf&&!C.zf)) goto L_11cd11be;
  /* 11cd1116 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd1119 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd111b mov dl, byte ptr [eax + 0x11cd1312] */
  DL = (r8((uint32_t)(EAX + 0x11cd1312)));
  /* 11cd1121 jmp dword ptr [edx*4 + 0x11cd12fa] */
  switch (EDX) {
    case 0: goto L_11cd1128;
    case 1: goto L_11cd1193;
    case 2: goto L_11cd1179;
    case 3: goto L_11cd1145;
    case 4: goto L_11cd115f;
    case 5: goto L_11cd11be;
    default: x86_unimpl("switch@0x11cd1121 out of table"); return;
  }
L_11cd1128:;
  /* 11cd1128 mov dword ptr [ebp - 0x18], 0x11cff618 */
  w32((uint32_t)(EBP + -0x18), (0x11cff618u));
  /* 11cd112f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd1132 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd1134 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd1137 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd113a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd113d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd1140 jmp 0x11cd11c6 */
  goto L_11cd11c6;
L_11cd1145:;
  /* 11cd1145 mov dword ptr [ebp - 0x18], 0x11cff61c */
  w32((uint32_t)(EBP + -0x18), (0x11cff61cu));
  /* 11cd114c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd114f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd1151 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd1154 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1157 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd115a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd115d jmp 0x11cd11c6 */
  goto L_11cd11c6;
L_11cd115f:;
  /* 11cd115f mov dword ptr [ebp - 0x18], 0x11cff620 */
  w32((uint32_t)(EBP + -0x18), (0x11cff620u));
  /* 11cd1166 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd1169 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd116b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd116e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1171 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1174 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd1177 jmp 0x11cd11c6 */
  goto L_11cd11c6;
L_11cd1179:;
  /* 11cd1179 mov dword ptr [ebp - 0x18], 0x11cff624 */
  w32((uint32_t)(EBP + -0x18), (0x11cff624u));
  /* 11cd1180 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd1183 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd1185 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd1188 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd118b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd118e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd1191 jmp 0x11cd11c6 */
  goto L_11cd11c6;
L_11cd1193:;
  /* 11cd1193 call 0x11cce1c0 */
  push32(0x11cd1198u); f_11cce1c0();
  /* 11cd1198 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd119b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd119e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11cd11a1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd11a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd11a5 push eax */
  push32((uint32_t)(EAX));
  /* 11cd11a6 call 0x11cd1330 */
  push32(0x11cd11abu); f_11cd1330();
  /* 11cd11ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd11ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd11b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd11b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd11b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd11b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd11bc jmp 0x11cd11c6 */
  goto L_11cd11c6;
L_11cd11be:;
  /* 11cd11be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd11c1 jmp 0x11cd12f6 */
  goto L_11cd12f6;
L_11cd11c6:;
  /* 11cd11c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd11ca je 0x11cd11d6 */
  if (C.zf) goto L_11cd11d6;
  /* 11cd11cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd11ce call 0x11ccb3c0 */
  push32(0x11cd11d3u); f_11ccb3c0();
  /* 11cd11d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd11d6:;
  /* 11cd11d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd11da jne 0x11cd11f3 */
  if (!C.zf) goto L_11cd11f3;
  /* 11cd11dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd11e0 je 0x11cd11ec */
  if (C.zf) goto L_11cd11ec;
  /* 11cd11e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd11e4 call 0x11ccb460 */
  push32(0x11cd11e9u); f_11ccb460();
  /* 11cd11e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd11ec:;
  /* 11cd11ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd11ee jmp 0x11cd12f6 */
  goto L_11cd12f6;
L_11cd11f3:;
  /* 11cd11f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd11f7 jne 0x11cd1210 */
  if (!C.zf) goto L_11cd1210;
  /* 11cd11f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd11fd je 0x11cd1209 */
  if (C.zf) goto L_11cd1209;
  /* 11cd11ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1201 call 0x11ccb460 */
  push32(0x11cd1206u); f_11ccb460();
  /* 11cd1206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd1209:;
  /* 11cd1209 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cd120b call 0x11cce530 */
  push32(0x11cd1210u); f_11cce530();
L_11cd1210:;
  /* 11cd1210 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1214 je 0x11cd1222 */
  if (C.zf) goto L_11cd1222;
  /* 11cd1216 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd121a je 0x11cd1222 */
  if (C.zf) goto L_11cd1222;
  /* 11cd121c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1220 jne 0x11cd124e */
  if (!C.zf) goto L_11cd124e;
L_11cd1222:;
  /* 11cd1222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1225 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11cd1228 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cd122b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd122e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11cd1235 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1239 jne 0x11cd124e */
  if (!C.zf) goto L_11cd124e;
  /* 11cd123b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd123e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11cd1241 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd1244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1247 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11cd124e:;
  /* 11cd124e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1252 jne 0x11cd1290 */
  if (!C.zf) goto L_11cd1290;
  /* 11cd1254 mov eax, dword ptr [0x11cfd2d8] */
  EAX = (r32((uint32_t)(0x11cfd2d8)));
  /* 11cd1259 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd125c jmp 0x11cd1267 */
  goto L_11cd1267;
L_11cd125e:;
  /* 11cd125e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd1261 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1264 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cd1267:;
  /* 11cd1267 mov edx, dword ptr [0x11cfd2d8] */
  EDX = (r32((uint32_t)(0x11cfd2d8)));
  /* 11cd126d add edx, dword ptr [0x11cfd2dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cfd2dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1273 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1276 jge 0x11cd128e */
  if ((C.sf==C.of)) goto L_11cd128e;
  /* 11cd1278 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd127b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd127e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1281 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11cd1284 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11cd128c jmp 0x11cd125e */
  goto L_11cd125e;
L_11cd128e:;
  /* 11cd128e jmp 0x11cd1299 */
  goto L_11cd1299;
L_11cd1290:;
  /* 11cd1290 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd1293 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11cd1299:;
  /* 11cd1299 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd129d je 0x11cd12a9 */
  if (C.zf) goto L_11cd12a9;
  /* 11cd129f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd12a1 call 0x11ccb460 */
  push32(0x11cd12a6u); f_11ccb460();
  /* 11cd12a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd12a9:;
  /* 11cd12a9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd12ad jne 0x11cd12c0 */
  if (!C.zf) goto L_11cd12c0;
  /* 11cd12af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd12b2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11cd12b5 push edx */
  push32((uint32_t)(EDX));
  /* 11cd12b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cd12b8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11cd12bbu);
  /* 11cd12bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd12be jmp 0x11cd12ca */
  goto L_11cd12ca;
L_11cd12c0:;
  /* 11cd12c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd12c3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd12c4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11cd12c7u);
  /* 11cd12c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd12ca:;
  /* 11cd12ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd12ce je 0x11cd12dc */
  if (C.zf) goto L_11cd12dc;
  /* 11cd12d0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd12d4 je 0x11cd12dc */
  if (C.zf) goto L_11cd12dc;
  /* 11cd12d6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd12da jne 0x11cd12f4 */
  if (!C.zf) goto L_11cd12f4;
L_11cd12dc:;
  /* 11cd12dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd12df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd12e2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11cd12e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd12e9 jne 0x11cd12f4 */
  if (!C.zf) goto L_11cd12f4;
  /* 11cd12eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd12ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd12f1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11cd12f4:;
  /* 11cd12f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd12f6:;
  /* 11cd12f6 mov esp, ebp */
  ESP = (EBP);
  /* 11cd12f8 pop ebp */
  EBP = (pop32());
  /* 11cd12f9 ret  */
  ESPCHK(0x11cd10f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x11cd1330 (91 bytes, 35 insns) */
void f_11cd1330(void) {
  FTRACE(0x11cd1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1330 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1331 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1333 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1337 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd133a:;
  /* 11cd133a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd133d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd1340 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1343 je 0x11cd1363 */
  if (C.zf) goto L_11cd1363;
  /* 11cd1345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1348 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd134b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd134e mov ecx, dword ptr [0x11cfd2e4] */
  ECX = (r32((uint32_t)(0x11cfd2e4)));
  /* 11cd1354 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd1357 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd135a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd135c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd135f jae 0x11cd1363 */
  if (!C.cf) goto L_11cd1363;
  /* 11cd1361 jmp 0x11cd133a */
  goto L_11cd133a;
L_11cd1363:;
  /* 11cd1363 mov eax, dword ptr [0x11cfd2e4] */
  EAX = (r32((uint32_t)(0x11cfd2e4)));
  /* 11cd1368 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd136b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd136e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1370 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1373 jae 0x11cd1385 */
  if (!C.cf) goto L_11cd1385;
  /* 11cd1375 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1378 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd137b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd137e jne 0x11cd1385 */
  if (!C.zf) goto L_11cd1385;
  /* 11cd1380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1383 jmp 0x11cd1387 */
  goto L_11cd1387;
L_11cd1385:;
  /* 11cd1385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd1387:;
  /* 11cd1387 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1389 pop ebp */
  EBP = (pop32());
  /* 11cd138a ret  */
  ESPCHK(0x11cd1330u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x11cd1390 (13 bytes, 6 insns) */
void f_11cd1390(void) {
  FTRACE(0x11cd1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1390 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1391 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1393 call 0x11cce1c0 */
  push32(0x11cd1398u); f_11cce1c0();
  /* 11cd1398 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd139b pop ebp */
  EBP = (pop32());
  /* 11cd139c ret  */
  ESPCHK(0x11cd1390u, _esp0);
  ESP += 4; return;
}

/* FUN_100113a0 @ 0x11cd13a0 (13 bytes, 6 insns) */
void f_11cd13a0(void) {
  FTRACE(0x11cd13a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd13a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd13a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd13a3 call 0x11cce1c0 */
  push32(0x11cd13a8u); f_11cce1c0();
  /* 11cd13a8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd13ab pop ebp */
  EBP = (pop32());
  /* 11cd13ac ret  */
  ESPCHK(0x11cd13a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113b0 @ 0x11cd13b0 (187 bytes, 54 insns) */
void f_11cd13b0(void) {
  FTRACE(0x11cd13b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd13b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd13b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd13b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd13b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd13bd cmp dword ptr [0x11cff62c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff62c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd13c4 jne 0x11cd1423 */
  if (!C.zf) goto L_11cd1423;
  /* 11cd13c6 push 0x11cf95a0 */
  push32((uint32_t)(0x11cf95a0u));
  /* 11cd13cb call dword ptr [0x11d013e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e4))), 0x11cd13d1u);
  /* 11cd13d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd13d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd13d8 je 0x11cd13f7 */
  if (C.zf) goto L_11cd13f7;
  /* 11cd13da push 0x11cfa348 */
  push32((uint32_t)(0x11cfa348u));
  /* 11cd13df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd13e2 push eax */
  push32((uint32_t)(EAX));
  /* 11cd13e3 call dword ptr [0x11d013e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e0))), 0x11cd13e9u);
  /* 11cd13e9 mov dword ptr [0x11cff62c], eax */
  w32((uint32_t)(0x11cff62c), (EAX));
  /* 11cd13ee cmp dword ptr [0x11cff62c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff62c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd13f5 jne 0x11cd13fb */
  if (!C.zf) goto L_11cd13fb;
L_11cd13f7:;
  /* 11cd13f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd13f9 jmp 0x11cd1467 */
  goto L_11cd1467;
L_11cd13fb:;
  /* 11cd13fb push 0x11cfa338 */
  push32((uint32_t)(0x11cfa338u));
  /* 11cd1400 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1403 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1404 call dword ptr [0x11d013e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e0))), 0x11cd140au);
  /* 11cd140a mov dword ptr [0x11cff630], eax */
  w32((uint32_t)(0x11cff630), (EAX));
  /* 11cd140f push 0x11cfa324 */
  push32((uint32_t)(0x11cfa324u));
  /* 11cd1414 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1417 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1418 call dword ptr [0x11d013e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e0))), 0x11cd141eu);
  /* 11cd141e mov dword ptr [0x11cff634], eax */
  w32((uint32_t)(0x11cff634), (EAX));
L_11cd1423:;
  /* 11cd1423 cmp dword ptr [0x11cff630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd142a je 0x11cd1435 */
  if (C.zf) goto L_11cd1435;
  /* 11cd142c call dword ptr [0x11cff630] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff630))), 0x11cd1432u);
  /* 11cd1432 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd1435:;
  /* 11cd1435 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1439 je 0x11cd1451 */
  if (C.zf) goto L_11cd1451;
  /* 11cd143b cmp dword ptr [0x11cff634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1442 je 0x11cd1451 */
  if (C.zf) goto L_11cd1451;
  /* 11cd1444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1447 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1448 call dword ptr [0x11cff634] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff634))), 0x11cd144eu);
  /* 11cd144e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd1451:;
  /* 11cd1451 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd1454 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1455 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1458 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1459 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd145c push eax */
  push32((uint32_t)(EAX));
  /* 11cd145d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1460 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1461 call dword ptr [0x11cff62c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff62c))), 0x11cd1467u);
L_11cd1467:;
  /* 11cd1467 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1469 pop ebp */
  EBP = (pop32());
  /* 11cd146a ret  */
  ESPCHK(0x11cd13b0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11cd1470 (254 bytes, 109 insns) */
void f_11cd1470(void) {
  FTRACE(0x11cd1470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1470 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cd1474 push edi */
  push32((uint32_t)(EDI));
  /* 11cd1475 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd1477 je 0x11cd14f3 */
  if (C.zf) goto L_11cd14f3;
  /* 11cd1479 push esi */
  push32((uint32_t)(ESI));
  /* 11cd147a push ebx */
  push32((uint32_t)(EBX));
  /* 11cd147b mov ebx, ecx */
  EBX = (ECX);
  /* 11cd147d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11cd1481 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11cd1487 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd148b jne 0x11cd1494 */
  if (!C.zf) goto L_11cd1494;
  /* 11cd148d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd1490 jne 0x11cd1501 */
  if (!C.zf) goto L_11cd1501;
  /* 11cd1492 jmp 0x11cd14b5 */
  goto L_11cd14b5;
L_11cd1494:;
  /* 11cd1494 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd1496 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cd1497 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd1499 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd149a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cd149b je 0x11cd14c2 */
  if (C.zf) goto L_11cd14c2;
  /* 11cd149d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cd149f je 0x11cd14ca */
  if (C.zf) goto L_11cd14ca;
  /* 11cd14a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11cd14a7 jne 0x11cd1494 */
  if (!C.zf) goto L_11cd1494;
  /* 11cd14a9 mov ebx, ecx */
  EBX = (ECX);
  /* 11cd14ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd14ae jne 0x11cd1501 */
  if (!C.zf) goto L_11cd1501;
L_11cd14b0:;
  /* 11cd14b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11cd14b3 je 0x11cd14c2 */
  if (C.zf) goto L_11cd14c2;
L_11cd14b5:;
  /* 11cd14b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd14b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cd14b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd14ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd14bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11cd14bd je 0x11cd14ee */
  if (C.zf) goto L_11cd14ee;
  /* 11cd14bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cd14c0 jne 0x11cd14b5 */
  if (!C.zf) goto L_11cd14b5;
L_11cd14c2:;
  /* 11cd14c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd14c6 pop ebx */
  EBX = (pop32());
  /* 11cd14c7 pop esi */
  ESI = (pop32());
  /* 11cd14c8 pop edi */
  EDI = (pop32());
  /* 11cd14c9 ret  */
  ESPCHK(0x11cd1470u, _esp0);
  ESP += 4; return;
L_11cd14ca:;
  /* 11cd14ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cd14d0 je 0x11cd14e4 */
  if (C.zf) goto L_11cd14e4;
L_11cd14d2:;
  /* 11cd14d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd14d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd14d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cd14d6 je 0x11cd1566 */
  if (C.zf) goto L_11cd1566;
  /* 11cd14dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cd14e2 jne 0x11cd14d2 */
  if (!C.zf) goto L_11cd14d2;
L_11cd14e4:;
  /* 11cd14e4 mov ebx, ecx */
  EBX = (ECX);
  /* 11cd14e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd14e9 jne 0x11cd1557 */
  if (!C.zf) goto L_11cd1557;
L_11cd14eb:;
  /* 11cd14eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd14ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11cd14ee:;
  /* 11cd14ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11cd14ef jne 0x11cd14eb */
  if (!C.zf) goto L_11cd14eb;
  /* 11cd14f1 pop ebx */
  EBX = (pop32());
  /* 11cd14f2 pop esi */
  ESI = (pop32());
L_11cd14f3:;
  /* 11cd14f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd14f7 pop edi */
  EDI = (pop32());
  /* 11cd14f8 ret  */
  ESPCHK(0x11cd1470u, _esp0);
  ESP += 4; return;
L_11cd14f9:;
  /* 11cd14f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cd14fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd14fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cd14ff je 0x11cd14b0 */
  if (C.zf) goto L_11cd14b0;
L_11cd1501:;
  /* 11cd1501 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11cd1506 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11cd1508 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd150a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd150d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd150f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11cd1511 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1514 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11cd1519 je 0x11cd14f9 */
  if (C.zf) goto L_11cd14f9;
  /* 11cd151b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11cd151d je 0x11cd154b */
  if (C.zf) goto L_11cd154b;
  /* 11cd151f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11cd1521 je 0x11cd1541 */
  if (C.zf) goto L_11cd1541;
  /* 11cd1523 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11cd1529 je 0x11cd1537 */
  if (C.zf) goto L_11cd1537;
  /* 11cd152b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11cd1531 jne 0x11cd14f9 */
  if (!C.zf) goto L_11cd14f9;
  /* 11cd1533 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cd1535 jmp 0x11cd154f */
  goto L_11cd154f;
L_11cd1537:;
  /* 11cd1537 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd153d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cd153f jmp 0x11cd154f */
  goto L_11cd154f;
L_11cd1541:;
  /* 11cd1541 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1547 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11cd1549 jmp 0x11cd154f */
  goto L_11cd154f;
L_11cd154b:;
  /* 11cd154b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd154d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11cd154f:;
  /* 11cd154f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1552 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1554 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cd1555 je 0x11cd1561 */
  if (C.zf) goto L_11cd1561;
L_11cd1557:;
  /* 11cd1557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd1559:;
  /* 11cd1559 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11cd155b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd155e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cd155f jne 0x11cd1559 */
  if (!C.zf) goto L_11cd1559;
L_11cd1561:;
  /* 11cd1561 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11cd1564 jne 0x11cd14eb */
  if (!C.zf) goto L_11cd14eb;
L_11cd1566:;
  /* 11cd1566 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd156a pop ebx */
  EBX = (pop32());
  /* 11cd156b pop esi */
  ESI = (pop32());
  /* 11cd156c pop edi */
  EDI = (pop32());
  /* 11cd156d ret  */
  ESPCHK(0x11cd1470u, _esp0);
  ESP += 4; return;
}

/* FUN_10011570 @ 0x11cd1570 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11cd1570(void) {
  FTRACE(0x11cd1570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1570 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1571 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1573 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd1579 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd157b mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11cd157e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd1581 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11cd1584 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd1587 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd158a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd158c mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11cd158f mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd1592 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1595 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11cd1598 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd159c ja 0x11cd15de */
  if ((!C.cf&&!C.zf)) goto L_11cd15de;
  /* 11cd159e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11cd15a1 jmp dword ptr [eax*4 + 0x11cd16cc] */
  switch (EAX) {
    case 0: goto L_11cd15a8;
    case 1: goto L_11cd15c3;
    case 2: goto L_11cd15b1;
    case 3: goto L_11cd15ba;
    case 4: goto L_11cd15a8;
    case 5: goto L_11cd15de;
    case 6: goto L_11cd15d5;
    case 7: goto L_11cd15cc;
    default: x86_unimpl("switch@0x11cd15a1 out of table"); return;
  }
L_11cd15a8:;
  /* 11cd15a8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11cd15af jmp 0x11cd15e5 */
  goto L_11cd15e5;
L_11cd15b1:;
  /* 11cd15b1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11cd15b8 jmp 0x11cd15e5 */
  goto L_11cd15e5;
L_11cd15ba:;
  /* 11cd15ba mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11cd15c1 jmp 0x11cd15e5 */
  goto L_11cd15e5;
L_11cd15c3:;
  /* 11cd15c3 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11cd15ca jmp 0x11cd15e5 */
  goto L_11cd15e5;
L_11cd15cc:;
  /* 11cd15cc mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11cd15d3 jmp 0x11cd15e5 */
  goto L_11cd15e5;
L_11cd15d5:;
  /* 11cd15d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd15d8 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11cd15de:;
  /* 11cd15de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd15e5:;
  /* 11cd15e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd15e9 je 0x11cd167a */
  if (C.zf) goto L_11cd167a;
  /* 11cd15ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd15f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd15f4 push eax */
  push32((uint32_t)(EAX));
  /* 11cd15f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd15f8 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd15fb push ecx */
  push32((uint32_t)(ECX));
  /* 11cd15fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd15ff push edx */
  push32((uint32_t)(EDX));
  /* 11cd1600 call 0x11cd7030 */
  push32(0x11cd1605u); f_11cd7030();
  /* 11cd1605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd160a jne 0x11cd167a */
  if (!C.zf) goto L_11cd167a;
  /* 11cd160c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd160f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11cd1612 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1616 je 0x11cd1626 */
  if (C.zf) goto L_11cd1626;
  /* 11cd1618 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd161c je 0x11cd1626 */
  if (C.zf) goto L_11cd1626;
  /* 11cd161e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1622 je 0x11cd1626 */
  if (C.zf) goto L_11cd1626;
  /* 11cd1624 jmp 0x11cd164c */
  goto L_11cd164c;
L_11cd1626:;
  /* 11cd1626 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd1629 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd162c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11cd162f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd1632 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1635 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1638 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11cd163b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd163e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd1641 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11cd1644 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cd1647 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11cd164a jmp 0x11cd1654 */
  goto L_11cd1654;
L_11cd164c:;
  /* 11cd164c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd164f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11cd1651 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11cd1654:;
  /* 11cd1654 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1657 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd165a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd165b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd165e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1661 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1665 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1669 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd166a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd166d push edx */
  push32((uint32_t)(EDX));
  /* 11cd166e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11cd1671 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1672 call 0x11cd6b60 */
  push32(0x11cd1677u); f_11cd6b60();
  /* 11cd1677 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd167a:;
  /* 11cd167a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11cd167f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1682 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd1684 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1685 call 0x11cd75a0 */
  push32(0x11cd168au); f_11cd75a0();
  /* 11cd168a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd168d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd1694 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1697 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd169a je 0x11cd16b4 */
  if (C.zf) goto L_11cd16b4;
  /* 11cd169c cmp dword ptr [0x11cfd8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd16a3 jne 0x11cd16b4 */
  if (!C.zf) goto L_11cd16b4;
  /* 11cd16a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd16a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd16a9 call 0x11cd7550 */
  push32(0x11cd16aeu); f_11cd7550();
  /* 11cd16ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd16b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd16b4:;
  /* 11cd16b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd16b8 jne 0x11cd16c8 */
  if (!C.zf) goto L_11cd16c8;
  /* 11cd16ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd16bd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd16bf push eax */
  push32((uint32_t)(EAX));
  /* 11cd16c0 call 0x11cd7450 */
  push32(0x11cd16c5u); f_11cd7450();
  /* 11cd16c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd16c8:;
  /* 11cd16c8 mov esp, ebp */
  ESP = (EBP);
  /* 11cd16ca pop ebp */
  EBP = (pop32());
  /* 11cd16cb ret  */
  ESPCHK(0x11cd1570u, _esp0);
  ESP += 4; return;
}

/* FUN_100116f0 @ 0x11cd16f0 (31 bytes, 18 insns) */
void f_11cd16f0(void) {
  FTRACE(0x11cd16f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd16f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd16f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd16f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd16f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd16f5 push esi */
  push32((uint32_t)(ESI));
  /* 11cd16f6 push edi */
  push32((uint32_t)(EDI));
  /* 11cd16f7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd16f8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11cd16fb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd16ff push eax */
  push32((uint32_t)(EAX));
  /* 11cd1700 call 0x11cd1ae0 */
  push32(0x11cd1705u); f_11cd1ae0();
  /* 11cd1705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1708 pop edi */
  EDI = (pop32());
  /* 11cd1709 pop esi */
  ESI = (pop32());
  /* 11cd170a pop ebx */
  EBX = (pop32());
  /* 11cd170b mov esp, ebp */
  ESP = (EBP);
  /* 11cd170d pop ebp */
  EBP = (pop32());
  /* 11cd170e ret  */
  ESPCHK(0x11cd16f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011710 @ 0x11cd1710 (32 bytes, 18 insns) */
void f_11cd1710(void) {
  FTRACE(0x11cd1710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1710 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1711 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1713 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1714 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd1715 push esi */
  push32((uint32_t)(ESI));
  /* 11cd1716 push edi */
  push32((uint32_t)(EDI));
  /* 11cd1717 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11cd171a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11cd171c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1720 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1721 call 0x11cd1ae0 */
  push32(0x11cd1726u); f_11cd1ae0();
  /* 11cd1726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1729 pop edi */
  EDI = (pop32());
  /* 11cd172a pop esi */
  ESI = (pop32());
  /* 11cd172b pop ebx */
  EBX = (pop32());
  /* 11cd172c mov esp, ebp */
  ESP = (EBP);
  /* 11cd172e pop ebp */
  EBP = (pop32());
  /* 11cd172f ret  */
  ESPCHK(0x11cd1710u, _esp0);
  ESP += 4; return;
}

/* FUN_10011730 @ 0x11cd1730 (79 bytes, 34 insns) */
void f_11cd1730(void) {
  FTRACE(0x11cd1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1730 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1731 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1733 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1736 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd1737 push esi */
  push32((uint32_t)(ESI));
  /* 11cd1738 push edi */
  push32((uint32_t)(EDI));
  /* 11cd1739 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cd173a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11cd173d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11cd1741 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1742 call 0x11cd1800 */
  push32(0x11cd1747u); f_11cd1800();
  /* 11cd1747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd174a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd174d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1750 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1756 not edx */
  EDX = (~(EDX));
  /* 11cd1758 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd175b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd175d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd175f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd1762 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1765 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1766 call 0x11cd1980 */
  push32(0x11cd176bu); f_11cd1980();
  /* 11cd176b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd176e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cd1772 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11cd1775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1778 pop edi */
  EDI = (pop32());
  /* 11cd1779 pop esi */
  ESI = (pop32());
  /* 11cd177a pop ebx */
  EBX = (pop32());
  /* 11cd177b mov esp, ebp */
  ESP = (EBP);
  /* 11cd177d pop ebp */
  EBP = (pop32());
  /* 11cd177e ret  */
  ESPCHK(0x11cd1730u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11cd1780 (26 bytes, 11 insns) */
void f_11cd1780(void) {
  FTRACE(0x11cd1780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1780 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1781 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1783 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1786 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd178b push eax */
  push32((uint32_t)(EAX));
  /* 11cd178c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd178f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1790 call 0x11cd1730 */
  push32(0x11cd1795u); f_11cd1730();
  /* 11cd1795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1798 pop ebp */
  EBP = (pop32());
  /* 11cd1799 ret  */
  ESPCHK(0x11cd1780u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x11cd17a0 (88 bytes, 33 insns) */
void f_11cd17a0(void) {
  FTRACE(0x11cd17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd17a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd17a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd17a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd17a7 push esi */
  push32((uint32_t)(ESI));
  /* 11cd17a8 push edi */
  push32((uint32_t)(EDI));
  /* 11cd17a9 call 0x11cd13a0 */
  push32(0x11cd17aeu); f_11cd13a0();
  /* 11cd17ae mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11cd17b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd17b3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11cd17b5 call 0x11ccaae0 */
  push32(0x11cd17bau); f_11ccaae0();
  /* 11cd17ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd17be je 0x11cd17f1 */
  if (C.zf) goto L_11cd17f1;
  /* 11cd17c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd17c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd17c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd17c8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd17cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd17cf je 0x11cd17f1 */
  if (C.zf) goto L_11cd17f1;
  /* 11cd17d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd17d4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd17d7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd17da mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd17dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd17e0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11cd17e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd17ea mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11cd17f1:;
  /* 11cd17f1 pop edi */
  EDI = (pop32());
  /* 11cd17f2 pop esi */
  ESI = (pop32());
  /* 11cd17f3 pop ebx */
  EBX = (pop32());
  /* 11cd17f4 mov esp, ebp */
  ESP = (EBP);
  /* 11cd17f6 pop ebp */
  EBP = (pop32());
  /* 11cd17f7 ret  */
  ESPCHK(0x11cd17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011800 @ 0x11cd1800 (377 bytes, 115 insns) */
void f_11cd1800(void) {
  FTRACE(0x11cd1800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1800 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1801 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1806 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd180d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1810 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1815 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd181a je 0x11cd1825 */
  if (C.zf) goto L_11cd1825;
  /* 11cd181c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd181f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1822 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd1825:;
  /* 11cd1825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1828 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd182e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1831 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd1833 je 0x11cd183d */
  if (C.zf) goto L_11cd183d;
  /* 11cd1835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1838 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11cd183a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd183d:;
  /* 11cd183d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1840 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1846 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd184b je 0x11cd1856 */
  if (C.zf) goto L_11cd1856;
  /* 11cd184d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1850 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1853 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd1856:;
  /* 11cd1856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1859 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd185e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1863 je 0x11cd186e */
  if (C.zf) goto L_11cd186e;
  /* 11cd1865 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1868 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd186b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd186e:;
  /* 11cd186e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1871 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1877 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd187a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd187c je 0x11cd1886 */
  if (C.zf) goto L_11cd1886;
  /* 11cd187e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1881 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cd1883 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd1886:;
  /* 11cd1886 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1889 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd188f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1892 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd1894 je 0x11cd18a2 */
  if (C.zf) goto L_11cd18a2;
  /* 11cd1896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1899 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd189f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd18a2:;
  /* 11cd18a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd18a5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd18aa and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd18af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd18b2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd18b9 jg 0x11cd18d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd18d5;
  /* 11cd18bb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd18c2 je 0x11cd18e8 */
  if (C.zf) goto L_11cd18e8;
  /* 11cd18c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd18c8 je 0x11cd18e0 */
  if (C.zf) goto L_11cd18e0;
  /* 11cd18ca cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd18d1 je 0x11cd18f3 */
  if (C.zf) goto L_11cd18f3;
  /* 11cd18d3 jmp 0x11cd1907 */
  goto L_11cd1907;
L_11cd18d5:;
  /* 11cd18d5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd18dc je 0x11cd18fe */
  if (C.zf) goto L_11cd18fe;
  /* 11cd18de jmp 0x11cd1907 */
  goto L_11cd1907;
L_11cd18e0:;
  /* 11cd18e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd18e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd18e6 jmp 0x11cd1907 */
  goto L_11cd1907;
L_11cd18e8:;
  /* 11cd18e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd18eb or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd18ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd18f1 jmp 0x11cd1907 */
  goto L_11cd1907;
L_11cd18f3:;
  /* 11cd18f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd18f6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11cd18f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd18fc jmp 0x11cd1907 */
  goto L_11cd1907;
L_11cd18fe:;
  /* 11cd18fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1901 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11cd1904 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd1907:;
  /* 11cd1907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd190a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1910 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1916 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd1919 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd191d je 0x11cd1949 */
  if (C.zf) goto L_11cd1949;
  /* 11cd191f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1926 je 0x11cd193b */
  if (C.zf) goto L_11cd193b;
  /* 11cd1928 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd192f je 0x11cd1933 */
  if (C.zf) goto L_11cd1933;
  /* 11cd1931 jmp 0x11cd1955 */
  goto L_11cd1955;
L_11cd1933:;
  /* 11cd1933 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1936 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd1939 jmp 0x11cd1955 */
  goto L_11cd1955;
L_11cd193b:;
  /* 11cd193b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd193e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1944 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd1947 jmp 0x11cd1955 */
  goto L_11cd1955;
L_11cd1949:;
  /* 11cd1949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd194c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1952 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd1955:;
  /* 11cd1955 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1958 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd195d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1964 je 0x11cd1972 */
  if (C.zf) goto L_11cd1972;
  /* 11cd1966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1969 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd196f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd1972:;
  /* 11cd1972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1975 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1977 pop ebp */
  EBP = (pop32());
  /* 11cd1978 ret  */
  ESPCHK(0x11cd1800u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x11cd1980 (346 bytes, 106 insns) */
void f_11cd1980(void) {
  FTRACE(0x11cd1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1980 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1981 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1986 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd198c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd198f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1994 je 0x11cd19a1 */
  if (C.zf) goto L_11cd19a1;
  /* 11cd1996 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd199a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11cd199d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11cd19a1:;
  /* 11cd19a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd19a4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd19a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd19a9 je 0x11cd19b5 */
  if (C.zf) goto L_11cd19b5;
  /* 11cd19ab mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd19af or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11cd19b1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11cd19b5:;
  /* 11cd19b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd19b8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd19bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd19bd je 0x11cd19ca */
  if (C.zf) goto L_11cd19ca;
  /* 11cd19bf mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd19c3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11cd19c6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11cd19ca:;
  /* 11cd19ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd19cd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd19d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd19d2 je 0x11cd19df */
  if (C.zf) goto L_11cd19df;
  /* 11cd19d4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd19d8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11cd19db mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11cd19df:;
  /* 11cd19df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd19e2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd19e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd19e7 je 0x11cd19f3 */
  if (C.zf) goto L_11cd19f3;
  /* 11cd19e9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd19ed or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11cd19ef mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11cd19f3:;
  /* 11cd19f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd19f6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd19fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd19fe je 0x11cd1a0b */
  if (C.zf) goto L_11cd1a0b;
  /* 11cd1a00 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1a04 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11cd1a07 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11cd1a0b:;
  /* 11cd1a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1a0e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1a13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd1a16 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a1d ja 0x11cd1a39 */
  if ((!C.cf&&!C.zf)) goto L_11cd1a39;
  /* 11cd1a1f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a26 je 0x11cd1a4e */
  if (C.zf) goto L_11cd1a4e;
  /* 11cd1a28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a2c je 0x11cd1a44 */
  if (C.zf) goto L_11cd1a44;
  /* 11cd1a2e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a35 je 0x11cd1a5b */
  if (C.zf) goto L_11cd1a5b;
  /* 11cd1a37 jmp 0x11cd1a73 */
  goto L_11cd1a73;
L_11cd1a39:;
  /* 11cd1a39 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a40 je 0x11cd1a68 */
  if (C.zf) goto L_11cd1a68;
  /* 11cd1a42 jmp 0x11cd1a73 */
  goto L_11cd1a73;
L_11cd1a44:;
  /* 11cd1a44 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1a48 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11cd1a4c jmp 0x11cd1a73 */
  goto L_11cd1a73;
L_11cd1a4e:;
  /* 11cd1a4e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1a52 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11cd1a55 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11cd1a59 jmp 0x11cd1a73 */
  goto L_11cd1a73;
L_11cd1a5b:;
  /* 11cd1a5b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1a5f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11cd1a62 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cd1a66 jmp 0x11cd1a73 */
  goto L_11cd1a73;
L_11cd1a68:;
  /* 11cd1a68 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1a6c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11cd1a6f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11cd1a73:;
  /* 11cd1a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1a76 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1a7c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd1a7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a83 je 0x11cd1a99 */
  if (C.zf) goto L_11cd1a99;
  /* 11cd1a85 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a8c je 0x11cd1aa6 */
  if (C.zf) goto L_11cd1aa6;
  /* 11cd1a8e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1a95 je 0x11cd1ab3 */
  if (C.zf) goto L_11cd1ab3;
  /* 11cd1a97 jmp 0x11cd1abb */
  goto L_11cd1abb;
L_11cd1a99:;
  /* 11cd1a99 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1a9d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11cd1aa0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cd1aa4 jmp 0x11cd1abb */
  goto L_11cd1abb;
L_11cd1aa6:;
  /* 11cd1aa6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1aaa or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11cd1aad mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11cd1ab1 jmp 0x11cd1abb */
  goto L_11cd1abb;
L_11cd1ab3:;
  /* 11cd1ab3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1ab7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11cd1abb:;
  /* 11cd1abb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1abe and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1ac3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1ac5 je 0x11cd1ad2 */
  if (C.zf) goto L_11cd1ad2;
  /* 11cd1ac7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1acb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11cd1ace mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11cd1ad2:;
  /* 11cd1ad2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd1ad6 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1ad8 pop ebp */
  EBP = (pop32());
  /* 11cd1ad9 ret  */
  ESPCHK(0x11cd1980u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ae0 @ 0x11cd1ae0 (167 bytes, 56 insns) */
void f_11cd1ae0(void) {
  FTRACE(0x11cd1ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1ae4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd1aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1aee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1af3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1af8 je 0x11cd1b03 */
  if (C.zf) goto L_11cd1b03;
  /* 11cd1afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1afd or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1b00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd1b03:;
  /* 11cd1b03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1b06 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1b0c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1b0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd1b11 je 0x11cd1b1b */
  if (C.zf) goto L_11cd1b1b;
  /* 11cd1b13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1b16 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11cd1b18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd1b1b:;
  /* 11cd1b1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1b1e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1b24 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd1b29 je 0x11cd1b34 */
  if (C.zf) goto L_11cd1b34;
  /* 11cd1b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1b2e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1b31 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd1b34:;
  /* 11cd1b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1b37 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1b3c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1b41 je 0x11cd1b4c */
  if (C.zf) goto L_11cd1b4c;
  /* 11cd1b43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1b46 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1b49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd1b4c:;
  /* 11cd1b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1b4f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1b55 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1b58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd1b5a je 0x11cd1b64 */
  if (C.zf) goto L_11cd1b64;
  /* 11cd1b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1b5f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11cd1b61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd1b64:;
  /* 11cd1b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1b67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1b6d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1b70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd1b72 je 0x11cd1b80 */
  if (C.zf) goto L_11cd1b80;
  /* 11cd1b74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1b77 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1b7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd1b80:;
  /* 11cd1b80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1b83 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1b85 pop ebp */
  EBP = (pop32());
  /* 11cd1b86 ret  */
  ESPCHK(0x11cd1ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x11cd1b90 (183 bytes, 58 insns) */
void f_11cd1b90(void) {
  FTRACE(0x11cd1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1b91 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1b99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1b9c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1ba1 ja 0x11cd1bba */
  if ((!C.cf&&!C.zf)) goto L_11cd1bba;
  /* 11cd1ba3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1ba6 mov edx, dword ptr [0x11cfd00c] */
  EDX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd1bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1bae mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11cd1bb2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1bb5 jmp 0x11cd1c43 */
  goto L_11cd1c43;
L_11cd1bba:;
  /* 11cd1bba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1bbd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11cd1bc0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1bc6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1bcc mov edx, dword ptr [0x11cfd00c] */
  EDX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd1bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1bd4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11cd1bd8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1bdf je 0x11cd1c03 */
  if (C.zf) goto L_11cd1c03;
  /* 11cd1be1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1be4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11cd1be7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1bed mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11cd1bf0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11cd1bf3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11cd1bf6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11cd1bfa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11cd1c01 jmp 0x11cd1c14 */
  goto L_11cd1c14;
L_11cd1c03:;
  /* 11cd1c03 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11cd1c06 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11cd1c09 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11cd1c0d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11cd1c14:;
  /* 11cd1c14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd1c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd1c1a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11cd1c1d push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1c1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1c21 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1c22 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11cd1c25 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1c26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1c28 call 0x11cd7660 */
  push32(0x11cd1c2du); f_11cd7660();
  /* 11cd1c2d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1c30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1c32 jne 0x11cd1c38 */
  if (!C.zf) goto L_11cd1c38;
  /* 11cd1c34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1c36 jmp 0x11cd1c43 */
  goto L_11cd1c43;
L_11cd1c38:;
  /* 11cd1c38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1c3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1c40 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11cd1c43:;
  /* 11cd1c43 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1c45 pop ebp */
  EBP = (pop32());
  /* 11cd1c46 ret  */
  ESPCHK(0x11cd1b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x11cd1c50 (11 bytes, 6 insns) */
void f_11cd1c50(void) {
  FTRACE(0x11cd1c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1c51 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1c56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1c59 pop ebp */
  EBP = (pop32());
  /* 11cd1c5a ret  */
  ESPCHK(0x11cd1c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c60 @ 0x11cd1c60 (147 bytes, 43 insns) */
void f_11cd1c60(void) {
  FTRACE(0x11cd1c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1c61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1c63 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1c64 cmp dword ptr [0x11cff664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1c6b jne 0x11cd1c87 */
  if (!C.zf) goto L_11cd1c87;
  /* 11cd1c6d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1c71 jl 0x11cd1c82 */
  if ((C.sf!=C.of)) goto L_11cd1c82;
  /* 11cd1c73 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1c77 jg 0x11cd1c82 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd1c82;
  /* 11cd1c79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1c7c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1c7f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cd1c82:;
  /* 11cd1c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1c85 jmp 0x11cd1cef */
  goto L_11cd1cef;
L_11cd1c87:;
  /* 11cd1c87 push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cd1c8c call dword ptr [0x11d013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e8))), 0x11cd1c92u);
  /* 11cd1c92 cmp dword ptr [0x11cff7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1c99 je 0x11cd1cb9 */
  if (C.zf) goto L_11cd1cb9;
  /* 11cd1c9b push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cd1ca0 call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cd1ca6u);
  /* 11cd1ca6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd1ca8 call 0x11ccb3c0 */
  push32(0x11cd1cadu); f_11ccb3c0();
  /* 11cd1cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1cb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd1cb7 jmp 0x11cd1cc0 */
  goto L_11cd1cc0;
L_11cd1cb9:;
  /* 11cd1cb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd1cc0:;
  /* 11cd1cc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1cc4 call 0x11cd1d00 */
  push32(0x11cd1cc9u); f_11cd1d00();
  /* 11cd1cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1ccc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cd1ccf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1cd3 je 0x11cd1ce1 */
  if (C.zf) goto L_11cd1ce1;
  /* 11cd1cd5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd1cd7 call 0x11ccb460 */
  push32(0x11cd1cdcu); f_11ccb460();
  /* 11cd1cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1cdf jmp 0x11cd1cec */
  goto L_11cd1cec;
L_11cd1ce1:;
  /* 11cd1ce1 push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cd1ce6 call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cd1cecu);
L_11cd1cec:;
  /* 11cd1cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11cd1cef:;
  /* 11cd1cef mov esp, ebp */
  ESP = (EBP);
  /* 11cd1cf1 pop ebp */
  EBP = (pop32());
  /* 11cd1cf2 ret  */
  ESPCHK(0x11cd1c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d00 @ 0x11cd1d00 (299 bytes, 91 insns) */
void f_11cd1d00(void) {
  FTRACE(0x11cd1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1d01 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1d03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1d06 cmp dword ptr [0x11cff664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1d0d jne 0x11cd1d2c */
  if (!C.zf) goto L_11cd1d2c;
  /* 11cd1d0f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1d13 jl 0x11cd1d24 */
  if ((C.sf!=C.of)) goto L_11cd1d24;
  /* 11cd1d15 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1d19 jg 0x11cd1d24 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd1d24;
  /* 11cd1d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d1e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1d21 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cd1d24:;
  /* 11cd1d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d27 jmp 0x11cd1e27 */
  goto L_11cd1e27;
L_11cd1d2c:;
  /* 11cd1d2c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1d33 jge 0x11cd1d73 */
  if ((C.sf==C.of)) goto L_11cd1d73;
  /* 11cd1d35 cmp dword ptr [0x11cfd000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11cfd000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1d3c jle 0x11cd1d51 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd1d51;
  /* 11cd1d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1d40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1d44 call 0x11cd1b90 */
  push32(0x11cd1d49u); f_11cd1b90();
  /* 11cd1d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1d4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd1d4f jmp 0x11cd1d65 */
  goto L_11cd1d65;
L_11cd1d51:;
  /* 11cd1d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d54 mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd1d59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1d5b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11cd1d5f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1d62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cd1d65:;
  /* 11cd1d65 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1d69 jne 0x11cd1d73 */
  if (!C.zf) goto L_11cd1d73;
  /* 11cd1d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d6e jmp 0x11cd1e27 */
  goto L_11cd1e27;
L_11cd1d73:;
  /* 11cd1d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d76 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11cd1d79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1d7f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1d85 mov eax, dword ptr [0x11cfd00c] */
  EAX = (r32((uint32_t)(0x11cfd00c)));
  /* 11cd1d8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1d8c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11cd1d90 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd1d98 je 0x11cd1dbc */
  if (C.zf) goto L_11cd1dbc;
  /* 11cd1d9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1d9d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11cd1da0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1da6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11cd1da9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11cd1dac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11cd1daf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11cd1db3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11cd1dba jmp 0x11cd1dcd */
  goto L_11cd1dcd;
L_11cd1dbc:;
  /* 11cd1dbc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11cd1dbf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11cd1dc2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11cd1dc6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11cd1dcd:;
  /* 11cd1dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd1dd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cd1dd3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cd1dd6 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1dda push eax */
  push32((uint32_t)(EAX));
  /* 11cd1ddb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11cd1dde push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1ddf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11cd1de4 mov edx, dword ptr [0x11cff664] */
  EDX = (r32((uint32_t)(0x11cff664)));
  /* 11cd1dea push edx */
  push32((uint32_t)(EDX));
  /* 11cd1deb call 0x11cd8270 */
  push32(0x11cd1df0u); f_11cd8270();
  /* 11cd1df0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1df3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd1df6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1dfa jne 0x11cd1e01 */
  if (!C.zf) goto L_11cd1e01;
  /* 11cd1dfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1dff jmp 0x11cd1e27 */
  goto L_11cd1e27;
L_11cd1e01:;
  /* 11cd1e01 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1e05 jne 0x11cd1e11 */
  if (!C.zf) goto L_11cd1e11;
  /* 11cd1e07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1e0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1e0f jmp 0x11cd1e27 */
  goto L_11cd1e27;
L_11cd1e11:;
  /* 11cd1e11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1e14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1e19 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11cd1e1c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd1e22 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11cd1e25 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11cd1e27:;
  /* 11cd1e27 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1e29 pop ebp */
  EBP = (pop32());
  /* 11cd1e2a ret  */
  ESPCHK(0x11cd1d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e30 @ 0x11cd1e30 (132 bytes, 51 insns) */
void f_11cd1e30(void) {
  FTRACE(0x11cd1e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1e31 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1e36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1e39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cd1e3a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1e3d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1e3f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd1e42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd1e45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1e48 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1e4d jns 0x11cd1e54 */
  if (!C.sf) goto L_11cd1e54;
  /* 11cd1e4f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cd1e50 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1e53 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cd1e54:;
  /* 11cd1e54 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11cd1e59 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1e5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd1e5e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1e61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1e64 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd1e66 not edx */
  EDX = (~(EDX));
  /* 11cd1e68 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd1e6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1e71 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd1e74 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1e77 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd1e79 je 0x11cd1e7f */
  if (C.zf) goto L_11cd1e7f;
  /* 11cd1e7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1e7d jmp 0x11cd1eb0 */
  goto L_11cd1eb0;
L_11cd1e7f:;
  /* 11cd1e7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1e82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1e85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd1e88 jmp 0x11cd1e93 */
  goto L_11cd1e93;
L_11cd1e8a:;
  /* 11cd1e8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1e8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1e90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11cd1e93:;
  /* 11cd1e93 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1e97 jge 0x11cd1eab */
  if ((C.sf==C.of)) goto L_11cd1eab;
  /* 11cd1e99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1e9f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1ea3 je 0x11cd1ea9 */
  if (C.zf) goto L_11cd1ea9;
  /* 11cd1ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1ea7 jmp 0x11cd1eb0 */
  goto L_11cd1eb0;
L_11cd1ea9:;
  /* 11cd1ea9 jmp 0x11cd1e8a */
  goto L_11cd1e8a;
L_11cd1eab:;
  /* 11cd1eab mov eax, 1 */
  EAX = (0x1u);
L_11cd1eb0:;
  /* 11cd1eb0 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1eb2 pop ebp */
  EBP = (pop32());
  /* 11cd1eb3 ret  */
  ESPCHK(0x11cd1e30u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11cd1ec0 (168 bytes, 63 insns) */
void f_11cd1ec0(void) {
  FTRACE(0x11cd1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1ec3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1ec6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1ec9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cd1eca and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1ecd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1ecf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd1ed2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd1ed5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1ed8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1edd jns 0x11cd1ee4 */
  if (!C.sf) goto L_11cd1ee4;
  /* 11cd1edf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cd1ee0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd1ee3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cd1ee4:;
  /* 11cd1ee4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11cd1ee9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1eeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd1eee mov edx, 1 */
  EDX = (0x1u);
  /* 11cd1ef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1ef6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd1ef8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd1efb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1f01 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11cd1f04 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1f05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1f08 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1f09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1f0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1f0f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cd1f12 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1f13 call 0x11cd85d0 */
  push32(0x11cd1f18u); f_11cd85d0();
  /* 11cd1f18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1f1b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd1f1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1f21 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1f24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd1f27 jmp 0x11cd1f32 */
  goto L_11cd1f32;
L_11cd1f29:;
  /* 11cd1f29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1f2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1f2f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cd1f32:;
  /* 11cd1f32 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1f36 jl 0x11cd1f61 */
  if ((C.sf!=C.of)) goto L_11cd1f61;
  /* 11cd1f38 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd1f3c je 0x11cd1f61 */
  if (C.zf) goto L_11cd1f61;
  /* 11cd1f3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1f44 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11cd1f47 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd1f4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1f50 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd1f53 push edx */
  push32((uint32_t)(EDX));
  /* 11cd1f54 call 0x11cd85d0 */
  push32(0x11cd1f59u); f_11cd85d0();
  /* 11cd1f59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1f5c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd1f5f jmp 0x11cd1f29 */
  goto L_11cd1f29;
L_11cd1f61:;
  /* 11cd1f61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd1f64 mov esp, ebp */
  ESP = (EBP);
  /* 11cd1f66 pop ebp */
  EBP = (pop32());
  /* 11cd1f67 ret  */
  ESPCHK(0x11cd1ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f70 @ 0x11cd1f70 (219 bytes, 78 insns) */
void f_11cd1f70(void) {
  FTRACE(0x11cd1f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd1f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd1f71 mov ebp, esp */
  EBP = (ESP);
  /* 11cd1f73 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1f76 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11cd1f7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd1f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1f83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd1f86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1f89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1f8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd1f8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1f92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cd1f93 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1f96 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1f98 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd1f9b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd1f9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1fa1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1fa7 jns 0x11cd1fae */
  if (!C.sf) goto L_11cd1fae;
  /* 11cd1fa9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11cd1faa or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1fad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11cd1fae:;
  /* 11cd1fae mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11cd1fb3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd1fb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd1fb8 mov edx, 1 */
  EDX = (0x1u);
  /* 11cd1fbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd1fc0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd1fc2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd1fc5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd1fc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1fcb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd1fce and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd1fd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd1fd3 je 0x11cd1fff */
  if (C.zf) goto L_11cd1fff;
  /* 11cd1fd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd1fd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1fdb push eax */
  push32((uint32_t)(EAX));
  /* 11cd1fdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11cd1fe0 call 0x11cd1e30 */
  push32(0x11cd1fe5u); f_11cd1e30();
  /* 11cd1fe5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd1fea jne 0x11cd1fff */
  if (!C.zf) goto L_11cd1fff;
  /* 11cd1fec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd1fef push edx */
  push32((uint32_t)(EDX));
  /* 11cd1ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd1ff3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd1ff4 call 0x11cd1ec0 */
  push32(0x11cd1ff9u); f_11cd1ec0();
  /* 11cd1ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd1ffc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11cd1fff:;
  /* 11cd1fff or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2002 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2005 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd2007 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd200a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd200d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd2010 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2012 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd2015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2018 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11cd201b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd201e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2021 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd2024 jmp 0x11cd202f */
  goto L_11cd202f;
L_11cd2026:;
  /* 11cd2026 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd2029 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd202c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cd202f:;
  /* 11cd202f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2033 jge 0x11cd2044 */
  if ((C.sf==C.of)) goto L_11cd2044;
  /* 11cd2035 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd2038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd203b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11cd2042 jmp 0x11cd2026 */
  goto L_11cd2026;
L_11cd2044:;
  /* 11cd2044 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd2047 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2049 pop ebp */
  EBP = (pop32());
  /* 11cd204a ret  */
  ESPCHK(0x11cd1f70u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11cd2050 (76 bytes, 28 insns) */
void f_11cd2050(void) {
  FTRACE(0x11cd2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2050 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2051 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd205c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd205f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd2062 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd2069 jmp 0x11cd2074 */
  goto L_11cd2074;
L_11cd206b:;
  /* 11cd206b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd206e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2071 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cd2074:;
  /* 11cd2074 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2078 jge 0x11cd2098 */
  if ((C.sf==C.of)) goto L_11cd2098;
  /* 11cd207a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd207d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2080 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd2082 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd2084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2087 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd208a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd208d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2090 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2093 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd2096 jmp 0x11cd206b */
  goto L_11cd206b;
L_11cd2098:;
  /* 11cd2098 mov esp, ebp */
  ESP = (EBP);
  /* 11cd209a pop ebp */
  EBP = (pop32());
  /* 11cd209b ret  */
  ESPCHK(0x11cd2050u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11cd20a0 (47 bytes, 17 insns) */
void f_11cd20a0(void) {
  FTRACE(0x11cd20a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd20a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd20a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd20a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd20a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd20ab jmp 0x11cd20b6 */
  goto L_11cd20b6;
L_11cd20ad:;
  /* 11cd20ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd20b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd20b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd20b6:;
  /* 11cd20b6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd20ba jge 0x11cd20cb */
  if ((C.sf==C.of)) goto L_11cd20cb;
  /* 11cd20bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd20bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd20c2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11cd20c9 jmp 0x11cd20ad */
  goto L_11cd20ad;
L_11cd20cb:;
  /* 11cd20cb mov esp, ebp */
  ESP = (EBP);
  /* 11cd20cd pop ebp */
  EBP = (pop32());
  /* 11cd20ce ret  */
  ESPCHK(0x11cd20a0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11cd20d0 (55 bytes, 21 insns) */
void f_11cd20d0(void) {
  FTRACE(0x11cd20d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd20d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd20d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd20d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd20d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd20db jmp 0x11cd20e6 */
  goto L_11cd20e6;
L_11cd20dd:;
  /* 11cd20dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd20e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd20e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd20e6:;
  /* 11cd20e6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd20ea jge 0x11cd20fe */
  if ((C.sf==C.of)) goto L_11cd20fe;
  /* 11cd20ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd20ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd20f2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd20f6 je 0x11cd20fc */
  if (C.zf) goto L_11cd20fc;
  /* 11cd20f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd20fa jmp 0x11cd2103 */
  goto L_11cd2103;
L_11cd20fc:;
  /* 11cd20fc jmp 0x11cd20dd */
  goto L_11cd20dd;
L_11cd20fe:;
  /* 11cd20fe mov eax, 1 */
  EAX = (0x1u);
L_11cd2103:;
  /* 11cd2103 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2105 pop ebp */
  EBP = (pop32());
  /* 11cd2106 ret  */
  ESPCHK(0x11cd20d0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11cd2110 (236 bytes, 82 insns) */
void f_11cd2110(void) {
  FTRACE(0x11cd2110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2110 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2111 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2113 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2116 push esi */
  push32((uint32_t)(ESI));
  /* 11cd2117 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd211a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cd211b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd211e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2120 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd2123 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd2126 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2129 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd212e jns 0x11cd2135 */
  if (!C.sf) goto L_11cd2135;
  /* 11cd2130 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cd2131 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2134 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11cd2135:;
  /* 11cd2135 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd2138 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd213b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd213e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd2140 not edx */
  EDX = (~(EDX));
  /* 11cd2142 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cd2145 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd214c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd2153 jmp 0x11cd215e */
  goto L_11cd215e;
L_11cd2155:;
  /* 11cd2155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2158 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd215b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd215e:;
  /* 11cd215e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2162 jge 0x11cd21b1 */
  if ((C.sf==C.of)) goto L_11cd21b1;
  /* 11cd2164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd216a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cd216d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2170 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd2173 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2176 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2179 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11cd217c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd217f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd2181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2187 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11cd218a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd218d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2190 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11cd2193 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2196 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd219c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11cd219f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11cd21a4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd21a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd21aa shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd21ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd21af jmp 0x11cd2155 */
  goto L_11cd2155;
L_11cd21b1:;
  /* 11cd21b1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11cd21b8 jmp 0x11cd21c3 */
  goto L_11cd21c3;
L_11cd21ba:;
  /* 11cd21ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd21bd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd21c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd21c3:;
  /* 11cd21c3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd21c7 jl 0x11cd21f7 */
  if ((C.sf!=C.of)) goto L_11cd21f7;
  /* 11cd21c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd21cc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd21cf jl 0x11cd21e8 */
  if ((C.sf!=C.of)) goto L_11cd21e8;
  /* 11cd21d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd21d4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd21d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd21da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd21dd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd21e0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11cd21e3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11cd21e6 jmp 0x11cd21f5 */
  goto L_11cd21f5;
L_11cd21e8:;
  /* 11cd21e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd21eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd21ee mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11cd21f5:;
  /* 11cd21f5 jmp 0x11cd21ba */
  goto L_11cd21ba;
L_11cd21f7:;
  /* 11cd21f7 pop esi */
  ESI = (pop32());
  /* 11cd21f8 mov esp, ebp */
  ESP = (EBP);
  /* 11cd21fa pop ebp */
  EBP = (pop32());
  /* 11cd21fb ret  */
  ESPCHK(0x11cd2110u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x11cd2200 (578 bytes, 188 insns) */
void f_11cd2200(void) {
  FTRACE(0x11cd2200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2200 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2201 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2203 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2209 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd220b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11cd220f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd2215 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd221b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd221e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2221 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2223 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11cd2227 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd222c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd222f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2232 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11cd2235 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cd2238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd223b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11cd223e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cd2241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2246 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cd2249 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11cd224c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd224f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2256 jne 0x11cd2290 */
  if (!C.zf) goto L_11cd2290;
  /* 11cd2258 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd225f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11cd2262 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2263 call 0x11cd20d0 */
  push32(0x11cd2268u); f_11cd20d0();
  /* 11cd2268 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd226b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd226d je 0x11cd2278 */
  if (C.zf) goto L_11cd2278;
  /* 11cd226f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11cd2276 jmp 0x11cd228b */
  goto L_11cd228b;
L_11cd2278:;
  /* 11cd2278 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11cd227b push edx */
  push32((uint32_t)(EDX));
  /* 11cd227c call 0x11cd20a0 */
  push32(0x11cd2281u); f_11cd20a0();
  /* 11cd2281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2284 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11cd228b:;
  /* 11cd228b jmp 0x11cd23dc */
  goto L_11cd23dc;
L_11cd2290:;
  /* 11cd2290 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cd2293 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2294 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11cd2297 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2298 call 0x11cd2050 */
  push32(0x11cd229du); f_11cd2050();
  /* 11cd229d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd22a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd22a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd22a6 push eax */
  push32((uint32_t)(EAX));
  /* 11cd22a7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11cd22aa push ecx */
  push32((uint32_t)(ECX));
  /* 11cd22ab call 0x11cd1f70 */
  push32(0x11cd22b0u); f_11cd1f70();
  /* 11cd22b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd22b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd22b5 je 0x11cd22c0 */
  if (C.zf) goto L_11cd22c0;
  /* 11cd22b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd22ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd22bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd22c0:;
  /* 11cd22c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd22c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd22c6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd22c9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd22cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd22cf jge 0x11cd22f0 */
  if ((C.sf==C.of)) goto L_11cd22f0;
  /* 11cd22d1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cd22d4 push eax */
  push32((uint32_t)(EAX));
  /* 11cd22d5 call 0x11cd20a0 */
  push32(0x11cd22dau); f_11cd20a0();
  /* 11cd22da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd22dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd22e4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11cd22eb jmp 0x11cd23dc */
  goto L_11cd23dc;
L_11cd22f0:;
  /* 11cd22f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd22f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd22f6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd22f9 jg 0x11cd2360 */
  if ((!C.zf&&C.sf==C.of)) goto L_11cd2360;
  /* 11cd22fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd22fe mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd2301 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2304 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11cd2307 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11cd230a push edx */
  push32((uint32_t)(EDX));
  /* 11cd230b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cd230e push eax */
  push32((uint32_t)(EAX));
  /* 11cd230f call 0x11cd2050 */
  push32(0x11cd2314u); f_11cd2050();
  /* 11cd2314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2317 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd231a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd231b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11cd231e push edx */
  push32((uint32_t)(EDX));
  /* 11cd231f call 0x11cd2110 */
  push32(0x11cd2324u); f_11cd2110();
  /* 11cd2324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2327 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd232a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd232d push ecx */
  push32((uint32_t)(ECX));
  /* 11cd232e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11cd2331 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2332 call 0x11cd1f70 */
  push32(0x11cd2337u); f_11cd1f70();
  /* 11cd2337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd233a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd233d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd2340 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2343 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2344 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11cd2347 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2348 call 0x11cd2110 */
  push32(0x11cd234du); f_11cd2110();
  /* 11cd234d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2350 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd2357 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11cd235e jmp 0x11cd23dc */
  goto L_11cd23dc;
L_11cd2360:;
  /* 11cd2360 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2366 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2368 jl 0x11cd23ab */
  if ((C.sf!=C.of)) goto L_11cd23ab;
  /* 11cd236a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11cd236d push edx */
  push32((uint32_t)(EDX));
  /* 11cd236e call 0x11cd20a0 */
  push32(0x11cd2373u); f_11cd20a0();
  /* 11cd2373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2376 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd2379 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd237e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd2381 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2384 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd2387 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2388 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cd238b push eax */
  push32((uint32_t)(EAX));
  /* 11cd238c call 0x11cd2110 */
  push32(0x11cd2391u); f_11cd2110();
  /* 11cd2391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2394 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2397 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd2399 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd239c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd239f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd23a2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11cd23a9 jmp 0x11cd23dc */
  goto L_11cd23dc;
L_11cd23ab:;
  /* 11cd23ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd23ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd23b1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd23b4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd23b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd23ba and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd23bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd23c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd23c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd23c8 push edx */
  push32((uint32_t)(EDX));
  /* 11cd23c9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11cd23cc push eax */
  push32((uint32_t)(EAX));
  /* 11cd23cd call 0x11cd2110 */
  push32(0x11cd23d2u); f_11cd2110();
  /* 11cd23d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd23d5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11cd23dc:;
  /* 11cd23dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd23df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd23e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd23e5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11cd23ea sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd23ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd23ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd23f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd23f5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd23f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd23fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd23fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd23ff neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd2401 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2403 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd2409 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd240b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cd240e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2411 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2415 jne 0x11cd242a */
  if (!C.zf) goto L_11cd242a;
  /* 11cd2417 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd241a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd241d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cd2420 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2423 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd2426 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd2428 jmp 0x11cd243b */
  goto L_11cd243b;
L_11cd242a:;
  /* 11cd242a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd242d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2431 jne 0x11cd243b */
  if (!C.zf) goto L_11cd243b;
  /* 11cd2433 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2436 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd2439 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11cd243b:;
  /* 11cd243b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd243e mov esp, ebp */
  ESP = (EBP);
  /* 11cd2440 pop ebp */
  EBP = (pop32());
  /* 11cd2441 ret  */
  ESPCHK(0x11cd2200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x11cd2450 (26 bytes, 11 insns) */
void f_11cd2450(void) {
  FTRACE(0x11cd2450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2450 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2451 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2453 push 0x11cfd218 */
  push32((uint32_t)(0x11cfd218u));
  /* 11cd2458 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd245b push eax */
  push32((uint32_t)(EAX));
  /* 11cd245c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd245f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2460 call 0x11cd2200 */
  push32(0x11cd2465u); f_11cd2200();
  /* 11cd2465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2468 pop ebp */
  EBP = (pop32());
  /* 11cd2469 ret  */
  ESPCHK(0x11cd2450u, _esp0);
  ESP += 4; return;
}

/* FUN_10012470 @ 0x11cd2470 (26 bytes, 11 insns) */
void f_11cd2470(void) {
  FTRACE(0x11cd2470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2470 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2471 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2473 push 0x11cfd230 */
  push32((uint32_t)(0x11cfd230u));
  /* 11cd2478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd247b push eax */
  push32((uint32_t)(EAX));
  /* 11cd247c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd247f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2480 call 0x11cd2200 */
  push32(0x11cd2485u); f_11cd2200();
  /* 11cd2485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2488 pop ebp */
  EBP = (pop32());
  /* 11cd2489 ret  */
  ESPCHK(0x11cd2470u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x11cd2490 (191 bytes, 58 insns) */
void f_11cd2490(void) {
  FTRACE(0x11cd2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2490 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2491 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2493 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2496 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11cd249d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd24a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd24a2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11cd24a6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd24ac mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11cd24b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd24b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd24b5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11cd24b9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd24be mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11cd24c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd24c5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11cd24c8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd24cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd24ce mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11cd24d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd24d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd24d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd24d9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cd24dc shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11cd24df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd24e2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11cd24e4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11cd24e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd24e8 call 0x11cd1f70 */
  push32(0x11cd24edu); f_11cd1f70();
  /* 11cd24ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd24f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd24f2 je 0x11cd2507 */
  if (C.zf) goto L_11cd2507;
  /* 11cd24f4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11cd24fb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd24ff add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cd2503 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11cd2507:;
  /* 11cd2507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd250a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd250f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2514 jne 0x11cd251d */
  if (!C.zf) goto L_11cd251d;
  /* 11cd2516 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11cd251d:;
  /* 11cd251d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2520 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd2523 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cd2526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd252c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd252e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd2531 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd253a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd253f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2541 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2544 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11cd2548 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd254b mov esp, ebp */
  ESP = (EBP);
  /* 11cd254d pop ebp */
  EBP = (pop32());
  /* 11cd254e ret  */
  ESPCHK(0x11cd2490u, _esp0);
  ESP += 4; return;
}

/* FUN_10012550 @ 0x11cd2550 (54 bytes, 24 insns) */
void f_11cd2550(void) {
  FTRACE(0x11cd2550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2550 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2551 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2553 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2556 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd2558 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd255a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd255c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd255e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2561 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2562 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11cd2565 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2566 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cd2569 push edx */
  push32((uint32_t)(EDX));
  /* 11cd256a call 0x11cd88d0 */
  push32(0x11cd256fu); f_11cd88d0();
  /* 11cd256f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2572 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2575 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2576 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cd2579 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd257a call 0x11cd2450 */
  push32(0x11cd257fu); f_11cd2450();
  /* 11cd257f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2582 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2584 pop ebp */
  EBP = (pop32());
  /* 11cd2585 ret  */
  ESPCHK(0x11cd2550u, _esp0);
  ESP += 4; return;
}

/* FUN_10012590 @ 0x11cd2590 (54 bytes, 24 insns) */
void f_11cd2590(void) {
  FTRACE(0x11cd2590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2590 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2591 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2593 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd2598 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd259a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd259c push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd259e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd25a1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd25a2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11cd25a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd25a6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cd25a9 push edx */
  push32((uint32_t)(EDX));
  /* 11cd25aa call 0x11cd88d0 */
  push32(0x11cd25afu); f_11cd88d0();
  /* 11cd25af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd25b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd25b5 push eax */
  push32((uint32_t)(EAX));
  /* 11cd25b6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cd25b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd25ba call 0x11cd2490 */
  push32(0x11cd25bfu); f_11cd2490();
  /* 11cd25bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd25c2 mov esp, ebp */
  ESP = (EBP);
  /* 11cd25c4 pop ebp */
  EBP = (pop32());
  /* 11cd25c5 ret  */
  ESPCHK(0x11cd2590u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x11cd25d0 (54 bytes, 24 insns) */
void f_11cd25d0(void) {
  FTRACE(0x11cd25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd25d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd25d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd25d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd25d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd25d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd25da push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd25dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd25de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd25e1 push eax */
  push32((uint32_t)(EAX));
  /* 11cd25e2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11cd25e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd25e6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cd25e9 push edx */
  push32((uint32_t)(EDX));
  /* 11cd25ea call 0x11cd88d0 */
  push32(0x11cd25efu); f_11cd88d0();
  /* 11cd25ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd25f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd25f5 push eax */
  push32((uint32_t)(EAX));
  /* 11cd25f6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cd25f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd25fa call 0x11cd2470 */
  push32(0x11cd25ffu); f_11cd2470();
  /* 11cd25ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2602 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2604 pop ebp */
  EBP = (pop32());
  /* 11cd2605 ret  */
  ESPCHK(0x11cd25d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x11cd2610 (250 bytes, 90 insns) */
void f_11cd2610(void) {
  FTRACE(0x11cd2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2610 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2611 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd261c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd261f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd2622 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd2625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2628 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11cd262b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd262e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2631 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11cd2634:;
  /* 11cd2634 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2638 jle 0x11cd267b */
  if ((C.zf||C.sf!=C.of)) goto L_11cd267b;
  /* 11cd263a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd263d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11cd2640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd2642 je 0x11cd2658 */
  if (C.zf) goto L_11cd2658;
  /* 11cd2644 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2647 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd264a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd264d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2653 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd2656 jmp 0x11cd265f */
  goto L_11cd265f;
L_11cd2658:;
  /* 11cd2658 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11cd265f:;
  /* 11cd265f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2662 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cd2665 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11cd2667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd266a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd266d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd2670 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2673 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2676 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cd2679 jmp 0x11cd2634 */
  goto L_11cd2634;
L_11cd267b:;
  /* 11cd267b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd267e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11cd2681 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2685 jl 0x11cd26c4 */
  if ((C.sf!=C.of)) goto L_11cd26c4;
  /* 11cd2687 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd268a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd268d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2690 jl 0x11cd26c4 */
  if ((C.sf!=C.of)) goto L_11cd26c4;
  /* 11cd2692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2695 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2698 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd269b:;
  /* 11cd269b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd269e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11cd26a1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd26a4 jne 0x11cd26b7 */
  if (!C.zf) goto L_11cd26b7;
  /* 11cd26a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd26a9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11cd26ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd26af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd26b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd26b5 jmp 0x11cd269b */
  goto L_11cd269b;
L_11cd26b7:;
  /* 11cd26b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd26ba mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd26bc add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd26bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd26c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11cd26c4:;
  /* 11cd26c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd26c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd26ca cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd26cd jne 0x11cd26e0 */
  if (!C.zf) goto L_11cd26e0;
  /* 11cd26cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd26d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd26d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd26d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd26db mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd26de jmp 0x11cd2706 */
  goto L_11cd2706;
L_11cd26e0:;
  /* 11cd26e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd26e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd26e6 push eax */
  push32((uint32_t)(EAX));
  /* 11cd26e7 call 0x11cd0a80 */
  push32(0x11cd26ecu); f_11cd0a80();
  /* 11cd26ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd26ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd26f2 push eax */
  push32((uint32_t)(EAX));
  /* 11cd26f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd26f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd26f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd26fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd26fd push edx */
  push32((uint32_t)(EDX));
  /* 11cd26fe call 0x11cd2960 */
  push32(0x11cd2703u); f_11cd2960();
  /* 11cd2703 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd2706:;
  /* 11cd2706 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2708 pop ebp */
  EBP = (pop32());
  /* 11cd2709 ret  */
  ESPCHK(0x11cd2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10012710 @ 0x11cd2710 (119 bytes, 44 insns) */
void f_11cd2710(void) {
  FTRACE(0x11cd2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2710 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2711 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2713 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2716 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11cd2719 push eax */
  push32((uint32_t)(EAX));
  /* 11cd271a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cd271d push ecx */
  push32((uint32_t)(ECX));
  /* 11cd271e call 0x11cd2790 */
  push32(0x11cd2723u); f_11cd2790();
  /* 11cd2723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2726 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11cd2729 push edx */
  push32((uint32_t)(EDX));
  /* 11cd272a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd272c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11cd272e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2731 mov eax, esp */
  EAX = (ESP);
  /* 11cd2733 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2736 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd2738 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd273b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd273e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd2742 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11cd2746 call 0x11cd9450 */
  push32(0x11cd274bu); f_11cd9450();
  /* 11cd274b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd274e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2751 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd2754 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11cd2758 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd275b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd275d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11cd2761 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2764 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd2767 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11cd276a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd276b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd276e push edx */
  push32((uint32_t)(EDX));
  /* 11cd276f call 0x11cd0c00 */
  push32(0x11cd2774u); f_11cd0c00();
  /* 11cd2774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2777 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd277a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cd277d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11cd2780 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd2783 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2785 pop ebp */
  EBP = (pop32());
  /* 11cd2786 ret  */
  ESPCHK(0x11cd2710u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x11cd2790 (354 bytes, 104 insns) */
void f_11cd2790(void) {
  FTRACE(0x11cd2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2790 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2791 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2793 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2796 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11cd279d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd27a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd27a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd27a8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11cd27ac and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd27b2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cd27b5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11cd27b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd27bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd27be mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11cd27c2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd27c7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11cd27cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd27ce mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd27d1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd27d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd27da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd27dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd27df mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd27e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd27e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd27eb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd27ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd27f2 je 0x11cd2807 */
  if (C.zf) goto L_11cd2807;
  /* 11cd27f4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd27fb je 0x11cd27ff */
  if (C.zf) goto L_11cd27ff;
  /* 11cd27fd jmp 0x11cd284a */
  goto L_11cd284a;
L_11cd27ff:;
  /* 11cd27ff mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11cd2805 jmp 0x11cd2865 */
  goto L_11cd2865;
L_11cd2807:;
  /* 11cd2807 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd280b jne 0x11cd2834 */
  if (!C.zf) goto L_11cd2834;
  /* 11cd280d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2811 jne 0x11cd2834 */
  if (!C.zf) goto L_11cd2834;
  /* 11cd2813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2816 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11cd281d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2820 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11cd2826 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2829 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11cd282f jmp 0x11cd28ee */
  goto L_11cd28ee;
L_11cd2834:;
  /* 11cd2834 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11cd2838 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd283d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cd2841 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd2848 jmp 0x11cd2865 */
  goto L_11cd2865;
L_11cd284a:;
  /* 11cd284a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11cd284e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cd2853 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11cd2857 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11cd285b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2861 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11cd2865:;
  /* 11cd2865 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2868 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11cd286b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd286e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd2870 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd2873 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11cd2876 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd2878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd287b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cd287e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd2881 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11cd2884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2887 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd2889:;
  /* 11cd2889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd288c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd288f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd2895 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd2897 jne 0x11cd28d4 */
  if (!C.zf) goto L_11cd28d4;
  /* 11cd2899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd289c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd289f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd28a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd28a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd28a6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd28ac neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd28ae sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd28b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd28b2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd28b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd28b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd28ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd28bd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd28bf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd28c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd28c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd28c6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11cd28ca sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11cd28ce mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11cd28d2 jmp 0x11cd2889 */
  goto L_11cd2889;
L_11cd28d4:;
  /* 11cd28d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd28d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd28dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd28df and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd28e5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd28e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd28ea mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11cd28ee:;
  /* 11cd28ee mov esp, ebp */
  ESP = (EBP);
  /* 11cd28f0 pop ebp */
  EBP = (pop32());
  /* 11cd28f1 ret  */
  ESPCHK(0x11cd2790u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11cd2900 (88 bytes, 40 insns) */
void f_11cd2900(void) {
  FTRACE(0x11cd2900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2900 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cd2904 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd2908 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd290a je 0x11cd2953 */
  if (C.zf) goto L_11cd2953;
  /* 11cd290c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd290e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11cd2912 push edi */
  push32((uint32_t)(EDI));
  /* 11cd2913 mov edi, ecx */
  EDI = (ECX);
  /* 11cd2915 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2918 jb 0x11cd2947 */
  if (C.cf) goto L_11cd2947;
  /* 11cd291a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd291c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd291f je 0x11cd2929 */
  if (C.zf) goto L_11cd2929;
  /* 11cd2921 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11cd2923:;
  /* 11cd2923 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2925 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd2926 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11cd2927 jne 0x11cd2923 */
  if (!C.zf) goto L_11cd2923;
L_11cd2929:;
  /* 11cd2929 mov ecx, eax */
  ECX = (EAX);
  /* 11cd292b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11cd292e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2930 mov ecx, eax */
  ECX = (EAX);
  /* 11cd2932 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11cd2935 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2937 mov ecx, edx */
  ECX = (EDX);
  /* 11cd2939 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd293c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd293f je 0x11cd2947 */
  if (C.zf) goto L_11cd2947;
  /* 11cd2941 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cd2943 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd2945 je 0x11cd294d */
  if (C.zf) goto L_11cd294d;
L_11cd2947:;
  /* 11cd2947 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2949 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd294a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11cd294b jne 0x11cd2947 */
  if (!C.zf) goto L_11cd2947;
L_11cd294d:;
  /* 11cd294d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd2951 pop edi */
  EDI = (pop32());
  /* 11cd2952 ret  */
  ESPCHK(0x11cd2900u, _esp0);
  ESP += 4; return;
L_11cd2953:;
  /* 11cd2953 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd2957 ret  */
  ESPCHK(0x11cd2900u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x11cd2960 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11cd2960(void) {
  FTRACE(0x11cd2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2960 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2961 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2963 push edi */
  push32((uint32_t)(EDI));
  /* 11cd2964 push esi */
  push32((uint32_t)(ESI));
  /* 11cd2965 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2968 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd296b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd296e mov eax, ecx */
  EAX = (ECX);
  /* 11cd2970 mov edx, ecx */
  EDX = (ECX);
  /* 11cd2972 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2974 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2976 jbe 0x11cd2980 */
  if ((C.cf||C.zf)) goto L_11cd2980;
  /* 11cd2978 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd297a jb 0x11cd2af8 */
  if (C.cf) goto L_11cd2af8;
L_11cd2980:;
  /* 11cd2980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cd2986 jne 0x11cd299c */
  if (!C.zf) goto L_11cd299c;
  /* 11cd2988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd298b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd298e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2991 jb 0x11cd29bc */
  if (C.cf) goto L_11cd29bc;
  /* 11cd2993 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2995 jmp dword ptr [edx*4 + 0x11cd2aa8] */
  switch (EDX) {
    case 0: goto L_11cd2ab8;
    case 1: goto L_11cd2ac0;
    case 2: goto L_11cd2acc;
    case 3: goto L_11cd2ae0;
    default: x86_unimpl("switch@0x11cd2995 out of table"); return;
  }
L_11cd299c:;
  /* 11cd299c mov eax, edi */
  EAX = (EDI);
  /* 11cd299e mov edx, 3 */
  EDX = (0x3u);
  /* 11cd29a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd29a6 jb 0x11cd29b4 */
  if (C.cf) goto L_11cd29b4;
  /* 11cd29a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd29ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd29ad jmp dword ptr [eax*4 + 0x11cd29c0] */
  switch (EAX) {
    case 1: goto L_11cd29d0;
    case 2: goto L_11cd29fc;
    case 3: goto L_11cd2a20;
    default: x86_unimpl("switch@0x11cd29ad out of table"); return;
  }
L_11cd29b4:;
  /* 11cd29b4 jmp dword ptr [ecx*4 + 0x11cd2ab8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11cd2ab8)))); return;
  /* 11cd29bb nop  */
  /* nop */
L_11cd29bc:;
  /* 11cd29bc jmp dword ptr [ecx*4 + 0x11cd2a3c] */
  switch (ECX) {
    case 0: goto L_11cd2a9f;
    case 1: goto L_11cd2a8c;
    case 2: goto L_11cd2a84;
    case 3: goto L_11cd2a7c;
    case 4: goto L_11cd2a74;
    case 5: goto L_11cd2a6c;
    case 6: goto L_11cd2a64;
    case 7: goto L_11cd2a5c;
    default: x86_unimpl("switch@0x11cd29bc out of table"); return;
  }
  /* 11cd29c3 nop  */
  /* nop */
L_11cd29d0:;
  /* 11cd29d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd29d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd29d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd29d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd29d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd29dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd29df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd29e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd29e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd29e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd29eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd29ee jb 0x11cd29bc */
  if (C.cf) goto L_11cd29bc;
  /* 11cd29f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd29f2 jmp dword ptr [edx*4 + 0x11cd2aa8] */
  switch (EDX) {
    case 0: goto L_11cd2ab8;
    case 1: goto L_11cd2ac0;
    case 2: goto L_11cd2acc;
    case 3: goto L_11cd2ae0;
    default: x86_unimpl("switch@0x11cd29f2 out of table"); return;
  }
  /* 11cd29f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd29fc:;
  /* 11cd29fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd29fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd2a00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2a02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd2a05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd2a08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd2a0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2a0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2a11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2a14 jb 0x11cd29bc */
  if (C.cf) goto L_11cd29bc;
  /* 11cd2a16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2a18 jmp dword ptr [edx*4 + 0x11cd2aa8] */
  switch (EDX) {
    case 0: goto L_11cd2ab8;
    case 1: goto L_11cd2ac0;
    case 2: goto L_11cd2acc;
    case 3: goto L_11cd2ae0;
    default: x86_unimpl("switch@0x11cd2a18 out of table"); return;
  }
  /* 11cd2a1f nop  */
  /* nop */
L_11cd2a20:;
  /* 11cd2a20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2a22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd2a24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2a26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cd2a27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd2a2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11cd2a2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2a2e jb 0x11cd29bc */
  if (C.cf) goto L_11cd29bc;
  /* 11cd2a30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2a32 jmp dword ptr [edx*4 + 0x11cd2aa8] */
  switch (EDX) {
    case 0: goto L_11cd2ab8;
    case 1: goto L_11cd2ac0;
    case 2: goto L_11cd2acc;
    case 3: goto L_11cd2ae0;
    default: x86_unimpl("switch@0x11cd2a32 out of table"); return;
  }
  /* 11cd2a39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd2a5c:;
  /* 11cd2a5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11cd2a60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11cd2a64:;
  /* 11cd2a64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11cd2a68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11cd2a6c:;
  /* 11cd2a6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11cd2a70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11cd2a74:;
  /* 11cd2a74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11cd2a78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11cd2a7c:;
  /* 11cd2a7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11cd2a80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11cd2a84:;
  /* 11cd2a84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11cd2a88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11cd2a8c:;
  /* 11cd2a8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11cd2a90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11cd2a94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cd2a9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2a9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cd2a9f:;
  /* 11cd2a9f jmp dword ptr [edx*4 + 0x11cd2aa8] */
  switch (EDX) {
    case 0: goto L_11cd2ab8;
    case 1: goto L_11cd2ac0;
    case 2: goto L_11cd2acc;
    case 3: goto L_11cd2ae0;
    default: x86_unimpl("switch@0x11cd2a9f out of table"); return;
  }
  /* 11cd2aa6 mov edi, edi */
  EDI = (EDI);
L_11cd2ab8:;
  /* 11cd2ab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2abb pop esi */
  ESI = (pop32());
  /* 11cd2abc pop edi */
  EDI = (pop32());
  /* 11cd2abd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2abe ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2abf nop  */
  /* nop */
L_11cd2ac0:;
  /* 11cd2ac0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd2ac2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2ac7 pop esi */
  ESI = (pop32());
  /* 11cd2ac8 pop edi */
  EDI = (pop32());
  /* 11cd2ac9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2aca ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2acb nop  */
  /* nop */
L_11cd2acc:;
  /* 11cd2acc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd2ace mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2ad0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd2ad3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd2ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2ad9 pop esi */
  ESI = (pop32());
  /* 11cd2ada pop edi */
  EDI = (pop32());
  /* 11cd2adb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2adc ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2add lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd2ae0:;
  /* 11cd2ae0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11cd2ae2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11cd2ae4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd2ae7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd2aea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd2aed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd2af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2af3 pop esi */
  ESI = (pop32());
  /* 11cd2af4 pop edi */
  EDI = (pop32());
  /* 11cd2af5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2af6 ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2af7 nop  */
  /* nop */
L_11cd2af8:;
  /* 11cd2af8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11cd2afc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11cd2b00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11cd2b06 jne 0x11cd2b2c */
  if (!C.zf) goto L_11cd2b2c;
  /* 11cd2b08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd2b0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2b0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2b11 jb 0x11cd2b20 */
  if (C.cf) goto L_11cd2b20;
  /* 11cd2b13 std  */
  C.df=1;
  /* 11cd2b14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2b16 cld  */
  C.df=0;
  /* 11cd2b17 jmp dword ptr [edx*4 + 0x11cd2c40] */
  switch (EDX) {
    case 0: goto L_11cd2c50;
    case 1: goto L_11cd2c58;
    case 2: goto L_11cd2c68;
    case 3: goto L_11cd2c7c;
    default: x86_unimpl("switch@0x11cd2b17 out of table"); return;
  }
  /* 11cd2b1e mov edi, edi */
  EDI = (EDI);
L_11cd2b20:;
  /* 11cd2b20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd2b22 jmp dword ptr [ecx*4 + 0x11cd2bf0] */
  switch (ECX) {
    case 0: goto L_11cd2c37;
    default: x86_unimpl("switch@0x11cd2b22 out of table"); return;
  }
  /* 11cd2b29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd2b2c:;
  /* 11cd2b2c mov eax, edi */
  EAX = (EDI);
  /* 11cd2b2e mov edx, 3 */
  EDX = (0x3u);
  /* 11cd2b33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2b36 jb 0x11cd2b44 */
  if (C.cf) goto L_11cd2b44;
  /* 11cd2b38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2b3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2b3d jmp dword ptr [eax*4 + 0x11cd2b48] */
  switch (EAX) {
    case 1: goto L_11cd2b58;
    case 2: goto L_11cd2b78;
    case 3: goto L_11cd2ba0;
    default: x86_unimpl("switch@0x11cd2b3d out of table"); return;
  }
L_11cd2b44:;
  /* 11cd2b44 jmp dword ptr [ecx*4 + 0x11cd2c40] */
  switch (ECX) {
    case 0: goto L_11cd2c50;
    case 1: goto L_11cd2c58;
    case 2: goto L_11cd2c68;
    case 3: goto L_11cd2c7c;
    default: x86_unimpl("switch@0x11cd2b44 out of table"); return;
  }
  /* 11cd2b4b nop  */
  /* nop */
L_11cd2b58:;
  /* 11cd2b58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd2b5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2b5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd2b60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11cd2b61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd2b64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11cd2b65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2b68 jb 0x11cd2b20 */
  if (C.cf) goto L_11cd2b20;
  /* 11cd2b6a std  */
  C.df=1;
  /* 11cd2b6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2b6d cld  */
  C.df=0;
  /* 11cd2b6e jmp dword ptr [edx*4 + 0x11cd2c40] */
  switch (EDX) {
    case 0: goto L_11cd2c50;
    case 1: goto L_11cd2c58;
    case 2: goto L_11cd2c68;
    case 3: goto L_11cd2c7c;
    default: x86_unimpl("switch@0x11cd2b6e out of table"); return;
  }
  /* 11cd2b75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd2b78:;
  /* 11cd2b78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd2b7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2b7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd2b80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd2b83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd2b86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd2b89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2b8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2b8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2b92 jb 0x11cd2b20 */
  if (C.cf) goto L_11cd2b20;
  /* 11cd2b94 std  */
  C.df=1;
  /* 11cd2b95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2b97 cld  */
  C.df=0;
  /* 11cd2b98 jmp dword ptr [edx*4 + 0x11cd2c40] */
  switch (EDX) {
    case 0: goto L_11cd2c50;
    case 1: goto L_11cd2c58;
    case 2: goto L_11cd2c68;
    case 3: goto L_11cd2c7c;
    default: x86_unimpl("switch@0x11cd2b98 out of table"); return;
  }
  /* 11cd2b9f nop  */
  /* nop */
L_11cd2ba0:;
  /* 11cd2ba0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd2ba3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2ba5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd2ba8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd2bab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd2bae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd2bb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11cd2bb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd2bb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2bba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2bbd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2bc0 jb 0x11cd2b20 */
  if (C.cf) goto L_11cd2b20;
  /* 11cd2bc6 std  */
  C.df=1;
  /* 11cd2bc7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11cd2bc9 cld  */
  C.df=0;
  /* 11cd2bca jmp dword ptr [edx*4 + 0x11cd2c40] */
  switch (EDX) {
    case 0: goto L_11cd2c50;
    case 1: goto L_11cd2c58;
    case 2: goto L_11cd2c68;
    case 3: goto L_11cd2c7c;
    default: x86_unimpl("switch@0x11cd2bca out of table"); return;
  }
  /* 11cd2bd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11cd2bd4 hlt  */
  x86_unimpl("hlt @ 0x11cd2bd4");
  /* 11cd2bd5 sub ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2bd7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2bd9 sub ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2bdb adc dword ptr [esp + ebp], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + EBP*1))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EBP*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 11cd2bde int 0x11 */
  x86_unimpl("int @ 0x11cd2bde");
  /* 11cd2be0 or al, 0x2c */
  { uint32_t _r=(AL)|(0x2cu); AL = (_r); fl_logic(_r,8); }
  /* 11cd2be2 int 0x11 */
  x86_unimpl("int @ 0x11cd2be2");
  /* 11cd2be4 adc al, 0x2c */
  { uint32_t _a=(AL),_b=(0x2cu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd2be6 int 0x11 */
  x86_unimpl("int @ 0x11cd2be6");
  /* 11cd2be8 sbb al, 0x2c */
  { uint32_t _a=(AL),_b=(0x2cu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd2bea int 0x11 */
  x86_unimpl("int @ 0x11cd2bea");
  /* 11cd2bec and al, 0x2c */
  { uint32_t _r=(AL)&(0x2cu); AL = (_r); fl_logic(_r,8); }
  /* 11cd2bee int 0x11 */
  x86_unimpl("int @ 0x11cd2bee");
  /* 11cd2bf4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11cd2bf8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11cd2bfc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11cd2c00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11cd2c04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11cd2c08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11cd2c0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11cd2c10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11cd2c14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11cd2c18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11cd2c1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11cd2c20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11cd2c24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11cd2c28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11cd2c2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11cd2c33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2c35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11cd2c37:;
  /* 11cd2c37 jmp dword ptr [edx*4 + 0x11cd2c40] */
  switch (EDX) {
    case 0: goto L_11cd2c50;
    case 1: goto L_11cd2c58;
    case 2: goto L_11cd2c68;
    case 3: goto L_11cd2c7c;
    default: x86_unimpl("switch@0x11cd2c37 out of table"); return;
  }
  /* 11cd2c3e mov edi, edi */
  EDI = (EDI);
L_11cd2c50:;
  /* 11cd2c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2c53 pop esi */
  ESI = (pop32());
  /* 11cd2c54 pop edi */
  EDI = (pop32());
  /* 11cd2c55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2c56 ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2c57 nop  */
  /* nop */
L_11cd2c58:;
  /* 11cd2c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd2c5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd2c5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2c61 pop esi */
  ESI = (pop32());
  /* 11cd2c62 pop edi */
  EDI = (pop32());
  /* 11cd2c63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2c64 ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2c65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11cd2c68:;
  /* 11cd2c68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd2c6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd2c6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd2c71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd2c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2c77 pop esi */
  ESI = (pop32());
  /* 11cd2c78 pop edi */
  EDI = (pop32());
  /* 11cd2c79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2c7a ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
  /* 11cd2c7b nop  */
  /* nop */
L_11cd2c7c:;
  /* 11cd2c7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11cd2c7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11cd2c82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11cd2c85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11cd2c88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11cd2c8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11cd2c8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2c91 pop esi */
  ESI = (pop32());
  /* 11cd2c92 pop edi */
  EDI = (pop32());
  /* 11cd2c93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cd2c94 ret  */
  ESPCHK(0x11cd2960u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11cd2ca0 (15 bytes, 7 insns) */
void f_11cd2ca0(void) {
  FTRACE(0x11cd2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd2ca5 call 0x11cc9f30 */
  push32(0x11cd2caau); f_11cc9f30();
  /* 11cd2caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2cad pop ebp */
  EBP = (pop32());
  /* 11cd2cae ret  */
  ESPCHK(0x11cd2ca0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11cd2cb0 (48 bytes, 17 insns) */
void f_11cd2cb0(void) {
  FTRACE(0x11cd2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2cb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2cb6 call 0x11ccb3c0 */
  push32(0x11cd2cbbu); f_11ccb3c0();
  /* 11cd2cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2cbe mov eax, dword ptr [0x11cff63c] */
  EAX = (r32((uint32_t)(0x11cff63c)));
  /* 11cd2cc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd2cc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2cc9 mov dword ptr [0x11cff63c], ecx */
  w32((uint32_t)(0x11cff63c), (ECX));
  /* 11cd2ccf push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2cd1 call 0x11ccb460 */
  push32(0x11cd2cd6u); f_11ccb460();
  /* 11cd2cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2cdc mov esp, ebp */
  ESP = (EBP);
  /* 11cd2cde pop ebp */
  EBP = (pop32());
  /* 11cd2cdf ret  */
  ESPCHK(0x11cd2cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x11cd2ce0 (10 bytes, 5 insns) */
void f_11cd2ce0(void) {
  FTRACE(0x11cd2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2ce3 mov eax, dword ptr [0x11cff63c] */
  EAX = (r32((uint32_t)(0x11cff63c)));
  /* 11cd2ce8 pop ebp */
  EBP = (pop32());
  /* 11cd2ce9 ret  */
  ESPCHK(0x11cd2ce0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11cd2cf0 (45 bytes, 19 insns) */
void f_11cd2cf0(void) {
  FTRACE(0x11cd2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2cf4 mov eax, dword ptr [0x11cff63c] */
  EAX = (r32((uint32_t)(0x11cff63c)));
  /* 11cd2cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd2cfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2d00 je 0x11cd2d10 */
  if (C.zf) goto L_11cd2d10;
  /* 11cd2d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2d05 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2d06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11cd2d09u);
  /* 11cd2d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd2d0e jne 0x11cd2d14 */
  if (!C.zf) goto L_11cd2d14;
L_11cd2d10:;
  /* 11cd2d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2d12 jmp 0x11cd2d19 */
  goto L_11cd2d19;
L_11cd2d14:;
  /* 11cd2d14 mov eax, 1 */
  EAX = (0x1u);
L_11cd2d19:;
  /* 11cd2d19 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2d1b pop ebp */
  EBP = (pop32());
  /* 11cd2d1c ret  */
  ESPCHK(0x11cd2cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x11cd2d20 (23 bytes, 10 insns) */
void f_11cd2d20(void) {
  FTRACE(0x11cd2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2d21 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2d23 mov eax, dword ptr [0x11cff638] */
  EAX = (r32((uint32_t)(0x11cff638)));
  /* 11cd2d28 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2d29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2d2c push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2d2d call 0x11cd2d40 */
  push32(0x11cd2d32u); f_11cd2d40();
  /* 11cd2d32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2d35 pop ebp */
  EBP = (pop32());
  /* 11cd2d36 ret  */
  ESPCHK(0x11cd2d20u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11cd2d40 (87 bytes, 34 insns) */
void f_11cd2d40(void) {
  FTRACE(0x11cd2d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2d41 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2d44 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2d48 jbe 0x11cd2d4e */
  if ((C.cf||C.zf)) goto L_11cd2d4e;
  /* 11cd2d4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2d4c jmp 0x11cd2d93 */
  goto L_11cd2d93;
L_11cd2d4e:;
  /* 11cd2d4e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2d52 ja 0x11cd2d65 */
  if ((!C.cf&&!C.zf)) goto L_11cd2d65;
  /* 11cd2d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2d57 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2d58 call 0x11cd2da0 */
  push32(0x11cd2d5du); f_11cd2da0();
  /* 11cd2d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2d60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd2d63 jmp 0x11cd2d6c */
  goto L_11cd2d6c;
L_11cd2d65:;
  /* 11cd2d65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd2d6c:;
  /* 11cd2d6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2d70 jne 0x11cd2d78 */
  if (!C.zf) goto L_11cd2d78;
  /* 11cd2d72 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2d76 jne 0x11cd2d7d */
  if (!C.zf) goto L_11cd2d7d;
L_11cd2d78:;
  /* 11cd2d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2d7b jmp 0x11cd2d93 */
  goto L_11cd2d93;
L_11cd2d7d:;
  /* 11cd2d7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2d80 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2d81 call 0x11cd2cf0 */
  push32(0x11cd2d86u); f_11cd2cf0();
  /* 11cd2d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd2d8b jne 0x11cd2d91 */
  if (!C.zf) goto L_11cd2d91;
  /* 11cd2d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2d8f jmp 0x11cd2d93 */
  goto L_11cd2d93;
L_11cd2d91:;
  /* 11cd2d91 jmp 0x11cd2d4e */
  goto L_11cd2d4e;
L_11cd2d93:;
  /* 11cd2d93 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2d95 pop ebp */
  EBP = (pop32());
  /* 11cd2d96 ret  */
  ESPCHK(0x11cd2d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012da0 @ 0x11cd2da0 (109 bytes, 37 insns) */
void f_11cd2da0(void) {
  FTRACE(0x11cd2da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2da1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2da7 cmp eax, dword ptr [0x11cfd254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfd254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2dad ja 0x11cd2ddd */
  if ((!C.cf&&!C.zf)) goto L_11cd2ddd;
  /* 11cd2daf push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2db1 call 0x11ccb3c0 */
  push32(0x11cd2db6u); f_11ccb3c0();
  /* 11cd2db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2db9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2dbc push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2dbd call 0x11cd38e0 */
  push32(0x11cd2dc2u); f_11cd38e0();
  /* 11cd2dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2dc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd2dc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2dca call 0x11ccb460 */
  push32(0x11cd2dcfu); f_11ccb460();
  /* 11cd2dcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2dd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2dd6 je 0x11cd2ddd */
  if (C.zf) goto L_11cd2ddd;
  /* 11cd2dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2ddb jmp 0x11cd2e09 */
  goto L_11cd2e09;
L_11cd2ddd:;
  /* 11cd2ddd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2de1 jne 0x11cd2dea */
  if (!C.zf) goto L_11cd2dea;
  /* 11cd2de3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11cd2dea:;
  /* 11cd2dea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2ded add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2df0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd2df3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11cd2df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2df9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd2dfc mov ecx, dword ptr [0x11d00e08] */
  ECX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd2e02 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2e03 call dword ptr [0x11d01370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01370))), 0x11cd2e09u);
L_11cd2e09:;
  /* 11cd2e09 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2e0b pop ebp */
  EBP = (pop32());
  /* 11cd2e0c ret  */
  ESPCHK(0x11cd2da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e10 @ 0x11cd2e10 (10 bytes, 5 insns) */
void f_11cd2e10(void) {
  FTRACE(0x11cd2e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2e11 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2e13 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd2e18 pop ebp */
  EBP = (pop32());
  /* 11cd2e19 ret  */
  ESPCHK(0x11cd2e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e20 @ 0x11cd2e20 (173 bytes, 59 insns) */
void f_11cd2e20(void) {
  FTRACE(0x11cd2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2e21 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2e23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2e26 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2e2a jbe 0x11cd2e33 */
  if ((C.cf||C.zf)) goto L_11cd2e33;
  /* 11cd2e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2e2e jmp 0x11cd2ec9 */
  goto L_11cd2ec9;
L_11cd2e33:;
  /* 11cd2e33 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2e35 call 0x11ccb3c0 */
  push32(0x11cd2e3au); f_11ccb3c0();
  /* 11cd2e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2e3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2e40 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2e41 call 0x11cd3250 */
  push32(0x11cd2e46u); f_11cd3250();
  /* 11cd2e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2e49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd2e4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2e50 je 0x11cd2e91 */
  if (C.zf) goto L_11cd2e91;
  /* 11cd2e52 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd2e59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2e5c cmp ecx, dword ptr [0x11cfd254] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cfd254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2e62 ja 0x11cd2e82 */
  if ((!C.cf&&!C.zf)) goto L_11cd2e82;
  /* 11cd2e64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2e67 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2e6b push eax */
  push32((uint32_t)(EAX));
  /* 11cd2e6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2e6f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2e70 call 0x11cd4120 */
  push32(0x11cd2e75u); f_11cd4120();
  /* 11cd2e75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2e78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd2e7a je 0x11cd2e82 */
  if (C.zf) goto L_11cd2e82;
  /* 11cd2e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2e7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd2e82:;
  /* 11cd2e82 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2e84 call 0x11ccb460 */
  push32(0x11cd2e89u); f_11ccb460();
  /* 11cd2e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2e8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2e8f jmp 0x11cd2ec9 */
  goto L_11cd2ec9;
L_11cd2e91:;
  /* 11cd2e91 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2e93 call 0x11ccb460 */
  push32(0x11cd2e98u); f_11ccb460();
  /* 11cd2e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2e9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2e9f jne 0x11cd2ea8 */
  if (!C.zf) goto L_11cd2ea8;
  /* 11cd2ea1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11cd2ea8:;
  /* 11cd2ea8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2eab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2eae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11cd2eb0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11cd2eb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2eb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2eba push edx */
  push32((uint32_t)(EDX));
  /* 11cd2ebb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11cd2ebd mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd2ec2 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2ec3 call dword ptr [0x11d01378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01378))), 0x11cd2ec9u);
L_11cd2ec9:;
  /* 11cd2ec9 mov esp, ebp */
  ESP = (EBP);
  /* 11cd2ecb pop ebp */
  EBP = (pop32());
  /* 11cd2ecc ret  */
  ESPCHK(0x11cd2e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x11cd2ed0 (490 bytes, 165 insns) */
void f_11cd2ed0(void) {
  FTRACE(0x11cd2ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd2ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd2ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd2ed3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2ed6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2eda jne 0x11cd2eed */
  if (!C.zf) goto L_11cd2eed;
  /* 11cd2edc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2edf push eax */
  push32((uint32_t)(EAX));
  /* 11cd2ee0 call 0x11cd2d20 */
  push32(0x11cd2ee5u); f_11cd2d20();
  /* 11cd2ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2ee8 jmp 0x11cd30b6 */
  goto L_11cd30b6;
L_11cd2eed:;
  /* 11cd2eed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2ef1 jne 0x11cd2f06 */
  if (!C.zf) goto L_11cd2f06;
  /* 11cd2ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2ef7 call 0x11cd30c0 */
  push32(0x11cd2efcu); f_11cd30c0();
  /* 11cd2efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd2f01 jmp 0x11cd30b6 */
  goto L_11cd30b6;
L_11cd2f06:;
  /* 11cd2f06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd2f0d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2f11 ja 0x11cd3089 */
  if ((!C.cf&&!C.zf)) goto L_11cd3089;
  /* 11cd2f17 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd2f19 call 0x11ccb3c0 */
  push32(0x11cd2f1eu); f_11ccb3c0();
  /* 11cd2f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2f24 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2f25 call 0x11cd3250 */
  push32(0x11cd2f2au); f_11cd3250();
  /* 11cd2f2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2f2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd2f30 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2f34 je 0x11cd304c */
  if (C.zf) goto L_11cd304c;
  /* 11cd2f3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2f3d cmp eax, dword ptr [0x11cfd254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11cfd254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2f43 ja 0x11cd2fc0 */
  if ((!C.cf&&!C.zf)) goto L_11cd2fc0;
  /* 11cd2f45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2f48 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2f49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2f4c push edx */
  push32((uint32_t)(EDX));
  /* 11cd2f4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2f50 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2f51 call 0x11cd4120 */
  push32(0x11cd2f56u); f_11cd4120();
  /* 11cd2f56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd2f5b je 0x11cd2f65 */
  if (C.zf) goto L_11cd2f65;
  /* 11cd2f5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2f60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd2f63 jmp 0x11cd2fc0 */
  goto L_11cd2fc0;
L_11cd2f65:;
  /* 11cd2f65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2f68 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2f69 call 0x11cd38e0 */
  push32(0x11cd2f6eu); f_11cd38e0();
  /* 11cd2f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2f71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd2f74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2f78 je 0x11cd2fc0 */
  if (C.zf) goto L_11cd2fc0;
  /* 11cd2f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2f7d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11cd2f80 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd2f83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd2f86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2f89 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2f8c jae 0x11cd2f96 */
  if (!C.cf) goto L_11cd2f96;
  /* 11cd2f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd2f91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd2f94 jmp 0x11cd2f9c */
  goto L_11cd2f9c;
L_11cd2f96:;
  /* 11cd2f96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2f99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11cd2f9c:;
  /* 11cd2f9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd2f9f push edx */
  push32((uint32_t)(EDX));
  /* 11cd2fa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2fa3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2fa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd2fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd2fa8 call 0x11cd6500 */
  push32(0x11cd2fadu); f_11cd6500();
  /* 11cd2fad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2fb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2fb3 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2fb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd2fb7 push eax */
  push32((uint32_t)(EAX));
  /* 11cd2fb8 call 0x11cd3310 */
  push32(0x11cd2fbdu); f_11cd3310();
  /* 11cd2fbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd2fc0:;
  /* 11cd2fc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2fc4 jne 0x11cd3040 */
  if (!C.zf) goto L_11cd3040;
  /* 11cd2fc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2fca jne 0x11cd2fd3 */
  if (!C.zf) goto L_11cd2fd3;
  /* 11cd2fcc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11cd2fd3:;
  /* 11cd2fd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2fd6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd2fd9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd2fdc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11cd2fdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd2fe2 push edx */
  push32((uint32_t)(EDX));
  /* 11cd2fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd2fe5 mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd2fea push eax */
  push32((uint32_t)(EAX));
  /* 11cd2feb call dword ptr [0x11d01370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01370))), 0x11cd2ff1u);
  /* 11cd2ff1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd2ff4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd2ff8 je 0x11cd3040 */
  if (C.zf) goto L_11cd3040;
  /* 11cd2ffa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd2ffd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cd3000 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3003 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd3006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3009 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd300c jae 0x11cd3016 */
  if (!C.cf) goto L_11cd3016;
  /* 11cd300e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3011 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cd3014 jmp 0x11cd301c */
  goto L_11cd301c;
L_11cd3016:;
  /* 11cd3016 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd3019 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11cd301c:;
  /* 11cd301c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd301f push eax */
  push32((uint32_t)(EAX));
  /* 11cd3020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3023 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3024 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3027 push edx */
  push32((uint32_t)(EDX));
  /* 11cd3028 call 0x11cd6500 */
  push32(0x11cd302du); f_11cd6500();
  /* 11cd302d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3033 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd3037 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3038 call 0x11cd3310 */
  push32(0x11cd303du); f_11cd3310();
  /* 11cd303d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd3040:;
  /* 11cd3040 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd3042 call 0x11ccb460 */
  push32(0x11cd3047u); f_11ccb460();
  /* 11cd3047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd304a jmp 0x11cd3089 */
  goto L_11cd3089;
L_11cd304c:;
  /* 11cd304c push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd304e call 0x11ccb460 */
  push32(0x11cd3053u); f_11ccb460();
  /* 11cd3053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3056 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd305a jne 0x11cd3063 */
  if (!C.zf) goto L_11cd3063;
  /* 11cd305c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11cd3063:;
  /* 11cd3063 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd3066 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3069 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd306c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11cd306f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd3072 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3076 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3079 mov edx, dword ptr [0x11d00e08] */
  EDX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd307f push edx */
  push32((uint32_t)(EDX));
  /* 11cd3080 call dword ptr [0x11d01378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01378))), 0x11cd3086u);
  /* 11cd3086 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd3089:;
  /* 11cd3089 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd308d jne 0x11cd3098 */
  if (!C.zf) goto L_11cd3098;
  /* 11cd308f cmp dword ptr [0x11cff638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3096 jne 0x11cd309d */
  if (!C.zf) goto L_11cd309d;
L_11cd3098:;
  /* 11cd3098 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd309b jmp 0x11cd30b6 */
  goto L_11cd30b6;
L_11cd309d:;
  /* 11cd309d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd30a0 push eax */
  push32((uint32_t)(EAX));
  /* 11cd30a1 call 0x11cd2cf0 */
  push32(0x11cd30a6u); f_11cd2cf0();
  /* 11cd30a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd30a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd30ab jne 0x11cd30b1 */
  if (!C.zf) goto L_11cd30b1;
  /* 11cd30ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd30af jmp 0x11cd30b6 */
  goto L_11cd30b6;
L_11cd30b1:;
  /* 11cd30b1 jmp 0x11cd2f06 */
  goto L_11cd2f06;
L_11cd30b6:;
  /* 11cd30b6 mov esp, ebp */
  ESP = (EBP);
  /* 11cd30b8 pop ebp */
  EBP = (pop32());
  /* 11cd30b9 ret  */
  ESPCHK(0x11cd2ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x11cd30c0 (104 bytes, 38 insns) */
void f_11cd30c0(void) {
  FTRACE(0x11cd30c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd30c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd30c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd30c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd30c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd30c8 jne 0x11cd30cc */
  if (!C.zf) goto L_11cd30cc;
  /* 11cd30ca jmp 0x11cd3124 */
  goto L_11cd3124;
L_11cd30cc:;
  /* 11cd30cc push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd30ce call 0x11ccb3c0 */
  push32(0x11cd30d3u); f_11ccb3c0();
  /* 11cd30d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd30d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd30d9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd30da call 0x11cd3250 */
  push32(0x11cd30dfu); f_11cd3250();
  /* 11cd30df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd30e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd30e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd30e9 je 0x11cd3107 */
  if (C.zf) goto L_11cd3107;
  /* 11cd30eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd30ee push ecx */
  push32((uint32_t)(ECX));
  /* 11cd30ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd30f2 push edx */
  push32((uint32_t)(EDX));
  /* 11cd30f3 call 0x11cd3310 */
  push32(0x11cd30f8u); f_11cd3310();
  /* 11cd30f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd30fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd30fd call 0x11ccb460 */
  push32(0x11cd3102u); f_11ccb460();
  /* 11cd3102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3105 jmp 0x11cd3124 */
  goto L_11cd3124;
L_11cd3107:;
  /* 11cd3107 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd3109 call 0x11ccb460 */
  push32(0x11cd310eu); f_11ccb460();
  /* 11cd310e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3114 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3115 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3117 mov ecx, dword ptr [0x11d00e08] */
  ECX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd311d push ecx */
  push32((uint32_t)(ECX));
  /* 11cd311e call dword ptr [0x11d0137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0137c))), 0x11cd3124u);
L_11cd3124:;
  /* 11cd3124 mov esp, ebp */
  ESP = (EBP);
  /* 11cd3126 pop ebp */
  EBP = (pop32());
  /* 11cd3127 ret  */
  ESPCHK(0x11cd30c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013130 @ 0x11cd3130 (116 bytes, 34 insns) */
void f_11cd3130(void) {
  FTRACE(0x11cd3130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd3130 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd3131 mov ebp, esp */
  EBP = (ESP);
  /* 11cd3133 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3134 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11cd313b push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd313d call 0x11ccb3c0 */
  push32(0x11cd3142u); f_11ccb3c0();
  /* 11cd3142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3145 call 0x11cd4840 */
  push32(0x11cd314au); f_11cd4840();
  /* 11cd314a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd314c jge 0x11cd3155 */
  if ((C.sf==C.of)) goto L_11cd3155;
  /* 11cd314e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11cd3155:;
  /* 11cd3155 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cd3157 call 0x11ccb460 */
  push32(0x11cd315cu); f_11ccb460();
  /* 11cd315c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd315f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3161 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3163 mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd3168 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3169 call dword ptr [0x11d01410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01410))), 0x11cd316fu);
  /* 11cd316f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd3171 jne 0x11cd319d */
  if (!C.zf) goto L_11cd319d;
  /* 11cd3173 call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cd3179u);
  /* 11cd3179 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd317c jne 0x11cd3196 */
  if (!C.zf) goto L_11cd3196;
  /* 11cd317e call 0x11cd68f0 */
  push32(0x11cd3183u); f_11cd68f0();
  /* 11cd3183 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11cd3189 call 0x11cd68e0 */
  push32(0x11cd318eu); f_11cd68e0();
  /* 11cd318e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11cd3194 jmp 0x11cd319d */
  goto L_11cd319d;
L_11cd3196:;
  /* 11cd3196 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11cd319d:;
  /* 11cd319d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd31a0 mov esp, ebp */
  ESP = (EBP);
  /* 11cd31a2 pop ebp */
  EBP = (pop32());
  /* 11cd31a3 ret  */
  ESPCHK(0x11cd3130u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x11cd31b0 (10 bytes, 5 insns) */
void f_11cd31b0(void) {
  FTRACE(0x11cd31b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd31b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd31b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd31b3 call 0x11cd3130 */
  push32(0x11cd31b8u); f_11cd3130();
  /* 11cd31b8 pop ebp */
  EBP = (pop32());
  /* 11cd31b9 ret  */
  ESPCHK(0x11cd31b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131c0 @ 0x11cd31c0 (10 bytes, 5 insns) */
void f_11cd31c0(void) {
  FTRACE(0x11cd31c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd31c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd31c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd31c3 mov eax, dword ptr [0x11cfd254] */
  EAX = (r32((uint32_t)(0x11cfd254)));
  /* 11cd31c8 pop ebp */
  EBP = (pop32());
  /* 11cd31c9 ret  */
  ESPCHK(0x11cd31c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131d0 @ 0x11cd31d0 (31 bytes, 11 insns) */
void f_11cd31d0(void) {
  FTRACE(0x11cd31d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd31d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd31d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd31d3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd31da jbe 0x11cd31e0 */
  if ((C.cf||C.zf)) goto L_11cd31e0;
  /* 11cd31dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd31de jmp 0x11cd31ed */
  goto L_11cd31ed;
L_11cd31e0:;
  /* 11cd31e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd31e3 mov dword ptr [0x11cfd254], eax */
  w32((uint32_t)(0x11cfd254), (EAX));
  /* 11cd31e8 mov eax, 1 */
  EAX = (0x1u);
L_11cd31ed:;
  /* 11cd31ed pop ebp */
  EBP = (pop32());
  /* 11cd31ee ret  */
  ESPCHK(0x11cd31d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x11cd31f0 (89 bytes, 20 insns) */
void f_11cd31f0(void) {
  FTRACE(0x11cd31f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd31f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd31f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd31f3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11cd31f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd31fa mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd31ff push eax */
  push32((uint32_t)(EAX));
  /* 11cd3200 call dword ptr [0x11d01370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01370))), 0x11cd3206u);
  /* 11cd3206 mov dword ptr [0x11d00e04], eax */
  w32((uint32_t)(0x11d00e04), (EAX));
  /* 11cd320b cmp dword ptr [0x11d00e04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00e04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3212 jne 0x11cd3218 */
  if (!C.zf) goto L_11cd3218;
  /* 11cd3214 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3216 jmp 0x11cd3247 */
  goto L_11cd3247;
L_11cd3218:;
  /* 11cd3218 mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd321e mov dword ptr [0x11d00df8], ecx */
  w32((uint32_t)(0x11d00df8), (ECX));
  /* 11cd3224 mov dword ptr [0x11d00dfc], 0 */
  w32((uint32_t)(0x11d00dfc), (0x0u));
  /* 11cd322e mov dword ptr [0x11d00e00], 0 */
  w32((uint32_t)(0x11d00e00), (0x0u));
  /* 11cd3238 mov dword ptr [0x11d00de4], 0x10 */
  w32((uint32_t)(0x11d00de4), (0x10u));
  /* 11cd3242 mov eax, 1 */
  EAX = (0x1u);
L_11cd3247:;
  /* 11cd3247 pop ebp */
  EBP = (pop32());
  /* 11cd3248 ret  */
  ESPCHK(0x11cd31f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013250 @ 0x11cd3250 (85 bytes, 29 insns) */
void f_11cd3250(void) {
  FTRACE(0x11cd3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd3250 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd3251 mov ebp, esp */
  EBP = (ESP);
  /* 11cd3253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3256 mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd325b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd325e mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd3264 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3266 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd3269 mov edx, dword ptr [0x11d00e04] */
  EDX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd326f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cd3272:;
  /* 11cd3272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3275 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3278 jae 0x11cd329f */
  if (!C.cf) goto L_11cd329f;
  /* 11cd327a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd327d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3280 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3283 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd3286 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd328d jae 0x11cd3294 */
  if (!C.cf) goto L_11cd3294;
  /* 11cd328f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3292 jmp 0x11cd32a1 */
  goto L_11cd32a1;
L_11cd3294:;
  /* 11cd3294 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3297 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd329a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd329d jmp 0x11cd3272 */
  goto L_11cd3272;
L_11cd329f:;
  /* 11cd329f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd32a1:;
  /* 11cd32a1 mov esp, ebp */
  ESP = (EBP);
  /* 11cd32a3 pop ebp */
  EBP = (pop32());
  /* 11cd32a4 ret  */
  ESPCHK(0x11cd3250u, _esp0);
  ESP += 4; return;
}

/* FUN_100132b0 @ 0x11cd32b0 (95 bytes, 33 insns) */
void f_11cd32b0(void) {
  FTRACE(0x11cd32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd32b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd32b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd32b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd32b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd32b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd32bc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd32bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd32c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd32c5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11cd32c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd32cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd32d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd32d3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd32d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd32d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd32db and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd32dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd32df jne 0x11cd3301 */
  if (!C.zf) goto L_11cd3301;
  /* 11cd32e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd32e4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd32e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd32e9 jne 0x11cd3301 */
  if (!C.zf) goto L_11cd3301;
  /* 11cd32eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd32ee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd32f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd32f6 je 0x11cd3301 */
  if (C.zf) goto L_11cd3301;
  /* 11cd32f8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11cd32ff jmp 0x11cd3308 */
  goto L_11cd3308;
L_11cd3301:;
  /* 11cd3301 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11cd3308:;
  /* 11cd3308 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd330b mov esp, ebp */
  ESP = (EBP);
  /* 11cd330d pop ebp */
  EBP = (pop32());
  /* 11cd330e ret  */
  ESPCHK(0x11cd32b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013310 @ 0x11cd3310 (1485 bytes, 453 insns) */
void f_11cd3310(void) {
  FTRACE(0x11cd3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd3310 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd3311 mov ebp, esp */
  EBP = (ESP);
  /* 11cd3313 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3319 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd331c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11cd331f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3322 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd3325 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd332b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd332e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11cd3331 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd3334 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3337 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd333d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3340 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11cd3347 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd334a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd334d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3350 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd3353 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3356 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd3358 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd335b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11cd335e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3361 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3364 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11cd3367 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd336a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd336c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cd336f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3372 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11cd3375 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd3378 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd337b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd337e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3380 jne 0x11cd34a8 */
  if (!C.zf) goto L_11cd34a8;
  /* 11cd3386 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3389 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cd338c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd338f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cd3392 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3396 jbe 0x11cd339f */
  if ((C.cf||C.zf)) goto L_11cd339f;
  /* 11cd3398 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11cd339f:;
  /* 11cd339f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd33a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd33a5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd33a8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd33ab jne 0x11cd3481 */
  if (!C.zf) goto L_11cd3481;
  /* 11cd33b1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd33b5 jae 0x11cd3416 */
  if (!C.cf) goto L_11cd3416;
  /* 11cd33b7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd33bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd33bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd33c1 not eax */
  EAX = (~(EAX));
  /* 11cd33c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd33c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd33c9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11cd33cd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd33cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd33d2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd33d5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11cd33d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd33dc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd33df mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11cd33e2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd33e5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd33e8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd33eb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11cd33ee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd33f1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd33f4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd33f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd33fa jne 0x11cd3414 */
  if (!C.zf) goto L_11cd3414;
  /* 11cd33fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd3401 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3404 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd3406 not eax */
  EAX = (~(EAX));
  /* 11cd3408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd340b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd340d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd340f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3412 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd3414:;
  /* 11cd3414 jmp 0x11cd3481 */
  goto L_11cd3481;
L_11cd3416:;
  /* 11cd3416 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3419 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd341c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3421 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3423 not edx */
  EDX = (~(EDX));
  /* 11cd3425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3428 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd342b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11cd3432 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3434 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3437 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd343a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11cd3441 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3444 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3447 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd344a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd344d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3450 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3453 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11cd3456 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3459 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd345c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd3460 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3462 jne 0x11cd3481 */
  if (!C.zf) goto L_11cd3481;
  /* 11cd3464 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3467 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd346a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd346f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3471 not edx */
  EDX = (~(EDX));
  /* 11cd3473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3476 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd3479 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd347b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd347e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11cd3481:;
  /* 11cd3481 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3484 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd3487 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd348a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd348d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd3490 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3493 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd3496 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3499 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd349c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd349f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd34a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd34a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11cd34a8:;
  /* 11cd34a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd34ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cd34ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd34b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd34b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd34b8 jbe 0x11cd34c1 */
  if ((C.cf||C.zf)) goto L_11cd34c1;
  /* 11cd34ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11cd34c1:;
  /* 11cd34c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd34c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd34c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd34c9 jne 0x11cd3625 */
  if (!C.zf) goto L_11cd3625;
  /* 11cd34cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd34d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd34d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11cd34d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd34db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cd34de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd34e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11cd34e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd34e8 jbe 0x11cd34f1 */
  if ((C.cf||C.zf)) goto L_11cd34f1;
  /* 11cd34ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11cd34f1:;
  /* 11cd34f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd34f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd34f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11cd34fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd34fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cd3500 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3503 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11cd3506 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd350a jbe 0x11cd3513 */
  if ((C.cf||C.zf)) goto L_11cd3513;
  /* 11cd350c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11cd3513:;
  /* 11cd3513 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd3516 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3519 je 0x11cd361f */
  if (C.zf) goto L_11cd361f;
  /* 11cd351f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3522 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3525 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd3528 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd352b jne 0x11cd3601 */
  if (!C.zf) goto L_11cd3601;
  /* 11cd3531 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3535 jae 0x11cd3596 */
  if (!C.cf) goto L_11cd3596;
  /* 11cd3537 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd353c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd353f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3541 not edx */
  EDX = (~(EDX));
  /* 11cd3543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3546 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3549 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11cd354d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd354f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3552 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3555 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11cd3559 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd355c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd355f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd3562 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd3565 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3568 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd356b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11cd356e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3571 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3574 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd3578 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd357a jne 0x11cd3594 */
  if (!C.zf) goto L_11cd3594;
  /* 11cd357c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3581 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd3584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3586 not edx */
  EDX = (~(EDX));
  /* 11cd3588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd358b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd358d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd358f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3592 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd3594:;
  /* 11cd3594 jmp 0x11cd3601 */
  goto L_11cd3601;
L_11cd3596:;
  /* 11cd3596 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd3599 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd359c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd35a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd35a3 not eax */
  EAX = (~(EAX));
  /* 11cd35a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd35a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd35ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11cd35b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd35b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd35b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd35ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11cd35c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd35c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd35c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11cd35ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd35cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd35d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd35d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11cd35d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd35d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd35dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd35e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd35e2 jne 0x11cd3601 */
  if (!C.zf) goto L_11cd3601;
  /* 11cd35e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd35e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd35ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd35ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd35f1 not eax */
  EAX = (~(EAX));
  /* 11cd35f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd35f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd35f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd35fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd35fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd3601:;
  /* 11cd3601 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3604 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd3607 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd360a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd360d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd3610 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3613 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd3616 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3619 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd361c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11cd361f:;
  /* 11cd361f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3622 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11cd3625:;
  /* 11cd3625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd3628 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd362b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd362d jne 0x11cd363b */
  if (!C.zf) goto L_11cd363b;
  /* 11cd362f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd3632 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3635 je 0x11cd374b */
  if (C.zf) goto L_11cd374b;
L_11cd363b:;
  /* 11cd363b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd363e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3641 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11cd3644 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11cd3647 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd364a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd364d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd3650 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd3653 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3656 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3659 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11cd365c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd365f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3662 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11cd3665 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3668 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd366b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd366e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd3671 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3674 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3677 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd367a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd367d jne 0x11cd374b */
  if (!C.zf) goto L_11cd374b;
  /* 11cd3683 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3687 jae 0x11cd36e4 */
  if (!C.cf) goto L_11cd36e4;
  /* 11cd3689 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd368c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd368f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd3693 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3696 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3699 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd369c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd369f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd36a2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd36a5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11cd36a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd36aa jne 0x11cd36c2 */
  if (!C.zf) goto L_11cd36c2;
  /* 11cd36ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd36b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd36b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd36b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd36b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd36bb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd36bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd36c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd36c2:;
  /* 11cd36c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd36c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd36ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd36cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd36cf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd36d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11cd36d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd36d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd36db mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd36de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11cd36e2 jmp 0x11cd374b */
  goto L_11cd374b;
L_11cd36e4:;
  /* 11cd36e4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd36e7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd36ea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd36ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd36f1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd36f4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd36f7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd36fa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd36fd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3700 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11cd3703 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd3705 jne 0x11cd3722 */
  if (!C.zf) goto L_11cd3722;
  /* 11cd3707 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd370a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd370d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3712 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3717 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd371a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd371c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd371f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11cd3722:;
  /* 11cd3722 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3725 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3728 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd372d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd372f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3732 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3735 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11cd373c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd373e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3741 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11cd3744 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11cd374b:;
  /* 11cd374b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd374e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3751 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd3753 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3756 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3759 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd375c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11cd375f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3762 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd3764 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd376a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd376c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd376f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3772 jne 0x11cd38d9 */
  if (!C.zf) goto L_11cd38d9;
  /* 11cd3778 cmp dword ptr [0x11d00dfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00dfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd377f je 0x11cd38c8 */
  if (C.zf) goto L_11cd38c8;
  /* 11cd3785 mov eax, dword ptr [0x11d00df4] */
  EAX = (r32((uint32_t)(0x11d00df4)));
  /* 11cd378a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11cd378d mov ecx, dword ptr [0x11d00dfc] */
  ECX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3793 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd3796 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3798 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cd379b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11cd37a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cd37a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd37a8 push eax */
  push32((uint32_t)(EAX));
  /* 11cd37a9 call dword ptr [0x11d01384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01384))), 0x11cd37afu);
  /* 11cd37af mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd37b4 mov ecx, dword ptr [0x11d00df4] */
  ECX = (r32((uint32_t)(0x11d00df4)));
  /* 11cd37ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd37bc mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd37c1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd37c4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd37c6 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd37cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd37cf mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd37d4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd37d7 mov edx, dword ptr [0x11d00df4] */
  EDX = (r32((uint32_t)(0x11d00df4)));
  /* 11cd37dd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11cd37e8 mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd37ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd37f0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11cd37f3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd37f6 mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd37fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd37fe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11cd3801 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3807 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cd380a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11cd380e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3810 jne 0x11cd3826 */
  if (!C.zf) goto L_11cd3826;
  /* 11cd3812 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3818 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd381b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11cd381d mov ecx, dword ptr [0x11d00dfc] */
  ECX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3823 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11cd3826:;
  /* 11cd3826 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd382c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3830 jne 0x11cd38c8 */
  if (!C.zf) goto L_11cd38c8;
  /* 11cd3836 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cd383b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd383d mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3842 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd3845 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3846 call dword ptr [0x11d01384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01384))), 0x11cd384cu);
  /* 11cd384c mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3852 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cd3855 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3858 mov ecx, dword ptr [0x11d00e08] */
  ECX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd385e push ecx */
  push32((uint32_t)(ECX));
  /* 11cd385f call dword ptr [0x11d0137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0137c))), 0x11cd3865u);
  /* 11cd3865 mov edx, dword ptr [0x11d00e00] */
  EDX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd386b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd386e mov eax, dword ptr [0x11d00e04] */
  EAX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd3873 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3875 mov ecx, dword ptr [0x11d00dfc] */
  ECX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd387b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd387e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3880 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3881 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3887 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd388a push edx */
  push32((uint32_t)(EDX));
  /* 11cd388b mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd3890 push eax */
  push32((uint32_t)(EAX));
  /* 11cd3891 call 0x11cd2960 */
  push32(0x11cd3896u); f_11cd2960();
  /* 11cd3896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3899 mov ecx, dword ptr [0x11d00e00] */
  ECX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd389f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd38a2 mov dword ptr [0x11d00e00], ecx */
  w32((uint32_t)(0x11d00e00), (ECX));
  /* 11cd38a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd38ab cmp edx, dword ptr [0x11d00dfc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11d00dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd38b1 jbe 0x11cd38bc */
  if ((C.cf||C.zf)) goto L_11cd38bc;
  /* 11cd38b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd38b6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd38b9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11cd38bc:;
  /* 11cd38bc mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd38c2 mov dword ptr [0x11d00df8], ecx */
  w32((uint32_t)(0x11d00df8), (ECX));
L_11cd38c8:;
  /* 11cd38c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd38cb mov dword ptr [0x11d00dfc], edx */
  w32((uint32_t)(0x11d00dfc), (EDX));
  /* 11cd38d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd38d4 mov dword ptr [0x11d00df4], eax */
  w32((uint32_t)(0x11d00df4), (EAX));
L_11cd38d9:;
  /* 11cd38d9 mov esp, ebp */
  ESP = (EBP);
  /* 11cd38db pop ebp */
  EBP = (pop32());
  /* 11cd38dc ret  */
  ESPCHK(0x11cd3310u, _esp0);
  ESP += 4; return;
}

/* FUN_100138e0 @ 0x11cd38e0 (1334 bytes, 427 insns) */
void f_11cd38e0(void) {
  FTRACE(0x11cd38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd38e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd38e3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd38e6 push esi */
  push32((uint32_t)(ESI));
  /* 11cd38e7 mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd38ec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd38ef mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd38f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd38f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11cd38fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd38fd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3900 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3903 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11cd3906 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3909 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cd390c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd390f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd3912 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3916 jge 0x11cd392c */
  if ((C.sf==C.of)) goto L_11cd392c;
  /* 11cd3918 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd391b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd391e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3920 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cd3923 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11cd392a jmp 0x11cd3941 */
  goto L_11cd3941;
L_11cd392c:;
  /* 11cd392c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cd3933 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3936 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3939 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd393c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd393e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11cd3941:;
  /* 11cd3941 mov ecx, dword ptr [0x11d00df8] */
  ECX = (r32((uint32_t)(0x11d00df8)));
  /* 11cd3947 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11cd394a:;
  /* 11cd394a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd394d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3950 jae 0x11cd3976 */
  if (!C.cf) goto L_11cd3976;
  /* 11cd3952 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3955 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3958 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11cd395a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd395d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3960 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3963 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd3965 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3967 je 0x11cd396b */
  if (C.zf) goto L_11cd396b;
  /* 11cd3969 jmp 0x11cd3976 */
  goto L_11cd3976;
L_11cd396b:;
  /* 11cd396b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd396e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3971 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cd3974 jmp 0x11cd394a */
  goto L_11cd394a;
L_11cd3976:;
  /* 11cd3976 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3979 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd397c jne 0x11cd3a5d */
  if (!C.zf) goto L_11cd3a5d;
  /* 11cd3982 mov eax, dword ptr [0x11d00e04] */
  EAX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd3987 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11cd398a:;
  /* 11cd398a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd398d cmp ecx, dword ptr [0x11d00df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3993 jae 0x11cd39b9 */
  if (!C.cf) goto L_11cd39b9;
  /* 11cd3995 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3998 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd399b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11cd399d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd39a3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd39a6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd39a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd39aa je 0x11cd39ae */
  if (C.zf) goto L_11cd39ae;
  /* 11cd39ac jmp 0x11cd39b9 */
  goto L_11cd39b9;
L_11cd39ae:;
  /* 11cd39ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39b1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd39b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd39b7 jmp 0x11cd398a */
  goto L_11cd398a;
L_11cd39b9:;
  /* 11cd39b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39bc cmp ecx, dword ptr [0x11d00df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd39c2 jne 0x11cd3a5d */
  if (!C.zf) goto L_11cd3a5d;
L_11cd39c8:;
  /* 11cd39c8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39cb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd39ce jae 0x11cd39e6 */
  if (!C.cf) goto L_11cd39e6;
  /* 11cd39d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd39d7 je 0x11cd39db */
  if (C.zf) goto L_11cd39db;
  /* 11cd39d9 jmp 0x11cd39e6 */
  goto L_11cd39e6;
L_11cd39db:;
  /* 11cd39db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd39e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cd39e4 jmp 0x11cd39c8 */
  goto L_11cd39c8;
L_11cd39e6:;
  /* 11cd39e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd39ec jne 0x11cd3a37 */
  if (!C.zf) goto L_11cd3a37;
  /* 11cd39ee mov eax, dword ptr [0x11d00e04] */
  EAX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd39f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11cd39f6:;
  /* 11cd39f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd39f9 cmp ecx, dword ptr [0x11d00df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd39ff jae 0x11cd3a17 */
  if (!C.cf) goto L_11cd3a17;
  /* 11cd3a01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a04 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3a08 je 0x11cd3a0c */
  if (C.zf) goto L_11cd3a0c;
  /* 11cd3a0a jmp 0x11cd3a17 */
  goto L_11cd3a17;
L_11cd3a0c:;
  /* 11cd3a0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a0f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3a12 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd3a15 jmp 0x11cd39f6 */
  goto L_11cd39f6;
L_11cd3a17:;
  /* 11cd3a17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a1a cmp ecx, dword ptr [0x11d00df8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00df8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3a20 jne 0x11cd3a37 */
  if (!C.zf) goto L_11cd3a37;
  /* 11cd3a22 call 0x11cd3e20 */
  push32(0x11cd3a27u); f_11cd3e20();
  /* 11cd3a27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd3a2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3a2e jne 0x11cd3a37 */
  if (!C.zf) goto L_11cd3a37;
  /* 11cd3a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3a32 jmp 0x11cd3e11 */
  goto L_11cd3e11;
L_11cd3a37:;
  /* 11cd3a37 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a3a push edx */
  push32((uint32_t)(EDX));
  /* 11cd3a3b call 0x11cd3f30 */
  push32(0x11cd3a40u); f_11cd3f30();
  /* 11cd3a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3a43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a46 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cd3a49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd3a4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a4e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd3a51 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3a54 jne 0x11cd3a5d */
  if (!C.zf) goto L_11cd3a5d;
  /* 11cd3a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3a58 jmp 0x11cd3e11 */
  goto L_11cd3e11;
L_11cd3a5d:;
  /* 11cd3a5d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a60 mov dword ptr [0x11d00df8], edx */
  w32((uint32_t)(0x11d00df8), (EDX));
  /* 11cd3a66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3a69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd3a6c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11cd3a6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3a72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd3a74 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11cd3a77 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3a7b je 0x11cd3aa0 */
  if (C.zf) goto L_11cd3aa0;
  /* 11cd3a7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3a80 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3a83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3a86 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3a8a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3a8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3a90 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3a93 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11cd3a9a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd3a9e jne 0x11cd3ad5 */
  if (!C.zf) goto L_11cd3ad5;
L_11cd3aa0:;
  /* 11cd3aa0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11cd3aa7:;
  /* 11cd3aa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3aaa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3aad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3ab0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3ab4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3ab7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3aba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3abd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11cd3ac4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd3ac8 jne 0x11cd3ad5 */
  if (!C.zf) goto L_11cd3ad5;
  /* 11cd3aca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3acd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3ad0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11cd3ad3 jmp 0x11cd3aa7 */
  goto L_11cd3aa7;
L_11cd3ad5:;
  /* 11cd3ad5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3ad8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd3ade mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3ae1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11cd3ae8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd3aeb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cd3af2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3af5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3af8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd3afb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3aff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cd3b02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3b06 jne 0x11cd3b22 */
  if (!C.zf) goto L_11cd3b22;
  /* 11cd3b08 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11cd3b0f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3b12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3b15 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cd3b18 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3b1f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11cd3b22:;
  /* 11cd3b22 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3b26 jl 0x11cd3b3b */
  if ((C.sf!=C.of)) goto L_11cd3b3b;
  /* 11cd3b28 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd3b2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd3b2d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cd3b30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3b33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3b36 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11cd3b39 jmp 0x11cd3b22 */
  goto L_11cd3b22;
L_11cd3b3b:;
  /* 11cd3b3b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3b3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3b41 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11cd3b45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd3b48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3b4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd3b4d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3b50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd3b53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3b56 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cd3b59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3b5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cd3b5f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3b63 jle 0x11cd3b6c */
  if ((C.zf||C.sf!=C.of)) goto L_11cd3b6c;
  /* 11cd3b65 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11cd3b6c:;
  /* 11cd3b6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3b6f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3b72 je 0x11cd3d90 */
  if (C.zf) goto L_11cd3d90;
  /* 11cd3b78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3b7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3b7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd3b81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3b84 jne 0x11cd3c5a */
  if (!C.zf) goto L_11cd3c5a;
  /* 11cd3b8a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3b8e jge 0x11cd3bef */
  if ((C.sf==C.of)) goto L_11cd3bef;
  /* 11cd3b90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd3b95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3b98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd3b9a not eax */
  EAX = (~(EAX));
  /* 11cd3b9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3b9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3ba2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11cd3ba6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd3ba8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3bab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3bae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11cd3bb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3bb5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3bb8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11cd3bbb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd3bbe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3bc1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3bc4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11cd3bc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3bca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3bcd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd3bd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd3bd3 jne 0x11cd3bed */
  if (!C.zf) goto L_11cd3bed;
  /* 11cd3bd5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd3bda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3bdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd3bdf not eax */
  EAX = (~(EAX));
  /* 11cd3be1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3be4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd3be6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3be8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3beb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd3bed:;
  /* 11cd3bed jmp 0x11cd3c5a */
  goto L_11cd3c5a;
L_11cd3bef:;
  /* 11cd3bef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3bf2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3bf5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3bfa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3bfc not edx */
  EDX = (~(EDX));
  /* 11cd3bfe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3c01 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3c04 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11cd3c0b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3c0d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3c10 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3c13 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11cd3c1a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3c1d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3c20 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd3c23 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd3c26 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3c29 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3c2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11cd3c2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3c32 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3c35 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd3c39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3c3b jne 0x11cd3c5a */
  if (!C.zf) goto L_11cd3c5a;
  /* 11cd3c3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3c40 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3c43 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3c48 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3c4a not edx */
  EDX = (~(EDX));
  /* 11cd3c4c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3c4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd3c52 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd3c54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3c57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11cd3c5a:;
  /* 11cd3c5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3c5d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd3c60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3c63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd3c66 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd3c69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3c6c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd3c6f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3c72 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd3c75 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd3c78 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3c7c je 0x11cd3d90 */
  if (C.zf) goto L_11cd3d90;
  /* 11cd3c82 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3c88 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11cd3c8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd3c8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3c91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd3c94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd3c97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd3c9a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3c9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd3ca0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd3ca3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd3ca6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3ca9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cd3cac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3caf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd3cb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3cb5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cd3cb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3cbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3cbe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd3cc1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3cc4 jne 0x11cd3d90 */
  if (!C.zf) goto L_11cd3d90;
  /* 11cd3cca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3cce jge 0x11cd3d2a */
  if ((C.sf==C.of)) goto L_11cd3d2a;
  /* 11cd3cd0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3cd3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3cd6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd3cda mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3cdd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3ce0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11cd3ce3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd3ce5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3ce8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3ceb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11cd3cee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3cf0 jne 0x11cd3d08 */
  if (!C.zf) goto L_11cd3d08;
  /* 11cd3cf2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd3cf7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3cfa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd3cfc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3cff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd3d01 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3d03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3d06 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd3d08:;
  /* 11cd3d08 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3d0d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3d10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3d12 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3d15 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d18 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11cd3d1c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3d1e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3d21 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d24 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11cd3d28 jmp 0x11cd3d90 */
  goto L_11cd3d90;
L_11cd3d2a:;
  /* 11cd3d2a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d2d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3d30 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd3d34 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d37 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3d3a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11cd3d3d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd3d3f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d42 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3d45 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11cd3d48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3d4a jne 0x11cd3d67 */
  if (!C.zf) goto L_11cd3d67;
  /* 11cd3d4c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3d4f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3d52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd3d57 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd3d59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3d5c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd3d5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd3d61 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3d64 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd3d67:;
  /* 11cd3d67 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd3d6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3d6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd3d72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd3d74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3d77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d7a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11cd3d81 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3d83 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3d86 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3d89 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11cd3d90:;
  /* 11cd3d90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3d94 je 0x11cd3daa */
  if (C.zf) goto L_11cd3daa;
  /* 11cd3d96 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3d99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3d9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd3d9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3da1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3da4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3da7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11cd3daa:;
  /* 11cd3daa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3dad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3db0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd3db3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3db6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3db9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3dbc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd3dbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3dc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3dc4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3dc7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3dca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11cd3dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3dd0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd3dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3dd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd3dd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3dda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3ddd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd3ddf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd3de1 jne 0x11cd3e03 */
  if (!C.zf) goto L_11cd3e03;
  /* 11cd3de3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3de6 cmp eax, dword ptr [0x11d00dfc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00dfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3dec jne 0x11cd3e03 */
  if (!C.zf) goto L_11cd3e03;
  /* 11cd3dee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3df1 cmp ecx, dword ptr [0x11d00df4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00df4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3df7 jne 0x11cd3e03 */
  if (!C.zf) goto L_11cd3e03;
  /* 11cd3df9 mov dword ptr [0x11d00dfc], 0 */
  w32((uint32_t)(0x11d00dfc), (0x0u));
L_11cd3e03:;
  /* 11cd3e03 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cd3e06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd3e09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cd3e0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3e0e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11cd3e11:;
  /* 11cd3e11 pop esi */
  ESI = (pop32());
  /* 11cd3e12 mov esp, ebp */
  ESP = (EBP);
  /* 11cd3e14 pop ebp */
  EBP = (pop32());
  /* 11cd3e15 ret  */
  ESPCHK(0x11cd38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013e20 @ 0x11cd3e20 (271 bytes, 78 insns) */
void f_11cd3e20(void) {
  FTRACE(0x11cd3e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd3e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd3e21 mov ebp, esp */
  EBP = (ESP);
  /* 11cd3e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3e24 mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd3e29 cmp eax, dword ptr [0x11d00de4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00de4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3e2f jne 0x11cd3e7b */
  if (!C.zf) goto L_11cd3e7b;
  /* 11cd3e31 mov ecx, dword ptr [0x11d00de4] */
  ECX = (r32((uint32_t)(0x11d00de4)));
  /* 11cd3e37 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3e3a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd3e3d push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3e3e mov edx, dword ptr [0x11d00e04] */
  EDX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd3e44 push edx */
  push32((uint32_t)(EDX));
  /* 11cd3e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3e47 mov eax, dword ptr [0x11d00e08] */
  EAX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd3e4c push eax */
  push32((uint32_t)(EAX));
  /* 11cd3e4d call dword ptr [0x11d01378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01378))), 0x11cd3e53u);
  /* 11cd3e53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd3e56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3e5a jne 0x11cd3e63 */
  if (!C.zf) goto L_11cd3e63;
  /* 11cd3e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3e5e jmp 0x11cd3f2b */
  goto L_11cd3f2b;
L_11cd3e63:;
  /* 11cd3e63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3e66 mov dword ptr [0x11d00e04], ecx */
  w32((uint32_t)(0x11d00e04), (ECX));
  /* 11cd3e6c mov edx, dword ptr [0x11d00de4] */
  EDX = (r32((uint32_t)(0x11d00de4)));
  /* 11cd3e72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3e75 mov dword ptr [0x11d00de4], edx */
  w32((uint32_t)(0x11d00de4), (EDX));
L_11cd3e7b:;
  /* 11cd3e7b mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd3e80 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd3e83 mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd3e89 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3e8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd3e8e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11cd3e93 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cd3e95 mov edx, dword ptr [0x11d00e08] */
  EDX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd3e9b push edx */
  push32((uint32_t)(EDX));
  /* 11cd3e9c call dword ptr [0x11d01370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01370))), 0x11cd3ea2u);
  /* 11cd3ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3ea5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11cd3ea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3eab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3eaf jne 0x11cd3eb5 */
  if (!C.zf) goto L_11cd3eb5;
  /* 11cd3eb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3eb3 jmp 0x11cd3f2b */
  goto L_11cd3f2b;
L_11cd3eb5:;
  /* 11cd3eb5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd3eb7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11cd3ebc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11cd3ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3ec3 call dword ptr [0x11d01368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01368))), 0x11cd3ec9u);
  /* 11cd3ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3ecc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11cd3ecf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3ed2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3ed6 jne 0x11cd3ef2 */
  if (!C.zf) goto L_11cd3ef2;
  /* 11cd3ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3edb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd3ede push ecx */
  push32((uint32_t)(ECX));
  /* 11cd3edf push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd3ee1 mov edx, dword ptr [0x11d00e08] */
  EDX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd3ee7 push edx */
  push32((uint32_t)(EDX));
  /* 11cd3ee8 call dword ptr [0x11d0137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0137c))), 0x11cd3eeeu);
  /* 11cd3eee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3ef0 jmp 0x11cd3f2b */
  goto L_11cd3f2b;
L_11cd3ef2:;
  /* 11cd3ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3ef5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd3efb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3efe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cd3f05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3f08 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11cd3f0f mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd3f14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3f17 mov dword ptr [0x11d00e00], eax */
  w32((uint32_t)(0x11d00e00), (EAX));
  /* 11cd3f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3f1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cd3f22 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11cd3f28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cd3f2b:;
  /* 11cd3f2b mov esp, ebp */
  ESP = (EBP);
  /* 11cd3f2d pop ebp */
  EBP = (pop32());
  /* 11cd3f2e ret  */
  ESPCHK(0x11cd3e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f30 @ 0x11cd3f30 (494 bytes, 149 insns) */
void f_11cd3f30(void) {
  FTRACE(0x11cd3f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd3f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd3f31 mov ebp, esp */
  EBP = (ESP);
  /* 11cd3f33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd3f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3f39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd3f3c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11cd3f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3f42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd3f45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd3f48 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11cd3f4f:;
  /* 11cd3f4f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3f53 jl 0x11cd3f68 */
  if ((C.sf!=C.of)) goto L_11cd3f68;
  /* 11cd3f55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd3f58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd3f5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd3f5d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3f60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3f63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11cd3f66 jmp 0x11cd3f4f */
  goto L_11cd3f4f;
L_11cd3f68:;
  /* 11cd3f68 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3f6b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd3f71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd3f74 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11cd3f7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11cd3f7e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11cd3f85 jmp 0x11cd3f90 */
  goto L_11cd3f90;
L_11cd3f87:;
  /* 11cd3f87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3f8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3f8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11cd3f90:;
  /* 11cd3f90 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd3f94 jge 0x11cd3fb6 */
  if ((C.sf==C.of)) goto L_11cd3fb6;
  /* 11cd3f96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd3f99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd3f9c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11cd3f9f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd3fa2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3fa5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3fa8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cd3fab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3fae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd3fb1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cd3fb4 jmp 0x11cd3f87 */
  goto L_11cd3f87;
L_11cd3fb6:;
  /* 11cd3fb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd3fb9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11cd3fbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd3fbf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd3fc2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3fc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd3fc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd3fc9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cd3fce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cd3fd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11cd3fd7 call dword ptr [0x11d01368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01368))), 0x11cd3fddu);
  /* 11cd3fdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd3fdf jne 0x11cd3fe9 */
  if (!C.zf) goto L_11cd3fe9;
  /* 11cd3fe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd3fe4 jmp 0x11cd411a */
  goto L_11cd411a;
L_11cd3fe9:;
  /* 11cd3fe9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3fec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd3ff1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cd3ff4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd3ff7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd3ffa jmp 0x11cd4008 */
  goto L_11cd4008;
L_11cd3ffc:;
  /* 11cd3ffc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd3fff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4005 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd4008:;
  /* 11cd4008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd400b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd400e ja 0x11cd406d */
  if ((!C.cf&&!C.zf)) goto L_11cd406d;
  /* 11cd4010 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4013 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11cd401a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd401d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11cd4027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd402a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd402d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd4030 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4033 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11cd4039 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd403c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4042 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4045 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd4048 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd404b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4051 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4054 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd4057 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd405a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd405f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11cd4062 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd4065 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11cd406b jmp 0x11cd3ffc */
  goto L_11cd3ffc;
L_11cd406d:;
  /* 11cd406d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd4070 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4076 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cd4079 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd407c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd407f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4082 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11cd4085 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4088 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd408b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd408e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4091 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4094 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cd4097 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd409a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd409d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd40a0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11cd40a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd40a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd40a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd40ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd40af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd40b2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cd40b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd40b8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd40bb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11cd40c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd40c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd40c9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11cd40d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd40d7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11cd40db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd40de mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11cd40e1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd40e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd40e7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11cd40ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd40ec jne 0x11cd40fd */
  if (!C.zf) goto L_11cd40fd;
  /* 11cd40ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd40f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd40f4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd40f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd40fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd40fd:;
  /* 11cd40fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4102 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd4105 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4107 not edx */
  EDX = (~(EDX));
  /* 11cd4109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd410c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd410f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4114 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd4117 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11cd411a:;
  /* 11cd411a mov esp, ebp */
  ESP = (EBP);
  /* 11cd411c pop ebp */
  EBP = (pop32());
  /* 11cd411d ret  */
  ESPCHK(0x11cd3f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014120 @ 0x11cd4120 (1515 bytes, 489 insns) */
void f_11cd4120(void) {
  FTRACE(0x11cd4120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4120 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4121 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4123 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4126 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd4129 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd412c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11cd412e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11cd4131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4134 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cd4137 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11cd413a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd413d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd4140 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4143 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd4146 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd4149 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11cd414c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd414f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4152 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd4158 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd415b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11cd4162 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd4165 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd4168 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd416b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd416e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4171 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd4173 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4176 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11cd4179 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd417c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd417f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11cd4182 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd4185 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd4187 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd418a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd418d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4190 jle 0x11cd4446 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4446;
  /* 11cd4196 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4199 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd419c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd419e jne 0x11cd41ab */
  if (!C.zf) goto L_11cd41ab;
  /* 11cd41a0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd41a3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd41a6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd41a9 jle 0x11cd41b2 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd41b2;
L_11cd41ab:;
  /* 11cd41ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd41ad jmp 0x11cd4707 */
  goto L_11cd4707;
L_11cd41b2:;
  /* 11cd41b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd41b5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cd41b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd41bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd41be cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd41c2 jbe 0x11cd41cb */
  if ((C.cf||C.zf)) goto L_11cd41cb;
  /* 11cd41c4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11cd41cb:;
  /* 11cd41cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd41ce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd41d1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd41d4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd41d7 jne 0x11cd42ad */
  if (!C.zf) goto L_11cd42ad;
  /* 11cd41dd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd41e1 jae 0x11cd4242 */
  if (!C.cf) goto L_11cd4242;
  /* 11cd41e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd41e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd41eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd41ed not edx */
  EDX = (~(EDX));
  /* 11cd41ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd41f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd41f5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11cd41f9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd41fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd41fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4201 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11cd4205 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4208 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd420b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd420e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd4211 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4214 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4217 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11cd421a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd421d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4220 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd4224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd4226 jne 0x11cd4240 */
  if (!C.zf) goto L_11cd4240;
  /* 11cd4228 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd422d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4230 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4232 not edx */
  EDX = (~(EDX));
  /* 11cd4234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4237 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd4239 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd423b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd423e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd4240:;
  /* 11cd4240 jmp 0x11cd42ad */
  goto L_11cd42ad;
L_11cd4242:;
  /* 11cd4242 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4245 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4248 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd424d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd424f not eax */
  EAX = (~(EAX));
  /* 11cd4251 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4254 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4257 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11cd425e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4260 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4263 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4266 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11cd426d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4270 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4273 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11cd4276 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd4279 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd427c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd427f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11cd4282 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4285 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4288 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd428c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd428e jne 0x11cd42ad */
  if (!C.zf) goto L_11cd42ad;
  /* 11cd4290 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4293 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4296 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd429b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd429d not eax */
  EAX = (~(EAX));
  /* 11cd429f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd42a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd42a5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd42a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd42aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd42ad:;
  /* 11cd42ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd42b0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd42b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd42b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd42b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd42bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd42bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd42c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd42c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd42c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd42cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd42ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd42d1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd42d4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd42d7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd42db jle 0x11cd4427 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4427;
  /* 11cd42e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd42e4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd42e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11cd42ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd42ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cd42f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd42f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11cd42f6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd42fa jbe 0x11cd4303 */
  if ((C.cf||C.zf)) goto L_11cd4303;
  /* 11cd42fc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11cd4303:;
  /* 11cd4303 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4306 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd4309 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11cd430c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cd430f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd4312 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4315 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd4318 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11cd431b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd431e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4321 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11cd4324 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4327 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd432a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11cd432d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd4330 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd4333 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd4336 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd4339 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd433c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd433f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd4342 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4345 jne 0x11cd4413 */
  if (!C.zf) goto L_11cd4413;
  /* 11cd434b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd434f jae 0x11cd43ac */
  if (!C.cf) goto L_11cd43ac;
  /* 11cd4351 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4354 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4357 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd435b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd435e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4361 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd4364 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd4367 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd436a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd436d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11cd4370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd4372 jne 0x11cd438a */
  if (!C.zf) goto L_11cd438a;
  /* 11cd4374 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4379 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd437c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd437e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4381 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd4383 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4388 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd438a:;
  /* 11cd438a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd438f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4392 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd4394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4397 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd439a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11cd439e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd43a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd43a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd43a6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11cd43aa jmp 0x11cd4413 */
  goto L_11cd4413;
L_11cd43ac:;
  /* 11cd43ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd43af add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd43b2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd43b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd43b9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd43bc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd43bf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd43c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd43c5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd43c8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11cd43cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd43cd jne 0x11cd43ea */
  if (!C.zf) goto L_11cd43ea;
  /* 11cd43cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd43d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd43d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd43da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd43dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd43df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd43e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd43e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd43e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11cd43ea:;
  /* 11cd43ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd43ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd43f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd43f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd43f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd43fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd43fd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11cd4404 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4406 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4409 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd440c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11cd4413:;
  /* 11cd4413 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd4416 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4419 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cd441b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd441e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4421 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4424 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11cd4427:;
  /* 11cd4427 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd442a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd442d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4430 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11cd4432 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd4435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4438 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd443b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd443e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11cd4441 jmp 0x11cd4702 */
  goto L_11cd4702;
L_11cd4446:;
  /* 11cd4446 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd4449 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd444c jge 0x11cd4702 */
  if ((C.sf==C.of)) goto L_11cd4702;
  /* 11cd4452 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd4455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4458 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd445b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11cd445d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cd4460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4463 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4466 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4469 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11cd446c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd446f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4472 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11cd4475 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd4478 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd447b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd447e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd4481 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cd4484 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4487 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cd448a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd448e jbe 0x11cd4497 */
  if ((C.cf||C.zf)) goto L_11cd4497;
  /* 11cd4490 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11cd4497:;
  /* 11cd4497 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd449a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd449d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd449f jne 0x11cd45e0 */
  if (!C.zf) goto L_11cd45e0;
  /* 11cd44a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd44a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11cd44ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd44ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cd44b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd44b5 jbe 0x11cd44be */
  if ((C.cf||C.zf)) goto L_11cd44be;
  /* 11cd44b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11cd44be:;
  /* 11cd44be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd44c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd44c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd44c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd44ca jne 0x11cd45a0 */
  if (!C.zf) goto L_11cd45a0;
  /* 11cd44d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd44d4 jae 0x11cd4535 */
  if (!C.cf) goto L_11cd4535;
  /* 11cd44d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd44db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd44de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd44e0 not edx */
  EDX = (~(EDX));
  /* 11cd44e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd44e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd44e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11cd44ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd44ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd44f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd44f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11cd44f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd44fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd44fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11cd4501 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd4504 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4507 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd450a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11cd450d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4510 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4513 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd4517 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd4519 jne 0x11cd4533 */
  if (!C.zf) goto L_11cd4533;
  /* 11cd451b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4520 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4523 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4525 not edx */
  EDX = (~(EDX));
  /* 11cd4527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd452a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd452c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd452e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4531 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11cd4533:;
  /* 11cd4533 jmp 0x11cd45a0 */
  goto L_11cd45a0;
L_11cd4535:;
  /* 11cd4535 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4538 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd453b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd4540 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd4542 not eax */
  EAX = (~(EAX));
  /* 11cd4544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4547 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd454a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11cd4551 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4556 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4559 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11cd4560 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4563 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4566 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11cd4569 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd456c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd456f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4572 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11cd4575 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4578 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd457b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11cd457f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd4581 jne 0x11cd45a0 */
  if (!C.zf) goto L_11cd45a0;
  /* 11cd4583 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cd4586 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4589 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd458e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd4590 not eax */
  EAX = (~(EAX));
  /* 11cd4592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4595 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd4598 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd459a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd459d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd45a0:;
  /* 11cd45a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd45a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd45a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd45a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd45ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd45af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd45b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd45b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cd45b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd45bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11cd45be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd45c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd45c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cd45c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd45ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11cd45cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd45d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11cd45d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd45d7 jbe 0x11cd45e0 */
  if ((C.cf||C.zf)) goto L_11cd45e0;
  /* 11cd45d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11cd45e0:;
  /* 11cd45e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd45e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd45e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11cd45e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cd45ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd45ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd45f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd45f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cd45f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd45fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd45fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11cd4601 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4604 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4607 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cd460a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd460d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd4610 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4613 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11cd4616 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4619 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd461c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd461f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4622 jne 0x11cd46ee */
  if (!C.zf) goto L_11cd46ee;
  /* 11cd4628 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd462c jae 0x11cd4688 */
  if (!C.cf) goto L_11cd4688;
  /* 11cd462e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4631 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4634 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd4638 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd463b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd463e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11cd4641 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd4643 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4646 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4649 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11cd464c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd464e jne 0x11cd4666 */
  if (!C.zf) goto L_11cd4666;
  /* 11cd4650 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd4655 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd4658 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd465a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd465d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd465f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd4661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4664 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11cd4666:;
  /* 11cd4666 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd466b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd466e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4673 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4676 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11cd467a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd467c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd467f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4682 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11cd4686 jmp 0x11cd46ee */
  goto L_11cd46ee;
L_11cd4688:;
  /* 11cd4688 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd468b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd468e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11cd4692 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd4695 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4698 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11cd469b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11cd469d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd46a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd46a3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11cd46a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd46a8 jne 0x11cd46c5 */
  if (!C.zf) goto L_11cd46c5;
  /* 11cd46aa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd46ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd46b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11cd46b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11cd46b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd46ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd46bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd46bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd46c2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11cd46c5:;
  /* 11cd46c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd46c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd46cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd46d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd46d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd46d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd46d8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11cd46df or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd46e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd46e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11cd46e7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11cd46ee:;
  /* 11cd46ee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd46f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd46f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd46f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd46f9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd46fc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd46ff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11cd4702:;
  /* 11cd4702 mov eax, 1 */
  EAX = (0x1u);
L_11cd4707:;
  /* 11cd4707 mov esp, ebp */
  ESP = (EBP);
  /* 11cd4709 pop ebp */
  EBP = (pop32());
  /* 11cd470a ret  */
  ESPCHK(0x11cd4120u, _esp0);
  ESP += 4; return;
}

/* FUN_10014710 @ 0x11cd4710 (304 bytes, 79 insns) */
void f_11cd4710(void) {
  FTRACE(0x11cd4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4710 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4711 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4713 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4714 cmp dword ptr [0x11d00dfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00dfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd471b je 0x11cd483c */
  if (C.zf) goto L_11cd483c;
  /* 11cd4721 mov eax, dword ptr [0x11d00df4] */
  EAX = (r32((uint32_t)(0x11d00df4)));
  /* 11cd4726 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11cd4729 mov ecx, dword ptr [0x11d00dfc] */
  ECX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd472f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd4732 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4734 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd4737 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11cd473c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cd4741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4744 push eax */
  push32((uint32_t)(EAX));
  /* 11cd4745 call dword ptr [0x11d01384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01384))), 0x11cd474bu);
  /* 11cd474b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4750 mov ecx, dword ptr [0x11d00df4] */
  ECX = (r32((uint32_t)(0x11d00df4)));
  /* 11cd4756 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4758 mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd475d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cd4760 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4762 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd4768 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd476b mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd4770 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd4773 mov edx, dword ptr [0x11d00df4] */
  EDX = (r32((uint32_t)(0x11d00df4)));
  /* 11cd4779 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11cd4784 mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd4789 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd478c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11cd478f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11cd4792 mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd4797 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd479a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11cd479d mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd47a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cd47a6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11cd47aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd47ac jne 0x11cd47c2 */
  if (!C.zf) goto L_11cd47c2;
  /* 11cd47ae mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd47b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cd47b7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11cd47b9 mov ecx, dword ptr [0x11d00dfc] */
  ECX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd47bf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11cd47c2:;
  /* 11cd47c2 mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd47c8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd47cc jne 0x11cd4832 */
  if (!C.zf) goto L_11cd4832;
  /* 11cd47ce cmp dword ptr [0x11d00e00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d00e00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd47d5 jle 0x11cd4832 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4832;
  /* 11cd47d7 mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd47dc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cd47df push ecx */
  push32((uint32_t)(ECX));
  /* 11cd47e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd47e2 mov edx, dword ptr [0x11d00e08] */
  EDX = (r32((uint32_t)(0x11d00e08)));
  /* 11cd47e8 push edx */
  push32((uint32_t)(EDX));
  /* 11cd47e9 call dword ptr [0x11d0137c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0137c))), 0x11cd47efu);
  /* 11cd47ef mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd47f4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd47f7 mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd47fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd47ff mov edx, dword ptr [0x11d00dfc] */
  EDX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd4805 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4808 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd480a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd480b mov eax, dword ptr [0x11d00dfc] */
  EAX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd4810 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4813 push eax */
  push32((uint32_t)(EAX));
  /* 11cd4814 mov ecx, dword ptr [0x11d00dfc] */
  ECX = (r32((uint32_t)(0x11d00dfc)));
  /* 11cd481a push ecx */
  push32((uint32_t)(ECX));
  /* 11cd481b call 0x11cd2960 */
  push32(0x11cd4820u); f_11cd2960();
  /* 11cd4820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4823 mov edx, dword ptr [0x11d00e00] */
  EDX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd4829 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd482c mov dword ptr [0x11d00e00], edx */
  w32((uint32_t)(0x11d00e00), (EDX));
L_11cd4832:;
  /* 11cd4832 mov dword ptr [0x11d00dfc], 0 */
  w32((uint32_t)(0x11d00dfc), (0x0u));
L_11cd483c:;
  /* 11cd483c mov esp, ebp */
  ESP = (EBP);
  /* 11cd483e pop ebp */
  EBP = (pop32());
  /* 11cd483f ret  */
  ESPCHK(0x11cd4710u, _esp0);
  ESP += 4; return;
}

/* FUN_10014840 @ 0x11cd4840 (1565 bytes, 343 insns) */
void f_11cd4840(void) {
  FTRACE(0x11cd4840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4840 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4841 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4843 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4849 mov eax, dword ptr [0x11d00e00] */
  EAX = (r32((uint32_t)(0x11d00e00)));
  /* 11cd484e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd4851 push eax */
  push32((uint32_t)(EAX));
  /* 11cd4852 mov ecx, dword ptr [0x11d00e04] */
  ECX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd4858 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4859 call dword ptr [0x11d013f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f0))), 0x11cd485fu);
  /* 11cd485f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd4861 je 0x11cd486b */
  if (C.zf) goto L_11cd486b;
  /* 11cd4863 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4866 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd486b:;
  /* 11cd486b mov edx, dword ptr [0x11d00e04] */
  EDX = (r32((uint32_t)(0x11d00e04)));
  /* 11cd4871 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11cd4877 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11cd4881 jmp 0x11cd4892 */
  goto L_11cd4892;
L_11cd4883:;
  /* 11cd4883 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11cd4889 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd488c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11cd4892:;
  /* 11cd4892 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11cd4898 cmp ecx, dword ptr [0x11d00e00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d00e00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd489e jge 0x11cd4e57 */
  if ((C.sf==C.of)) goto L_11cd4e57;
  /* 11cd48a4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11cd48aa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cd48ad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11cd48b3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11cd48b8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11cd48be push ecx */
  push32((uint32_t)(ECX));
  /* 11cd48bf call dword ptr [0x11d013f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f0))), 0x11cd48c5u);
  /* 11cd48c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd48c7 je 0x11cd48d3 */
  if (C.zf) goto L_11cd48d3;
  /* 11cd48c9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11cd48ce jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd48d3:;
  /* 11cd48d3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11cd48d9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cd48dc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11cd48e2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11cd48e8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd48ee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11cd48f1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11cd48f7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd48fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd48fd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11cd4907 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11cd4911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd4918 jmp 0x11cd4923 */
  goto L_11cd4923;
L_11cd491a:;
  /* 11cd491a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd491d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4920 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11cd4923:;
  /* 11cd4923 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4927 jge 0x11cd4e1b */
  if ((C.sf==C.of)) goto L_11cd4e1b;
  /* 11cd492d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11cd4937 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11cd4941 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11cd494b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11cd4955 jmp 0x11cd4966 */
  goto L_11cd4966;
L_11cd4957:;
  /* 11cd4957 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11cd495d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4960 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11cd4966:;
  /* 11cd4966 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd496d jge 0x11cd4982 */
  if ((C.sf==C.of)) goto L_11cd4982;
  /* 11cd496f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11cd4975 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11cd4980 jmp 0x11cd4957 */
  goto L_11cd4957;
L_11cd4982:;
  /* 11cd4982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4986 jl 0x11cd4dbd */
  if ((C.sf!=C.of)) goto L_11cd4dbd;
  /* 11cd498c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11cd4991 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11cd4997 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4998 call dword ptr [0x11d013f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f0))), 0x11cd499eu);
  /* 11cd499e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd49a0 je 0x11cd49ac */
  if (C.zf) goto L_11cd49ac;
  /* 11cd49a2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11cd49a7 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd49ac:;
  /* 11cd49ac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11cd49b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cd49b5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11cd49bf jmp 0x11cd49d0 */
  goto L_11cd49d0;
L_11cd49c1:;
  /* 11cd49c1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11cd49c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd49ca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11cd49d0:;
  /* 11cd49d0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd49d7 jge 0x11cd4b54 */
  if ((C.sf==C.of)) goto L_11cd4b54;
  /* 11cd49dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd49e0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd49e3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11cd49e9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd49ef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd49f5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11cd49fb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4a01 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4a05 jne 0x11cd4a12 */
  if (!C.zf) goto L_11cd4a12;
  /* 11cd4a07 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11cd4a0d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4a10 je 0x11cd4a1c */
  if (C.zf) goto L_11cd4a1c;
L_11cd4a12:;
  /* 11cd4a12 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11cd4a17 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4a1c:;
  /* 11cd4a1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4a22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd4a24 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11cd4a2a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11cd4a30 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11cd4a36 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11cd4a3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd4a3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11cd4a41 je 0x11cd4a79 */
  if (C.zf) goto L_11cd4a79;
  /* 11cd4a43 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11cd4a49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4a4c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11cd4a52 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4a5c jle 0x11cd4a68 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4a68;
  /* 11cd4a5e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11cd4a63 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4a68:;
  /* 11cd4a68 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11cd4a6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4a71 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11cd4a77 jmp 0x11cd4abb */
  goto L_11cd4abb;
L_11cd4a79:;
  /* 11cd4a79 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11cd4a7f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cd4a82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4a85 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11cd4a8b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4a92 jle 0x11cd4a9e */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4a9e;
  /* 11cd4a94 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11cd4a9e:;
  /* 11cd4a9e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11cd4aa4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11cd4aab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4aae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11cd4ab4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11cd4abb:;
  /* 11cd4abb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4ac2 jl 0x11cd4add */
  if ((C.sf!=C.of)) goto L_11cd4add;
  /* 11cd4ac4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11cd4aca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd4acf jne 0x11cd4add */
  if (!C.zf) goto L_11cd4add;
  /* 11cd4ad1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4adb jle 0x11cd4ae7 */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4ae7;
L_11cd4add:;
  /* 11cd4add mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11cd4ae2 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4ae7:;
  /* 11cd4ae7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4aed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4af3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11cd4af6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4afc je 0x11cd4b08 */
  if (C.zf) goto L_11cd4b08;
  /* 11cd4afe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11cd4b03 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4b08:;
  /* 11cd4b08 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4b0e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4b14 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11cd4b1a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4b20 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4b26 jb 0x11cd4a1c */
  if (C.cf) goto L_11cd4a1c;
  /* 11cd4b2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4b32 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4b38 je 0x11cd4b44 */
  if (C.zf) goto L_11cd4b44;
  /* 11cd4b3a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11cd4b3f jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4b44:;
  /* 11cd4b44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd4b47 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4b4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd4b4f jmp 0x11cd49c1 */
  goto L_11cd49c1;
L_11cd4b54:;
  /* 11cd4b54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4b57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd4b59 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4b5f je 0x11cd4b6b */
  if (C.zf) goto L_11cd4b6b;
  /* 11cd4b61 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11cd4b66 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4b6b:;
  /* 11cd4b6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4b6e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11cd4b74 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11cd4b7b jmp 0x11cd4b86 */
  goto L_11cd4b86;
L_11cd4b7d:;
  /* 11cd4b7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4b80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4b83 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11cd4b86:;
  /* 11cd4b86 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4b8a jge 0x11cd4dbd */
  if ((C.sf==C.of)) goto L_11cd4dbd;
  /* 11cd4b90 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11cd4b9a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11cd4ba0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11cd4ba6:;
  /* 11cd4ba6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4bac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd4baf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11cd4bb5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11cd4bbb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4bc1 je 0x11cd4cea */
  if (C.zf) goto L_11cd4cea;
  /* 11cd4bc7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4bca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11cd4bd0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4bd7 je 0x11cd4cea */
  if (C.zf) goto L_11cd4cea;
  /* 11cd4bdd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11cd4be3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4be9 jb 0x11cd4bfe */
  if (C.cf) goto L_11cd4bfe;
  /* 11cd4beb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11cd4bf1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4bf6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4bfc jb 0x11cd4c08 */
  if (C.cf) goto L_11cd4c08;
L_11cd4bfe:;
  /* 11cd4bfe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11cd4c03 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4c08:;
  /* 11cd4c08 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11cd4c0e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4c14 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11cd4c1a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11cd4c20 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4c23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd4c26 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4c29 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4c2e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11cd4c34:;
  /* 11cd4c34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4c37 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4c3d je 0x11cd4c5e */
  if (C.zf) goto L_11cd4c5e;
  /* 11cd4c3f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4c42 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4c48 jne 0x11cd4c4c */
  if (!C.zf) goto L_11cd4c4c;
  /* 11cd4c4a jmp 0x11cd4c5e */
  goto L_11cd4c5e;
L_11cd4c4c:;
  /* 11cd4c4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4c4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd4c51 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd4c54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4c57 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4c59 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd4c5c jmp 0x11cd4c34 */
  goto L_11cd4c34;
L_11cd4c5e:;
  /* 11cd4c5e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd4c61 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4c67 jne 0x11cd4c73 */
  if (!C.zf) goto L_11cd4c73;
  /* 11cd4c69 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11cd4c6e jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4c73:;
  /* 11cd4c73 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11cd4c79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd4c7b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11cd4c7e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4c81 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11cd4c87 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4c8e jle 0x11cd4c9a */
  if ((C.zf||C.sf!=C.of)) goto L_11cd4c9a;
  /* 11cd4c90 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11cd4c9a:;
  /* 11cd4c9a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11cd4ca0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4ca3 je 0x11cd4caf */
  if (C.zf) goto L_11cd4caf;
  /* 11cd4ca5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11cd4caa jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4caf:;
  /* 11cd4caf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11cd4cb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cd4cb8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4cbe je 0x11cd4cca */
  if (C.zf) goto L_11cd4cca;
  /* 11cd4cc0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11cd4cc5 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4cca:;
  /* 11cd4cca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11cd4cd0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11cd4cd6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11cd4cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4cdf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11cd4ce5 jmp 0x11cd4ba6 */
  goto L_11cd4ba6;
L_11cd4cea:;
  /* 11cd4cea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4cf1 je 0x11cd4d61 */
  if (C.zf) goto L_11cd4d61;
  /* 11cd4cf3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4cf7 jge 0x11cd4d2b */
  if ((C.sf==C.of)) goto L_11cd4d2b;
  /* 11cd4cf9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4cfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4d01 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4d03 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11cd4d09 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4d0b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11cd4d11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4d16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4d19 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4d1b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11cd4d21 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4d23 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11cd4d29 jmp 0x11cd4d61 */
  goto L_11cd4d61;
L_11cd4d2b:;
  /* 11cd4d2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4d2e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4d31 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4d36 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4d38 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11cd4d3e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4d40 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11cd4d46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4d49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4d4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11cd4d51 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11cd4d53 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11cd4d59 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4d5b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11cd4d61:;
  /* 11cd4d61 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11cd4d67 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11cd4d6a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4d70 jne 0x11cd4d84 */
  if (!C.zf) goto L_11cd4d84;
  /* 11cd4d72 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd4d75 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11cd4d7b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4d82 je 0x11cd4d8e */
  if (C.zf) goto L_11cd4d8e;
L_11cd4d84:;
  /* 11cd4d84 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11cd4d89 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4d8e:;
  /* 11cd4d8e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11cd4d94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd4d97 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4d9d je 0x11cd4da9 */
  if (C.zf) goto L_11cd4da9;
  /* 11cd4d9f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11cd4da4 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4da9:;
  /* 11cd4da9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11cd4daf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4db2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11cd4db8 jmp 0x11cd4b7d */
  goto L_11cd4b7d;
L_11cd4dbd:;
  /* 11cd4dbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd4dc0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11cd4dc6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11cd4dcc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4dd0 jne 0x11cd4dea */
  if (!C.zf) goto L_11cd4dea;
  /* 11cd4dd2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd4dd5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11cd4ddb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11cd4de1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4de8 je 0x11cd4df1 */
  if (C.zf) goto L_11cd4df1;
L_11cd4dea:;
  /* 11cd4dea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11cd4def jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4df1:;
  /* 11cd4df1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11cd4df7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4dfd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11cd4e03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd4e06 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4e0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cd4e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4e11 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd4e13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd4e16 jmp 0x11cd491a */
  goto L_11cd491a;
L_11cd4e1b:;
  /* 11cd4e1b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11cd4e21 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11cd4e27 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4e29 jne 0x11cd4e3c */
  if (!C.zf) goto L_11cd4e3c;
  /* 11cd4e2b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11cd4e31 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11cd4e37 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4e3a je 0x11cd4e43 */
  if (C.zf) goto L_11cd4e43;
L_11cd4e3c:;
  /* 11cd4e3c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11cd4e41 jmp 0x11cd4e59 */
  goto L_11cd4e59;
L_11cd4e43:;
  /* 11cd4e43 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11cd4e49 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4e4c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11cd4e52 jmp 0x11cd4883 */
  goto L_11cd4883;
L_11cd4e57:;
  /* 11cd4e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd4e59:;
  /* 11cd4e59 mov esp, ebp */
  ESP = (EBP);
  /* 11cd4e5b pop ebp */
  EBP = (pop32());
  /* 11cd4e5c ret  */
  ESPCHK(0x11cd4840u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e60 @ 0x11cd4e60 (91 bytes, 30 insns) */
void f_11cd4e60(void) {
  FTRACE(0x11cd4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4e61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4e66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cd4e68 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4e6e jne 0x11cd4e8e */
  if (!C.zf) goto L_11cd4e8e;
  /* 11cd4e70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4e73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd4e75 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4e79 jne 0x11cd4e8e */
  if (!C.zf) goto L_11cd4e8e;
  /* 11cd4e7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4e7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd4e80 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4e87 jne 0x11cd4e8e */
  if (!C.zf) goto L_11cd4e8e;
  /* 11cd4e89 call 0x11cce390 */
  push32(0x11cd4e8eu); f_11cce390();
L_11cd4e8e:;
  /* 11cd4e8e cmp dword ptr [0x11cff640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd4e95 je 0x11cd4eb5 */
  if (C.zf) goto L_11cd4eb5;
  /* 11cd4e97 mov eax, dword ptr [0x11cff640] */
  EAX = (r32((uint32_t)(0x11cff640)));
  /* 11cd4e9c push eax */
  push32((uint32_t)(EAX));
  /* 11cd4e9d call 0x11cd4f60 */
  push32(0x11cd4ea2u); f_11cd4f60();
  /* 11cd4ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd4ea7 je 0x11cd4eb5 */
  if (C.zf) goto L_11cd4eb5;
  /* 11cd4ea9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4eac push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4ead call dword ptr [0x11cff640] */
  call_ind((uint32_t)(r32((uint32_t)(0x11cff640))), 0x11cd4eb3u);
  /* 11cd4eb3 jmp 0x11cd4eb7 */
  goto L_11cd4eb7;
L_11cd4eb5:;
  /* 11cd4eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11cd4eb7:;
  /* 11cd4eb7 pop ebp */
  EBP = (pop32());
  /* 11cd4eb8 ret 4 */
  ESPCHK(0x11cd4e60u, _esp0);
  ESP += 8; return;
}

/* FUN_10014ec0 @ 0x11cd4ec0 (21 bytes, 7 insns) */
void f_11cd4ec0(void) {
  FTRACE(0x11cd4ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4ec3 push 0x11cd4e60 */
  push32((uint32_t)(0x11cd4e60u));
  /* 11cd4ec8 call dword ptr [0x11d01364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01364))), 0x11cd4eceu);
  /* 11cd4ece mov dword ptr [0x11cff640], eax */
  w32((uint32_t)(0x11cff640), (EAX));
  /* 11cd4ed3 pop ebp */
  EBP = (pop32());
  /* 11cd4ed4 ret  */
  ESPCHK(0x11cd4ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ee0 @ 0x11cd4ee0 (17 bytes, 7 insns) */
void f_11cd4ee0(void) {
  FTRACE(0x11cd4ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4ee3 mov eax, dword ptr [0x11cff640] */
  EAX = (r32((uint32_t)(0x11cff640)));
  /* 11cd4ee8 push eax */
  push32((uint32_t)(EAX));
  /* 11cd4ee9 call dword ptr [0x11d01364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01364))), 0x11cd4eefu);
  /* 11cd4eef pop ebp */
  EBP = (pop32());
  /* 11cd4ef0 ret  */
  ESPCHK(0x11cd4ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f00 @ 0x11cd4f00 (43 bytes, 16 insns) */
void f_11cd4f00(void) {
  FTRACE(0x11cd4f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4f01 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4f03 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4f04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd4f0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd4f0e push eax */
  push32((uint32_t)(EAX));
  /* 11cd4f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4f12 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4f13 call dword ptr [0x11d0140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0140c))), 0x11cd4f19u);
  /* 11cd4f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd4f1b je 0x11cd4f24 */
  if (C.zf) goto L_11cd4f24;
  /* 11cd4f1d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd4f24:;
  /* 11cd4f24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4f27 mov esp, ebp */
  ESP = (EBP);
  /* 11cd4f29 pop ebp */
  EBP = (pop32());
  /* 11cd4f2a ret  */
  ESPCHK(0x11cd4f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f30 @ 0x11cd4f30 (43 bytes, 16 insns) */
void f_11cd4f30(void) {
  FTRACE(0x11cd4f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4f31 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4f34 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd4f3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd4f3e push eax */
  push32((uint32_t)(EAX));
  /* 11cd4f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4f42 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4f43 call dword ptr [0x11d013f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f0))), 0x11cd4f49u);
  /* 11cd4f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd4f4b je 0x11cd4f54 */
  if (C.zf) goto L_11cd4f54;
  /* 11cd4f4d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd4f54:;
  /* 11cd4f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4f57 mov esp, ebp */
  ESP = (EBP);
  /* 11cd4f59 pop ebp */
  EBP = (pop32());
  /* 11cd4f5a ret  */
  ESPCHK(0x11cd4f30u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x11cd4f60 (39 bytes, 14 insns) */
void f_11cd4f60(void) {
  FTRACE(0x11cd4f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd4f61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd4f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd4f64 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd4f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd4f6e push eax */
  push32((uint32_t)(EAX));
  /* 11cd4f6f call dword ptr [0x11d0136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0136c))), 0x11cd4f75u);
  /* 11cd4f75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd4f77 je 0x11cd4f80 */
  if (C.zf) goto L_11cd4f80;
  /* 11cd4f79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd4f80:;
  /* 11cd4f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd4f83 mov esp, ebp */
  ESP = (EBP);
  /* 11cd4f85 pop ebp */
  EBP = (pop32());
  /* 11cd4f86 ret  */
  ESPCHK(0x11cd4f60u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11cd4f90 (129 bytes, 56 insns) */
void f_11cd4f90(void) {
  FTRACE(0x11cd4f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd4f90 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11cd4f94 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd4f98 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11cd4f9e jne 0x11cd4fdc */
  if (!C.zf) goto L_11cd4fdc;
L_11cd4fa0:;
  /* 11cd4fa0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd4fa2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd4fa4 jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd4fa6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cd4fa8 je 0x11cd4fd0 */
  if (C.zf) goto L_11cd4fd0;
  /* 11cd4faa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd4fad jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd4faf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11cd4fb1 je 0x11cd4fd0 */
  if (C.zf) goto L_11cd4fd0;
  /* 11cd4fb3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11cd4fb6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd4fb9 jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd4fbb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cd4fbd je 0x11cd4fd0 */
  if (C.zf) goto L_11cd4fd0;
  /* 11cd4fbf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd4fc2 jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd4fc4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4fc7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4fca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11cd4fcc jne 0x11cd4fa0 */
  if (!C.zf) goto L_11cd4fa0;
  /* 11cd4fce mov edi, edi */
  EDI = (EDI);
L_11cd4fd0:;
  /* 11cd4fd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd4fd2 ret  */
  ESPCHK(0x11cd4f90u, _esp0);
  ESP += 4; return;
  /* 11cd4fd3 nop  */
  /* nop */
L_11cd4fd4:;
  /* 11cd4fd4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd4fd6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11cd4fd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11cd4fd9 ret  */
  ESPCHK(0x11cd4f90u, _esp0);
  ESP += 4; return;
  /* 11cd4fda mov edi, edi */
  EDI = (EDI);
L_11cd4fdc:;
  /* 11cd4fdc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11cd4fe2 je 0x11cd4ff8 */
  if (C.zf) goto L_11cd4ff8;
  /* 11cd4fe4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cd4fe6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11cd4fe7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd4fe9 jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd4feb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11cd4fec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cd4fee je 0x11cd4fd0 */
  if (C.zf) goto L_11cd4fd0;
  /* 11cd4ff0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11cd4ff6 je 0x11cd4fa0 */
  if (C.zf) goto L_11cd4fa0;
L_11cd4ff8:;
  /* 11cd4ff8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cd4ffb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd4ffe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd5000 jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd5002 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11cd5004 je 0x11cd4fd0 */
  if (C.zf) goto L_11cd4fd0;
  /* 11cd5006 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cd5009 jne 0x11cd4fd4 */
  if (!C.zf) goto L_11cd4fd4;
  /* 11cd500b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11cd500d je 0x11cd4fd0 */
  if (C.zf) goto L_11cd4fd0;
  /* 11cd500f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5012 jmp 0x11cd4fa0 */
  goto L_11cd4fa0;
}

/* FUN_100150d9 @ 0x11cd50d9 (27 bytes, 11 insns) */
void f_11cd50d9(void) {
  FTRACE(0x11cd50d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd50d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd50da mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd50de mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11cd50e0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cd50e3 push eax */
  push32((uint32_t)(EAX));
  /* 11cd50e4 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cd50e7 push eax */
  push32((uint32_t)(EAX));
  /* 11cd50e8 call 0x11cc9a12 */
  push32(0x11cd50edu); f_11cc9a12();
  /* 11cd50ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd50f0 pop ebp */
  EBP = (pop32());
  /* 11cd50f1 ret 4 */
  ESPCHK(0x11cd50d9u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x11cd5100 (446 bytes, 130 insns) */
void f_11cd5100(void) {
  FTRACE(0x11cd5100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5100 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5101 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5103 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5106 call 0x11cce1c0 */
  push32(0x11cd510bu); f_11cce1c0();
  /* 11cd510b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd510e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5111 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11cd5114 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5115 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5118 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5119 call 0x11cd52c0 */
  push32(0x11cd511eu); f_11cd52c0();
  /* 11cd511e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5121 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cd5124 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5128 je 0x11cd5133 */
  if (C.zf) goto L_11cd5133;
  /* 11cd512a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd512d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5131 jne 0x11cd5142 */
  if (!C.zf) goto L_11cd5142;
L_11cd5133:;
  /* 11cd5133 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd5136 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5137 call dword ptr [0x11d0135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0135c))), 0x11cd513du);
  /* 11cd513d jmp 0x11cd52ba */
  goto L_11cd52ba;
L_11cd5142:;
  /* 11cd5142 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5145 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5149 jne 0x11cd515f */
  if (!C.zf) goto L_11cd515f;
  /* 11cd514b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd514e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11cd5155 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd515a jmp 0x11cd52ba */
  goto L_11cd52ba;
L_11cd515f:;
  /* 11cd515f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5162 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5166 jne 0x11cd5170 */
  if (!C.zf) goto L_11cd5170;
  /* 11cd5168 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd516b jmp 0x11cd52ba */
  goto L_11cd52ba;
L_11cd5170:;
  /* 11cd5170 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5173 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd5176 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd5179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd517c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11cd517f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cd5182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5185 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd5188 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11cd518b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd518e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5192 jne 0x11cd5297 */
  if (!C.zf) goto L_11cd5297;
  /* 11cd5198 mov eax, dword ptr [0x11cfd2d8] */
  EAX = (r32((uint32_t)(0x11cfd2d8)));
  /* 11cd519d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cd51a0 jmp 0x11cd51ab */
  goto L_11cd51ab;
L_11cd51a2:;
  /* 11cd51a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd51a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd51a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11cd51ab:;
  /* 11cd51ab mov edx, dword ptr [0x11cfd2d8] */
  EDX = (r32((uint32_t)(0x11cfd2d8)));
  /* 11cd51b1 add edx, dword ptr [0x11cfd2dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cfd2dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd51b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd51ba jge 0x11cd51d2 */
  if ((C.sf==C.of)) goto L_11cd51d2;
  /* 11cd51bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cd51bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd51c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd51c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11cd51c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11cd51d0 jmp 0x11cd51a2 */
  goto L_11cd51a2;
L_11cd51d2:;
  /* 11cd51d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd51d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11cd51d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cd51db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd51de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd51e4 jne 0x11cd51f5 */
  if (!C.zf) goto L_11cd51f5;
  /* 11cd51e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd51e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11cd51f0 jmp 0x11cd527d */
  goto L_11cd527d;
L_11cd51f5:;
  /* 11cd51f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd51f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd51fe jne 0x11cd520c */
  if (!C.zf) goto L_11cd520c;
  /* 11cd5200 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5203 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11cd520a jmp 0x11cd527d */
  goto L_11cd527d;
L_11cd520c:;
  /* 11cd520c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd520f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5215 jne 0x11cd5223 */
  if (!C.zf) goto L_11cd5223;
  /* 11cd5217 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd521a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11cd5221 jmp 0x11cd527d */
  goto L_11cd527d;
L_11cd5223:;
  /* 11cd5223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5226 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd522c jne 0x11cd523a */
  if (!C.zf) goto L_11cd523a;
  /* 11cd522e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5231 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11cd5238 jmp 0x11cd527d */
  goto L_11cd527d;
L_11cd523a:;
  /* 11cd523a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd523d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5243 jne 0x11cd5251 */
  if (!C.zf) goto L_11cd5251;
  /* 11cd5245 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5248 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11cd524f jmp 0x11cd527d */
  goto L_11cd527d;
L_11cd5251:;
  /* 11cd5251 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5254 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd525a jne 0x11cd5268 */
  if (!C.zf) goto L_11cd5268;
  /* 11cd525c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd525f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11cd5266 jmp 0x11cd527d */
  goto L_11cd527d;
L_11cd5268:;
  /* 11cd5268 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd526b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5271 jne 0x11cd527d */
  if (!C.zf) goto L_11cd527d;
  /* 11cd5273 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5276 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11cd527d:;
  /* 11cd527d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5280 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11cd5283 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5284 push 8 */
  push32((uint32_t)(0x8u));
  /* 11cd5286 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11cd5289u);
  /* 11cd5289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd528c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd528f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5292 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11cd5295 jmp 0x11cd52ae */
  goto L_11cd52ae;
L_11cd5297:;
  /* 11cd5297 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd529a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11cd52a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd52a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cd52a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd52a8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11cd52abu);
  /* 11cd52ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd52ae:;
  /* 11cd52ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd52b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cd52b4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11cd52b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cd52ba:;
  /* 11cd52ba mov esp, ebp */
  ESP = (EBP);
  /* 11cd52bc pop ebp */
  EBP = (pop32());
  /* 11cd52bd ret  */
  ESPCHK(0x11cd5100u, _esp0);
  ESP += 4; return;
}

/* FUN_100152c0 @ 0x11cd52c0 (89 bytes, 35 insns) */
void f_11cd52c0(void) {
  FTRACE(0x11cd52c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd52c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd52c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd52c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd52c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd52c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd52ca:;
  /* 11cd52ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd52cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cd52cf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd52d2 je 0x11cd52f2 */
  if (C.zf) goto L_11cd52f2;
  /* 11cd52d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd52d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd52da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd52dd mov ecx, dword ptr [0x11cfd2e4] */
  ECX = (r32((uint32_t)(0x11cfd2e4)));
  /* 11cd52e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd52e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd52e9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd52eb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd52ee jae 0x11cd52f2 */
  if (!C.cf) goto L_11cd52f2;
  /* 11cd52f0 jmp 0x11cd52ca */
  goto L_11cd52ca;
L_11cd52f2:;
  /* 11cd52f2 mov eax, dword ptr [0x11cfd2e4] */
  EAX = (r32((uint32_t)(0x11cfd2e4)));
  /* 11cd52f7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd52fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd52fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd52ff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5302 jae 0x11cd530e */
  if (!C.cf) goto L_11cd530e;
  /* 11cd5304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5307 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11cd5309 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd530c je 0x11cd5312 */
  if (C.zf) goto L_11cd5312;
L_11cd530e:;
  /* 11cd530e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5310 jmp 0x11cd5315 */
  goto L_11cd5315;
L_11cd5312:;
  /* 11cd5312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cd5315:;
  /* 11cd5315 mov esp, ebp */
  ESP = (EBP);
  /* 11cd5317 pop ebp */
  EBP = (pop32());
  /* 11cd5318 ret  */
  ESPCHK(0x11cd52c0u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x11cd5320 (30 bytes, 12 insns) */
void f_11cd5320(void) {
  FTRACE(0x11cd5320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5320 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5321 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5323 push 0xa */
  push32((uint32_t)(0xau));
  /* 11cd5325 call 0x11cd0580 */
  push32(0x11cd532au); f_11cd0580();
  /* 11cd532a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd532d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11cd532f call 0x11cd10f0 */
  push32(0x11cd5334u); f_11cd10f0();
  /* 11cd5334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5337 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cd5339 call 0x11cce530 */
  push32(0x11cd533eu); f_11cce530();
  /* 11cd533e pop ebp */
  EBP = (pop32());
  /* 11cd533f ret  */
  ESPCHK(0x11cd5320u, _esp0);
  ESP += 4; return;
}

/* FUN_10015340 @ 0x11cd5340 (130 bytes, 43 insns) */
void f_11cd5340(void) {
  FTRACE(0x11cd5340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5340 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5341 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5343 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5347 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd534d jae 0x11cd5371 */
  if (!C.cf) goto L_11cd5371;
  /* 11cd534f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5352 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd5355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5358 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd535b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd535e mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd5365 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cd536a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd536d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd536f jne 0x11cd538c */
  if (!C.zf) goto L_11cd538c;
L_11cd5371:;
  /* 11cd5371 call 0x11cd68e0 */
  push32(0x11cd5376u); f_11cd68e0();
  /* 11cd5376 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd537c call 0x11cd68f0 */
  push32(0x11cd5381u); f_11cd68f0();
  /* 11cd5381 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd5387 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd538a jmp 0x11cd53be */
  goto L_11cd53be;
L_11cd538c:;
  /* 11cd538c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd538f push edx */
  push32((uint32_t)(EDX));
  /* 11cd5390 call 0x11cd9e80 */
  push32(0x11cd5395u); f_11cd9e80();
  /* 11cd5395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5398 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd539b push eax */
  push32((uint32_t)(EAX));
  /* 11cd539c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd539f push ecx */
  push32((uint32_t)(ECX));
  /* 11cd53a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd53a3 push edx */
  push32((uint32_t)(EDX));
  /* 11cd53a4 call 0x11cd53d0 */
  push32(0x11cd53a9u); f_11cd53d0();
  /* 11cd53a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd53ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd53af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd53b2 push eax */
  push32((uint32_t)(EAX));
  /* 11cd53b3 call 0x11cd9f10 */
  push32(0x11cd53b8u); f_11cd9f10();
  /* 11cd53b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd53bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cd53be:;
  /* 11cd53be mov esp, ebp */
  ESP = (EBP);
  /* 11cd53c0 pop ebp */
  EBP = (pop32());
  /* 11cd53c1 ret  */
  ESPCHK(0x11cd5340u, _esp0);
  ESP += 4; return;
}

/* FUN_100153d0 @ 0x11cd53d0 (178 bytes, 56 insns) */
void f_11cd53d0(void) {
  FTRACE(0x11cd53d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd53d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd53d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd53d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd53d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd53d9 push eax */
  push32((uint32_t)(EAX));
  /* 11cd53da call 0x11cd9d00 */
  push32(0x11cd53dfu); f_11cd9d00();
  /* 11cd53df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd53e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd53e5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd53e9 jne 0x11cd53fe */
  if (!C.zf) goto L_11cd53fe;
  /* 11cd53eb call 0x11cd68e0 */
  push32(0x11cd53f0u); f_11cd68e0();
  /* 11cd53f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd53f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd53f9 jmp 0x11cd547e */
  goto L_11cd547e;
L_11cd53fe:;
  /* 11cd53fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd5401 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5402 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd5404 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd5407 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5408 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd540b push eax */
  push32((uint32_t)(EAX));
  /* 11cd540c call dword ptr [0x11d01358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01358))), 0x11cd5412u);
  /* 11cd5412 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd5415 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5419 jne 0x11cd5426 */
  if (!C.zf) goto L_11cd5426;
  /* 11cd541b call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cd5421u);
  /* 11cd5421 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd5424 jmp 0x11cd542d */
  goto L_11cd542d;
L_11cd5426:;
  /* 11cd5426 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd542d:;
  /* 11cd542d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5431 je 0x11cd5444 */
  if (C.zf) goto L_11cd5444;
  /* 11cd5433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5436 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5437 call 0x11cd6840 */
  push32(0x11cd543cu); f_11cd6840();
  /* 11cd543c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd543f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5442 jmp 0x11cd547e */
  goto L_11cd547e;
L_11cd5444:;
  /* 11cd5444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5447 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11cd544a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd544d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5450 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5453 mov ecx, dword ptr [edx*4 + 0x11d00e20] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11d00e20)));
  /* 11cd545a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11cd545e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11cd5461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5464 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd5467 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd546a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd546d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5470 mov eax, dword ptr [eax*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd5477 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11cd547b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11cd547e:;
  /* 11cd547e mov esp, ebp */
  ESP = (EBP);
  /* 11cd5480 pop ebp */
  EBP = (pop32());
  /* 11cd5481 ret  */
  ESPCHK(0x11cd53d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015490 @ 0x11cd5490 (130 bytes, 43 insns) */
void f_11cd5490(void) {
  FTRACE(0x11cd5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5490 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5491 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5493 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5497 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd549d jae 0x11cd54c1 */
  if (!C.cf) goto L_11cd54c1;
  /* 11cd549f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd54a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd54a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd54a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd54ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd54ae mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd54b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cd54ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd54bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd54bf jne 0x11cd54dc */
  if (!C.zf) goto L_11cd54dc;
L_11cd54c1:;
  /* 11cd54c1 call 0x11cd68e0 */
  push32(0x11cd54c6u); f_11cd68e0();
  /* 11cd54c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd54cc call 0x11cd68f0 */
  push32(0x11cd54d1u); f_11cd68f0();
  /* 11cd54d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd54d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd54da jmp 0x11cd550e */
  goto L_11cd550e;
L_11cd54dc:;
  /* 11cd54dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd54df push edx */
  push32((uint32_t)(EDX));
  /* 11cd54e0 call 0x11cd9e80 */
  push32(0x11cd54e5u); f_11cd9e80();
  /* 11cd54e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd54e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd54eb push eax */
  push32((uint32_t)(EAX));
  /* 11cd54ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd54ef push ecx */
  push32((uint32_t)(ECX));
  /* 11cd54f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd54f3 push edx */
  push32((uint32_t)(EDX));
  /* 11cd54f4 call 0x11cd5520 */
  push32(0x11cd54f9u); f_11cd5520();
  /* 11cd54f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd54fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd54ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5502 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5503 call 0x11cd9f10 */
  push32(0x11cd5508u); f_11cd9f10();
  /* 11cd5508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd550b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cd550e:;
  /* 11cd550e mov esp, ebp */
  ESP = (EBP);
  /* 11cd5510 pop ebp */
  EBP = (pop32());
  /* 11cd5511 ret  */
  ESPCHK(0x11cd5490u, _esp0);
  ESP += 4; return;
}

/* FUN_10015520 @ 0x11cd5520 (627 bytes, 182 insns) */
void f_11cd5520(void) {
  FTRACE(0x11cd5520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5520 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5521 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5523 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5529 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cd5530 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5533 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11cd5539 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd553d jne 0x11cd5546 */
  if (!C.zf) goto L_11cd5546;
  /* 11cd553f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5541 jmp 0x11cd578f */
  goto L_11cd578f;
L_11cd5546:;
  /* 11cd5546 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5549 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd554c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd554f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5552 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5555 mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd555c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cd5561 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5564 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd5566 je 0x11cd5578 */
  if (C.zf) goto L_11cd5578;
  /* 11cd5568 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd556a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd556c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd556f push edx */
  push32((uint32_t)(EDX));
  /* 11cd5570 call 0x11cd53d0 */
  push32(0x11cd5575u); f_11cd53d0();
  /* 11cd5575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd5578:;
  /* 11cd5578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd557b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd557e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5581 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5584 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5587 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd558e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11cd5593 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd559a je 0x11cd56ac */
  if (C.zf) goto L_11cd56ac;
  /* 11cd55a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd55a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cd55a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11cd55ad:;
  /* 11cd55ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd55b0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd55b3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd55b6 jae 0x11cd56aa */
  if (!C.cf) goto L_11cd56aa;
  /* 11cd55bc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11cd55c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11cd55c5:;
  /* 11cd55c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd55c8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11cd55ce sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd55d0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd55d6 jge 0x11cd5637 */
  if ((C.sf==C.of)) goto L_11cd5637;
  /* 11cd55d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd55db sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd55de cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd55e1 jae 0x11cd5637 */
  if (!C.cf) goto L_11cd5637;
  /* 11cd55e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd55e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd55e8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11cd55ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd55f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd55f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd55f7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11cd55fe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5601 jne 0x11cd5621 */
  if (!C.zf) goto L_11cd5621;
  /* 11cd5603 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11cd5609 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd560c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11cd5612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5615 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11cd5618 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd561b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd561e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cd5621:;
  /* 11cd5621 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5624 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11cd562a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11cd562c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd562f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5632 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd5635 jmp 0x11cd55c5 */
  goto L_11cd55c5;
L_11cd5637:;
  /* 11cd5637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd5639 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11cd563f push edx */
  push32((uint32_t)(EDX));
  /* 11cd5640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5643 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11cd5649 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd564b push eax */
  push32((uint32_t)(EAX));
  /* 11cd564c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11cd5652 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5656 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd5659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd565c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd565f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5662 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd5669 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11cd566c push eax */
  push32((uint32_t)(EAX));
  /* 11cd566d call dword ptr [0x11d013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d4))), 0x11cd5673u);
  /* 11cd5673 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd5675 je 0x11cd569a */
  if (C.zf) goto L_11cd569a;
  /* 11cd5677 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd567a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5680 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11cd5683 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5686 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11cd568c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd568e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5694 jge 0x11cd5698 */
  if ((C.sf==C.of)) goto L_11cd5698;
  /* 11cd5696 jmp 0x11cd56aa */
  goto L_11cd56aa;
L_11cd5698:;
  /* 11cd5698 jmp 0x11cd56a5 */
  goto L_11cd56a5;
L_11cd569a:;
  /* 11cd569a call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cd56a0u);
  /* 11cd56a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cd56a3 jmp 0x11cd56aa */
  goto L_11cd56aa;
L_11cd56a5:;
  /* 11cd56a5 jmp 0x11cd55ad */
  goto L_11cd55ad;
L_11cd56aa:;
  /* 11cd56aa jmp 0x11cd56fc */
  goto L_11cd56fc;
L_11cd56ac:;
  /* 11cd56ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd56ae lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11cd56b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd56b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cd56b8 push edx */
  push32((uint32_t)(EDX));
  /* 11cd56b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd56bc push eax */
  push32((uint32_t)(EAX));
  /* 11cd56bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd56c0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd56c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd56c6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd56c9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd56cc mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd56d3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11cd56d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd56d7 call dword ptr [0x11d013d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d4))), 0x11cd56ddu);
  /* 11cd56dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd56df je 0x11cd56f3 */
  if (C.zf) goto L_11cd56f3;
  /* 11cd56e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd56e8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11cd56ee mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cd56f1 jmp 0x11cd56fc */
  goto L_11cd56fc;
L_11cd56f3:;
  /* 11cd56f3 call dword ptr [0x11d013f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013f4))), 0x11cd56f9u);
  /* 11cd56f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd56fc:;
  /* 11cd56fc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5700 jne 0x11cd5786 */
  if (!C.zf) goto L_11cd5786;
  /* 11cd5706 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd570a je 0x11cd573a */
  if (C.zf) goto L_11cd573a;
  /* 11cd570c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5710 jne 0x11cd5729 */
  if (!C.zf) goto L_11cd5729;
  /* 11cd5712 call 0x11cd68e0 */
  push32(0x11cd5717u); f_11cd68e0();
  /* 11cd5717 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11cd571d call 0x11cd68f0 */
  push32(0x11cd5722u); f_11cd68f0();
  /* 11cd5722 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5725 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11cd5727 jmp 0x11cd5735 */
  goto L_11cd5735;
L_11cd5729:;
  /* 11cd5729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd572c push edx */
  push32((uint32_t)(EDX));
  /* 11cd572d call 0x11cd6840 */
  push32(0x11cd5732u); f_11cd6840();
  /* 11cd5732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd5735:;
  /* 11cd5735 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5738 jmp 0x11cd578f */
  goto L_11cd578f;
L_11cd573a:;
  /* 11cd573a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd573d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd5740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5743 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5746 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5749 mov edx, dword ptr [eax*4 + 0x11d00e20] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11d00e20)));
  /* 11cd5750 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11cd5755 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd575a je 0x11cd576b */
  if (C.zf) goto L_11cd576b;
  /* 11cd575c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd575f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11cd5762 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5765 jne 0x11cd576b */
  if (!C.zf) goto L_11cd576b;
  /* 11cd5767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5769 jmp 0x11cd578f */
  goto L_11cd578f;
L_11cd576b:;
  /* 11cd576b call 0x11cd68e0 */
  push32(0x11cd5770u); f_11cd68e0();
  /* 11cd5770 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11cd5776 call 0x11cd68f0 */
  push32(0x11cd577bu); f_11cd68f0();
  /* 11cd577b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11cd5781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5784 jmp 0x11cd578f */
  goto L_11cd578f;
L_11cd5786:;
  /* 11cd5786 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cd5789 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11cd578f:;
  /* 11cd578f mov esp, ebp */
  ESP = (EBP);
  /* 11cd5791 pop ebp */
  EBP = (pop32());
  /* 11cd5792 ret  */
  ESPCHK(0x11cd5520u, _esp0);
  ESP += 4; return;
}

/* FUN_100157a0 @ 0x11cd57a0 (199 bytes, 68 insns) */
void f_11cd57a0(void) {
  FTRACE(0x11cd57a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd57a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd57a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd57a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd57a4 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd57a5 push esi */
  push32((uint32_t)(ESI));
  /* 11cd57a6 push edi */
  push32((uint32_t)(EDI));
L_11cd57a7:;
  /* 11cd57a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd57ab jne 0x11cd57cb */
  if (!C.zf) goto L_11cd57cb;
  /* 11cd57ad push 0x11cf9f74 */
  push32((uint32_t)(0x11cf9f74u));
  /* 11cd57b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd57b4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11cd57b6 push 0x11cfa354 */
  push32((uint32_t)(0x11cfa354u));
  /* 11cd57bb push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd57bd call 0x11cca080 */
  push32(0x11cd57c2u); f_11cca080();
  /* 11cd57c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd57c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd57c8 jne 0x11cd57cb */
  if (!C.zf) goto L_11cd57cb;
  /* 11cd57ca int3  */
  x86_unimpl("int3 @ 0x11cd57ca");
L_11cd57cb:;
  /* 11cd57cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd57cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd57cf jne 0x11cd57a7 */
  if (!C.zf) goto L_11cd57a7;
  /* 11cd57d1 mov ecx, dword ptr [0x11cff644] */
  ECX = (r32((uint32_t)(0x11cff644)));
  /* 11cd57d7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd57da mov dword ptr [0x11cff644], ecx */
  w32((uint32_t)(0x11cff644), (ECX));
  /* 11cd57e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd57e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cd57e6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11cd57e8 push 0x11cfa354 */
  push32((uint32_t)(0x11cfa354u));
  /* 11cd57ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd57ef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11cd57f4 call 0x11ccb4c0 */
  push32(0x11cd57f9u); f_11ccb4c0();
  /* 11cd57f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd57fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd57ff mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11cd5802 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5805 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5809 je 0x11cd5826 */
  if (C.zf) goto L_11cd5826;
  /* 11cd580b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd580e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cd5811 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5817 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11cd581a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd581d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11cd5824 jmp 0x11cd584b */
  goto L_11cd584b;
L_11cd5826:;
  /* 11cd5826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5829 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cd582c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11cd582f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5832 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11cd5835 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5838 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd583b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd583e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11cd5841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5844 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11cd584b:;
  /* 11cd584b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd584e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5851 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11cd5854 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11cd5856 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5859 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11cd5860 pop edi */
  EDI = (pop32());
  /* 11cd5861 pop esi */
  ESI = (pop32());
  /* 11cd5862 pop ebx */
  EBX = (pop32());
  /* 11cd5863 mov esp, ebp */
  ESP = (EBP);
  /* 11cd5865 pop ebp */
  EBP = (pop32());
  /* 11cd5866 ret  */
  ESPCHK(0x11cd57a0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11cd5870 (50 bytes, 17 insns) */
void f_11cd5870(void) {
  FTRACE(0x11cd5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5870 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5871 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5876 cmp eax, dword ptr [0x11d00f5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d00f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd587c jb 0x11cd5882 */
  if (C.cf) goto L_11cd5882;
  /* 11cd587e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5880 jmp 0x11cd58a0 */
  goto L_11cd58a0;
L_11cd5882:;
  /* 11cd5882 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5885 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd5888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd588b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd588e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5891 mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd5898 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11cd589d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11cd58a0:;
  /* 11cd58a0 pop ebp */
  EBP = (pop32());
  /* 11cd58a1 ret  */
  ESPCHK(0x11cd5870u, _esp0);
  ESP += 4; return;
}

/* FUN_100158b0 @ 0x11cd58b0 (300 bytes, 80 insns) */
void f_11cd58b0(void) {
  FTRACE(0x11cd58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd58b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd58b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd58b4 cmp dword ptr [0x11d00de0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d00de0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd58bb jne 0x11cd58c9 */
  if (!C.zf) goto L_11cd58c9;
  /* 11cd58bd mov dword ptr [0x11d00de0], 0x200 */
  w32((uint32_t)(0x11d00de0), (0x200u));
  /* 11cd58c7 jmp 0x11cd58dc */
  goto L_11cd58dc;
L_11cd58c9:;
  /* 11cd58c9 cmp dword ptr [0x11d00de0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11d00de0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd58d0 jge 0x11cd58dc */
  if ((C.sf==C.of)) goto L_11cd58dc;
  /* 11cd58d2 mov dword ptr [0x11d00de0], 0x14 */
  w32((uint32_t)(0x11d00de0), (0x14u));
L_11cd58dc:;
  /* 11cd58dc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11cd58e1 push 0x11cfa360 */
  push32((uint32_t)(0x11cfa360u));
  /* 11cd58e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd58e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd58ea mov eax, dword ptr [0x11d00de0] */
  EAX = (r32((uint32_t)(0x11d00de0)));
  /* 11cd58ef push eax */
  push32((uint32_t)(EAX));
  /* 11cd58f0 call 0x11ccb8d0 */
  push32(0x11cd58f5u); f_11ccb8d0();
  /* 11cd58f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd58f8 mov dword ptr [0x11cffa88], eax */
  w32((uint32_t)(0x11cffa88), (EAX));
  /* 11cd58fd cmp dword ptr [0x11cffa88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cffa88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5904 jne 0x11cd5945 */
  if (!C.zf) goto L_11cd5945;
  /* 11cd5906 mov dword ptr [0x11d00de0], 0x14 */
  w32((uint32_t)(0x11d00de0), (0x14u));
  /* 11cd5910 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11cd5915 push 0x11cfa360 */
  push32((uint32_t)(0x11cfa360u));
  /* 11cd591a push 2 */
  push32((uint32_t)(0x2u));
  /* 11cd591c push 4 */
  push32((uint32_t)(0x4u));
  /* 11cd591e mov ecx, dword ptr [0x11d00de0] */
  ECX = (r32((uint32_t)(0x11d00de0)));
  /* 11cd5924 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5925 call 0x11ccb8d0 */
  push32(0x11cd592au); f_11ccb8d0();
  /* 11cd592a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd592d mov dword ptr [0x11cffa88], eax */
  w32((uint32_t)(0x11cffa88), (EAX));
  /* 11cd5932 cmp dword ptr [0x11cffa88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cffa88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5939 jne 0x11cd5945 */
  if (!C.zf) goto L_11cd5945;
  /* 11cd593b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11cd593d call 0x11cc9f30 */
  push32(0x11cd5942u); f_11cc9f30();
  /* 11cd5942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cd5945:;
  /* 11cd5945 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd594c jmp 0x11cd5957 */
  goto L_11cd5957;
L_11cd594e:;
  /* 11cd594e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5951 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5954 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd5957:;
  /* 11cd5957 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd595b jge 0x11cd5976 */
  if ((C.sf==C.of)) goto L_11cd5976;
  /* 11cd595d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5960 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd5963 add eax, 0x11cfd2e8 */
  { uint32_t _a=(EAX),_b=(0x11cfd2e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5968 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd596b mov edx, dword ptr [0x11cffa88] */
  EDX = (r32((uint32_t)(0x11cffa88)));
  /* 11cd5971 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11cd5974 jmp 0x11cd594e */
  goto L_11cd594e;
L_11cd5976:;
  /* 11cd5976 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd597d jmp 0x11cd5988 */
  goto L_11cd5988;
L_11cd597f:;
  /* 11cd597f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5982 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cd5988:;
  /* 11cd5988 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd598c jge 0x11cd59d8 */
  if ((C.sf==C.of)) goto L_11cd59d8;
  /* 11cd598e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5991 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd5994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5997 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd599a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd599d mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd59a4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd59a8 je 0x11cd59c6 */
  if (C.zf) goto L_11cd59c6;
  /* 11cd59aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd59ad sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd59b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd59b3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11cd59b6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd59b9 mov eax, dword ptr [ecx*4 + 0x11d00e20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d00e20)));
  /* 11cd59c0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd59c4 jne 0x11cd59d6 */
  if (!C.zf) goto L_11cd59d6;
L_11cd59c6:;
  /* 11cd59c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd59c9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11cd59cc mov dword ptr [ecx + 0x11cfd2f8], 0xffffffff */
  w32((uint32_t)(ECX + 0x11cfd2f8), (0xffffffffu));
L_11cd59d6:;
  /* 11cd59d6 jmp 0x11cd597f */
  goto L_11cd597f;
L_11cd59d8:;
  /* 11cd59d8 mov esp, ebp */
  ESP = (EBP);
  /* 11cd59da pop ebp */
  EBP = (pop32());
  /* 11cd59db ret  */
  ESPCHK(0x11cd58b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159e0 @ 0x11cd59e0 (26 bytes, 9 insns) */
void f_11cd59e0(void) {
  FTRACE(0x11cd59e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd59e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd59e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd59e3 call 0x11cda180 */
  push32(0x11cd59e8u); f_11cda180();
  /* 11cd59e8 movsx eax, byte ptr [0x11cff4fc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11cff4fc))));
  /* 11cd59ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd59f1 je 0x11cd59f8 */
  if (C.zf) goto L_11cd59f8;
  /* 11cd59f3 call 0x11cd9f40 */
  push32(0x11cd59f8u); f_11cd9f40();
L_11cd59f8:;
  /* 11cd59f8 pop ebp */
  EBP = (pop32());
  /* 11cd59f9 ret  */
  ESPCHK(0x11cd59e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a00 @ 0x11cd5a00 (61 bytes, 20 insns) */
void f_11cd5a00(void) {
  FTRACE(0x11cd5a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5a01 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5a03 cmp dword ptr [ebp + 8], 0x11cfd2e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11cfd2e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5a0a jb 0x11cd5a2e */
  if (C.cf) goto L_11cd5a2e;
  /* 11cd5a0c cmp dword ptr [ebp + 8], 0x11cfd548 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11cfd548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5a13 ja 0x11cd5a2e */
  if ((!C.cf&&!C.zf)) goto L_11cd5a2e;
  /* 11cd5a15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5a18 sub eax, 0x11cfd2e8 */
  { uint32_t _a=(EAX),_b=(0x11cfd2e8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5a1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd5a20 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a23 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5a24 call 0x11ccb3c0 */
  push32(0x11cd5a29u); f_11ccb3c0();
  /* 11cd5a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a2c jmp 0x11cd5a3b */
  goto L_11cd5a3b;
L_11cd5a2e:;
  /* 11cd5a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5a31 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a34 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5a35 call dword ptr [0x11d013fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013fc))), 0x11cd5a3bu);
L_11cd5a3b:;
  /* 11cd5a3b pop ebp */
  EBP = (pop32());
  /* 11cd5a3c ret  */
  ESPCHK(0x11cd5a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a40 @ 0x11cd5a40 (41 bytes, 16 insns) */
void f_11cd5a40(void) {
  FTRACE(0x11cd5a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5a41 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5a43 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5a47 jge 0x11cd5a5a */
  if ((C.sf==C.of)) goto L_11cd5a5a;
  /* 11cd5a49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5a4c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a4f push eax */
  push32((uint32_t)(EAX));
  /* 11cd5a50 call 0x11ccb3c0 */
  push32(0x11cd5a55u); f_11ccb3c0();
  /* 11cd5a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a58 jmp 0x11cd5a67 */
  goto L_11cd5a67;
L_11cd5a5a:;
  /* 11cd5a5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd5a5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a60 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5a61 call dword ptr [0x11d013fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013fc))), 0x11cd5a67u);
L_11cd5a67:;
  /* 11cd5a67 pop ebp */
  EBP = (pop32());
  /* 11cd5a68 ret  */
  ESPCHK(0x11cd5a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a70 @ 0x11cd5a70 (61 bytes, 20 insns) */
void f_11cd5a70(void) {
  FTRACE(0x11cd5a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5a71 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5a73 cmp dword ptr [ebp + 8], 0x11cfd2e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11cfd2e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5a7a jb 0x11cd5a9e */
  if (C.cf) goto L_11cd5a9e;
  /* 11cd5a7c cmp dword ptr [ebp + 8], 0x11cfd548 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11cfd548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5a83 ja 0x11cd5a9e */
  if ((!C.cf&&!C.zf)) goto L_11cd5a9e;
  /* 11cd5a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5a88 sub eax, 0x11cfd2e8 */
  { uint32_t _a=(EAX),_b=(0x11cfd2e8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5a8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11cd5a90 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a93 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5a94 call 0x11ccb460 */
  push32(0x11cd5a99u); f_11ccb460();
  /* 11cd5a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5a9c jmp 0x11cd5aab */
  goto L_11cd5aab;
L_11cd5a9e:;
  /* 11cd5a9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5aa1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5aa5 call dword ptr [0x11d01400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01400))), 0x11cd5aabu);
L_11cd5aab:;
  /* 11cd5aab pop ebp */
  EBP = (pop32());
  /* 11cd5aac ret  */
  ESPCHK(0x11cd5a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ab0 @ 0x11cd5ab0 (41 bytes, 16 insns) */
void f_11cd5ab0(void) {
  FTRACE(0x11cd5ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5ab3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5ab7 jge 0x11cd5aca */
  if ((C.sf==C.of)) goto L_11cd5aca;
  /* 11cd5ab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5abc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5abf push eax */
  push32((uint32_t)(EAX));
  /* 11cd5ac0 call 0x11ccb460 */
  push32(0x11cd5ac5u); f_11ccb460();
  /* 11cd5ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5ac8 jmp 0x11cd5ad7 */
  goto L_11cd5ad7;
L_11cd5aca:;
  /* 11cd5aca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd5acd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5ad1 call dword ptr [0x11d01400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01400))), 0x11cd5ad7u);
L_11cd5ad7:;
  /* 11cd5ad7 pop ebp */
  EBP = (pop32());
  /* 11cd5ad8 ret  */
  ESPCHK(0x11cd5ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ae0 @ 0x11cd5ae0 (119 bytes, 34 insns) */
void f_11cd5ae0(void) {
  FTRACE(0x11cd5ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5ae6 push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cd5aeb call dword ptr [0x11d013e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013e8))), 0x11cd5af1u);
  /* 11cd5af1 cmp dword ptr [0x11cff7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5af8 je 0x11cd5b18 */
  if (C.zf) goto L_11cd5b18;
  /* 11cd5afa push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cd5aff call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cd5b05u);
  /* 11cd5b05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd5b07 call 0x11ccb3c0 */
  push32(0x11cd5b0cu); f_11ccb3c0();
  /* 11cd5b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5b0f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11cd5b16 jmp 0x11cd5b1f */
  goto L_11cd5b1f;
L_11cd5b18:;
  /* 11cd5b18 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11cd5b1f:;
  /* 11cd5b1f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11cd5b23 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5b27 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5b28 call 0x11cd5b60 */
  push32(0x11cd5b2du); f_11cd5b60();
  /* 11cd5b2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5b30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cd5b33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5b37 je 0x11cd5b45 */
  if (C.zf) goto L_11cd5b45;
  /* 11cd5b39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11cd5b3b call 0x11ccb460 */
  push32(0x11cd5b40u); f_11ccb460();
  /* 11cd5b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5b43 jmp 0x11cd5b50 */
  goto L_11cd5b50;
L_11cd5b45:;
  /* 11cd5b45 push 0x11cff7e4 */
  push32((uint32_t)(0x11cff7e4u));
  /* 11cd5b4a call dword ptr [0x11d013d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d013d8))), 0x11cd5b50u);
L_11cd5b50:;
  /* 11cd5b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5b53 mov esp, ebp */
  ESP = (EBP);
  /* 11cd5b55 pop ebp */
  EBP = (pop32());
  /* 11cd5b56 ret  */
  ESPCHK(0x11cd5ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b60 @ 0x11cd5b60 (160 bytes, 50 insns) */
void f_11cd5b60(void) {
  FTRACE(0x11cd5b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5b61 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5b66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5b6a jne 0x11cd5b73 */
  if (!C.zf) goto L_11cd5b73;
  /* 11cd5b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5b6e jmp 0x11cd5bfc */
  goto L_11cd5bfc;
L_11cd5b73:;
  /* 11cd5b73 cmp dword ptr [0x11cff664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5b7a jne 0x11cd5baa */
  if (!C.zf) goto L_11cd5baa;
  /* 11cd5b7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cd5b7f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5b84 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5b89 jle 0x11cd5b9b */
  if ((C.zf||C.sf!=C.of)) goto L_11cd5b9b;
  /* 11cd5b8b call 0x11cd68e0 */
  push32(0x11cd5b90u); f_11cd68e0();
  /* 11cd5b90 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11cd5b96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5b99 jmp 0x11cd5bfc */
  goto L_11cd5bfc;
L_11cd5b9b:;
  /* 11cd5b9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5b9e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11cd5ba1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11cd5ba3 mov eax, 1 */
  EAX = (0x1u);
  /* 11cd5ba8 jmp 0x11cd5bfc */
  goto L_11cd5bfc;
L_11cd5baa:;
  /* 11cd5baa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cd5bb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11cd5bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cd5bb7 mov ecx, dword ptr [0x11cfd000] */
  ECX = (r32((uint32_t)(0x11cfd000)));
  /* 11cd5bbd push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5bc1 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5bc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cd5bc4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11cd5bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5bc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11cd5bcd mov ecx, dword ptr [0x11cff674] */
  ECX = (r32((uint32_t)(0x11cff674)));
  /* 11cd5bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5bd4 call dword ptr [0x11d0139c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0139c))), 0x11cd5bdau);
  /* 11cd5bda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cd5bdd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5be1 je 0x11cd5be9 */
  if (C.zf) goto L_11cd5be9;
  /* 11cd5be3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5be7 je 0x11cd5bf9 */
  if (C.zf) goto L_11cd5bf9;
L_11cd5be9:;
  /* 11cd5be9 call 0x11cd68e0 */
  push32(0x11cd5beeu); f_11cd68e0();
  /* 11cd5bee mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11cd5bf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5bf7 jmp 0x11cd5bfc */
  goto L_11cd5bfc;
L_11cd5bf9:;
  /* 11cd5bf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11cd5bfc:;
  /* 11cd5bfc mov esp, ebp */
  ESP = (EBP);
  /* 11cd5bfe pop ebp */
  EBP = (pop32());
  /* 11cd5bff ret  */
  ESPCHK(0x11cd5b60u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11cd5c00 (104 bytes, 43 insns) */
void f_11cd5c00(void) {
  FTRACE(0x11cd5c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5c00 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd5c01 push esi */
  push32((uint32_t)(ESI));
  /* 11cd5c02 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11cd5c06 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5c08 jne 0x11cd5c22 */
  if (!C.zf) goto L_11cd5c22;
  /* 11cd5c0a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11cd5c0e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd5c12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5c14 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd5c16 mov ebx, eax */
  EBX = (EAX);
  /* 11cd5c18 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cd5c1c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd5c1e mov edx, ebx */
  EDX = (EBX);
  /* 11cd5c20 jmp 0x11cd5c63 */
  goto L_11cd5c63;
L_11cd5c22:;
  /* 11cd5c22 mov ecx, eax */
  ECX = (EAX);
  /* 11cd5c24 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11cd5c28 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd5c2c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11cd5c30:;
  /* 11cd5c30 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd5c32 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11cd5c34 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd5c36 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11cd5c38 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5c3a jne 0x11cd5c30 */
  if (!C.zf) goto L_11cd5c30;
  /* 11cd5c3c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd5c3e mov esi, eax */
  ESI = (EAX);
  /* 11cd5c40 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cd5c44 mov ecx, eax */
  ECX = (EAX);
  /* 11cd5c46 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11cd5c4a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cd5c4c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5c4e jb 0x11cd5c5e */
  if (C.cf) goto L_11cd5c5e;
  /* 11cd5c50 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5c54 ja 0x11cd5c5e */
  if ((!C.cf&&!C.zf)) goto L_11cd5c5e;
  /* 11cd5c56 jb 0x11cd5c5f */
  if (C.cf) goto L_11cd5c5f;
  /* 11cd5c58 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5c5c jbe 0x11cd5c5f */
  if ((C.cf||C.zf)) goto L_11cd5c5f;
L_11cd5c5e:;
  /* 11cd5c5e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11cd5c5f:;
  /* 11cd5c5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5c61 mov eax, esi */
  EAX = (ESI);
L_11cd5c63:;
  /* 11cd5c63 pop esi */
  ESI = (pop32());
  /* 11cd5c64 pop ebx */
  EBX = (pop32());
  /* 11cd5c65 ret 0x10 */
  ESPCHK(0x11cd5c00u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11cd5c70 (117 bytes, 44 insns) */
void f_11cd5c70(void) {
  FTRACE(0x11cd5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5c70 push ebx */
  push32((uint32_t)(EBX));
  /* 11cd5c71 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11cd5c75 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5c77 jne 0x11cd5c91 */
  if (!C.zf) goto L_11cd5c91;
  /* 11cd5c79 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd5c7d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cd5c81 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5c83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd5c85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11cd5c89 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd5c8b mov eax, edx */
  EAX = (EDX);
  /* 11cd5c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5c8f jmp 0x11cd5ce1 */
  goto L_11cd5ce1;
L_11cd5c91:;
  /* 11cd5c91 mov ecx, eax */
  ECX = (EAX);
  /* 11cd5c93 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cd5c97 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11cd5c9b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11cd5c9f:;
  /* 11cd5c9f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11cd5ca1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11cd5ca3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11cd5ca5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11cd5ca7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5ca9 jne 0x11cd5c9f */
  if (!C.zf) goto L_11cd5c9f;
  /* 11cd5cab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cd5cad mov ecx, eax */
  ECX = (EAX);
  /* 11cd5caf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cd5cb3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11cd5cb4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11cd5cb8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5cba jb 0x11cd5cca */
  if (C.cf) goto L_11cd5cca;
  /* 11cd5cbc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5cc0 ja 0x11cd5cca */
  if ((!C.cf&&!C.zf)) goto L_11cd5cca;
  /* 11cd5cc2 jb 0x11cd5cd2 */
  if (C.cf) goto L_11cd5cd2;
  /* 11cd5cc4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5cc8 jbe 0x11cd5cd2 */
  if ((C.cf||C.zf)) goto L_11cd5cd2;
L_11cd5cca:;
  /* 11cd5cca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5cce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11cd5cd2:;
  /* 11cd5cd2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5cd6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5cda neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd5cdc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11cd5cde sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11cd5ce1:;
  /* 11cd5ce1 pop ebx */
  EBX = (pop32());
  /* 11cd5ce2 ret 0x10 */
  ESPCHK(0x11cd5c70u, _esp0);
  ESP += 20; return;
}

/* FUN_10015cf0 @ 0x11cd5cf0 (836 bytes, 238 insns) */
void f_11cd5cf0(void) {
  FTRACE(0x11cd5cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd5cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd5cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cd5cf3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cd5cf6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd5cf8 call 0x11ccb3c0 */
  push32(0x11cd5cfdu); f_11ccb3c0();
  /* 11cd5cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5d03 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5d04 call 0x11cd6040 */
  push32(0x11cd5d09u); f_11cd6040();
  /* 11cd5d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5d0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11cd5d0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5d12 cmp ecx, dword ptr [0x11cff7e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11cff7e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5d18 jne 0x11cd5d2b */
  if (!C.zf) goto L_11cd5d2b;
  /* 11cd5d1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd5d1c call 0x11ccb460 */
  push32(0x11cd5d21u); f_11ccb460();
  /* 11cd5d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5d26 jmp 0x11cd6030 */
  goto L_11cd6030;
L_11cd5d2b:;
  /* 11cd5d2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5d2f jne 0x11cd5d4c */
  if (!C.zf) goto L_11cd5d4c;
  /* 11cd5d31 call 0x11cd6120 */
  push32(0x11cd5d36u); f_11cd6120();
  /* 11cd5d36 call 0x11cd61a0 */
  push32(0x11cd5d3bu); f_11cd61a0();
  /* 11cd5d3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd5d3d call 0x11ccb460 */
  push32(0x11cd5d42u); f_11ccb460();
  /* 11cd5d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5d45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5d47 jmp 0x11cd6030 */
  goto L_11cd6030;
L_11cd5d4c:;
  /* 11cd5d4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cd5d53 jmp 0x11cd5d5e */
  goto L_11cd5d5e;
L_11cd5d55:;
  /* 11cd5d55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5d58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5d5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cd5d5e:;
  /* 11cd5d5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5d62 jae 0x11cd5eaf */
  if (!C.cf) goto L_11cd5eaf;
  /* 11cd5d68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5d6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5d6e mov ecx, dword ptr [eax + 0x11cfd578] */
  ECX = (r32((uint32_t)(EAX + 0x11cfd578)));
  /* 11cd5d74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5d77 jne 0x11cd5eaa */
  if (!C.zf) goto L_11cd5eaa;
  /* 11cd5d7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cd5d84 jmp 0x11cd5d8f */
  goto L_11cd5d8f;
L_11cd5d86:;
  /* 11cd5d86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5d89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5d8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11cd5d8f:;
  /* 11cd5d8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5d96 jae 0x11cd5da4 */
  if (!C.cf) goto L_11cd5da4;
  /* 11cd5d98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5d9b mov byte ptr [eax + 0x11cff980], 0 */
  w8((uint32_t)(EAX + 0x11cff980), (0x0u));
  /* 11cd5da2 jmp 0x11cd5d86 */
  goto L_11cd5d86;
L_11cd5da4:;
  /* 11cd5da4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd5dab jmp 0x11cd5db6 */
  goto L_11cd5db6;
L_11cd5dad:;
  /* 11cd5dad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5db0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5db3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11cd5db6:;
  /* 11cd5db6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5dba jae 0x11cd5e37 */
  if (!C.cf) goto L_11cd5e37;
  /* 11cd5dbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5dbf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5dc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5dc5 lea ecx, [edx + eax*8 + 0x11cfd588] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11cfd588));
  /* 11cd5dcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cd5dcf jmp 0x11cd5dda */
  goto L_11cd5dda;
L_11cd5dd1:;
  /* 11cd5dd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5dd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5dd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cd5dda:;
  /* 11cd5dda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5ddd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5ddf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd5de1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd5de3 je 0x11cd5e32 */
  if (C.zf) goto L_11cd5e32;
  /* 11cd5de5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5de8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5dea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cd5ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd5def je 0x11cd5e32 */
  if (C.zf) goto L_11cd5e32;
  /* 11cd5df1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5df4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5df6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd5df8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cd5dfb jmp 0x11cd5e06 */
  goto L_11cd5e06;
L_11cd5dfd:;
  /* 11cd5dfd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5e00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5e03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11cd5e06:;
  /* 11cd5e06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cd5e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5e0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11cd5e0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5e11 ja 0x11cd5e30 */
  if ((!C.cf&&!C.zf)) goto L_11cd5e30;
  /* 11cd5e13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5e16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5e19 mov dl, byte ptr [eax + 0x11cff981] */
  DL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11cd5e1f or dl, byte ptr [ecx + 0x11cfd570] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11cfd570))); DL = (_r); fl_logic(_r,8); }
  /* 11cd5e25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5e28 mov byte ptr [eax + 0x11cff981], dl */
  w8((uint32_t)(EAX + 0x11cff981), (DL));
  /* 11cd5e2e jmp 0x11cd5dfd */
  goto L_11cd5dfd;
L_11cd5e30:;
  /* 11cd5e30 jmp 0x11cd5dd1 */
  goto L_11cd5dd1;
L_11cd5e32:;
  /* 11cd5e32 jmp 0x11cd5dad */
  goto L_11cd5dad;
L_11cd5e37:;
  /* 11cd5e37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5e3a mov dword ptr [0x11cff7e8], ecx */
  w32((uint32_t)(0x11cff7e8), (ECX));
  /* 11cd5e40 mov dword ptr [0x11cff86c], 1 */
  w32((uint32_t)(0x11cff86c), (0x1u));
  /* 11cd5e4a mov edx, dword ptr [0x11cff7e8] */
  EDX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd5e50 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5e51 call 0x11cd60a0 */
  push32(0x11cd5e56u); f_11cd60a0();
  /* 11cd5e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5e59 mov dword ptr [0x11cffa84], eax */
  w32((uint32_t)(0x11cffa84), (EAX));
  /* 11cd5e5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd5e65 jmp 0x11cd5e70 */
  goto L_11cd5e70;
L_11cd5e67:;
  /* 11cd5e67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5e6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5e6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cd5e70:;
  /* 11cd5e70 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5e74 jae 0x11cd5e94 */
  if (!C.cf) goto L_11cd5e94;
  /* 11cd5e76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cd5e79 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11cd5e7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5e7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5e82 mov cx, word ptr [ecx + eax*2 + 0x11cfd57c] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11cfd57c)));
  /* 11cd5e8a mov word ptr [edx*2 + 0x11cff860], cx */
  w16((uint32_t)(EDX*2 + 0x11cff860), (CX));
  /* 11cd5e92 jmp 0x11cd5e67 */
  goto L_11cd5e67;
L_11cd5e94:;
  /* 11cd5e94 call 0x11cd61a0 */
  push32(0x11cd5e99u); f_11cd61a0();
  /* 11cd5e99 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd5e9b call 0x11ccb460 */
  push32(0x11cd5ea0u); f_11ccb460();
  /* 11cd5ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5ea5 jmp 0x11cd6030 */
  goto L_11cd6030;
L_11cd5eaa:;
  /* 11cd5eaa jmp 0x11cd5d55 */
  goto L_11cd5d55;
L_11cd5eaf:;
  /* 11cd5eaf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11cd5eb2 push edx */
  push32((uint32_t)(EDX));
  /* 11cd5eb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5eb6 push eax */
  push32((uint32_t)(EAX));
  /* 11cd5eb7 call dword ptr [0x11d01360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01360))), 0x11cd5ebdu);
  /* 11cd5ebd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5ec0 jne 0x11cd6002 */
  if (!C.zf) goto L_11cd6002;
  /* 11cd5ec6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11cd5ecd jmp 0x11cd5ed8 */
  goto L_11cd5ed8;
L_11cd5ecf:;
  /* 11cd5ecf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5ed2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5ed5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11cd5ed8:;
  /* 11cd5ed8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5edf jae 0x11cd5eed */
  if (!C.cf) goto L_11cd5eed;
  /* 11cd5ee1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5ee4 mov byte ptr [edx + 0x11cff980], 0 */
  w8((uint32_t)(EDX + 0x11cff980), (0x0u));
  /* 11cd5eeb jmp 0x11cd5ecf */
  goto L_11cd5ecf;
L_11cd5eed:;
  /* 11cd5eed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cd5ef0 mov dword ptr [0x11cff7e8], eax */
  w32((uint32_t)(0x11cff7e8), (EAX));
  /* 11cd5ef5 mov dword ptr [0x11cffa84], 0 */
  w32((uint32_t)(0x11cffa84), (0x0u));
  /* 11cd5eff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5f03 jbe 0x11cd5fbe */
  if ((C.cf||C.zf)) goto L_11cd5fbe;
  /* 11cd5f09 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11cd5f0c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11cd5f0f jmp 0x11cd5f1a */
  goto L_11cd5f1a;
L_11cd5f11:;
  /* 11cd5f11 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd5f14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5f17 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11cd5f1a:;
  /* 11cd5f1a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd5f1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cd5f1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11cd5f21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cd5f23 je 0x11cd5f6c */
  if (C.zf) goto L_11cd5f6c;
  /* 11cd5f25 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd5f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd5f2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cd5f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cd5f2f je 0x11cd5f6c */
  if (C.zf) goto L_11cd5f6c;
  /* 11cd5f31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd5f34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5f36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cd5f38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11cd5f3b jmp 0x11cd5f46 */
  goto L_11cd5f46;
L_11cd5f3d:;
  /* 11cd5f3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5f40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5f43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11cd5f46:;
  /* 11cd5f46 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cd5f49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cd5f4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11cd5f4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5f51 ja 0x11cd5f6a */
  if ((!C.cf&&!C.zf)) goto L_11cd5f6a;
  /* 11cd5f53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5f56 mov cl, byte ptr [eax + 0x11cff981] */
  CL = (r8((uint32_t)(EAX + 0x11cff981)));
  /* 11cd5f5c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11cd5f5f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5f62 mov byte ptr [edx + 0x11cff981], cl */
  w8((uint32_t)(EDX + 0x11cff981), (CL));
  /* 11cd5f68 jmp 0x11cd5f3d */
  goto L_11cd5f3d;
L_11cd5f6a:;
  /* 11cd5f6a jmp 0x11cd5f11 */
  goto L_11cd5f11;
L_11cd5f6c:;
  /* 11cd5f6c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11cd5f73 jmp 0x11cd5f7e */
  goto L_11cd5f7e;
L_11cd5f75:;
  /* 11cd5f75 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5f78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5f7b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11cd5f7e:;
  /* 11cd5f7e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5f85 jae 0x11cd5f9e */
  if (!C.cf) goto L_11cd5f9e;
  /* 11cd5f87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5f8a mov dl, byte ptr [ecx + 0x11cff981] */
  DL = (r8((uint32_t)(ECX + 0x11cff981)));
  /* 11cd5f90 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11cd5f93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cd5f96 mov byte ptr [eax + 0x11cff981], dl */
  w8((uint32_t)(EAX + 0x11cff981), (DL));
  /* 11cd5f9c jmp 0x11cd5f75 */
  goto L_11cd5f75;
L_11cd5f9e:;
  /* 11cd5f9e mov ecx, dword ptr [0x11cff7e8] */
  ECX = (r32((uint32_t)(0x11cff7e8)));
  /* 11cd5fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cd5fa5 call 0x11cd60a0 */
  push32(0x11cd5faau); f_11cd60a0();
  /* 11cd5faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5fad mov dword ptr [0x11cffa84], eax */
  w32((uint32_t)(0x11cffa84), (EAX));
  /* 11cd5fb2 mov dword ptr [0x11cff86c], 1 */
  w32((uint32_t)(0x11cff86c), (0x1u));
  /* 11cd5fbc jmp 0x11cd5fc8 */
  goto L_11cd5fc8;
L_11cd5fbe:;
  /* 11cd5fbe mov dword ptr [0x11cff86c], 0 */
  w32((uint32_t)(0x11cff86c), (0x0u));
L_11cd5fc8:;
  /* 11cd5fc8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cd5fcf jmp 0x11cd5fda */
  goto L_11cd5fda;
L_11cd5fd1:;
  /* 11cd5fd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5fd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5fd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11cd5fda:;
  /* 11cd5fda cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd5fde jae 0x11cd5fef */
  if (!C.cf) goto L_11cd5fef;
  /* 11cd5fe0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cd5fe3 mov word ptr [eax*2 + 0x11cff860], 0 */
  w16((uint32_t)(EAX*2 + 0x11cff860), (0x0u));
  /* 11cd5fed jmp 0x11cd5fd1 */
  goto L_11cd5fd1;
L_11cd5fef:;
  /* 11cd5fef call 0x11cd61a0 */
  push32(0x11cd5ff4u); f_11cd61a0();
  /* 11cd5ff4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd5ff6 call 0x11ccb460 */
  push32(0x11cd5ffbu); f_11ccb460();
  /* 11cd5ffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd5ffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6000 jmp 0x11cd6030 */
  goto L_11cd6030;
L_11cd6002:;
  /* 11cd6002 cmp dword ptr [0x11cff648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6009 je 0x11cd6023 */
  if (C.zf) goto L_11cd6023;
  /* 11cd600b call 0x11cd6120 */
  push32(0x11cd6010u); f_11cd6120();
  /* 11cd6010 call 0x11cd61a0 */
  push32(0x11cd6015u); f_11cd61a0();
  /* 11cd6015 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd6017 call 0x11ccb460 */
  push32(0x11cd601cu); f_11ccb460();
  /* 11cd601c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd601f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cd6021 jmp 0x11cd6030 */
  goto L_11cd6030;
L_11cd6023:;
  /* 11cd6023 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11cd6025 call 0x11ccb460 */
  push32(0x11cd602au); f_11ccb460();
  /* 11cd602a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cd602d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11cd6030:;
  /* 11cd6030 mov esp, ebp */
  ESP = (EBP);
  /* 11cd6032 pop ebp */
  EBP = (pop32());
  /* 11cd6033 ret  */
  ESPCHK(0x11cd5cf0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11cd6040 (89 bytes, 21 insns) */
void f_11cd6040(void) {
  FTRACE(0x11cd6040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cd6040 push ebp */
  push32((uint32_t)(EBP));
  /* 11cd6041 mov ebp, esp */
  EBP = (ESP);
  /* 11cd6043 mov dword ptr [0x11cff648], 0 */
  w32((uint32_t)(0x11cff648), (0x0u));
  /* 11cd604d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6051 jne 0x11cd6065 */
  if (!C.zf) goto L_11cd6065;
  /* 11cd6053 mov dword ptr [0x11cff648], 1 */
  w32((uint32_t)(0x11cff648), (0x1u));
  /* 11cd605d call dword ptr [0x11d0134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0134c))), 0x11cd6063u);
  /* 11cd6063 jmp 0x11cd6097 */
  goto L_11cd6097;
L_11cd6065:;
  /* 11cd6065 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6069 jne 0x11cd607d */
  if (!C.zf) goto L_11cd607d;
  /* 11cd606b mov dword ptr [0x11cff648], 1 */
  w32((uint32_t)(0x11cff648), (0x1u));
  /* 11cd6075 call dword ptr [0x11d01350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01350))), 0x11cd607bu);
  /* 11cd607b jmp 0x11cd6097 */
  goto L_11cd6097;
L_11cd607d:;
  /* 11cd607d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cd6081 jne 0x11cd6094 */
  if (!C.zf) goto L_11cd6094;
  /* 11cd6083 mov dword ptr [0x11cff648], 1 */
  w32((uint32_t)(0x11cff648), (0x1u));
  /* 11cd608d mov eax, dword ptr [0x11cff674] */
  EAX = (r32((uint32_t)(0x11cff674)));
  /* 11cd6092 jmp 0x11cd6097 */
  goto L_11cd6097;
L_11cd6094:;
  /* 11cd6094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11cd6097:;
  /* 11cd6097 pop ebp */
  EBP = (pop32());
  /* 11cd6098 ret  */
  ESPCHK(0x11cd6040u, _esp0);
  ESP += 4; return;
}

