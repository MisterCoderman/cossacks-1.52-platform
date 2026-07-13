#include "recomp.h"

/* FUN_10014940 @ 0x124e4940 (490 bytes, 165 insns) */
void f_124e4940(void) {
  FTRACE(0x124e4940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4940 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4941 mov ebp, esp */
  EBP = (ESP);
  /* 124e4943 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4946 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e494a jne 0x124e495d */
  if (!C.zf) goto L_124e495d;
  /* 124e494c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e494f push eax */
  push32((uint32_t)(EAX));
  /* 124e4950 call 0x124e4790 */
  push32(0x124e4955u); f_124e4790();
  /* 124e4955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4958 jmp 0x124e4b26 */
  goto L_124e4b26;
L_124e495d:;
  /* 124e495d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4961 jne 0x124e4976 */
  if (!C.zf) goto L_124e4976;
  /* 124e4963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4966 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4967 call 0x124e4b30 */
  push32(0x124e496cu); f_124e4b30();
  /* 124e496c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e496f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e4971 jmp 0x124e4b26 */
  goto L_124e4b26;
L_124e4976:;
  /* 124e4976 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124e497d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4981 ja 0x124e4af9 */
  if ((!C.cf&&!C.zf)) goto L_124e4af9;
  /* 124e4987 push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4989 call 0x124e43c0 */
  push32(0x124e498eu); f_124e43c0();
  /* 124e498e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4994 push edx */
  push32((uint32_t)(EDX));
  /* 124e4995 call 0x124e4cc0 */
  push32(0x124e499au); f_124e4cc0();
  /* 124e499a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e499d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124e49a0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e49a4 je 0x124e4abc */
  if (C.zf) goto L_124e4abc;
  /* 124e49aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e49ad cmp eax, dword ptr [0x1250ac94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250ac94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e49b3 ja 0x124e4a30 */
  if ((!C.cf&&!C.zf)) goto L_124e4a30;
  /* 124e49b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e49b8 push ecx */
  push32((uint32_t)(ECX));
  /* 124e49b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e49bc push edx */
  push32((uint32_t)(EDX));
  /* 124e49bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e49c0 push eax */
  push32((uint32_t)(EAX));
  /* 124e49c1 call 0x124e5b90 */
  push32(0x124e49c6u); f_124e5b90();
  /* 124e49c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e49c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e49cb je 0x124e49d5 */
  if (C.zf) goto L_124e49d5;
  /* 124e49cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e49d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e49d3 jmp 0x124e4a30 */
  goto L_124e4a30;
L_124e49d5:;
  /* 124e49d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e49d8 push edx */
  push32((uint32_t)(EDX));
  /* 124e49d9 call 0x124e5350 */
  push32(0x124e49deu); f_124e5350();
  /* 124e49de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e49e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e49e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e49e8 je 0x124e4a30 */
  if (C.zf) goto L_124e4a30;
  /* 124e49ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e49ed mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 124e49f0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e49f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e49f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e49f9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e49fc jae 0x124e4a06 */
  if (!C.cf) goto L_124e4a06;
  /* 124e49fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4a01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124e4a04 jmp 0x124e4a0c */
  goto L_124e4a0c;
L_124e4a06:;
  /* 124e4a06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4a09 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124e4a0c:;
  /* 124e4a0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e4a0f push edx */
  push32((uint32_t)(EDX));
  /* 124e4a10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4a13 push eax */
  push32((uint32_t)(EAX));
  /* 124e4a14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4a17 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4a18 call 0x124e72a0 */
  push32(0x124e4a1du); f_124e72a0();
  /* 124e4a1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4a20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4a23 push edx */
  push32((uint32_t)(EDX));
  /* 124e4a24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e4a27 push eax */
  push32((uint32_t)(EAX));
  /* 124e4a28 call 0x124e4d80 */
  push32(0x124e4a2du); f_124e4d80();
  /* 124e4a2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e4a30:;
  /* 124e4a30 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4a34 jne 0x124e4ab0 */
  if (!C.zf) goto L_124e4ab0;
  /* 124e4a36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4a3a jne 0x124e4a43 */
  if (!C.zf) goto L_124e4a43;
  /* 124e4a3c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_124e4a43:;
  /* 124e4a43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4a46 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4a49 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 124e4a4c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124e4a4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4a52 push edx */
  push32((uint32_t)(EDX));
  /* 124e4a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e4a55 mov eax, dword ptr [0x1250e56c] */
  EAX = (r32((uint32_t)(0x1250e56c)));
  /* 124e4a5a push eax */
  push32((uint32_t)(EAX));
  /* 124e4a5b call dword ptr [0x1250f344] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f344))), 0x124e4a61u);
  /* 124e4a61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e4a64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4a68 je 0x124e4ab0 */
  if (C.zf) goto L_124e4ab0;
  /* 124e4a6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4a6d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 124e4a70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4a73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e4a76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4a79 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4a7c jae 0x124e4a86 */
  if (!C.cf) goto L_124e4a86;
  /* 124e4a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4a81 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124e4a84 jmp 0x124e4a8c */
  goto L_124e4a8c;
L_124e4a86:;
  /* 124e4a86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4a89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_124e4a8c:;
  /* 124e4a8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e4a8f push eax */
  push32((uint32_t)(EAX));
  /* 124e4a90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4a93 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4a94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4a97 push edx */
  push32((uint32_t)(EDX));
  /* 124e4a98 call 0x124e72a0 */
  push32(0x124e4a9du); f_124e72a0();
  /* 124e4a9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4aa3 push eax */
  push32((uint32_t)(EAX));
  /* 124e4aa4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e4aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4aa8 call 0x124e4d80 */
  push32(0x124e4aadu); f_124e4d80();
  /* 124e4aad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e4ab0:;
  /* 124e4ab0 push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4ab2 call 0x124e4460 */
  push32(0x124e4ab7u); f_124e4460();
  /* 124e4ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4aba jmp 0x124e4af9 */
  goto L_124e4af9;
L_124e4abc:;
  /* 124e4abc push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4abe call 0x124e4460 */
  push32(0x124e4ac3u); f_124e4460();
  /* 124e4ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4ac6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4aca jne 0x124e4ad3 */
  if (!C.zf) goto L_124e4ad3;
  /* 124e4acc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_124e4ad3:;
  /* 124e4ad3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4ad6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4ad9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 124e4adc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 124e4adf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4ae2 push eax */
  push32((uint32_t)(EAX));
  /* 124e4ae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e4ae9 mov edx, dword ptr [0x1250e56c] */
  EDX = (r32((uint32_t)(0x1250e56c)));
  /* 124e4aef push edx */
  push32((uint32_t)(EDX));
  /* 124e4af0 call dword ptr [0x1250f34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f34c))), 0x124e4af6u);
  /* 124e4af6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124e4af9:;
  /* 124e4af9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4afd jne 0x124e4b08 */
  if (!C.zf) goto L_124e4b08;
  /* 124e4aff cmp dword ptr [0x1250cda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4b06 jne 0x124e4b0d */
  if (!C.zf) goto L_124e4b0d;
L_124e4b08:;
  /* 124e4b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4b0b jmp 0x124e4b26 */
  goto L_124e4b26;
L_124e4b0d:;
  /* 124e4b0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4b10 push eax */
  push32((uint32_t)(EAX));
  /* 124e4b11 call 0x124e4700 */
  push32(0x124e4b16u); f_124e4700();
  /* 124e4b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4b19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e4b1b jne 0x124e4b21 */
  if (!C.zf) goto L_124e4b21;
  /* 124e4b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e4b1f jmp 0x124e4b26 */
  goto L_124e4b26;
L_124e4b21:;
  /* 124e4b21 jmp 0x124e4976 */
  goto L_124e4976;
L_124e4b26:;
  /* 124e4b26 mov esp, ebp */
  ESP = (EBP);
  /* 124e4b28 pop ebp */
  EBP = (pop32());
  /* 124e4b29 ret  */
  ESPCHK(0x124e4940u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b30 @ 0x124e4b30 (104 bytes, 38 insns) */
void f_124e4b30(void) {
  FTRACE(0x124e4b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4b30 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4b31 mov ebp, esp */
  EBP = (ESP);
  /* 124e4b33 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4b34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4b38 jne 0x124e4b3c */
  if (!C.zf) goto L_124e4b3c;
  /* 124e4b3a jmp 0x124e4b94 */
  goto L_124e4b94;
L_124e4b3c:;
  /* 124e4b3c push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4b3e call 0x124e43c0 */
  push32(0x124e4b43u); f_124e43c0();
  /* 124e4b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4b49 push eax */
  push32((uint32_t)(EAX));
  /* 124e4b4a call 0x124e4cc0 */
  push32(0x124e4b4fu); f_124e4cc0();
  /* 124e4b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4b52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e4b55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4b59 je 0x124e4b77 */
  if (C.zf) goto L_124e4b77;
  /* 124e4b5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4b5e push ecx */
  push32((uint32_t)(ECX));
  /* 124e4b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4b62 push edx */
  push32((uint32_t)(EDX));
  /* 124e4b63 call 0x124e4d80 */
  push32(0x124e4b68u); f_124e4d80();
  /* 124e4b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4b6b push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4b6d call 0x124e4460 */
  push32(0x124e4b72u); f_124e4460();
  /* 124e4b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4b75 jmp 0x124e4b94 */
  goto L_124e4b94;
L_124e4b77:;
  /* 124e4b77 push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4b79 call 0x124e4460 */
  push32(0x124e4b7eu); f_124e4460();
  /* 124e4b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4b81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4b84 push eax */
  push32((uint32_t)(EAX));
  /* 124e4b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e4b87 mov ecx, dword ptr [0x1250e56c] */
  ECX = (r32((uint32_t)(0x1250e56c)));
  /* 124e4b8d push ecx */
  push32((uint32_t)(ECX));
  /* 124e4b8e call dword ptr [0x1250f370] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f370))), 0x124e4b94u);
L_124e4b94:;
  /* 124e4b94 mov esp, ebp */
  ESP = (EBP);
  /* 124e4b96 pop ebp */
  EBP = (pop32());
  /* 124e4b97 ret  */
  ESPCHK(0x124e4b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ba0 @ 0x124e4ba0 (116 bytes, 34 insns) */
void f_124e4ba0(void) {
  FTRACE(0x124e4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 124e4ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 124e4ba4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 124e4bab push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4bad call 0x124e43c0 */
  push32(0x124e4bb2u); f_124e43c0();
  /* 124e4bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4bb5 call 0x124e62b0 */
  push32(0x124e4bbau); f_124e62b0();
  /* 124e4bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e4bbc jge 0x124e4bc5 */
  if ((C.sf==C.of)) goto L_124e4bc5;
  /* 124e4bbe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_124e4bc5:;
  /* 124e4bc5 push 9 */
  push32((uint32_t)(0x9u));
  /* 124e4bc7 call 0x124e4460 */
  push32(0x124e4bccu); f_124e4460();
  /* 124e4bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 124e4bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e4bd3 mov eax, dword ptr [0x1250e56c] */
  EAX = (r32((uint32_t)(0x1250e56c)));
  /* 124e4bd8 push eax */
  push32((uint32_t)(EAX));
  /* 124e4bd9 call dword ptr [0x1250f384] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f384))), 0x124e4bdfu);
  /* 124e4bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e4be1 jne 0x124e4c0d */
  if (!C.zf) goto L_124e4c0d;
  /* 124e4be3 call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124e4be9u);
  /* 124e4be9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4bec jne 0x124e4c06 */
  if (!C.zf) goto L_124e4c06;
  /* 124e4bee call 0x124e88a0 */
  push32(0x124e4bf3u); f_124e88a0();
  /* 124e4bf3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 124e4bf9 call 0x124e8890 */
  push32(0x124e4bfeu); f_124e8890();
  /* 124e4bfe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 124e4c04 jmp 0x124e4c0d */
  goto L_124e4c0d;
L_124e4c06:;
  /* 124e4c06 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_124e4c0d:;
  /* 124e4c0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4c10 mov esp, ebp */
  ESP = (EBP);
  /* 124e4c12 pop ebp */
  EBP = (pop32());
  /* 124e4c13 ret  */
  ESPCHK(0x124e4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c20 @ 0x124e4c20 (10 bytes, 5 insns) */
void f_124e4c20(void) {
  FTRACE(0x124e4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4c21 mov ebp, esp */
  EBP = (ESP);
  /* 124e4c23 call 0x124e4ba0 */
  push32(0x124e4c28u); f_124e4ba0();
  /* 124e4c28 pop ebp */
  EBP = (pop32());
  /* 124e4c29 ret  */
  ESPCHK(0x124e4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c30 @ 0x124e4c30 (10 bytes, 5 insns) */
void f_124e4c30(void) {
  FTRACE(0x124e4c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4c30 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4c31 mov ebp, esp */
  EBP = (ESP);
  /* 124e4c33 mov eax, dword ptr [0x1250ac94] */
  EAX = (r32((uint32_t)(0x1250ac94)));
  /* 124e4c38 pop ebp */
  EBP = (pop32());
  /* 124e4c39 ret  */
  ESPCHK(0x124e4c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c40 @ 0x124e4c40 (31 bytes, 11 insns) */
void f_124e4c40(void) {
  FTRACE(0x124e4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4c41 mov ebp, esp */
  EBP = (ESP);
  /* 124e4c43 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4c4a jbe 0x124e4c50 */
  if ((C.cf||C.zf)) goto L_124e4c50;
  /* 124e4c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e4c4e jmp 0x124e4c5d */
  goto L_124e4c5d;
L_124e4c50:;
  /* 124e4c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4c53 mov dword ptr [0x1250ac94], eax */
  w32((uint32_t)(0x1250ac94), (EAX));
  /* 124e4c58 mov eax, 1 */
  EAX = (0x1u);
L_124e4c5d:;
  /* 124e4c5d pop ebp */
  EBP = (pop32());
  /* 124e4c5e ret  */
  ESPCHK(0x124e4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c60 @ 0x124e4c60 (89 bytes, 20 insns) */
void f_124e4c60(void) {
  FTRACE(0x124e4c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4c60 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4c61 mov ebp, esp */
  EBP = (ESP);
  /* 124e4c63 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 124e4c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e4c6a mov eax, dword ptr [0x1250e56c] */
  EAX = (r32((uint32_t)(0x1250e56c)));
  /* 124e4c6f push eax */
  push32((uint32_t)(EAX));
  /* 124e4c70 call dword ptr [0x1250f344] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f344))), 0x124e4c76u);
  /* 124e4c76 mov dword ptr [0x1250e568], eax */
  w32((uint32_t)(0x1250e568), (EAX));
  /* 124e4c7b cmp dword ptr [0x1250e568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4c82 jne 0x124e4c88 */
  if (!C.zf) goto L_124e4c88;
  /* 124e4c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e4c86 jmp 0x124e4cb7 */
  goto L_124e4cb7;
L_124e4c88:;
  /* 124e4c88 mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e4c8e mov dword ptr [0x1250e55c], ecx */
  w32((uint32_t)(0x1250e55c), (ECX));
  /* 124e4c94 mov dword ptr [0x1250e560], 0 */
  w32((uint32_t)(0x1250e560), (0x0u));
  /* 124e4c9e mov dword ptr [0x1250e564], 0 */
  w32((uint32_t)(0x1250e564), (0x0u));
  /* 124e4ca8 mov dword ptr [0x1250e548], 0x10 */
  w32((uint32_t)(0x1250e548), (0x10u));
  /* 124e4cb2 mov eax, 1 */
  EAX = (0x1u);
L_124e4cb7:;
  /* 124e4cb7 pop ebp */
  EBP = (pop32());
  /* 124e4cb8 ret  */
  ESPCHK(0x124e4c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cc0 @ 0x124e4cc0 (85 bytes, 29 insns) */
void f_124e4cc0(void) {
  FTRACE(0x124e4cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4cc1 mov ebp, esp */
  EBP = (ESP);
  /* 124e4cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4cc6 mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e4ccb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e4cce mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e4cd4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4cd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124e4cd9 mov edx, dword ptr [0x1250e568] */
  EDX = (r32((uint32_t)(0x1250e568)));
  /* 124e4cdf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124e4ce2:;
  /* 124e4ce2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4ce5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4ce8 jae 0x124e4d0f */
  if (!C.cf) goto L_124e4d0f;
  /* 124e4cea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4ced mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4cf0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4cf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e4cf6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4cfd jae 0x124e4d04 */
  if (!C.cf) goto L_124e4d04;
  /* 124e4cff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4d02 jmp 0x124e4d11 */
  goto L_124e4d11;
L_124e4d04:;
  /* 124e4d04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4d07 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4d0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e4d0d jmp 0x124e4ce2 */
  goto L_124e4ce2;
L_124e4d0f:;
  /* 124e4d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124e4d11:;
  /* 124e4d11 mov esp, ebp */
  ESP = (EBP);
  /* 124e4d13 pop ebp */
  EBP = (pop32());
  /* 124e4d14 ret  */
  ESPCHK(0x124e4cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d20 @ 0x124e4d20 (95 bytes, 33 insns) */
void f_124e4d20(void) {
  FTRACE(0x124e4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4d21 mov ebp, esp */
  EBP = (ESP);
  /* 124e4d23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4d2c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4d2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e4d32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4d35 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 124e4d38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e4d3b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e4d40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4d43 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e4d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4d48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e4d4b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e4d4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e4d4f jne 0x124e4d71 */
  if (!C.zf) goto L_124e4d71;
  /* 124e4d51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4d54 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 124e4d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e4d59 jne 0x124e4d71 */
  if (!C.zf) goto L_124e4d71;
  /* 124e4d5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e4d5e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 124e4d64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e4d66 je 0x124e4d71 */
  if (C.zf) goto L_124e4d71;
  /* 124e4d68 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 124e4d6f jmp 0x124e4d78 */
  goto L_124e4d78;
L_124e4d71:;
  /* 124e4d71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_124e4d78:;
  /* 124e4d78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e4d7b mov esp, ebp */
  ESP = (EBP);
  /* 124e4d7d pop ebp */
  EBP = (pop32());
  /* 124e4d7e ret  */
  ESPCHK(0x124e4d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d80 @ 0x124e4d80 (1485 bytes, 453 insns) */
void f_124e4d80(void) {
  FTRACE(0x124e4d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e4d80 push ebp */
  push32((uint32_t)(EBP));
  /* 124e4d81 mov ebp, esp */
  EBP = (ESP);
  /* 124e4d83 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4d89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e4d8c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 124e4d8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4d92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4d95 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4d98 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124e4d9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e4d9e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 124e4da1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e4da4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4da7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e4dad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4db0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 124e4db7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e4dba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e4dbd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4dc0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 124e4dc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e4dc6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e4dc8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4dcb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 124e4dce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e4dd1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4dd4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 124e4dd7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4dda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e4ddc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124e4ddf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e4de2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 124e4de5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124e4de8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e4deb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e4dee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e4df0 jne 0x124e4f18 */
  if (!C.zf) goto L_124e4f18;
  /* 124e4df6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e4df9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 124e4dfc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4dff mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 124e4e02 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4e06 jbe 0x124e4e0f */
  if ((C.cf||C.zf)) goto L_124e4e0f;
  /* 124e4e08 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_124e4e0f:;
  /* 124e4e0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4e12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4e15 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e4e18 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4e1b jne 0x124e4ef1 */
  if (!C.zf) goto L_124e4ef1;
  /* 124e4e21 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4e25 jae 0x124e4e86 */
  if (!C.cf) goto L_124e4e86;
  /* 124e4e27 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e4e2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e4e2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e4e31 not eax */
  EAX = (~(EAX));
  /* 124e4e33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4e36 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4e39 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 124e4e3d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e4e3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4e42 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4e45 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 124e4e49 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4e4c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4e4f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 124e4e52 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e4e55 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4e58 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4e5b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 124e4e5e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4e61 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4e64 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e4e68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e4e6a jne 0x124e4e84 */
  if (!C.zf) goto L_124e4e84;
  /* 124e4e6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e4e71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e4e74 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e4e76 not eax */
  EAX = (~(EAX));
  /* 124e4e78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4e7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e4e7d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e4e7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4e82 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124e4e84:;
  /* 124e4e84 jmp 0x124e4ef1 */
  goto L_124e4ef1;
L_124e4e86:;
  /* 124e4e86 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e4e89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4e8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e4e91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e4e93 not edx */
  EDX = (~(EDX));
  /* 124e4e95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4e98 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4e9b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 124e4ea2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e4ea4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4ea7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4eaa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 124e4eb1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4eb4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4eb7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e4eba sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e4ebd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4ec0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4ec3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 124e4ec6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4ec9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4ecc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e4ed0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e4ed2 jne 0x124e4ef1 */
  if (!C.zf) goto L_124e4ef1;
  /* 124e4ed4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e4ed7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4eda mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e4edf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e4ee1 not edx */
  EDX = (~(EDX));
  /* 124e4ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4ee6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e4ee9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e4eeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4eee mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_124e4ef1:;
  /* 124e4ef1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4ef4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e4ef7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4efa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e4efd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 124e4f00 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4f03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e4f06 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e4f09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e4f0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e4f0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e4f12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4f15 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_124e4f18:;
  /* 124e4f18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e4f1b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 124e4f1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4f21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e4f24 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4f28 jbe 0x124e4f31 */
  if ((C.cf||C.zf)) goto L_124e4f31;
  /* 124e4f2a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_124e4f31:;
  /* 124e4f31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e4f34 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e4f37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e4f39 jne 0x124e5095 */
  if (!C.zf) goto L_124e5095;
  /* 124e4f3f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e4f42 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4f45 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 124e4f48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e4f4b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 124e4f4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4f51 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 124e4f54 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4f58 jbe 0x124e4f61 */
  if ((C.cf||C.zf)) goto L_124e4f61;
  /* 124e4f5a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_124e4f61:;
  /* 124e4f61 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e4f64 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4f67 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 124e4f6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e4f6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 124e4f70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e4f73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 124e4f76 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4f7a jbe 0x124e4f83 */
  if ((C.cf||C.zf)) goto L_124e4f83;
  /* 124e4f7c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_124e4f83:;
  /* 124e4f83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e4f86 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4f89 je 0x124e508f */
  if (C.zf) goto L_124e508f;
  /* 124e4f8f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e4f92 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e4f95 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e4f98 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4f9b jne 0x124e5071 */
  if (!C.zf) goto L_124e5071;
  /* 124e4fa1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e4fa5 jae 0x124e5006 */
  if (!C.cf) goto L_124e5006;
  /* 124e4fa7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e4fac mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e4faf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e4fb1 not edx */
  EDX = (~(EDX));
  /* 124e4fb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4fb6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4fb9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 124e4fbd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e4fbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e4fc2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4fc5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 124e4fc9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4fcc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4fcf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e4fd2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e4fd5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4fd8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4fdb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 124e4fde mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e4fe1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e4fe4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e4fe8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e4fea jne 0x124e5004 */
  if (!C.zf) goto L_124e5004;
  /* 124e4fec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e4ff1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e4ff4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e4ff6 not edx */
  EDX = (~(EDX));
  /* 124e4ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e4ffb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e4ffd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e4fff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5002 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124e5004:;
  /* 124e5004 jmp 0x124e5071 */
  goto L_124e5071;
L_124e5006:;
  /* 124e5006 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5009 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e500c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5011 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5013 not eax */
  EAX = (~(EAX));
  /* 124e5015 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5018 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e501b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 124e5022 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5027 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e502a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 124e5031 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5034 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5037 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 124e503a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e503d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5040 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5043 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 124e5046 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5049 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e504c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5050 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5052 jne 0x124e5071 */
  if (!C.zf) goto L_124e5071;
  /* 124e5054 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5057 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e505a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e505f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5061 not eax */
  EAX = (~(EAX));
  /* 124e5063 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5066 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5069 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e506b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e506e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_124e5071:;
  /* 124e5071 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5074 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e5077 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e507a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e507d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124e5080 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5083 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e5086 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5089 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e508c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_124e508f:;
  /* 124e508f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5092 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_124e5095:;
  /* 124e5095 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5098 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e509b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e509d jne 0x124e50ab */
  if (!C.zf) goto L_124e50ab;
  /* 124e509f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e50a2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e50a5 je 0x124e51bb */
  if (C.zf) goto L_124e51bb;
L_124e50ab:;
  /* 124e50ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e50ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e50b1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 124e50b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124e50b7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e50bd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e50c0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124e50c3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e50c9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 124e50cc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e50cf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50d2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 124e50d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e50db mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124e50e1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e50e7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e50ea cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e50ed jne 0x124e51bb */
  if (!C.zf) goto L_124e51bb;
  /* 124e50f3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e50f7 jae 0x124e5154 */
  if (!C.cf) goto L_124e5154;
  /* 124e50f9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e50fc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e50ff movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5103 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5106 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5109 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e510c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e510f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5112 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5115 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 124e5118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e511a jne 0x124e5132 */
  if (!C.zf) goto L_124e5132;
  /* 124e511c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5121 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5124 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5129 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e512b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e512d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5130 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124e5132:;
  /* 124e5132 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5137 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e513a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e513c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e513f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5142 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 124e5146 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5148 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e514b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e514e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 124e5152 jmp 0x124e51bb */
  goto L_124e51bb;
L_124e5154:;
  /* 124e5154 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5157 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e515a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e515e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e5161 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5164 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e5167 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e516a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e516d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5170 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 124e5173 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5175 jne 0x124e5192 */
  if (!C.zf) goto L_124e5192;
  /* 124e5177 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e517a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e517d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5182 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5187 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e518a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e518c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e518f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_124e5192:;
  /* 124e5192 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5195 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5198 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e519d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e519f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e51a2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e51a5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 124e51ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e51ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e51b1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 124e51b4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_124e51bb:;
  /* 124e51bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e51be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e51c1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 124e51c3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e51c6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e51c9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e51cc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 124e51cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e51d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e51d4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e51d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e51da mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124e51dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e51df cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e51e2 jne 0x124e5349 */
  if (!C.zf) goto L_124e5349;
  /* 124e51e8 cmp dword ptr [0x1250e560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e51ef je 0x124e5338 */
  if (C.zf) goto L_124e5338;
  /* 124e51f5 mov eax, dword ptr [0x1250e558] */
  EAX = (r32((uint32_t)(0x1250e558)));
  /* 124e51fa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 124e51fd mov ecx, dword ptr [0x1250e560] */
  ECX = (r32((uint32_t)(0x1250e560)));
  /* 124e5203 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e5206 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5208 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124e520b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 124e5210 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 124e5215 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5218 push eax */
  push32((uint32_t)(EAX));
  /* 124e5219 call dword ptr [0x1250f360] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f360))), 0x124e521fu);
  /* 124e521f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5224 mov ecx, dword ptr [0x1250e558] */
  ECX = (r32((uint32_t)(0x1250e558)));
  /* 124e522a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e522c mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e5231 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e5234 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5236 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e523c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e523f mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e5244 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e5247 mov edx, dword ptr [0x1250e558] */
  EDX = (r32((uint32_t)(0x1250e558)));
  /* 124e524d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 124e5258 mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e525d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e5260 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 124e5263 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e5266 mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e526b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e526e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 124e5271 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e5277 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124e527a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 124e527e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e5280 jne 0x124e5296 */
  if (!C.zf) goto L_124e5296;
  /* 124e5282 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e5288 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e528b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 124e528d mov ecx, dword ptr [0x1250e560] */
  ECX = (r32((uint32_t)(0x1250e560)));
  /* 124e5293 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_124e5296:;
  /* 124e5296 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e529c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e52a0 jne 0x124e5338 */
  if (!C.zf) goto L_124e5338;
  /* 124e52a6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 124e52ab push 0 */
  push32((uint32_t)(0x0u));
  /* 124e52ad mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e52b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124e52b5 push ecx */
  push32((uint32_t)(ECX));
  /* 124e52b6 call dword ptr [0x1250f360] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f360))), 0x124e52bcu);
  /* 124e52bc mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e52c2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124e52c5 push eax */
  push32((uint32_t)(EAX));
  /* 124e52c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e52c8 mov ecx, dword ptr [0x1250e56c] */
  ECX = (r32((uint32_t)(0x1250e56c)));
  /* 124e52ce push ecx */
  push32((uint32_t)(ECX));
  /* 124e52cf call dword ptr [0x1250f370] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f370))), 0x124e52d5u);
  /* 124e52d5 mov edx, dword ptr [0x1250e564] */
  EDX = (r32((uint32_t)(0x1250e564)));
  /* 124e52db imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e52de mov eax, dword ptr [0x1250e568] */
  EAX = (r32((uint32_t)(0x1250e568)));
  /* 124e52e3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e52e5 mov ecx, dword ptr [0x1250e560] */
  ECX = (r32((uint32_t)(0x1250e560)));
  /* 124e52eb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e52ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e52f0 push eax */
  push32((uint32_t)(EAX));
  /* 124e52f1 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e52f7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e52fa push edx */
  push32((uint32_t)(EDX));
  /* 124e52fb mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e5300 push eax */
  push32((uint32_t)(EAX));
  /* 124e5301 call 0x124e88b0 */
  push32(0x124e5306u); f_124e88b0();
  /* 124e5306 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5309 mov ecx, dword ptr [0x1250e564] */
  ECX = (r32((uint32_t)(0x1250e564)));
  /* 124e530f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5312 mov dword ptr [0x1250e564], ecx */
  w32((uint32_t)(0x1250e564), (ECX));
  /* 124e5318 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e531b cmp edx, dword ptr [0x1250e560] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1250e560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5321 jbe 0x124e532c */
  if ((C.cf||C.zf)) goto L_124e532c;
  /* 124e5323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5326 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5329 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124e532c:;
  /* 124e532c mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e5332 mov dword ptr [0x1250e55c], ecx */
  w32((uint32_t)(0x1250e55c), (ECX));
L_124e5338:;
  /* 124e5338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e533b mov dword ptr [0x1250e560], edx */
  w32((uint32_t)(0x1250e560), (EDX));
  /* 124e5341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5344 mov dword ptr [0x1250e558], eax */
  w32((uint32_t)(0x1250e558), (EAX));
L_124e5349:;
  /* 124e5349 mov esp, ebp */
  ESP = (EBP);
  /* 124e534b pop ebp */
  EBP = (pop32());
  /* 124e534c ret  */
  ESPCHK(0x124e4d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015350 @ 0x124e5350 (1334 bytes, 427 insns) */
void f_124e5350(void) {
  FTRACE(0x124e5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e5350 push ebp */
  push32((uint32_t)(EBP));
  /* 124e5351 mov ebp, esp */
  EBP = (ESP);
  /* 124e5353 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5356 push esi */
  push32((uint32_t)(ESI));
  /* 124e5357 mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e535c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e535f mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e5365 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5367 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124e536a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e536d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5370 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 124e5373 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 124e5376 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5379 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 124e537c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e537f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e5382 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5386 jge 0x124e539c */
  if ((C.sf==C.of)) goto L_124e539c;
  /* 124e5388 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124e538b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e538e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5390 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 124e5393 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 124e539a jmp 0x124e53b1 */
  goto L_124e53b1;
L_124e539c:;
  /* 124e539c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124e53a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e53a6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e53a9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e53ac shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e53ae mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_124e53b1:;
  /* 124e53b1 mov ecx, dword ptr [0x1250e55c] */
  ECX = (r32((uint32_t)(0x1250e55c)));
  /* 124e53b7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_124e53ba:;
  /* 124e53ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e53bd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e53c0 jae 0x124e53e6 */
  if (!C.cf) goto L_124e53e6;
  /* 124e53c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e53c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e53c8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 124e53ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e53cd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e53d0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 124e53d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e53d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e53d7 je 0x124e53db */
  if (C.zf) goto L_124e53db;
  /* 124e53d9 jmp 0x124e53e6 */
  goto L_124e53e6;
L_124e53db:;
  /* 124e53db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e53de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e53e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124e53e4 jmp 0x124e53ba */
  goto L_124e53ba;
L_124e53e6:;
  /* 124e53e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e53e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e53ec jne 0x124e54cd */
  if (!C.zf) goto L_124e54cd;
  /* 124e53f2 mov eax, dword ptr [0x1250e568] */
  EAX = (r32((uint32_t)(0x1250e568)));
  /* 124e53f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_124e53fa:;
  /* 124e53fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e53fd cmp ecx, dword ptr [0x1250e55c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e55c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5403 jae 0x124e5429 */
  if (!C.cf) goto L_124e5429;
  /* 124e5405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5408 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e540b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 124e540d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5410 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5413 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 124e5416 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e5418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e541a je 0x124e541e */
  if (C.zf) goto L_124e541e;
  /* 124e541c jmp 0x124e5429 */
  goto L_124e5429;
L_124e541e:;
  /* 124e541e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5421 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5424 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e5427 jmp 0x124e53fa */
  goto L_124e53fa;
L_124e5429:;
  /* 124e5429 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e542c cmp ecx, dword ptr [0x1250e55c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e55c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5432 jne 0x124e54cd */
  if (!C.zf) goto L_124e54cd;
L_124e5438:;
  /* 124e5438 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e543b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e543e jae 0x124e5456 */
  if (!C.cf) goto L_124e5456;
  /* 124e5440 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5443 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5447 je 0x124e544b */
  if (C.zf) goto L_124e544b;
  /* 124e5449 jmp 0x124e5456 */
  goto L_124e5456;
L_124e544b:;
  /* 124e544b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e544e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5451 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124e5454 jmp 0x124e5438 */
  goto L_124e5438;
L_124e5456:;
  /* 124e5456 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5459 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e545c jne 0x124e54a7 */
  if (!C.zf) goto L_124e54a7;
  /* 124e545e mov eax, dword ptr [0x1250e568] */
  EAX = (r32((uint32_t)(0x1250e568)));
  /* 124e5463 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_124e5466:;
  /* 124e5466 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5469 cmp ecx, dword ptr [0x1250e55c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e55c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e546f jae 0x124e5487 */
  if (!C.cf) goto L_124e5487;
  /* 124e5471 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5474 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5478 je 0x124e547c */
  if (C.zf) goto L_124e547c;
  /* 124e547a jmp 0x124e5487 */
  goto L_124e5487;
L_124e547c:;
  /* 124e547c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e547f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5482 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e5485 jmp 0x124e5466 */
  goto L_124e5466;
L_124e5487:;
  /* 124e5487 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e548a cmp ecx, dword ptr [0x1250e55c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e55c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5490 jne 0x124e54a7 */
  if (!C.zf) goto L_124e54a7;
  /* 124e5492 call 0x124e5890 */
  push32(0x124e5497u); f_124e5890();
  /* 124e5497 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e549a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e549e jne 0x124e54a7 */
  if (!C.zf) goto L_124e54a7;
  /* 124e54a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e54a2 jmp 0x124e5881 */
  goto L_124e5881;
L_124e54a7:;
  /* 124e54a7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e54aa push edx */
  push32((uint32_t)(EDX));
  /* 124e54ab call 0x124e59a0 */
  push32(0x124e54b0u); f_124e59a0();
  /* 124e54b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e54b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e54b6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124e54b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124e54bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e54be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e54c1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e54c4 jne 0x124e54cd */
  if (!C.zf) goto L_124e54cd;
  /* 124e54c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e54c8 jmp 0x124e5881 */
  goto L_124e5881;
L_124e54cd:;
  /* 124e54cd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e54d0 mov dword ptr [0x1250e55c], edx */
  w32((uint32_t)(0x1250e55c), (EDX));
  /* 124e54d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e54d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e54dc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 124e54df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e54e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e54e4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 124e54e7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e54eb je 0x124e5510 */
  if (C.zf) goto L_124e5510;
  /* 124e54ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e54f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e54f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e54f6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 124e54fa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e54fd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5500 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5503 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 124e550a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 124e550c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e550e jne 0x124e5545 */
  if (!C.zf) goto L_124e5545;
L_124e5510:;
  /* 124e5510 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_124e5517:;
  /* 124e5517 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e551a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e551d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e5520 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 124e5524 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5527 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e552a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 124e552d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 124e5534 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 124e5536 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5538 jne 0x124e5545 */
  if (!C.zf) goto L_124e5545;
  /* 124e553a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e553d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5540 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 124e5543 jmp 0x124e5517 */
  goto L_124e5517;
L_124e5545:;
  /* 124e5545 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5548 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e554e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5551 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 124e5558 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e555b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124e5562 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5565 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5568 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e556b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 124e556f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 124e5572 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5576 jne 0x124e5592 */
  if (!C.zf) goto L_124e5592;
  /* 124e5578 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 124e557f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5582 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5585 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e5588 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 124e558f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_124e5592:;
  /* 124e5592 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5596 jl 0x124e55ab */
  if ((C.sf!=C.of)) goto L_124e55ab;
  /* 124e5598 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e559b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124e559d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124e55a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e55a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e55a6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124e55a9 jmp 0x124e5592 */
  goto L_124e5592;
L_124e55ab:;
  /* 124e55ab mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e55ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e55b1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 124e55b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124e55b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e55bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e55bd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e55c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e55c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e55c6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 124e55c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e55cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124e55cf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e55d3 jle 0x124e55dc */
  if ((C.zf||C.sf!=C.of)) goto L_124e55dc;
  /* 124e55d5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_124e55dc:;
  /* 124e55dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e55df cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e55e2 je 0x124e5800 */
  if (C.zf) goto L_124e5800;
  /* 124e55e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e55eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e55ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e55f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e55f4 jne 0x124e56ca */
  if (!C.zf) goto L_124e56ca;
  /* 124e55fa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e55fe jge 0x124e565f */
  if ((C.sf==C.of)) goto L_124e565f;
  /* 124e5600 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5605 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5608 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e560a not eax */
  EAX = (~(EAX));
  /* 124e560c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e560f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5612 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 124e5616 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5618 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e561b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e561e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 124e5622 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5625 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5628 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 124e562b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e562e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5631 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5634 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 124e5637 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e563a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e563d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5641 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5643 jne 0x124e565d */
  if (!C.zf) goto L_124e565d;
  /* 124e5645 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e564a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e564d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e564f not eax */
  EAX = (~(EAX));
  /* 124e5651 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5654 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e5656 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e5658 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e565b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124e565d:;
  /* 124e565d jmp 0x124e56ca */
  goto L_124e56ca;
L_124e565f:;
  /* 124e565f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5662 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5665 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e566a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e566c not edx */
  EDX = (~(EDX));
  /* 124e566e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5671 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5674 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 124e567b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e567d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5680 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5683 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 124e568a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e568d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5690 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e5693 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e5696 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5699 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e569c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 124e569f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e56a2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e56a5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e56a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e56ab jne 0x124e56ca */
  if (!C.zf) goto L_124e56ca;
  /* 124e56ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e56b0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e56b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e56b8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e56ba not edx */
  EDX = (~(EDX));
  /* 124e56bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e56bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e56c2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e56c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e56c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_124e56ca:;
  /* 124e56ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e56cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e56d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e56d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e56d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 124e56d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e56dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e56df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e56e2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e56e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e56e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e56ec je 0x124e5800 */
  if (C.zf) goto L_124e5800;
  /* 124e56f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e56f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e56f8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 124e56fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124e56fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5701 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5704 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e5707 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124e570a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e570d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5710 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124e5713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5716 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5719 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 124e571c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e571f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e5722 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5725 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 124e5728 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e572b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e572e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e5731 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5734 jne 0x124e5800 */
  if (!C.zf) goto L_124e5800;
  /* 124e573a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e573e jge 0x124e579a */
  if ((C.sf==C.of)) goto L_124e579a;
  /* 124e5740 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5743 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5746 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e574a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e574d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5750 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 124e5753 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e5755 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5758 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e575b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 124e575e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e5760 jne 0x124e5778 */
  if (!C.zf) goto L_124e5778;
  /* 124e5762 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5767 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e576a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e576c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e576f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e5771 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e5773 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5776 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124e5778:;
  /* 124e5778 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e577d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5780 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5782 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5785 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5788 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 124e578c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e578e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5791 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5794 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 124e5798 jmp 0x124e5800 */
  goto L_124e5800;
L_124e579a:;
  /* 124e579a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e579d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e57a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e57a4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e57a7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e57aa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 124e57ad add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e57af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e57b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e57b5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 124e57b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e57ba jne 0x124e57d7 */
  if (!C.zf) goto L_124e57d7;
  /* 124e57bc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e57bf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e57c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e57c7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e57c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e57cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e57cf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e57d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e57d4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_124e57d7:;
  /* 124e57d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e57da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e57dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e57e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e57e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e57e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e57ea mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 124e57f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e57f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e57f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e57f9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_124e5800:;
  /* 124e5800 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5804 je 0x124e581a */
  if (C.zf) goto L_124e581a;
  /* 124e5806 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e580c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124e580e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5811 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5814 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e5817 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_124e581a:;
  /* 124e581a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e581d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5820 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124e5823 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5826 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5829 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e582c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124e582e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5831 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5834 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5837 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e583a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 124e583d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5840 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e5842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5845 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e5847 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e584a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e584d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124e584f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e5851 jne 0x124e5873 */
  if (!C.zf) goto L_124e5873;
  /* 124e5853 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5856 cmp eax, dword ptr [0x1250e560] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e585c jne 0x124e5873 */
  if (!C.zf) goto L_124e5873;
  /* 124e585e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5861 cmp ecx, dword ptr [0x1250e558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5867 jne 0x124e5873 */
  if (!C.zf) goto L_124e5873;
  /* 124e5869 mov dword ptr [0x1250e560], 0 */
  w32((uint32_t)(0x1250e560), (0x0u));
L_124e5873:;
  /* 124e5873 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 124e5876 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5879 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124e587b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e587e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_124e5881:;
  /* 124e5881 pop esi */
  ESI = (pop32());
  /* 124e5882 mov esp, ebp */
  ESP = (EBP);
  /* 124e5884 pop ebp */
  EBP = (pop32());
  /* 124e5885 ret  */
  ESPCHK(0x124e5350u, _esp0);
  ESP += 4; return;
}

/* FUN_10015890 @ 0x124e5890 (271 bytes, 78 insns) */
void f_124e5890(void) {
  FTRACE(0x124e5890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e5890 push ebp */
  push32((uint32_t)(EBP));
  /* 124e5891 mov ebp, esp */
  EBP = (ESP);
  /* 124e5893 push ecx */
  push32((uint32_t)(ECX));
  /* 124e5894 mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e5899 cmp eax, dword ptr [0x1250e548] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e548))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e589f jne 0x124e58eb */
  if (!C.zf) goto L_124e58eb;
  /* 124e58a1 mov ecx, dword ptr [0x1250e548] */
  ECX = (r32((uint32_t)(0x1250e548)));
  /* 124e58a7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e58aa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e58ad push ecx */
  push32((uint32_t)(ECX));
  /* 124e58ae mov edx, dword ptr [0x1250e568] */
  EDX = (r32((uint32_t)(0x1250e568)));
  /* 124e58b4 push edx */
  push32((uint32_t)(EDX));
  /* 124e58b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e58b7 mov eax, dword ptr [0x1250e56c] */
  EAX = (r32((uint32_t)(0x1250e56c)));
  /* 124e58bc push eax */
  push32((uint32_t)(EAX));
  /* 124e58bd call dword ptr [0x1250f34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f34c))), 0x124e58c3u);
  /* 124e58c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e58c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e58ca jne 0x124e58d3 */
  if (!C.zf) goto L_124e58d3;
  /* 124e58cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e58ce jmp 0x124e599b */
  goto L_124e599b;
L_124e58d3:;
  /* 124e58d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e58d6 mov dword ptr [0x1250e568], ecx */
  w32((uint32_t)(0x1250e568), (ECX));
  /* 124e58dc mov edx, dword ptr [0x1250e548] */
  EDX = (r32((uint32_t)(0x1250e548)));
  /* 124e58e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e58e5 mov dword ptr [0x1250e548], edx */
  w32((uint32_t)(0x1250e548), (EDX));
L_124e58eb:;
  /* 124e58eb mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e58f0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e58f3 mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e58f9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e58fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e58fe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 124e5903 push 8 */
  push32((uint32_t)(0x8u));
  /* 124e5905 mov edx, dword ptr [0x1250e56c] */
  EDX = (r32((uint32_t)(0x1250e56c)));
  /* 124e590b push edx */
  push32((uint32_t)(EDX));
  /* 124e590c call dword ptr [0x1250f344] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f344))), 0x124e5912u);
  /* 124e5912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5915 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 124e5918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e591b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e591f jne 0x124e5925 */
  if (!C.zf) goto L_124e5925;
  /* 124e5921 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e5923 jmp 0x124e599b */
  goto L_124e599b;
L_124e5925:;
  /* 124e5925 push 4 */
  push32((uint32_t)(0x4u));
  /* 124e5927 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 124e592c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 124e5931 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e5933 call dword ptr [0x1250f33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f33c))), 0x124e5939u);
  /* 124e5939 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e593c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 124e593f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5942 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5946 jne 0x124e5962 */
  if (!C.zf) goto L_124e5962;
  /* 124e5948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e594b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e594e push ecx */
  push32((uint32_t)(ECX));
  /* 124e594f push 0 */
  push32((uint32_t)(0x0u));
  /* 124e5951 mov edx, dword ptr [0x1250e56c] */
  EDX = (r32((uint32_t)(0x1250e56c)));
  /* 124e5957 push edx */
  push32((uint32_t)(EDX));
  /* 124e5958 call dword ptr [0x1250f370] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f370))), 0x124e595eu);
  /* 124e595e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e5960 jmp 0x124e599b */
  goto L_124e599b;
L_124e5962:;
  /* 124e5962 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5965 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e596b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e596e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 124e5975 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5978 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 124e597f mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e5984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5987 mov dword ptr [0x1250e564], eax */
  w32((uint32_t)(0x1250e564), (EAX));
  /* 124e598c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e598f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124e5992 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 124e5998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124e599b:;
  /* 124e599b mov esp, ebp */
  ESP = (EBP);
  /* 124e599d pop ebp */
  EBP = (pop32());
  /* 124e599e ret  */
  ESPCHK(0x124e5890u, _esp0);
  ESP += 4; return;
}

/* FUN_100159a0 @ 0x124e59a0 (494 bytes, 149 insns) */
void f_124e59a0(void) {
  FTRACE(0x124e59a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e59a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e59a1 mov ebp, esp */
  EBP = (ESP);
  /* 124e59a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e59a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e59a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e59ac mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124e59af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e59b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e59b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e59b8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_124e59bf:;
  /* 124e59bf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e59c3 jl 0x124e59d8 */
  if ((C.sf!=C.of)) goto L_124e59d8;
  /* 124e59c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e59c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 124e59ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e59cd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e59d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e59d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 124e59d6 jmp 0x124e59bf */
  goto L_124e59bf;
L_124e59d8:;
  /* 124e59d8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e59db imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e59e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e59e4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 124e59eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124e59ee mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124e59f5 jmp 0x124e5a00 */
  goto L_124e5a00;
L_124e59f7:;
  /* 124e59f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e59fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e59fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_124e5a00:;
  /* 124e5a00 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5a04 jge 0x124e5a26 */
  if ((C.sf==C.of)) goto L_124e5a26;
  /* 124e5a06 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5a09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5a0c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 124e5a0f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e5a12 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5a15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5a18 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 124e5a1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5a1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5a21 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 124e5a24 jmp 0x124e59f7 */
  goto L_124e59f7;
L_124e5a26:;
  /* 124e5a26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5a29 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 124e5a2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5a2f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124e5a32 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5a34 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124e5a37 push 4 */
  push32((uint32_t)(0x4u));
  /* 124e5a39 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 124e5a3e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 124e5a43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5a46 push edx */
  push32((uint32_t)(EDX));
  /* 124e5a47 call dword ptr [0x1250f33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f33c))), 0x124e5a4du);
  /* 124e5a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e5a4f jne 0x124e5a59 */
  if (!C.zf) goto L_124e5a59;
  /* 124e5a51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e5a54 jmp 0x124e5b8a */
  goto L_124e5b8a;
L_124e5a59:;
  /* 124e5a59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5a5c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5a61 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124e5a64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5a67 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e5a6a jmp 0x124e5a78 */
  goto L_124e5a78;
L_124e5a6c:;
  /* 124e5a6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5a6f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5a75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e5a78:;
  /* 124e5a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5a7b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5a7e ja 0x124e5add */
  if ((!C.cf&&!C.zf)) goto L_124e5add;
  /* 124e5a80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5a83 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 124e5a8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5a8d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 124e5a97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5a9a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5a9d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e5aa0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5aa3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 124e5aa9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5aac add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ab2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5ab5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124e5ab8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5abb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5ac1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5ac4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e5ac7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5aca add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5acf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124e5ad2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e5ad5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 124e5adb jmp 0x124e5a6c */
  goto L_124e5a6c;
L_124e5add:;
  /* 124e5add mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5ae0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ae6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124e5ae9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5aec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5aef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5af2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 124e5af5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5af8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e5afb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e5afe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5b01 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5b04 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 124e5b07 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5b0a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5b0d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5b10 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 124e5b13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5b16 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e5b19 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e5b1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5b1f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5b22 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 124e5b25 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5b28 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5b2b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 124e5b33 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5b36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5b39 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 124e5b44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5b47 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 124e5b4b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5b4e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 124e5b51 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e5b54 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5b57 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 124e5b5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5b5c jne 0x124e5b6d */
  if (!C.zf) goto L_124e5b6d;
  /* 124e5b5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5b61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5b64 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e5b67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5b6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_124e5b6d:;
  /* 124e5b6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5b72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5b75 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5b77 not edx */
  EDX = (~(EDX));
  /* 124e5b79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5b7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e5b7f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5b84 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e5b87 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_124e5b8a:;
  /* 124e5b8a mov esp, ebp */
  ESP = (EBP);
  /* 124e5b8c pop ebp */
  EBP = (pop32());
  /* 124e5b8d ret  */
  ESPCHK(0x124e59a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b90 @ 0x124e5b90 (1515 bytes, 489 insns) */
void f_124e5b90(void) {
  FTRACE(0x124e5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 124e5b91 mov ebp, esp */
  EBP = (ESP);
  /* 124e5b93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5b96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e5b99 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5b9c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 124e5b9e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124e5ba1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5ba4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124e5ba7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 124e5baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5bad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e5bb0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5bb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124e5bb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e5bb9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 124e5bbc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e5bbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5bc2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e5bc8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5bcb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 124e5bd2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124e5bd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e5bd8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5bdb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124e5bde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5be1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e5be3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5be6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 124e5be9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5bec add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5bef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 124e5bf2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5bf5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e5bf7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124e5bfa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5bfd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5c00 jle 0x124e5eb6 */
  if ((C.zf||C.sf!=C.of)) goto L_124e5eb6;
  /* 124e5c06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5c09 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e5c0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e5c0e jne 0x124e5c1b */
  if (!C.zf) goto L_124e5c1b;
  /* 124e5c10 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5c13 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5c16 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5c19 jle 0x124e5c22 */
  if ((C.zf||C.sf!=C.of)) goto L_124e5c22;
L_124e5c1b:;
  /* 124e5c1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e5c1d jmp 0x124e6177 */
  goto L_124e6177;
L_124e5c22:;
  /* 124e5c22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5c25 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 124e5c28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5c2b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e5c2e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5c32 jbe 0x124e5c3b */
  if ((C.cf||C.zf)) goto L_124e5c3b;
  /* 124e5c34 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_124e5c3b:;
  /* 124e5c3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5c3e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5c41 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5c44 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5c47 jne 0x124e5d1d */
  if (!C.zf) goto L_124e5d1d;
  /* 124e5c4d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5c51 jae 0x124e5cb2 */
  if (!C.cf) goto L_124e5cb2;
  /* 124e5c53 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5c58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5c5b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5c5d not edx */
  EDX = (~(EDX));
  /* 124e5c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5c62 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5c65 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 124e5c69 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e5c6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5c6e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5c71 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 124e5c75 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5c78 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5c7b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e5c7e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e5c81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5c84 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5c87 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 124e5c8a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5c8d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5c90 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e5c94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e5c96 jne 0x124e5cb0 */
  if (!C.zf) goto L_124e5cb0;
  /* 124e5c98 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5c9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5ca0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5ca2 not edx */
  EDX = (~(EDX));
  /* 124e5ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5ca7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e5ca9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5cab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5cae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124e5cb0:;
  /* 124e5cb0 jmp 0x124e5d1d */
  goto L_124e5d1d;
L_124e5cb2:;
  /* 124e5cb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5cb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5cb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5cbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5cbf not eax */
  EAX = (~(EAX));
  /* 124e5cc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5cc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5cc7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 124e5cce and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5cd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5cd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5cd6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 124e5cdd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5ce0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ce3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 124e5ce6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e5ce9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5cec add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5cef mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 124e5cf2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5cf5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5cf8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5cfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5cfe jne 0x124e5d1d */
  if (!C.zf) goto L_124e5d1d;
  /* 124e5d00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5d03 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5d06 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5d0b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5d0d not eax */
  EAX = (~(EAX));
  /* 124e5d0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5d12 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5d15 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e5d17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5d1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_124e5d1d:;
  /* 124e5d1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d20 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e5d23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e5d29 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124e5d2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e5d32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d35 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e5d38 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 124e5d3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5d3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5d41 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5d44 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124e5d47 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5d4b jle 0x124e5e97 */
  if ((C.zf||C.sf!=C.of)) goto L_124e5e97;
  /* 124e5d51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5d54 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5d57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124e5d5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5d5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 124e5d60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5d63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124e5d66 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5d6a jbe 0x124e5d73 */
  if ((C.cf||C.zf)) goto L_124e5d73;
  /* 124e5d6c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_124e5d73:;
  /* 124e5d73 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e5d79 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 124e5d7c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124e5d7f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5d85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5d88 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124e5d8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5d91 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 124e5d94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e5d97 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5d9a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 124e5d9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5da0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5da3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5da6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124e5da9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5dac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5daf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5db2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5db5 jne 0x124e5e83 */
  if (!C.zf) goto L_124e5e83;
  /* 124e5dbb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5dbf jae 0x124e5e1c */
  if (!C.cf) goto L_124e5e1c;
  /* 124e5dc1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5dc4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5dc7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5dcb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5dce add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5dd1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e5dd4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e5dd7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5dda add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ddd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 124e5de0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5de2 jne 0x124e5dfa */
  if (!C.zf) goto L_124e5dfa;
  /* 124e5de4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5de9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5dec shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5dee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5df1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e5df3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5df5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5df8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124e5dfa:;
  /* 124e5dfa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5dff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5e02 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5e07 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e0a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 124e5e0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5e10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5e13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e16 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 124e5e1a jmp 0x124e5e83 */
  goto L_124e5e83;
L_124e5e1c:;
  /* 124e5e1c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e1f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5e22 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5e26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e29 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5e2c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e5e2f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e5e32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e35 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5e38 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 124e5e3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5e3d jne 0x124e5e5a */
  if (!C.zf) goto L_124e5e5a;
  /* 124e5e3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5e42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5e45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5e4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5e4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5e4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e5e52 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5e57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_124e5e5a:;
  /* 124e5e5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5e5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5e60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5e65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5e67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5e6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e6d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 124e5e74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5e76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5e79 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5e7c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_124e5e83:;
  /* 124e5e83 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5e86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5e89 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 124e5e8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5e8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5e91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5e94 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_124e5e97:;
  /* 124e5e97 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5e9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5e9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5ea0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124e5ea2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5ea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ea8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5eab add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5eae mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 124e5eb1 jmp 0x124e6e56 */
  jmp_ind(0x124e6e56u); return;
L_124e5eb6:;
  /* 124e5eb6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5eb9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5ebc jge 0x124e6172 */
  if ((C.sf==C.of)) goto L_124e6172;
  /* 124e5ec2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5ec5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ec8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5ecb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124e5ecd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e5ed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ed3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5ed6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ed9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 124e5edc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e5edf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5ee2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124e5ee5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5ee8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5eeb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e5eee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e5ef1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 124e5ef4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5ef7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124e5efa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5efe jbe 0x124e5f07 */
  if ((C.cf||C.zf)) goto L_124e5f07;
  /* 124e5f00 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_124e5f07:;
  /* 124e5f07 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5f0a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e5f0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5f0f jne 0x124e6050 */
  if (!C.zf) goto L_124e6050;
  /* 124e5f15 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e5f18 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 124e5f1b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5f1e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e5f21 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5f25 jbe 0x124e5f2e */
  if ((C.cf||C.zf)) goto L_124e5f2e;
  /* 124e5f27 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_124e5f2e:;
  /* 124e5f2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5f31 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e5f34 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e5f37 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5f3a jne 0x124e6010 */
  if (!C.zf) goto L_124e6010;
  /* 124e5f40 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e5f44 jae 0x124e5fa5 */
  if (!C.cf) goto L_124e5fa5;
  /* 124e5f46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5f4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5f4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5f50 not edx */
  EDX = (~(EDX));
  /* 124e5f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5f55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5f58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 124e5f5c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e5f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5f61 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5f64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 124e5f68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5f6b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5f6e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 124e5f71 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e5f74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5f77 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5f7a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 124e5f7d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5f80 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5f83 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e5f87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e5f89 jne 0x124e5fa3 */
  if (!C.zf) goto L_124e5fa3;
  /* 124e5f8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e5f90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5f93 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e5f95 not edx */
  EDX = (~(EDX));
  /* 124e5f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5f9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e5f9c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e5fa1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_124e5fa3:;
  /* 124e5fa3 jmp 0x124e6010 */
  goto L_124e6010;
L_124e5fa5:;
  /* 124e5fa5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5fa8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5fab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5fb0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e5fb2 not eax */
  EAX = (~(EAX));
  /* 124e5fb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5fb7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5fba mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 124e5fc1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124e5fc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e5fc6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5fc9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 124e5fd0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5fd3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5fd6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 124e5fd9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e5fdc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5fdf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5fe2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 124e5fe5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e5fe8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e5feb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e5fef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e5ff1 jne 0x124e6010 */
  if (!C.zf) goto L_124e6010;
  /* 124e5ff3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e5ff6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e5ff9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e5ffe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e6000 not eax */
  EAX = (~(EAX));
  /* 124e6002 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6005 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e6008 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e600a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e600d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_124e6010:;
  /* 124e6010 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e6013 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e6016 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e6019 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e601c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124e601f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e6022 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e6025 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e6028 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e602b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 124e602e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6031 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6034 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e6037 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e603a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 124e603d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e6040 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124e6043 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6047 jbe 0x124e6050 */
  if ((C.cf||C.zf)) goto L_124e6050;
  /* 124e6049 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_124e6050:;
  /* 124e6050 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6053 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6056 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 124e6059 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124e605c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e605f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e6062 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e6065 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124e6068 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e606b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e606e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124e6071 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e6074 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6077 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 124e607a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e607d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e6080 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6083 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 124e6086 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6089 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e608c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e608f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6092 jne 0x124e615e */
  if (!C.zf) goto L_124e615e;
  /* 124e6098 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e609c jae 0x124e60f8 */
  if (!C.cf) goto L_124e60f8;
  /* 124e609e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e60a1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e60a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e60a8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e60ab add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e60ae mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 124e60b1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e60b3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e60b6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e60b9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 124e60bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e60be jne 0x124e60d6 */
  if (!C.zf) goto L_124e60d6;
  /* 124e60c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e60c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e60c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e60ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e60cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e60cf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e60d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e60d4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124e60d6:;
  /* 124e60d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e60db mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e60de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e60e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e60e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e60e6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 124e60ea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e60ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e60ef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e60f2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 124e60f6 jmp 0x124e615e */
  goto L_124e615e;
L_124e60f8:;
  /* 124e60f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e60fb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e60fe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 124e6102 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e6105 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6108 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 124e610b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e610d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e6110 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6113 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 124e6116 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e6118 jne 0x124e6135 */
  if (!C.zf) goto L_124e6135;
  /* 124e611a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e611d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e6120 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 124e6125 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 124e6127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e612a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e612d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124e612f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6132 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_124e6135:;
  /* 124e6135 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6138 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e613b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e6140 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e6142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6145 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e6148 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 124e614f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6151 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6154 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e6157 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_124e615e:;
  /* 124e615e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6161 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6164 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124e6166 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6169 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e616c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e616f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_124e6172:;
  /* 124e6172 mov eax, 1 */
  EAX = (0x1u);
L_124e6177:;
  /* 124e6177 mov esp, ebp */
  ESP = (EBP);
  /* 124e6179 pop ebp */
  EBP = (pop32());
  /* 124e617a ret  */
  ESPCHK(0x124e5b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10016180 @ 0x124e6180 (304 bytes, 79 insns) */
void f_124e6180(void) {
  FTRACE(0x124e6180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e6180 push ebp */
  push32((uint32_t)(EBP));
  /* 124e6181 mov ebp, esp */
  EBP = (ESP);
  /* 124e6183 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6184 cmp dword ptr [0x1250e560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e618b je 0x124e62ac */
  if (C.zf) goto L_124e62ac;
  /* 124e6191 mov eax, dword ptr [0x1250e558] */
  EAX = (r32((uint32_t)(0x1250e558)));
  /* 124e6196 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 124e6199 mov ecx, dword ptr [0x1250e560] */
  ECX = (r32((uint32_t)(0x1250e560)));
  /* 124e619f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e61a2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e61a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e61a7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 124e61ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 124e61b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e61b4 push eax */
  push32((uint32_t)(EAX));
  /* 124e61b5 call dword ptr [0x1250f360] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f360))), 0x124e61bbu);
  /* 124e61bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e61c0 mov ecx, dword ptr [0x1250e558] */
  ECX = (r32((uint32_t)(0x1250e558)));
  /* 124e61c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e61c8 mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e61cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e61d0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 124e61d2 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e61d8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e61db mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e61e0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e61e3 mov edx, dword ptr [0x1250e558] */
  EDX = (r32((uint32_t)(0x1250e558)));
  /* 124e61e9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 124e61f4 mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e61f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e61fc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 124e61ff sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 124e6202 mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e6207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e620a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 124e620d mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e6213 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124e6216 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 124e621a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e621c jne 0x124e6232 */
  if (!C.zf) goto L_124e6232;
  /* 124e621e mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e6224 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e6227 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 124e6229 mov ecx, dword ptr [0x1250e560] */
  ECX = (r32((uint32_t)(0x1250e560)));
  /* 124e622f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_124e6232:;
  /* 124e6232 mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e6238 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e623c jne 0x124e62a2 */
  if (!C.zf) goto L_124e62a2;
  /* 124e623e cmp dword ptr [0x1250e564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250e564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6245 jle 0x124e62a2 */
  if ((C.zf||C.sf!=C.of)) goto L_124e62a2;
  /* 124e6247 mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e624c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124e624f push ecx */
  push32((uint32_t)(ECX));
  /* 124e6250 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e6252 mov edx, dword ptr [0x1250e56c] */
  EDX = (r32((uint32_t)(0x1250e56c)));
  /* 124e6258 push edx */
  push32((uint32_t)(EDX));
  /* 124e6259 call dword ptr [0x1250f370] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f370))), 0x124e625fu);
  /* 124e625f mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e6264 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e6267 mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e626d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e626f mov edx, dword ptr [0x1250e560] */
  EDX = (r32((uint32_t)(0x1250e560)));
  /* 124e6275 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6278 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e627a push ecx */
  push32((uint32_t)(ECX));
  /* 124e627b mov eax, dword ptr [0x1250e560] */
  EAX = (r32((uint32_t)(0x1250e560)));
  /* 124e6280 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6283 push eax */
  push32((uint32_t)(EAX));
  /* 124e6284 mov ecx, dword ptr [0x1250e560] */
  ECX = (r32((uint32_t)(0x1250e560)));
  /* 124e628a push ecx */
  push32((uint32_t)(ECX));
  /* 124e628b call 0x124e88b0 */
  push32(0x124e6290u); f_124e88b0();
  /* 124e6290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6293 mov edx, dword ptr [0x1250e564] */
  EDX = (r32((uint32_t)(0x1250e564)));
  /* 124e6299 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e629c mov dword ptr [0x1250e564], edx */
  w32((uint32_t)(0x1250e564), (EDX));
L_124e62a2:;
  /* 124e62a2 mov dword ptr [0x1250e560], 0 */
  w32((uint32_t)(0x1250e560), (0x0u));
L_124e62ac:;
  /* 124e62ac mov esp, ebp */
  ESP = (EBP);
  /* 124e62ae pop ebp */
  EBP = (pop32());
  /* 124e62af ret  */
  ESPCHK(0x124e6180u, _esp0);
  ESP += 4; return;
}

/* FUN_100162b0 @ 0x124e62b0 (1565 bytes, 343 insns) */
void f_124e62b0(void) {
  FTRACE(0x124e62b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e62b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e62b1 mov ebp, esp */
  EBP = (ESP);
  /* 124e62b3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e62b9 mov eax, dword ptr [0x1250e564] */
  EAX = (r32((uint32_t)(0x1250e564)));
  /* 124e62be imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e62c1 push eax */
  push32((uint32_t)(EAX));
  /* 124e62c2 mov ecx, dword ptr [0x1250e568] */
  ECX = (r32((uint32_t)(0x1250e568)));
  /* 124e62c8 push ecx */
  push32((uint32_t)(ECX));
  /* 124e62c9 call dword ptr [0x1250f38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f38c))), 0x124e62cfu);
  /* 124e62cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e62d1 je 0x124e62db */
  if (C.zf) goto L_124e62db;
  /* 124e62d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e62d6 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e62db:;
  /* 124e62db mov edx, dword ptr [0x1250e568] */
  EDX = (r32((uint32_t)(0x1250e568)));
  /* 124e62e1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 124e62e7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 124e62f1 jmp 0x124e6302 */
  goto L_124e6302;
L_124e62f3:;
  /* 124e62f3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 124e62f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e62fc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_124e6302:;
  /* 124e6302 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 124e6308 cmp ecx, dword ptr [0x1250e564] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e564))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e630e jge 0x124e68c7 */
  if ((C.sf==C.of)) goto L_124e68c7;
  /* 124e6314 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 124e631a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124e631d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 124e6323 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 124e6328 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 124e632e push ecx */
  push32((uint32_t)(ECX));
  /* 124e632f call dword ptr [0x1250f38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f38c))), 0x124e6335u);
  /* 124e6335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6337 je 0x124e6343 */
  if (C.zf) goto L_124e6343;
  /* 124e6339 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 124e633e jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e6343:;
  /* 124e6343 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 124e6349 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124e634c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 124e6352 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 124e6358 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e635e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124e6361 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 124e6367 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e636a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e636d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 124e6377 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 124e6381 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e6388 jmp 0x124e6393 */
  goto L_124e6393;
L_124e638a:;
  /* 124e638a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e638d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6390 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124e6393:;
  /* 124e6393 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6397 jge 0x124e688b */
  if ((C.sf==C.of)) goto L_124e688b;
  /* 124e639d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 124e63a7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 124e63b1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 124e63bb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 124e63c5 jmp 0x124e63d6 */
  goto L_124e63d6;
L_124e63c7:;
  /* 124e63c7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 124e63cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e63d0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_124e63d6:;
  /* 124e63d6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e63dd jge 0x124e63f2 */
  if ((C.sf==C.of)) goto L_124e63f2;
  /* 124e63df mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 124e63e5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 124e63f0 jmp 0x124e63c7 */
  goto L_124e63c7;
L_124e63f2:;
  /* 124e63f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e63f6 jl 0x124e682d */
  if ((C.sf!=C.of)) goto L_124e682d;
  /* 124e63fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 124e6401 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 124e6407 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6408 call dword ptr [0x1250f38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f38c))), 0x124e640eu);
  /* 124e640e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6410 je 0x124e641c */
  if (C.zf) goto L_124e641c;
  /* 124e6412 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 124e6417 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e641c:;
  /* 124e641c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 124e6422 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124e6425 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 124e642f jmp 0x124e6440 */
  goto L_124e6440;
L_124e6431:;
  /* 124e6431 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 124e6437 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e643a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_124e6440:;
  /* 124e6440 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6447 jge 0x124e65c4 */
  if ((C.sf==C.of)) goto L_124e65c4;
  /* 124e644d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6450 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6453 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 124e6459 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e645f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6465 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 124e646b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e6471 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6475 jne 0x124e6482 */
  if (!C.zf) goto L_124e6482;
  /* 124e6477 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 124e647d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6480 je 0x124e648c */
  if (C.zf) goto L_124e648c;
L_124e6482:;
  /* 124e6482 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 124e6487 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e648c:;
  /* 124e648c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e6492 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e6494 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 124e649a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 124e64a0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 124e64a6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 124e64ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e64af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e64b1 je 0x124e64e9 */
  if (C.zf) goto L_124e64e9;
  /* 124e64b3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 124e64b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e64bc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 124e64c2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e64cc jle 0x124e64d8 */
  if ((C.zf||C.sf!=C.of)) goto L_124e64d8;
  /* 124e64ce mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 124e64d3 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e64d8:;
  /* 124e64d8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 124e64de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e64e1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 124e64e7 jmp 0x124e652b */
  goto L_124e652b;
L_124e64e9:;
  /* 124e64e9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 124e64ef sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 124e64f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e64f5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 124e64fb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6502 jle 0x124e650e */
  if ((C.zf||C.sf!=C.of)) goto L_124e650e;
  /* 124e6504 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_124e650e:;
  /* 124e650e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 124e6514 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 124e651b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e651e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 124e6524 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_124e652b:;
  /* 124e652b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6532 jl 0x124e654d */
  if ((C.sf!=C.of)) goto L_124e654d;
  /* 124e6534 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 124e653a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 124e653d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e653f jne 0x124e654d */
  if (!C.zf) goto L_124e654d;
  /* 124e6541 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e654b jle 0x124e6557 */
  if ((C.zf||C.sf!=C.of)) goto L_124e6557;
L_124e654d:;
  /* 124e654d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 124e6552 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e6557:;
  /* 124e6557 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e655d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6563 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 124e6566 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e656c je 0x124e6578 */
  if (C.zf) goto L_124e6578;
  /* 124e656e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 124e6573 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e6578:;
  /* 124e6578 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e657e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6584 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 124e658a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e6590 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6596 jb 0x124e648c */
  if (C.cf) goto L_124e648c;
  /* 124e659c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e65a2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e65a8 je 0x124e65b4 */
  if (C.zf) goto L_124e65b4;
  /* 124e65aa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 124e65af jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e65b4:;
  /* 124e65b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e65b7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e65bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e65bf jmp 0x124e6431 */
  goto L_124e6431;
L_124e65c4:;
  /* 124e65c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e65c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e65c9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e65cf je 0x124e65db */
  if (C.zf) goto L_124e65db;
  /* 124e65d1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 124e65d6 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e65db:;
  /* 124e65db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e65de mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 124e65e4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 124e65eb jmp 0x124e65f6 */
  goto L_124e65f6;
L_124e65ed:;
  /* 124e65ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e65f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e65f3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124e65f6:;
  /* 124e65f6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e65fa jge 0x124e682d */
  if ((C.sf==C.of)) goto L_124e682d;
  /* 124e6600 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 124e660a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 124e6610 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_124e6616:;
  /* 124e6616 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e661c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e661f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 124e6625 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 124e662b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6631 je 0x124e675a */
  if (C.zf) goto L_124e675a;
  /* 124e6637 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e663a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 124e6640 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6647 je 0x124e675a */
  if (C.zf) goto L_124e675a;
  /* 124e664d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 124e6653 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6659 jb 0x124e666e */
  if (C.cf) goto L_124e666e;
  /* 124e665b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 124e6661 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6666 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e666c jb 0x124e6678 */
  if (C.cf) goto L_124e6678;
L_124e666e:;
  /* 124e666e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 124e6673 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e6678:;
  /* 124e6678 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 124e667e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 124e6684 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 124e668a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 124e6690 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6693 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124e6696 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e6699 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e669e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_124e66a4:;
  /* 124e66a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e66a7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e66ad je 0x124e66ce */
  if (C.zf) goto L_124e66ce;
  /* 124e66af mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e66b2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e66b8 jne 0x124e66bc */
  if (!C.zf) goto L_124e66bc;
  /* 124e66ba jmp 0x124e66ce */
  goto L_124e66ce;
L_124e66bc:;
  /* 124e66bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e66bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e66c1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 124e66c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e66c7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e66c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124e66cc jmp 0x124e66a4 */
  goto L_124e66a4;
L_124e66ce:;
  /* 124e66ce mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e66d1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e66d7 jne 0x124e66e3 */
  if (!C.zf) goto L_124e66e3;
  /* 124e66d9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 124e66de jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e66e3:;
  /* 124e66e3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 124e66e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e66eb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 124e66ee sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e66f1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 124e66f7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e66fe jle 0x124e670a */
  if ((C.zf||C.sf!=C.of)) goto L_124e670a;
  /* 124e6700 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_124e670a:;
  /* 124e670a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 124e6710 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6713 je 0x124e671f */
  if (C.zf) goto L_124e671f;
  /* 124e6715 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 124e671a jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e671f:;
  /* 124e671f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 124e6725 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e6728 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e672e je 0x124e673a */
  if (C.zf) goto L_124e673a;
  /* 124e6730 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 124e6735 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e673a:;
  /* 124e673a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 124e6740 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 124e6746 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 124e674c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e674f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 124e6755 jmp 0x124e6616 */
  goto L_124e6616;
L_124e675a:;
  /* 124e675a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6761 je 0x124e67d1 */
  if (C.zf) goto L_124e67d1;
  /* 124e6763 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6767 jge 0x124e679b */
  if ((C.sf==C.of)) goto L_124e679b;
  /* 124e6769 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e676e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6771 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e6773 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 124e6779 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e677b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 124e6781 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e6786 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e6789 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e678b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 124e6791 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6793 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 124e6799 jmp 0x124e67d1 */
  goto L_124e67d1;
L_124e679b:;
  /* 124e679b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e679e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e67a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e67a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e67a8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 124e67ae or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e67b0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 124e67b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e67b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e67bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 124e67c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 124e67c3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 124e67c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 124e67cb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_124e67d1:;
  /* 124e67d1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 124e67d7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e67da cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e67e0 jne 0x124e67f4 */
  if (!C.zf) goto L_124e67f4;
  /* 124e67e2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e67e5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 124e67eb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e67f2 je 0x124e67fe */
  if (C.zf) goto L_124e67fe;
L_124e67f4:;
  /* 124e67f4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 124e67f9 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e67fe:;
  /* 124e67fe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 124e6804 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e6807 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e680d je 0x124e6819 */
  if (C.zf) goto L_124e6819;
  /* 124e680f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 124e6814 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e6819:;
  /* 124e6819 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 124e681f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6822 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 124e6828 jmp 0x124e65ed */
  goto L_124e65ed;
L_124e682d:;
  /* 124e682d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6830 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 124e6836 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 124e683c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6840 jne 0x124e685a */
  if (!C.zf) goto L_124e685a;
  /* 124e6842 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6845 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 124e684b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 124e6851 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6858 je 0x124e6861 */
  if (C.zf) goto L_124e6861;
L_124e685a:;
  /* 124e685a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 124e685f jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e6861:;
  /* 124e6861 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 124e6867 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e686d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 124e6873 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e6876 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e687b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124e687e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6881 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 124e6883 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e6886 jmp 0x124e638a */
  goto L_124e638a;
L_124e688b:;
  /* 124e688b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 124e6891 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 124e6897 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6899 jne 0x124e68ac */
  if (!C.zf) goto L_124e68ac;
  /* 124e689b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 124e68a1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 124e68a7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e68aa je 0x124e68b3 */
  if (C.zf) goto L_124e68b3;
L_124e68ac:;
  /* 124e68ac mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 124e68b1 jmp 0x124e68c9 */
  goto L_124e68c9;
L_124e68b3:;
  /* 124e68b3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 124e68b9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e68bc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 124e68c2 jmp 0x124e62f3 */
  goto L_124e62f3;
L_124e68c7:;
  /* 124e68c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124e68c9:;
  /* 124e68c9 mov esp, ebp */
  ESP = (EBP);
  /* 124e68cb pop ebp */
  EBP = (pop32());
  /* 124e68cc ret  */
  ESPCHK(0x124e62b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100168d0 @ 0x124e68d0 (250 bytes, 92 insns) */
void f_124e68d0(void) {
  FTRACE(0x124e68d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e68d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e68d1 mov ebp, esp */
  EBP = (ESP);
  /* 124e68d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e68d6 push ebx */
  push32((uint32_t)(EBX));
  /* 124e68d7 push esi */
  push32((uint32_t)(ESI));
  /* 124e68d8 push edi */
  push32((uint32_t)(EDI));
  /* 124e68d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 124e68dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124e68df lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 124e68e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_124e68e5:;
  /* 124e68e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e68e9 jne 0x124e6909 */
  if (!C.zf) goto L_124e6909;
  /* 124e68eb push 0x125088b8 */
  push32((uint32_t)(0x125088b8u));
  /* 124e68f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e68f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 124e68f4 push 0x125088ac */
  push32((uint32_t)(0x125088acu));
  /* 124e68f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124e68fb call 0x124dfa80 */
  push32(0x124e6900u); f_124dfa80();
  /* 124e6900 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6903 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6906 jne 0x124e6909 */
  if (!C.zf) goto L_124e6909;
  /* 124e6908 int3  */
  x86_unimpl("int3 @ 0x124e6908");
L_124e6909:;
  /* 124e6909 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e690b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e690d jne 0x124e68e5 */
  if (!C.zf) goto L_124e68e5;
L_124e690f:;
  /* 124e690f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6913 jne 0x124e6933 */
  if (!C.zf) goto L_124e6933;
  /* 124e6915 push 0x1250889c */
  push32((uint32_t)(0x1250889cu));
  /* 124e691a push 0 */
  push32((uint32_t)(0x0u));
  /* 124e691c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 124e691e push 0x125088ac */
  push32((uint32_t)(0x125088acu));
  /* 124e6923 push 2 */
  push32((uint32_t)(0x2u));
  /* 124e6925 call 0x124dfa80 */
  push32(0x124e692au); f_124dfa80();
  /* 124e692a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e692d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6930 jne 0x124e6933 */
  if (!C.zf) goto L_124e6933;
  /* 124e6932 int3  */
  x86_unimpl("int3 @ 0x124e6932");
L_124e6933:;
  /* 124e6933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6937 jne 0x124e690f */
  if (!C.zf) goto L_124e690f;
  /* 124e6939 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e693c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 124e6943 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6949 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124e694c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e694f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6952 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 124e6954 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6957 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 124e695e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e6961 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6962 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e6965 push edx */
  push32((uint32_t)(EDX));
  /* 124e6966 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6969 push eax */
  push32((uint32_t)(EAX));
  /* 124e696a call 0x124e7950 */
  push32(0x124e696fu); f_124e7950();
  /* 124e696f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6972 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e6975 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6978 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e697b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e697e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6981 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124e6984 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6987 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e698b jl 0x124e69af */
  if ((C.sf!=C.of)) goto L_124e69af;
  /* 124e698d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6990 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e6992 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124e6995 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e6997 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124e699d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 124e69a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e69a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e69a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e69a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e69ab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124e69ad jmp 0x124e69c0 */
  goto L_124e69c0;
L_124e69af:;
  /* 124e69af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e69b2 push edx */
  push32((uint32_t)(EDX));
  /* 124e69b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e69b5 call 0x124e76d0 */
  push32(0x124e69bau); f_124e76d0();
  /* 124e69ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e69bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_124e69c0:;
  /* 124e69c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e69c3 pop edi */
  EDI = (pop32());
  /* 124e69c4 pop esi */
  ESI = (pop32());
  /* 124e69c5 pop ebx */
  EBX = (pop32());
  /* 124e69c6 mov esp, ebp */
  ESP = (EBP);
  /* 124e69c8 pop ebp */
  EBP = (pop32());
  /* 124e69c9 ret  */
  ESPCHK(0x124e68d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100169d0 @ 0x124e69d0 (183 bytes, 58 insns) */
void f_124e69d0(void) {
  FTRACE(0x124e69d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e69d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e69d1 mov ebp, esp */
  EBP = (ESP);
  /* 124e69d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e69d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e69d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e69dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e69e1 ja 0x124e69fa */
  if ((!C.cf&&!C.zf)) goto L_124e69fa;
  /* 124e69e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e69e6 mov edx, dword ptr [0x1250ac98] */
  EDX = (r32((uint32_t)(0x1250ac98)));
  /* 124e69ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e69ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 124e69f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 124e69f5 jmp 0x124e6a83 */
  goto L_124e6a83;
L_124e69fa:;
  /* 124e69fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e69fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 124e6a00 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124e6a06 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124e6a0c mov edx, dword ptr [0x1250ac98] */
  EDX = (r32((uint32_t)(0x1250ac98)));
  /* 124e6a12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6a14 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 124e6a18 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 124e6a1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6a1f je 0x124e6a43 */
  if (C.zf) goto L_124e6a43;
  /* 124e6a21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6a24 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 124e6a27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124e6a2d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 124e6a30 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 124e6a33 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 124e6a36 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 124e6a3a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 124e6a41 jmp 0x124e6a54 */
  goto L_124e6a54;
L_124e6a43:;
  /* 124e6a43 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 124e6a46 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 124e6a49 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 124e6a4d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_124e6a54:;
  /* 124e6a54 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e6a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e6a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e6a5a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 124e6a5d push ecx */
  push32((uint32_t)(ECX));
  /* 124e6a5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6a61 push edx */
  push32((uint32_t)(EDX));
  /* 124e6a62 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 124e6a65 push eax */
  push32((uint32_t)(EAX));
  /* 124e6a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e6a68 call 0x124e8bf0 */
  push32(0x124e6a6du); f_124e8bf0();
  /* 124e6a6d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6a72 jne 0x124e6a78 */
  if (!C.zf) goto L_124e6a78;
  /* 124e6a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6a76 jmp 0x124e6a83 */
  goto L_124e6a83;
L_124e6a78:;
  /* 124e6a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6a7b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e6a80 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_124e6a83:;
  /* 124e6a83 mov esp, ebp */
  ESP = (EBP);
  /* 124e6a85 pop ebp */
  EBP = (pop32());
  /* 124e6a86 ret  */
  ESPCHK(0x124e69d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a90 @ 0x124e6a90 (836 bytes, 238 insns) */
void f_124e6a90(void) {
  FTRACE(0x124e6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e6a90 push ebp */
  push32((uint32_t)(EBP));
  /* 124e6a91 mov ebp, esp */
  EBP = (ESP);
  /* 124e6a93 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e6a96 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6a98 call 0x124e43c0 */
  push32(0x124e6a9du); f_124e43c0();
  /* 124e6a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6aa3 push eax */
  push32((uint32_t)(EAX));
  /* 124e6aa4 call 0x124e6de0 */
  push32(0x124e6aa9u); f_124e6de0();
  /* 124e6aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6aac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124e6aaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6ab2 cmp ecx, dword ptr [0x1250e2a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e2a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6ab8 jne 0x124e6acb */
  if (!C.zf) goto L_124e6acb;
  /* 124e6aba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6abc call 0x124e4460 */
  push32(0x124e6ac1u); f_124e4460();
  /* 124e6ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6ac6 jmp 0x124e6dd0 */
  goto L_124e6dd0;
L_124e6acb:;
  /* 124e6acb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6acf jne 0x124e6aec */
  if (!C.zf) goto L_124e6aec;
  /* 124e6ad1 call 0x124e6ec0 */
  push32(0x124e6ad6u); f_124e6ec0();
  /* 124e6ad6 call 0x124e6f40 */
  push32(0x124e6adbu); f_124e6f40();
  /* 124e6adb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6add call 0x124e4460 */
  push32(0x124e6ae2u); f_124e4460();
  /* 124e6ae2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6ae7 jmp 0x124e6dd0 */
  goto L_124e6dd0;
L_124e6aec:;
  /* 124e6aec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e6af3 jmp 0x124e6afe */
  goto L_124e6afe;
L_124e6af5:;
  /* 124e6af5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6af8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6afb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e6afe:;
  /* 124e6afe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6b02 jae 0x124e6c4f */
  if (!C.cf) goto L_124e6c4f;
  /* 124e6b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6b0b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e6b0e mov ecx, dword ptr [eax + 0x1250aeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1250aeb8)));
  /* 124e6b14 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6b17 jne 0x124e6c4a */
  if (!C.zf) goto L_124e6c4a;
  /* 124e6b1d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124e6b24 jmp 0x124e6b2f */
  goto L_124e6b2f;
L_124e6b26:;
  /* 124e6b26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6b29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6b2c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_124e6b2f:;
  /* 124e6b2f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6b36 jae 0x124e6b44 */
  if (!C.cf) goto L_124e6b44;
  /* 124e6b38 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6b3b mov byte ptr [eax + 0x1250e440], 0 */
  w8((uint32_t)(EAX + 0x1250e440), (0x0u));
  /* 124e6b42 jmp 0x124e6b26 */
  goto L_124e6b26;
L_124e6b44:;
  /* 124e6b44 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e6b4b jmp 0x124e6b56 */
  goto L_124e6b56;
L_124e6b4d:;
  /* 124e6b4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6b50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6b53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124e6b56:;
  /* 124e6b56 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6b5a jae 0x124e6bd7 */
  if (!C.cf) goto L_124e6bd7;
  /* 124e6b5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6b5f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e6b62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6b65 lea ecx, [edx + eax*8 + 0x1250aec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1250aec8));
  /* 124e6b6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e6b6f jmp 0x124e6b7a */
  goto L_124e6b7a;
L_124e6b71:;
  /* 124e6b71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6b74 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6b77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124e6b7a:;
  /* 124e6b7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6b7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e6b7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124e6b81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e6b83 je 0x124e6bd2 */
  if (C.zf) goto L_124e6bd2;
  /* 124e6b85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6b88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6b8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124e6b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6b8f je 0x124e6bd2 */
  if (C.zf) goto L_124e6bd2;
  /* 124e6b91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6b94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e6b96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124e6b98 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 124e6b9b jmp 0x124e6ba6 */
  goto L_124e6ba6;
L_124e6b9d:;
  /* 124e6b9d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6ba0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6ba3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124e6ba6:;
  /* 124e6ba6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e6ba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e6bab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124e6bae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6bb1 ja 0x124e6bd0 */
  if ((!C.cf&&!C.zf)) goto L_124e6bd0;
  /* 124e6bb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6bb9 mov dl, byte ptr [eax + 0x1250e441] */
  DL = (r8((uint32_t)(EAX + 0x1250e441)));
  /* 124e6bbf or dl, byte ptr [ecx + 0x1250aeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1250aeb0))); DL = (_r); fl_logic(_r,8); }
  /* 124e6bc5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6bc8 mov byte ptr [eax + 0x1250e441], dl */
  w8((uint32_t)(EAX + 0x1250e441), (DL));
  /* 124e6bce jmp 0x124e6b9d */
  goto L_124e6b9d;
L_124e6bd0:;
  /* 124e6bd0 jmp 0x124e6b71 */
  goto L_124e6b71;
L_124e6bd2:;
  /* 124e6bd2 jmp 0x124e6b4d */
  goto L_124e6b4d;
L_124e6bd7:;
  /* 124e6bd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6bda mov dword ptr [0x1250e2a4], ecx */
  w32((uint32_t)(0x1250e2a4), (ECX));
  /* 124e6be0 mov dword ptr [0x1250e32c], 1 */
  w32((uint32_t)(0x1250e32c), (0x1u));
  /* 124e6bea mov edx, dword ptr [0x1250e2a4] */
  EDX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e6bf0 push edx */
  push32((uint32_t)(EDX));
  /* 124e6bf1 call 0x124e6e40 */
  push32(0x124e6bf6u); f_124e6e40();
  /* 124e6bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6bf9 mov dword ptr [0x1250e544], eax */
  w32((uint32_t)(0x1250e544), (EAX));
  /* 124e6bfe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e6c05 jmp 0x124e6c10 */
  goto L_124e6c10;
L_124e6c07:;
  /* 124e6c07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6c0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6c0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124e6c10:;
  /* 124e6c10 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6c14 jae 0x124e6c34 */
  if (!C.cf) goto L_124e6c34;
  /* 124e6c16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6c19 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e6c1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6c1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6c22 mov cx, word ptr [ecx + eax*2 + 0x1250aebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1250aebc)));
  /* 124e6c2a mov word ptr [edx*2 + 0x1250e320], cx */
  w16((uint32_t)(EDX*2 + 0x1250e320), (CX));
  /* 124e6c32 jmp 0x124e6c07 */
  goto L_124e6c07;
L_124e6c34:;
  /* 124e6c34 call 0x124e6f40 */
  push32(0x124e6c39u); f_124e6f40();
  /* 124e6c39 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6c3b call 0x124e4460 */
  push32(0x124e6c40u); f_124e4460();
  /* 124e6c40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6c45 jmp 0x124e6dd0 */
  goto L_124e6dd0;
L_124e6c4a:;
  /* 124e6c4a jmp 0x124e6af5 */
  goto L_124e6af5;
L_124e6c4f:;
  /* 124e6c4f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 124e6c52 push edx */
  push32((uint32_t)(EDX));
  /* 124e6c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6c56 push eax */
  push32((uint32_t)(EAX));
  /* 124e6c57 call dword ptr [0x1250f338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f338))), 0x124e6c5du);
  /* 124e6c5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6c60 jne 0x124e6da2 */
  if (!C.zf) goto L_124e6da2;
  /* 124e6c66 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124e6c6d jmp 0x124e6c78 */
  goto L_124e6c78;
L_124e6c6f:;
  /* 124e6c6f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6c72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6c75 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_124e6c78:;
  /* 124e6c78 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6c7f jae 0x124e6c8d */
  if (!C.cf) goto L_124e6c8d;
  /* 124e6c81 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6c84 mov byte ptr [edx + 0x1250e440], 0 */
  w8((uint32_t)(EDX + 0x1250e440), (0x0u));
  /* 124e6c8b jmp 0x124e6c6f */
  goto L_124e6c6f;
L_124e6c8d:;
  /* 124e6c8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6c90 mov dword ptr [0x1250e2a4], eax */
  w32((uint32_t)(0x1250e2a4), (EAX));
  /* 124e6c95 mov dword ptr [0x1250e544], 0 */
  w32((uint32_t)(0x1250e544), (0x0u));
  /* 124e6c9f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6ca3 jbe 0x124e6d5e */
  if ((C.cf||C.zf)) goto L_124e6d5e;
  /* 124e6ca9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 124e6cac mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 124e6caf jmp 0x124e6cba */
  goto L_124e6cba;
L_124e6cb1:;
  /* 124e6cb1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6cb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6cb7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_124e6cba:;
  /* 124e6cba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6cbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e6cbf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124e6cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e6cc3 je 0x124e6d0c */
  if (C.zf) goto L_124e6d0c;
  /* 124e6cc5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6cca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124e6ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e6ccf je 0x124e6d0c */
  if (C.zf) goto L_124e6d0c;
  /* 124e6cd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e6cd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124e6cd8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 124e6cdb jmp 0x124e6ce6 */
  goto L_124e6ce6;
L_124e6cdd:;
  /* 124e6cdd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6ce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6ce3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124e6ce6:;
  /* 124e6ce6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e6ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e6ceb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124e6cee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6cf1 ja 0x124e6d0a */
  if ((!C.cf&&!C.zf)) goto L_124e6d0a;
  /* 124e6cf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6cf6 mov cl, byte ptr [eax + 0x1250e441] */
  CL = (r8((uint32_t)(EAX + 0x1250e441)));
  /* 124e6cfc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 124e6cff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6d02 mov byte ptr [edx + 0x1250e441], cl */
  w8((uint32_t)(EDX + 0x1250e441), (CL));
  /* 124e6d08 jmp 0x124e6cdd */
  goto L_124e6cdd;
L_124e6d0a:;
  /* 124e6d0a jmp 0x124e6cb1 */
  goto L_124e6cb1;
L_124e6d0c:;
  /* 124e6d0c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 124e6d13 jmp 0x124e6d1e */
  goto L_124e6d1e;
L_124e6d15:;
  /* 124e6d15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6d18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6d1b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124e6d1e:;
  /* 124e6d1e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6d25 jae 0x124e6d3e */
  if (!C.cf) goto L_124e6d3e;
  /* 124e6d27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6d2a mov dl, byte ptr [ecx + 0x1250e441] */
  DL = (r8((uint32_t)(ECX + 0x1250e441)));
  /* 124e6d30 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 124e6d33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e6d36 mov byte ptr [eax + 0x1250e441], dl */
  w8((uint32_t)(EAX + 0x1250e441), (DL));
  /* 124e6d3c jmp 0x124e6d15 */
  goto L_124e6d15;
L_124e6d3e:;
  /* 124e6d3e mov ecx, dword ptr [0x1250e2a4] */
  ECX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e6d44 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6d45 call 0x124e6e40 */
  push32(0x124e6d4au); f_124e6e40();
  /* 124e6d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6d4d mov dword ptr [0x1250e544], eax */
  w32((uint32_t)(0x1250e544), (EAX));
  /* 124e6d52 mov dword ptr [0x1250e32c], 1 */
  w32((uint32_t)(0x1250e32c), (0x1u));
  /* 124e6d5c jmp 0x124e6d68 */
  goto L_124e6d68;
L_124e6d5e:;
  /* 124e6d5e mov dword ptr [0x1250e32c], 0 */
  w32((uint32_t)(0x1250e32c), (0x0u));
L_124e6d68:;
  /* 124e6d68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e6d6f jmp 0x124e6d7a */
  goto L_124e6d7a;
L_124e6d71:;
  /* 124e6d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6d74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6d77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124e6d7a:;
  /* 124e6d7a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6d7e jae 0x124e6d8f */
  if (!C.cf) goto L_124e6d8f;
  /* 124e6d80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e6d83 mov word ptr [eax*2 + 0x1250e320], 0 */
  w16((uint32_t)(EAX*2 + 0x1250e320), (0x0u));
  /* 124e6d8d jmp 0x124e6d71 */
  goto L_124e6d71;
L_124e6d8f:;
  /* 124e6d8f call 0x124e6f40 */
  push32(0x124e6d94u); f_124e6f40();
  /* 124e6d94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6d96 call 0x124e4460 */
  push32(0x124e6d9bu); f_124e4460();
  /* 124e6d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6d9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6da0 jmp 0x124e6dd0 */
  goto L_124e6dd0;
L_124e6da2:;
  /* 124e6da2 cmp dword ptr [0x1250cdb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6da9 je 0x124e6dc3 */
  if (C.zf) goto L_124e6dc3;
  /* 124e6dab call 0x124e6ec0 */
  push32(0x124e6db0u); f_124e6ec0();
  /* 124e6db0 call 0x124e6f40 */
  push32(0x124e6db5u); f_124e6f40();
  /* 124e6db5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6db7 call 0x124e4460 */
  push32(0x124e6dbcu); f_124e4460();
  /* 124e6dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6dbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e6dc1 jmp 0x124e6dd0 */
  goto L_124e6dd0;
L_124e6dc3:;
  /* 124e6dc3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124e6dc5 call 0x124e4460 */
  push32(0x124e6dcau); f_124e4460();
  /* 124e6dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6dcd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124e6dd0:;
  /* 124e6dd0 mov esp, ebp */
  ESP = (EBP);
  /* 124e6dd2 pop ebp */
  EBP = (pop32());
  /* 124e6dd3 ret  */
  ESPCHK(0x124e6a90u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x124e6de0 (89 bytes, 21 insns) */
void f_124e6de0(void) {
  FTRACE(0x124e6de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e6de0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e6de1 mov ebp, esp */
  EBP = (ESP);
  /* 124e6de3 mov dword ptr [0x1250cdb0], 0 */
  w32((uint32_t)(0x1250cdb0), (0x0u));
  /* 124e6ded cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6df1 jne 0x124e6e05 */
  if (!C.zf) goto L_124e6e05;
  /* 124e6df3 mov dword ptr [0x1250cdb0], 1 */
  w32((uint32_t)(0x1250cdb0), (0x1u));
  /* 124e6dfd call dword ptr [0x1250f330] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f330))), 0x124e6e03u);
  /* 124e6e03 jmp 0x124e6e37 */
  goto L_124e6e37;
L_124e6e05:;
  /* 124e6e05 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6e09 jne 0x124e6e1d */
  if (!C.zf) goto L_124e6e1d;
  /* 124e6e0b mov dword ptr [0x1250cdb0], 1 */
  w32((uint32_t)(0x1250cdb0), (0x1u));
  /* 124e6e15 call dword ptr [0x1250f340] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f340))), 0x124e6e1bu);
  /* 124e6e1b jmp 0x124e6e37 */
  goto L_124e6e37;
L_124e6e1d:;
  /* 124e6e1d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6e21 jne 0x124e6e34 */
  if (!C.zf) goto L_124e6e34;
  /* 124e6e23 mov dword ptr [0x1250cdb0], 1 */
  w32((uint32_t)(0x1250cdb0), (0x1u));
  /* 124e6e2d mov eax, dword ptr [0x1250cdd0] */
  EAX = (r32((uint32_t)(0x1250cdd0)));
  /* 124e6e32 jmp 0x124e6e37 */
  goto L_124e6e37;
L_124e6e34:;
  /* 124e6e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_124e6e37:;
  /* 124e6e37 pop ebp */
  EBP = (pop32());
  /* 124e6e38 ret  */
  ESPCHK(0x124e6de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e40 @ 0x124e6e40 (80 bytes, 26 insns) [1 switch table(s)] */
void f_124e6e40(void) {
  FTRACE(0x124e6e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e6e40 push ebp */
  push32((uint32_t)(EBP));
  /* 124e6e41 mov ebp, esp */
  EBP = (ESP);
  /* 124e6e43 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e6e47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e6e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6e4d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e6e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e6e56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6e5a ja 0x124e6e8a */
  if ((!C.cf&&!C.zf)) goto L_124e6e8a;
  /* 124e6e5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6e5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e6e61 mov dl, byte ptr [eax + 0x124e6ea4] */
  DL = (r8((uint32_t)(EAX + 0x124e6ea4)));
  /* 124e6e67 jmp dword ptr [edx*4 + 0x124e6e90] */
  switch (EDX) {
    case 0: goto L_124e6e6e;
    case 1: goto L_124e6e75;
    case 2: goto L_124e6e7c;
    case 3: goto L_124e6e83;
    case 4: goto L_124e6e8a;
    default: x86_unimpl("switch@0x124e6e67 out of table"); return;
  }
L_124e6e6e:;
  /* 124e6e6e mov eax, 0x411 */
  EAX = (0x411u);
  /* 124e6e73 jmp 0x124e6e8c */
  goto L_124e6e8c;
L_124e6e75:;
  /* 124e6e75 mov eax, 0x804 */
  EAX = (0x804u);
  /* 124e6e7a jmp 0x124e6e8c */
  goto L_124e6e8c;
L_124e6e7c:;
  /* 124e6e7c mov eax, 0x412 */
  EAX = (0x412u);
  /* 124e6e81 jmp 0x124e6e8c */
  goto L_124e6e8c;
L_124e6e83:;
  /* 124e6e83 mov eax, 0x404 */
  EAX = (0x404u);
  /* 124e6e88 jmp 0x124e6e8c */
  goto L_124e6e8c;
L_124e6e8a:;
  /* 124e6e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124e6e8c:;
  /* 124e6e8c mov esp, ebp */
  ESP = (EBP);
  /* 124e6e8e pop ebp */
  EBP = (pop32());
  /* 124e6e8f ret  */
  ESPCHK(0x124e6e40u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x124e6ec0 (116 bytes, 29 insns) */
void f_124e6ec0(void) {
  FTRACE(0x124e6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 124e6ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6ec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e6ecb jmp 0x124e6ed6 */
  goto L_124e6ed6;
L_124e6ecd:;
  /* 124e6ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6ed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6ed3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124e6ed6:;
  /* 124e6ed6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6edd jge 0x124e6eeb */
  if ((C.sf==C.of)) goto L_124e6eeb;
  /* 124e6edf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6ee2 mov byte ptr [ecx + 0x1250e440], 0 */
  w8((uint32_t)(ECX + 0x1250e440), (0x0u));
  /* 124e6ee9 jmp 0x124e6ecd */
  goto L_124e6ecd;
L_124e6eeb:;
  /* 124e6eeb mov dword ptr [0x1250e2a4], 0 */
  w32((uint32_t)(0x1250e2a4), (0x0u));
  /* 124e6ef5 mov dword ptr [0x1250e32c], 0 */
  w32((uint32_t)(0x1250e32c), (0x0u));
  /* 124e6eff mov dword ptr [0x1250e544], 0 */
  w32((uint32_t)(0x1250e544), (0x0u));
  /* 124e6f09 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e6f10 jmp 0x124e6f1b */
  goto L_124e6f1b;
L_124e6f12:;
  /* 124e6f12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6f15 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6f18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e6f1b:;
  /* 124e6f1b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6f1f jge 0x124e6f30 */
  if ((C.sf==C.of)) goto L_124e6f30;
  /* 124e6f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6f24 mov word ptr [eax*2 + 0x1250e320], 0 */
  w16((uint32_t)(EAX*2 + 0x1250e320), (0x0u));
  /* 124e6f2e jmp 0x124e6f12 */
  goto L_124e6f12;
L_124e6f30:;
  /* 124e6f30 mov esp, ebp */
  ESP = (EBP);
  /* 124e6f32 pop ebp */
  EBP = (pop32());
  /* 124e6f33 ret  */
  ESPCHK(0x124e6ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f40 @ 0x124e6f40 (770 bytes, 175 insns) */
void f_124e6f40(void) {
  FTRACE(0x124e6f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e6f40 push ebp */
  push32((uint32_t)(EBP));
  /* 124e6f41 mov ebp, esp */
  EBP = (ESP);
  /* 124e6f43 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e6f49 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 124e6f4f push eax */
  push32((uint32_t)(EAX));
  /* 124e6f50 mov ecx, dword ptr [0x1250e2a4] */
  ECX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e6f56 push ecx */
  push32((uint32_t)(ECX));
  /* 124e6f57 call dword ptr [0x1250f338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f338))), 0x124e6f5du);
  /* 124e6f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6f60 jne 0x124e7179 */
  if (!C.zf) goto L_124e7179;
  /* 124e6f66 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 124e6f70 jmp 0x124e6f81 */
  goto L_124e6f81;
L_124e6f72:;
  /* 124e6f72 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e6f78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6f7b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_124e6f81:;
  /* 124e6f81 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6f8b jae 0x124e6fa2 */
  if (!C.cf) goto L_124e6fa2;
  /* 124e6f8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e6f93 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 124e6f99 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 124e6fa0 jmp 0x124e6f72 */
  goto L_124e6f72;
L_124e6fa2:;
  /* 124e6fa2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 124e6fa9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 124e6faf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e6fb2 jmp 0x124e6fbd */
  goto L_124e6fbd;
L_124e6fb4:;
  /* 124e6fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6fb7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6fba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124e6fbd:;
  /* 124e6fbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6fc0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e6fc2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124e6fc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e6fc6 je 0x124e7008 */
  if (C.zf) goto L_124e7008;
  /* 124e6fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6fcb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e6fcd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124e6fcf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 124e6fd5 jmp 0x124e6fe6 */
  goto L_124e6fe6;
L_124e6fd7:;
  /* 124e6fd7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e6fdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e6fe0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_124e6fe6:;
  /* 124e6fe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e6fe9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e6feb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124e6fee cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e6ff4 ja 0x124e7006 */
  if ((!C.cf&&!C.zf)) goto L_124e7006;
  /* 124e6ff6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e6ffc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 124e7004 jmp 0x124e6fd7 */
  goto L_124e6fd7;
L_124e7006:;
  /* 124e7006 jmp 0x124e6fb4 */
  goto L_124e6fb4;
L_124e7008:;
  /* 124e7008 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e700a mov eax, dword ptr [0x1250e544] */
  EAX = (r32((uint32_t)(0x1250e544)));
  /* 124e700f push eax */
  push32((uint32_t)(EAX));
  /* 124e7010 mov ecx, dword ptr [0x1250e2a4] */
  ECX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e7016 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7017 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 124e701d push edx */
  push32((uint32_t)(EDX));
  /* 124e701e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e7023 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 124e7029 push eax */
  push32((uint32_t)(EAX));
  /* 124e702a push 1 */
  push32((uint32_t)(0x1u));
  /* 124e702c call 0x124e8bf0 */
  push32(0x124e7031u); f_124e8bf0();
  /* 124e7031 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7034 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e7036 mov ecx, dword ptr [0x1250e2a4] */
  ECX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e703c push ecx */
  push32((uint32_t)(ECX));
  /* 124e703d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e7042 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 124e7048 push edx */
  push32((uint32_t)(EDX));
  /* 124e7049 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e704e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 124e7054 push eax */
  push32((uint32_t)(EAX));
  /* 124e7055 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e705a mov ecx, dword ptr [0x1250e544] */
  ECX = (r32((uint32_t)(0x1250e544)));
  /* 124e7060 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7061 call 0x124e8db0 */
  push32(0x124e7066u); f_124e8db0();
  /* 124e7066 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7069 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e706b mov edx, dword ptr [0x1250e2a4] */
  EDX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e7071 push edx */
  push32((uint32_t)(EDX));
  /* 124e7072 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e7077 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 124e707d push eax */
  push32((uint32_t)(EAX));
  /* 124e707e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e7083 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 124e7089 push ecx */
  push32((uint32_t)(ECX));
  /* 124e708a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 124e708f mov edx, dword ptr [0x1250e544] */
  EDX = (r32((uint32_t)(0x1250e544)));
  /* 124e7095 push edx */
  push32((uint32_t)(EDX));
  /* 124e7096 call 0x124e8db0 */
  push32(0x124e709bu); f_124e8db0();
  /* 124e709b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e709e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 124e70a8 jmp 0x124e70b9 */
  goto L_124e70b9;
L_124e70aa:;
  /* 124e70aa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e70b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e70b3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_124e70b9:;
  /* 124e70b9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e70c3 jae 0x124e7174 */
  if (!C.cf) goto L_124e7174;
  /* 124e70c9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e70cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e70d1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 124e70d9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e70dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e70de je 0x124e7116 */
  if (C.zf) goto L_124e7116;
  /* 124e70e0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e70e6 mov cl, byte ptr [eax + 0x1250e441] */
  CL = (r8((uint32_t)(EAX + 0x1250e441)));
  /* 124e70ec or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 124e70ef mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e70f5 mov byte ptr [edx + 0x1250e441], cl */
  w8((uint32_t)(EDX + 0x1250e441), (CL));
  /* 124e70fb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7101 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7107 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 124e710e mov byte ptr [eax + 0x1250e340], dl */
  w8((uint32_t)(EAX + 0x1250e340), (DL));
  /* 124e7114 jmp 0x124e716f */
  goto L_124e716f;
L_124e7116:;
  /* 124e7116 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e711c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e711e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 124e7126 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 124e7129 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e712b je 0x124e7162 */
  if (C.zf) goto L_124e7162;
  /* 124e712d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7133 mov al, byte ptr [edx + 0x1250e441] */
  AL = (r8((uint32_t)(EDX + 0x1250e441)));
  /* 124e7139 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 124e713b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7141 mov byte ptr [ecx + 0x1250e441], al */
  w8((uint32_t)(ECX + 0x1250e441), (AL));
  /* 124e7147 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e714d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7153 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 124e715a mov byte ptr [edx + 0x1250e340], cl */
  w8((uint32_t)(EDX + 0x1250e340), (CL));
  /* 124e7160 jmp 0x124e716f */
  goto L_124e716f;
L_124e7162:;
  /* 124e7162 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7168 mov byte ptr [edx + 0x1250e340], 0 */
  w8((uint32_t)(EDX + 0x1250e340), (0x0u));
L_124e716f:;
  /* 124e716f jmp 0x124e70aa */
  goto L_124e70aa;
L_124e7174:;
  /* 124e7174 jmp 0x124e723e */
  goto L_124e723e;
L_124e7179:;
  /* 124e7179 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 124e7183 jmp 0x124e7194 */
  goto L_124e7194;
L_124e7185:;
  /* 124e7185 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e718b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e718e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_124e7194:;
  /* 124e7194 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e719e jae 0x124e723e */
  if (!C.cf) goto L_124e723e;
  /* 124e71a4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e71ab jb 0x124e71e8 */
  if (C.cf) goto L_124e71e8;
  /* 124e71ad cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e71b4 ja 0x124e71e8 */
  if ((!C.cf&&!C.zf)) goto L_124e71e8;
  /* 124e71b6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e71bc mov dl, byte ptr [ecx + 0x1250e441] */
  DL = (r8((uint32_t)(ECX + 0x1250e441)));
  /* 124e71c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 124e71c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e71cb mov byte ptr [eax + 0x1250e441], dl */
  w8((uint32_t)(EAX + 0x1250e441), (DL));
  /* 124e71d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e71d7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e71da mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e71e0 mov byte ptr [edx + 0x1250e340], cl */
  w8((uint32_t)(EDX + 0x1250e340), (CL));
  /* 124e71e6 jmp 0x124e7239 */
  goto L_124e7239;
L_124e71e8:;
  /* 124e71e8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e71ef jb 0x124e722c */
  if (C.cf) goto L_124e722c;
  /* 124e71f1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e71f8 ja 0x124e722c */
  if ((!C.cf&&!C.zf)) goto L_124e722c;
  /* 124e71fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7200 mov cl, byte ptr [eax + 0x1250e441] */
  CL = (r8((uint32_t)(EAX + 0x1250e441)));
  /* 124e7206 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124e7209 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e720f mov byte ptr [edx + 0x1250e441], cl */
  w8((uint32_t)(EDX + 0x1250e441), (CL));
  /* 124e7215 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e721b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e721e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7224 mov byte ptr [ecx + 0x1250e340], al */
  w8((uint32_t)(ECX + 0x1250e340), (AL));
  /* 124e722a jmp 0x124e7239 */
  goto L_124e7239;
L_124e722c:;
  /* 124e722c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 124e7232 mov byte ptr [edx + 0x1250e340], 0 */
  w8((uint32_t)(EDX + 0x1250e340), (0x0u));
L_124e7239:;
  /* 124e7239 jmp 0x124e7185 */
  goto L_124e7185;
L_124e723e:;
  /* 124e723e mov esp, ebp */
  ESP = (EBP);
  /* 124e7240 pop ebp */
  EBP = (pop32());
  /* 124e7241 ret  */
  ESPCHK(0x124e6f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017250 @ 0x124e7250 (23 bytes, 9 insns) */
void f_124e7250(void) {
  FTRACE(0x124e7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e7250 push ebp */
  push32((uint32_t)(EBP));
  /* 124e7251 mov ebp, esp */
  EBP = (ESP);
  /* 124e7253 cmp dword ptr [0x1250e32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e725a je 0x124e7263 */
  if (C.zf) goto L_124e7263;
  /* 124e725c mov eax, dword ptr [0x1250e2a4] */
  EAX = (r32((uint32_t)(0x1250e2a4)));
  /* 124e7261 jmp 0x124e7265 */
  goto L_124e7265;
L_124e7263:;
  /* 124e7263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124e7265:;
  /* 124e7265 pop ebp */
  EBP = (pop32());
  /* 124e7266 ret  */
  ESPCHK(0x124e7250u, _esp0);
  ESP += 4; return;
}

/* FUN_10017270 @ 0x124e7270 (34 bytes, 10 insns) */
void f_124e7270(void) {
  FTRACE(0x124e7270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e7270 push ebp */
  push32((uint32_t)(EBP));
  /* 124e7271 mov ebp, esp */
  EBP = (ESP);
  /* 124e7273 cmp dword ptr [0x1250e6f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e6f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e727a jne 0x124e7290 */
  if (!C.zf) goto L_124e7290;
  /* 124e727c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 124e727e call 0x124e6a90 */
  push32(0x124e7283u); f_124e6a90();
  /* 124e7283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7286 mov dword ptr [0x1250e6f0], 1 */
  w32((uint32_t)(0x1250e6f0), (0x1u));
L_124e7290:;
  /* 124e7290 pop ebp */
  EBP = (pop32());
  /* 124e7291 ret  */
  ESPCHK(0x124e7270u, _esp0);
  ESP += 4; return;
}

/* FUN_100172a0 @ 0x124e72a0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_124e72a0(void) {
  FTRACE(0x124e72a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e72a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e72a1 mov ebp, esp */
  EBP = (ESP);
  /* 124e72a3 push edi */
  push32((uint32_t)(EDI));
  /* 124e72a4 push esi */
  push32((uint32_t)(ESI));
  /* 124e72a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124e72a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e72ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124e72ae mov eax, ecx */
  EAX = (ECX);
  /* 124e72b0 mov edx, ecx */
  EDX = (ECX);
  /* 124e72b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e72b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e72b6 jbe 0x124e72c0 */
  if ((C.cf||C.zf)) goto L_124e72c0;
  /* 124e72b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e72ba jb 0x124e7438 */
  if (C.cf) goto L_124e7438;
L_124e72c0:;
  /* 124e72c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 124e72c6 jne 0x124e72dc */
  if (!C.zf) goto L_124e72dc;
  /* 124e72c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e72cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124e72ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e72d1 jb 0x124e72fc */
  if (C.cf) goto L_124e72fc;
  /* 124e72d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e72d5 jmp dword ptr [edx*4 + 0x124e73e8] */
  switch (EDX) {
    case 0: goto L_124e73f8;
    case 1: goto L_124e7400;
    case 2: goto L_124e740c;
    case 3: goto L_124e7420;
    default: x86_unimpl("switch@0x124e72d5 out of table"); return;
  }
L_124e72dc:;
  /* 124e72dc mov eax, edi */
  EAX = (EDI);
  /* 124e72de mov edx, 3 */
  EDX = (0x3u);
  /* 124e72e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e72e6 jb 0x124e72f4 */
  if (C.cf) goto L_124e72f4;
  /* 124e72e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124e72eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e72ed jmp dword ptr [eax*4 + 0x124e7300] */
  switch (EAX) {
    case 1: goto L_124e7310;
    case 2: goto L_124e733c;
    case 3: goto L_124e7360;
    default: x86_unimpl("switch@0x124e72ed out of table"); return;
  }
L_124e72f4:;
  /* 124e72f4 jmp dword ptr [ecx*4 + 0x124e73f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x124e73f8)))); return;
  /* 124e72fb nop  */
  /* nop */
L_124e72fc:;
  /* 124e72fc jmp dword ptr [ecx*4 + 0x124e737c] */
  switch (ECX) {
    case 0: goto L_124e73df;
    case 1: goto L_124e73cc;
    case 2: goto L_124e73c4;
    case 3: goto L_124e73bc;
    case 4: goto L_124e73b4;
    case 5: goto L_124e73ac;
    case 6: goto L_124e73a4;
    case 7: goto L_124e739c;
    default: x86_unimpl("switch@0x124e72fc out of table"); return;
  }
  /* 124e7303 nop  */
  /* nop */
L_124e7310:;
  /* 124e7310 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e7312 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e7314 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e7316 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e7319 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e731c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e731f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e7322 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e7325 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7328 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e732b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e732e jb 0x124e72fc */
  if (C.cf) goto L_124e72fc;
  /* 124e7330 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e7332 jmp dword ptr [edx*4 + 0x124e73e8] */
  switch (EDX) {
    case 0: goto L_124e73f8;
    case 1: goto L_124e7400;
    case 2: goto L_124e740c;
    case 3: goto L_124e7420;
    default: x86_unimpl("switch@0x124e7332 out of table"); return;
  }
  /* 124e7339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e733c:;
  /* 124e733c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e733e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e7340 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e7342 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e7345 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e7348 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e734b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e734e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7351 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7354 jb 0x124e72fc */
  if (C.cf) goto L_124e72fc;
  /* 124e7356 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e7358 jmp dword ptr [edx*4 + 0x124e73e8] */
  switch (EDX) {
    case 0: goto L_124e73f8;
    case 1: goto L_124e7400;
    case 2: goto L_124e740c;
    case 3: goto L_124e7420;
    default: x86_unimpl("switch@0x124e7358 out of table"); return;
  }
  /* 124e735f nop  */
  /* nop */
L_124e7360:;
  /* 124e7360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e7362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e7364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e7366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124e7367 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e736a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124e736b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e736e jb 0x124e72fc */
  if (C.cf) goto L_124e72fc;
  /* 124e7370 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e7372 jmp dword ptr [edx*4 + 0x124e73e8] */
  switch (EDX) {
    case 0: goto L_124e73f8;
    case 1: goto L_124e7400;
    case 2: goto L_124e740c;
    case 3: goto L_124e7420;
    default: x86_unimpl("switch@0x124e7372 out of table"); return;
  }
  /* 124e7379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e739c:;
  /* 124e739c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 124e73a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_124e73a4:;
  /* 124e73a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 124e73a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_124e73ac:;
  /* 124e73ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 124e73b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_124e73b4:;
  /* 124e73b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 124e73b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_124e73bc:;
  /* 124e73bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 124e73c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_124e73c4:;
  /* 124e73c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 124e73c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_124e73cc:;
  /* 124e73cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 124e73d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 124e73d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 124e73db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e73dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_124e73df:;
  /* 124e73df jmp dword ptr [edx*4 + 0x124e73e8] */
  switch (EDX) {
    case 0: goto L_124e73f8;
    case 1: goto L_124e7400;
    case 2: goto L_124e740c;
    case 3: goto L_124e7420;
    default: x86_unimpl("switch@0x124e73df out of table"); return;
  }
  /* 124e73e6 mov edi, edi */
  EDI = (EDI);
L_124e73f8:;
  /* 124e73f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e73fb pop esi */
  ESI = (pop32());
  /* 124e73fc pop edi */
  EDI = (pop32());
  /* 124e73fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e73fe ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e73ff nop  */
  /* nop */
L_124e7400:;
  /* 124e7400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e7402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e7404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7407 pop esi */
  ESI = (pop32());
  /* 124e7408 pop edi */
  EDI = (pop32());
  /* 124e7409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e740a ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e740b nop  */
  /* nop */
L_124e740c:;
  /* 124e740c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e740e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e7410 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e7413 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e7416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7419 pop esi */
  ESI = (pop32());
  /* 124e741a pop edi */
  EDI = (pop32());
  /* 124e741b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e741c ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e741d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e7420:;
  /* 124e7420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e7422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e7424 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e7427 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e742a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e742d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e7430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7433 pop esi */
  ESI = (pop32());
  /* 124e7434 pop edi */
  EDI = (pop32());
  /* 124e7435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e7436 ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e7437 nop  */
  /* nop */
L_124e7438:;
  /* 124e7438 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 124e743c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 124e7440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 124e7446 jne 0x124e746c */
  if (!C.zf) goto L_124e746c;
  /* 124e7448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e744b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124e744e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7451 jb 0x124e7460 */
  if (C.cf) goto L_124e7460;
  /* 124e7453 std  */
  C.df=1;
  /* 124e7454 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e7456 cld  */
  C.df=0;
  /* 124e7457 jmp dword ptr [edx*4 + 0x124e7580] */
  switch (EDX) {
    case 0: goto L_124e7590;
    case 1: goto L_124e7598;
    case 2: goto L_124e75a8;
    case 3: goto L_124e75bc;
    default: x86_unimpl("switch@0x124e7457 out of table"); return;
  }
  /* 124e745e mov edi, edi */
  EDI = (EDI);
L_124e7460:;
  /* 124e7460 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e7462 jmp dword ptr [ecx*4 + 0x124e7530] */
  switch (ECX) {
    case 0: goto L_124e7577;
    default: x86_unimpl("switch@0x124e7462 out of table"); return;
  }
  /* 124e7469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e746c:;
  /* 124e746c mov eax, edi */
  EAX = (EDI);
  /* 124e746e mov edx, 3 */
  EDX = (0x3u);
  /* 124e7473 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7476 jb 0x124e7484 */
  if (C.cf) goto L_124e7484;
  /* 124e7478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124e747b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e747d jmp dword ptr [eax*4 + 0x124e7488] */
  switch (EAX) {
    case 1: goto L_124e7498;
    case 2: goto L_124e74b8;
    case 3: goto L_124e74e0;
    default: x86_unimpl("switch@0x124e747d out of table"); return;
  }
L_124e7484:;
  /* 124e7484 jmp dword ptr [ecx*4 + 0x124e7580] */
  switch (ECX) {
    case 0: goto L_124e7590;
    case 1: goto L_124e7598;
    case 2: goto L_124e75a8;
    case 3: goto L_124e75bc;
    default: x86_unimpl("switch@0x124e7484 out of table"); return;
  }
  /* 124e748b nop  */
  /* nop */
L_124e7498:;
  /* 124e7498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e749b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e749d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e74a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 124e74a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e74a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 124e74a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e74a8 jb 0x124e7460 */
  if (C.cf) goto L_124e7460;
  /* 124e74aa std  */
  C.df=1;
  /* 124e74ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e74ad cld  */
  C.df=0;
  /* 124e74ae jmp dword ptr [edx*4 + 0x124e7580] */
  switch (EDX) {
    case 0: goto L_124e7590;
    case 1: goto L_124e7598;
    case 2: goto L_124e75a8;
    case 3: goto L_124e75bc;
    default: x86_unimpl("switch@0x124e74ae out of table"); return;
  }
  /* 124e74b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e74b8:;
  /* 124e74b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e74bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e74bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e74c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e74c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e74c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e74c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e74cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e74cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e74d2 jb 0x124e7460 */
  if (C.cf) goto L_124e7460;
  /* 124e74d4 std  */
  C.df=1;
  /* 124e74d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e74d7 cld  */
  C.df=0;
  /* 124e74d8 jmp dword ptr [edx*4 + 0x124e7580] */
  switch (EDX) {
    case 0: goto L_124e7590;
    case 1: goto L_124e7598;
    case 2: goto L_124e75a8;
    case 3: goto L_124e75bc;
    default: x86_unimpl("switch@0x124e74d8 out of table"); return;
  }
  /* 124e74df nop  */
  /* nop */
L_124e74e0:;
  /* 124e74e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e74e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e74e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e74e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e74eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e74ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e74f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e74f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e74f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e74fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e74fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7500 jb 0x124e7460 */
  if (C.cf) goto L_124e7460;
  /* 124e7506 std  */
  C.df=1;
  /* 124e7507 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e7509 cld  */
  C.df=0;
  /* 124e750a jmp dword ptr [edx*4 + 0x124e7580] */
  switch (EDX) {
    case 0: goto L_124e7590;
    case 1: goto L_124e7598;
    case 2: goto L_124e75a8;
    case 3: goto L_124e75bc;
    default: x86_unimpl("switch@0x124e750a out of table"); return;
  }
  /* 124e7511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 124e7514 xor al, 0x75 */
  { uint32_t _r=(AL)^(0x75u); AL = (_r); fl_logic(_r,8); }
  /* 124e7516 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 124e7517 adc bh, byte ptr [esi*2 + 0x7544124e] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ESI*2 + 0x7544124e))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 124e751e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 124e751f adc cl, byte ptr [ebp + esi*2 + 0x4e] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + ESI*2 + 0x4e))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e7523 adc dl, byte ptr [ebp + esi*2 + 0x4e] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + ESI*2 + 0x4e))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e7527 adc bl, byte ptr [ebp + esi*2 + 0x4e] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBP + ESI*2 + 0x4e))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e752b adc ah, byte ptr [ebp + esi*2 + 0x4e] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBP + ESI*2 + 0x4e))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 124e7534 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 124e7538 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 124e753c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 124e7540 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 124e7544 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 124e7548 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 124e754c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 124e7550 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 124e7554 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 124e7558 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 124e755c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 124e7560 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 124e7564 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 124e7568 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 124e756c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 124e7573 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7575 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_124e7577:;
  /* 124e7577 jmp dword ptr [edx*4 + 0x124e7580] */
  switch (EDX) {
    case 0: goto L_124e7590;
    case 1: goto L_124e7598;
    case 2: goto L_124e75a8;
    case 3: goto L_124e75bc;
    default: x86_unimpl("switch@0x124e7577 out of table"); return;
  }
  /* 124e757e mov edi, edi */
  EDI = (EDI);
L_124e7590:;
  /* 124e7590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7593 pop esi */
  ESI = (pop32());
  /* 124e7594 pop edi */
  EDI = (pop32());
  /* 124e7595 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e7596 ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e7597 nop  */
  /* nop */
L_124e7598:;
  /* 124e7598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e759b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e759e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e75a1 pop esi */
  ESI = (pop32());
  /* 124e75a2 pop edi */
  EDI = (pop32());
  /* 124e75a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e75a4 ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e75a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e75a8:;
  /* 124e75a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e75ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e75ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e75b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e75b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e75b7 pop esi */
  ESI = (pop32());
  /* 124e75b8 pop edi */
  EDI = (pop32());
  /* 124e75b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e75ba ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
  /* 124e75bb nop  */
  /* nop */
L_124e75bc:;
  /* 124e75bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e75bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e75c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e75c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e75c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e75cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e75ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e75d1 pop esi */
  ESI = (pop32());
  /* 124e75d2 pop edi */
  EDI = (pop32());
  /* 124e75d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e75d4 ret  */
  ESPCHK(0x124e72a0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x124e75e0 (104 bytes, 43 insns) */
void f_124e75e0(void) {
  FTRACE(0x124e75e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e75e0 push ebx */
  push32((uint32_t)(EBX));
  /* 124e75e1 push esi */
  push32((uint32_t)(ESI));
  /* 124e75e2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 124e75e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e75e8 jne 0x124e7602 */
  if (!C.zf) goto L_124e7602;
  /* 124e75ea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 124e75ee mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 124e75f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e75f4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e75f6 mov ebx, eax */
  EBX = (EAX);
  /* 124e75f8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 124e75fc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e75fe mov edx, ebx */
  EDX = (EBX);
  /* 124e7600 jmp 0x124e7643 */
  goto L_124e7643;
L_124e7602:;
  /* 124e7602 mov ecx, eax */
  ECX = (EAX);
  /* 124e7604 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 124e7608 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 124e760c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_124e7610:;
  /* 124e7610 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 124e7612 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 124e7614 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 124e7616 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 124e7618 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e761a jne 0x124e7610 */
  if (!C.zf) goto L_124e7610;
  /* 124e761c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e761e mov esi, eax */
  ESI = (EAX);
  /* 124e7620 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124e7624 mov ecx, eax */
  ECX = (EAX);
  /* 124e7626 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 124e762a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124e762c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e762e jb 0x124e763e */
  if (C.cf) goto L_124e763e;
  /* 124e7630 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7634 ja 0x124e763e */
  if ((!C.cf&&!C.zf)) goto L_124e763e;
  /* 124e7636 jb 0x124e763f */
  if (C.cf) goto L_124e763f;
  /* 124e7638 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e763c jbe 0x124e763f */
  if ((C.cf||C.zf)) goto L_124e763f;
L_124e763e:;
  /* 124e763e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_124e763f:;
  /* 124e763f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e7641 mov eax, esi */
  EAX = (ESI);
L_124e7643:;
  /* 124e7643 pop esi */
  ESI = (pop32());
  /* 124e7644 pop ebx */
  EBX = (pop32());
  /* 124e7645 ret 0x10 */
  ESPCHK(0x124e75e0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x124e7650 (117 bytes, 44 insns) */
void f_124e7650(void) {
  FTRACE(0x124e7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e7650 push ebx */
  push32((uint32_t)(EBX));
  /* 124e7651 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 124e7655 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e7657 jne 0x124e7671 */
  if (!C.zf) goto L_124e7671;
  /* 124e7659 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 124e765d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 124e7661 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e7663 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e7665 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124e7669 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e766b mov eax, edx */
  EAX = (EDX);
  /* 124e766d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124e766f jmp 0x124e76c1 */
  goto L_124e76c1;
L_124e7671:;
  /* 124e7671 mov ecx, eax */
  ECX = (EAX);
  /* 124e7673 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 124e7677 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 124e767b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_124e767f:;
  /* 124e767f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 124e7681 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 124e7683 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 124e7685 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 124e7687 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e7689 jne 0x124e767f */
  if (!C.zf) goto L_124e767f;
  /* 124e768b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e768d mov ecx, eax */
  ECX = (EAX);
  /* 124e768f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124e7693 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 124e7694 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124e7698 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e769a jb 0x124e76aa */
  if (C.cf) goto L_124e76aa;
  /* 124e769c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e76a0 ja 0x124e76aa */
  if ((!C.cf&&!C.zf)) goto L_124e76aa;
  /* 124e76a2 jb 0x124e76b2 */
  if (C.cf) goto L_124e76b2;
  /* 124e76a4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e76a8 jbe 0x124e76b2 */
  if ((C.cf||C.zf)) goto L_124e76b2;
L_124e76aa:;
  /* 124e76aa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e76ae sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_124e76b2:;
  /* 124e76b2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e76b6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e76ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e76bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e76be sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_124e76c1:;
  /* 124e76c1 pop ebx */
  EBX = (pop32());
  /* 124e76c2 ret 0x10 */
  ESPCHK(0x124e7650u, _esp0);
  ESP += 20; return;
}

/* FUN_100176d0 @ 0x124e76d0 (628 bytes, 214 insns) */
void f_124e76d0(void) {
  FTRACE(0x124e76d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e76d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e76d1 mov ebp, esp */
  EBP = (ESP);
  /* 124e76d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e76d6 push ebx */
  push32((uint32_t)(EBX));
  /* 124e76d7 push esi */
  push32((uint32_t)(ESI));
  /* 124e76d8 push edi */
  push32((uint32_t)(EDI));
L_124e76d9:;
  /* 124e76d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e76dd jne 0x124e76fd */
  if (!C.zf) goto L_124e76fd;
  /* 124e76df push 0x12508964 */
  push32((uint32_t)(0x12508964u));
  /* 124e76e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e76e6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 124e76e8 push 0x12508958 */
  push32((uint32_t)(0x12508958u));
  /* 124e76ed push 2 */
  push32((uint32_t)(0x2u));
  /* 124e76ef call 0x124dfa80 */
  push32(0x124e76f4u); f_124dfa80();
  /* 124e76f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e76f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e76fa jne 0x124e76fd */
  if (!C.zf) goto L_124e76fd;
  /* 124e76fc int3  */
  x86_unimpl("int3 @ 0x124e76fc");
L_124e76fd:;
  /* 124e76fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e76ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7701 jne 0x124e76d9 */
  if (!C.zf) goto L_124e76d9;
  /* 124e7703 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7706 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e7709 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e770c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124e770f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124e7712 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7715 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e7718 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 124e771e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e7720 je 0x124e772f */
  if (C.zf) goto L_124e772f;
  /* 124e7722 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7725 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124e7728 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 124e772b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e772d je 0x124e7745 */
  if (C.zf) goto L_124e7745;
L_124e772f:;
  /* 124e772f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7732 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124e7735 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 124e7737 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e773a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 124e773d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e7740 jmp 0x124e793d */
  goto L_124e793d;
L_124e7745:;
  /* 124e7745 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7748 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124e774b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 124e774e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7750 je 0x124e779c */
  if (C.zf) goto L_124e779c;
  /* 124e7752 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7755 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 124e775c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e775f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124e7762 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 124e7765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7767 je 0x124e7785 */
  if (C.zf) goto L_124e7785;
  /* 124e7769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e776c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e776f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e7772 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124e7774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7777 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e777a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 124e777d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7780 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124e7783 jmp 0x124e779c */
  goto L_124e779c;
L_124e7785:;
  /* 124e7785 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7788 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e778b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 124e778e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7791 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124e7794 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e7797 jmp 0x124e793d */
  goto L_124e793d;
L_124e779c:;
  /* 124e779c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e779f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e77a2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 124e77a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e77a8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124e77ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e77ae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e77b1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 124e77b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e77b7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124e77ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e77bd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 124e77c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e77cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e77ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124e77d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e77d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124e77d7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 124e77dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e77df jne 0x124e780f */
  if (!C.zf) goto L_124e780f;
  /* 124e77e1 cmp dword ptr [ebp - 8], 0x1250b140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1250b140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e77e8 je 0x124e77f3 */
  if (C.zf) goto L_124e77f3;
  /* 124e77ea cmp dword ptr [ebp - 8], 0x1250b160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1250b160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e77f1 jne 0x124e7803 */
  if (!C.zf) goto L_124e7803;
L_124e77f3:;
  /* 124e77f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e77f6 push edx */
  push32((uint32_t)(EDX));
  /* 124e77f7 call 0x124e9640 */
  push32(0x124e77fcu); f_124e9640();
  /* 124e77fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e77ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7801 jne 0x124e780f */
  if (!C.zf) goto L_124e780f;
L_124e7803:;
  /* 124e7803 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7806 push eax */
  push32((uint32_t)(EAX));
  /* 124e7807 call 0x124e9570 */
  push32(0x124e780cu); f_124e9570();
  /* 124e780c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e780f:;
  /* 124e780f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7812 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e7815 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 124e781b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e781d je 0x124e78fb */
  if (C.zf) goto L_124e78fb;
L_124e7823:;
  /* 124e7823 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7826 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7829 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 124e782b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e782e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e7830 jge 0x124e7853 */
  if ((C.sf==C.of)) goto L_124e7853;
  /* 124e7832 push 0x12508918 */
  push32((uint32_t)(0x12508918u));
  /* 124e7837 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e7839 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 124e783e push 0x12508958 */
  push32((uint32_t)(0x12508958u));
  /* 124e7843 push 2 */
  push32((uint32_t)(0x2u));
  /* 124e7845 call 0x124dfa80 */
  push32(0x124e784au); f_124dfa80();
  /* 124e784a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e784d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7850 jne 0x124e7853 */
  if (!C.zf) goto L_124e7853;
  /* 124e7852 int3  */
  x86_unimpl("int3 @ 0x124e7852");
L_124e7853:;
  /* 124e7853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e7855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7857 jne 0x124e7823 */
  if (!C.zf) goto L_124e7823;
  /* 124e7859 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e785c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e785f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 124e7861 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7864 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e7867 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e786a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124e786d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7873 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124e7875 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7878 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124e787b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e787e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7881 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124e7884 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7888 jle 0x124e78a6 */
  if ((C.zf||C.sf!=C.of)) goto L_124e78a6;
  /* 124e788a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e788d push ecx */
  push32((uint32_t)(ECX));
  /* 124e788e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7891 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e7894 push eax */
  push32((uint32_t)(EAX));
  /* 124e7895 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e7898 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7899 call 0x124e9260 */
  push32(0x124e789eu); f_124e9260();
  /* 124e789e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e78a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124e78a4 jmp 0x124e78ee */
  goto L_124e78ee;
L_124e78a6:;
  /* 124e78a6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e78aa je 0x124e78c9 */
  if (C.zf) goto L_124e78c9;
  /* 124e78ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e78af sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124e78b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e78b5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124e78b8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e78bb mov ecx, dword ptr [edx*4 + 0x1250e5a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e78c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e78c4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 124e78c7 jmp 0x124e78d0 */
  goto L_124e78d0;
L_124e78c9:;
  /* 124e78c9 mov dword ptr [ebp - 0x14], 0x1250aa60 */
  w32((uint32_t)(EBP + -0x14), (0x1250aa60u));
L_124e78d0:;
  /* 124e78d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124e78d3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 124e78d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 124e78da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e78dc je 0x124e78ee */
  if (C.zf) goto L_124e78ee;
  /* 124e78de push 2 */
  push32((uint32_t)(0x2u));
  /* 124e78e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e78e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e78e5 push ecx */
  push32((uint32_t)(ECX));
  /* 124e78e6 call 0x124e9110 */
  push32(0x124e78ebu); f_124e9110();
  /* 124e78eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e78ee:;
  /* 124e78ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e78f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e78f4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 124e78f7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 124e78f9 jmp 0x124e7919 */
  goto L_124e7919;
L_124e78fb:;
  /* 124e78fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124e7902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7905 push edx */
  push32((uint32_t)(EDX));
  /* 124e7906 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 124e7909 push eax */
  push32((uint32_t)(EAX));
  /* 124e790a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e790d push ecx */
  push32((uint32_t)(ECX));
  /* 124e790e call 0x124e9260 */
  push32(0x124e7913u); f_124e9260();
  /* 124e7913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7916 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124e7919:;
  /* 124e7919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e791c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e791f je 0x124e7935 */
  if (C.zf) goto L_124e7935;
  /* 124e7921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7924 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124e7927 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124e792a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e792d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 124e7930 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e7933 jmp 0x124e793d */
  goto L_124e793d;
L_124e7935:;
  /* 124e7935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7938 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_124e793d:;
  /* 124e793d pop edi */
  EDI = (pop32());
  /* 124e793e pop esi */
  ESI = (pop32());
  /* 124e793f pop ebx */
  EBX = (pop32());
  /* 124e7940 mov esp, ebp */
  ESP = (EBP);
  /* 124e7942 pop ebp */
  EBP = (pop32());
  /* 124e7943 ret  */
  ESPCHK(0x124e76d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017950 @ 0x124e7950 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_124e7950(void) {
  FTRACE(0x124e7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e7950 push ebp */
  push32((uint32_t)(EBP));
  /* 124e7951 mov ebp, esp */
  EBP = (ESP);
  /* 124e7953 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7959 push ebx */
  push32((uint32_t)(EBX));
  /* 124e795a push esi */
  push32((uint32_t)(ESI));
  /* 124e795b push edi */
  push32((uint32_t)(EDI));
  /* 124e795c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124e7963 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 124e796d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_124e7974:;
  /* 124e7974 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7977 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124e7979 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 124e797c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7980 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7983 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7986 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 124e7989 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e798b je 0x124e8567 */
  if (C.zf) goto L_124e8567;
  /* 124e7991 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7998 jl 0x124e8567 */
  if ((C.sf!=C.of)) goto L_124e8567;
  /* 124e799e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e79a2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e79a5 jl 0x124e79c6 */
  if ((C.sf!=C.of)) goto L_124e79c6;
  /* 124e79a7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e79ab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e79ae jg 0x124e79c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_124e79c6;
  /* 124e79b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e79b4 movsx ecx, byte ptr [eax + 0x12508950] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12508950))));
  /* 124e79bb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 124e79be mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 124e79c4 jmp 0x124e79d0 */
  goto L_124e79d0;
L_124e79c6:;
  /* 124e79c6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_124e79d0:;
  /* 124e79d0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 124e79d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124e79d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e79dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e79df movsx edx, byte ptr [ecx + eax*8 + 0x12508970] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12508970))));
  /* 124e79e7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 124e79ea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124e79ed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124e79f0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 124e79f6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e79fd ja 0x124e8562 */
  if ((!C.cf&&!C.zf)) goto L_124e8562;
  /* 124e7a03 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 124e7a09 jmp dword ptr [ecx*4 + 0x124e8574] */
  switch (ECX) {
    case 0: goto L_124e7a10;
    case 1: goto L_124e7aaa;
    case 2: goto L_124e7aec;
    case 3: goto L_124e7b5b;
    case 4: goto L_124e7bb3;
    case 5: goto L_124e7bc2;
    case 6: goto L_124e7c0e;
    case 7: goto L_124e7ca1;
    case 8: goto L_124e7b38;
    case 9: goto L_124e7b43;
    case 10: goto L_124e7b2e;
    case 11: goto L_124e7b23;
    case 12: goto L_124e7b4e;
    case 13: goto L_124e7b56;
    default: x86_unimpl("switch@0x124e7a09 out of table"); return;
  }
L_124e7a10:;
  /* 124e7a10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 124e7a17 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e7a1a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124e7a20 mov eax, dword ptr [0x1250ac98] */
  EAX = (r32((uint32_t)(0x1250ac98)));
  /* 124e7a25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e7a27 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124e7a2b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 124e7a31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e7a33 je 0x124e7a8d */
  if (C.zf) goto L_124e7a8d;
  /* 124e7a35 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 124e7a3b push edx */
  push32((uint32_t)(EDX));
  /* 124e7a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7a3f push eax */
  push32((uint32_t)(EAX));
  /* 124e7a40 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7a44 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7a45 call 0x124e8680 */
  push32(0x124e7a4au); f_124e8680();
  /* 124e7a4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7a4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7a50 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124e7a52 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 124e7a55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7a58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7a5b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_124e7a5e:;
  /* 124e7a5e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7a62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e7a64 jne 0x124e7a87 */
  if (!C.zf) goto L_124e7a87;
  /* 124e7a66 push 0x125089f0 */
  push32((uint32_t)(0x125089f0u));
  /* 124e7a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 124e7a6d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 124e7a72 push 0x125089e4 */
  push32((uint32_t)(0x125089e4u));
  /* 124e7a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 124e7a79 call 0x124dfa80 */
  push32(0x124e7a7eu); f_124dfa80();
  /* 124e7a7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7a84 jne 0x124e7a87 */
  if (!C.zf) goto L_124e7a87;
  /* 124e7a86 int3  */
  x86_unimpl("int3 @ 0x124e7a86");
L_124e7a87:;
  /* 124e7a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e7a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7a8b jne 0x124e7a5e */
  if (!C.zf) goto L_124e7a5e;
L_124e7a8d:;
  /* 124e7a8d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 124e7a93 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7a94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e7a97 push edx */
  push32((uint32_t)(EDX));
  /* 124e7a98 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7a9c push eax */
  push32((uint32_t)(EAX));
  /* 124e7a9d call 0x124e8680 */
  push32(0x124e7aa2u); f_124e8680();
  /* 124e7aa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7aa5 jmp 0x124e8562 */
  goto L_124e8562;
L_124e7aaa:;
  /* 124e7aaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124e7ab1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7ab4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 124e7aba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 124e7ac0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 124e7ac6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 124e7acc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124e7acf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e7ad6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 124e7ae0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 124e7ae7 jmp 0x124e8562 */
  goto L_124e8562;
L_124e7aec:;
  /* 124e7aec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7af0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 124e7af6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 124e7afc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7aff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 124e7b05 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7b0c ja 0x124e7b56 */
  if ((!C.cf&&!C.zf)) goto L_124e7b56;
  /* 124e7b0e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 124e7b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e7b16 mov al, byte ptr [ecx + 0x124e85ac] */
  AL = (r8((uint32_t)(ECX + 0x124e85ac)));
  /* 124e7b1c jmp dword ptr [eax*4 + 0x124e8594] */
  switch (EAX) {
    case 0: goto L_124e7b38;
    case 1: goto L_124e7b43;
    case 2: goto L_124e7b2e;
    case 3: goto L_124e7b23;
    case 4: goto L_124e7b4e;
    case 5: goto L_124e7b56;
    default: x86_unimpl("switch@0x124e7b1c out of table"); return;
  }
L_124e7b23:;
  /* 124e7b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7b26 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124e7b29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e7b2c jmp 0x124e7b56 */
  goto L_124e7b56;
L_124e7b2e:;
  /* 124e7b2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7b31 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 124e7b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e7b36 jmp 0x124e7b56 */
  goto L_124e7b56;
L_124e7b38:;
  /* 124e7b38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7b3b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 124e7b3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e7b41 jmp 0x124e7b56 */
  goto L_124e7b56;
L_124e7b43:;
  /* 124e7b43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7b46 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 124e7b49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e7b4c jmp 0x124e7b56 */
  goto L_124e7b56;
L_124e7b4e:;
  /* 124e7b4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7b51 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 124e7b53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124e7b56:;
  /* 124e7b56 jmp 0x124e8562 */
  goto L_124e8562;
L_124e7b5b:;
  /* 124e7b5b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7b5f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7b62 jne 0x124e7b97 */
  if (!C.zf) goto L_124e7b97;
  /* 124e7b64 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 124e7b67 push edx */
  push32((uint32_t)(EDX));
  /* 124e7b68 call 0x124e8790 */
  push32(0x124e7b6du); f_124e8790();
  /* 124e7b6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7b70 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 124e7b76 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7b7d jge 0x124e7b95 */
  if ((C.sf==C.of)) goto L_124e7b95;
  /* 124e7b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7b82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 124e7b84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e7b87 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 124e7b8d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e7b8f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_124e7b95:;
  /* 124e7b95 jmp 0x124e7bae */
  goto L_124e7bae;
L_124e7b97:;
  /* 124e7b97 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 124e7b9d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e7ba0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7ba4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 124e7ba8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_124e7bae:;
  /* 124e7bae jmp 0x124e8562 */
  goto L_124e8562;
L_124e7bb3:;
  /* 124e7bb3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 124e7bbd jmp 0x124e8562 */
  goto L_124e8562;
L_124e7bc2:;
  /* 124e7bc2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7bc6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7bc9 jne 0x124e7bf2 */
  if (!C.zf) goto L_124e7bf2;
  /* 124e7bcb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 124e7bce push eax */
  push32((uint32_t)(EAX));
  /* 124e7bcf call 0x124e8790 */
  push32(0x124e7bd4u); f_124e8790();
  /* 124e7bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7bd7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 124e7bdd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7be4 jge 0x124e7bf0 */
  if ((C.sf==C.of)) goto L_124e7bf0;
  /* 124e7be6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_124e7bf0:;
  /* 124e7bf0 jmp 0x124e7c09 */
  goto L_124e7c09;
L_124e7bf2:;
  /* 124e7bf2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 124e7bf8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e7bfb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7bff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 124e7c03 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_124e7c09:;
  /* 124e7c09 jmp 0x124e8562 */
  goto L_124e8562;
L_124e7c0e:;
  /* 124e7c0e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7c12 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 124e7c18 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 124e7c1e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7c21 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 124e7c27 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7c2e ja 0x124e7c9c */
  if ((!C.cf&&!C.zf)) goto L_124e7c9c;
  /* 124e7c30 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 124e7c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e7c38 mov al, byte ptr [ecx + 0x124e85d1] */
  AL = (r8((uint32_t)(ECX + 0x124e85d1)));
  /* 124e7c3e jmp dword ptr [eax*4 + 0x124e85bd] */
  switch (EAX) {
    case 0: goto L_124e7c50;
    case 1: goto L_124e7c89;
    case 2: goto L_124e7c45;
    case 3: goto L_124e7c93;
    case 4: goto L_124e7c9c;
    default: x86_unimpl("switch@0x124e7c3e out of table"); return;
  }
L_124e7c45:;
  /* 124e7c45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7c48 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 124e7c4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e7c4e jmp 0x124e7c9c */
  goto L_124e7c9c;
L_124e7c50:;
  /* 124e7c50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7c53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124e7c56 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7c59 jne 0x124e7c7b */
  if (!C.zf) goto L_124e7c7b;
  /* 124e7c5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7c5e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124e7c62 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7c65 jne 0x124e7c7b */
  if (!C.zf) goto L_124e7c7b;
  /* 124e7c67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e7c6a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7c6d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124e7c70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7c73 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 124e7c76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e7c79 jmp 0x124e7c87 */
  goto L_124e7c87;
L_124e7c7b:;
  /* 124e7c7b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 124e7c82 jmp 0x124e7a10 */
  goto L_124e7a10;
L_124e7c87:;
  /* 124e7c87 jmp 0x124e7c9c */
  goto L_124e7c9c;
L_124e7c89:;
  /* 124e7c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7c8c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 124e7c8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e7c91 jmp 0x124e7c9c */
  goto L_124e7c9c;
L_124e7c93:;
  /* 124e7c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7c96 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 124e7c99 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124e7c9c:;
  /* 124e7c9c jmp 0x124e8562 */
  goto L_124e8562;
L_124e7ca1:;
  /* 124e7ca1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7ca5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 124e7cab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 124e7cb1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7cb4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 124e7cba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7cc1 ja 0x124e8387 */
  if ((!C.cf&&!C.zf)) goto L_124e8387;
  /* 124e7cc7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 124e7ccd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e7ccf mov cl, byte ptr [edx + 0x124e863c] */
  CL = (r8((uint32_t)(EDX + 0x124e863c)));
  /* 124e7cd5 jmp dword ptr [ecx*4 + 0x124e8600] */
  switch (ECX) {
    case 0: goto L_124e7cdc;
    case 1: goto L_124e7f70;
    case 2: goto L_124e7e00;
    case 3: goto L_124e80a9;
    case 4: goto L_124e7d6b;
    case 5: goto L_124e7cf1;
    case 6: goto L_124e807b;
    case 7: goto L_124e7f80;
    case 8: goto L_124e7f25;
    case 9: goto L_124e80f5;
    case 10: goto L_124e809f;
    case 11: goto L_124e7e16;
    case 12: goto L_124e8093;
    case 13: goto L_124e80b5;
    case 14: goto L_124e8387;
    default: x86_unimpl("switch@0x124e7cd5 out of table"); return;
  }
L_124e7cdc:;
  /* 124e7cdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7cdf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 124e7ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7ce6 jne 0x124e7cf1 */
  if (!C.zf) goto L_124e7cf1;
  /* 124e7ce8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7ceb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 124e7cee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124e7cf1:;
  /* 124e7cf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7cf4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 124e7cfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e7cfc je 0x124e7d37 */
  if (C.zf) goto L_124e7d37;
  /* 124e7cfe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 124e7d01 push eax */
  push32((uint32_t)(EAX));
  /* 124e7d02 call 0x124e87d0 */
  push32(0x124e7d07u); f_124e87d0();
  /* 124e7d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7d0a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 124e7d0e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 124e7d12 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7d13 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 124e7d19 push edx */
  push32((uint32_t)(EDX));
  /* 124e7d1a call 0x124e98b0 */
  push32(0x124e7d1fu); f_124e98b0();
  /* 124e7d1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7d22 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124e7d25 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7d29 jge 0x124e7d35 */
  if ((C.sf==C.of)) goto L_124e7d35;
  /* 124e7d2b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_124e7d35:;
  /* 124e7d35 jmp 0x124e7d5d */
  goto L_124e7d5d;
L_124e7d37:;
  /* 124e7d37 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 124e7d3a push eax */
  push32((uint32_t)(EAX));
  /* 124e7d3b call 0x124e8790 */
  push32(0x124e7d40u); f_124e8790();
  /* 124e7d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7d43 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 124e7d4a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 124e7d50 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 124e7d56 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_124e7d5d:;
  /* 124e7d5d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 124e7d63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124e7d66 jmp 0x124e8387 */
  goto L_124e8387;
L_124e7d6b:;
  /* 124e7d6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 124e7d6e push eax */
  push32((uint32_t)(EAX));
  /* 124e7d6f call 0x124e8790 */
  push32(0x124e7d74u); f_124e8790();
  /* 124e7d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7d77 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 124e7d7d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7d84 je 0x124e7d92 */
  if (C.zf) goto L_124e7d92;
  /* 124e7d86 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 124e7d8c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7d90 jne 0x124e7dac */
  if (!C.zf) goto L_124e7dac;
L_124e7d92:;
  /* 124e7d92 mov edx, dword ptr [0x1250afb0] */
  EDX = (r32((uint32_t)(0x1250afb0)));
  /* 124e7d98 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124e7d9b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e7d9e push eax */
  push32((uint32_t)(EAX));
  /* 124e7d9f call 0x124e37f0 */
  push32(0x124e7da4u); f_124e37f0();
  /* 124e7da4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7da7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124e7daa jmp 0x124e7dfb */
  goto L_124e7dfb;
L_124e7dac:;
  /* 124e7dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7daf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 124e7db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e7db7 je 0x124e7ddc */
  if (C.zf) goto L_124e7ddc;
  /* 124e7db9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 124e7dbf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124e7dc2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e7dc5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 124e7dcb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 124e7dce shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 124e7dd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 124e7dd3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 124e7dda jmp 0x124e7dfb */
  goto L_124e7dfb;
L_124e7ddc:;
  /* 124e7ddc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 124e7de3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 124e7de9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e7dec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124e7def mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 124e7df5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 124e7df8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124e7dfb:;
  /* 124e7dfb jmp 0x124e8387 */
  goto L_124e8387;
L_124e7e00:;
  /* 124e7e00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7e03 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 124e7e09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e7e0b jne 0x124e7e16 */
  if (!C.zf) goto L_124e7e16;
  /* 124e7e0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7e10 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 124e7e13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e7e16:;
  /* 124e7e16 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7e1d jne 0x124e7e2b */
  if (!C.zf) goto L_124e7e2b;
  /* 124e7e1f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 124e7e29 jmp 0x124e7e37 */
  goto L_124e7e37;
L_124e7e2b:;
  /* 124e7e2b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 124e7e31 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_124e7e37:;
  /* 124e7e37 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 124e7e3d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 124e7e43 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 124e7e46 push edx */
  push32((uint32_t)(EDX));
  /* 124e7e47 call 0x124e8790 */
  push32(0x124e7e4cu); f_124e8790();
  /* 124e7e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7e4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e7e52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7e55 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 124e7e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7e5c je 0x124e7ec6 */
  if (C.zf) goto L_124e7ec6;
  /* 124e7e5e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7e62 jne 0x124e7e6d */
  if (!C.zf) goto L_124e7e6d;
  /* 124e7e64 mov ecx, dword ptr [0x1250afb4] */
  ECX = (r32((uint32_t)(0x1250afb4)));
  /* 124e7e6a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124e7e6d:;
  /* 124e7e6d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 124e7e74 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e7e77 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_124e7e7d:;
  /* 124e7e7d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 124e7e83 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 124e7e89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7e8c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 124e7e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7e94 je 0x124e7eb6 */
  if (C.zf) goto L_124e7eb6;
  /* 124e7e96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 124e7e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e7e9e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 124e7ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7ea3 je 0x124e7eb6 */
  if (C.zf) goto L_124e7eb6;
  /* 124e7ea5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 124e7eab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7eae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 124e7eb4 jmp 0x124e7e7d */
  goto L_124e7e7d;
L_124e7eb6:;
  /* 124e7eb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 124e7ebc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7ebf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 124e7ec1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 124e7ec4 jmp 0x124e7f20 */
  goto L_124e7f20;
L_124e7ec6:;
  /* 124e7ec6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7eca jne 0x124e7ed4 */
  if (!C.zf) goto L_124e7ed4;
  /* 124e7ecc mov eax, dword ptr [0x1250afb0] */
  EAX = (r32((uint32_t)(0x1250afb0)));
  /* 124e7ed1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_124e7ed4:;
  /* 124e7ed4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e7ed7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_124e7edd:;
  /* 124e7edd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 124e7ee3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 124e7ee9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7eec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 124e7ef2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e7ef4 je 0x124e7f14 */
  if (C.zf) goto L_124e7f14;
  /* 124e7ef6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 124e7efc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124e7eff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e7f01 je 0x124e7f14 */
  if (C.zf) goto L_124e7f14;
  /* 124e7f03 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 124e7f09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7f0c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 124e7f12 jmp 0x124e7edd */
  goto L_124e7edd;
L_124e7f14:;
  /* 124e7f14 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 124e7f1a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7f1d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_124e7f20:;
  /* 124e7f20 jmp 0x124e8387 */
  goto L_124e8387;
L_124e7f25:;
  /* 124e7f25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 124e7f28 push edx */
  push32((uint32_t)(EDX));
  /* 124e7f29 call 0x124e8790 */
  push32(0x124e7f2eu); f_124e8790();
  /* 124e7f2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7f31 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 124e7f37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7f3a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 124e7f3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e7f3f je 0x124e7f53 */
  if (C.zf) goto L_124e7f53;
  /* 124e7f41 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 124e7f47 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 124e7f4e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 124e7f51 jmp 0x124e7f61 */
  goto L_124e7f61;
L_124e7f53:;
  /* 124e7f53 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 124e7f59 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 124e7f5f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_124e7f61:;
  /* 124e7f61 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 124e7f6b jmp 0x124e8387 */
  goto L_124e8387;
L_124e7f70:;
  /* 124e7f70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124e7f77 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 124e7f7a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 124e7f7d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_124e7f80:;
  /* 124e7f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e7f83 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 124e7f85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e7f88 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 124e7f8e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124e7f91 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7f98 jge 0x124e7fa6 */
  if ((C.sf==C.of)) goto L_124e7fa6;
  /* 124e7f9a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 124e7fa4 jmp 0x124e7fc2 */
  goto L_124e7fc2;
L_124e7fa6:;
  /* 124e7fa6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7fad jne 0x124e7fc2 */
  if (!C.zf) goto L_124e7fc2;
  /* 124e7faf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7fb3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e7fb6 jne 0x124e7fc2 */
  if (!C.zf) goto L_124e7fc2;
  /* 124e7fb8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_124e7fc2:;
  /* 124e7fc2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e7fc5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e7fc8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 124e7fcb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e7fce sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e7fd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e7fd3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e7fd6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 124e7fdc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 124e7fe2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e7fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7fe6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 124e7fec push edx */
  push32((uint32_t)(EDX));
  /* 124e7fed movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e7ff1 push eax */
  push32((uint32_t)(EAX));
  /* 124e7ff2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e7ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 124e7ff6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 124e7ffc push edx */
  push32((uint32_t)(EDX));
  /* 124e7ffd call dword ptr [0x1250b3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250b3a0))), 0x124e8003u);
  /* 124e8003 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8009 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 124e800e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8010 je 0x124e8028 */
  if (C.zf) goto L_124e8028;
  /* 124e8012 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8019 jne 0x124e8028 */
  if (!C.zf) goto L_124e8028;
  /* 124e801b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e801e push ecx */
  push32((uint32_t)(ECX));
  /* 124e801f call dword ptr [0x1250b3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250b3ac))), 0x124e8025u);
  /* 124e8025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e8028:;
  /* 124e8028 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 124e802c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e802f jne 0x124e804a */
  if (!C.zf) goto L_124e804a;
  /* 124e8031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8034 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 124e8039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e803b jne 0x124e804a */
  if (!C.zf) goto L_124e804a;
  /* 124e803d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8040 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8041 call dword ptr [0x1250b3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250b3a4))), 0x124e8047u);
  /* 124e8047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e804a:;
  /* 124e804a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e804d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124e8050 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8053 jne 0x124e8067 */
  if (!C.zf) goto L_124e8067;
  /* 124e8055 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8058 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 124e805b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e805e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8064 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_124e8067:;
  /* 124e8067 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e806a push eax */
  push32((uint32_t)(EAX));
  /* 124e806b call 0x124e37f0 */
  push32(0x124e8070u); f_124e37f0();
  /* 124e8070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8073 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124e8076 jmp 0x124e8387 */
  goto L_124e8387;
L_124e807b:;
  /* 124e807b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e807e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 124e8081 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e8084 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 124e808e jmp 0x124e8115 */
  goto L_124e8115;
L_124e8093:;
  /* 124e8093 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 124e809d jmp 0x124e8115 */
  goto L_124e8115;
L_124e809f:;
  /* 124e809f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_124e80a9:;
  /* 124e80a9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 124e80b3 jmp 0x124e80bf */
  goto L_124e80bf;
L_124e80b5:;
  /* 124e80b5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_124e80bf:;
  /* 124e80bf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 124e80c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e80cc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 124e80d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e80d4 je 0x124e80f3 */
  if (C.zf) goto L_124e80f3;
  /* 124e80d6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 124e80dd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 124e80e3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e80e6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 124e80ec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_124e80f3:;
  /* 124e80f3 jmp 0x124e8115 */
  goto L_124e8115;
L_124e80f5:;
  /* 124e80f5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 124e80ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8102 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 124e8108 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e810a je 0x124e8115 */
  if (C.zf) goto L_124e8115;
  /* 124e810c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e810f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 124e8112 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e8115:;
  /* 124e8115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8118 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 124e811d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e811f je 0x124e813e */
  if (C.zf) goto L_124e813e;
  /* 124e8121 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 124e8124 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8125 call 0x124e87b0 */
  push32(0x124e812au); f_124e87b0();
  /* 124e812a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e812d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 124e8133 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 124e8139 jmp 0x124e81cf */
  goto L_124e81cf;
L_124e813e:;
  /* 124e813e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8141 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e8146 je 0x124e8190 */
  if (C.zf) goto L_124e8190;
  /* 124e8148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e814b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 124e814e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8150 je 0x124e8170 */
  if (C.zf) goto L_124e8170;
  /* 124e8152 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 124e8155 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8156 call 0x124e8790 */
  push32(0x124e815bu); f_124e8790();
  /* 124e815b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e815e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 124e8161 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124e8162 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 124e8168 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 124e816e jmp 0x124e818e */
  goto L_124e818e;
L_124e8170:;
  /* 124e8170 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 124e8173 push edx */
  push32((uint32_t)(EDX));
  /* 124e8174 call 0x124e8790 */
  push32(0x124e8179u); f_124e8790();
  /* 124e8179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e817c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e8181 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124e8182 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 124e8188 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_124e818e:;
  /* 124e818e jmp 0x124e81cf */
  goto L_124e81cf;
L_124e8190:;
  /* 124e8190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8193 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 124e8196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8198 je 0x124e81b5 */
  if (C.zf) goto L_124e81b5;
  /* 124e819a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 124e819d push ecx */
  push32((uint32_t)(ECX));
  /* 124e819e call 0x124e8790 */
  push32(0x124e81a3u); f_124e8790();
  /* 124e81a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e81a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124e81a7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 124e81ad mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 124e81b3 jmp 0x124e81cf */
  goto L_124e81cf;
L_124e81b5:;
  /* 124e81b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 124e81b8 push edx */
  push32((uint32_t)(EDX));
  /* 124e81b9 call 0x124e8790 */
  push32(0x124e81beu); f_124e8790();
  /* 124e81be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e81c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124e81c3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 124e81c9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_124e81cf:;
  /* 124e81cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e81d2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 124e81d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e81d7 je 0x124e8217 */
  if (C.zf) goto L_124e8217;
  /* 124e81d9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e81e0 jg 0x124e8217 */
  if ((!C.zf&&C.sf==C.of)) goto L_124e8217;
  /* 124e81e2 jl 0x124e81ed */
  if ((C.sf!=C.of)) goto L_124e81ed;
  /* 124e81e4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e81eb jae 0x124e8217 */
  if (!C.cf) goto L_124e8217;
L_124e81ed:;
  /* 124e81ed mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 124e81f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e81f5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 124e81fb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e81fe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e8200 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 124e8206 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 124e820c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e820f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 124e8212 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e8215 jmp 0x124e822f */
  goto L_124e822f;
L_124e8217:;
  /* 124e8217 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 124e821d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 124e8223 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 124e8229 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_124e822f:;
  /* 124e822f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8232 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e823a jne 0x124e8257 */
  if (!C.zf) goto L_124e8257;
  /* 124e823c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 124e8242 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 124e8248 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 124e824b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 124e8251 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_124e8257:;
  /* 124e8257 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e825e jge 0x124e826c */
  if ((C.sf==C.of)) goto L_124e826c;
  /* 124e8260 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 124e826a jmp 0x124e8275 */
  goto L_124e8275;
L_124e826c:;
  /* 124e826c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e826f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8272 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e8275:;
  /* 124e8275 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 124e827b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 124e8281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8283 jne 0x124e828c */
  if (!C.zf) goto L_124e828c;
  /* 124e8285 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_124e828c:;
  /* 124e828c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 124e828f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124e8292:;
  /* 124e8292 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 124e8298 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 124e829e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e82a1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 124e82a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e82a9 jg 0x124e82bf */
  if ((!C.zf&&C.sf==C.of)) goto L_124e82bf;
  /* 124e82ab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 124e82b1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 124e82b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e82b9 je 0x124e8340 */
  if (C.zf) goto L_124e8340;
L_124e82bf:;
  /* 124e82bf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 124e82c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124e82c6 push edx */
  push32((uint32_t)(EDX));
  /* 124e82c7 push eax */
  push32((uint32_t)(EAX));
  /* 124e82c8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 124e82ce push edx */
  push32((uint32_t)(EDX));
  /* 124e82cf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 124e82d5 push eax */
  push32((uint32_t)(EAX));
  /* 124e82d6 call 0x124e7650 */
  push32(0x124e82dbu); f_124e7650();
  /* 124e82db add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e82de mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 124e82e4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 124e82ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124e82eb push edx */
  push32((uint32_t)(EDX));
  /* 124e82ec push eax */
  push32((uint32_t)(EAX));
  /* 124e82ed mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 124e82f3 push ecx */
  push32((uint32_t)(ECX));
  /* 124e82f4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 124e82fa push edx */
  push32((uint32_t)(EDX));
  /* 124e82fb call 0x124e75e0 */
  push32(0x124e8300u); f_124e75e0();
  /* 124e8300 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 124e8306 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 124e830c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8313 jle 0x124e8327 */
  if ((C.zf||C.sf!=C.of)) goto L_124e8327;
  /* 124e8315 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 124e831b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8321 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_124e8327:;
  /* 124e8327 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e832a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 124e8330 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 124e8332 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8335 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8338 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e833b jmp 0x124e8292 */
  goto L_124e8292;
L_124e8340:;
  /* 124e8340 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 124e8343 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8346 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124e8349 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e834c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e834f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124e8352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8355 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 124e835a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e835c je 0x124e8387 */
  if (C.zf) goto L_124e8387;
  /* 124e835e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8361 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124e8364 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8367 jne 0x124e836f */
  if (!C.zf) goto L_124e836f;
  /* 124e8369 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e836d jne 0x124e8387 */
  if (!C.zf) goto L_124e8387;
L_124e836f:;
  /* 124e836f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8372 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8375 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e8378 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e837b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 124e837e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8381 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8384 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_124e8387:;
  /* 124e8387 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e838e jne 0x124e8562 */
  if (!C.zf) goto L_124e8562;
  /* 124e8394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8397 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 124e839a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e839c je 0x124e83ed */
  if (C.zf) goto L_124e83ed;
  /* 124e839e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e83a1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 124e83a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e83a9 je 0x124e83bb */
  if (C.zf) goto L_124e83bb;
  /* 124e83ab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 124e83b2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 124e83b9 jmp 0x124e83ed */
  goto L_124e83ed;
L_124e83bb:;
  /* 124e83bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e83be and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e83c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e83c3 je 0x124e83d5 */
  if (C.zf) goto L_124e83d5;
  /* 124e83c5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 124e83cc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 124e83d3 jmp 0x124e83ed */
  goto L_124e83ed;
L_124e83d5:;
  /* 124e83d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e83d8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 124e83db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e83dd je 0x124e83ed */
  if (C.zf) goto L_124e83ed;
  /* 124e83df mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 124e83e6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_124e83ed:;
  /* 124e83ed mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 124e83f3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e83f6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e83f9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 124e83ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8402 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 124e8405 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e8407 jne 0x124e8425 */
  if (!C.zf) goto L_124e8425;
  /* 124e8409 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 124e840f push eax */
  push32((uint32_t)(EAX));
  /* 124e8410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8413 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8414 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 124e841a push edx */
  push32((uint32_t)(EDX));
  /* 124e841b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 124e841d call 0x124e8700 */
  push32(0x124e8422u); f_124e8700();
  /* 124e8422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e8425:;
  /* 124e8425 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 124e842b push eax */
  push32((uint32_t)(EAX));
  /* 124e842c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e842f push ecx */
  push32((uint32_t)(ECX));
  /* 124e8430 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e8433 push edx */
  push32((uint32_t)(EDX));
  /* 124e8434 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 124e843a push eax */
  push32((uint32_t)(EAX));
  /* 124e843b call 0x124e8740 */
  push32(0x124e8440u); f_124e8740();
  /* 124e8440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8446 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 124e8449 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e844b je 0x124e8473 */
  if (C.zf) goto L_124e8473;
  /* 124e844d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8450 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8453 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e8455 jne 0x124e8473 */
  if (!C.zf) goto L_124e8473;
  /* 124e8457 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 124e845d push eax */
  push32((uint32_t)(EAX));
  /* 124e845e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8461 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8462 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 124e8468 push edx */
  push32((uint32_t)(EDX));
  /* 124e8469 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124e846b call 0x124e8700 */
  push32(0x124e8470u); f_124e8700();
  /* 124e8470 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e8473:;
  /* 124e8473 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8477 je 0x124e8521 */
  if (C.zf) goto L_124e8521;
  /* 124e847d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8481 jle 0x124e8521 */
  if ((C.zf||C.sf!=C.of)) goto L_124e8521;
  /* 124e8487 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e848a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 124e8490 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8493 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_124e8499:;
  /* 124e8499 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 124e849f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 124e84a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e84a8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 124e84ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e84b0 je 0x124e851f */
  if (C.zf) goto L_124e851f;
  /* 124e84b2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 124e84b8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 124e84bb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 124e84c2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 124e84c9 push eax */
  push32((uint32_t)(EAX));
  /* 124e84ca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 124e84d0 push ecx */
  push32((uint32_t)(ECX));
  /* 124e84d1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 124e84d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e84da mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 124e84e0 call 0x124e98b0 */
  push32(0x124e84e5u); f_124e98b0();
  /* 124e84e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e84e8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 124e84ee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e84f5 jg 0x124e84f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_124e84f9;
  /* 124e84f7 jmp 0x124e851f */
  goto L_124e851f;
L_124e84f9:;
  /* 124e84f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 124e84ff push eax */
  push32((uint32_t)(EAX));
  /* 124e8500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8503 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8504 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 124e850a push edx */
  push32((uint32_t)(EDX));
  /* 124e850b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 124e8511 push eax */
  push32((uint32_t)(EAX));
  /* 124e8512 call 0x124e8740 */
  push32(0x124e8517u); f_124e8740();
  /* 124e8517 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e851a jmp 0x124e8499 */
  goto L_124e8499;
L_124e851f:;
  /* 124e851f jmp 0x124e853c */
  goto L_124e853c;
L_124e8521:;
  /* 124e8521 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 124e8527 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e852b push edx */
  push32((uint32_t)(EDX));
  /* 124e852c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e852f push eax */
  push32((uint32_t)(EAX));
  /* 124e8530 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8533 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8534 call 0x124e8740 */
  push32(0x124e8539u); f_124e8740();
  /* 124e8539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e853c:;
  /* 124e853c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e853f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e8544 je 0x124e8562 */
  if (C.zf) goto L_124e8562;
  /* 124e8546 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 124e854c push eax */
  push32((uint32_t)(EAX));
  /* 124e854d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8550 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8551 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 124e8557 push edx */
  push32((uint32_t)(EDX));
  /* 124e8558 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 124e855a call 0x124e8700 */
  push32(0x124e855fu); f_124e8700();
  /* 124e855f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e8562:;
  /* 124e8562 jmp 0x124e7974 */
  goto L_124e7974;
L_124e8567:;
  /* 124e8567 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 124e856d pop edi */
  EDI = (pop32());
  /* 124e856e pop esi */
  ESI = (pop32());
  /* 124e856f pop ebx */
  EBX = (pop32());
  /* 124e8570 mov esp, ebp */
  ESP = (EBP);
  /* 124e8572 pop ebp */
  EBP = (pop32());
  /* 124e8573 ret  */
  ESPCHK(0x124e7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10018680 @ 0x124e8680 (119 bytes, 44 insns) */
void f_124e8680(void) {
  FTRACE(0x124e8680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8680 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8681 mov ebp, esp */
  EBP = (ESP);
  /* 124e8683 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8684 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8687 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124e868a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e868d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8690 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 124e8693 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8696 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e869a jl 0x124e86c2 */
  if ((C.sf!=C.of)) goto L_124e86c2;
  /* 124e869c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e869f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124e86a1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 124e86a4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124e86a6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 124e86aa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124e86b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e86b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e86b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e86b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e86bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e86be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124e86c0 jmp 0x124e86d5 */
  goto L_124e86d5;
L_124e86c2:;
  /* 124e86c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e86c5 push edx */
  push32((uint32_t)(EDX));
  /* 124e86c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e86c9 push eax */
  push32((uint32_t)(EAX));
  /* 124e86ca call 0x124e76d0 */
  push32(0x124e86cfu); f_124e76d0();
  /* 124e86cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e86d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124e86d5:;
  /* 124e86d5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e86d9 jne 0x124e86e6 */
  if (!C.zf) goto L_124e86e6;
  /* 124e86db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e86de mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124e86e4 jmp 0x124e86f3 */
  goto L_124e86f3;
L_124e86e6:;
  /* 124e86e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e86e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124e86eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e86ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e86f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_124e86f3:;
  /* 124e86f3 mov esp, ebp */
  ESP = (EBP);
  /* 124e86f5 pop ebp */
  EBP = (pop32());
  /* 124e86f6 ret  */
  ESPCHK(0x124e8680u, _esp0);
  ESP += 4; return;
}

/* FUN_10018700 @ 0x124e8700 (53 bytes, 23 insns) */
void f_124e8700(void) {
  FTRACE(0x124e8700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8700 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8701 mov ebp, esp */
  EBP = (ESP);
L_124e8703:;
  /* 124e8703 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8706 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e870c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124e870f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8711 jle 0x124e8733 */
  if ((C.zf||C.sf!=C.of)) goto L_124e8733;
  /* 124e8713 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8716 push edx */
  push32((uint32_t)(EDX));
  /* 124e8717 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e871a push eax */
  push32((uint32_t)(EAX));
  /* 124e871b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e871e push ecx */
  push32((uint32_t)(ECX));
  /* 124e871f call 0x124e8680 */
  push32(0x124e8724u); f_124e8680();
  /* 124e8724 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8727 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e872a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e872d jne 0x124e8731 */
  if (!C.zf) goto L_124e8731;
  /* 124e872f jmp 0x124e8733 */
  goto L_124e8733;
L_124e8731:;
  /* 124e8731 jmp 0x124e8703 */
  goto L_124e8703;
L_124e8733:;
  /* 124e8733 pop ebp */
  EBP = (pop32());
  /* 124e8734 ret  */
  ESPCHK(0x124e8700u, _esp0);
  ESP += 4; return;
}

/* FUN_10018740 @ 0x124e8740 (74 bytes, 31 insns) */
void f_124e8740(void) {
  FTRACE(0x124e8740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8740 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8741 mov ebp, esp */
  EBP = (ESP);
  /* 124e8743 push ecx */
  push32((uint32_t)(ECX));
L_124e8744:;
  /* 124e8744 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8747 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e874a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e874d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124e8750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8752 jle 0x124e8786 */
  if ((C.zf||C.sf!=C.of)) goto L_124e8786;
  /* 124e8754 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8757 push edx */
  push32((uint32_t)(EDX));
  /* 124e8758 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e875b push eax */
  push32((uint32_t)(EAX));
  /* 124e875c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e875f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124e8762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e8765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8768 push eax */
  push32((uint32_t)(EAX));
  /* 124e8769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e876c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e876f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124e8772 call 0x124e8680 */
  push32(0x124e8777u); f_124e8680();
  /* 124e8777 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e877a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e877d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8780 jne 0x124e8784 */
  if (!C.zf) goto L_124e8784;
  /* 124e8782 jmp 0x124e8786 */
  goto L_124e8786;
L_124e8784:;
  /* 124e8784 jmp 0x124e8744 */
  goto L_124e8744;
L_124e8786:;
  /* 124e8786 mov esp, ebp */
  ESP = (EBP);
  /* 124e8788 pop ebp */
  EBP = (pop32());
  /* 124e8789 ret  */
  ESPCHK(0x124e8740u, _esp0);
  ESP += 4; return;
}

/* FUN_10018790 @ 0x124e8790 (26 bytes, 12 insns) */
void f_124e8790(void) {
  FTRACE(0x124e8790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8790 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8791 mov ebp, esp */
  EBP = (ESP);
  /* 124e8793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8796 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e8798 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e879b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e879e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124e87a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e87a5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 124e87a8 pop ebp */
  EBP = (pop32());
  /* 124e87a9 ret  */
  ESPCHK(0x124e8790u, _esp0);
  ESP += 4; return;
}

/* FUN_100187b0 @ 0x124e87b0 (31 bytes, 14 insns) */
void f_124e87b0(void) {
  FTRACE(0x124e87b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e87b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e87b1 mov ebp, esp */
  EBP = (ESP);
  /* 124e87b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e87b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e87bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124e87c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e87c5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e87c8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 124e87ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124e87cd pop ebp */
  EBP = (pop32());
  /* 124e87ce ret  */
  ESPCHK(0x124e87b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100187d0 @ 0x124e87d0 (27 bytes, 12 insns) */
void f_124e87d0(void) {
  FTRACE(0x124e87d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e87d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e87d1 mov ebp, esp */
  EBP = (ESP);
  /* 124e87d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e87d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e87db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124e87e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124e87e5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 124e87e9 pop ebp */
  EBP = (pop32());
  /* 124e87ea ret  */
  ESPCHK(0x124e87d0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x124e87f0 (145 bytes, 42 insns) */
void f_124e87f0(void) {
  FTRACE(0x124e87f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e87f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e87f1 mov ebp, esp */
  EBP = (ESP);
  /* 124e87f3 push ecx */
  push32((uint32_t)(ECX));
  /* 124e87f4 call 0x124e88a0 */
  push32(0x124e87f9u); f_124e88a0();
  /* 124e87f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e87fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124e87fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e8805 jmp 0x124e8810 */
  goto L_124e8810;
L_124e8807:;
  /* 124e8807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e880a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e880d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e8810:;
  /* 124e8810 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8814 jae 0x124e883a */
  if (!C.cf) goto L_124e883a;
  /* 124e8816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e8819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e881c cmp ecx, dword ptr [eax*8 + 0x1250afb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1250afb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8823 jne 0x124e8838 */
  if (!C.zf) goto L_124e8838;
  /* 124e8825 call 0x124e8890 */
  push32(0x124e882au); f_124e8890();
  /* 124e882a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e882d mov ecx, dword ptr [edx*8 + 0x1250afbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1250afbc)));
  /* 124e8834 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124e8836 jmp 0x124e887d */
  goto L_124e887d;
L_124e8838:;
  /* 124e8838 jmp 0x124e8807 */
  goto L_124e8807;
L_124e883a:;
  /* 124e883a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e883e jb 0x124e8853 */
  if (C.cf) goto L_124e8853;
  /* 124e8840 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8844 ja 0x124e8853 */
  if ((!C.cf&&!C.zf)) goto L_124e8853;
  /* 124e8846 call 0x124e8890 */
  push32(0x124e884bu); f_124e8890();
  /* 124e884b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 124e8851 jmp 0x124e887d */
  goto L_124e887d;
L_124e8853:;
  /* 124e8853 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e885a jb 0x124e8872 */
  if (C.cf) goto L_124e8872;
  /* 124e885c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8863 ja 0x124e8872 */
  if ((!C.cf&&!C.zf)) goto L_124e8872;
  /* 124e8865 call 0x124e8890 */
  push32(0x124e886au); f_124e8890();
  /* 124e886a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 124e8870 jmp 0x124e887d */
  goto L_124e887d;
L_124e8872:;
  /* 124e8872 call 0x124e8890 */
  push32(0x124e8877u); f_124e8890();
  /* 124e8877 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_124e887d:;
  /* 124e887d mov esp, ebp */
  ESP = (EBP);
  /* 124e887f pop ebp */
  EBP = (pop32());
  /* 124e8880 ret  */
  ESPCHK(0x124e87f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018890 @ 0x124e8890 (13 bytes, 6 insns) */
void f_124e8890(void) {
  FTRACE(0x124e8890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8890 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8891 mov ebp, esp */
  EBP = (ESP);
  /* 124e8893 call 0x124e0400 */
  push32(0x124e8898u); f_124e0400();
  /* 124e8898 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e889b pop ebp */
  EBP = (pop32());
  /* 124e889c ret  */
  ESPCHK(0x124e8890u, _esp0);
  ESP += 4; return;
}

/* FUN_100188a0 @ 0x124e88a0 (13 bytes, 6 insns) */
void f_124e88a0(void) {
  FTRACE(0x124e88a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e88a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e88a1 mov ebp, esp */
  EBP = (ESP);
  /* 124e88a3 call 0x124e0400 */
  push32(0x124e88a8u); f_124e0400();
  /* 124e88a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e88ab pop ebp */
  EBP = (pop32());
  /* 124e88ac ret  */
  ESPCHK(0x124e88a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100188b0 @ 0x124e88b0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_124e88b0(void) {
  FTRACE(0x124e88b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e88b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e88b1 mov ebp, esp */
  EBP = (ESP);
  /* 124e88b3 push edi */
  push32((uint32_t)(EDI));
  /* 124e88b4 push esi */
  push32((uint32_t)(ESI));
  /* 124e88b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124e88b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e88bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124e88be mov eax, ecx */
  EAX = (ECX);
  /* 124e88c0 mov edx, ecx */
  EDX = (ECX);
  /* 124e88c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e88c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e88c6 jbe 0x124e88d0 */
  if ((C.cf||C.zf)) goto L_124e88d0;
  /* 124e88c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e88ca jb 0x124e8a48 */
  if (C.cf) goto L_124e8a48;
L_124e88d0:;
  /* 124e88d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 124e88d6 jne 0x124e88ec */
  if (!C.zf) goto L_124e88ec;
  /* 124e88d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e88db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124e88de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e88e1 jb 0x124e890c */
  if (C.cf) goto L_124e890c;
  /* 124e88e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e88e5 jmp dword ptr [edx*4 + 0x124e89f8] */
  switch (EDX) {
    case 0: goto L_124e8a08;
    case 1: goto L_124e8a10;
    case 2: goto L_124e8a1c;
    case 3: goto L_124e8a30;
    default: x86_unimpl("switch@0x124e88e5 out of table"); return;
  }
L_124e88ec:;
  /* 124e88ec mov eax, edi */
  EAX = (EDI);
  /* 124e88ee mov edx, 3 */
  EDX = (0x3u);
  /* 124e88f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e88f6 jb 0x124e8904 */
  if (C.cf) goto L_124e8904;
  /* 124e88f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124e88fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e88fd jmp dword ptr [eax*4 + 0x124e8910] */
  switch (EAX) {
    case 1: goto L_124e8920;
    case 2: goto L_124e894c;
    case 3: goto L_124e8970;
    default: x86_unimpl("switch@0x124e88fd out of table"); return;
  }
L_124e8904:;
  /* 124e8904 jmp dword ptr [ecx*4 + 0x124e8a08] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x124e8a08)))); return;
  /* 124e890b nop  */
  /* nop */
L_124e890c:;
  /* 124e890c jmp dword ptr [ecx*4 + 0x124e898c] */
  switch (ECX) {
    case 0: goto L_124e89ef;
    case 1: goto L_124e89dc;
    case 2: goto L_124e89d4;
    case 3: goto L_124e89cc;
    case 4: goto L_124e89c4;
    case 5: goto L_124e89bc;
    case 6: goto L_124e89b4;
    case 7: goto L_124e89ac;
    default: x86_unimpl("switch@0x124e890c out of table"); return;
  }
  /* 124e8913 nop  */
  /* nop */
L_124e8920:;
  /* 124e8920 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e8922 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e8924 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e8926 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e8929 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e892c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e892f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e8932 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e8935 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8938 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e893b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e893e jb 0x124e890c */
  if (C.cf) goto L_124e890c;
  /* 124e8940 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8942 jmp dword ptr [edx*4 + 0x124e89f8] */
  switch (EDX) {
    case 0: goto L_124e8a08;
    case 1: goto L_124e8a10;
    case 2: goto L_124e8a1c;
    case 3: goto L_124e8a30;
    default: x86_unimpl("switch@0x124e8942 out of table"); return;
  }
  /* 124e8949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e894c:;
  /* 124e894c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e894e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e8950 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e8952 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e8955 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e8958 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e895b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e895e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8961 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8964 jb 0x124e890c */
  if (C.cf) goto L_124e890c;
  /* 124e8966 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8968 jmp dword ptr [edx*4 + 0x124e89f8] */
  switch (EDX) {
    case 0: goto L_124e8a08;
    case 1: goto L_124e8a10;
    case 2: goto L_124e8a1c;
    case 3: goto L_124e8a30;
    default: x86_unimpl("switch@0x124e8968 out of table"); return;
  }
  /* 124e896f nop  */
  /* nop */
L_124e8970:;
  /* 124e8970 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e8972 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e8974 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e8976 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124e8977 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e897a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 124e897b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e897e jb 0x124e890c */
  if (C.cf) goto L_124e890c;
  /* 124e8980 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8982 jmp dword ptr [edx*4 + 0x124e89f8] */
  switch (EDX) {
    case 0: goto L_124e8a08;
    case 1: goto L_124e8a10;
    case 2: goto L_124e8a1c;
    case 3: goto L_124e8a30;
    default: x86_unimpl("switch@0x124e8982 out of table"); return;
  }
  /* 124e8989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e89ac:;
  /* 124e89ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 124e89b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_124e89b4:;
  /* 124e89b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 124e89b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_124e89bc:;
  /* 124e89bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 124e89c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_124e89c4:;
  /* 124e89c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 124e89c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_124e89cc:;
  /* 124e89cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 124e89d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_124e89d4:;
  /* 124e89d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 124e89d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_124e89dc:;
  /* 124e89dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 124e89e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 124e89e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 124e89eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e89ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_124e89ef:;
  /* 124e89ef jmp dword ptr [edx*4 + 0x124e89f8] */
  switch (EDX) {
    case 0: goto L_124e8a08;
    case 1: goto L_124e8a10;
    case 2: goto L_124e8a1c;
    case 3: goto L_124e8a30;
    default: x86_unimpl("switch@0x124e89ef out of table"); return;
  }
  /* 124e89f6 mov edi, edi */
  EDI = (EDI);
L_124e8a08:;
  /* 124e8a08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8a0b pop esi */
  ESI = (pop32());
  /* 124e8a0c pop edi */
  EDI = (pop32());
  /* 124e8a0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8a0e ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8a0f nop  */
  /* nop */
L_124e8a10:;
  /* 124e8a10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e8a12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e8a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8a17 pop esi */
  ESI = (pop32());
  /* 124e8a18 pop edi */
  EDI = (pop32());
  /* 124e8a19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8a1a ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8a1b nop  */
  /* nop */
L_124e8a1c:;
  /* 124e8a1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e8a1e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e8a20 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e8a23 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e8a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8a29 pop esi */
  ESI = (pop32());
  /* 124e8a2a pop edi */
  EDI = (pop32());
  /* 124e8a2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8a2c ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8a2d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e8a30:;
  /* 124e8a30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124e8a32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 124e8a34 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e8a37 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e8a3a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e8a3d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e8a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8a43 pop esi */
  ESI = (pop32());
  /* 124e8a44 pop edi */
  EDI = (pop32());
  /* 124e8a45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8a46 ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8a47 nop  */
  /* nop */
L_124e8a48:;
  /* 124e8a48 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 124e8a4c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 124e8a50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 124e8a56 jne 0x124e8a7c */
  if (!C.zf) goto L_124e8a7c;
  /* 124e8a58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e8a5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8a5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8a61 jb 0x124e8a70 */
  if (C.cf) goto L_124e8a70;
  /* 124e8a63 std  */
  C.df=1;
  /* 124e8a64 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8a66 cld  */
  C.df=0;
  /* 124e8a67 jmp dword ptr [edx*4 + 0x124e8b90] */
  switch (EDX) {
    case 0: goto L_124e8ba0;
    case 1: goto L_124e8ba8;
    case 2: goto L_124e8bb8;
    case 3: goto L_124e8bcc;
    default: x86_unimpl("switch@0x124e8a67 out of table"); return;
  }
  /* 124e8a6e mov edi, edi */
  EDI = (EDI);
L_124e8a70:;
  /* 124e8a70 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e8a72 jmp dword ptr [ecx*4 + 0x124e8b40] */
  switch (ECX) {
    case 0: goto L_124e8b87;
    default: x86_unimpl("switch@0x124e8a72 out of table"); return;
  }
  /* 124e8a79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e8a7c:;
  /* 124e8a7c mov eax, edi */
  EAX = (EDI);
  /* 124e8a7e mov edx, 3 */
  EDX = (0x3u);
  /* 124e8a83 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8a86 jb 0x124e8a94 */
  if (C.cf) goto L_124e8a94;
  /* 124e8a88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 124e8a8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8a8d jmp dword ptr [eax*4 + 0x124e8a98] */
  switch (EAX) {
    case 1: goto L_124e8aa8;
    case 2: goto L_124e8ac8;
    case 3: goto L_124e8af0;
    default: x86_unimpl("switch@0x124e8a8d out of table"); return;
  }
L_124e8a94:;
  /* 124e8a94 jmp dword ptr [ecx*4 + 0x124e8b90] */
  switch (ECX) {
    case 0: goto L_124e8ba0;
    case 1: goto L_124e8ba8;
    case 2: goto L_124e8bb8;
    case 3: goto L_124e8bcc;
    default: x86_unimpl("switch@0x124e8a94 out of table"); return;
  }
  /* 124e8a9b nop  */
  /* nop */
L_124e8aa8:;
  /* 124e8aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e8aab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e8aad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e8ab0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 124e8ab1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e8ab4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 124e8ab5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8ab8 jb 0x124e8a70 */
  if (C.cf) goto L_124e8a70;
  /* 124e8aba std  */
  C.df=1;
  /* 124e8abb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8abd cld  */
  C.df=0;
  /* 124e8abe jmp dword ptr [edx*4 + 0x124e8b90] */
  switch (EDX) {
    case 0: goto L_124e8ba0;
    case 1: goto L_124e8ba8;
    case 2: goto L_124e8bb8;
    case 3: goto L_124e8bcc;
    default: x86_unimpl("switch@0x124e8abe out of table"); return;
  }
  /* 124e8ac5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e8ac8:;
  /* 124e8ac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e8acb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e8acd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e8ad0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e8ad3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e8ad6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e8ad9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8adc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8adf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8ae2 jb 0x124e8a70 */
  if (C.cf) goto L_124e8a70;
  /* 124e8ae4 std  */
  C.df=1;
  /* 124e8ae5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8ae7 cld  */
  C.df=0;
  /* 124e8ae8 jmp dword ptr [edx*4 + 0x124e8b90] */
  switch (EDX) {
    case 0: goto L_124e8ba0;
    case 1: goto L_124e8ba8;
    case 2: goto L_124e8bb8;
    case 3: goto L_124e8bcc;
    default: x86_unimpl("switch@0x124e8ae8 out of table"); return;
  }
  /* 124e8aef nop  */
  /* nop */
L_124e8af0:;
  /* 124e8af0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e8af3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 124e8af5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e8af8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e8afb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e8afe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e8b01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 124e8b04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e8b07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8b0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8b0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8b10 jb 0x124e8a70 */
  if (C.cf) goto L_124e8a70;
  /* 124e8b16 std  */
  C.df=1;
  /* 124e8b17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 124e8b19 cld  */
  C.df=0;
  /* 124e8b1a jmp dword ptr [edx*4 + 0x124e8b90] */
  switch (EDX) {
    case 0: goto L_124e8ba0;
    case 1: goto L_124e8ba8;
    case 2: goto L_124e8bb8;
    case 3: goto L_124e8bcc;
    default: x86_unimpl("switch@0x124e8b1a out of table"); return;
  }
  /* 124e8b21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 124e8b24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 124e8b25 mov ecx, dword ptr [esi + 0x12] */
  ECX = (r32((uint32_t)(ESI + 0x12)));
  /* 124e8b28 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 124e8b29 mov ecx, dword ptr [esi + 0x12] */
  ECX = (r32((uint32_t)(ESI + 0x12)));
  /* 124e8b2c push esp */
  push32((uint32_t)(ESP));
  /* 124e8b2d mov ecx, dword ptr [esi + 0x12] */
  ECX = (r32((uint32_t)(ESI + 0x12)));
  /* 124e8b30 pop esp */
  ESP = (pop32());
  /* 124e8b31 mov ecx, dword ptr [esi + 0x12] */
  ECX = (r32((uint32_t)(ESI + 0x12)));
  /* 124e8b34 mov ecx, dword ptr fs:[esi + 0x12] */
  ECX = (r32((uint32_t)(ESI + 0x12)));
  /* 124e8b38 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x124e8b38");
  /* 124e8b39 mov ecx, dword ptr [esi + 0x12] */
  ECX = (r32((uint32_t)(ESI + 0x12)));
  /* 124e8b3c je 0x124e8ac9 */
  if (C.zf) goto L_124e8ac9;
  /* 124e8b3e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 124e8b44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 124e8b48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 124e8b4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 124e8b50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 124e8b54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 124e8b58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 124e8b5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 124e8b60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 124e8b64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 124e8b68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 124e8b6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 124e8b70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 124e8b74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 124e8b78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 124e8b7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 124e8b83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8b85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_124e8b87:;
  /* 124e8b87 jmp dword ptr [edx*4 + 0x124e8b90] */
  switch (EDX) {
    case 0: goto L_124e8ba0;
    case 1: goto L_124e8ba8;
    case 2: goto L_124e8bb8;
    case 3: goto L_124e8bcc;
    default: x86_unimpl("switch@0x124e8b87 out of table"); return;
  }
  /* 124e8b8e mov edi, edi */
  EDI = (EDI);
L_124e8ba0:;
  /* 124e8ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8ba3 pop esi */
  ESI = (pop32());
  /* 124e8ba4 pop edi */
  EDI = (pop32());
  /* 124e8ba5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8ba6 ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8ba7 nop  */
  /* nop */
L_124e8ba8:;
  /* 124e8ba8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e8bab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e8bae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8bb1 pop esi */
  ESI = (pop32());
  /* 124e8bb2 pop edi */
  EDI = (pop32());
  /* 124e8bb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8bb4 ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8bb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124e8bb8:;
  /* 124e8bb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e8bbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e8bbe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e8bc1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e8bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8bc7 pop esi */
  ESI = (pop32());
  /* 124e8bc8 pop edi */
  EDI = (pop32());
  /* 124e8bc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8bca ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
  /* 124e8bcb nop  */
  /* nop */
L_124e8bcc:;
  /* 124e8bcc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 124e8bcf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 124e8bd2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 124e8bd5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 124e8bd8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 124e8bdb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 124e8bde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8be1 pop esi */
  ESI = (pop32());
  /* 124e8be2 pop edi */
  EDI = (pop32());
  /* 124e8be3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124e8be4 ret  */
  ESPCHK(0x124e88b0u, _esp0);
  ESP += 4; return;
L_124e8ac9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x124e8ac9 (unresolved jump table)"); return;
}

/* FUN_10018bf0 @ 0x124e8bf0 (421 bytes, 148 insns) */
void f_124e8bf0(void) {
  FTRACE(0x124e8bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8bf1 mov ebp, esp */
  EBP = (ESP);
  /* 124e8bf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124e8bf5 push 0x12508a08 */
  push32((uint32_t)(0x12508a08u));
  /* 124e8bfa push 0x124e9ac8 */
  push32((uint32_t)(0x124e9ac8u));
  /* 124e8bff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124e8c05 push eax */
  push32((uint32_t)(EAX));
  /* 124e8c06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124e8c0d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8c10 push ebx */
  push32((uint32_t)(EBX));
  /* 124e8c11 push esi */
  push32((uint32_t)(ESI));
  /* 124e8c12 push edi */
  push32((uint32_t)(EDI));
  /* 124e8c13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124e8c16 cmp dword ptr [0x1250cdb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8c1d jne 0x124e8c6e */
  if (!C.zf) goto L_124e8c6e;
  /* 124e8c1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 124e8c22 push eax */
  push32((uint32_t)(EAX));
  /* 124e8c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8c25 push 0x12508a04 */
  push32((uint32_t)(0x12508a04u));
  /* 124e8c2a push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8c2c call dword ptr [0x1250f324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f324))), 0x124e8c32u);
  /* 124e8c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8c34 je 0x124e8c42 */
  if (C.zf) goto L_124e8c42;
  /* 124e8c36 mov dword ptr [0x1250cdb4], 1 */
  w32((uint32_t)(0x1250cdb4), (0x1u));
  /* 124e8c40 jmp 0x124e8c6e */
  goto L_124e8c6e;
L_124e8c42:;
  /* 124e8c42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 124e8c45 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8c46 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8c48 push 0x12508a00 */
  push32((uint32_t)(0x12508a00u));
  /* 124e8c4d push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8c51 call dword ptr [0x1250f334] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f334))), 0x124e8c57u);
  /* 124e8c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8c59 je 0x124e8c67 */
  if (C.zf) goto L_124e8c67;
  /* 124e8c5b mov dword ptr [0x1250cdb4], 2 */
  w32((uint32_t)(0x1250cdb4), (0x2u));
  /* 124e8c65 jmp 0x124e8c6e */
  goto L_124e8c6e;
L_124e8c67:;
  /* 124e8c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8c69 jmp 0x124e8d98 */
  goto L_124e8d98;
L_124e8c6e:;
  /* 124e8c6e cmp dword ptr [0x1250cdb4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdb4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8c75 jne 0x124e8ca5 */
  if (!C.zf) goto L_124e8ca5;
  /* 124e8c77 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8c7b jne 0x124e8c86 */
  if (!C.zf) goto L_124e8c86;
  /* 124e8c7d mov edx, dword ptr [0x1250cdc0] */
  EDX = (r32((uint32_t)(0x1250cdc0)));
  /* 124e8c83 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_124e8c86:;
  /* 124e8c86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8c89 push eax */
  push32((uint32_t)(EAX));
  /* 124e8c8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8c8d push ecx */
  push32((uint32_t)(ECX));
  /* 124e8c8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8c91 push edx */
  push32((uint32_t)(EDX));
  /* 124e8c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8c95 push eax */
  push32((uint32_t)(EAX));
  /* 124e8c96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124e8c99 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8c9a call dword ptr [0x1250f334] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f334))), 0x124e8ca0u);
  /* 124e8ca0 jmp 0x124e8d98 */
  goto L_124e8d98;
L_124e8ca5:;
  /* 124e8ca5 cmp dword ptr [0x1250cdb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8cac jne 0x124e8d96 */
  if (!C.zf) goto L_124e8d96;
  /* 124e8cb2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8cb6 jne 0x124e8cc1 */
  if (!C.zf) goto L_124e8cc1;
  /* 124e8cb8 mov edx, dword ptr [0x1250cdd0] */
  EDX = (r32((uint32_t)(0x1250cdd0)));
  /* 124e8cbe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_124e8cc1:;
  /* 124e8cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8cc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8cc8 push eax */
  push32((uint32_t)(EAX));
  /* 124e8cc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8ccc push ecx */
  push32((uint32_t)(ECX));
  /* 124e8ccd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 124e8cd0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e8cd2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8cd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8cd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8cda push edx */
  push32((uint32_t)(EDX));
  /* 124e8cdb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124e8cde push eax */
  push32((uint32_t)(EAX));
  /* 124e8cdf call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124e8ce5u);
  /* 124e8ce5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124e8ce8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8cec jne 0x124e8cf5 */
  if (!C.zf) goto L_124e8cf5;
  /* 124e8cee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8cf0 jmp 0x124e8d98 */
  goto L_124e8d98;
L_124e8cf5:;
  /* 124e8cf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e8cfc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8cff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124e8d01 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8d04 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124e8d06 call 0x124e3b60 */
  push32(0x124e8d0bu); f_124e3b60();
  /* 124e8d0b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 124e8d0e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124e8d11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e8d14 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124e8d17 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8d1a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 124e8d1c push edx */
  push32((uint32_t)(EDX));
  /* 124e8d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8d1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8d22 push eax */
  push32((uint32_t)(EAX));
  /* 124e8d23 call 0x124e4730 */
  push32(0x124e8d28u); f_124e4730();
  /* 124e8d28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8d2b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124e8d32 jmp 0x124e8d4b */
  goto L_124e8d4b;
  /* 124e8d34 mov eax, 1 */
  EAX = (0x1u);
  /* 124e8d39 ret  */
  ESPCHK(0x124e8bf0u, _esp0);
  ESP += 4; return;
  /* 124e8d3a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124e8d3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124e8d44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124e8d4b:;
  /* 124e8d4b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8d4f jne 0x124e8d55 */
  if (!C.zf) goto L_124e8d55;
  /* 124e8d51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8d53 jmp 0x124e8d98 */
  goto L_124e8d98;
L_124e8d55:;
  /* 124e8d55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e8d58 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8d59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8d5c push edx */
  push32((uint32_t)(EDX));
  /* 124e8d5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8d60 push eax */
  push32((uint32_t)(EAX));
  /* 124e8d61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8d64 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8d67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124e8d6a push edx */
  push32((uint32_t)(EDX));
  /* 124e8d6b call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124e8d71u);
  /* 124e8d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e8d74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8d78 jne 0x124e8d7e */
  if (!C.zf) goto L_124e8d7e;
  /* 124e8d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8d7c jmp 0x124e8d98 */
  goto L_124e8d98;
L_124e8d7e:;
  /* 124e8d7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8d81 push eax */
  push32((uint32_t)(EAX));
  /* 124e8d82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e8d85 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8d86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8d89 push edx */
  push32((uint32_t)(EDX));
  /* 124e8d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8d8d push eax */
  push32((uint32_t)(EAX));
  /* 124e8d8e call dword ptr [0x1250f324] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f324))), 0x124e8d94u);
  /* 124e8d94 jmp 0x124e8d98 */
  goto L_124e8d98;
L_124e8d96:;
  /* 124e8d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124e8d98:;
  /* 124e8d98 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 124e8d9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e8d9e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124e8da5 pop edi */
  EDI = (pop32());
  /* 124e8da6 pop esi */
  ESI = (pop32());
  /* 124e8da7 pop ebx */
  EBX = (pop32());
  /* 124e8da8 mov esp, ebp */
  ESP = (EBP);
  /* 124e8daa pop ebp */
  EBP = (pop32());
  /* 124e8dab ret  */
  ESPCHK(0x124e8bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018db0 @ 0x124e8db0 (727 bytes, 263 insns) */
void f_124e8db0(void) {
  FTRACE(0x124e8db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e8db0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e8db1 mov ebp, esp */
  EBP = (ESP);
  /* 124e8db3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124e8db5 push 0x12508a18 */
  push32((uint32_t)(0x12508a18u));
  /* 124e8dba push 0x124e9ac8 */
  push32((uint32_t)(0x124e9ac8u));
  /* 124e8dbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 124e8dc5 push eax */
  push32((uint32_t)(EAX));
  /* 124e8dc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 124e8dcd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 124e8dd1 push esi */
  push32((uint32_t)(ESI));
  /* 124e8dd2 push edi */
  push32((uint32_t)(EDI));
  /* 124e8dd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124e8dd6 cmp dword ptr [0x1250cdd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8ddd jne 0x124e8e36 */
  if (!C.zf) goto L_124e8e36;
  /* 124e8ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8de5 push 0x12508a04 */
  push32((uint32_t)(0x12508a04u));
  /* 124e8dea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e8def push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8df1 call dword ptr [0x1250f328] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f328))), 0x124e8df7u);
  /* 124e8df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8df9 je 0x124e8e07 */
  if (C.zf) goto L_124e8e07;
  /* 124e8dfb mov dword ptr [0x1250cdd8], 1 */
  w32((uint32_t)(0x1250cdd8), (0x1u));
  /* 124e8e05 jmp 0x124e8e36 */
  goto L_124e8e36;
L_124e8e07:;
  /* 124e8e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8e0d push 0x12508a00 */
  push32((uint32_t)(0x12508a00u));
  /* 124e8e12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124e8e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8e19 call dword ptr [0x1250f320] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f320))), 0x124e8e1fu);
  /* 124e8e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8e21 je 0x124e8e2f */
  if (C.zf) goto L_124e8e2f;
  /* 124e8e23 mov dword ptr [0x1250cdd8], 2 */
  w32((uint32_t)(0x1250cdd8), (0x2u));
  /* 124e8e2d jmp 0x124e8e36 */
  goto L_124e8e36;
L_124e8e2f:;
  /* 124e8e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8e31 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8e36:;
  /* 124e8e36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8e3a jle 0x124e8e4f */
  if ((C.zf||C.sf!=C.of)) goto L_124e8e4f;
  /* 124e8e3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8e3f push eax */
  push32((uint32_t)(EAX));
  /* 124e8e40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8e43 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8e44 call 0x124e90c0 */
  push32(0x124e8e49u); f_124e90c0();
  /* 124e8e49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8e4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_124e8e4f:;
  /* 124e8e4f cmp dword ptr [0x1250cdd8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdd8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8e56 jne 0x124e8e7b */
  if (!C.zf) goto L_124e8e7b;
  /* 124e8e58 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124e8e5b push edx */
  push32((uint32_t)(EDX));
  /* 124e8e5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124e8e5f push eax */
  push32((uint32_t)(EAX));
  /* 124e8e60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8e63 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8e64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8e67 push edx */
  push32((uint32_t)(EDX));
  /* 124e8e68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8e6b push eax */
  push32((uint32_t)(EAX));
  /* 124e8e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8e6f push ecx */
  push32((uint32_t)(ECX));
  /* 124e8e70 call dword ptr [0x1250f320] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f320))), 0x124e8e76u);
  /* 124e8e76 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8e7b:;
  /* 124e8e7b cmp dword ptr [0x1250cdd8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdd8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8e82 jne 0x124e909f */
  if (!C.zf) goto L_124e909f;
  /* 124e8e88 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8e8c jne 0x124e8e97 */
  if (!C.zf) goto L_124e8e97;
  /* 124e8e8e mov edx, dword ptr [0x1250cdd0] */
  EDX = (r32((uint32_t)(0x1250cdd0)));
  /* 124e8e94 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_124e8e97:;
  /* 124e8e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8e9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8e9e push eax */
  push32((uint32_t)(EAX));
  /* 124e8e9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8ea3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 124e8ea6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124e8ea8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e8eaa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8ead add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8eb0 push edx */
  push32((uint32_t)(EDX));
  /* 124e8eb1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124e8eb4 push eax */
  push32((uint32_t)(EAX));
  /* 124e8eb5 call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124e8ebbu);
  /* 124e8ebb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124e8ebe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8ec2 jne 0x124e8ecb */
  if (!C.zf) goto L_124e8ecb;
  /* 124e8ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8ec6 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8ecb:;
  /* 124e8ecb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e8ed2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e8ed5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124e8ed7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8eda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124e8edc call 0x124e3b60 */
  push32(0x124e8ee1u); f_124e3b60();
  /* 124e8ee1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 124e8ee4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124e8ee7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 124e8eea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124e8eed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124e8ef4 jmp 0x124e8f0d */
  goto L_124e8f0d;
  /* 124e8ef6 mov eax, 1 */
  EAX = (0x1u);
  /* 124e8efb ret  */
  ESPCHK(0x124e8db0u, _esp0);
  ESP += 4; return;
  /* 124e8efc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124e8eff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124e8f06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124e8f0d:;
  /* 124e8f0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8f11 jne 0x124e8f1a */
  if (!C.zf) goto L_124e8f1a;
  /* 124e8f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8f15 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8f1a:;
  /* 124e8f1a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e8f1d push edx */
  push32((uint32_t)(EDX));
  /* 124e8f1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8f21 push eax */
  push32((uint32_t)(EAX));
  /* 124e8f22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124e8f25 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8f26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e8f29 push edx */
  push32((uint32_t)(EDX));
  /* 124e8f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 124e8f2c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124e8f2f push eax */
  push32((uint32_t)(EAX));
  /* 124e8f30 call dword ptr [0x1250f32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f32c))), 0x124e8f36u);
  /* 124e8f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8f38 jne 0x124e8f41 */
  if (!C.zf) goto L_124e8f41;
  /* 124e8f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8f3c jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8f41:;
  /* 124e8f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e8f45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e8f48 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8f49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8f4c push edx */
  push32((uint32_t)(EDX));
  /* 124e8f4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8f50 push eax */
  push32((uint32_t)(EAX));
  /* 124e8f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8f54 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8f55 call dword ptr [0x1250f328] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f328))), 0x124e8f5bu);
  /* 124e8f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e8f5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8f62 jne 0x124e8f6b */
  if (!C.zf) goto L_124e8f6b;
  /* 124e8f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8f66 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8f6b:;
  /* 124e8f6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8f6e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 124e8f74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e8f76 je 0x124e8fbb */
  if (C.zf) goto L_124e8fbb;
  /* 124e8f78 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8f7c je 0x124e8fb6 */
  if (C.zf) goto L_124e8fb6;
  /* 124e8f7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e8f81 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e8f84 jle 0x124e8f8d */
  if ((C.zf||C.sf!=C.of)) goto L_124e8f8d;
  /* 124e8f86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8f88 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8f8d:;
  /* 124e8f8d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124e8f90 push ecx */
  push32((uint32_t)(ECX));
  /* 124e8f91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124e8f94 push edx */
  push32((uint32_t)(EDX));
  /* 124e8f95 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e8f98 push eax */
  push32((uint32_t)(EAX));
  /* 124e8f99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e8f9c push ecx */
  push32((uint32_t)(ECX));
  /* 124e8f9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e8fa0 push edx */
  push32((uint32_t)(EDX));
  /* 124e8fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e8fa4 push eax */
  push32((uint32_t)(EAX));
  /* 124e8fa5 call dword ptr [0x1250f328] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f328))), 0x124e8fabu);
  /* 124e8fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e8fad jne 0x124e8fb6 */
  if (!C.zf) goto L_124e8fb6;
  /* 124e8faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e8fb1 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e8fb6:;
  /* 124e8fb6 jmp 0x124e909a */
  goto L_124e909a;
L_124e8fbb:;
  /* 124e8fbb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e8fbe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 124e8fc1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124e8fc8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e8fcb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124e8fcd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e8fd0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124e8fd2 call 0x124e3b60 */
  push32(0x124e8fd7u); f_124e3b60();
  /* 124e8fd7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 124e8fda mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124e8fdd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 124e8fe0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124e8fe3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124e8fea jmp 0x124e9003 */
  goto L_124e9003;
  /* 124e8fec mov eax, 1 */
  EAX = (0x1u);
  /* 124e8ff1 ret  */
  ESPCHK(0x124e8db0u, _esp0);
  ESP += 4; return;
  /* 124e8ff2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124e8ff5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124e8ffc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124e9003:;
  /* 124e9003 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9007 jne 0x124e9010 */
  if (!C.zf) goto L_124e9010;
  /* 124e9009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e900b jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e9010:;
  /* 124e9010 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e9013 push eax */
  push32((uint32_t)(EAX));
  /* 124e9014 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e9017 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9018 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124e901b push edx */
  push32((uint32_t)(EDX));
  /* 124e901c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124e901f push eax */
  push32((uint32_t)(EAX));
  /* 124e9020 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9023 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9027 push edx */
  push32((uint32_t)(EDX));
  /* 124e9028 call dword ptr [0x1250f328] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f328))), 0x124e902eu);
  /* 124e902e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e9030 jne 0x124e9036 */
  if (!C.zf) goto L_124e9036;
  /* 124e9032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9034 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e9036:;
  /* 124e9036 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e903a jne 0x124e906a */
  if (!C.zf) goto L_124e906a;
  /* 124e903c push 0 */
  push32((uint32_t)(0x0u));
  /* 124e903e push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9040 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9042 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9044 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e9047 push eax */
  push32((uint32_t)(EAX));
  /* 124e9048 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e904b push ecx */
  push32((uint32_t)(ECX));
  /* 124e904c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124e9051 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 124e9054 push edx */
  push32((uint32_t)(EDX));
  /* 124e9055 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124e905bu);
  /* 124e905b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e905e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9062 jne 0x124e9068 */
  if (!C.zf) goto L_124e9068;
  /* 124e9064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9066 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e9068:;
  /* 124e9068 jmp 0x124e909a */
  goto L_124e909a;
L_124e906a:;
  /* 124e906a push 0 */
  push32((uint32_t)(0x0u));
  /* 124e906c push 0 */
  push32((uint32_t)(0x0u));
  /* 124e906e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124e9071 push eax */
  push32((uint32_t)(EAX));
  /* 124e9072 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124e9075 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9076 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124e9079 push edx */
  push32((uint32_t)(EDX));
  /* 124e907a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124e907d push eax */
  push32((uint32_t)(EAX));
  /* 124e907e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124e9083 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 124e9086 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9087 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124e908du);
  /* 124e908d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124e9090 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9094 jne 0x124e909a */
  if (!C.zf) goto L_124e909a;
  /* 124e9096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9098 jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e909a:;
  /* 124e909a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124e909d jmp 0x124e90a1 */
  goto L_124e90a1;
L_124e909f:;
  /* 124e909f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124e90a1:;
  /* 124e90a1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 124e90a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e90a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124e90ae pop edi */
  EDI = (pop32());
  /* 124e90af pop esi */
  ESI = (pop32());
  /* 124e90b0 pop ebx */
  EBX = (pop32());
  /* 124e90b1 mov esp, ebp */
  ESP = (EBP);
  /* 124e90b3 pop ebp */
  EBP = (pop32());
  /* 124e90b4 ret  */
  ESPCHK(0x124e8db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100190c0 @ 0x124e90c0 (80 bytes, 32 insns) */
void f_124e90c0(void) {
  FTRACE(0x124e90c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e90c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e90c1 mov ebp, esp */
  EBP = (ESP);
  /* 124e90c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e90c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e90c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e90cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e90cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124e90d2:;
  /* 124e90d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e90d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e90d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e90db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e90de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e90e0 je 0x124e90f7 */
  if (C.zf) goto L_124e90f7;
  /* 124e90e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e90e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124e90e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e90ea je 0x124e90f7 */
  if (C.zf) goto L_124e90f7;
  /* 124e90ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e90ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e90f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e90f5 jmp 0x124e90d2 */
  goto L_124e90d2;
L_124e90f7:;
  /* 124e90f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e90fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124e90fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e90ff jne 0x124e9109 */
  if (!C.zf) goto L_124e9109;
  /* 124e9101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9104 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e9107 jmp 0x124e910c */
  goto L_124e910c;
L_124e9109:;
  /* 124e9109 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_124e910c:;
  /* 124e910c mov esp, ebp */
  ESP = (EBP);
  /* 124e910e pop ebp */
  EBP = (pop32());
  /* 124e910f ret  */
  ESPCHK(0x124e90c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019110 @ 0x124e9110 (130 bytes, 43 insns) */
void f_124e9110(void) {
  FTRACE(0x124e9110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9110 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9111 mov ebp, esp */
  EBP = (ESP);
  /* 124e9113 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9117 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e911d jae 0x124e9141 */
  if (!C.cf) goto L_124e9141;
  /* 124e911f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9122 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9128 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e912b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e912e mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9135 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124e913a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e913d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e913f jne 0x124e915c */
  if (!C.zf) goto L_124e915c;
L_124e9141:;
  /* 124e9141 call 0x124e8890 */
  push32(0x124e9146u); f_124e8890();
  /* 124e9146 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e914c call 0x124e88a0 */
  push32(0x124e9151u); f_124e88a0();
  /* 124e9151 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e9157 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e915a jmp 0x124e918e */
  goto L_124e918e;
L_124e915c:;
  /* 124e915c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e915f push edx */
  push32((uint32_t)(EDX));
  /* 124e9160 call 0x124ea0b0 */
  push32(0x124e9165u); f_124ea0b0();
  /* 124e9165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9168 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e916b push eax */
  push32((uint32_t)(EAX));
  /* 124e916c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e916f push ecx */
  push32((uint32_t)(ECX));
  /* 124e9170 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9173 push edx */
  push32((uint32_t)(EDX));
  /* 124e9174 call 0x124e91a0 */
  push32(0x124e9179u); f_124e91a0();
  /* 124e9179 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e917c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e917f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9182 push eax */
  push32((uint32_t)(EAX));
  /* 124e9183 call 0x124ea140 */
  push32(0x124e9188u); f_124ea140();
  /* 124e9188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e918b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124e918e:;
  /* 124e918e mov esp, ebp */
  ESP = (EBP);
  /* 124e9190 pop ebp */
  EBP = (pop32());
  /* 124e9191 ret  */
  ESPCHK(0x124e9110u, _esp0);
  ESP += 4; return;
}

/* FUN_100191a0 @ 0x124e91a0 (178 bytes, 56 insns) */
void f_124e91a0(void) {
  FTRACE(0x124e91a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e91a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e91a1 mov ebp, esp */
  EBP = (ESP);
  /* 124e91a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e91a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e91a9 push eax */
  push32((uint32_t)(EAX));
  /* 124e91aa call 0x124e9f30 */
  push32(0x124e91afu); f_124e9f30();
  /* 124e91af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e91b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124e91b5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e91b9 jne 0x124e91ce */
  if (!C.zf) goto L_124e91ce;
  /* 124e91bb call 0x124e8890 */
  push32(0x124e91c0u); f_124e8890();
  /* 124e91c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e91c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e91c9 jmp 0x124e924e */
  goto L_124e924e;
L_124e91ce:;
  /* 124e91ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e91d1 push ecx */
  push32((uint32_t)(ECX));
  /* 124e91d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e91d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e91d7 push edx */
  push32((uint32_t)(EDX));
  /* 124e91d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e91db push eax */
  push32((uint32_t)(EAX));
  /* 124e91dc call dword ptr [0x1250f318] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f318))), 0x124e91e2u);
  /* 124e91e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e91e5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e91e9 jne 0x124e91f6 */
  if (!C.zf) goto L_124e91f6;
  /* 124e91eb call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124e91f1u);
  /* 124e91f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e91f4 jmp 0x124e91fd */
  goto L_124e91fd;
L_124e91f6:;
  /* 124e91f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124e91fd:;
  /* 124e91fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9201 je 0x124e9214 */
  if (C.zf) goto L_124e9214;
  /* 124e9203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9206 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9207 call 0x124e87f0 */
  push32(0x124e920cu); f_124e87f0();
  /* 124e920c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e920f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9212 jmp 0x124e924e */
  goto L_124e924e;
L_124e9214:;
  /* 124e9214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9217 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124e921a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e921d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9220 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9223 mov ecx, dword ptr [edx*4 + 0x1250e5a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e922a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 124e922e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 124e9231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9234 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e9237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e923a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124e923d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9240 mov eax, dword ptr [eax*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124e9247 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 124e924b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124e924e:;
  /* 124e924e mov esp, ebp */
  ESP = (EBP);
  /* 124e9250 pop ebp */
  EBP = (pop32());
  /* 124e9251 ret  */
  ESPCHK(0x124e91a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019260 @ 0x124e9260 (130 bytes, 43 insns) */
void f_124e9260(void) {
  FTRACE(0x124e9260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9260 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9261 mov ebp, esp */
  EBP = (ESP);
  /* 124e9263 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9267 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e926d jae 0x124e9291 */
  if (!C.cf) goto L_124e9291;
  /* 124e926f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9272 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9278 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e927b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e927e mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9285 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124e928a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e928d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e928f jne 0x124e92ac */
  if (!C.zf) goto L_124e92ac;
L_124e9291:;
  /* 124e9291 call 0x124e8890 */
  push32(0x124e9296u); f_124e8890();
  /* 124e9296 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e929c call 0x124e88a0 */
  push32(0x124e92a1u); f_124e88a0();
  /* 124e92a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e92a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e92aa jmp 0x124e92de */
  goto L_124e92de;
L_124e92ac:;
  /* 124e92ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e92af push edx */
  push32((uint32_t)(EDX));
  /* 124e92b0 call 0x124ea0b0 */
  push32(0x124e92b5u); f_124ea0b0();
  /* 124e92b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e92b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e92bb push eax */
  push32((uint32_t)(EAX));
  /* 124e92bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e92bf push ecx */
  push32((uint32_t)(ECX));
  /* 124e92c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e92c3 push edx */
  push32((uint32_t)(EDX));
  /* 124e92c4 call 0x124e92f0 */
  push32(0x124e92c9u); f_124e92f0();
  /* 124e92c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e92cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e92cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e92d2 push eax */
  push32((uint32_t)(EAX));
  /* 124e92d3 call 0x124ea140 */
  push32(0x124e92d8u); f_124ea140();
  /* 124e92d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e92db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124e92de:;
  /* 124e92de mov esp, ebp */
  ESP = (EBP);
  /* 124e92e0 pop ebp */
  EBP = (pop32());
  /* 124e92e1 ret  */
  ESPCHK(0x124e9260u, _esp0);
  ESP += 4; return;
}

/* FUN_100192f0 @ 0x124e92f0 (627 bytes, 182 insns) */
void f_124e92f0(void) {
  FTRACE(0x124e92f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e92f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e92f1 mov ebp, esp */
  EBP = (ESP);
  /* 124e92f3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e92f9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124e9300 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e9303 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 124e9309 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e930d jne 0x124e9316 */
  if (!C.zf) goto L_124e9316;
  /* 124e930f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9311 jmp 0x124e955f */
  goto L_124e955f;
L_124e9316:;
  /* 124e9316 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9319 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e931c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e931f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e9322 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9325 mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e932c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124e9331 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124e9334 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e9336 je 0x124e9348 */
  if (C.zf) goto L_124e9348;
  /* 124e9338 push 2 */
  push32((uint32_t)(0x2u));
  /* 124e933a push 0 */
  push32((uint32_t)(0x0u));
  /* 124e933c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e933f push edx */
  push32((uint32_t)(EDX));
  /* 124e9340 call 0x124e91a0 */
  push32(0x124e9345u); f_124e91a0();
  /* 124e9345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e9348:;
  /* 124e9348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e934b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e934e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9351 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124e9354 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9357 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124e935e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124e9363 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 124e9368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e936a je 0x124e947c */
  if (C.zf) goto L_124e947c;
  /* 124e9370 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9373 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e9376 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_124e937d:;
  /* 124e937d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9380 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e9383 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9386 jae 0x124e947a */
  if (!C.cf) goto L_124e947a;
  /* 124e938c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 124e9392 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124e9395:;
  /* 124e9395 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e9398 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 124e939e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e93a0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e93a6 jge 0x124e9407 */
  if ((C.sf==C.of)) goto L_124e9407;
  /* 124e93a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e93ab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e93ae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e93b1 jae 0x124e9407 */
  if (!C.cf) goto L_124e9407;
  /* 124e93b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e93b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124e93b8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 124e93be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e93c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e93c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e93c7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 124e93ce cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e93d1 jne 0x124e93f1 */
  if (!C.zf) goto L_124e93f1;
  /* 124e93d3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 124e93d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e93dc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 124e93e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e93e5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 124e93e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e93eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e93ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124e93f1:;
  /* 124e93f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e93f4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 124e93fa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124e93fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e93ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9402 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e9405 jmp 0x124e9395 */
  goto L_124e9395;
L_124e9407:;
  /* 124e9407 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9409 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 124e940f push edx */
  push32((uint32_t)(EDX));
  /* 124e9410 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e9413 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 124e9419 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e941b push eax */
  push32((uint32_t)(EAX));
  /* 124e941c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 124e9422 push edx */
  push32((uint32_t)(EDX));
  /* 124e9423 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9426 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e9429 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e942c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124e942f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9432 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124e9439 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 124e943c push eax */
  push32((uint32_t)(EAX));
  /* 124e943d call dword ptr [0x1250f3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3a8))), 0x124e9443u);
  /* 124e9443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e9445 je 0x124e946a */
  if (C.zf) goto L_124e946a;
  /* 124e9447 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e944a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9450 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124e9453 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e9456 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 124e945c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e945e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9464 jge 0x124e9468 */
  if ((C.sf==C.of)) goto L_124e9468;
  /* 124e9466 jmp 0x124e947a */
  goto L_124e947a;
L_124e9468:;
  /* 124e9468 jmp 0x124e9475 */
  goto L_124e9475;
L_124e946a:;
  /* 124e946a call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124e9470u);
  /* 124e9470 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124e9473 jmp 0x124e947a */
  goto L_124e947a;
L_124e9475:;
  /* 124e9475 jmp 0x124e937d */
  goto L_124e937d;
L_124e947a:;
  /* 124e947a jmp 0x124e94cc */
  goto L_124e94cc;
L_124e947c:;
  /* 124e947c push 0 */
  push32((uint32_t)(0x0u));
  /* 124e947e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 124e9484 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9485 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124e9488 push edx */
  push32((uint32_t)(EDX));
  /* 124e9489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e948c push eax */
  push32((uint32_t)(EAX));
  /* 124e948d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9490 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9496 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e9499 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e949c mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e94a3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 124e94a6 push ecx */
  push32((uint32_t)(ECX));
  /* 124e94a7 call dword ptr [0x1250f3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3a8))), 0x124e94adu);
  /* 124e94ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e94af je 0x124e94c3 */
  if (C.zf) goto L_124e94c3;
  /* 124e94b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e94b8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 124e94be mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 124e94c1 jmp 0x124e94cc */
  goto L_124e94cc;
L_124e94c3:;
  /* 124e94c3 call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124e94c9u);
  /* 124e94c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124e94cc:;
  /* 124e94cc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e94d0 jne 0x124e9556 */
  if (!C.zf) goto L_124e9556;
  /* 124e94d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e94da je 0x124e950a */
  if (C.zf) goto L_124e950a;
  /* 124e94dc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e94e0 jne 0x124e94f9 */
  if (!C.zf) goto L_124e94f9;
  /* 124e94e2 call 0x124e8890 */
  push32(0x124e94e7u); f_124e8890();
  /* 124e94e7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e94ed call 0x124e88a0 */
  push32(0x124e94f2u); f_124e88a0();
  /* 124e94f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e94f5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124e94f7 jmp 0x124e9505 */
  goto L_124e9505;
L_124e94f9:;
  /* 124e94f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e94fc push edx */
  push32((uint32_t)(EDX));
  /* 124e94fd call 0x124e87f0 */
  push32(0x124e9502u); f_124e87f0();
  /* 124e9502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e9505:;
  /* 124e9505 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9508 jmp 0x124e955f */
  goto L_124e955f;
L_124e950a:;
  /* 124e950a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e950d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e9510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9513 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124e9516 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9519 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124e9520 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124e9525 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 124e9528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e952a je 0x124e953b */
  if (C.zf) goto L_124e953b;
  /* 124e952c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e952f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124e9532 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9535 jne 0x124e953b */
  if (!C.zf) goto L_124e953b;
  /* 124e9537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9539 jmp 0x124e955f */
  goto L_124e955f;
L_124e953b:;
  /* 124e953b call 0x124e8890 */
  push32(0x124e9540u); f_124e8890();
  /* 124e9540 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 124e9546 call 0x124e88a0 */
  push32(0x124e954bu); f_124e88a0();
  /* 124e954b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e9551 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9554 jmp 0x124e955f */
  goto L_124e955f;
L_124e9556:;
  /* 124e9556 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124e9559 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124e955f:;
  /* 124e955f mov esp, ebp */
  ESP = (EBP);
  /* 124e9561 pop ebp */
  EBP = (pop32());
  /* 124e9562 ret  */
  ESPCHK(0x124e92f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019570 @ 0x124e9570 (199 bytes, 68 insns) */
void f_124e9570(void) {
  FTRACE(0x124e9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9570 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9571 mov ebp, esp */
  EBP = (ESP);
  /* 124e9573 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9574 push ebx */
  push32((uint32_t)(EBX));
  /* 124e9575 push esi */
  push32((uint32_t)(ESI));
  /* 124e9576 push edi */
  push32((uint32_t)(EDI));
L_124e9577:;
  /* 124e9577 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e957b jne 0x124e959b */
  if (!C.zf) goto L_124e959b;
  /* 124e957d push 0x12508964 */
  push32((uint32_t)(0x12508964u));
  /* 124e9582 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9584 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 124e9586 push 0x12508a30 */
  push32((uint32_t)(0x12508a30u));
  /* 124e958b push 2 */
  push32((uint32_t)(0x2u));
  /* 124e958d call 0x124dfa80 */
  push32(0x124e9592u); f_124dfa80();
  /* 124e9592 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9595 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9598 jne 0x124e959b */
  if (!C.zf) goto L_124e959b;
  /* 124e959a int3  */
  x86_unimpl("int3 @ 0x124e959a");
L_124e959b:;
  /* 124e959b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e959d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e959f jne 0x124e9577 */
  if (!C.zf) goto L_124e9577;
  /* 124e95a1 mov ecx, dword ptr [0x1250cddc] */
  ECX = (r32((uint32_t)(0x1250cddc)));
  /* 124e95a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e95aa mov dword ptr [0x1250cddc], ecx */
  w32((uint32_t)(0x1250cddc), (ECX));
  /* 124e95b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e95b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e95b6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 124e95b8 push 0x12508a30 */
  push32((uint32_t)(0x12508a30u));
  /* 124e95bd push 2 */
  push32((uint32_t)(0x2u));
  /* 124e95bf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 124e95c4 call 0x124e09c0 */
  push32(0x124e95c9u); f_124e09c0();
  /* 124e95c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e95cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e95cf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 124e95d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e95d5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e95d9 je 0x124e95f6 */
  if (C.zf) goto L_124e95f6;
  /* 124e95db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e95de mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124e95e1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 124e95e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e95e7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 124e95ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e95ed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 124e95f4 jmp 0x124e961b */
  goto L_124e961b;
L_124e95f6:;
  /* 124e95f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e95f9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124e95fc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124e95ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9602 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124e9605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9608 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e960b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e960e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 124e9611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9614 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_124e961b:;
  /* 124e961b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e961e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9621 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124e9624 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124e9626 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9629 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 124e9630 pop edi */
  EDI = (pop32());
  /* 124e9631 pop esi */
  ESI = (pop32());
  /* 124e9632 pop ebx */
  EBX = (pop32());
  /* 124e9633 mov esp, ebp */
  ESP = (EBP);
  /* 124e9635 pop ebp */
  EBP = (pop32());
  /* 124e9636 ret  */
  ESPCHK(0x124e9570u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x124e9640 (50 bytes, 17 insns) */
void f_124e9640(void) {
  FTRACE(0x124e9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9640 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9641 mov ebp, esp */
  EBP = (ESP);
  /* 124e9643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9646 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e964c jb 0x124e9652 */
  if (C.cf) goto L_124e9652;
  /* 124e964e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9650 jmp 0x124e9670 */
  goto L_124e9670;
L_124e9652:;
  /* 124e9652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9655 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9658 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e965b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e965e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9661 mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9668 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124e966d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_124e9670:;
  /* 124e9670 pop ebp */
  EBP = (pop32());
  /* 124e9671 ret  */
  ESPCHK(0x124e9640u, _esp0);
  ESP += 4; return;
}

/* FUN_10019680 @ 0x124e9680 (300 bytes, 80 insns) */
void f_124e9680(void) {
  FTRACE(0x124e9680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9680 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9681 mov ebp, esp */
  EBP = (ESP);
  /* 124e9683 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9684 cmp dword ptr [0x1250e2a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250e2a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e968b jne 0x124e9699 */
  if (!C.zf) goto L_124e9699;
  /* 124e968d mov dword ptr [0x1250e2a0], 0x200 */
  w32((uint32_t)(0x1250e2a0), (0x200u));
  /* 124e9697 jmp 0x124e96ac */
  goto L_124e96ac;
L_124e9699:;
  /* 124e9699 cmp dword ptr [0x1250e2a0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1250e2a0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e96a0 jge 0x124e96ac */
  if ((C.sf==C.of)) goto L_124e96ac;
  /* 124e96a2 mov dword ptr [0x1250e2a0], 0x14 */
  w32((uint32_t)(0x1250e2a0), (0x14u));
L_124e96ac:;
  /* 124e96ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 124e96b1 push 0x12508a3c */
  push32((uint32_t)(0x12508a3cu));
  /* 124e96b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124e96b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 124e96ba mov eax, dword ptr [0x1250e2a0] */
  EAX = (r32((uint32_t)(0x1250e2a0)));
  /* 124e96bf push eax */
  push32((uint32_t)(EAX));
  /* 124e96c0 call 0x124e0dd0 */
  push32(0x124e96c5u); f_124e0dd0();
  /* 124e96c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e96c8 mov dword ptr [0x1250cf50], eax */
  w32((uint32_t)(0x1250cf50), (EAX));
  /* 124e96cd cmp dword ptr [0x1250cf50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e96d4 jne 0x124e9715 */
  if (!C.zf) goto L_124e9715;
  /* 124e96d6 mov dword ptr [0x1250e2a0], 0x14 */
  w32((uint32_t)(0x1250e2a0), (0x14u));
  /* 124e96e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 124e96e5 push 0x12508a3c */
  push32((uint32_t)(0x12508a3cu));
  /* 124e96ea push 2 */
  push32((uint32_t)(0x2u));
  /* 124e96ec push 4 */
  push32((uint32_t)(0x4u));
  /* 124e96ee mov ecx, dword ptr [0x1250e2a0] */
  ECX = (r32((uint32_t)(0x1250e2a0)));
  /* 124e96f4 push ecx */
  push32((uint32_t)(ECX));
  /* 124e96f5 call 0x124e0dd0 */
  push32(0x124e96fau); f_124e0dd0();
  /* 124e96fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e96fd mov dword ptr [0x1250cf50], eax */
  w32((uint32_t)(0x1250cf50), (EAX));
  /* 124e9702 cmp dword ptr [0x1250cf50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9709 jne 0x124e9715 */
  if (!C.zf) goto L_124e9715;
  /* 124e970b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 124e970d call 0x124df930 */
  push32(0x124e9712u); f_124df930();
  /* 124e9712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e9715:;
  /* 124e9715 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e971c jmp 0x124e9727 */
  goto L_124e9727;
L_124e971e:;
  /* 124e971e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9721 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9724 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124e9727:;
  /* 124e9727 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e972b jge 0x124e9746 */
  if ((C.sf==C.of)) goto L_124e9746;
  /* 124e972d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9730 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e9733 add eax, 0x1250b120 */
  { uint32_t _a=(EAX),_b=(0x1250b120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9738 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e973b mov edx, dword ptr [0x1250cf50] */
  EDX = (r32((uint32_t)(0x1250cf50)));
  /* 124e9741 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 124e9744 jmp 0x124e971e */
  goto L_124e971e;
L_124e9746:;
  /* 124e9746 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124e974d jmp 0x124e9758 */
  goto L_124e9758;
L_124e974f:;
  /* 124e974f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9752 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124e9758:;
  /* 124e9758 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e975c jge 0x124e97a8 */
  if ((C.sf==C.of)) goto L_124e97a8;
  /* 124e975e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9761 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9767 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e976a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e976d mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9774 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9778 je 0x124e9796 */
  if (C.zf) goto L_124e9796;
  /* 124e977a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e977d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9780 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9783 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e9786 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9789 mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9790 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9794 jne 0x124e97a6 */
  if (!C.zf) goto L_124e97a6;
L_124e9796:;
  /* 124e9796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9799 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e979c mov dword ptr [ecx + 0x1250b130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1250b130), (0xffffffffu));
L_124e97a6:;
  /* 124e97a6 jmp 0x124e974f */
  goto L_124e974f;
L_124e97a8:;
  /* 124e97a8 mov esp, ebp */
  ESP = (EBP);
  /* 124e97aa pop ebp */
  EBP = (pop32());
  /* 124e97ab ret  */
  ESPCHK(0x124e9680u, _esp0);
  ESP += 4; return;
}

/* FUN_100197b0 @ 0x124e97b0 (26 bytes, 9 insns) */
void f_124e97b0(void) {
  FTRACE(0x124e97b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e97b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e97b1 mov ebp, esp */
  EBP = (ESP);
  /* 124e97b3 call 0x124ea3b0 */
  push32(0x124e97b8u); f_124ea3b0();
  /* 124e97b8 movsx eax, byte ptr [0x1250cbf8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1250cbf8))));
  /* 124e97bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e97c1 je 0x124e97c8 */
  if (C.zf) goto L_124e97c8;
  /* 124e97c3 call 0x124ea170 */
  push32(0x124e97c8u); f_124ea170();
L_124e97c8:;
  /* 124e97c8 pop ebp */
  EBP = (pop32());
  /* 124e97c9 ret  */
  ESPCHK(0x124e97b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100197d0 @ 0x124e97d0 (61 bytes, 20 insns) */
void f_124e97d0(void) {
  FTRACE(0x124e97d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e97d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e97d1 mov ebp, esp */
  EBP = (ESP);
  /* 124e97d3 cmp dword ptr [ebp + 8], 0x1250b120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1250b120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e97da jb 0x124e97fe */
  if (C.cf) goto L_124e97fe;
  /* 124e97dc cmp dword ptr [ebp + 8], 0x1250b380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1250b380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e97e3 ja 0x124e97fe */
  if ((!C.cf&&!C.zf)) goto L_124e97fe;
  /* 124e97e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e97e8 sub eax, 0x1250b120 */
  { uint32_t _a=(EAX),_b=(0x1250b120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e97ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e97f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e97f3 push eax */
  push32((uint32_t)(EAX));
  /* 124e97f4 call 0x124e43c0 */
  push32(0x124e97f9u); f_124e43c0();
  /* 124e97f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e97fc jmp 0x124e980b */
  goto L_124e980b;
L_124e97fe:;
  /* 124e97fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9801 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9804 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9805 call dword ptr [0x1250f354] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f354))), 0x124e980bu);
L_124e980b:;
  /* 124e980b pop ebp */
  EBP = (pop32());
  /* 124e980c ret  */
  ESPCHK(0x124e97d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019810 @ 0x124e9810 (41 bytes, 16 insns) */
void f_124e9810(void) {
  FTRACE(0x124e9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9810 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9811 mov ebp, esp */
  EBP = (ESP);
  /* 124e9813 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9817 jge 0x124e982a */
  if ((C.sf==C.of)) goto L_124e982a;
  /* 124e9819 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e981c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e981f push eax */
  push32((uint32_t)(EAX));
  /* 124e9820 call 0x124e43c0 */
  push32(0x124e9825u); f_124e43c0();
  /* 124e9825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9828 jmp 0x124e9837 */
  goto L_124e9837;
L_124e982a:;
  /* 124e982a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e982d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9830 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9831 call dword ptr [0x1250f354] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f354))), 0x124e9837u);
L_124e9837:;
  /* 124e9837 pop ebp */
  EBP = (pop32());
  /* 124e9838 ret  */
  ESPCHK(0x124e9810u, _esp0);
  ESP += 4; return;
}

/* FUN_10019840 @ 0x124e9840 (61 bytes, 20 insns) */
void f_124e9840(void) {
  FTRACE(0x124e9840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9840 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9841 mov ebp, esp */
  EBP = (ESP);
  /* 124e9843 cmp dword ptr [ebp + 8], 0x1250b120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1250b120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e984a jb 0x124e986e */
  if (C.cf) goto L_124e986e;
  /* 124e984c cmp dword ptr [ebp + 8], 0x1250b380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1250b380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9853 ja 0x124e986e */
  if ((!C.cf&&!C.zf)) goto L_124e986e;
  /* 124e9855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9858 sub eax, 0x1250b120 */
  { uint32_t _a=(EAX),_b=(0x1250b120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e985d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e9860 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9863 push eax */
  push32((uint32_t)(EAX));
  /* 124e9864 call 0x124e4460 */
  push32(0x124e9869u); f_124e4460();
  /* 124e9869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e986c jmp 0x124e987b */
  goto L_124e987b;
L_124e986e:;
  /* 124e986e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9871 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9874 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9875 call dword ptr [0x1250f350] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f350))), 0x124e987bu);
L_124e987b:;
  /* 124e987b pop ebp */
  EBP = (pop32());
  /* 124e987c ret  */
  ESPCHK(0x124e9840u, _esp0);
  ESP += 4; return;
}

/* FUN_10019880 @ 0x124e9880 (41 bytes, 16 insns) */
void f_124e9880(void) {
  FTRACE(0x124e9880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9880 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9881 mov ebp, esp */
  EBP = (ESP);
  /* 124e9883 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9887 jge 0x124e989a */
  if ((C.sf==C.of)) goto L_124e989a;
  /* 124e9889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e988c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e988f push eax */
  push32((uint32_t)(EAX));
  /* 124e9890 call 0x124e4460 */
  push32(0x124e9895u); f_124e4460();
  /* 124e9895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9898 jmp 0x124e98a7 */
  goto L_124e98a7;
L_124e989a:;
  /* 124e989a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e989d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e98a0 push ecx */
  push32((uint32_t)(ECX));
  /* 124e98a1 call dword ptr [0x1250f350] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f350))), 0x124e98a7u);
L_124e98a7:;
  /* 124e98a7 pop ebp */
  EBP = (pop32());
  /* 124e98a8 ret  */
  ESPCHK(0x124e9880u, _esp0);
  ESP += 4; return;
}

/* FUN_100198b0 @ 0x124e98b0 (119 bytes, 34 insns) */
void f_124e98b0(void) {
  FTRACE(0x124e98b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e98b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e98b1 mov ebp, esp */
  EBP = (ESP);
  /* 124e98b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e98b6 push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124e98bb call dword ptr [0x1250f3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3bc))), 0x124e98c1u);
  /* 124e98c1 cmp dword ptr [0x1250cf3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e98c8 je 0x124e98e8 */
  if (C.zf) goto L_124e98e8;
  /* 124e98ca push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124e98cf call dword ptr [0x1250f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3ac))), 0x124e98d5u);
  /* 124e98d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124e98d7 call 0x124e43c0 */
  push32(0x124e98dcu); f_124e43c0();
  /* 124e98dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e98df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124e98e6 jmp 0x124e98ef */
  goto L_124e98ef;
L_124e98e8:;
  /* 124e98e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124e98ef:;
  /* 124e98ef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 124e98f3 push eax */
  push32((uint32_t)(EAX));
  /* 124e98f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e98f7 push ecx */
  push32((uint32_t)(ECX));
  /* 124e98f8 call 0x124e9930 */
  push32(0x124e98fdu); f_124e9930();
  /* 124e98fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9900 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124e9903 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9907 je 0x124e9915 */
  if (C.zf) goto L_124e9915;
  /* 124e9909 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124e990b call 0x124e4460 */
  push32(0x124e9910u); f_124e4460();
  /* 124e9910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9913 jmp 0x124e9920 */
  goto L_124e9920;
L_124e9915:;
  /* 124e9915 push 0x1250cf4c */
  push32((uint32_t)(0x1250cf4cu));
  /* 124e991a call dword ptr [0x1250f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3ac))), 0x124e9920u);
L_124e9920:;
  /* 124e9920 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e9923 mov esp, ebp */
  ESP = (EBP);
  /* 124e9925 pop ebp */
  EBP = (pop32());
  /* 124e9926 ret  */
  ESPCHK(0x124e98b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019930 @ 0x124e9930 (160 bytes, 50 insns) */
void f_124e9930(void) {
  FTRACE(0x124e9930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9930 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9931 mov ebp, esp */
  EBP = (ESP);
  /* 124e9933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e9936 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e993a jne 0x124e9943 */
  if (!C.zf) goto L_124e9943;
  /* 124e993c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e993e jmp 0x124e99cc */
  goto L_124e99cc;
L_124e9943:;
  /* 124e9943 cmp dword ptr [0x1250cdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e994a jne 0x124e997a */
  if (!C.zf) goto L_124e997a;
  /* 124e994c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e994f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9954 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9959 jle 0x124e996b */
  if ((C.zf||C.sf!=C.of)) goto L_124e996b;
  /* 124e995b call 0x124e8890 */
  push32(0x124e9960u); f_124e8890();
  /* 124e9960 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 124e9966 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9969 jmp 0x124e99cc */
  goto L_124e99cc;
L_124e996b:;
  /* 124e996b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e996e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 124e9971 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 124e9973 mov eax, 1 */
  EAX = (0x1u);
  /* 124e9978 jmp 0x124e99cc */
  goto L_124e99cc;
L_124e997a:;
  /* 124e997a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124e9981 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124e9984 push eax */
  push32((uint32_t)(EAX));
  /* 124e9985 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9987 mov ecx, dword ptr [0x1250aea4] */
  ECX = (r32((uint32_t)(0x1250aea4)));
  /* 124e998d push ecx */
  push32((uint32_t)(ECX));
  /* 124e998e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9991 push edx */
  push32((uint32_t)(EDX));
  /* 124e9992 push 1 */
  push32((uint32_t)(0x1u));
  /* 124e9994 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 124e9997 push eax */
  push32((uint32_t)(EAX));
  /* 124e9998 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124e999d mov ecx, dword ptr [0x1250cdd0] */
  ECX = (r32((uint32_t)(0x1250cdd0)));
  /* 124e99a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124e99a4 call dword ptr [0x1250f378] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f378))), 0x124e99aau);
  /* 124e99aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e99ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e99b1 je 0x124e99b9 */
  if (C.zf) goto L_124e99b9;
  /* 124e99b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e99b7 je 0x124e99c9 */
  if (C.zf) goto L_124e99c9;
L_124e99b9:;
  /* 124e99b9 call 0x124e8890 */
  push32(0x124e99beu); f_124e8890();
  /* 124e99be mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 124e99c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124e99c7 jmp 0x124e99cc */
  goto L_124e99cc;
L_124e99c9:;
  /* 124e99c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124e99cc:;
  /* 124e99cc mov esp, ebp */
  ESP = (EBP);
  /* 124e99ce pop ebp */
  EBP = (pop32());
  /* 124e99cf ret  */
  ESPCHK(0x124e9930u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x124e99d0 (32 bytes, 18 insns) */
void f_124e99d0(void) {
  FTRACE(0x124e99d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e99d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e99d1 mov ebp, esp */
  EBP = (ESP);
  /* 124e99d3 push ebx */
  push32((uint32_t)(EBX));
  /* 124e99d4 push esi */
  push32((uint32_t)(ESI));
  /* 124e99d5 push edi */
  push32((uint32_t)(EDI));
  /* 124e99d6 push ebp */
  push32((uint32_t)(EBP));
  /* 124e99d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e99d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e99db push 0x124e99e8 */
  push32((uint32_t)(0x124e99e8u));
  /* 124e99e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 124e99e3 call 0x124f111c */
  push32(0x124e99e8u); f_124f111c();
  /* 124e99e8 pop ebp */
  EBP = (pop32());
  /* 124e99e9 pop edi */
  EDI = (pop32());
  /* 124e99ea pop esi */
  ESI = (pop32());
  /* 124e99eb pop ebx */
  EBX = (pop32());
  /* 124e99ec mov esp, ebp */
  ESP = (EBP);
  /* 124e99ee pop ebp */
  EBP = (pop32());
  /* 124e99ef ret  */
  ESPCHK(0x124e99d0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x124e9a12 (104 bytes, 33 insns) */
void f_124e9a12(void) {
  FTRACE(0x124e9a12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9a12 push ebx */
  push32((uint32_t)(EBX));
  /* 124e9a13 push esi */
  push32((uint32_t)(ESI));
  /* 124e9a14 push edi */
  push32((uint32_t)(EDI));
  /* 124e9a15 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 124e9a19 push eax */
  push32((uint32_t)(EAX));
  /* 124e9a1a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 124e9a1c push 0x124e99f0 */
  push32((uint32_t)(0x124e99f0u));
  /* 124e9a21 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 124e9a28 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_124e9a2f:;
  /* 124e9a2f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 124e9a33 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e9a36 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 124e9a39 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9a3c je 0x124e9a6c */
  if (C.zf) goto L_124e9a6c;
  /* 124e9a3e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9a42 je 0x124e9a6c */
  if (C.zf) goto L_124e9a6c;
  /* 124e9a44 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 124e9a47 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 124e9a4a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 124e9a4e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 124e9a51 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9a56 jne 0x124e9a6a */
  if (!C.zf) goto L_124e9a6a;
  /* 124e9a58 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 124e9a5d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 124e9a61 call 0x124e9aa6 */
  push32(0x124e9a66u); f_124e9aa6();
  /* 124e9a66 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x124e9a6au);
L_124e9a6a:;
  /* 124e9a6a jmp 0x124e9a2f */
  goto L_124e9a2f;
L_124e9a6c:;
  /* 124e9a6c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 124e9a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9a76 pop edi */
  EDI = (pop32());
  /* 124e9a77 pop esi */
  ESI = (pop32());
  /* 124e9a78 pop ebx */
  EBX = (pop32());
  /* 124e9a79 ret  */
  ESPCHK(0x124e9a12u, _esp0);
  ESP += 4; return;
}

/* FUN_10019aa6 @ 0x124e9aa6 (24 bytes, 10 insns) */
void f_124e9aa6(void) {
  FTRACE(0x124e9aa6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 124e9aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9aa8 mov ebx, 0x1250b3b8 */
  EBX = (0x1250b3b8u);
  /* 124e9aad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9ab0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 124e9ab3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 124e9ab6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 124e9ab9 pop ecx */
  ECX = (pop32());
  /* 124e9aba pop ebx */
  EBX = (pop32());
  /* 124e9abb ret 4 */
  ESPCHK(0x124e9aa6u, _esp0);
  ESP += 8; return;
}

/* FUN_10019b85 @ 0x124e9b85 (27 bytes, 11 insns) */
void f_124e9b85(void) {
  FTRACE(0x124e9b85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9b85 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9b86 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124e9b8a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 124e9b8c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124e9b8f push eax */
  push32((uint32_t)(EAX));
  /* 124e9b90 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 124e9b93 push eax */
  push32((uint32_t)(EAX));
  /* 124e9b94 call 0x124e9a12 */
  push32(0x124e9b99u); f_124e9a12();
  /* 124e9b99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9b9c pop ebp */
  EBP = (pop32());
  /* 124e9b9d ret 4 */
  ESPCHK(0x124e9b85u, _esp0);
  ESP += 8; return;
}

/* FUN_10019ba0 @ 0x124e9ba0 (482 bytes, 138 insns) */
void f_124e9ba0(void) {
  FTRACE(0x124e9ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9ba1 mov ebp, esp */
  EBP = (ESP);
  /* 124e9ba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e9ba6 push esi */
  push32((uint32_t)(ESI));
  /* 124e9ba7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 124e9bae push 0x12 */
  push32((uint32_t)(0x12u));
  /* 124e9bb0 call 0x124e43c0 */
  push32(0x124e9bb5u); f_124e43c0();
  /* 124e9bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9bb8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e9bbf jmp 0x124e9bca */
  goto L_124e9bca;
L_124e9bc1:;
  /* 124e9bc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9bc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9bc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124e9bca:;
  /* 124e9bca cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9bce jge 0x124e9d70 */
  if ((C.sf==C.of)) goto L_124e9d70;
  /* 124e9bd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9bd7 cmp dword ptr [ecx*4 + 0x1250e5a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1250e5a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9bdf je 0x124e9cd6 */
  if (C.zf) goto L_124e9cd6;
  /* 124e9be5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9be8 mov eax, dword ptr [edx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e9bef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e9bf2 jmp 0x124e9bfd */
  goto L_124e9bfd;
L_124e9bf4:;
  /* 124e9bf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9bf7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9bfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124e9bfd:;
  /* 124e9bfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9c00 mov eax, dword ptr [edx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e9c07 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9c0c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9c0f jae 0x124e9cc6 */
  if (!C.cf) goto L_124e9cc6;
  /* 124e9c15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e9c1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e9c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e9c21 jne 0x124e9cc1 */
  if (!C.zf) goto L_124e9cc1;
  /* 124e9c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c2a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9c2e jne 0x124e9c69 */
  if (!C.zf) goto L_124e9c69;
  /* 124e9c30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124e9c32 call 0x124e43c0 */
  push32(0x124e9c37u); f_124e43c0();
  /* 124e9c37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c3d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9c41 jne 0x124e9c5f */
  if (!C.zf) goto L_124e9c5f;
  /* 124e9c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c46 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9c49 push edx */
  push32((uint32_t)(EDX));
  /* 124e9c4a call dword ptr [0x1250f364] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f364))), 0x124e9c50u);
  /* 124e9c50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124e9c56 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9c59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_124e9c5f:;
  /* 124e9c5f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124e9c61 call 0x124e4460 */
  push32(0x124e9c66u); f_124e4460();
  /* 124e9c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e9c69:;
  /* 124e9c69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9c6f push eax */
  push32((uint32_t)(EAX));
  /* 124e9c70 call dword ptr [0x1250f354] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f354))), 0x124e9c76u);
  /* 124e9c76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c79 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 124e9c7d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124e9c80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e9c82 je 0x124e9c96 */
  if (C.zf) goto L_124e9c96;
  /* 124e9c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c87 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9c8a push eax */
  push32((uint32_t)(EAX));
  /* 124e9c8b call dword ptr [0x1250f350] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f350))), 0x124e9c91u);
  /* 124e9c91 jmp 0x124e9bf4 */
  goto L_124e9bf4;
L_124e9c96:;
  /* 124e9c96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9c99 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124e9c9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9ca2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9ca5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9cab sub eax, dword ptr [edx*4 + 0x1250e5a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1250e5a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e9cb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124e9cb3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 124e9cb8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124e9cba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9cbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e9cbf jmp 0x124e9cc6 */
  goto L_124e9cc6;
L_124e9cc1:;
  /* 124e9cc1 jmp 0x124e9bf4 */
  goto L_124e9bf4;
L_124e9cc6:;
  /* 124e9cc6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9cca je 0x124e9cd1 */
  if (C.zf) goto L_124e9cd1;
  /* 124e9ccc jmp 0x124e9d70 */
  goto L_124e9d70;
L_124e9cd1:;
  /* 124e9cd1 jmp 0x124e9d6b */
  goto L_124e9d6b;
L_124e9cd6:;
  /* 124e9cd6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 124e9cd8 push 0x12508a44 */
  push32((uint32_t)(0x12508a44u));
  /* 124e9cdd push 2 */
  push32((uint32_t)(0x2u));
  /* 124e9cdf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 124e9ce4 call 0x124e09c0 */
  push32(0x124e9ce9u); f_124e09c0();
  /* 124e9ce9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9cec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e9cef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9cf3 je 0x124e9d69 */
  if (C.zf) goto L_124e9d69;
  /* 124e9cf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9cf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9cfb mov dword ptr [eax*4 + 0x1250e5a0], ecx */
  w32((uint32_t)(EAX*4 + 0x1250e5a0), (ECX));
  /* 124e9d02 mov edx, dword ptr [0x1250e6dc] */
  EDX = (r32((uint32_t)(0x1250e6dc)));
  /* 124e9d08 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9d0b mov dword ptr [0x1250e6dc], edx */
  w32((uint32_t)(0x1250e6dc), (EDX));
  /* 124e9d11 jmp 0x124e9d1c */
  goto L_124e9d1c;
L_124e9d13:;
  /* 124e9d13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9d16 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9d19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124e9d1c:;
  /* 124e9d1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9d1f mov edx, dword ptr [ecx*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9d26 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9d2c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9d2f jae 0x124e9d54 */
  if (!C.cf) goto L_124e9d54;
  /* 124e9d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9d34 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 124e9d38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9d3b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124e9d41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9d44 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 124e9d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124e9d4b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 124e9d52 jmp 0x124e9d13 */
  goto L_124e9d13;
L_124e9d54:;
  /* 124e9d54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124e9d57 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9d5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124e9d5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e9d60 push edx */
  push32((uint32_t)(EDX));
  /* 124e9d61 call 0x124ea0b0 */
  push32(0x124e9d66u); f_124ea0b0();
  /* 124e9d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124e9d69:;
  /* 124e9d69 jmp 0x124e9d70 */
  goto L_124e9d70;
L_124e9d6b:;
  /* 124e9d6b jmp 0x124e9bc1 */
  goto L_124e9bc1;
L_124e9d70:;
  /* 124e9d70 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 124e9d72 call 0x124e4460 */
  push32(0x124e9d77u); f_124e4460();
  /* 124e9d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124e9d7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124e9d7d pop esi */
  ESI = (pop32());
  /* 124e9d7e mov esp, ebp */
  ESP = (EBP);
  /* 124e9d80 pop ebp */
  EBP = (pop32());
  /* 124e9d81 ret  */
  ESPCHK(0x124e9ba0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x124e9d90 (183 bytes, 57 insns) */
void f_124e9d90(void) {
  FTRACE(0x124e9d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9d90 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9d91 mov ebp, esp */
  EBP = (ESP);
  /* 124e9d93 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9d97 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9d9d jae 0x124e9e2a */
  if (!C.cf) goto L_124e9e2a;
  /* 124e9da3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9da6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9da9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9dac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e9daf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9db2 mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9db9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9dbd jne 0x124e9e2a */
  if (!C.zf) goto L_124e9e2a;
  /* 124e9dbf cmp dword ptr [0x1250cbb8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbb8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9dc6 jne 0x124e9e0a */
  if (!C.zf) goto L_124e9e0a;
  /* 124e9dc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9dcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124e9dce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9dd2 je 0x124e9de2 */
  if (C.zf) goto L_124e9de2;
  /* 124e9dd4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9dd8 je 0x124e9df0 */
  if (C.zf) goto L_124e9df0;
  /* 124e9dda cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9dde je 0x124e9dfe */
  if (C.zf) goto L_124e9dfe;
  /* 124e9de0 jmp 0x124e9e0a */
  goto L_124e9e0a;
L_124e9de2:;
  /* 124e9de2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9de5 push edx */
  push32((uint32_t)(EDX));
  /* 124e9de6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 124e9de8 call dword ptr [0x1250f31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f31c))), 0x124e9deeu);
  /* 124e9dee jmp 0x124e9e0a */
  goto L_124e9e0a;
L_124e9df0:;
  /* 124e9df0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9df3 push eax */
  push32((uint32_t)(EAX));
  /* 124e9df4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 124e9df6 call dword ptr [0x1250f31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f31c))), 0x124e9dfcu);
  /* 124e9dfc jmp 0x124e9e0a */
  goto L_124e9e0a;
L_124e9dfe:;
  /* 124e9dfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9e01 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9e02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 124e9e04 call dword ptr [0x1250f31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f31c))), 0x124e9e0au);
L_124e9e0a:;
  /* 124e9e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e0d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124e9e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e13 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9e16 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9e19 mov ecx, dword ptr [edx*4 + 0x1250e5a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e9e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9e23 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 124e9e26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9e28 jmp 0x124e9e43 */
  goto L_124e9e43;
L_124e9e2a:;
  /* 124e9e2a call 0x124e8890 */
  push32(0x124e9e2fu); f_124e8890();
  /* 124e9e2f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e9e35 call 0x124e88a0 */
  push32(0x124e9e3au); f_124e88a0();
  /* 124e9e3a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e9e40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124e9e43:;
  /* 124e9e43 mov esp, ebp */
  ESP = (EBP);
  /* 124e9e45 pop ebp */
  EBP = (pop32());
  /* 124e9e46 ret  */
  ESPCHK(0x124e9d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e50 @ 0x124e9e50 (216 bytes, 63 insns) */
void f_124e9e50(void) {
  FTRACE(0x124e9e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9e50 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9e51 mov ebp, esp */
  EBP = (ESP);
  /* 124e9e53 push ecx */
  push32((uint32_t)(ECX));
  /* 124e9e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e57 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9e5d jae 0x124e9f0b */
  if (!C.cf) goto L_124e9f0b;
  /* 124e9e63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e66 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9e69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e6c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e9e6f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9e72 mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9e79 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124e9e7e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e9e81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e9e83 je 0x124e9f0b */
  if (C.zf) goto L_124e9f0b;
  /* 124e9e89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e8c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124e9e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9e92 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9e95 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9e98 mov ecx, dword ptr [edx*4 + 0x1250e5a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e9e9f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9ea3 je 0x124e9f0b */
  if (C.zf) goto L_124e9f0b;
  /* 124e9ea5 cmp dword ptr [0x1250cbb8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250cbb8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9eac jne 0x124e9eea */
  if (!C.zf) goto L_124e9eea;
  /* 124e9eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9eb1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124e9eb4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9eb8 je 0x124e9ec8 */
  if (C.zf) goto L_124e9ec8;
  /* 124e9eba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9ebe je 0x124e9ed4 */
  if (C.zf) goto L_124e9ed4;
  /* 124e9ec0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9ec4 je 0x124e9ee0 */
  if (C.zf) goto L_124e9ee0;
  /* 124e9ec6 jmp 0x124e9eea */
  goto L_124e9eea;
L_124e9ec8:;
  /* 124e9ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9eca push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 124e9ecc call dword ptr [0x1250f31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f31c))), 0x124e9ed2u);
  /* 124e9ed2 jmp 0x124e9eea */
  goto L_124e9eea;
L_124e9ed4:;
  /* 124e9ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9ed6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 124e9ed8 call dword ptr [0x1250f31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f31c))), 0x124e9edeu);
  /* 124e9ede jmp 0x124e9eea */
  goto L_124e9eea;
L_124e9ee0:;
  /* 124e9ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124e9ee2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 124e9ee4 call dword ptr [0x1250f31c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f31c))), 0x124e9eeau);
L_124e9eea:;
  /* 124e9eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9eed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124e9ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9ef3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124e9ef6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9ef9 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124e9f00 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 124e9f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124e9f09 jmp 0x124e9f24 */
  goto L_124e9f24;
L_124e9f0b:;
  /* 124e9f0b call 0x124e8890 */
  push32(0x124e9f10u); f_124e8890();
  /* 124e9f10 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e9f16 call 0x124e88a0 */
  push32(0x124e9f1bu); f_124e88a0();
  /* 124e9f1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e9f21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124e9f24:;
  /* 124e9f24 mov esp, ebp */
  ESP = (EBP);
  /* 124e9f26 pop ebp */
  EBP = (pop32());
  /* 124e9f27 ret  */
  ESPCHK(0x124e9e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f30 @ 0x124e9f30 (102 bytes, 30 insns) */
void f_124e9f30(void) {
  FTRACE(0x124e9f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9f30 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9f31 mov ebp, esp */
  EBP = (ESP);
  /* 124e9f33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9f36 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9f3c jae 0x124e9f7b */
  if (!C.cf) goto L_124e9f7b;
  /* 124e9f3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9f41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124e9f44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9f47 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124e9f4a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9f4d mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124e9f54 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124e9f59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124e9f5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e9f5e je 0x124e9f7b */
  if (C.zf) goto L_124e9f7b;
  /* 124e9f60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9f63 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 124e9f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9f69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 124e9f6c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124e9f6f mov ecx, dword ptr [edx*4 + 0x1250e5a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1250e5a0)));
  /* 124e9f76 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 124e9f79 jmp 0x124e9f94 */
  goto L_124e9f94;
L_124e9f7b:;
  /* 124e9f7b call 0x124e8890 */
  push32(0x124e9f80u); f_124e8890();
  /* 124e9f80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124e9f86 call 0x124e88a0 */
  push32(0x124e9f8bu); f_124e88a0();
  /* 124e9f8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124e9f91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_124e9f94:;
  /* 124e9f94 pop ebp */
  EBP = (pop32());
  /* 124e9f95 ret  */
  ESPCHK(0x124e9f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fa0 @ 0x124e9fa0 (260 bytes, 83 insns) */
void f_124e9fa0(void) {
  FTRACE(0x124e9fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124e9fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 124e9fa1 mov ebp, esp */
  EBP = (ESP);
  /* 124e9fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124e9fa6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 124e9faa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9fad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 124e9fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124e9fb2 je 0x124e9fbd */
  if (C.zf) goto L_124e9fbd;
  /* 124e9fb4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 124e9fb7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 124e9fba mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_124e9fbd:;
  /* 124e9fbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9fc0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 124e9fc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124e9fc8 je 0x124e9fd2 */
  if (C.zf) goto L_124e9fd2;
  /* 124e9fca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124e9fcd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 124e9fcf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_124e9fd2:;
  /* 124e9fd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124e9fd5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 124e9fdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124e9fdd je 0x124e9fe8 */
  if (C.zf) goto L_124e9fe8;
  /* 124e9fdf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124e9fe2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 124e9fe5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_124e9fe8:;
  /* 124e9fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124e9feb push eax */
  push32((uint32_t)(EAX));
  /* 124e9fec call dword ptr [0x1250f3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3dc))), 0x124e9ff2u);
  /* 124e9ff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124e9ff5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124e9ff9 jne 0x124ea012 */
  if (!C.zf) goto L_124ea012;
  /* 124e9ffb call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124ea001u);
  /* 124ea001 push eax */
  push32((uint32_t)(EAX));
  /* 124ea002 call 0x124e87f0 */
  push32(0x124ea007u); f_124e87f0();
  /* 124ea007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea00a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ea00d jmp 0x124ea0a0 */
  goto L_124ea0a0;
L_124ea012:;
  /* 124ea012 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea016 jne 0x124ea023 */
  if (!C.zf) goto L_124ea023;
  /* 124ea018 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 124ea01b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 124ea01e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 124ea021 jmp 0x124ea032 */
  goto L_124ea032;
L_124ea023:;
  /* 124ea023 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea027 jne 0x124ea032 */
  if (!C.zf) goto L_124ea032;
  /* 124ea029 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124ea02c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 124ea02f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_124ea032:;
  /* 124ea032 call 0x124e9ba0 */
  push32(0x124ea037u); f_124e9ba0();
  /* 124ea037 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ea03a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea03e jne 0x124ea05b */
  if (!C.zf) goto L_124ea05b;
  /* 124ea040 call 0x124e8890 */
  push32(0x124ea045u); f_124e8890();
  /* 124ea045 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 124ea04b call 0x124e88a0 */
  push32(0x124ea050u); f_124e88a0();
  /* 124ea050 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124ea056 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ea059 jmp 0x124ea0a0 */
  goto L_124ea0a0;
L_124ea05b:;
  /* 124ea05b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea05e push eax */
  push32((uint32_t)(EAX));
  /* 124ea05f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea062 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea063 call 0x124e9d90 */
  push32(0x124ea068u); f_124e9d90();
  /* 124ea068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea06b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124ea06e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 124ea071 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 124ea074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea077 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124ea07a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea07d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124ea080 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea083 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124ea08a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124ea08d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 124ea091 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea094 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea095 call 0x124ea140 */
  push32(0x124ea09au); f_124ea140();
  /* 124ea09a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea09d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124ea0a0:;
  /* 124ea0a0 mov esp, ebp */
  ESP = (EBP);
  /* 124ea0a2 pop ebp */
  EBP = (pop32());
  /* 124ea0a3 ret  */
  ESPCHK(0x124e9fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a0b0 @ 0x124ea0b0 (134 bytes, 44 insns) */
void f_124ea0b0(void) {
  FTRACE(0x124ea0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea0b1 mov ebp, esp */
  EBP = (ESP);
  /* 124ea0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea0b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124ea0ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea0bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124ea0c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea0c3 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124ea0ca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea0cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124ea0cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea0d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea0d6 jne 0x124ea111 */
  if (!C.zf) goto L_124ea111;
  /* 124ea0d8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124ea0da call 0x124e43c0 */
  push32(0x124ea0dfu); f_124e43c0();
  /* 124ea0df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea0e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea0e5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea0e9 jne 0x124ea107 */
  if (!C.zf) goto L_124ea107;
  /* 124ea0eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea0ee add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea0f1 push edx */
  push32((uint32_t)(EDX));
  /* 124ea0f2 call dword ptr [0x1250f364] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f364))), 0x124ea0f8u);
  /* 124ea0f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea0fb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124ea0fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea104 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_124ea107:;
  /* 124ea107 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 124ea109 call 0x124e4460 */
  push32(0x124ea10eu); f_124e4460();
  /* 124ea10e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ea111:;
  /* 124ea111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea114 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124ea117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea11a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124ea11d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea120 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124ea127 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 124ea12b push eax */
  push32((uint32_t)(EAX));
  /* 124ea12c call dword ptr [0x1250f354] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f354))), 0x124ea132u);
  /* 124ea132 mov esp, ebp */
  ESP = (EBP);
  /* 124ea134 pop ebp */
  EBP = (pop32());
  /* 124ea135 ret  */
  ESPCHK(0x124ea0b0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x124ea140 (38 bytes, 13 insns) */
void f_124ea140(void) {
  FTRACE(0x124ea140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea140 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea141 mov ebp, esp */
  EBP = (ESP);
  /* 124ea143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea146 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124ea149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea14c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124ea14f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea152 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124ea159 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 124ea15d push eax */
  push32((uint32_t)(EAX));
  /* 124ea15e call dword ptr [0x1250f350] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f350))), 0x124ea164u);
  /* 124ea164 pop ebp */
  EBP = (pop32());
  /* 124ea165 ret  */
  ESPCHK(0x124ea140u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a170 @ 0x124ea170 (218 bytes, 63 insns) */
void f_124ea170(void) {
  FTRACE(0x124ea170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea170 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea171 mov ebp, esp */
  EBP = (ESP);
  /* 124ea173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ea17d push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea17f call 0x124e43c0 */
  push32(0x124ea184u); f_124e43c0();
  /* 124ea184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea187 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 124ea18e jmp 0x124ea199 */
  goto L_124ea199;
L_124ea190:;
  /* 124ea190 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea193 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea196 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124ea199:;
  /* 124ea199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea19c cmp ecx, dword ptr [0x1250e2a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e2a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea1a2 jge 0x124ea239 */
  if ((C.sf==C.of)) goto L_124ea239;
  /* 124ea1a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea1ab mov eax, dword ptr [0x1250cf50] */
  EAX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea1b0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea1b4 je 0x124ea234 */
  if (C.zf) goto L_124ea234;
  /* 124ea1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea1b9 mov edx, dword ptr [0x1250cf50] */
  EDX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea1bf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124ea1c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124ea1c5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 124ea1cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ea1cd je 0x124ea1f1 */
  if (C.zf) goto L_124ea1f1;
  /* 124ea1cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea1d2 mov eax, dword ptr [0x1250cf50] */
  EAX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea1d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124ea1da push ecx */
  push32((uint32_t)(ECX));
  /* 124ea1db call 0x124eaf60 */
  push32(0x124ea1e0u); f_124eaf60();
  /* 124ea1e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea1e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea1e6 je 0x124ea1f1 */
  if (C.zf) goto L_124ea1f1;
  /* 124ea1e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea1eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea1ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124ea1f1:;
  /* 124ea1f1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea1f5 jl 0x124ea234 */
  if ((C.sf!=C.of)) goto L_124ea234;
  /* 124ea1f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea1fa mov ecx, dword ptr [0x1250cf50] */
  ECX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea200 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124ea203 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea206 push edx */
  push32((uint32_t)(EDX));
  /* 124ea207 call dword ptr [0x1250f390] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f390))), 0x124ea20du);
  /* 124ea20d push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea20f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea212 mov ecx, dword ptr [0x1250cf50] */
  ECX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea218 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124ea21b push edx */
  push32((uint32_t)(EDX));
  /* 124ea21c call 0x124e1450 */
  push32(0x124ea221u); f_124e1450();
  /* 124ea221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea224 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea227 mov ecx, dword ptr [0x1250cf50] */
  ECX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea22d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_124ea234:;
  /* 124ea234 jmp 0x124ea190 */
  goto L_124ea190;
L_124ea239:;
  /* 124ea239 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea23b call 0x124e4460 */
  push32(0x124ea240u); f_124e4460();
  /* 124ea240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea246 mov esp, ebp */
  ESP = (EBP);
  /* 124ea248 pop ebp */
  EBP = (pop32());
  /* 124ea249 ret  */
  ESPCHK(0x124ea170u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a250 @ 0x124ea250 (68 bytes, 26 insns) */
void f_124ea250(void) {
  FTRACE(0x124ea250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea250 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea251 mov ebp, esp */
  EBP = (ESP);
  /* 124ea253 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea254 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea258 jne 0x124ea266 */
  if (!C.zf) goto L_124ea266;
  /* 124ea25a push 0 */
  push32((uint32_t)(0x0u));
  /* 124ea25c call 0x124ea3c0 */
  push32(0x124ea261u); f_124ea3c0();
  /* 124ea261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea264 jmp 0x124ea290 */
  goto L_124ea290;
L_124ea266:;
  /* 124ea266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea269 push eax */
  push32((uint32_t)(EAX));
  /* 124ea26a call 0x124e97d0 */
  push32(0x124ea26fu); f_124e97d0();
  /* 124ea26f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea275 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea276 call 0x124ea2a0 */
  push32(0x124ea27bu); f_124ea2a0();
  /* 124ea27b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea27e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ea281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea284 push edx */
  push32((uint32_t)(EDX));
  /* 124ea285 call 0x124e9840 */
  push32(0x124ea28au); f_124e9840();
  /* 124ea28a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea28d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124ea290:;
  /* 124ea290 mov esp, ebp */
  ESP = (EBP);
  /* 124ea292 pop ebp */
  EBP = (pop32());
  /* 124ea293 ret  */
  ESPCHK(0x124ea250u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2a0 @ 0x124ea2a0 (65 bytes, 26 insns) */
void f_124ea2a0(void) {
  FTRACE(0x124ea2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea2a1 mov ebp, esp */
  EBP = (ESP);
  /* 124ea2a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea2a6 push eax */
  push32((uint32_t)(EAX));
  /* 124ea2a7 call 0x124ea2f0 */
  push32(0x124ea2acu); f_124ea2f0();
  /* 124ea2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea2b1 je 0x124ea2b8 */
  if (C.zf) goto L_124ea2b8;
  /* 124ea2b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ea2b6 jmp 0x124ea2df */
  goto L_124ea2df;
L_124ea2b8:;
  /* 124ea2b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea2bb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ea2be and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 124ea2c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ea2c6 je 0x124ea2dd */
  if (C.zf) goto L_124ea2dd;
  /* 124ea2c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea2cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124ea2ce push ecx */
  push32((uint32_t)(ECX));
  /* 124ea2cf call 0x124eb0b0 */
  push32(0x124ea2d4u); f_124eb0b0();
  /* 124ea2d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea2d7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ea2d9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea2db jmp 0x124ea2df */
  goto L_124ea2df;
L_124ea2dd:;
  /* 124ea2dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ea2df:;
  /* 124ea2df pop ebp */
  EBP = (pop32());
  /* 124ea2e0 ret  */
  ESPCHK(0x124ea2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2f0 @ 0x124ea2f0 (183 bytes, 62 insns) */
void f_124ea2f0(void) {
  FTRACE(0x124ea2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea2f1 mov ebp, esp */
  EBP = (ESP);
  /* 124ea2f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea2f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ea2fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea300 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ea303 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea306 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ea309 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 124ea30c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea30f jne 0x124ea38b */
  if (!C.zf) goto L_124ea38b;
  /* 124ea311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea314 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124ea317 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 124ea31d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ea31f je 0x124ea38b */
  if (C.zf) goto L_124ea38b;
  /* 124ea321 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea324 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea327 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 124ea329 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea32c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ea32f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea333 jle 0x124ea38b */
  if ((C.zf||C.sf!=C.of)) goto L_124ea38b;
  /* 124ea335 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea338 push edx */
  push32((uint32_t)(EDX));
  /* 124ea339 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea33c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124ea33f push ecx */
  push32((uint32_t)(ECX));
  /* 124ea340 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea343 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124ea346 push eax */
  push32((uint32_t)(EAX));
  /* 124ea347 call 0x124e9260 */
  push32(0x124ea34cu); f_124e9260();
  /* 124ea34c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea34f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea352 jne 0x124ea375 */
  if (!C.zf) goto L_124ea375;
  /* 124ea354 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea357 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ea35a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 124ea360 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ea362 je 0x124ea373 */
  if (C.zf) goto L_124ea373;
  /* 124ea364 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea367 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124ea36a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 124ea36d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea370 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_124ea373:;
  /* 124ea373 jmp 0x124ea38b */
  goto L_124ea38b;
L_124ea375:;
  /* 124ea375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea378 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124ea37b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124ea37e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea381 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 124ea384 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124ea38b:;
  /* 124ea38b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea38e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea391 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124ea394 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ea396 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea399 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 124ea3a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea3a3 mov esp, ebp */
  ESP = (EBP);
  /* 124ea3a5 pop ebp */
  EBP = (pop32());
  /* 124ea3a6 ret  */
  ESPCHK(0x124ea2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3b0 @ 0x124ea3b0 (15 bytes, 7 insns) */
void f_124ea3b0(void) {
  FTRACE(0x124ea3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea3b1 mov ebp, esp */
  EBP = (ESP);
  /* 124ea3b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ea3b5 call 0x124ea3c0 */
  push32(0x124ea3bau); f_124ea3c0();
  /* 124ea3ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea3bd pop ebp */
  EBP = (pop32());
  /* 124ea3be ret  */
  ESPCHK(0x124ea3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3c0 @ 0x124ea3c0 (319 bytes, 94 insns) */
void f_124ea3c0(void) {
  FTRACE(0x124ea3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea3c1 mov ebp, esp */
  EBP = (ESP);
  /* 124ea3c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea3c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ea3cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ea3d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea3d6 call 0x124e43c0 */
  push32(0x124ea3dbu); f_124e43c0();
  /* 124ea3db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea3de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124ea3e5 jmp 0x124ea3f0 */
  goto L_124ea3f0;
L_124ea3e7:;
  /* 124ea3e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea3ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea3ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124ea3f0:;
  /* 124ea3f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea3f3 cmp ecx, dword ptr [0x1250e2a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1250e2a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea3f9 jge 0x124ea4e3 */
  if ((C.sf==C.of)) goto L_124ea4e3;
  /* 124ea3ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea402 mov eax, dword ptr [0x1250cf50] */
  EAX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea407 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea40b je 0x124ea4de */
  if (C.zf) goto L_124ea4de;
  /* 124ea411 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea414 mov edx, dword ptr [0x1250cf50] */
  EDX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea41a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124ea41d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124ea420 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 124ea426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ea428 je 0x124ea4de */
  if (C.zf) goto L_124ea4de;
  /* 124ea42e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea431 mov eax, dword ptr [0x1250cf50] */
  EAX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea436 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124ea439 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea43a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea43d push edx */
  push32((uint32_t)(EDX));
  /* 124ea43e call 0x124e9810 */
  push32(0x124ea443u); f_124e9810();
  /* 124ea443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea446 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea449 mov ecx, dword ptr [0x1250cf50] */
  ECX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea44f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124ea452 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124ea455 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124ea45a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea45c je 0x124ea4c5 */
  if (C.zf) goto L_124ea4c5;
  /* 124ea45e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea462 jne 0x124ea489 */
  if (!C.zf) goto L_124ea489;
  /* 124ea464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea467 mov edx, dword ptr [0x1250cf50] */
  EDX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea46d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124ea470 push eax */
  push32((uint32_t)(EAX));
  /* 124ea471 call 0x124ea2a0 */
  push32(0x124ea476u); f_124ea2a0();
  /* 124ea476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea479 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea47c je 0x124ea487 */
  if (C.zf) goto L_124ea487;
  /* 124ea47e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea481 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea484 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124ea487:;
  /* 124ea487 jmp 0x124ea4c5 */
  goto L_124ea4c5;
L_124ea489:;
  /* 124ea489 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea48d jne 0x124ea4c5 */
  if (!C.zf) goto L_124ea4c5;
  /* 124ea48f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea492 mov eax, dword ptr [0x1250cf50] */
  EAX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea497 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124ea49a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ea49d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 124ea4a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ea4a2 je 0x124ea4c5 */
  if (C.zf) goto L_124ea4c5;
  /* 124ea4a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea4a7 mov ecx, dword ptr [0x1250cf50] */
  ECX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea4ad mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124ea4b0 push edx */
  push32((uint32_t)(EDX));
  /* 124ea4b1 call 0x124ea2a0 */
  push32(0x124ea4b6u); f_124ea2a0();
  /* 124ea4b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea4b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea4bc jne 0x124ea4c5 */
  if (!C.zf) goto L_124ea4c5;
  /* 124ea4be mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_124ea4c5:;
  /* 124ea4c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea4c8 mov ecx, dword ptr [0x1250cf50] */
  ECX = (r32((uint32_t)(0x1250cf50)));
  /* 124ea4ce mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124ea4d1 push edx */
  push32((uint32_t)(EDX));
  /* 124ea4d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea4d5 push eax */
  push32((uint32_t)(EAX));
  /* 124ea4d6 call 0x124e9880 */
  push32(0x124ea4dbu); f_124e9880();
  /* 124ea4db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ea4de:;
  /* 124ea4de jmp 0x124ea3e7 */
  goto L_124ea3e7;
L_124ea4e3:;
  /* 124ea4e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea4e5 call 0x124e4460 */
  push32(0x124ea4eau); f_124e4460();
  /* 124ea4ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea4ed cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea4f1 jne 0x124ea4f8 */
  if (!C.zf) goto L_124ea4f8;
  /* 124ea4f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ea4f6 jmp 0x124ea4fb */
  goto L_124ea4fb;
L_124ea4f8:;
  /* 124ea4f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124ea4fb:;
  /* 124ea4fb mov esp, ebp */
  ESP = (EBP);
  /* 124ea4fd pop ebp */
  EBP = (pop32());
  /* 124ea4fe ret  */
  ESPCHK(0x124ea3c0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x124ea500 (15 bytes, 7 insns) */
void f_124ea500(void) {
  FTRACE(0x124ea500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea500 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea501 mov ebp, esp */
  EBP = (ESP);
  /* 124ea503 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea505 call 0x124df930 */
  push32(0x124ea50au); f_124df930();
  /* 124ea50a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea50d pop ebp */
  EBP = (pop32());
  /* 124ea50e ret  */
  ESPCHK(0x124ea500u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a510 @ 0x124ea510 (1007 bytes, 269 insns) */
void f_124ea510(void) {
  FTRACE(0x124ea510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea510 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea511 mov ebp, esp */
  EBP = (ESP);
  /* 124ea513 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea519 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea51d jl 0x124ea525 */
  if ((C.sf!=C.of)) goto L_124ea525;
  /* 124ea51f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea523 jle 0x124ea52c */
  if ((C.zf||C.sf!=C.of)) goto L_124ea52c;
L_124ea525:;
  /* 124ea525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ea527 jmp 0x124ea8fb */
  goto L_124ea8fb;
L_124ea52c:;
  /* 124ea52c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ea52e call 0x124e43c0 */
  push32(0x124ea533u); f_124e43c0();
  /* 124ea533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea536 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124ea53d mov eax, dword ptr [0x1250cf3c] */
  EAX = (r32((uint32_t)(0x1250cf3c)));
  /* 124ea542 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea545 mov dword ptr [0x1250cf3c], eax */
  w32((uint32_t)(0x1250cf3c), (EAX));
L_124ea54a:;
  /* 124ea54a cmp dword ptr [0x1250cf4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cf4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea551 je 0x124ea55d */
  if (C.zf) goto L_124ea55d;
  /* 124ea553 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ea555 call dword ptr [0x1250f30c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f30c))), 0x124ea55bu);
  /* 124ea55b jmp 0x124ea54a */
  goto L_124ea54a;
L_124ea55d:;
  /* 124ea55d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea561 je 0x124ea5a1 */
  if (C.zf) goto L_124ea5a1;
  /* 124ea563 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea567 je 0x124ea581 */
  if (C.zf) goto L_124ea581;
  /* 124ea569 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea56c push ecx */
  push32((uint32_t)(ECX));
  /* 124ea56d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea570 push edx */
  push32((uint32_t)(EDX));
  /* 124ea571 call 0x124ea900 */
  push32(0x124ea576u); f_124ea900();
  /* 124ea576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea579 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 124ea57f jmp 0x124ea593 */
  goto L_124ea593;
L_124ea581:;
  /* 124ea581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea584 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea587 mov ecx, dword ptr [eax + 0x1250b4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1250b4dc)));
  /* 124ea58d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_124ea593:;
  /* 124ea593 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 124ea599 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ea59c jmp 0x124ea8db */
  goto L_124ea8db;
L_124ea5a1:;
  /* 124ea5a1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 124ea5a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124ea5af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea5b3 je 0x124ea8d3 */
  if (C.zf) goto L_124ea8d3;
  /* 124ea5b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea5bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ea5bf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea5c2 jne 0x124ea7e4 */
  if (!C.zf) goto L_124ea7e4;
  /* 124ea5c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea5cb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124ea5cf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea5d2 jne 0x124ea7e4 */
  if (!C.zf) goto L_124ea7e4;
  /* 124ea5d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea5db movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 124ea5df cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea5e2 jne 0x124ea7e4 */
  if (!C.zf) goto L_124ea7e4;
  /* 124ea5e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea5eb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_124ea5f1:;
  /* 124ea5f1 push 0x12508a94 */
  push32((uint32_t)(0x12508a94u));
  /* 124ea5f6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124ea5fc push ecx */
  push32((uint32_t)(ECX));
  /* 124ea5fd call 0x124ec760 */
  push32(0x124ea602u); f_124ec760();
  /* 124ea602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea605 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 124ea60b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea612 je 0x124ea63d */
  if (C.zf) goto L_124ea63d;
  /* 124ea614 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea61a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea620 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 124ea626 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea62d je 0x124ea63d */
  if (C.zf) goto L_124ea63d;
  /* 124ea62f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea635 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ea638 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea63b jne 0x124ea663 */
  if (!C.zf) goto L_124ea663;
L_124ea63d:;
  /* 124ea63d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea641 je 0x124ea65c */
  if (C.zf) goto L_124ea65c;
  /* 124ea643 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ea645 call 0x124e4460 */
  push32(0x124ea64au); f_124e4460();
  /* 124ea64a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea64d mov edx, dword ptr [0x1250cf3c] */
  EDX = (r32((uint32_t)(0x1250cf3c)));
  /* 124ea653 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea656 mov dword ptr [0x1250cf3c], edx */
  w32((uint32_t)(0x1250cf3c), (EDX));
L_124ea65c:;
  /* 124ea65c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ea65e jmp 0x124ea8fb */
  goto L_124ea8fb;
L_124ea663:;
  /* 124ea663 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 124ea66a jmp 0x124ea675 */
  goto L_124ea675;
L_124ea66c:;
  /* 124ea66c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea66f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea672 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124ea675:;
  /* 124ea675 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea679 jg 0x124ea6c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ea6c3;
  /* 124ea67b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124ea681 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea682 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124ea688 push edx */
  push32((uint32_t)(EDX));
  /* 124ea689 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea68c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea68f mov ecx, dword ptr [eax + 0x1250b4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1250b4d8)));
  /* 124ea695 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea696 call 0x124ec720 */
  push32(0x124ea69bu); f_124ec720();
  /* 124ea69b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea69e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea6a0 jne 0x124ea6c1 */
  if (!C.zf) goto L_124ea6c1;
  /* 124ea6a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea6a5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea6a8 mov eax, dword ptr [edx + 0x1250b4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1250b4d8)));
  /* 124ea6ae push eax */
  push32((uint32_t)(EAX));
  /* 124ea6af call 0x124e37f0 */
  push32(0x124ea6b4u); f_124e37f0();
  /* 124ea6b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea6b7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea6bd jne 0x124ea6c1 */
  if (!C.zf) goto L_124ea6c1;
  /* 124ea6bf jmp 0x124ea6c3 */
  goto L_124ea6c3;
L_124ea6c1:;
  /* 124ea6c1 jmp 0x124ea66c */
  goto L_124ea66c;
L_124ea6c3:;
  /* 124ea6c3 push 0x12508a90 */
  push32((uint32_t)(0x12508a90u));
  /* 124ea6c8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea6ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea6d1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 124ea6d7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea6dd push edx */
  push32((uint32_t)(EDX));
  /* 124ea6de call 0x124ec6e0 */
  push32(0x124ea6e3u); f_124ec6e0();
  /* 124ea6e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea6e6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 124ea6ec cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea6f3 jne 0x124ea729 */
  if (!C.zf) goto L_124ea729;
  /* 124ea6f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea6fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ea6fe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea701 je 0x124ea729 */
  if (C.zf) goto L_124ea729;
  /* 124ea703 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea707 je 0x124ea722 */
  if (C.zf) goto L_124ea722;
  /* 124ea709 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ea70b call 0x124e4460 */
  push32(0x124ea710u); f_124e4460();
  /* 124ea710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea713 mov edx, dword ptr [0x1250cf3c] */
  EDX = (r32((uint32_t)(0x1250cf3c)));
  /* 124ea719 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea71c mov dword ptr [0x1250cf3c], edx */
  w32((uint32_t)(0x1250cf3c), (EDX));
L_124ea722:;
  /* 124ea722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ea724 jmp 0x124ea8fb */
  goto L_124ea8fb;
L_124ea729:;
  /* 124ea729 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea72d jg 0x124ea77a */
  if ((!C.zf&&C.sf==C.of)) goto L_124ea77a;
  /* 124ea72f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124ea735 push eax */
  push32((uint32_t)(EAX));
  /* 124ea736 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea73c push ecx */
  push32((uint32_t)(ECX));
  /* 124ea73d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124ea743 push edx */
  push32((uint32_t)(EDX));
  /* 124ea744 call 0x124e41e0 */
  push32(0x124ea749u); f_124e41e0();
  /* 124ea749 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea74c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124ea752 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 124ea75a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 124ea760 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea761 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea764 push edx */
  push32((uint32_t)(EDX));
  /* 124ea765 call 0x124ea900 */
  push32(0x124ea76au); f_124ea900();
  /* 124ea76a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea76f je 0x124ea77a */
  if (C.zf) goto L_124ea77a;
  /* 124ea771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea774 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea777 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124ea77a:;
  /* 124ea77a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124ea780 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea786 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 124ea78c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124ea792 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ea795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea797 je 0x124ea7a8 */
  if (C.zf) goto L_124ea7a8;
  /* 124ea799 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124ea79f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea7a2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_124ea7a8:;
  /* 124ea7a8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 124ea7ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ea7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea7b3 jne 0x124ea5f1 */
  if (!C.zf) goto L_124ea5f1;
  /* 124ea7b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea7bd je 0x124ea7cc */
  if (C.zf) goto L_124ea7cc;
  /* 124ea7bf call 0x124eaaa0 */
  push32(0x124ea7c4u); f_124eaaa0();
  /* 124ea7c4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 124ea7ca jmp 0x124ea7d6 */
  goto L_124ea7d6;
L_124ea7cc:;
  /* 124ea7cc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_124ea7d6:;
  /* 124ea7d6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 124ea7dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ea7df jmp 0x124ea8d1 */
  goto L_124ea8d1;
L_124ea7e4:;
  /* 124ea7e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea7e7 push edx */
  push32((uint32_t)(EDX));
  /* 124ea7e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ea7ea push 0 */
  push32((uint32_t)(0x0u));
  /* 124ea7ec lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 124ea7f2 push eax */
  push32((uint32_t)(EAX));
  /* 124ea7f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea7f6 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea7f7 call 0x124eaba0 */
  push32(0x124ea7fcu); f_124eaba0();
  /* 124ea7fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea7ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ea802 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea806 je 0x124ea8d1 */
  if (C.zf) goto L_124ea8d1;
  /* 124ea80c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ea813 jmp 0x124ea81e */
  goto L_124ea81e;
L_124ea815:;
  /* 124ea815 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea81b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124ea81e:;
  /* 124ea81e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea822 jg 0x124ea880 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ea880;
  /* 124ea824 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea828 je 0x124ea87e */
  if (C.zf) goto L_124ea87e;
  /* 124ea82a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea82d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea830 mov ecx, dword ptr [eax + 0x1250b4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1250b4dc)));
  /* 124ea836 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea837 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124ea83d push edx */
  push32((uint32_t)(EDX));
  /* 124ea83e call 0x124ec650 */
  push32(0x124ea843u); f_124ec650();
  /* 124ea843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea848 je 0x124ea875 */
  if (C.zf) goto L_124ea875;
  /* 124ea84a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 124ea850 push eax */
  push32((uint32_t)(EAX));
  /* 124ea851 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ea854 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea855 call 0x124ea900 */
  push32(0x124ea85au); f_124ea900();
  /* 124ea85a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea85d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea85f je 0x124ea86c */
  if (C.zf) goto L_124ea86c;
  /* 124ea861 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea864 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea867 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124ea86a jmp 0x124ea873 */
  goto L_124ea873;
L_124ea86c:;
  /* 124ea86c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_124ea873:;
  /* 124ea873 jmp 0x124ea87e */
  goto L_124ea87e;
L_124ea875:;
  /* 124ea875 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ea878 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea87b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124ea87e:;
  /* 124ea87e jmp 0x124ea815 */
  goto L_124ea815;
L_124ea880:;
  /* 124ea880 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea884 je 0x124ea8ab */
  if (C.zf) goto L_124ea8ab;
  /* 124ea886 call 0x124eaaa0 */
  push32(0x124ea88bu); f_124eaaa0();
  /* 124ea88b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ea88e push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea890 mov ecx, dword ptr [0x1250b4dc] */
  ECX = (r32((uint32_t)(0x1250b4dc)));
  /* 124ea896 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea897 call 0x124e1450 */
  push32(0x124ea89cu); f_124e1450();
  /* 124ea89c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea89f mov dword ptr [0x1250b4dc], 0 */
  w32((uint32_t)(0x1250b4dc), (0x0u));
  /* 124ea8a9 jmp 0x124ea8d1 */
  goto L_124ea8d1;
L_124ea8ab:;
  /* 124ea8ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea8af je 0x124ea8be */
  if (C.zf) goto L_124ea8be;
  /* 124ea8b1 call 0x124eaaa0 */
  push32(0x124ea8b6u); f_124eaaa0();
  /* 124ea8b6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 124ea8bc jmp 0x124ea8c8 */
  goto L_124ea8c8;
L_124ea8be:;
  /* 124ea8be mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_124ea8c8:;
  /* 124ea8c8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 124ea8ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124ea8d1:;
  /* 124ea8d1 jmp 0x124ea8db */
  goto L_124ea8db;
L_124ea8d3:;
  /* 124ea8d3 call 0x124eaaa0 */
  push32(0x124ea8d8u); f_124eaaa0();
  /* 124ea8d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124ea8db:;
  /* 124ea8db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea8df je 0x124ea8f8 */
  if (C.zf) goto L_124ea8f8;
  /* 124ea8e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124ea8e3 call 0x124e4460 */
  push32(0x124ea8e8u); f_124e4460();
  /* 124ea8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea8eb mov eax, dword ptr [0x1250cf3c] */
  EAX = (r32((uint32_t)(0x1250cf3c)));
  /* 124ea8f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea8f3 mov dword ptr [0x1250cf3c], eax */
  w32((uint32_t)(0x1250cf3c), (EAX));
L_124ea8f8:;
  /* 124ea8f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124ea8fb:;
  /* 124ea8fb mov esp, ebp */
  ESP = (EBP);
  /* 124ea8fd pop ebp */
  EBP = (pop32());
  /* 124ea8fe ret  */
  ESPCHK(0x124ea510u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a900 @ 0x124ea900 (403 bytes, 117 insns) */
void f_124ea900(void) {
  FTRACE(0x124ea900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ea900 push ebp */
  push32((uint32_t)(EBP));
  /* 124ea901 mov ebp, esp */
  EBP = (ESP);
  /* 124ea903 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ea909 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea90c push eax */
  push32((uint32_t)(EAX));
  /* 124ea90d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 124ea913 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea914 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 124ea91a push edx */
  push32((uint32_t)(EDX));
  /* 124ea91b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 124ea921 push eax */
  push32((uint32_t)(EAX));
  /* 124ea922 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ea925 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea926 call 0x124eaba0 */
  push32(0x124ea92bu); f_124eaba0();
  /* 124ea92b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ea930 jne 0x124ea939 */
  if (!C.zf) goto L_124ea939;
  /* 124ea932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ea934 jmp 0x124eaa8f */
  goto L_124eaa8f;
L_124ea939:;
  /* 124ea939 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 124ea93e push 0x12508a98 */
  push32((uint32_t)(0x12508a98u));
  /* 124ea943 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ea945 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 124ea94b push edx */
  push32((uint32_t)(EDX));
  /* 124ea94c call 0x124e37f0 */
  push32(0x124ea951u); f_124e37f0();
  /* 124ea951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea954 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea957 push eax */
  push32((uint32_t)(EAX));
  /* 124ea958 call 0x124e09c0 */
  push32(0x124ea95du); f_124e09c0();
  /* 124ea95d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea960 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ea963 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ea967 jne 0x124ea970 */
  if (!C.zf) goto L_124ea970;
  /* 124ea969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ea96b jmp 0x124eaa8f */
  goto L_124eaa8f;
L_124ea970:;
  /* 124ea970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea973 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea976 mov ecx, dword ptr [eax + 0x1250b4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1250b4dc)));
  /* 124ea97c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124ea97f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea982 mov eax, dword ptr [edx*4 + 0x1250cdb8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1250cdb8)));
  /* 124ea989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ea98c push 6 */
  push32((uint32_t)(0x6u));
  /* 124ea98e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea991 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea994 add ecx, 0x1250ce08 */
  { uint32_t _a=(ECX),_b=(0x1250ce08u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea99a push ecx */
  push32((uint32_t)(ECX));
  /* 124ea99b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 124ea99e push edx */
  push32((uint32_t)(EDX));
  /* 124ea99f call 0x124e72a0 */
  push32(0x124ea9a4u); f_124e72a0();
  /* 124ea9a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea9a7 mov eax, dword ptr [0x1250cdd0] */
  EAX = (r32((uint32_t)(0x1250cdd0)));
  /* 124ea9ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124ea9af lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 124ea9b5 push ecx */
  push32((uint32_t)(ECX));
  /* 124ea9b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ea9b9 push edx */
  push32((uint32_t)(EDX));
  /* 124ea9ba call 0x124e3970 */
  push32(0x124ea9bfu); f_124e3970();
  /* 124ea9bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea9c5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea9c8 mov dword ptr [ecx + 0x1250b4dc], eax */
  w32((uint32_t)(ECX + 0x1250b4dc), (EAX));
  /* 124ea9ce mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 124ea9d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124ea9da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea9dd mov dword ptr [eax*4 + 0x1250cdb8], edx */
  w32((uint32_t)(EAX*4 + 0x1250cdb8), (EDX));
  /* 124ea9e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 124ea9e6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 124ea9ec push ecx */
  push32((uint32_t)(ECX));
  /* 124ea9ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ea9f0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ea9f3 add edx, 0x1250ce08 */
  { uint32_t _a=(EDX),_b=(0x1250ce08u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ea9f9 push edx */
  push32((uint32_t)(EDX));
  /* 124ea9fa call 0x124e72a0 */
  push32(0x124ea9ffu); f_124e72a0();
  /* 124ea9ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaa02 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaa06 jne 0x124eaa13 */
  if (!C.zf) goto L_124eaa13;
  /* 124eaa08 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124eaa0e mov dword ptr [0x1250cdd0], eax */
  w32((uint32_t)(0x1250cdd0), (EAX));
L_124eaa13:;
  /* 124eaa13 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaa17 jne 0x124eaa25 */
  if (!C.zf) goto L_124eaa25;
  /* 124eaa19 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124eaa1f mov dword ptr [0x1250cdd4], ecx */
  w32((uint32_t)(0x1250cdd4), (ECX));
L_124eaa25:;
  /* 124eaa25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaa28 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eaa2b call dword ptr [edx + 0x1250b4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1250b4e0))), 0x124eaa31u);
  /* 124eaa31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eaa33 je 0x124eaa6c */
  if (C.zf) goto L_124eaa6c;
  /* 124eaa35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaa38 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eaa3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eaa3e mov dword ptr [eax + 0x1250b4dc], ecx */
  w32((uint32_t)(EAX + 0x1250b4dc), (ECX));
  /* 124eaa44 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eaa46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eaa49 push edx */
  push32((uint32_t)(EDX));
  /* 124eaa4a call 0x124e1450 */
  push32(0x124eaa4fu); f_124e1450();
  /* 124eaa4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaa52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaa55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eaa58 mov dword ptr [eax*4 + 0x1250cdb8], ecx */
  w32((uint32_t)(EAX*4 + 0x1250cdb8), (ECX));
  /* 124eaa5f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124eaa62 mov dword ptr [0x1250cdd0], edx */
  w32((uint32_t)(0x1250cdd0), (EDX));
  /* 124eaa68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eaa6a jmp 0x124eaa8f */
  goto L_124eaa8f;
L_124eaa6c:;
  /* 124eaa6c cmp dword ptr [ebp - 0xc], 0x1250b3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1250b3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaa73 je 0x124eaa83 */
  if (C.zf) goto L_124eaa83;
  /* 124eaa75 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eaa77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eaa7a push eax */
  push32((uint32_t)(EAX));
  /* 124eaa7b call 0x124e1450 */
  push32(0x124eaa80u); f_124e1450();
  /* 124eaa80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eaa83:;
  /* 124eaa83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaa86 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eaa89 mov eax, dword ptr [ecx + 0x1250b4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1250b4dc)));
L_124eaa8f:;
  /* 124eaa8f mov esp, ebp */
  ESP = (EBP);
  /* 124eaa91 pop ebp */
  EBP = (pop32());
  /* 124eaa92 ret  */
  ESPCHK(0x124ea900u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aaa0 @ 0x124eaaa0 (256 bytes, 72 insns) */
void f_124eaaa0(void) {
  FTRACE(0x124eaaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eaaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 124eaaa1 mov ebp, esp */
  EBP = (ESP);
  /* 124eaaa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eaaa6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124eaaad cmp dword ptr [0x1250b4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250b4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaab4 jne 0x124eaad4 */
  if (!C.zf) goto L_124eaad4;
  /* 124eaab6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 124eaabb push 0x12508a98 */
  push32((uint32_t)(0x12508a98u));
  /* 124eaac0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eaac2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 124eaac7 call 0x124e09c0 */
  push32(0x124eaaccu); f_124e09c0();
  /* 124eaacc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaacf mov dword ptr [0x1250b4dc], eax */
  w32((uint32_t)(0x1250b4dc), (EAX));
L_124eaad4:;
  /* 124eaad4 mov eax, dword ptr [0x1250b4dc] */
  EAX = (r32((uint32_t)(0x1250b4dc)));
  /* 124eaad9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124eaadc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124eaae3 jmp 0x124eaaee */
  goto L_124eaaee;
L_124eaae5:;
  /* 124eaae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eaae8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaaeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124eaaee:;
  /* 124eaaee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eaaf1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eaaf4 mov eax, dword ptr [edx + 0x1250b4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1250b4dc)));
  /* 124eaafa push eax */
  push32((uint32_t)(EAX));
  /* 124eaafb push 0x12508aa4 */
  push32((uint32_t)(0x12508aa4u));
  /* 124eab00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eab03 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eab06 mov edx, dword ptr [ecx + 0x1250b4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1250b4d8)));
  /* 124eab0c push edx */
  push32((uint32_t)(EDX));
  /* 124eab0d push 3 */
  push32((uint32_t)(0x3u));
  /* 124eab0f mov eax, dword ptr [0x1250b4dc] */
  EAX = (r32((uint32_t)(0x1250b4dc)));
  /* 124eab14 push eax */
  push32((uint32_t)(EAX));
  /* 124eab15 call 0x124ead40 */
  push32(0x124eab1au); f_124ead40();
  /* 124eab1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eab1d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eab21 jge 0x124eab69 */
  if ((C.sf==C.of)) goto L_124eab69;
  /* 124eab23 push 0x12508a90 */
  push32((uint32_t)(0x12508a90u));
  /* 124eab28 mov ecx, dword ptr [0x1250b4dc] */
  ECX = (r32((uint32_t)(0x1250b4dc)));
  /* 124eab2e push ecx */
  push32((uint32_t)(ECX));
  /* 124eab2f call 0x124e3980 */
  push32(0x124eab34u); f_124e3980();
  /* 124eab34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eab37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eab3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eab3d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eab40 mov eax, dword ptr [edx + 0x1250b4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1250b4dc)));
  /* 124eab46 push eax */
  push32((uint32_t)(EAX));
  /* 124eab47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eab4a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eab4d mov edx, dword ptr [ecx + 0x1250b4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1250b4dc)));
  /* 124eab53 push edx */
  push32((uint32_t)(EDX));
  /* 124eab54 call 0x124ec650 */
  push32(0x124eab59u); f_124ec650();
  /* 124eab59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eab5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eab5e je 0x124eab67 */
  if (C.zf) goto L_124eab67;
  /* 124eab60 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124eab67:;
  /* 124eab67 jmp 0x124eab97 */
  goto L_124eab97;
L_124eab69:;
  /* 124eab69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eab6d jne 0x124eab76 */
  if (!C.zf) goto L_124eab76;
  /* 124eab6f mov eax, dword ptr [0x1250b4dc] */
  EAX = (r32((uint32_t)(0x1250b4dc)));
  /* 124eab74 jmp 0x124eab9c */
  goto L_124eab9c;
L_124eab76:;
  /* 124eab76 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eab78 mov eax, dword ptr [0x1250b4dc] */
  EAX = (r32((uint32_t)(0x1250b4dc)));
  /* 124eab7d push eax */
  push32((uint32_t)(EAX));
  /* 124eab7e call 0x124e1450 */
  push32(0x124eab83u); f_124e1450();
  /* 124eab83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eab86 mov dword ptr [0x1250b4dc], 0 */
  w32((uint32_t)(0x1250b4dc), (0x0u));
  /* 124eab90 mov eax, dword ptr [0x1250b4f4] */
  EAX = (r32((uint32_t)(0x1250b4f4)));
  /* 124eab95 jmp 0x124eab9c */
  goto L_124eab9c;
L_124eab97:;
  /* 124eab97 jmp 0x124eaae5 */
  goto L_124eaae5;
L_124eab9c:;
  /* 124eab9c mov esp, ebp */
  ESP = (EBP);
  /* 124eab9e pop ebp */
  EBP = (pop32());
  /* 124eab9f ret  */
  ESPCHK(0x124eaaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aba0 @ 0x124eaba0 (388 bytes, 115 insns) */
void f_124eaba0(void) {
  FTRACE(0x124eaba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eaba0 push ebp */
  push32((uint32_t)(EBP));
  /* 124eaba1 mov ebp, esp */
  EBP = (ESP);
  /* 124eaba3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eaba9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eabad jne 0x124eabb6 */
  if (!C.zf) goto L_124eabb6;
  /* 124eabaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eabb1 jmp 0x124ead20 */
  goto L_124ead20;
L_124eabb6:;
  /* 124eabb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eabb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124eabbc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eabbf jne 0x124eac10 */
  if (!C.zf) goto L_124eac10;
  /* 124eabc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eabc4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124eabc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eabca jne 0x124eac10 */
  if (!C.zf) goto L_124eac10;
  /* 124eabcc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eabcf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 124eabd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eabd5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 124eabd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eabdd je 0x124eabf9 */
  if (C.zf) goto L_124eabf9;
  /* 124eabdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eabe2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 124eabe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eabea mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 124eabf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eabf3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_124eabf9:;
  /* 124eabf9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eabfd je 0x124eac08 */
  if (C.zf) goto L_124eac08;
  /* 124eabff mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124eac02 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_124eac08:;
  /* 124eac08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eac0b jmp 0x124ead20 */
  goto L_124ead20;
L_124eac10:;
  /* 124eac10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eac13 push ecx */
  push32((uint32_t)(ECX));
  /* 124eac14 push 0x1250b450 */
  push32((uint32_t)(0x1250b450u));
  /* 124eac19 call 0x124ec650 */
  push32(0x124eac1eu); f_124ec650();
  /* 124eac1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eac21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eac23 je 0x124eacd8 */
  if (C.zf) goto L_124eacd8;
  /* 124eac29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eac2c push edx */
  push32((uint32_t)(EDX));
  /* 124eac2d push 0x1250b3cc */
  push32((uint32_t)(0x1250b3ccu));
  /* 124eac32 call 0x124ec650 */
  push32(0x124eac37u); f_124ec650();
  /* 124eac37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eac3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eac3c je 0x124eacd8 */
  if (C.zf) goto L_124eacd8;
  /* 124eac42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eac45 push eax */
  push32((uint32_t)(EAX));
  /* 124eac46 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 124eac4c push ecx */
  push32((uint32_t)(ECX));
  /* 124eac4d call 0x124ead90 */
  push32(0x124eac52u); f_124ead90();
  /* 124eac52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eac55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eac57 je 0x124eac60 */
  if (C.zf) goto L_124eac60;
  /* 124eac59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eac5b jmp 0x124ead20 */
  goto L_124ead20;
L_124eac60:;
  /* 124eac60 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 124eac66 push edx */
  push32((uint32_t)(EDX));
  /* 124eac67 push 0x1250cde0 */
  push32((uint32_t)(0x1250cde0u));
  /* 124eac6c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 124eac72 push eax */
  push32((uint32_t)(EAX));
  /* 124eac73 call 0x124ec7a0 */
  push32(0x124eac78u); f_124ec7a0();
  /* 124eac78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eac7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eac7d jne 0x124eac86 */
  if (!C.zf) goto L_124eac86;
  /* 124eac7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eac81 jmp 0x124ead20 */
  goto L_124ead20;
L_124eac86:;
  /* 124eac86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124eac88 mov cx, word ptr [0x1250cde4] */
  CX = (r16((uint32_t)(0x1250cde4)));
  /* 124eac8f mov dword ptr [0x1250cde8], ecx */
  w32((uint32_t)(0x1250cde8), (ECX));
  /* 124eac95 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 124eac9b push edx */
  push32((uint32_t)(EDX));
  /* 124eac9c push 0x1250b450 */
  push32((uint32_t)(0x1250b450u));
  /* 124eaca1 call 0x124eaef0 */
  push32(0x124eaca6u); f_124eaef0();
  /* 124eaca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eacac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124eacaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124eacb1 je 0x124eacc6 */
  if (C.zf) goto L_124eacc6;
  /* 124eacb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eacb6 push edx */
  push32((uint32_t)(EDX));
  /* 124eacb7 push 0x1250b3cc */
  push32((uint32_t)(0x1250b3ccu));
  /* 124eacbc call 0x124e3970 */
  push32(0x124eacc1u); f_124e3970();
  /* 124eacc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eacc4 jmp 0x124eacd8 */
  goto L_124eacd8;
L_124eacc6:;
  /* 124eacc6 push 0x1250b450 */
  push32((uint32_t)(0x1250b450u));
  /* 124eaccb push 0x1250b3cc */
  push32((uint32_t)(0x1250b3ccu));
  /* 124eacd0 call 0x124e3970 */
  push32(0x124eacd5u); f_124e3970();
  /* 124eacd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eacd8:;
  /* 124eacd8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eacdc je 0x124eacf1 */
  if (C.zf) goto L_124eacf1;
  /* 124eacde push 6 */
  push32((uint32_t)(0x6u));
  /* 124eace0 push 0x1250cde0 */
  push32((uint32_t)(0x1250cde0u));
  /* 124eace5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124eace8 push eax */
  push32((uint32_t)(EAX));
  /* 124eace9 call 0x124e72a0 */
  push32(0x124eaceeu); f_124e72a0();
  /* 124eacee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eacf1:;
  /* 124eacf1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eacf5 je 0x124ead0a */
  if (C.zf) goto L_124ead0a;
  /* 124eacf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 124eacf9 push 0x1250cde8 */
  push32((uint32_t)(0x1250cde8u));
  /* 124eacfe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ead01 push ecx */
  push32((uint32_t)(ECX));
  /* 124ead02 call 0x124e72a0 */
  push32(0x124ead07u); f_124e72a0();
  /* 124ead07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ead0a:;
  /* 124ead0a push 0x1250b450 */
  push32((uint32_t)(0x1250b450u));
  /* 124ead0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ead12 push edx */
  push32((uint32_t)(EDX));
  /* 124ead13 call 0x124e3970 */
  push32(0x124ead18u); f_124e3970();
  /* 124ead18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ead1b mov eax, 0x1250b450 */
  EAX = (0x1250b450u);
L_124ead20:;
  /* 124ead20 mov esp, ebp */
  ESP = (EBP);
  /* 124ead22 pop ebp */
  EBP = (pop32());
  /* 124ead23 ret  */
  ESPCHK(0x124eaba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad30 @ 0x124ead30 (7 bytes, 5 insns) */
void f_124ead30(void) {
  FTRACE(0x124ead30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ead30 push ebp */
  push32((uint32_t)(EBP));
  /* 124ead31 mov ebp, esp */
  EBP = (ESP);
  /* 124ead33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ead35 pop ebp */
  EBP = (pop32());
  /* 124ead36 ret  */
  ESPCHK(0x124ead30u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x124ead40 (79 bytes, 28 insns) */
void f_124ead40(void) {
  FTRACE(0x124ead40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ead40 push ebp */
  push32((uint32_t)(EBP));
  /* 124ead41 mov ebp, esp */
  EBP = (ESP);
  /* 124ead43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ead46 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 124ead49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ead4c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ead53 jmp 0x124ead5e */
  goto L_124ead5e;
L_124ead55:;
  /* 124ead55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ead58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ead5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124ead5e:;
  /* 124ead5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ead61 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ead64 jge 0x124ead84 */
  if ((C.sf==C.of)) goto L_124ead84;
  /* 124ead66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ead69 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ead6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ead6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ead72 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 124ead75 push edx */
  push32((uint32_t)(EDX));
  /* 124ead76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ead79 push eax */
  push32((uint32_t)(EAX));
  /* 124ead7a call 0x124e3980 */
  push32(0x124ead7fu); f_124e3980();
  /* 124ead7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ead82 jmp 0x124ead55 */
  goto L_124ead55;
L_124ead84:;
  /* 124ead84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ead8b mov esp, ebp */
  ESP = (EBP);
  /* 124ead8d pop ebp */
  EBP = (pop32());
  /* 124ead8e ret  */
  ESPCHK(0x124ead40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ad90 @ 0x124ead90 (349 bytes, 122 insns) */
void f_124ead90(void) {
  FTRACE(0x124ead90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ead90 push ebp */
  push32((uint32_t)(EBP));
  /* 124ead91 mov ebp, esp */
  EBP = (ESP);
  /* 124ead93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ead96 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 124ead9b push 0 */
  push32((uint32_t)(0x0u));
  /* 124ead9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eada0 push eax */
  push32((uint32_t)(EAX));
  /* 124eada1 call 0x124e4730 */
  push32(0x124eada6u); f_124e4730();
  /* 124eada6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eada9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eadac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124eadaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124eadb1 jne 0x124eadba */
  if (!C.zf) goto L_124eadba;
  /* 124eadb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eadb5 jmp 0x124eaee9 */
  goto L_124eaee9;
L_124eadba:;
  /* 124eadba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eadbd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124eadc0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eadc3 jne 0x124eadf0 */
  if (!C.zf) goto L_124eadf0;
  /* 124eadc5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eadc8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 124eadcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eadce je 0x124eadf0 */
  if (C.zf) goto L_124eadf0;
  /* 124eadd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eadd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eadd6 push ecx */
  push32((uint32_t)(ECX));
  /* 124eadd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eadda add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eade0 push edx */
  push32((uint32_t)(EDX));
  /* 124eade1 call 0x124e3970 */
  push32(0x124eade6u); f_124e3970();
  /* 124eade6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eade9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eadeb jmp 0x124eaee9 */
  goto L_124eaee9;
L_124eadf0:;
  /* 124eadf0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124eadf7 jmp 0x124eae02 */
  goto L_124eae02;
L_124eadf9:;
  /* 124eadf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eadfc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eadff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124eae02:;
  /* 124eae02 push 0x12508aa8 */
  push32((uint32_t)(0x12508aa8u));
  /* 124eae07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eae0a push ecx */
  push32((uint32_t)(ECX));
  /* 124eae0b call 0x124ec6e0 */
  push32(0x124eae10u); f_124ec6e0();
  /* 124eae10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eae13 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124eae16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae1a jne 0x124eae24 */
  if (!C.zf) goto L_124eae24;
  /* 124eae1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eae1f jmp 0x124eaee9 */
  goto L_124eaee9;
L_124eae24:;
  /* 124eae24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eae27 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eae2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124eae2c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 124eae2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae33 jne 0x124eae5a */
  if (!C.zf) goto L_124eae5a;
  /* 124eae35 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae39 jge 0x124eae5a */
  if ((C.sf==C.of)) goto L_124eae5a;
  /* 124eae3b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eae3f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae42 je 0x124eae5a */
  if (C.zf) goto L_124eae5a;
  /* 124eae44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eae47 push edx */
  push32((uint32_t)(EDX));
  /* 124eae48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eae4b push eax */
  push32((uint32_t)(EAX));
  /* 124eae4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eae4f push ecx */
  push32((uint32_t)(ECX));
  /* 124eae50 call 0x124e41e0 */
  push32(0x124eae55u); f_124e41e0();
  /* 124eae55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eae58 jmp 0x124eaec0 */
  goto L_124eaec0;
L_124eae5a:;
  /* 124eae5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae5e jne 0x124eae88 */
  if (!C.zf) goto L_124eae88;
  /* 124eae60 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae64 jge 0x124eae88 */
  if ((C.sf==C.of)) goto L_124eae88;
  /* 124eae66 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eae6a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae6d je 0x124eae88 */
  if (C.zf) goto L_124eae88;
  /* 124eae6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eae72 push eax */
  push32((uint32_t)(EAX));
  /* 124eae73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eae76 push ecx */
  push32((uint32_t)(ECX));
  /* 124eae77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eae7a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eae7d push edx */
  push32((uint32_t)(EDX));
  /* 124eae7e call 0x124e41e0 */
  push32(0x124eae83u); f_124e41e0();
  /* 124eae83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eae86 jmp 0x124eaec0 */
  goto L_124eaec0;
L_124eae88:;
  /* 124eae88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae8c jne 0x124eaebb */
  if (!C.zf) goto L_124eaebb;
  /* 124eae8e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eae92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eae94 je 0x124eae9f */
  if (C.zf) goto L_124eae9f;
  /* 124eae96 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eae9a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eae9d jne 0x124eaebb */
  if (!C.zf) goto L_124eaebb;
L_124eae9f:;
  /* 124eae9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eaea2 push edx */
  push32((uint32_t)(EDX));
  /* 124eaea3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaea6 push eax */
  push32((uint32_t)(EAX));
  /* 124eaea7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaeaa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaeb0 push ecx */
  push32((uint32_t)(ECX));
  /* 124eaeb1 call 0x124e41e0 */
  push32(0x124eaeb6u); f_124e41e0();
  /* 124eaeb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaeb9 jmp 0x124eaec0 */
  goto L_124eaec0;
L_124eaebb:;
  /* 124eaebb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eaebe jmp 0x124eaee9 */
  goto L_124eaee9;
L_124eaec0:;
  /* 124eaec0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eaec4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaec7 jne 0x124eaecb */
  if (!C.zf) goto L_124eaecb;
  /* 124eaec9 jmp 0x124eaee7 */
  goto L_124eaee7;
L_124eaecb:;
  /* 124eaecb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124eaecf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eaed1 jne 0x124eaed5 */
  if (!C.zf) goto L_124eaed5;
  /* 124eaed3 jmp 0x124eaee7 */
  goto L_124eaee7;
L_124eaed5:;
  /* 124eaed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eaed8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaedb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 124eaedf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 124eaee2 jmp 0x124eadf9 */
  goto L_124eadf9;
L_124eaee7:;
  /* 124eaee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124eaee9:;
  /* 124eaee9 mov esp, ebp */
  ESP = (EBP);
  /* 124eaeeb pop ebp */
  EBP = (pop32());
  /* 124eaeec ret  */
  ESPCHK(0x124ead90u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x124eaef0 (101 bytes, 36 insns) */
void f_124eaef0(void) {
  FTRACE(0x124eaef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eaef0 push ebp */
  push32((uint32_t)(EBP));
  /* 124eaef1 mov ebp, esp */
  EBP = (ESP);
  /* 124eaef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaef6 push eax */
  push32((uint32_t)(EAX));
  /* 124eaef7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaefa push ecx */
  push32((uint32_t)(ECX));
  /* 124eaefb call 0x124e3970 */
  push32(0x124eaf00u); f_124e3970();
  /* 124eaf00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaf03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaf06 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 124eaf0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eaf0c je 0x124eaf28 */
  if (C.zf) goto L_124eaf28;
  /* 124eaf0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaf11 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaf14 push ecx */
  push32((uint32_t)(ECX));
  /* 124eaf15 push 0x12508ab0 */
  push32((uint32_t)(0x12508ab0u));
  /* 124eaf1a push 2 */
  push32((uint32_t)(0x2u));
  /* 124eaf1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaf1f push edx */
  push32((uint32_t)(EDX));
  /* 124eaf20 call 0x124ead40 */
  push32(0x124eaf25u); f_124ead40();
  /* 124eaf25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eaf28:;
  /* 124eaf28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaf2b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 124eaf32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124eaf34 je 0x124eaf53 */
  if (C.zf) goto L_124eaf53;
  /* 124eaf36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124eaf39 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaf3f push edx */
  push32((uint32_t)(EDX));
  /* 124eaf40 push 0x12508aac */
  push32((uint32_t)(0x12508aacu));
  /* 124eaf45 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eaf47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaf4a push eax */
  push32((uint32_t)(EAX));
  /* 124eaf4b call 0x124ead40 */
  push32(0x124eaf50u); f_124ead40();
  /* 124eaf50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eaf53:;
  /* 124eaf53 pop ebp */
  EBP = (pop32());
  /* 124eaf54 ret  */
  ESPCHK(0x124eaef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af60 @ 0x124eaf60 (130 bytes, 50 insns) */
void f_124eaf60(void) {
  FTRACE(0x124eaf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eaf60 push ebp */
  push32((uint32_t)(EBP));
  /* 124eaf61 mov ebp, esp */
  EBP = (ESP);
  /* 124eaf63 push ecx */
  push32((uint32_t)(ECX));
  /* 124eaf64 push ebx */
  push32((uint32_t)(EBX));
  /* 124eaf65 push esi */
  push32((uint32_t)(ESI));
  /* 124eaf66 push edi */
  push32((uint32_t)(EDI));
  /* 124eaf67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124eaf6e:;
  /* 124eaf6e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaf72 jne 0x124eaf92 */
  if (!C.zf) goto L_124eaf92;
  /* 124eaf74 push 0x12508ac0 */
  push32((uint32_t)(0x12508ac0u));
  /* 124eaf79 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eaf7b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 124eaf7d push 0x12508ab4 */
  push32((uint32_t)(0x12508ab4u));
  /* 124eaf82 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eaf84 call 0x124dfa80 */
  push32(0x124eaf89u); f_124dfa80();
  /* 124eaf89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eaf8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eaf8f jne 0x124eaf92 */
  if (!C.zf) goto L_124eaf92;
  /* 124eaf91 int3  */
  x86_unimpl("int3 @ 0x124eaf91");
L_124eaf92:;
  /* 124eaf92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eaf94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eaf96 jne 0x124eaf6e */
  if (!C.zf) goto L_124eaf6e;
  /* 124eaf98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eaf9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124eaf9e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 124eafa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124eafa3 je 0x124eafb1 */
  if (C.zf) goto L_124eafb1;
  /* 124eafa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eafa8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 124eafaf jmp 0x124eafd8 */
  goto L_124eafd8;
L_124eafb1:;
  /* 124eafb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eafb4 push ecx */
  push32((uint32_t)(ECX));
  /* 124eafb5 call 0x124e97d0 */
  push32(0x124eafbau); f_124e97d0();
  /* 124eafba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eafbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eafc0 push edx */
  push32((uint32_t)(EDX));
  /* 124eafc1 call 0x124eaff0 */
  push32(0x124eafc6u); f_124eaff0();
  /* 124eafc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eafc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124eafcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eafcf push eax */
  push32((uint32_t)(EAX));
  /* 124eafd0 call 0x124e9840 */
  push32(0x124eafd5u); f_124e9840();
  /* 124eafd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124eafd8:;
  /* 124eafd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eafdb pop edi */
  EDI = (pop32());
  /* 124eafdc pop esi */
  ESI = (pop32());
  /* 124eafdd pop ebx */
  EBX = (pop32());
  /* 124eafde mov esp, ebp */
  ESP = (EBP);
  /* 124eafe0 pop ebp */
  EBP = (pop32());
  /* 124eafe1 ret  */
  ESPCHK(0x124eaf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aff0 @ 0x124eaff0 (190 bytes, 67 insns) */
void f_124eaff0(void) {
  FTRACE(0x124eaff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eaff0 push ebp */
  push32((uint32_t)(EBP));
  /* 124eaff1 mov ebp, esp */
  EBP = (ESP);
  /* 124eaff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eaff6 push ebx */
  push32((uint32_t)(EBX));
  /* 124eaff7 push esi */
  push32((uint32_t)(ESI));
  /* 124eaff8 push edi */
  push32((uint32_t)(EDI));
  /* 124eaff9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124eb000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb003 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124eb006:;
  /* 124eb006 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb00a jne 0x124eb02a */
  if (!C.zf) goto L_124eb02a;
  /* 124eb00c push 0x12508964 */
  push32((uint32_t)(0x12508964u));
  /* 124eb011 push 0 */
  push32((uint32_t)(0x0u));
  /* 124eb013 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 124eb015 push 0x12508ab4 */
  push32((uint32_t)(0x12508ab4u));
  /* 124eb01a push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb01c call 0x124dfa80 */
  push32(0x124eb021u); f_124dfa80();
  /* 124eb021 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb024 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb027 jne 0x124eb02a */
  if (!C.zf) goto L_124eb02a;
  /* 124eb029 int3  */
  x86_unimpl("int3 @ 0x124eb029");
L_124eb02a:;
  /* 124eb02a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb02c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124eb02e jne 0x124eb006 */
  if (!C.zf) goto L_124eb006;
  /* 124eb030 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb033 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124eb036 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124eb03b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eb03d je 0x124eb09a */
  if (C.zf) goto L_124eb09a;
  /* 124eb03f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb042 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb043 call 0x124ea2f0 */
  push32(0x124eb048u); f_124ea2f0();
  /* 124eb048 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb04b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124eb04e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb051 push edx */
  push32((uint32_t)(EDX));
  /* 124eb052 call 0x124ed670 */
  push32(0x124eb057u); f_124ed670();
  /* 124eb057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb05a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb05d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124eb060 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb061 call 0x124ed540 */
  push32(0x124eb066u); f_124ed540();
  /* 124eb066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eb06b jge 0x124eb076 */
  if ((C.sf==C.of)) goto L_124eb076;
  /* 124eb06d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124eb074 jmp 0x124eb09a */
  goto L_124eb09a;
L_124eb076:;
  /* 124eb076 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb079 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb07d je 0x124eb09a */
  if (C.zf) goto L_124eb09a;
  /* 124eb07f push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb084 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124eb087 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb088 call 0x124e1450 */
  push32(0x124eb08du); f_124e1450();
  /* 124eb08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb090 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb093 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_124eb09a:;
  /* 124eb09a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb09d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 124eb0a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb0a7 pop edi */
  EDI = (pop32());
  /* 124eb0a8 pop esi */
  ESI = (pop32());
  /* 124eb0a9 pop ebx */
  EBX = (pop32());
  /* 124eb0aa mov esp, ebp */
  ESP = (EBP);
  /* 124eb0ac pop ebp */
  EBP = (pop32());
  /* 124eb0ad ret  */
  ESPCHK(0x124eaff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b0b0 @ 0x124eb0b0 (210 bytes, 63 insns) */
void f_124eb0b0(void) {
  FTRACE(0x124eb0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eb0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124eb0b1 mov ebp, esp */
  EBP = (ESP);
  /* 124eb0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb0b7 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb0bd jae 0x124eb0e1 */
  if (!C.cf) goto L_124eb0e1;
  /* 124eb0bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb0c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124eb0c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb0c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124eb0cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eb0ce mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124eb0d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124eb0da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124eb0dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124eb0df jne 0x124eb0f4 */
  if (!C.zf) goto L_124eb0f4;
L_124eb0e1:;
  /* 124eb0e1 call 0x124e8890 */
  push32(0x124eb0e6u); f_124e8890();
  /* 124eb0e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124eb0ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eb0ef jmp 0x124eb17e */
  goto L_124eb17e;
L_124eb0f4:;
  /* 124eb0f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb0f7 push edx */
  push32((uint32_t)(EDX));
  /* 124eb0f8 call 0x124ea0b0 */
  push32(0x124eb0fdu); f_124ea0b0();
  /* 124eb0fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb103 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124eb106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb109 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124eb10c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124eb10f mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124eb116 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 124eb11b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 124eb11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eb120 je 0x124eb15d */
  if (C.zf) goto L_124eb15d;
  /* 124eb122 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb125 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb126 call 0x124e9f30 */
  push32(0x124eb12bu); f_124e9f30();
  /* 124eb12b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb12e push eax */
  push32((uint32_t)(EAX));
  /* 124eb12f call dword ptr [0x1250f308] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f308))), 0x124eb135u);
  /* 124eb135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eb137 jne 0x124eb144 */
  if (!C.zf) goto L_124eb144;
  /* 124eb139 call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124eb13fu);
  /* 124eb13f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124eb142 jmp 0x124eb14b */
  goto L_124eb14b;
L_124eb144:;
  /* 124eb144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124eb14b:;
  /* 124eb14b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb14f jne 0x124eb153 */
  if (!C.zf) goto L_124eb153;
  /* 124eb151 jmp 0x124eb16f */
  goto L_124eb16f;
L_124eb153:;
  /* 124eb153 call 0x124e88a0 */
  push32(0x124eb158u); f_124e88a0();
  /* 124eb158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb15b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124eb15d:;
  /* 124eb15d call 0x124e8890 */
  push32(0x124eb162u); f_124e8890();
  /* 124eb162 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124eb168 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124eb16f:;
  /* 124eb16f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb172 push eax */
  push32((uint32_t)(EAX));
  /* 124eb173 call 0x124ea140 */
  push32(0x124eb178u); f_124ea140();
  /* 124eb178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb17b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124eb17e:;
  /* 124eb17e mov esp, ebp */
  ESP = (EBP);
  /* 124eb180 pop ebp */
  EBP = (pop32());
  /* 124eb181 ret  */
  ESPCHK(0x124eb0b0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x124eb190 (219 bytes, 64 insns) */
void f_124eb190(void) {
  FTRACE(0x124eb190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eb190 push ebp */
  push32((uint32_t)(EBP));
  /* 124eb191 mov ebp, esp */
  EBP = (ESP);
  /* 124eb193 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb194 cmp dword ptr [0x1250cdcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb19b je 0x124eb231 */
  if (C.zf) goto L_124eb231;
  /* 124eb1a1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 124eb1a3 push 0x12508ad0 */
  push32((uint32_t)(0x12508ad0u));
  /* 124eb1a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb1aa push 0xac */
  push32((uint32_t)(0xacu));
  /* 124eb1af push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb1b1 call 0x124e0dd0 */
  push32(0x124eb1b6u); f_124e0dd0();
  /* 124eb1b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb1b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124eb1bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb1c0 jne 0x124eb1cc */
  if (!C.zf) goto L_124eb1cc;
  /* 124eb1c2 mov eax, 1 */
  EAX = (0x1u);
  /* 124eb1c7 jmp 0x124eb267 */
  goto L_124eb267;
L_124eb1cc:;
  /* 124eb1cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb1cf push eax */
  push32((uint32_t)(EAX));
  /* 124eb1d0 call 0x124eb270 */
  push32(0x124eb1d5u); f_124eb270();
  /* 124eb1d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb1d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eb1da je 0x124eb1fd */
  if (C.zf) goto L_124eb1fd;
  /* 124eb1dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb1df push ecx */
  push32((uint32_t)(ECX));
  /* 124eb1e0 call 0x124eb800 */
  push32(0x124eb1e5u); f_124eb800();
  /* 124eb1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb1e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb1ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb1ed push edx */
  push32((uint32_t)(EDX));
  /* 124eb1ee call 0x124e1450 */
  push32(0x124eb1f3u); f_124e1450();
  /* 124eb1f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb1f6 mov eax, 1 */
  EAX = (0x1u);
  /* 124eb1fb jmp 0x124eb267 */
  goto L_124eb267;
L_124eb1fd:;
  /* 124eb1fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb200 mov dword ptr [0x1250bc98], eax */
  w32((uint32_t)(0x1250bc98), (EAX));
  /* 124eb205 mov ecx, dword ptr [0x1250cdec] */
  ECX = (r32((uint32_t)(0x1250cdec)));
  /* 124eb20b push ecx */
  push32((uint32_t)(ECX));
  /* 124eb20c call 0x124eb800 */
  push32(0x124eb211u); f_124eb800();
  /* 124eb211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb214 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb216 mov edx, dword ptr [0x1250cdec] */
  EDX = (r32((uint32_t)(0x1250cdec)));
  /* 124eb21c push edx */
  push32((uint32_t)(EDX));
  /* 124eb21d call 0x124e1450 */
  push32(0x124eb222u); f_124e1450();
  /* 124eb222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb228 mov dword ptr [0x1250cdec], eax */
  w32((uint32_t)(0x1250cdec), (EAX));
  /* 124eb22d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eb22f jmp 0x124eb267 */
  goto L_124eb267;
L_124eb231:;
  /* 124eb231 mov dword ptr [0x1250bc98], 0x1250bca0 */
  w32((uint32_t)(0x1250bc98), (0x1250bca0u));
  /* 124eb23b mov ecx, dword ptr [0x1250cdec] */
  ECX = (r32((uint32_t)(0x1250cdec)));
  /* 124eb241 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb242 call 0x124eb800 */
  push32(0x124eb247u); f_124eb800();
  /* 124eb247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb24a push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb24c mov edx, dword ptr [0x1250cdec] */
  EDX = (r32((uint32_t)(0x1250cdec)));
  /* 124eb252 push edx */
  push32((uint32_t)(EDX));
  /* 124eb253 call 0x124e1450 */
  push32(0x124eb258u); f_124e1450();
  /* 124eb258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb25b mov dword ptr [0x1250cdec], 0 */
  w32((uint32_t)(0x1250cdec), (0x0u));
  /* 124eb265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124eb267:;
  /* 124eb267 mov esp, ebp */
  ESP = (EBP);
  /* 124eb269 pop ebp */
  EBP = (pop32());
  /* 124eb26a ret  */
  ESPCHK(0x124eb190u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b270 @ 0x124eb270 (1423 bytes, 533 insns) */
void f_124eb270(void) {
  FTRACE(0x124eb270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eb270 push ebp */
  push32((uint32_t)(EBP));
  /* 124eb271 mov ebp, esp */
  EBP = (ESP);
  /* 124eb273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eb276 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124eb27d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124eb27f mov ax, word ptr [0x1250ce26] */
  AX = (r16((uint32_t)(0x1250ce26)));
  /* 124eb285 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124eb288 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb28a mov cx, word ptr [0x1250ce28] */
  CX = (r16((uint32_t)(0x1250ce28)));
  /* 124eb291 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124eb294 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb298 jne 0x124eb2a2 */
  if (!C.zf) goto L_124eb2a2;
  /* 124eb29a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124eb29d jmp 0x124eb7fb */
  goto L_124eb7fb;
L_124eb2a2:;
  /* 124eb2a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb2a5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb2a8 push edx */
  push32((uint32_t)(EDX));
  /* 124eb2a9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 124eb2ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb2ae push eax */
  push32((uint32_t)(EAX));
  /* 124eb2af push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb2b1 call 0x124eeb80 */
  push32(0x124eb2b6u); f_124eeb80();
  /* 124eb2b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb2b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb2bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb2be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb2c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb2c4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb2c7 push edx */
  push32((uint32_t)(EDX));
  /* 124eb2c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 124eb2ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb2cd push eax */
  push32((uint32_t)(EAX));
  /* 124eb2ce push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb2d0 call 0x124eeb80 */
  push32(0x124eb2d5u); f_124eeb80();
  /* 124eb2d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb2d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb2db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb2dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb2e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb2e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb2e6 push edx */
  push32((uint32_t)(EDX));
  /* 124eb2e7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 124eb2e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb2ec push eax */
  push32((uint32_t)(EAX));
  /* 124eb2ed push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb2ef call 0x124eeb80 */
  push32(0x124eb2f4u); f_124eeb80();
  /* 124eb2f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb2f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb2fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb2fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb2ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb302 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb305 push edx */
  push32((uint32_t)(EDX));
  /* 124eb306 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 124eb308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb30b push eax */
  push32((uint32_t)(EAX));
  /* 124eb30c push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb30e call 0x124eeb80 */
  push32(0x124eb313u); f_124eeb80();
  /* 124eb313 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb316 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb319 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb31b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb321 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb324 push edx */
  push32((uint32_t)(EDX));
  /* 124eb325 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 124eb327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb32a push eax */
  push32((uint32_t)(EAX));
  /* 124eb32b push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb32d call 0x124eeb80 */
  push32(0x124eb332u); f_124eeb80();
  /* 124eb332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb338 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb33a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb33d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb340 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb343 push edx */
  push32((uint32_t)(EDX));
  /* 124eb344 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 124eb346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb349 push eax */
  push32((uint32_t)(EAX));
  /* 124eb34a push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb34c call 0x124eeb80 */
  push32(0x124eb351u); f_124eeb80();
  /* 124eb351 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb354 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb357 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb359 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb35f push edx */
  push32((uint32_t)(EDX));
  /* 124eb360 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 124eb362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb365 push eax */
  push32((uint32_t)(EAX));
  /* 124eb366 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb368 call 0x124eeb80 */
  push32(0x124eb36du); f_124eeb80();
  /* 124eb36d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb370 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb373 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb375 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb37b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb37e push edx */
  push32((uint32_t)(EDX));
  /* 124eb37f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 124eb381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb384 push eax */
  push32((uint32_t)(EAX));
  /* 124eb385 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb387 call 0x124eeb80 */
  push32(0x124eb38cu); f_124eeb80();
  /* 124eb38c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb38f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb392 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb394 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb39a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb39d push edx */
  push32((uint32_t)(EDX));
  /* 124eb39e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 124eb3a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb3a3 push eax */
  push32((uint32_t)(EAX));
  /* 124eb3a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb3a6 call 0x124eeb80 */
  push32(0x124eb3abu); f_124eeb80();
  /* 124eb3ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb3ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb3b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb3b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb3b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb3b9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb3bc push edx */
  push32((uint32_t)(EDX));
  /* 124eb3bd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 124eb3bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb3c2 push eax */
  push32((uint32_t)(EAX));
  /* 124eb3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb3c5 call 0x124eeb80 */
  push32(0x124eb3cau); f_124eeb80();
  /* 124eb3ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb3cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb3d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb3d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb3d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb3d8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb3db push edx */
  push32((uint32_t)(EDX));
  /* 124eb3dc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 124eb3de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb3e1 push eax */
  push32((uint32_t)(EAX));
  /* 124eb3e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb3e4 call 0x124eeb80 */
  push32(0x124eb3e9u); f_124eeb80();
  /* 124eb3e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb3ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb3ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb3f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb3f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb3f7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb3fa push edx */
  push32((uint32_t)(EDX));
  /* 124eb3fb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 124eb3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb400 push eax */
  push32((uint32_t)(EAX));
  /* 124eb401 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb403 call 0x124eeb80 */
  push32(0x124eb408u); f_124eeb80();
  /* 124eb408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb40b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb40e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb416 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb419 push edx */
  push32((uint32_t)(EDX));
  /* 124eb41a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 124eb41c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb41f push eax */
  push32((uint32_t)(EAX));
  /* 124eb420 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb422 call 0x124eeb80 */
  push32(0x124eb427u); f_124eeb80();
  /* 124eb427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb42a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb42d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb42f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb435 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb438 push edx */
  push32((uint32_t)(EDX));
  /* 124eb439 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124eb43b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb43e push eax */
  push32((uint32_t)(EAX));
  /* 124eb43f push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb441 call 0x124eeb80 */
  push32(0x124eb446u); f_124eeb80();
  /* 124eb446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb44c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb44e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb454 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb457 push edx */
  push32((uint32_t)(EDX));
  /* 124eb458 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 124eb45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb45d push eax */
  push32((uint32_t)(EAX));
  /* 124eb45e push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb460 call 0x124eeb80 */
  push32(0x124eb465u); f_124eeb80();
  /* 124eb465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb46b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb46d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb473 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb476 push edx */
  push32((uint32_t)(EDX));
  /* 124eb477 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 124eb479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb47c push eax */
  push32((uint32_t)(EAX));
  /* 124eb47d push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb47f call 0x124eeb80 */
  push32(0x124eb484u); f_124eeb80();
  /* 124eb484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb48a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb492 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb495 push edx */
  push32((uint32_t)(EDX));
  /* 124eb496 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 124eb498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb49b push eax */
  push32((uint32_t)(EAX));
  /* 124eb49c push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb49e call 0x124eeb80 */
  push32(0x124eb4a3u); f_124eeb80();
  /* 124eb4a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb4a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb4a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb4ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb4ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb4b1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb4b4 push edx */
  push32((uint32_t)(EDX));
  /* 124eb4b5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 124eb4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb4ba push eax */
  push32((uint32_t)(EAX));
  /* 124eb4bb push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb4bd call 0x124eeb80 */
  push32(0x124eb4c2u); f_124eeb80();
  /* 124eb4c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb4c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb4c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb4ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb4d0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb4d3 push edx */
  push32((uint32_t)(EDX));
  /* 124eb4d4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 124eb4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb4d9 push eax */
  push32((uint32_t)(EAX));
  /* 124eb4da push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb4dc call 0x124eeb80 */
  push32(0x124eb4e1u); f_124eeb80();
  /* 124eb4e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb4e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb4e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb4ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb4ef add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb4f2 push edx */
  push32((uint32_t)(EDX));
  /* 124eb4f3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 124eb4f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb4f8 push eax */
  push32((uint32_t)(EAX));
  /* 124eb4f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb4fb call 0x124eeb80 */
  push32(0x124eb500u); f_124eeb80();
  /* 124eb500 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb503 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb506 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb508 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb50b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb50e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb511 push edx */
  push32((uint32_t)(EDX));
  /* 124eb512 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 124eb514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb517 push eax */
  push32((uint32_t)(EAX));
  /* 124eb518 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb51a call 0x124eeb80 */
  push32(0x124eb51fu); f_124eeb80();
  /* 124eb51f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb522 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb525 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb527 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb52a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb52d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb530 push edx */
  push32((uint32_t)(EDX));
  /* 124eb531 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 124eb533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb536 push eax */
  push32((uint32_t)(EAX));
  /* 124eb537 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb539 call 0x124eeb80 */
  push32(0x124eb53eu); f_124eeb80();
  /* 124eb53e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb541 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb544 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb546 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb549 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb54c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb54f push edx */
  push32((uint32_t)(EDX));
  /* 124eb550 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 124eb552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb555 push eax */
  push32((uint32_t)(EAX));
  /* 124eb556 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb558 call 0x124eeb80 */
  push32(0x124eb55du); f_124eeb80();
  /* 124eb55d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb560 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb563 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb565 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb56b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb56e push edx */
  push32((uint32_t)(EDX));
  /* 124eb56f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 124eb571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb574 push eax */
  push32((uint32_t)(EAX));
  /* 124eb575 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb577 call 0x124eeb80 */
  push32(0x124eb57cu); f_124eeb80();
  /* 124eb57c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb57f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb582 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb584 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb58a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb58d push edx */
  push32((uint32_t)(EDX));
  /* 124eb58e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 124eb590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb593 push eax */
  push32((uint32_t)(EAX));
  /* 124eb594 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb596 call 0x124eeb80 */
  push32(0x124eb59bu); f_124eeb80();
  /* 124eb59b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb59e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb5a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb5a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb5a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb5a9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb5ac push edx */
  push32((uint32_t)(EDX));
  /* 124eb5ad push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 124eb5af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb5b2 push eax */
  push32((uint32_t)(EAX));
  /* 124eb5b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb5b5 call 0x124eeb80 */
  push32(0x124eb5bau); f_124eeb80();
  /* 124eb5ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb5bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb5c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb5c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb5c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb5c8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb5cb push edx */
  push32((uint32_t)(EDX));
  /* 124eb5cc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 124eb5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb5d1 push eax */
  push32((uint32_t)(EAX));
  /* 124eb5d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb5d4 call 0x124eeb80 */
  push32(0x124eb5d9u); f_124eeb80();
  /* 124eb5d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb5dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb5df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb5e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb5e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb5e7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb5ea push edx */
  push32((uint32_t)(EDX));
  /* 124eb5eb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 124eb5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb5f0 push eax */
  push32((uint32_t)(EAX));
  /* 124eb5f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb5f3 call 0x124eeb80 */
  push32(0x124eb5f8u); f_124eeb80();
  /* 124eb5f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb5fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb5fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb600 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb606 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb609 push edx */
  push32((uint32_t)(EDX));
  /* 124eb60a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 124eb60c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb60f push eax */
  push32((uint32_t)(EAX));
  /* 124eb610 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb612 call 0x124eeb80 */
  push32(0x124eb617u); f_124eeb80();
  /* 124eb617 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb61a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb61d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb61f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb625 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb628 push edx */
  push32((uint32_t)(EDX));
  /* 124eb629 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 124eb62b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb62e push eax */
  push32((uint32_t)(EAX));
  /* 124eb62f push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb631 call 0x124eeb80 */
  push32(0x124eb636u); f_124eeb80();
  /* 124eb636 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb639 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb63c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb63e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb644 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb647 push edx */
  push32((uint32_t)(EDX));
  /* 124eb648 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 124eb64a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb64d push eax */
  push32((uint32_t)(EAX));
  /* 124eb64e push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb650 call 0x124eeb80 */
  push32(0x124eb655u); f_124eeb80();
  /* 124eb655 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb658 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb65b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb65d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb660 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb663 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb666 push edx */
  push32((uint32_t)(EDX));
  /* 124eb667 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124eb669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb66c push eax */
  push32((uint32_t)(EAX));
  /* 124eb66d push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb66f call 0x124eeb80 */
  push32(0x124eb674u); f_124eeb80();
  /* 124eb674 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb67a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb67c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb67f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb682 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb688 push edx */
  push32((uint32_t)(EDX));
  /* 124eb689 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 124eb68b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb68e push eax */
  push32((uint32_t)(EAX));
  /* 124eb68f push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb691 call 0x124eeb80 */
  push32(0x124eb696u); f_124eeb80();
  /* 124eb696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb699 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb69c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb69e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb6a4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb6aa push edx */
  push32((uint32_t)(EDX));
  /* 124eb6ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124eb6ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb6b0 push eax */
  push32((uint32_t)(EAX));
  /* 124eb6b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb6b3 call 0x124eeb80 */
  push32(0x124eb6b8u); f_124eeb80();
  /* 124eb6b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb6bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb6be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb6c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb6c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb6c6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb6cc push edx */
  push32((uint32_t)(EDX));
  /* 124eb6cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124eb6cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb6d2 push eax */
  push32((uint32_t)(EAX));
  /* 124eb6d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb6d5 call 0x124eeb80 */
  push32(0x124eb6dau); f_124eeb80();
  /* 124eb6da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb6dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb6e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb6e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb6e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb6e8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb6ee push edx */
  push32((uint32_t)(EDX));
  /* 124eb6ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 124eb6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb6f4 push eax */
  push32((uint32_t)(EAX));
  /* 124eb6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb6f7 call 0x124eeb80 */
  push32(0x124eb6fcu); f_124eeb80();
  /* 124eb6fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb6ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb702 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb70a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb710 push edx */
  push32((uint32_t)(EDX));
  /* 124eb711 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 124eb713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb716 push eax */
  push32((uint32_t)(EAX));
  /* 124eb717 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb719 call 0x124eeb80 */
  push32(0x124eb71eu); f_124eeb80();
  /* 124eb71e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb721 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb724 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb726 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb72c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb732 push edx */
  push32((uint32_t)(EDX));
  /* 124eb733 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 124eb735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb738 push eax */
  push32((uint32_t)(EAX));
  /* 124eb739 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb73b call 0x124eeb80 */
  push32(0x124eb740u); f_124eeb80();
  /* 124eb740 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb743 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb746 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb748 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb74b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb74e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb754 push edx */
  push32((uint32_t)(EDX));
  /* 124eb755 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 124eb757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb75a push eax */
  push32((uint32_t)(EAX));
  /* 124eb75b push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb75d call 0x124eeb80 */
  push32(0x124eb762u); f_124eeb80();
  /* 124eb762 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb765 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb768 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb76a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb76d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb770 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb776 push edx */
  push32((uint32_t)(EDX));
  /* 124eb777 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 124eb779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eb77c push eax */
  push32((uint32_t)(EAX));
  /* 124eb77d push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb77f call 0x124eeb80 */
  push32(0x124eb784u); f_124eeb80();
  /* 124eb784 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb787 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb78a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb78f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb792 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb798 push edx */
  push32((uint32_t)(EDX));
  /* 124eb799 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 124eb79b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb79e push eax */
  push32((uint32_t)(EAX));
  /* 124eb79f push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb7a1 call 0x124eeb80 */
  push32(0x124eb7a6u); f_124eeb80();
  /* 124eb7a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb7a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb7ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb7ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb7b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb7b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb7ba push edx */
  push32((uint32_t)(EDX));
  /* 124eb7bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 124eb7bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb7c0 push eax */
  push32((uint32_t)(EAX));
  /* 124eb7c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb7c3 call 0x124eeb80 */
  push32(0x124eb7c8u); f_124eeb80();
  /* 124eb7c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb7cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb7ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb7d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb7d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb7d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb7dc push edx */
  push32((uint32_t)(EDX));
  /* 124eb7dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 124eb7e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124eb7e5 push eax */
  push32((uint32_t)(EAX));
  /* 124eb7e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124eb7e8 call 0x124eeb80 */
  push32(0x124eb7edu); f_124eeb80();
  /* 124eb7ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb7f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124eb7f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124eb7f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124eb7f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_124eb7fb:;
  /* 124eb7fb mov esp, ebp */
  ESP = (EBP);
  /* 124eb7fd pop ebp */
  EBP = (pop32());
  /* 124eb7fe ret  */
  ESPCHK(0x124eb270u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x124eb800 (779 bytes, 265 insns) */
void f_124eb800(void) {
  FTRACE(0x124eb800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eb800 push ebp */
  push32((uint32_t)(EBP));
  /* 124eb801 mov ebp, esp */
  EBP = (ESP);
  /* 124eb803 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eb807 jne 0x124eb80e */
  if (!C.zf) goto L_124eb80e;
  /* 124eb809 jmp 0x124ebb09 */
  goto L_124ebb09;
L_124eb80e:;
  /* 124eb80e push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb813 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124eb816 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb817 call 0x124e1450 */
  push32(0x124eb81cu); f_124e1450();
  /* 124eb81c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb81f push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb824 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124eb827 push eax */
  push32((uint32_t)(EAX));
  /* 124eb828 call 0x124e1450 */
  push32(0x124eb82du); f_124e1450();
  /* 124eb82d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb830 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb832 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb835 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124eb838 push edx */
  push32((uint32_t)(EDX));
  /* 124eb839 call 0x124e1450 */
  push32(0x124eb83eu); f_124e1450();
  /* 124eb83e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb841 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb846 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124eb849 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb84a call 0x124e1450 */
  push32(0x124eb84fu); f_124e1450();
  /* 124eb84f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb852 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb857 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124eb85a push eax */
  push32((uint32_t)(EAX));
  /* 124eb85b call 0x124e1450 */
  push32(0x124eb860u); f_124e1450();
  /* 124eb860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb863 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb865 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb868 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124eb86b push edx */
  push32((uint32_t)(EDX));
  /* 124eb86c call 0x124e1450 */
  push32(0x124eb871u); f_124e1450();
  /* 124eb871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb874 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb879 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124eb87b push ecx */
  push32((uint32_t)(ECX));
  /* 124eb87c call 0x124e1450 */
  push32(0x124eb881u); f_124e1450();
  /* 124eb881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb884 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb886 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb889 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124eb88c push eax */
  push32((uint32_t)(EAX));
  /* 124eb88d call 0x124e1450 */
  push32(0x124eb892u); f_124e1450();
  /* 124eb892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb895 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb89a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 124eb89d push edx */
  push32((uint32_t)(EDX));
  /* 124eb89e call 0x124e1450 */
  push32(0x124eb8a3u); f_124e1450();
  /* 124eb8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb8a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb8a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb8ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 124eb8ae push ecx */
  push32((uint32_t)(ECX));
  /* 124eb8af call 0x124e1450 */
  push32(0x124eb8b4u); f_124e1450();
  /* 124eb8b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb8b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb8bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 124eb8bf push eax */
  push32((uint32_t)(EAX));
  /* 124eb8c0 call 0x124e1450 */
  push32(0x124eb8c5u); f_124e1450();
  /* 124eb8c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb8c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb8ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb8cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 124eb8d0 push edx */
  push32((uint32_t)(EDX));
  /* 124eb8d1 call 0x124e1450 */
  push32(0x124eb8d6u); f_124e1450();
  /* 124eb8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb8d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb8db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb8de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 124eb8e1 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb8e2 call 0x124e1450 */
  push32(0x124eb8e7u); f_124e1450();
  /* 124eb8e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb8ea push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb8ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb8ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124eb8f2 push eax */
  push32((uint32_t)(EAX));
  /* 124eb8f3 call 0x124e1450 */
  push32(0x124eb8f8u); f_124e1450();
  /* 124eb8f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb8fb push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb8fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb900 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 124eb903 push edx */
  push32((uint32_t)(EDX));
  /* 124eb904 call 0x124e1450 */
  push32(0x124eb909u); f_124e1450();
  /* 124eb909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb90c push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb90e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb911 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 124eb914 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb915 call 0x124e1450 */
  push32(0x124eb91au); f_124e1450();
  /* 124eb91a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb91d push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb91f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb922 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 124eb925 push eax */
  push32((uint32_t)(EAX));
  /* 124eb926 call 0x124e1450 */
  push32(0x124eb92bu); f_124e1450();
  /* 124eb92b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb92e push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb933 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 124eb936 push edx */
  push32((uint32_t)(EDX));
  /* 124eb937 call 0x124e1450 */
  push32(0x124eb93cu); f_124e1450();
  /* 124eb93c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb93f push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb944 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 124eb947 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb948 call 0x124e1450 */
  push32(0x124eb94du); f_124e1450();
  /* 124eb94d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb950 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb955 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 124eb958 push eax */
  push32((uint32_t)(EAX));
  /* 124eb959 call 0x124e1450 */
  push32(0x124eb95eu); f_124e1450();
  /* 124eb95e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb961 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb966 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 124eb969 push edx */
  push32((uint32_t)(EDX));
  /* 124eb96a call 0x124e1450 */
  push32(0x124eb96fu); f_124e1450();
  /* 124eb96f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb972 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb977 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 124eb97a push ecx */
  push32((uint32_t)(ECX));
  /* 124eb97b call 0x124e1450 */
  push32(0x124eb980u); f_124e1450();
  /* 124eb980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb983 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb988 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 124eb98b push eax */
  push32((uint32_t)(EAX));
  /* 124eb98c call 0x124e1450 */
  push32(0x124eb991u); f_124e1450();
  /* 124eb991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb994 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb999 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 124eb99c push edx */
  push32((uint32_t)(EDX));
  /* 124eb99d call 0x124e1450 */
  push32(0x124eb9a2u); f_124e1450();
  /* 124eb9a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb9a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb9a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb9aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 124eb9ad push ecx */
  push32((uint32_t)(ECX));
  /* 124eb9ae call 0x124e1450 */
  push32(0x124eb9b3u); f_124e1450();
  /* 124eb9b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb9b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb9b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb9bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 124eb9be push eax */
  push32((uint32_t)(EAX));
  /* 124eb9bf call 0x124e1450 */
  push32(0x124eb9c4u); f_124e1450();
  /* 124eb9c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb9c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb9c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb9cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 124eb9cf push edx */
  push32((uint32_t)(EDX));
  /* 124eb9d0 call 0x124e1450 */
  push32(0x124eb9d5u); f_124e1450();
  /* 124eb9d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb9d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb9da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb9dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 124eb9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 124eb9e1 call 0x124e1450 */
  push32(0x124eb9e6u); f_124e1450();
  /* 124eb9e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb9e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb9eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb9ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 124eb9f1 push eax */
  push32((uint32_t)(EAX));
  /* 124eb9f2 call 0x124e1450 */
  push32(0x124eb9f7u); f_124e1450();
  /* 124eb9f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eb9fa push 2 */
  push32((uint32_t)(0x2u));
  /* 124eb9fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eb9ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 124eba02 push edx */
  push32((uint32_t)(EDX));
  /* 124eba03 call 0x124e1450 */
  push32(0x124eba08u); f_124e1450();
  /* 124eba08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba0b push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba10 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 124eba13 push ecx */
  push32((uint32_t)(ECX));
  /* 124eba14 call 0x124e1450 */
  push32(0x124eba19u); f_124e1450();
  /* 124eba19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba1c push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba21 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 124eba24 push eax */
  push32((uint32_t)(EAX));
  /* 124eba25 call 0x124e1450 */
  push32(0x124eba2au); f_124e1450();
  /* 124eba2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba2d push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba32 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 124eba38 push edx */
  push32((uint32_t)(EDX));
  /* 124eba39 call 0x124e1450 */
  push32(0x124eba3eu); f_124e1450();
  /* 124eba3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba41 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba46 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 124eba4c push ecx */
  push32((uint32_t)(ECX));
  /* 124eba4d call 0x124e1450 */
  push32(0x124eba52u); f_124e1450();
  /* 124eba52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba55 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba5a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 124eba60 push eax */
  push32((uint32_t)(EAX));
  /* 124eba61 call 0x124e1450 */
  push32(0x124eba66u); f_124e1450();
  /* 124eba66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba69 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba6e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 124eba74 push edx */
  push32((uint32_t)(EDX));
  /* 124eba75 call 0x124e1450 */
  push32(0x124eba7au); f_124e1450();
  /* 124eba7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba7d push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba82 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 124eba88 push ecx */
  push32((uint32_t)(ECX));
  /* 124eba89 call 0x124e1450 */
  push32(0x124eba8eu); f_124e1450();
  /* 124eba8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eba91 push 2 */
  push32((uint32_t)(0x2u));
  /* 124eba93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124eba96 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 124eba9c push eax */
  push32((uint32_t)(EAX));
  /* 124eba9d call 0x124e1450 */
  push32(0x124ebaa2u); f_124e1450();
  /* 124ebaa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebaa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebaa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebaaa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 124ebab0 push edx */
  push32((uint32_t)(EDX));
  /* 124ebab1 call 0x124e1450 */
  push32(0x124ebab6u); f_124e1450();
  /* 124ebab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebabb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebabe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 124ebac4 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebac5 call 0x124e1450 */
  push32(0x124ebacau); f_124e1450();
  /* 124ebaca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebacd push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebacf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebad2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 124ebad8 push eax */
  push32((uint32_t)(EAX));
  /* 124ebad9 call 0x124e1450 */
  push32(0x124ebadeu); f_124e1450();
  /* 124ebade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebae1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebae6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 124ebaec push edx */
  push32((uint32_t)(EDX));
  /* 124ebaed call 0x124e1450 */
  push32(0x124ebaf2u); f_124e1450();
  /* 124ebaf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebaf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebaf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebafa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 124ebb00 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebb01 call 0x124e1450 */
  push32(0x124ebb06u); f_124e1450();
  /* 124ebb06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ebb09:;
  /* 124ebb09 pop ebp */
  EBP = (pop32());
  /* 124ebb0a ret  */
  ESPCHK(0x124eb800u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bb10 @ 0x124ebb10 (678 bytes, 180 insns) */
void f_124ebb10(void) {
  FTRACE(0x124ebb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ebb10 push ebp */
  push32((uint32_t)(EBP));
  /* 124ebb11 mov ebp, esp */
  EBP = (ESP);
  /* 124ebb13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ebb16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ebb1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ebb1f mov ax, word ptr [0x1250ce22] */
  AX = (r16((uint32_t)(0x1250ce22)));
  /* 124ebb25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ebb28 cmp dword ptr [0x1250cdc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebb2f je 0x124ebc8a */
  if (C.zf) goto L_124ebc8a;
  /* 124ebb35 push 0x1250cdf0 */
  push32((uint32_t)(0x1250cdf0u));
  /* 124ebb3a push 0xe */
  push32((uint32_t)(0xeu));
  /* 124ebb3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebb3f push ecx */
  push32((uint32_t)(ECX));
  /* 124ebb40 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebb42 call 0x124eeb80 */
  push32(0x124ebb47u); f_124eeb80();
  /* 124ebb47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebb4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ebb4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 124ebb4f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ebb52 push 0x1250cdf4 */
  push32((uint32_t)(0x1250cdf4u));
  /* 124ebb57 push 0xf */
  push32((uint32_t)(0xfu));
  /* 124ebb59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebb5c push eax */
  push32((uint32_t)(EAX));
  /* 124ebb5d push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebb5f call 0x124eeb80 */
  push32(0x124ebb64u); f_124eeb80();
  /* 124ebb64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebb67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ebb6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ebb6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ebb6f push 0x1250cdf8 */
  push32((uint32_t)(0x1250cdf8u));
  /* 124ebb74 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 124ebb76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebb79 push edx */
  push32((uint32_t)(EDX));
  /* 124ebb7a push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebb7c call 0x124eeb80 */
  push32(0x124ebb81u); f_124eeb80();
  /* 124ebb81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebb84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ebb87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ebb89 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ebb8c mov edx, dword ptr [0x1250cdf8] */
  EDX = (r32((uint32_t)(0x1250cdf8)));
  /* 124ebb92 push edx */
  push32((uint32_t)(EDX));
  /* 124ebb93 call 0x124ebdc0 */
  push32(0x124ebb98u); f_124ebdc0();
  /* 124ebb98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebb9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebb9f je 0x124ebbf9 */
  if (C.zf) goto L_124ebbf9;
  /* 124ebba1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebba3 mov eax, dword ptr [0x1250cdf0] */
  EAX = (r32((uint32_t)(0x1250cdf0)));
  /* 124ebba8 push eax */
  push32((uint32_t)(EAX));
  /* 124ebba9 call 0x124e1450 */
  push32(0x124ebbaeu); f_124e1450();
  /* 124ebbae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebbb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebbb3 mov ecx, dword ptr [0x1250cdf4] */
  ECX = (r32((uint32_t)(0x1250cdf4)));
  /* 124ebbb9 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebbba call 0x124e1450 */
  push32(0x124ebbbfu); f_124e1450();
  /* 124ebbbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebbc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebbc4 mov edx, dword ptr [0x1250cdf8] */
  EDX = (r32((uint32_t)(0x1250cdf8)));
  /* 124ebbca push edx */
  push32((uint32_t)(EDX));
  /* 124ebbcb call 0x124e1450 */
  push32(0x124ebbd0u); f_124e1450();
  /* 124ebbd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebbd3 mov dword ptr [0x1250cdf0], 0 */
  w32((uint32_t)(0x1250cdf0), (0x0u));
  /* 124ebbdd mov dword ptr [0x1250cdf4], 0 */
  w32((uint32_t)(0x1250cdf4), (0x0u));
  /* 124ebbe7 mov dword ptr [0x1250cdf8], 0 */
  w32((uint32_t)(0x1250cdf8), (0x0u));
  /* 124ebbf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ebbf4 jmp 0x124ebdb2 */
  goto L_124ebdb2;
L_124ebbf9:;
  /* 124ebbf9 mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebbfe cmp dword ptr [eax], 0x1250bd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1250bd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebc04 je 0x124ebc40 */
  if (C.zf) goto L_124ebc40;
  /* 124ebc06 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebc08 mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ebc10 push edx */
  push32((uint32_t)(EDX));
  /* 124ebc11 call 0x124e1450 */
  push32(0x124ebc16u); f_124e1450();
  /* 124ebc16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebc19 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebc1b mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc20 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124ebc23 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebc24 call 0x124e1450 */
  push32(0x124ebc29u); f_124e1450();
  /* 124ebc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebc2c push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebc2e mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124ebc37 push eax */
  push32((uint32_t)(EAX));
  /* 124ebc38 call 0x124e1450 */
  push32(0x124ebc3du); f_124e1450();
  /* 124ebc3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ebc40:;
  /* 124ebc40 mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc46 mov edx, dword ptr [0x1250cdf0] */
  EDX = (r32((uint32_t)(0x1250cdf0)));
  /* 124ebc4c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 124ebc4e mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc53 mov ecx, dword ptr [0x1250cdf4] */
  ECX = (r32((uint32_t)(0x1250cdf4)));
  /* 124ebc59 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 124ebc5c mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc62 mov eax, dword ptr [0x1250cdf8] */
  EAX = (r32((uint32_t)(0x1250cdf8)));
  /* 124ebc67 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124ebc6a mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebc70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ebc72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ebc74 mov byte ptr [0x1250aea8], al */
  w8((uint32_t)(0x1250aea8), (AL));
  /* 124ebc79 mov dword ptr [0x1250aeac], 1 */
  w32((uint32_t)(0x1250aeac), (0x1u));
  /* 124ebc83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ebc85 jmp 0x124ebdb2 */
  goto L_124ebdb2;
L_124ebc8a:;
  /* 124ebc8a push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebc8c mov ecx, dword ptr [0x1250cdf0] */
  ECX = (r32((uint32_t)(0x1250cdf0)));
  /* 124ebc92 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebc93 call 0x124e1450 */
  push32(0x124ebc98u); f_124e1450();
  /* 124ebc98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebc9b push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebc9d mov edx, dword ptr [0x1250cdf4] */
  EDX = (r32((uint32_t)(0x1250cdf4)));
  /* 124ebca3 push edx */
  push32((uint32_t)(EDX));
  /* 124ebca4 call 0x124e1450 */
  push32(0x124ebca9u); f_124e1450();
  /* 124ebca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebcac push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebcae mov eax, dword ptr [0x1250cdf8] */
  EAX = (r32((uint32_t)(0x1250cdf8)));
  /* 124ebcb3 push eax */
  push32((uint32_t)(EAX));
  /* 124ebcb4 call 0x124e1450 */
  push32(0x124ebcb9u); f_124e1450();
  /* 124ebcb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebcbc mov dword ptr [0x1250cdf0], 0 */
  w32((uint32_t)(0x1250cdf0), (0x0u));
  /* 124ebcc6 mov dword ptr [0x1250cdf4], 0 */
  w32((uint32_t)(0x1250cdf4), (0x0u));
  /* 124ebcd0 mov dword ptr [0x1250cdf8], 0 */
  w32((uint32_t)(0x1250cdf8), (0x0u));
  /* 124ebcda push 0x88 */
  push32((uint32_t)(0x88u));
  /* 124ebcdf push 0x12508adc */
  push32((uint32_t)(0x12508adcu));
  /* 124ebce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebce6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebce8 call 0x124e09c0 */
  push32(0x124ebcedu); f_124e09c0();
  /* 124ebced add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebcf0 mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebcf6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124ebcf8 mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebcfe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebd01 jne 0x124ebd0b */
  if (!C.zf) goto L_124ebd0b;
  /* 124ebd03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ebd06 jmp 0x124ebdb2 */
  goto L_124ebdb2;
L_124ebd0b:;
  /* 124ebd0b push 0x12508aac */
  push32((uint32_t)(0x12508aacu));
  /* 124ebd10 mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd15 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124ebd17 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebd18 call 0x124e3970 */
  push32(0x124ebd1du); f_124e3970();
  /* 124ebd1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebd20 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 124ebd25 push 0x12508adc */
  push32((uint32_t)(0x12508adcu));
  /* 124ebd2a push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebd2c push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebd2e call 0x124e09c0 */
  push32(0x124ebd33u); f_124e09c0();
  /* 124ebd33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebd36 mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd3c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 124ebd3f mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd44 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebd48 jne 0x124ebd4f */
  if (!C.zf) goto L_124ebd4f;
  /* 124ebd4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ebd4d jmp 0x124ebdb2 */
  goto L_124ebdb2;
L_124ebd4f:;
  /* 124ebd4f mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124ebd58 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124ebd5b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 124ebd60 push 0x12508adc */
  push32((uint32_t)(0x12508adcu));
  /* 124ebd65 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebd67 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebd69 call 0x124e09c0 */
  push32(0x124ebd6eu); f_124e09c0();
  /* 124ebd6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebd71 mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd77 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 124ebd7a mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd80 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebd84 jne 0x124ebd8b */
  if (!C.zf) goto L_124ebd8b;
  /* 124ebd86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ebd89 jmp 0x124ebdb2 */
  goto L_124ebdb2;
L_124ebd8b:;
  /* 124ebd8b mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd90 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124ebd93 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 124ebd96 mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebd9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ebd9e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ebda0 mov byte ptr [0x1250aea8], cl */
  w8((uint32_t)(0x1250aea8), (CL));
  /* 124ebda6 mov dword ptr [0x1250aeac], 1 */
  w32((uint32_t)(0x1250aeac), (0x1u));
  /* 124ebdb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ebdb2:;
  /* 124ebdb2 mov esp, ebp */
  ESP = (EBP);
  /* 124ebdb4 pop ebp */
  EBP = (pop32());
  /* 124ebdb5 ret  */
  ESPCHK(0x124ebb10u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x124ebdc0 (125 bytes, 49 insns) */
void f_124ebdc0(void) {
  FTRACE(0x124ebdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ebdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ebdc1 mov ebp, esp */
  EBP = (ESP);
  /* 124ebdc3 push ecx */
  push32((uint32_t)(ECX));
L_124ebdc4:;
  /* 124ebdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebdc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ebdca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ebdcc je 0x124ebe39 */
  if (C.zf) goto L_124ebe39;
  /* 124ebdce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebdd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ebdd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebdd7 jl 0x124ebdfd */
  if ((C.sf!=C.of)) goto L_124ebdfd;
  /* 124ebdd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebddc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ebddf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebde2 jg 0x124ebdfd */
  if ((!C.zf&&C.sf==C.of)) goto L_124ebdfd;
  /* 124ebde4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebde7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ebdea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ebded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebdf0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124ebdf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebdf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebdf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ebdfb jmp 0x124ebe37 */
  goto L_124ebe37;
L_124ebdfd:;
  /* 124ebdfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebe00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ebe03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebe06 jne 0x124ebe2e */
  if (!C.zf) goto L_124ebe2e;
  /* 124ebe08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebe0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124ebe0e:;
  /* 124ebe0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124ebe17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124ebe19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebe1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ebe22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ebe28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ebe2a jne 0x124ebe0e */
  if (!C.zf) goto L_124ebe0e;
  /* 124ebe2c jmp 0x124ebe37 */
  goto L_124ebe37;
L_124ebe2e:;
  /* 124ebe2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebe31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebe34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124ebe37:;
  /* 124ebe37 jmp 0x124ebdc4 */
  goto L_124ebdc4;
L_124ebe39:;
  /* 124ebe39 mov esp, ebp */
  ESP = (EBP);
  /* 124ebe3b pop ebp */
  EBP = (pop32());
  /* 124ebe3c ret  */
  ESPCHK(0x124ebdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001be40 @ 0x124ebe40 (304 bytes, 85 insns) */
void f_124ebe40(void) {
  FTRACE(0x124ebe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ebe40 push ebp */
  push32((uint32_t)(EBP));
  /* 124ebe41 mov ebp, esp */
  EBP = (ESP);
  /* 124ebe43 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebe44 cmp dword ptr [0x1250cdc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebe4b je 0x124ebf0c */
  if (C.zf) goto L_124ebf0c;
  /* 124ebe51 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 124ebe53 push 0x12508ae8 */
  push32((uint32_t)(0x12508ae8u));
  /* 124ebe58 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebe5a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124ebe5c push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebe5e call 0x124e0dd0 */
  push32(0x124ebe63u); f_124e0dd0();
  /* 124ebe63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebe66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ebe69 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebe6d jne 0x124ebe79 */
  if (!C.zf) goto L_124ebe79;
  /* 124ebe6f mov eax, 1 */
  EAX = (0x1u);
  /* 124ebe74 jmp 0x124ebf6c */
  goto L_124ebf6c;
L_124ebe79:;
  /* 124ebe79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe7c push eax */
  push32((uint32_t)(EAX));
  /* 124ebe7d call 0x124ebf70 */
  push32(0x124ebe82u); f_124ebf70();
  /* 124ebe82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebe85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ebe87 je 0x124ebead */
  if (C.zf) goto L_124ebead;
  /* 124ebe89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe8c push ecx */
  push32((uint32_t)(ECX));
  /* 124ebe8d call 0x124ec200 */
  push32(0x124ebe92u); f_124ec200();
  /* 124ebe92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebe95 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebe97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebe9a push edx */
  push32((uint32_t)(EDX));
  /* 124ebe9b call 0x124e1450 */
  push32(0x124ebea0u); f_124e1450();
  /* 124ebea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebea3 mov eax, 1 */
  EAX = (0x1u);
  /* 124ebea8 jmp 0x124ebf6c */
  goto L_124ebf6c;
L_124ebead:;
  /* 124ebead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebeb0 mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebeb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ebeb8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124ebeba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebebd mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebec3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 124ebec6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 124ebec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebecc mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebed2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 124ebed5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 124ebed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebedb mov dword ptr [0x1250bd88], eax */
  w32((uint32_t)(0x1250bd88), (EAX));
  /* 124ebee0 mov ecx, dword ptr [0x1250cdfc] */
  ECX = (r32((uint32_t)(0x1250cdfc)));
  /* 124ebee6 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebee7 call 0x124ec200 */
  push32(0x124ebeecu); f_124ec200();
  /* 124ebeec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebeef push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebef1 mov edx, dword ptr [0x1250cdfc] */
  EDX = (r32((uint32_t)(0x1250cdfc)));
  /* 124ebef7 push edx */
  push32((uint32_t)(EDX));
  /* 124ebef8 call 0x124e1450 */
  push32(0x124ebefdu); f_124e1450();
  /* 124ebefd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebf00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebf03 mov dword ptr [0x1250cdfc], eax */
  w32((uint32_t)(0x1250cdfc), (EAX));
  /* 124ebf08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ebf0a jmp 0x124ebf6c */
  goto L_124ebf6c;
L_124ebf0c:;
  /* 124ebf0c mov ecx, dword ptr [0x1250bd88] */
  ECX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebf12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ebf14 mov dword ptr [0x1250bd58], edx */
  w32((uint32_t)(0x1250bd58), (EDX));
  /* 124ebf1a mov eax, dword ptr [0x1250bd88] */
  EAX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebf1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124ebf22 mov dword ptr [0x1250bd5c], ecx */
  w32((uint32_t)(0x1250bd5c), (ECX));
  /* 124ebf28 mov edx, dword ptr [0x1250bd88] */
  EDX = (r32((uint32_t)(0x1250bd88)));
  /* 124ebf2e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124ebf31 mov dword ptr [0x1250bd60], eax */
  w32((uint32_t)(0x1250bd60), (EAX));
  /* 124ebf36 mov dword ptr [0x1250bd88], 0x1250bd58 */
  w32((uint32_t)(0x1250bd88), (0x1250bd58u));
  /* 124ebf40 mov ecx, dword ptr [0x1250cdfc] */
  ECX = (r32((uint32_t)(0x1250cdfc)));
  /* 124ebf46 push ecx */
  push32((uint32_t)(ECX));
  /* 124ebf47 call 0x124ec200 */
  push32(0x124ebf4cu); f_124ec200();
  /* 124ebf4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebf4f push 2 */
  push32((uint32_t)(0x2u));
  /* 124ebf51 mov edx, dword ptr [0x1250cdfc] */
  EDX = (r32((uint32_t)(0x1250cdfc)));
  /* 124ebf57 push edx */
  push32((uint32_t)(EDX));
  /* 124ebf58 call 0x124e1450 */
  push32(0x124ebf5du); f_124e1450();
  /* 124ebf5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebf60 mov dword ptr [0x1250cdfc], 0 */
  w32((uint32_t)(0x1250cdfc), (0x0u));
  /* 124ebf6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ebf6c:;
  /* 124ebf6c mov esp, ebp */
  ESP = (EBP);
  /* 124ebf6e pop ebp */
  EBP = (pop32());
  /* 124ebf6f ret  */
  ESPCHK(0x124ebe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf70 @ 0x124ebf70 (525 bytes, 200 insns) */
void f_124ebf70(void) {
  FTRACE(0x124ebf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ebf70 push ebp */
  push32((uint32_t)(EBP));
  /* 124ebf71 mov ebp, esp */
  EBP = (ESP);
  /* 124ebf73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ebf76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ebf7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ebf7f mov ax, word ptr [0x1250ce1c] */
  AX = (r16((uint32_t)(0x1250ce1c)));
  /* 124ebf85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ebf88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ebf8c jne 0x124ebf96 */
  if (!C.zf) goto L_124ebf96;
  /* 124ebf8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ebf91 jmp 0x124ec179 */
  goto L_124ec179;
L_124ebf96:;
  /* 124ebf96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebf99 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebf9c push ecx */
  push32((uint32_t)(ECX));
  /* 124ebf9d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 124ebf9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebfa2 push edx */
  push32((uint32_t)(EDX));
  /* 124ebfa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebfa5 call 0x124eeb80 */
  push32(0x124ebfaau); f_124eeb80();
  /* 124ebfaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebfad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ebfb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ebfb2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ebfb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebfb8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebfbb push edx */
  push32((uint32_t)(EDX));
  /* 124ebfbc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 124ebfbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebfc1 push eax */
  push32((uint32_t)(EAX));
  /* 124ebfc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebfc4 call 0x124eeb80 */
  push32(0x124ebfc9u); f_124eeb80();
  /* 124ebfc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebfcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ebfcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ebfd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ebfd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebfd7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebfda push edx */
  push32((uint32_t)(EDX));
  /* 124ebfdb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 124ebfdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebfe0 push eax */
  push32((uint32_t)(EAX));
  /* 124ebfe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ebfe3 call 0x124eeb80 */
  push32(0x124ebfe8u); f_124eeb80();
  /* 124ebfe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebfeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ebfee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ebff0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ebff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ebff6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ebff9 push edx */
  push32((uint32_t)(EDX));
  /* 124ebffa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 124ebffc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ebfff push eax */
  push32((uint32_t)(EAX));
  /* 124ec000 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec002 call 0x124eeb80 */
  push32(0x124ec007u); f_124eeb80();
  /* 124ec007 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec00a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec00d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec00f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec012 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec015 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec018 push edx */
  push32((uint32_t)(EDX));
  /* 124ec019 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 124ec01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec01e push eax */
  push32((uint32_t)(EAX));
  /* 124ec01f push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec021 call 0x124eeb80 */
  push32(0x124ec026u); f_124eeb80();
  /* 124ec026 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec02c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec02e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec034 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124ec037 push eax */
  push32((uint32_t)(EAX));
  /* 124ec038 call 0x124ec180 */
  push32(0x124ec03du); f_124ec180();
  /* 124ec03d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec043 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec046 push ecx */
  push32((uint32_t)(ECX));
  /* 124ec047 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 124ec049 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec04c push edx */
  push32((uint32_t)(EDX));
  /* 124ec04d push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec04f call 0x124eeb80 */
  push32(0x124ec054u); f_124eeb80();
  /* 124ec054 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec057 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec05a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec05c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec05f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec062 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec065 push edx */
  push32((uint32_t)(EDX));
  /* 124ec066 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 124ec068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec06b push eax */
  push32((uint32_t)(EAX));
  /* 124ec06c push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec06e call 0x124eeb80 */
  push32(0x124ec073u); f_124eeb80();
  /* 124ec073 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec076 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec079 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec07b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec07e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec081 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec084 push edx */
  push32((uint32_t)(EDX));
  /* 124ec085 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 124ec087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec08a push eax */
  push32((uint32_t)(EAX));
  /* 124ec08b push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec08d call 0x124eeb80 */
  push32(0x124ec092u); f_124eeb80();
  /* 124ec092 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec095 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec098 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec09a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec09d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec0a0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec0a3 push edx */
  push32((uint32_t)(EDX));
  /* 124ec0a4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 124ec0a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec0a9 push eax */
  push32((uint32_t)(EAX));
  /* 124ec0aa push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec0ac call 0x124eeb80 */
  push32(0x124ec0b1u); f_124eeb80();
  /* 124ec0b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec0b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec0b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec0b9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec0bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec0bf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec0c2 push edx */
  push32((uint32_t)(EDX));
  /* 124ec0c3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 124ec0c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec0c8 push eax */
  push32((uint32_t)(EAX));
  /* 124ec0c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec0cb call 0x124eeb80 */
  push32(0x124ec0d0u); f_124eeb80();
  /* 124ec0d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec0d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec0d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec0d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec0db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec0de add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec0e1 push edx */
  push32((uint32_t)(EDX));
  /* 124ec0e2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 124ec0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec0e7 push eax */
  push32((uint32_t)(EAX));
  /* 124ec0e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec0ea call 0x124eeb80 */
  push32(0x124ec0efu); f_124eeb80();
  /* 124ec0ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec0f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec0f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec0f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec0fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec0fd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec100 push edx */
  push32((uint32_t)(EDX));
  /* 124ec101 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 124ec103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec106 push eax */
  push32((uint32_t)(EAX));
  /* 124ec107 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec109 call 0x124eeb80 */
  push32(0x124ec10eu); f_124eeb80();
  /* 124ec10e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec114 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec116 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec11c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec11f push edx */
  push32((uint32_t)(EDX));
  /* 124ec120 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 124ec122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec125 push eax */
  push32((uint32_t)(EAX));
  /* 124ec126 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec128 call 0x124eeb80 */
  push32(0x124ec12du); f_124eeb80();
  /* 124ec12d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec130 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec133 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec135 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec13b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec13e push edx */
  push32((uint32_t)(EDX));
  /* 124ec13f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 124ec141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec144 push eax */
  push32((uint32_t)(EAX));
  /* 124ec145 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec147 call 0x124eeb80 */
  push32(0x124ec14cu); f_124eeb80();
  /* 124ec14c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec14f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec152 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec154 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec157 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec15a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec15d push edx */
  push32((uint32_t)(EDX));
  /* 124ec15e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 124ec160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec163 push eax */
  push32((uint32_t)(EAX));
  /* 124ec164 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec166 call 0x124eeb80 */
  push32(0x124ec16bu); f_124eeb80();
  /* 124ec16b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec16e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec171 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec173 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ec176 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124ec179:;
  /* 124ec179 mov esp, ebp */
  ESP = (EBP);
  /* 124ec17b pop ebp */
  EBP = (pop32());
  /* 124ec17c ret  */
  ESPCHK(0x124ebf70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x124ec180 (125 bytes, 49 insns) */
void f_124ec180(void) {
  FTRACE(0x124ec180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec180 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec181 mov ebp, esp */
  EBP = (ESP);
  /* 124ec183 push ecx */
  push32((uint32_t)(ECX));
L_124ec184:;
  /* 124ec184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec187 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ec18a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ec18c je 0x124ec1f9 */
  if (C.zf) goto L_124ec1f9;
  /* 124ec18e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec191 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ec194 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec197 jl 0x124ec1bd */
  if ((C.sf!=C.of)) goto L_124ec1bd;
  /* 124ec199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec19c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ec19f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec1a2 jg 0x124ec1bd */
  if ((!C.zf&&C.sf==C.of)) goto L_124ec1bd;
  /* 124ec1a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec1a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ec1aa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ec1ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec1b0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 124ec1b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec1b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec1b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ec1bb jmp 0x124ec1f7 */
  goto L_124ec1f7;
L_124ec1bd:;
  /* 124ec1bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec1c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ec1c3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec1c6 jne 0x124ec1ee */
  if (!C.zf) goto L_124ec1ee;
  /* 124ec1c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec1cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124ec1ce:;
  /* 124ec1ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec1d4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124ec1d7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124ec1d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec1dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec1df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ec1e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec1e5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ec1e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec1ea jne 0x124ec1ce */
  if (!C.zf) goto L_124ec1ce;
  /* 124ec1ec jmp 0x124ec1f7 */
  goto L_124ec1f7;
L_124ec1ee:;
  /* 124ec1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec1f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec1f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_124ec1f7:;
  /* 124ec1f7 jmp 0x124ec184 */
  goto L_124ec184;
L_124ec1f9:;
  /* 124ec1f9 mov esp, ebp */
  ESP = (EBP);
  /* 124ec1fb pop ebp */
  EBP = (pop32());
  /* 124ec1fc ret  */
  ESPCHK(0x124ec180u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c200 @ 0x124ec200 (147 bytes, 52 insns) */
void f_124ec200(void) {
  FTRACE(0x124ec200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec200 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec201 mov ebp, esp */
  EBP = (ESP);
  /* 124ec203 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec207 jne 0x124ec20e */
  if (!C.zf) goto L_124ec20e;
  /* 124ec209 jmp 0x124ec291 */
  goto L_124ec291;
L_124ec20e:;
  /* 124ec20e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec211 cmp dword ptr [eax + 0xc], 0x1250ce58 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1250ce58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec218 je 0x124ec291 */
  if (C.zf) goto L_124ec291;
  /* 124ec21a push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec21c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec21f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ec222 push edx */
  push32((uint32_t)(EDX));
  /* 124ec223 call 0x124e1450 */
  push32(0x124ec228u); f_124e1450();
  /* 124ec228 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec22b push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec22d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec230 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124ec233 push ecx */
  push32((uint32_t)(ECX));
  /* 124ec234 call 0x124e1450 */
  push32(0x124ec239u); f_124e1450();
  /* 124ec239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec23c push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec23e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec241 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124ec244 push eax */
  push32((uint32_t)(EAX));
  /* 124ec245 call 0x124e1450 */
  push32(0x124ec24au); f_124e1450();
  /* 124ec24a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec24d push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec24f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec252 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124ec255 push edx */
  push32((uint32_t)(EDX));
  /* 124ec256 call 0x124e1450 */
  push32(0x124ec25bu); f_124e1450();
  /* 124ec25b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec25e push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec263 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124ec266 push ecx */
  push32((uint32_t)(ECX));
  /* 124ec267 call 0x124e1450 */
  push32(0x124ec26cu); f_124e1450();
  /* 124ec26c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec26f push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec274 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124ec277 push eax */
  push32((uint32_t)(EAX));
  /* 124ec278 call 0x124e1450 */
  push32(0x124ec27du); f_124e1450();
  /* 124ec27d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec280 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec285 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 124ec288 push edx */
  push32((uint32_t)(EDX));
  /* 124ec289 call 0x124e1450 */
  push32(0x124ec28eu); f_124e1450();
  /* 124ec28e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ec291:;
  /* 124ec291 pop ebp */
  EBP = (pop32());
  /* 124ec292 ret  */
  ESPCHK(0x124ec200u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c2a0 @ 0x124ec2a0 (928 bytes, 284 insns) */
void f_124ec2a0(void) {
  FTRACE(0x124ec2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec2a1 mov ebp, esp */
  EBP = (ESP);
  /* 124ec2a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ec2a6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 124ec2ad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 124ec2b4 cmp dword ptr [0x1250cdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec2bb je 0x124ec5f1 */
  if (C.zf) goto L_124ec5f1;
  /* 124ec2c1 cmp dword ptr [0x1250cdd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250cdd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec2c8 jne 0x124ec2f0 */
  if (!C.zf) goto L_124ec2f0;
  /* 124ec2ca push 0x1250cdd0 */
  push32((uint32_t)(0x1250cdd0u));
  /* 124ec2cf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 124ec2d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec2d6 mov ax, word ptr [0x1250ce14] */
  AX = (r16((uint32_t)(0x1250ce14)));
  /* 124ec2dc push eax */
  push32((uint32_t)(EAX));
  /* 124ec2dd push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec2df call 0x124eeb80 */
  push32(0x124ec2e4u); f_124eeb80();
  /* 124ec2e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec2e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec2e9 je 0x124ec2f0 */
  if (C.zf) goto L_124ec2f0;
  /* 124ec2eb jmp 0x124ec5b2 */
  goto L_124ec5b2;
L_124ec2f0:;
  /* 124ec2f0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 124ec2f2 push 0x12508af4 */
  push32((uint32_t)(0x12508af4u));
  /* 124ec2f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec2f9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124ec2fe call 0x124e09c0 */
  push32(0x124ec303u); f_124e09c0();
  /* 124ec303 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec306 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 124ec309 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 124ec30b push 0x12508af4 */
  push32((uint32_t)(0x12508af4u));
  /* 124ec310 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec312 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124ec317 call 0x124e09c0 */
  push32(0x124ec31cu); f_124e09c0();
  /* 124ec31c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec31f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124ec322 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 124ec324 push 0x12508af4 */
  push32((uint32_t)(0x12508af4u));
  /* 124ec329 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec32b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 124ec330 call 0x124e09c0 */
  push32(0x124ec335u); f_124e09c0();
  /* 124ec335 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec338 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 124ec33b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 124ec33d push 0x12508af4 */
  push32((uint32_t)(0x12508af4u));
  /* 124ec342 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec344 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124ec349 call 0x124e09c0 */
  push32(0x124ec34eu); f_124e09c0();
  /* 124ec34e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec351 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124ec354 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec358 je 0x124ec36c */
  if (C.zf) goto L_124ec36c;
  /* 124ec35a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec35e je 0x124ec36c */
  if (C.zf) goto L_124ec36c;
  /* 124ec360 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec364 je 0x124ec36c */
  if (C.zf) goto L_124ec36c;
  /* 124ec366 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec36a jne 0x124ec371 */
  if (!C.zf) goto L_124ec371;
L_124ec36c:;
  /* 124ec36c jmp 0x124ec5b2 */
  goto L_124ec5b2;
L_124ec371:;
  /* 124ec371 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124ec374 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124ec377 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124ec37e jmp 0x124ec389 */
  goto L_124ec389;
L_124ec380:;
  /* 124ec380 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124ec383 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec386 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_124ec389:;
  /* 124ec389 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec390 jge 0x124ec3a5 */
  if ((C.sf==C.of)) goto L_124ec3a5;
  /* 124ec392 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec395 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 124ec398 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 124ec39a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec39d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec3a0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124ec3a3 jmp 0x124ec380 */
  goto L_124ec380;
L_124ec3a5:;
  /* 124ec3a5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 124ec3a8 push eax */
  push32((uint32_t)(EAX));
  /* 124ec3a9 mov ecx, dword ptr [0x1250cdd0] */
  ECX = (r32((uint32_t)(0x1250cdd0)));
  /* 124ec3af push ecx */
  push32((uint32_t)(ECX));
  /* 124ec3b0 call dword ptr [0x1250f338] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f338))), 0x124ec3b6u);
  /* 124ec3b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec3b8 jne 0x124ec3bf */
  if (!C.zf) goto L_124ec3bf;
  /* 124ec3ba jmp 0x124ec5b2 */
  goto L_124ec5b2;
L_124ec3bf:;
  /* 124ec3bf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec3c3 jbe 0x124ec3ca */
  if ((C.cf||C.zf)) goto L_124ec3ca;
  /* 124ec3c5 jmp 0x124ec5b2 */
  goto L_124ec5b2;
L_124ec3ca:;
  /* 124ec3ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124ec3cd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124ec3d3 mov dword ptr [0x1250aea4], edx */
  w32((uint32_t)(0x1250aea4), (EDX));
  /* 124ec3d9 cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec3e0 jle 0x124ec439 */
  if ((C.zf||C.sf!=C.of)) goto L_124ec439;
  /* 124ec3e2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 124ec3e5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124ec3e8 jmp 0x124ec3f3 */
  goto L_124ec3f3;
L_124ec3ea:;
  /* 124ec3ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec3ed add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec3f0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_124ec3f3:;
  /* 124ec3f3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec3f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec3f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ec3fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec3fc je 0x124ec439 */
  if (C.zf) goto L_124ec439;
  /* 124ec3fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec401 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ec403 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124ec406 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ec408 je 0x124ec439 */
  if (C.zf) goto L_124ec439;
  /* 124ec40a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec40d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec40f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ec411 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 124ec414 jmp 0x124ec41f */
  goto L_124ec41f;
L_124ec416:;
  /* 124ec416 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 124ec419 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec41c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_124ec41f:;
  /* 124ec41f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec422 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec424 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124ec427 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec42a jg 0x124ec437 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ec437;
  /* 124ec42c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124ec42f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec432 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124ec435 jmp 0x124ec416 */
  goto L_124ec416;
L_124ec437:;
  /* 124ec437 jmp 0x124ec3ea */
  goto L_124ec3ea;
L_124ec439:;
  /* 124ec439 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec43b push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec43d push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec43f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124ec442 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec445 push eax */
  push32((uint32_t)(EAX));
  /* 124ec446 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124ec44b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124ec44e push ecx */
  push32((uint32_t)(ECX));
  /* 124ec44f push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec451 call 0x124e8bf0 */
  push32(0x124ec456u); f_124e8bf0();
  /* 124ec456 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec45b jne 0x124ec462 */
  if (!C.zf) goto L_124ec462;
  /* 124ec45d jmp 0x124ec5b2 */
  goto L_124ec5b2;
L_124ec462:;
  /* 124ec462 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124ec465 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 124ec46a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124ec46d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124ec470 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124ec477 jmp 0x124ec482 */
  goto L_124ec482;
L_124ec479:;
  /* 124ec479 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124ec47c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec47f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124ec482:;
  /* 124ec482 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec489 jge 0x124ec4a0 */
  if ((C.sf==C.of)) goto L_124ec4a0;
  /* 124ec48b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ec48e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 124ec492 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 124ec495 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124ec498 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec49b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124ec49e jmp 0x124ec479 */
  goto L_124ec479;
L_124ec4a0:;
  /* 124ec4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ec4a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ec4a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec4aa push edx */
  push32((uint32_t)(EDX));
  /* 124ec4ab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124ec4b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124ec4b3 push eax */
  push32((uint32_t)(EAX));
  /* 124ec4b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec4b6 call 0x124eee20 */
  push32(0x124ec4bbu); f_124eee20();
  /* 124ec4bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec4be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec4c0 jne 0x124ec4c7 */
  if (!C.zf) goto L_124ec4c7;
  /* 124ec4c2 jmp 0x124ec5b2 */
  goto L_124ec5b2;
L_124ec4c7:;
  /* 124ec4c7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ec4ca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 124ec4cf cmp dword ptr [0x1250aea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1250aea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec4d6 jle 0x124ec533 */
  if ((C.zf||C.sf!=C.of)) goto L_124ec533;
  /* 124ec4d8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 124ec4db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 124ec4de jmp 0x124ec4e9 */
  goto L_124ec4e9;
L_124ec4e0:;
  /* 124ec4e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec4e3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec4e6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_124ec4e9:;
  /* 124ec4e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec4ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124ec4ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124ec4f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ec4f2 je 0x124ec533 */
  if (C.zf) goto L_124ec533;
  /* 124ec4f4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec4f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec4f9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124ec4fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ec4fe je 0x124ec533 */
  if (C.zf) goto L_124ec533;
  /* 124ec500 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec505 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ec507 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124ec50a jmp 0x124ec515 */
  goto L_124ec515;
L_124ec50c:;
  /* 124ec50c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124ec50f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec512 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_124ec515:;
  /* 124ec515 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 124ec518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec51a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 124ec51d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec520 jg 0x124ec531 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ec531;
  /* 124ec522 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124ec525 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124ec528 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 124ec52f jmp 0x124ec50c */
  goto L_124ec50c;
L_124ec531:;
  /* 124ec531 jmp 0x124ec4e0 */
  goto L_124ec4e0;
L_124ec533:;
  /* 124ec533 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124ec536 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec539 mov dword ptr [0x1250ac98], eax */
  w32((uint32_t)(0x1250ac98), (EAX));
  /* 124ec53e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ec541 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec544 mov dword ptr [0x1250ac9c], ecx */
  w32((uint32_t)(0x1250ac9c), (ECX));
  /* 124ec54a cmp dword ptr [0x1250ce00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec551 je 0x124ec564 */
  if (C.zf) goto L_124ec564;
  /* 124ec553 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec555 mov edx, dword ptr [0x1250ce00] */
  EDX = (r32((uint32_t)(0x1250ce00)));
  /* 124ec55b push edx */
  push32((uint32_t)(EDX));
  /* 124ec55c call 0x124e1450 */
  push32(0x124ec561u); f_124e1450();
  /* 124ec561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ec564:;
  /* 124ec564 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124ec567 mov dword ptr [0x1250ce00], eax */
  w32((uint32_t)(0x1250ce00), (EAX));
  /* 124ec56c cmp dword ptr [0x1250ce04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec573 je 0x124ec586 */
  if (C.zf) goto L_124ec586;
  /* 124ec575 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec577 mov ecx, dword ptr [0x1250ce04] */
  ECX = (r32((uint32_t)(0x1250ce04)));
  /* 124ec57d push ecx */
  push32((uint32_t)(ECX));
  /* 124ec57e call 0x124e1450 */
  push32(0x124ec583u); f_124e1450();
  /* 124ec583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ec586:;
  /* 124ec586 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ec589 mov dword ptr [0x1250ce04], edx */
  w32((uint32_t)(0x1250ce04), (EDX));
  /* 124ec58f push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec591 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124ec594 push eax */
  push32((uint32_t)(EAX));
  /* 124ec595 call 0x124e1450 */
  push32(0x124ec59au); f_124e1450();
  /* 124ec59a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec59d push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec59f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 124ec5a2 push ecx */
  push32((uint32_t)(ECX));
  /* 124ec5a3 call 0x124e1450 */
  push32(0x124ec5a8u); f_124e1450();
  /* 124ec5a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec5ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec5ad jmp 0x124ec63c */
  goto L_124ec63c;
L_124ec5b2:;
  /* 124ec5b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec5b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124ec5b7 push edx */
  push32((uint32_t)(EDX));
  /* 124ec5b8 call 0x124e1450 */
  push32(0x124ec5bdu); f_124e1450();
  /* 124ec5bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec5c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec5c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124ec5c5 push eax */
  push32((uint32_t)(EAX));
  /* 124ec5c6 call 0x124e1450 */
  push32(0x124ec5cbu); f_124e1450();
  /* 124ec5cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec5ce push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec5d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124ec5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ec5d4 call 0x124e1450 */
  push32(0x124ec5d9u); f_124e1450();
  /* 124ec5d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec5dc push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec5de mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124ec5e1 push edx */
  push32((uint32_t)(EDX));
  /* 124ec5e2 call 0x124e1450 */
  push32(0x124ec5e7u); f_124e1450();
  /* 124ec5e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec5ea mov eax, 1 */
  EAX = (0x1u);
  /* 124ec5ef jmp 0x124ec63c */
  goto L_124ec63c;
L_124ec5f1:;
  /* 124ec5f1 mov dword ptr [0x1250ac98], 0x1250aca2 */
  w32((uint32_t)(0x1250ac98), (0x1250aca2u));
  /* 124ec5fb mov dword ptr [0x1250ac9c], 0x1250aca2 */
  w32((uint32_t)(0x1250ac9c), (0x1250aca2u));
  /* 124ec605 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec607 mov eax, dword ptr [0x1250ce00] */
  EAX = (r32((uint32_t)(0x1250ce00)));
  /* 124ec60c push eax */
  push32((uint32_t)(EAX));
  /* 124ec60d call 0x124e1450 */
  push32(0x124ec612u); f_124e1450();
  /* 124ec612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec615 push 2 */
  push32((uint32_t)(0x2u));
  /* 124ec617 mov ecx, dword ptr [0x1250ce04] */
  ECX = (r32((uint32_t)(0x1250ce04)));
  /* 124ec61d push ecx */
  push32((uint32_t)(ECX));
  /* 124ec61e call 0x124e1450 */
  push32(0x124ec623u); f_124e1450();
  /* 124ec623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec626 mov dword ptr [0x1250ce00], 0 */
  w32((uint32_t)(0x1250ce00), (0x0u));
  /* 124ec630 mov dword ptr [0x1250ce04], 0 */
  w32((uint32_t)(0x1250ce04), (0x0u));
  /* 124ec63a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ec63c:;
  /* 124ec63c mov esp, ebp */
  ESP = (EBP);
  /* 124ec63e pop ebp */
  EBP = (pop32());
  /* 124ec63f ret  */
  ESPCHK(0x124ec2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c640 @ 0x124ec640 (7 bytes, 5 insns) */
void f_124ec640(void) {
  FTRACE(0x124ec640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec640 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec641 mov ebp, esp */
  EBP = (ESP);
  /* 124ec643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec645 pop ebp */
  EBP = (pop32());
  /* 124ec646 ret  */
  ESPCHK(0x124ec640u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x124ec650 (129 bytes, 56 insns) */
void f_124ec650(void) {
  FTRACE(0x124ec650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec650 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 124ec654 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124ec658 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124ec65e jne 0x124ec69c */
  if (!C.zf) goto L_124ec69c;
L_124ec660:;
  /* 124ec660 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124ec662 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec664 jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec666 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec668 je 0x124ec690 */
  if (C.zf) goto L_124ec690;
  /* 124ec66a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec66d jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec66f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124ec671 je 0x124ec690 */
  if (C.zf) goto L_124ec690;
  /* 124ec673 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124ec676 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec679 jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec67b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec67d je 0x124ec690 */
  if (C.zf) goto L_124ec690;
  /* 124ec67f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec682 jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec684 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec687 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec68a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124ec68c jne 0x124ec660 */
  if (!C.zf) goto L_124ec660;
  /* 124ec68e mov edi, edi */
  EDI = (EDI);
L_124ec690:;
  /* 124ec690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec692 ret  */
  ESPCHK(0x124ec650u, _esp0);
  ESP += 4; return;
  /* 124ec693 nop  */
  /* nop */
L_124ec694:;
  /* 124ec694 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ec696 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124ec698 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 124ec699 ret  */
  ESPCHK(0x124ec650u, _esp0);
  ESP += 4; return;
  /* 124ec69a mov edi, edi */
  EDI = (EDI);
L_124ec69c:;
  /* 124ec69c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 124ec6a2 je 0x124ec6b8 */
  if (C.zf) goto L_124ec6b8;
  /* 124ec6a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ec6a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124ec6a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec6a9 jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec6ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 124ec6ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec6ae je 0x124ec690 */
  if (C.zf) goto L_124ec690;
  /* 124ec6b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 124ec6b6 je 0x124ec660 */
  if (C.zf) goto L_124ec660;
L_124ec6b8:;
  /* 124ec6b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 124ec6bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec6be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec6c0 jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec6c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec6c4 je 0x124ec690 */
  if (C.zf) goto L_124ec690;
  /* 124ec6c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec6c9 jne 0x124ec694 */
  if (!C.zf) goto L_124ec694;
  /* 124ec6cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124ec6cd je 0x124ec690 */
  if (C.zf) goto L_124ec690;
  /* 124ec6cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec6d2 jmp 0x124ec660 */
  goto L_124ec660;
}

/* FUN_1001c6e0 @ 0x124ec6e0 (62 bytes, 35 insns) */
void f_124ec6e0(void) {
  FTRACE(0x124ec6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec6e1 mov ebp, esp */
  EBP = (ESP);
  /* 124ec6e3 push esi */
  push32((uint32_t)(ESI));
  /* 124ec6e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec6e6 push eax */
  push32((uint32_t)(EAX));
  /* 124ec6e7 push eax */
  push32((uint32_t)(EAX));
  /* 124ec6e8 push eax */
  push32((uint32_t)(EAX));
  /* 124ec6e9 push eax */
  push32((uint32_t)(EAX));
  /* 124ec6ea push eax */
  push32((uint32_t)(EAX));
  /* 124ec6eb push eax */
  push32((uint32_t)(EAX));
  /* 124ec6ec push eax */
  push32((uint32_t)(EAX));
  /* 124ec6ed push eax */
  push32((uint32_t)(EAX));
  /* 124ec6ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ec6f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124ec6f4:;
  /* 124ec6f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ec6f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec6f8 je 0x124ec701 */
  if (C.zf) goto L_124ec701;
  /* 124ec6fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124ec6fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x124ec6fb");
  /* 124ec6ff jmp 0x124ec6f4 */
  goto L_124ec6f4;
L_124ec701:;
  /* 124ec701 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec704 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124ec707 nop  */
  /* nop */
L_124ec708:;
  /* 124ec708 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 124ec709 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124ec70b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec70d je 0x124ec716 */
  if (C.zf) goto L_124ec716;
  /* 124ec70f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124ec710 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x124ec710");
  /* 124ec714 jae 0x124ec708 */
  if (!C.cf) goto L_124ec708;
L_124ec716:;
  /* 124ec716 mov eax, ecx */
  EAX = (ECX);
  /* 124ec718 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec71b pop esi */
  ESI = (pop32());
  /* 124ec71c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124ec71d ret  */
  ESPCHK(0x124ec6e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x124ec720 (56 bytes, 31 insns) */
void f_124ec720(void) {
  FTRACE(0x124ec720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec720 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec721 mov ebp, esp */
  EBP = (ESP);
  /* 124ec723 push edi */
  push32((uint32_t)(EDI));
  /* 124ec724 push esi */
  push32((uint32_t)(ESI));
  /* 124ec725 push ebx */
  push32((uint32_t)(EBX));
  /* 124ec726 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ec729 jecxz 0x124ec751 */
  x86_unimpl("jecxz @ 0x124ec729");
  /* 124ec72b mov ebx, ecx */
  EBX = (ECX);
  /* 124ec72d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec730 mov esi, edi */
  ESI = (EDI);
  /* 124ec732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec734 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 124ec736 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ec738 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec73a mov edi, esi */
  EDI = (ESI);
  /* 124ec73c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124ec73f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 124ec741 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 124ec744 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ec746 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124ec749 ja 0x124ec74f */
  if ((!C.cf&&!C.zf)) goto L_124ec74f;
  /* 124ec74b je 0x124ec751 */
  if (C.zf) goto L_124ec751;
  /* 124ec74d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124ec74e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_124ec74f:;
  /* 124ec74f not ecx */
  ECX = (~(ECX));
L_124ec751:;
  /* 124ec751 mov eax, ecx */
  EAX = (ECX);
  /* 124ec753 pop ebx */
  EBX = (pop32());
  /* 124ec754 pop esi */
  ESI = (pop32());
  /* 124ec755 pop edi */
  EDI = (pop32());
  /* 124ec756 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124ec757 ret  */
  ESPCHK(0x124ec720u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c760 @ 0x124ec760 (58 bytes, 32 insns) */
void f_124ec760(void) {
  FTRACE(0x124ec760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec760 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec761 mov ebp, esp */
  EBP = (ESP);
  /* 124ec763 push esi */
  push32((uint32_t)(ESI));
  /* 124ec764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec766 push eax */
  push32((uint32_t)(EAX));
  /* 124ec767 push eax */
  push32((uint32_t)(EAX));
  /* 124ec768 push eax */
  push32((uint32_t)(EAX));
  /* 124ec769 push eax */
  push32((uint32_t)(EAX));
  /* 124ec76a push eax */
  push32((uint32_t)(EAX));
  /* 124ec76b push eax */
  push32((uint32_t)(EAX));
  /* 124ec76c push eax */
  push32((uint32_t)(EAX));
  /* 124ec76d push eax */
  push32((uint32_t)(EAX));
  /* 124ec76e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ec771 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124ec774:;
  /* 124ec774 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ec776 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec778 je 0x124ec781 */
  if (C.zf) goto L_124ec781;
  /* 124ec77a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124ec77b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x124ec77b");
  /* 124ec77f jmp 0x124ec774 */
  goto L_124ec774;
L_124ec781:;
  /* 124ec781 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_124ec784:;
  /* 124ec784 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 124ec786 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124ec788 je 0x124ec794 */
  if (C.zf) goto L_124ec794;
  /* 124ec78a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 124ec78b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x124ec78b");
  /* 124ec78f jae 0x124ec784 */
  if (!C.cf) goto L_124ec784;
  /* 124ec791 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_124ec794:;
  /* 124ec794 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec797 pop esi */
  ESI = (pop32());
  /* 124ec798 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124ec799 ret  */
  ESPCHK(0x124ec760u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c7a0 @ 0x124ec7a0 (512 bytes, 147 insns) */
void f_124ec7a0(void) {
  FTRACE(0x124ec7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec7a1 mov ebp, esp */
  EBP = (ESP);
  /* 124ec7a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ec7a6 cmp dword ptr [0x1250ce4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec7ad jne 0x124ec7d2 */
  if (!C.zf) goto L_124ec7d2;
  /* 124ec7af call 0x124ed270 */
  push32(0x124ec7b4u); f_124ed270();
  /* 124ec7b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec7b6 je 0x124ec7c2 */
  if (C.zf) goto L_124ec7c2;
  /* 124ec7b8 mov eax, dword ptr [0x1250f2fc] */
  EAX = (r32((uint32_t)(0x1250f2fc)));
  /* 124ec7bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ec7c0 jmp 0x124ec7c9 */
  goto L_124ec7c9;
L_124ec7c2:;
  /* 124ec7c2 mov dword ptr [ebp - 8], 0x124ed2c0 */
  w32((uint32_t)(EBP + -0x8), (0x124ed2c0u));
L_124ec7c9:;
  /* 124ec7c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ec7cc mov dword ptr [0x1250ce4c], ecx */
  w32((uint32_t)(0x1250ce4c), (ECX));
L_124ec7d2:;
  /* 124ec7d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec7d6 jne 0x124ec7e2 */
  if (!C.zf) goto L_124ec7e2;
  /* 124ec7d8 call 0x124ed0c0 */
  push32(0x124ec7ddu); f_124ed0c0();
  /* 124ec7dd jmp 0x124ec8ae */
  goto L_124ec8ae;
L_124ec7e2:;
  /* 124ec7e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec7e5 mov dword ptr [0x1250ce3c], edx */
  w32((uint32_t)(0x1250ce3c), (EDX));
  /* 124ec7eb cmp dword ptr [0x1250ce3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec7f2 je 0x124ec814 */
  if (C.zf) goto L_124ec814;
  /* 124ec7f4 mov eax, dword ptr [0x1250ce3c] */
  EAX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ec7f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ec7fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ec7fe je 0x124ec814 */
  if (C.zf) goto L_124ec814;
  /* 124ec800 push 0x1250ce3c */
  push32((uint32_t)(0x1250ce3cu));
  /* 124ec805 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124ec807 push 0x1250ba90 */
  push32((uint32_t)(0x1250ba90u));
  /* 124ec80c call 0x124ec9a0 */
  push32(0x124ec811u); f_124ec9a0();
  /* 124ec811 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ec814:;
  /* 124ec814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec817 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec81a mov dword ptr [0x1250ce40], edx */
  w32((uint32_t)(0x1250ce40), (EDX));
  /* 124ec820 cmp dword ptr [0x1250ce40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec827 je 0x124ec849 */
  if (C.zf) goto L_124ec849;
  /* 124ec829 mov eax, dword ptr [0x1250ce40] */
  EAX = (r32((uint32_t)(0x1250ce40)));
  /* 124ec82e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ec831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ec833 je 0x124ec849 */
  if (C.zf) goto L_124ec849;
  /* 124ec835 push 0x1250ce40 */
  push32((uint32_t)(0x1250ce40u));
  /* 124ec83a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 124ec83c push 0x1250b9d8 */
  push32((uint32_t)(0x1250b9d8u));
  /* 124ec841 call 0x124ec9a0 */
  push32(0x124ec846u); f_124ec9a0();
  /* 124ec846 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ec849:;
  /* 124ec849 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
  /* 124ec853 cmp dword ptr [0x1250ce3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec85a je 0x124ec88d */
  if (C.zf) goto L_124ec88d;
  /* 124ec85c mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ec862 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124ec865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec867 je 0x124ec88d */
  if (C.zf) goto L_124ec88d;
  /* 124ec869 cmp dword ptr [0x1250ce40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec870 je 0x124ec886 */
  if (C.zf) goto L_124ec886;
  /* 124ec872 mov ecx, dword ptr [0x1250ce40] */
  ECX = (r32((uint32_t)(0x1250ce40)));
  /* 124ec878 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124ec87b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ec87d je 0x124ec886 */
  if (C.zf) goto L_124ec886;
  /* 124ec87f call 0x124eca30 */
  push32(0x124ec884u); f_124eca30();
  /* 124ec884 jmp 0x124ec88b */
  goto L_124ec88b;
L_124ec886:;
  /* 124ec886 call 0x124ece20 */
  push32(0x124ec88bu); f_124ece20();
L_124ec88b:;
  /* 124ec88b jmp 0x124ec8ae */
  goto L_124ec8ae;
L_124ec88d:;
  /* 124ec88d cmp dword ptr [0x1250ce40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec894 je 0x124ec8a9 */
  if (C.zf) goto L_124ec8a9;
  /* 124ec896 mov eax, dword ptr [0x1250ce40] */
  EAX = (r32((uint32_t)(0x1250ce40)));
  /* 124ec89b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ec89e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ec8a0 je 0x124ec8a9 */
  if (C.zf) goto L_124ec8a9;
  /* 124ec8a2 call 0x124ecfc0 */
  push32(0x124ec8a7u); f_124ecfc0();
  /* 124ec8a7 jmp 0x124ec8ae */
  goto L_124ec8ae;
L_124ec8a9:;
  /* 124ec8a9 call 0x124ed0c0 */
  push32(0x124ec8aeu); f_124ed0c0();
L_124ec8ae:;
  /* 124ec8ae cmp dword ptr [0x1250ce44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec8b5 jne 0x124ec8be */
  if (!C.zf) goto L_124ec8be;
  /* 124ec8b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec8b9 jmp 0x124ec99c */
  goto L_124ec99c;
L_124ec8be:;
  /* 124ec8be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec8c1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec8c7 push edx */
  push32((uint32_t)(EDX));
  /* 124ec8c8 call 0x124ed0f0 */
  push32(0x124ec8cdu); f_124ed0f0();
  /* 124ec8cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec8d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ec8d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec8d7 je 0x124ec8ec */
  if (C.zf) goto L_124ec8ec;
  /* 124ec8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec8dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ec8e1 push eax */
  push32((uint32_t)(EAX));
  /* 124ec8e2 call dword ptr [0x1250f300] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f300))), 0x124ec8e8u);
  /* 124ec8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec8ea jne 0x124ec8f3 */
  if (!C.zf) goto L_124ec8f3;
L_124ec8ec:;
  /* 124ec8ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec8ee jmp 0x124ec99c */
  goto L_124ec99c;
L_124ec8f3:;
  /* 124ec8f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ec8f5 mov ecx, dword ptr [0x1250ce2c] */
  ECX = (r32((uint32_t)(0x1250ce2c)));
  /* 124ec8fb push ecx */
  push32((uint32_t)(ECX));
  /* 124ec8fc call dword ptr [0x1250f310] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f310))), 0x124ec902u);
  /* 124ec902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec904 jne 0x124ec90d */
  if (!C.zf) goto L_124ec90d;
  /* 124ec906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec908 jmp 0x124ec99c */
  goto L_124ec99c;
L_124ec90d:;
  /* 124ec90d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec911 je 0x124ec938 */
  if (C.zf) goto L_124ec938;
  /* 124ec913 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ec916 mov ax, word ptr [0x1250ce2c] */
  AX = (r16((uint32_t)(0x1250ce2c)));
  /* 124ec91c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 124ec91f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ec922 mov dx, word ptr [0x1250ce48] */
  DX = (r16((uint32_t)(0x1250ce48)));
  /* 124ec929 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 124ec92d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ec930 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 124ec934 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_124ec938:;
  /* 124ec938 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec93c je 0x124ec997 */
  if (C.zf) goto L_124ec997;
  /* 124ec93e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124ec940 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ec943 push edx */
  push32((uint32_t)(EDX));
  /* 124ec944 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 124ec949 mov eax, dword ptr [0x1250ce2c] */
  EAX = (r32((uint32_t)(0x1250ce2c)));
  /* 124ec94e push eax */
  push32((uint32_t)(EAX));
  /* 124ec94f call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ec955u);
  /* 124ec955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec957 jne 0x124ec95d */
  if (!C.zf) goto L_124ec95d;
  /* 124ec959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec95b jmp 0x124ec99c */
  goto L_124ec99c;
L_124ec95d:;
  /* 124ec95d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124ec95f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ec962 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec965 push ecx */
  push32((uint32_t)(ECX));
  /* 124ec966 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 124ec96b mov edx, dword ptr [0x1250ce48] */
  EDX = (r32((uint32_t)(0x1250ce48)));
  /* 124ec971 push edx */
  push32((uint32_t)(EDX));
  /* 124ec972 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ec978u);
  /* 124ec978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ec97a jne 0x124ec980 */
  if (!C.zf) goto L_124ec980;
  /* 124ec97c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ec97e jmp 0x124ec99c */
  goto L_124ec99c;
L_124ec980:;
  /* 124ec980 push 0xa */
  push32((uint32_t)(0xau));
  /* 124ec982 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ec985 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec98a push eax */
  push32((uint32_t)(EAX));
  /* 124ec98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec98e push ecx */
  push32((uint32_t)(ECX));
  /* 124ec98f call 0x124e3500 */
  push32(0x124ec994u); f_124e3500();
  /* 124ec994 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ec997:;
  /* 124ec997 mov eax, 1 */
  EAX = (0x1u);
L_124ec99c:;
  /* 124ec99c mov esp, ebp */
  ESP = (EBP);
  /* 124ec99e pop ebp */
  EBP = (pop32());
  /* 124ec99f ret  */
  ESPCHK(0x124ec7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c9a0 @ 0x124ec9a0 (130 bytes, 47 insns) */
void f_124ec9a0(void) {
  FTRACE(0x124ec9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ec9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ec9a1 mov ebp, esp */
  EBP = (ESP);
  /* 124ec9a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ec9a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 124ec9ad mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_124ec9b4:;
  /* 124ec9b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ec9b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec9ba jg 0x124eca1e */
  if ((!C.zf&&C.sf==C.of)) goto L_124eca1e;
  /* 124ec9bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec9c0 je 0x124eca1e */
  if (C.zf) goto L_124eca1e;
  /* 124ec9c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ec9c5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec9c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ec9c9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ec9cb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124ec9cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ec9d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec9d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec9d6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 124ec9d9 push eax */
  push32((uint32_t)(EAX));
  /* 124ec9da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ec9dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124ec9df push edx */
  push32((uint32_t)(EDX));
  /* 124ec9e0 call 0x124ef090 */
  push32(0x124ec9e5u); f_124ef090();
  /* 124ec9e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ec9e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ec9eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ec9ef jne 0x124eca02 */
  if (!C.zf) goto L_124eca02;
  /* 124ec9f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ec9f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ec9f7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 124ec9fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ec9fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124eca00 jmp 0x124eca1c */
  goto L_124eca1c;
L_124eca02:;
  /* 124eca02 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eca06 jge 0x124eca13 */
  if ((C.sf==C.of)) goto L_124eca13;
  /* 124eca08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eca0b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124eca0e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 124eca11 jmp 0x124eca1c */
  goto L_124eca1c;
L_124eca13:;
  /* 124eca13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eca16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eca19 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_124eca1c:;
  /* 124eca1c jmp 0x124ec9b4 */
  goto L_124ec9b4;
L_124eca1e:;
  /* 124eca1e mov esp, ebp */
  ESP = (EBP);
  /* 124eca20 pop ebp */
  EBP = (pop32());
  /* 124eca21 ret  */
  ESPCHK(0x124ec9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ca30 @ 0x124eca30 (186 bytes, 50 insns) */
void f_124eca30(void) {
  FTRACE(0x124eca30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124eca30 push ebp */
  push32((uint32_t)(EBP));
  /* 124eca31 mov ebp, esp */
  EBP = (ESP);
  /* 124eca33 push ecx */
  push32((uint32_t)(ECX));
  /* 124eca34 mov eax, dword ptr [0x1250ce3c] */
  EAX = (r32((uint32_t)(0x1250ce3c)));
  /* 124eca39 push eax */
  push32((uint32_t)(EAX));
  /* 124eca3a call 0x124e37f0 */
  push32(0x124eca3fu); f_124e37f0();
  /* 124eca3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eca42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124eca44 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eca47 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124eca4a mov dword ptr [0x1250ce38], ecx */
  w32((uint32_t)(0x1250ce38), (ECX));
  /* 124eca50 mov edx, dword ptr [0x1250ce40] */
  EDX = (r32((uint32_t)(0x1250ce40)));
  /* 124eca56 push edx */
  push32((uint32_t)(EDX));
  /* 124eca57 call 0x124e37f0 */
  push32(0x124eca5cu); f_124e37f0();
  /* 124eca5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eca5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124eca61 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eca64 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124eca67 mov dword ptr [0x1250ce30], ecx */
  w32((uint32_t)(0x1250ce30), (ECX));
  /* 124eca6d mov dword ptr [0x1250ce2c], 0 */
  w32((uint32_t)(0x1250ce2c), (0x0u));
  /* 124eca77 cmp dword ptr [0x1250ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124eca7e je 0x124eca89 */
  if (C.zf) goto L_124eca89;
  /* 124eca80 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124eca87 jmp 0x124eca9b */
  goto L_124eca9b;
L_124eca89:;
  /* 124eca89 mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124eca8f push edx */
  push32((uint32_t)(EDX));
  /* 124eca90 call 0x124ed4d0 */
  push32(0x124eca95u); f_124ed4d0();
  /* 124eca95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eca98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124eca9b:;
  /* 124eca9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124eca9e mov dword ptr [0x1250ce34], eax */
  w32((uint32_t)(0x1250ce34), (EAX));
  /* 124ecaa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ecaa5 push 0x124ecaf0 */
  push32((uint32_t)(0x124ecaf0u));
  /* 124ecaaa call dword ptr [0x1250f304] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f304))), 0x124ecab0u);
  /* 124ecab0 mov ecx, dword ptr [0x1250ce44] */
  ECX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecab6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 124ecabc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ecabe je 0x124ecadc */
  if (C.zf) goto L_124ecadc;
  /* 124ecac0 mov edx, dword ptr [0x1250ce44] */
  EDX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecac6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 124ecacc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ecace je 0x124ecadc */
  if (C.zf) goto L_124ecadc;
  /* 124ecad0 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecad5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 124ecad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecada jne 0x124ecae6 */
  if (!C.zf) goto L_124ecae6;
L_124ecadc:;
  /* 124ecadc mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
L_124ecae6:;
  /* 124ecae6 mov esp, ebp */
  ESP = (EBP);
  /* 124ecae8 pop ebp */
  EBP = (pop32());
  /* 124ecae9 ret  */
  ESPCHK(0x124eca30u, _esp0);
  ESP += 4; return;
}

/* FUN_1001caf0 @ 0x124ecaf0 (804 bytes, 220 insns) */
void f_124ecaf0(void) {
  FTRACE(0x124ecaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ecaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ecaf1 mov ebp, esp */
  EBP = (ESP);
  /* 124ecaf3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecaf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ecaf9 push eax */
  push32((uint32_t)(EAX));
  /* 124ecafa call 0x124ed450 */
  push32(0x124ecaffu); f_124ed450();
  /* 124ecaff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecb02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124ecb05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124ecb07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124ecb0a push ecx */
  push32((uint32_t)(ECX));
  /* 124ecb0b mov edx, dword ptr [0x1250ce30] */
  EDX = (r32((uint32_t)(0x1250ce30)));
  /* 124ecb11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ecb13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecb15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 124ecb1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecb21 push edx */
  push32((uint32_t)(EDX));
  /* 124ecb22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecb25 push eax */
  push32((uint32_t)(EAX));
  /* 124ecb26 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ecb2cu);
  /* 124ecb2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecb2e jne 0x124ecb44 */
  if (!C.zf) goto L_124ecb44;
  /* 124ecb30 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
  /* 124ecb3a mov eax, 1 */
  EAX = (0x1u);
  /* 124ecb3f jmp 0x124ece0e */
  goto L_124ece0e;
L_124ecb44:;
  /* 124ecb44 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124ecb47 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecb48 mov edx, dword ptr [0x1250ce40] */
  EDX = (r32((uint32_t)(0x1250ce40)));
  /* 124ecb4e push edx */
  push32((uint32_t)(EDX));
  /* 124ecb4f call 0x124ef090 */
  push32(0x124ecb54u); f_124ef090();
  /* 124ecb54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecb59 jne 0x124ecc7f */
  if (!C.zf) goto L_124ecc7f;
  /* 124ecb5f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124ecb61 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124ecb64 push eax */
  push32((uint32_t)(EAX));
  /* 124ecb65 mov ecx, dword ptr [0x1250ce38] */
  ECX = (r32((uint32_t)(0x1250ce38)));
  /* 124ecb6b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ecb6d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecb6f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 124ecb75 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecb7b push ecx */
  push32((uint32_t)(ECX));
  /* 124ecb7c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecb7f push edx */
  push32((uint32_t)(EDX));
  /* 124ecb80 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ecb86u);
  /* 124ecb86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecb88 jne 0x124ecb9e */
  if (!C.zf) goto L_124ecb9e;
  /* 124ecb8a mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
  /* 124ecb94 mov eax, 1 */
  EAX = (0x1u);
  /* 124ecb99 jmp 0x124ece0e */
  goto L_124ece0e;
L_124ecb9e:;
  /* 124ecb9e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124ecba1 push eax */
  push32((uint32_t)(EAX));
  /* 124ecba2 mov ecx, dword ptr [0x1250ce3c] */
  ECX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecba8 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecba9 call 0x124ef090 */
  push32(0x124ecbaeu); f_124ef090();
  /* 124ecbae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecbb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecbb3 jne 0x124ecbe0 */
  if (!C.zf) goto L_124ecbe0;
  /* 124ecbb5 mov edx, dword ptr [0x1250ce44] */
  EDX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecbbb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 124ecbc1 mov dword ptr [0x1250ce44], edx */
  w32((uint32_t)(0x1250ce44), (EDX));
  /* 124ecbc7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecbca mov dword ptr [0x1250ce48], eax */
  w32((uint32_t)(0x1250ce48), (EAX));
  /* 124ecbcf mov ecx, dword ptr [0x1250ce48] */
  ECX = (r32((uint32_t)(0x1250ce48)));
  /* 124ecbd5 mov dword ptr [0x1250ce2c], ecx */
  w32((uint32_t)(0x1250ce2c), (ECX));
  /* 124ecbdb jmp 0x124ecc7f */
  goto L_124ecc7f;
L_124ecbe0:;
  /* 124ecbe0 mov edx, dword ptr [0x1250ce44] */
  EDX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecbe6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 124ecbe9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ecbeb jne 0x124ecc7f */
  if (!C.zf) goto L_124ecc7f;
  /* 124ecbf1 cmp dword ptr [0x1250ce34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecbf8 je 0x124ecc4d */
  if (C.zf) goto L_124ecc4d;
  /* 124ecbfa mov eax, dword ptr [0x1250ce34] */
  EAX = (r32((uint32_t)(0x1250ce34)));
  /* 124ecbff push eax */
  push32((uint32_t)(EAX));
  /* 124ecc00 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124ecc03 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecc04 mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecc0a push edx */
  push32((uint32_t)(EDX));
  /* 124ecc0b call 0x124ef160 */
  push32(0x124ecc10u); f_124ef160();
  /* 124ecc10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecc13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecc15 jne 0x124ecc4d */
  if (!C.zf) goto L_124ecc4d;
  /* 124ecc17 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecc1c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 124ecc1e mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
  /* 124ecc23 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecc26 mov dword ptr [0x1250ce48], ecx */
  w32((uint32_t)(0x1250ce48), (ECX));
  /* 124ecc2c mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecc32 push edx */
  push32((uint32_t)(EDX));
  /* 124ecc33 call 0x124e37f0 */
  push32(0x124ecc38u); f_124e37f0();
  /* 124ecc38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecc3b cmp eax, dword ptr [0x1250ce34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250ce34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecc41 jne 0x124ecc4b */
  if (!C.zf) goto L_124ecc4b;
  /* 124ecc43 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecc46 mov dword ptr [0x1250ce2c], eax */
  w32((uint32_t)(0x1250ce2c), (EAX));
L_124ecc4b:;
  /* 124ecc4b jmp 0x124ecc7f */
  goto L_124ecc7f;
L_124ecc4d:;
  /* 124ecc4d mov ecx, dword ptr [0x1250ce44] */
  ECX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecc53 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124ecc56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ecc58 jne 0x124ecc7f */
  if (!C.zf) goto L_124ecc7f;
  /* 124ecc5a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecc5d push edx */
  push32((uint32_t)(EDX));
  /* 124ecc5e call 0x124ed190 */
  push32(0x124ecc63u); f_124ed190();
  /* 124ecc63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecc66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecc68 je 0x124ecc7f */
  if (C.zf) goto L_124ecc7f;
  /* 124ecc6a mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecc6f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 124ecc71 mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
  /* 124ecc76 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecc79 mov dword ptr [0x1250ce48], ecx */
  w32((uint32_t)(0x1250ce48), (ECX));
L_124ecc7f:;
  /* 124ecc7f mov edx, dword ptr [0x1250ce44] */
  EDX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecc85 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 124ecc8b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecc91 je 0x124ece01 */
  if (C.zf) goto L_124ece01;
  /* 124ecc97 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124ecc99 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124ecc9c push eax */
  push32((uint32_t)(EAX));
  /* 124ecc9d mov ecx, dword ptr [0x1250ce38] */
  ECX = (r32((uint32_t)(0x1250ce38)));
  /* 124ecca3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ecca5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecca7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 124eccad add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eccb3 push ecx */
  push32((uint32_t)(ECX));
  /* 124eccb4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124eccb7 push edx */
  push32((uint32_t)(EDX));
  /* 124eccb8 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124eccbeu);
  /* 124eccbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124eccc0 jne 0x124eccd6 */
  if (!C.zf) goto L_124eccd6;
  /* 124eccc2 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
  /* 124ecccc mov eax, 1 */
  EAX = (0x1u);
  /* 124eccd1 jmp 0x124ece0e */
  goto L_124ece0e;
L_124eccd6:;
  /* 124eccd6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124eccd9 push eax */
  push32((uint32_t)(EAX));
  /* 124eccda mov ecx, dword ptr [0x1250ce3c] */
  ECX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecce0 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecce1 call 0x124ef090 */
  push32(0x124ecce6u); f_124ef090();
  /* 124ecce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecceb jne 0x124ecda0 */
  if (!C.zf) goto L_124ecda0;
  /* 124eccf1 mov edx, dword ptr [0x1250ce44] */
  EDX = (r32((uint32_t)(0x1250ce44)));
  /* 124eccf7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 124eccfa mov dword ptr [0x1250ce44], edx */
  w32((uint32_t)(0x1250ce44), (EDX));
  /* 124ecd00 cmp dword ptr [0x1250ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecd07 je 0x124ecd2a */
  if (C.zf) goto L_124ecd2a;
  /* 124ecd09 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecd0e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 124ecd11 mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
  /* 124ecd16 cmp dword ptr [0x1250ce2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecd1d jne 0x124ecd28 */
  if (!C.zf) goto L_124ecd28;
  /* 124ecd1f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecd22 mov dword ptr [0x1250ce2c], ecx */
  w32((uint32_t)(0x1250ce2c), (ECX));
L_124ecd28:;
  /* 124ecd28 jmp 0x124ecd9e */
  goto L_124ecd9e;
L_124ecd2a:;
  /* 124ecd2a cmp dword ptr [0x1250ce34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecd31 je 0x124ecd7f */
  if (C.zf) goto L_124ecd7f;
  /* 124ecd33 mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecd39 push edx */
  push32((uint32_t)(EDX));
  /* 124ecd3a call 0x124e37f0 */
  push32(0x124ecd3fu); f_124e37f0();
  /* 124ecd3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecd42 cmp eax, dword ptr [0x1250ce34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250ce34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecd48 jne 0x124ecd7f */
  if (!C.zf) goto L_124ecd7f;
  /* 124ecd4a push 1 */
  push32((uint32_t)(0x1u));
  /* 124ecd4c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecd4f push eax */
  push32((uint32_t)(EAX));
  /* 124ecd50 call 0x124ed1e0 */
  push32(0x124ecd55u); f_124ed1e0();
  /* 124ecd55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecd5a je 0x124ecd7d */
  if (C.zf) goto L_124ecd7d;
  /* 124ecd5c mov ecx, dword ptr [0x1250ce44] */
  ECX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecd62 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 124ecd65 mov dword ptr [0x1250ce44], ecx */
  w32((uint32_t)(0x1250ce44), (ECX));
  /* 124ecd6b cmp dword ptr [0x1250ce2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecd72 jne 0x124ecd7d */
  if (!C.zf) goto L_124ecd7d;
  /* 124ecd74 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecd77 mov dword ptr [0x1250ce2c], edx */
  w32((uint32_t)(0x1250ce2c), (EDX));
L_124ecd7d:;
  /* 124ecd7d jmp 0x124ecd9e */
  goto L_124ecd9e;
L_124ecd7f:;
  /* 124ecd7f mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecd84 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 124ecd87 mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
  /* 124ecd8c cmp dword ptr [0x1250ce2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecd93 jne 0x124ecd9e */
  if (!C.zf) goto L_124ecd9e;
  /* 124ecd95 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecd98 mov dword ptr [0x1250ce2c], ecx */
  w32((uint32_t)(0x1250ce2c), (ECX));
L_124ecd9e:;
  /* 124ecd9e jmp 0x124ece01 */
  goto L_124ece01;
L_124ecda0:;
  /* 124ecda0 cmp dword ptr [0x1250ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecda7 jne 0x124ece01 */
  if (!C.zf) goto L_124ece01;
  /* 124ecda9 cmp dword ptr [0x1250ce34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecdb0 je 0x124ece01 */
  if (C.zf) goto L_124ece01;
  /* 124ecdb2 mov edx, dword ptr [0x1250ce34] */
  EDX = (r32((uint32_t)(0x1250ce34)));
  /* 124ecdb8 push edx */
  push32((uint32_t)(EDX));
  /* 124ecdb9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 124ecdbc push eax */
  push32((uint32_t)(EAX));
  /* 124ecdbd mov ecx, dword ptr [0x1250ce3c] */
  ECX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecdc4 call 0x124ef160 */
  push32(0x124ecdc9u); f_124ef160();
  /* 124ecdc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecdcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecdce jne 0x124ece01 */
  if (!C.zf) goto L_124ece01;
  /* 124ecdd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ecdd2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecdd5 push edx */
  push32((uint32_t)(EDX));
  /* 124ecdd6 call 0x124ed1e0 */
  push32(0x124ecddbu); f_124ed1e0();
  /* 124ecddb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecdde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecde0 je 0x124ece01 */
  if (C.zf) goto L_124ece01;
  /* 124ecde2 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecde7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 124ecdea mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
  /* 124ecdef cmp dword ptr [0x1250ce2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecdf6 jne 0x124ece01 */
  if (!C.zf) goto L_124ece01;
  /* 124ecdf8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecdfb mov dword ptr [0x1250ce2c], ecx */
  w32((uint32_t)(0x1250ce2c), (ECX));
L_124ece01:;
  /* 124ece01 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ece06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124ece09 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ece0b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ece0d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_124ece0e:;
  /* 124ece0e mov esp, ebp */
  ESP = (EBP);
  /* 124ece10 pop ebp */
  EBP = (pop32());
  /* 124ece11 ret 4 */
  ESPCHK(0x124ecaf0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001ce20 @ 0x124ece20 (116 bytes, 33 insns) */
void f_124ece20(void) {
  FTRACE(0x124ece20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ece20 push ebp */
  push32((uint32_t)(EBP));
  /* 124ece21 mov ebp, esp */
  EBP = (ESP);
  /* 124ece23 push ecx */
  push32((uint32_t)(ECX));
  /* 124ece24 mov eax, dword ptr [0x1250ce3c] */
  EAX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ece29 push eax */
  push32((uint32_t)(EAX));
  /* 124ece2a call 0x124e37f0 */
  push32(0x124ece2fu); f_124e37f0();
  /* 124ece2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ece32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ece34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ece37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124ece3a mov dword ptr [0x1250ce38], ecx */
  w32((uint32_t)(0x1250ce38), (ECX));
  /* 124ece40 cmp dword ptr [0x1250ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ece47 je 0x124ece52 */
  if (C.zf) goto L_124ece52;
  /* 124ece49 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 124ece50 jmp 0x124ece64 */
  goto L_124ece64;
L_124ece52:;
  /* 124ece52 mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ece58 push edx */
  push32((uint32_t)(EDX));
  /* 124ece59 call 0x124ed4d0 */
  push32(0x124ece5eu); f_124ed4d0();
  /* 124ece5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ece61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124ece64:;
  /* 124ece64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ece67 mov dword ptr [0x1250ce34], eax */
  w32((uint32_t)(0x1250ce34), (EAX));
  /* 124ece6c push 1 */
  push32((uint32_t)(0x1u));
  /* 124ece6e push 0x124ecea0 */
  push32((uint32_t)(0x124ecea0u));
  /* 124ece73 call dword ptr [0x1250f304] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f304))), 0x124ece79u);
  /* 124ece79 mov ecx, dword ptr [0x1250ce44] */
  ECX = (r32((uint32_t)(0x1250ce44)));
  /* 124ece7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 124ece82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ece84 jne 0x124ece90 */
  if (!C.zf) goto L_124ece90;
  /* 124ece86 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
L_124ece90:;
  /* 124ece90 mov esp, ebp */
  ESP = (EBP);
  /* 124ece92 pop ebp */
  EBP = (pop32());
  /* 124ece93 ret  */
  ESPCHK(0x124ece20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cea0 @ 0x124ecea0 (287 bytes, 86 insns) */
void f_124ecea0(void) {
  FTRACE(0x124ecea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ecea0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ecea1 mov ebp, esp */
  EBP = (ESP);
  /* 124ecea3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ecea9 push eax */
  push32((uint32_t)(EAX));
  /* 124eceaa call 0x124ed450 */
  push32(0x124eceafu); f_124ed450();
  /* 124eceaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124eceb2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124eceb5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124eceb7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124eceba push ecx */
  push32((uint32_t)(ECX));
  /* 124ecebb mov edx, dword ptr [0x1250ce38] */
  EDX = (r32((uint32_t)(0x1250ce38)));
  /* 124ecec1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ecec3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecec5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 124ececb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124eced1 push edx */
  push32((uint32_t)(EDX));
  /* 124eced2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124eced5 push eax */
  push32((uint32_t)(EAX));
  /* 124eced6 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ecedcu);
  /* 124ecedc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecede jne 0x124ecef4 */
  if (!C.zf) goto L_124ecef4;
  /* 124ecee0 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
  /* 124eceea mov eax, 1 */
  EAX = (0x1u);
  /* 124eceef jmp 0x124ecfb9 */
  goto L_124ecfb9;
L_124ecef4:;
  /* 124ecef4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124ecef7 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecef8 mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecefe push edx */
  push32((uint32_t)(EDX));
  /* 124eceff call 0x124ef090 */
  push32(0x124ecf04u); f_124ef090();
  /* 124ecf04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecf07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecf09 jne 0x124ecf49 */
  if (!C.zf) goto L_124ecf49;
  /* 124ecf0b cmp dword ptr [0x1250ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecf12 jne 0x124ecf26 */
  if (!C.zf) goto L_124ecf26;
  /* 124ecf14 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ecf16 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecf19 push eax */
  push32((uint32_t)(EAX));
  /* 124ecf1a call 0x124ed1e0 */
  push32(0x124ecf1fu); f_124ed1e0();
  /* 124ecf1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecf22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecf24 je 0x124ecf47 */
  if (C.zf) goto L_124ecf47;
L_124ecf26:;
  /* 124ecf26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecf29 mov dword ptr [0x1250ce48], ecx */
  w32((uint32_t)(0x1250ce48), (ECX));
  /* 124ecf2f mov edx, dword ptr [0x1250ce48] */
  EDX = (r32((uint32_t)(0x1250ce48)));
  /* 124ecf35 mov dword ptr [0x1250ce2c], edx */
  w32((uint32_t)(0x1250ce2c), (EDX));
  /* 124ecf3b mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecf40 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 124ecf42 mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
L_124ecf47:;
  /* 124ecf47 jmp 0x124ecfac */
  goto L_124ecfac;
L_124ecf49:;
  /* 124ecf49 cmp dword ptr [0x1250ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecf50 jne 0x124ecfac */
  if (!C.zf) goto L_124ecfac;
  /* 124ecf52 cmp dword ptr [0x1250ce34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1250ce34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecf59 je 0x124ecfac */
  if (C.zf) goto L_124ecfac;
  /* 124ecf5b mov ecx, dword ptr [0x1250ce34] */
  ECX = (r32((uint32_t)(0x1250ce34)));
  /* 124ecf61 push ecx */
  push32((uint32_t)(ECX));
  /* 124ecf62 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 124ecf65 push edx */
  push32((uint32_t)(EDX));
  /* 124ecf66 mov eax, dword ptr [0x1250ce3c] */
  EAX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ecf6b push eax */
  push32((uint32_t)(EAX));
  /* 124ecf6c call 0x124ef160 */
  push32(0x124ecf71u); f_124ef160();
  /* 124ecf71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecf74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecf76 jne 0x124ecfac */
  if (!C.zf) goto L_124ecfac;
  /* 124ecf78 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ecf7a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecf7d push ecx */
  push32((uint32_t)(ECX));
  /* 124ecf7e call 0x124ed1e0 */
  push32(0x124ecf83u); f_124ed1e0();
  /* 124ecf83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecf86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ecf88 je 0x124ecfac */
  if (C.zf) goto L_124ecfac;
  /* 124ecf8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ecf8d mov dword ptr [0x1250ce48], edx */
  w32((uint32_t)(0x1250ce48), (EDX));
  /* 124ecf93 mov eax, dword ptr [0x1250ce48] */
  EAX = (r32((uint32_t)(0x1250ce48)));
  /* 124ecf98 mov dword ptr [0x1250ce2c], eax */
  w32((uint32_t)(0x1250ce2c), (EAX));
  /* 124ecf9d mov ecx, dword ptr [0x1250ce44] */
  ECX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecfa3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 124ecfa6 mov dword ptr [0x1250ce44], ecx */
  w32((uint32_t)(0x1250ce44), (ECX));
L_124ecfac:;
  /* 124ecfac mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecfb1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124ecfb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ecfb6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ecfb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_124ecfb9:;
  /* 124ecfb9 mov esp, ebp */
  ESP = (EBP);
  /* 124ecfbb pop ebp */
  EBP = (pop32());
  /* 124ecfbc ret 4 */
  ESPCHK(0x124ecea0u, _esp0);
  ESP += 8; return;
}

/* FUN_1001cfc0 @ 0x124ecfc0 (69 bytes, 20 insns) */
void f_124ecfc0(void) {
  FTRACE(0x124ecfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ecfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ecfc1 mov ebp, esp */
  EBP = (ESP);
  /* 124ecfc3 mov eax, dword ptr [0x1250ce40] */
  EAX = (r32((uint32_t)(0x1250ce40)));
  /* 124ecfc8 push eax */
  push32((uint32_t)(EAX));
  /* 124ecfc9 call 0x124e37f0 */
  push32(0x124ecfceu); f_124e37f0();
  /* 124ecfce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ecfd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ecfd3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ecfd6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 124ecfd9 mov dword ptr [0x1250ce30], ecx */
  w32((uint32_t)(0x1250ce30), (ECX));
  /* 124ecfdf push 1 */
  push32((uint32_t)(0x1u));
  /* 124ecfe1 push 0x124ed010 */
  push32((uint32_t)(0x124ed010u));
  /* 124ecfe6 call dword ptr [0x1250f304] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f304))), 0x124ecfecu);
  /* 124ecfec mov edx, dword ptr [0x1250ce44] */
  EDX = (r32((uint32_t)(0x1250ce44)));
  /* 124ecff2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124ecff5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ecff7 jne 0x124ed003 */
  if (!C.zf) goto L_124ed003;
  /* 124ecff9 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
L_124ed003:;
  /* 124ed003 pop ebp */
  EBP = (pop32());
  /* 124ed004 ret  */
  ESPCHK(0x124ecfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d010 @ 0x124ed010 (172 bytes, 54 insns) */
void f_124ed010(void) {
  FTRACE(0x124ed010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed010 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed011 mov ebp, esp */
  EBP = (ESP);
  /* 124ed013 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed019 push eax */
  push32((uint32_t)(EAX));
  /* 124ed01a call 0x124ed450 */
  push32(0x124ed01fu); f_124ed450();
  /* 124ed01f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed022 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124ed025 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124ed027 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124ed02a push ecx */
  push32((uint32_t)(ECX));
  /* 124ed02b mov edx, dword ptr [0x1250ce30] */
  EDX = (r32((uint32_t)(0x1250ce30)));
  /* 124ed031 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ed033 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed035 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 124ed03b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed041 push edx */
  push32((uint32_t)(EDX));
  /* 124ed042 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ed045 push eax */
  push32((uint32_t)(EAX));
  /* 124ed046 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ed04cu);
  /* 124ed04c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed04e jne 0x124ed061 */
  if (!C.zf) goto L_124ed061;
  /* 124ed050 mov dword ptr [0x1250ce44], 0 */
  w32((uint32_t)(0x1250ce44), (0x0u));
  /* 124ed05a mov eax, 1 */
  EAX = (0x1u);
  /* 124ed05f jmp 0x124ed0b6 */
  goto L_124ed0b6;
L_124ed061:;
  /* 124ed061 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124ed064 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed065 mov edx, dword ptr [0x1250ce40] */
  EDX = (r32((uint32_t)(0x1250ce40)));
  /* 124ed06b push edx */
  push32((uint32_t)(EDX));
  /* 124ed06c call 0x124ef090 */
  push32(0x124ed071u); f_124ef090();
  /* 124ed071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed076 jne 0x124ed0a9 */
  if (!C.zf) goto L_124ed0a9;
  /* 124ed078 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ed07b push eax */
  push32((uint32_t)(EAX));
  /* 124ed07c call 0x124ed190 */
  push32(0x124ed081u); f_124ed190();
  /* 124ed081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed086 je 0x124ed0a9 */
  if (C.zf) goto L_124ed0a9;
  /* 124ed088 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124ed08b mov dword ptr [0x1250ce48], ecx */
  w32((uint32_t)(0x1250ce48), (ECX));
  /* 124ed091 mov edx, dword ptr [0x1250ce48] */
  EDX = (r32((uint32_t)(0x1250ce48)));
  /* 124ed097 mov dword ptr [0x1250ce2c], edx */
  w32((uint32_t)(0x1250ce2c), (EDX));
  /* 124ed09d mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ed0a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 124ed0a4 mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
L_124ed0a9:;
  /* 124ed0a9 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ed0ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124ed0b1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124ed0b3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed0b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_124ed0b6:;
  /* 124ed0b6 mov esp, ebp */
  ESP = (EBP);
  /* 124ed0b8 pop ebp */
  EBP = (pop32());
  /* 124ed0b9 ret 4 */
  ESPCHK(0x124ed010u, _esp0);
  ESP += 8; return;
}

/* FUN_1001d0c0 @ 0x124ed0c0 (43 bytes, 11 insns) */
void f_124ed0c0(void) {
  FTRACE(0x124ed0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed0c1 mov ebp, esp */
  EBP = (ESP);
  /* 124ed0c3 mov eax, dword ptr [0x1250ce44] */
  EAX = (r32((uint32_t)(0x1250ce44)));
  /* 124ed0c8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 124ed0cd mov dword ptr [0x1250ce44], eax */
  w32((uint32_t)(0x1250ce44), (EAX));
  /* 124ed0d2 call dword ptr [0x1250f2f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2f4))), 0x124ed0d8u);
  /* 124ed0d8 mov dword ptr [0x1250ce48], eax */
  w32((uint32_t)(0x1250ce48), (EAX));
  /* 124ed0dd mov ecx, dword ptr [0x1250ce48] */
  ECX = (r32((uint32_t)(0x1250ce48)));
  /* 124ed0e3 mov dword ptr [0x1250ce2c], ecx */
  w32((uint32_t)(0x1250ce2c), (ECX));
  /* 124ed0e9 pop ebp */
  EBP = (pop32());
  /* 124ed0ea ret  */
  ESPCHK(0x124ed0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d0f0 @ 0x124ed0f0 (155 bytes, 57 insns) */
void f_124ed0f0(void) {
  FTRACE(0x124ed0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed0f1 mov ebp, esp */
  EBP = (ESP);
  /* 124ed0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed0f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed0fa je 0x124ed11b */
  if (C.zf) goto L_124ed11b;
  /* 124ed0fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed0ff movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124ed102 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ed104 je 0x124ed11b */
  if (C.zf) goto L_124ed11b;
  /* 124ed106 push 0x12509184 */
  push32((uint32_t)(0x12509184u));
  /* 124ed10b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed10e push edx */
  push32((uint32_t)(EDX));
  /* 124ed10f call 0x124ec650 */
  push32(0x124ed114u); f_124ec650();
  /* 124ed114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed119 jne 0x124ed143 */
  if (!C.zf) goto L_124ed143;
L_124ed11b:;
  /* 124ed11b push 8 */
  push32((uint32_t)(0x8u));
  /* 124ed11d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124ed120 push eax */
  push32((uint32_t)(EAX));
  /* 124ed121 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 124ed126 mov ecx, dword ptr [0x1250ce48] */
  ECX = (r32((uint32_t)(0x1250ce48)));
  /* 124ed12c push ecx */
  push32((uint32_t)(ECX));
  /* 124ed12d call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ed133u);
  /* 124ed133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed135 jne 0x124ed13b */
  if (!C.zf) goto L_124ed13b;
  /* 124ed137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ed139 jmp 0x124ed187 */
  goto L_124ed187;
L_124ed13b:;
  /* 124ed13b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 124ed13e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124ed141 jmp 0x124ed17b */
  goto L_124ed17b;
L_124ed143:;
  /* 124ed143 push 0x12509180 */
  push32((uint32_t)(0x12509180u));
  /* 124ed148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed14b push eax */
  push32((uint32_t)(EAX));
  /* 124ed14c call 0x124ec650 */
  push32(0x124ed151u); f_124ec650();
  /* 124ed151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed156 jne 0x124ed17b */
  if (!C.zf) goto L_124ed17b;
  /* 124ed158 push 8 */
  push32((uint32_t)(0x8u));
  /* 124ed15a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124ed15d push ecx */
  push32((uint32_t)(ECX));
  /* 124ed15e push 0xb */
  push32((uint32_t)(0xbu));
  /* 124ed160 mov edx, dword ptr [0x1250ce48] */
  EDX = (r32((uint32_t)(0x1250ce48)));
  /* 124ed166 push edx */
  push32((uint32_t)(EDX));
  /* 124ed167 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ed16du);
  /* 124ed16d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed16f jne 0x124ed175 */
  if (!C.zf) goto L_124ed175;
  /* 124ed171 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ed173 jmp 0x124ed187 */
  goto L_124ed187;
L_124ed175:;
  /* 124ed175 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124ed178 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124ed17b:;
  /* 124ed17b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed17e push ecx */
  push32((uint32_t)(ECX));
  /* 124ed17f call 0x124ef270 */
  push32(0x124ed184u); f_124ef270();
  /* 124ed184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124ed187:;
  /* 124ed187 mov esp, ebp */
  ESP = (EBP);
  /* 124ed189 pop ebp */
  EBP = (pop32());
  /* 124ed18a ret  */
  ESPCHK(0x124ed0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d190 @ 0x124ed190 (79 bytes, 26 insns) */
void f_124ed190(void) {
  FTRACE(0x124ed190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed190 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed191 mov ebp, esp */
  EBP = (ESP);
  /* 124ed193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed196 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 124ed19a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 124ed19e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ed1a5 jmp 0x124ed1b0 */
  goto L_124ed1b0;
L_124ed1a7:;
  /* 124ed1a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed1aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed1ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124ed1b0:;
  /* 124ed1b0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed1b4 jae 0x124ed1d6 */
  if (!C.cf) goto L_124ed1d6;
  /* 124ed1b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed1b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124ed1bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed1c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124ed1c4 mov cx, word ptr [eax*2 + 0x1250b9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1250b9c4)));
  /* 124ed1cc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed1ce jne 0x124ed1d4 */
  if (!C.zf) goto L_124ed1d4;
  /* 124ed1d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ed1d2 jmp 0x124ed1db */
  goto L_124ed1db;
L_124ed1d4:;
  /* 124ed1d4 jmp 0x124ed1a7 */
  goto L_124ed1a7;
L_124ed1d6:;
  /* 124ed1d6 mov eax, 1 */
  EAX = (0x1u);
L_124ed1db:;
  /* 124ed1db mov esp, ebp */
  ESP = (EBP);
  /* 124ed1dd pop ebp */
  EBP = (pop32());
  /* 124ed1de ret  */
  ESPCHK(0x124ed190u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d1e0 @ 0x124ed1e0 (135 bytes, 48 insns) */
void f_124ed1e0(void) {
  FTRACE(0x124ed1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed1e1 mov ebp, esp */
  EBP = (ESP);
  /* 124ed1e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed1e6 push esi */
  push32((uint32_t)(ESI));
  /* 124ed1e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed1ea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ed1ef and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ed1f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ed1f9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 124ed1fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ed201 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ed204 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124ed206 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 124ed209 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed20a push 1 */
  push32((uint32_t)(0x1u));
  /* 124ed20c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed20f push edx */
  push32((uint32_t)(EDX));
  /* 124ed210 call dword ptr [0x1250ce4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250ce4c))), 0x124ed216u);
  /* 124ed216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed218 jne 0x124ed21e */
  if (!C.zf) goto L_124ed21e;
  /* 124ed21a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ed21c jmp 0x124ed262 */
  goto L_124ed262;
L_124ed21e:;
  /* 124ed21e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 124ed221 push eax */
  push32((uint32_t)(EAX));
  /* 124ed222 call 0x124ed450 */
  push32(0x124ed227u); f_124ed450();
  /* 124ed227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed22a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed22d je 0x124ed25d */
  if (C.zf) goto L_124ed25d;
  /* 124ed22f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed233 je 0x124ed25d */
  if (C.zf) goto L_124ed25d;
  /* 124ed235 mov ecx, dword ptr [0x1250ce3c] */
  ECX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ed23b push ecx */
  push32((uint32_t)(ECX));
  /* 124ed23c call 0x124ed4d0 */
  push32(0x124ed241u); f_124ed4d0();
  /* 124ed241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed244 mov esi, eax */
  ESI = (EAX);
  /* 124ed246 mov edx, dword ptr [0x1250ce3c] */
  EDX = (r32((uint32_t)(0x1250ce3c)));
  /* 124ed24c push edx */
  push32((uint32_t)(EDX));
  /* 124ed24d call 0x124e37f0 */
  push32(0x124ed252u); f_124e37f0();
  /* 124ed252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed255 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed257 jne 0x124ed25d */
  if (!C.zf) goto L_124ed25d;
  /* 124ed259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ed25b jmp 0x124ed262 */
  goto L_124ed262;
L_124ed25d:;
  /* 124ed25d mov eax, 1 */
  EAX = (0x1u);
L_124ed262:;
  /* 124ed262 pop esi */
  ESI = (pop32());
  /* 124ed263 mov esp, ebp */
  ESP = (EBP);
  /* 124ed265 pop ebp */
  EBP = (pop32());
  /* 124ed266 ret  */
  ESPCHK(0x124ed1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d270 @ 0x124ed270 (77 bytes, 18 insns) */
void f_124ed270(void) {
  FTRACE(0x124ed270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed270 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed271 mov ebp, esp */
  EBP = (ESP);
  /* 124ed273 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed279 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 124ed283 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 124ed289 push eax */
  push32((uint32_t)(EAX));
  /* 124ed28a call dword ptr [0x1250f2f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2f0))), 0x124ed290u);
  /* 124ed290 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed292 je 0x124ed2a9 */
  if (C.zf) goto L_124ed2a9;
  /* 124ed294 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed29b jne 0x124ed2a9 */
  if (!C.zf) goto L_124ed2a9;
  /* 124ed29d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 124ed2a7 jmp 0x124ed2b3 */
  goto L_124ed2b3;
L_124ed2a9:;
  /* 124ed2a9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_124ed2b3:;
  /* 124ed2b3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 124ed2b9 mov esp, ebp */
  ESP = (EBP);
  /* 124ed2bb pop ebp */
  EBP = (pop32());
  /* 124ed2bc ret  */
  ESPCHK(0x124ed270u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x124ed2c0 (388 bytes, 118 insns) */
void f_124ed2c0(void) {
  FTRACE(0x124ed2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed2c1 mov ebp, esp */
  EBP = (ESP);
  /* 124ed2c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed2c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124ed2cd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 124ed2d4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124ed2db:;
  /* 124ed2db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed2de cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed2e1 jg 0x124ed428 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ed428;
  /* 124ed2e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124ed2ea add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed2ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124ed2ee sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed2f0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124ed2f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124ed2f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed2f8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed2fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed2fe cmp edx, dword ptr [ecx + 0x1250b520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1250b520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed304 jne 0x124ed3fe */
  if (!C.zf) goto L_124ed3fe;
  /* 124ed30a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ed30d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124ed310 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed314 ja 0x124ed337 */
  if ((!C.cf&&!C.zf)) goto L_124ed337;
  /* 124ed316 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed31a je 0x124ed3a9 */
  if (C.zf) goto L_124ed3a9;
  /* 124ed320 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed324 je 0x124ed354 */
  if (C.zf) goto L_124ed354;
  /* 124ed326 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed32a je 0x124ed376 */
  if (C.zf) goto L_124ed376;
  /* 124ed32c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed330 je 0x124ed398 */
  if (C.zf) goto L_124ed398;
  /* 124ed332 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed337:;
  /* 124ed337 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed33e je 0x124ed365 */
  if (C.zf) goto L_124ed365;
  /* 124ed340 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed347 je 0x124ed387 */
  if (C.zf) goto L_124ed387;
  /* 124ed349 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed350 je 0x124ed3ba */
  if (C.zf) goto L_124ed3ba;
  /* 124ed352 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed354:;
  /* 124ed354 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed357 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed35a add ecx, 0x1250b524 */
  { uint32_t _a=(ECX),_b=(0x1250b524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed360 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ed363 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed365:;
  /* 124ed365 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed368 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed36b mov eax, dword ptr [edx + 0x1250b52c] */
  EAX = (r32((uint32_t)(EDX + 0x1250b52c)));
  /* 124ed371 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ed374 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed376:;
  /* 124ed376 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed379 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed37c add ecx, 0x1250b530 */
  { uint32_t _a=(ECX),_b=(0x1250b530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed382 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ed385 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed387:;
  /* 124ed387 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed38a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed38d mov eax, dword ptr [edx + 0x1250b534] */
  EAX = (r32((uint32_t)(EDX + 0x1250b534)));
  /* 124ed393 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124ed396 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed398:;
  /* 124ed398 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed39b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed39e add ecx, 0x1250b538 */
  { uint32_t _a=(ECX),_b=(0x1250b538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed3a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ed3a7 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed3a9:;
  /* 124ed3a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed3ac imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed3af add edx, 0x1250b53c */
  { uint32_t _a=(EDX),_b=(0x1250b53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed3b5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124ed3b8 jmp 0x124ed3c8 */
  goto L_124ed3c8;
L_124ed3ba:;
  /* 124ed3ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed3bd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed3c0 add eax, 0x1250b544 */
  { uint32_t _a=(EAX),_b=(0x1250b544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed3c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124ed3c8:;
  /* 124ed3c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed3cc je 0x124ed3d4 */
  if (C.zf) goto L_124ed3d4;
  /* 124ed3ce cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed3d2 jge 0x124ed3d6 */
  if ((C.sf==C.of)) goto L_124ed3d6;
L_124ed3d4:;
  /* 124ed3d4 jmp 0x124ed428 */
  goto L_124ed428;
L_124ed3d6:;
  /* 124ed3d6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ed3d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed3dc push ecx */
  push32((uint32_t)(ECX));
  /* 124ed3dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed3e0 push edx */
  push32((uint32_t)(EDX));
  /* 124ed3e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ed3e4 push eax */
  push32((uint32_t)(EAX));
  /* 124ed3e5 call 0x124e41e0 */
  push32(0x124ed3eau); f_124e41e0();
  /* 124ed3ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed3ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ed3f0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed3f3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 124ed3f7 mov eax, 1 */
  EAX = (0x1u);
  /* 124ed3fc jmp 0x124ed43e */
  goto L_124ed43e;
L_124ed3fe:;
  /* 124ed3fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed401 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed407 cmp eax, dword ptr [edx + 0x1250b520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1250b520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed40d jae 0x124ed41a */
  if (!C.cf) goto L_124ed41a;
  /* 124ed40f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed412 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed415 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124ed418 jmp 0x124ed423 */
  goto L_124ed423;
L_124ed41a:;
  /* 124ed41a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124ed41d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed420 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124ed423:;
  /* 124ed423 jmp 0x124ed2db */
  goto L_124ed2db;
L_124ed428:;
  /* 124ed428 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124ed42b push eax */
  push32((uint32_t)(EAX));
  /* 124ed42c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124ed42f push ecx */
  push32((uint32_t)(ECX));
  /* 124ed430 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124ed433 push edx */
  push32((uint32_t)(EDX));
  /* 124ed434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed437 push eax */
  push32((uint32_t)(EAX));
  /* 124ed438 call dword ptr [0x1250f2fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2fc))), 0x124ed43eu);
L_124ed43e:;
  /* 124ed43e mov esp, ebp */
  ESP = (EBP);
  /* 124ed440 pop ebp */
  EBP = (pop32());
  /* 124ed441 ret 0x10 */
  ESPCHK(0x124ed2c0u, _esp0);
  ESP += 20; return;
}

/* FUN_1001d450 @ 0x124ed450 (118 bytes, 42 insns) */
void f_124ed450(void) {
  FTRACE(0x124ed450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed450 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed451 mov ebp, esp */
  EBP = (ESP);
  /* 124ed453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed456 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124ed45d:;
  /* 124ed45d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed460 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ed462 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 124ed465 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124ed469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed46c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed46f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124ed472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ed474 je 0x124ed4bf */
  if (C.zf) goto L_124ed4bf;
  /* 124ed476 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124ed47a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed47d jl 0x124ed492 */
  if ((C.sf!=C.of)) goto L_124ed492;
  /* 124ed47f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124ed483 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed486 jg 0x124ed492 */
  if ((!C.zf&&C.sf==C.of)) goto L_124ed492;
  /* 124ed488 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124ed48b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124ed48d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 124ed490 jmp 0x124ed4ac */
  goto L_124ed4ac;
L_124ed492:;
  /* 124ed492 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124ed496 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed499 jl 0x124ed4ac */
  if ((C.sf!=C.of)) goto L_124ed4ac;
  /* 124ed49b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124ed49f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed4a2 jg 0x124ed4ac */
  if ((!C.zf&&C.sf==C.of)) goto L_124ed4ac;
  /* 124ed4a4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 124ed4a7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 124ed4a9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_124ed4ac:;
  /* 124ed4ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed4af shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 124ed4b2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124ed4b6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 124ed4ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ed4bd jmp 0x124ed45d */
  goto L_124ed45d;
L_124ed4bf:;
  /* 124ed4bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed4c2 mov esp, ebp */
  ESP = (EBP);
  /* 124ed4c4 pop ebp */
  EBP = (pop32());
  /* 124ed4c5 ret  */
  ESPCHK(0x124ed450u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x124ed4d0 (101 bytes, 36 insns) */
void f_124ed4d0(void) {
  FTRACE(0x124ed4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed4d1 mov ebp, esp */
  EBP = (ESP);
  /* 124ed4d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124ed4d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124ed4dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed4e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124ed4e2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 124ed4e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed4eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124ed4ee:;
  /* 124ed4ee movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124ed4f2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed4f5 jl 0x124ed500 */
  if ((C.sf!=C.of)) goto L_124ed500;
  /* 124ed4f7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124ed4fb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed4fe jle 0x124ed512 */
  if ((C.zf||C.sf!=C.of)) goto L_124ed512;
L_124ed500:;
  /* 124ed500 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124ed504 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed507 jl 0x124ed52e */
  if ((C.sf!=C.of)) goto L_124ed52e;
  /* 124ed509 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 124ed50d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed510 jg 0x124ed52e */
  if ((!C.zf&&C.sf==C.of)) goto L_124ed52e;
L_124ed512:;
  /* 124ed512 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed518 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124ed51b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed51e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124ed520 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 124ed523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed526 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed529 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124ed52c jmp 0x124ed4ee */
  goto L_124ed4ee;
L_124ed52e:;
  /* 124ed52e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124ed531 mov esp, ebp */
  ESP = (EBP);
  /* 124ed533 pop ebp */
  EBP = (pop32());
  /* 124ed534 ret  */
  ESPCHK(0x124ed4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d540 @ 0x124ed540 (122 bytes, 39 insns) */
void f_124ed540(void) {
  FTRACE(0x124ed540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed540 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed541 mov ebp, esp */
  EBP = (ESP);
  /* 124ed543 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed547 cmp eax, dword ptr [0x1250e6dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1250e6dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed54d jae 0x124ed571 */
  if (!C.cf) goto L_124ed571;
  /* 124ed54f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed552 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124ed555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed558 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124ed55b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed55e mov eax, dword ptr [ecx*4 + 0x1250e5a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1250e5a0)));
  /* 124ed565 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124ed56a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124ed56d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ed56f jne 0x124ed58c */
  if (!C.zf) goto L_124ed58c;
L_124ed571:;
  /* 124ed571 call 0x124e8890 */
  push32(0x124ed576u); f_124e8890();
  /* 124ed576 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124ed57c call 0x124e88a0 */
  push32(0x124ed581u); f_124e88a0();
  /* 124ed581 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124ed587 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ed58a jmp 0x124ed5b6 */
  goto L_124ed5b6;
L_124ed58c:;
  /* 124ed58c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed58f push edx */
  push32((uint32_t)(EDX));
  /* 124ed590 call 0x124ea0b0 */
  push32(0x124ed595u); f_124ea0b0();
  /* 124ed595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed59b push eax */
  push32((uint32_t)(EAX));
  /* 124ed59c call 0x124ed5c0 */
  push32(0x124ed5a1u); f_124ed5c0();
  /* 124ed5a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed5a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124ed5a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed5aa push ecx */
  push32((uint32_t)(ECX));
  /* 124ed5ab call 0x124ea140 */
  push32(0x124ed5b0u); f_124ea140();
  /* 124ed5b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed5b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124ed5b6:;
  /* 124ed5b6 mov esp, ebp */
  ESP = (EBP);
  /* 124ed5b8 pop ebp */
  EBP = (pop32());
  /* 124ed5b9 ret  */
  ESPCHK(0x124ed540u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x124ed5c0 (170 bytes, 59 insns) */
void f_124ed5c0(void) {
  FTRACE(0x124ed5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed5c1 mov ebp, esp */
  EBP = (ESP);
  /* 124ed5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124ed5c4 push esi */
  push32((uint32_t)(ESI));
  /* 124ed5c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed5c8 push eax */
  push32((uint32_t)(EAX));
  /* 124ed5c9 call 0x124e9f30 */
  push32(0x124ed5ceu); f_124e9f30();
  /* 124ed5ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed5d1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed5d4 je 0x124ed613 */
  if (C.zf) goto L_124ed613;
  /* 124ed5d6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed5da je 0x124ed5e2 */
  if (C.zf) goto L_124ed5e2;
  /* 124ed5dc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed5e0 jne 0x124ed5fc */
  if (!C.zf) goto L_124ed5fc;
L_124ed5e2:;
  /* 124ed5e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124ed5e4 call 0x124e9f30 */
  push32(0x124ed5e9u); f_124e9f30();
  /* 124ed5e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed5ec mov esi, eax */
  ESI = (EAX);
  /* 124ed5ee push 2 */
  push32((uint32_t)(0x2u));
  /* 124ed5f0 call 0x124e9f30 */
  push32(0x124ed5f5u); f_124e9f30();
  /* 124ed5f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed5f8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed5fa je 0x124ed613 */
  if (C.zf) goto L_124ed613;
L_124ed5fc:;
  /* 124ed5fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed5ff push ecx */
  push32((uint32_t)(ECX));
  /* 124ed600 call 0x124e9f30 */
  push32(0x124ed605u); f_124e9f30();
  /* 124ed605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed608 push eax */
  push32((uint32_t)(EAX));
  /* 124ed609 call dword ptr [0x1250f2f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f2f8))), 0x124ed60fu);
  /* 124ed60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed611 je 0x124ed61c */
  if (C.zf) goto L_124ed61c;
L_124ed613:;
  /* 124ed613 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124ed61a jmp 0x124ed625 */
  goto L_124ed625;
L_124ed61c:;
  /* 124ed61c call dword ptr [0x1250f3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1250f3e8))), 0x124ed622u);
  /* 124ed622 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124ed625:;
  /* 124ed625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed628 push edx */
  push32((uint32_t)(EDX));
  /* 124ed629 call 0x124e9e50 */
  push32(0x124ed62eu); f_124e9e50();
  /* 124ed62e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed634 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124ed637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed63a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124ed63d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124ed640 mov edx, dword ptr [eax*4 + 0x1250e5a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1250e5a0)));
  /* 124ed647 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 124ed64c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed650 je 0x124ed663 */
  if (C.zf) goto L_124ed663;
  /* 124ed652 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124ed655 push eax */
  push32((uint32_t)(EAX));
  /* 124ed656 call 0x124e87f0 */
  push32(0x124ed65bu); f_124e87f0();
  /* 124ed65b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed65e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124ed661 jmp 0x124ed665 */
  goto L_124ed665;
L_124ed663:;
  /* 124ed663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124ed665:;
  /* 124ed665 pop esi */
  ESI = (pop32());
  /* 124ed666 mov esp, ebp */
  ESP = (EBP);
  /* 124ed668 pop ebp */
  EBP = (pop32());
  /* 124ed669 ret  */
  ESPCHK(0x124ed5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d670 @ 0x124ed670 (146 bytes, 52 insns) */
void f_124ed670(void) {
  FTRACE(0x124ed670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124ed670 push ebp */
  push32((uint32_t)(EBP));
  /* 124ed671 mov ebp, esp */
  EBP = (ESP);
  /* 124ed673 push ebx */
  push32((uint32_t)(EBX));
  /* 124ed674 push esi */
  push32((uint32_t)(ESI));
  /* 124ed675 push edi */
  push32((uint32_t)(EDI));
L_124ed676:;
  /* 124ed676 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed67a jne 0x124ed69a */
  if (!C.zf) goto L_124ed69a;
  /* 124ed67c push 0x12508ac0 */
  push32((uint32_t)(0x12508ac0u));
  /* 124ed681 push 0 */
  push32((uint32_t)(0x0u));
  /* 124ed683 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124ed685 push 0x12509188 */
  push32((uint32_t)(0x12509188u));
  /* 124ed68a push 2 */
  push32((uint32_t)(0x2u));
  /* 124ed68c call 0x124dfa80 */
  push32(0x124ed691u); f_124dfa80();
  /* 124ed691 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed694 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124ed697 jne 0x124ed69a */
  if (!C.zf) goto L_124ed69a;
  /* 124ed699 int3  */
  x86_unimpl("int3 @ 0x124ed699");
L_124ed69a:;
  /* 124ed69a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124ed69c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124ed69e jne 0x124ed676 */
  if (!C.zf) goto L_124ed676;
  /* 124ed6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ed6a6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 124ed6ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124ed6ae je 0x124ed6fd */
  if (C.zf) goto L_124ed6fd;
  /* 124ed6b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6b3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124ed6b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 124ed6b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124ed6bb je 0x124ed6fd */
  if (C.zf) goto L_124ed6fd;
  /* 124ed6bd push 2 */
  push32((uint32_t)(0x2u));
  /* 124ed6bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124ed6c5 push eax */
  push32((uint32_t)(EAX));
  /* 124ed6c6 call 0x124e1450 */
  push32(0x124ed6cbu); f_124e1450();
  /* 124ed6cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124ed6ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6d1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124ed6d4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 124ed6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6dd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 124ed6e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6e3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 124ed6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6ec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 124ed6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124ed6f6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_124ed6fd:;
  /* 124ed6fd pop edi */
  EDI = (pop32());
  /* 124ed6fe pop esi */
  ESI = (pop32());
  /* 124ed6ff pop ebx */
  EBX = (pop32());
  /* 124ed700 pop ebp */
  EBP = (pop32());
  /* 124ed701 ret  */
  ESPCHK(0x124ed670u, _esp0);
  ESP += 4; return;
}

