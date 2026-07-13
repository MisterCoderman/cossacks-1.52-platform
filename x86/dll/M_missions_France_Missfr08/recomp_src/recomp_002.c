#include "recomp.h"

/* FUN_10010d00 @ 0x107b0d00 (289 bytes, 97 insns) */
void f_107b0d00(void) {
  FTRACE(0x107b0d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0d00 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0d01 mov ebp, esp */
  EBP = (ESP);
  /* 107b0d03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0d06 push esi */
  push32((uint32_t)(ESI));
  /* 107b0d07 mov eax, dword ptr [0x107cec98] */
  EAX = (r32((uint32_t)(0x107cec98)));
  /* 107b0d0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b0d0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107b0d16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b0d1d jmp 0x107b0d28 */
  goto L_107b0d28;
L_107b0d1f:;
  /* 107b0d1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0d22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107b0d28:;
  /* 107b0d28 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0d2c jae 0x107b0d61 */
  if (!C.cf) goto L_107b0d61;
  /* 107b0d2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0d31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0d34 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107b0d37 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0d38 call 0x107a6de0 */
  push32(0x107b0d3du); f_107a6de0();
  /* 107b0d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d40 mov esi, eax */
  ESI = (EAX);
  /* 107b0d42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0d45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0d48 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 107b0d4c push ecx */
  push32((uint32_t)(ECX));
  /* 107b0d4d call 0x107a6de0 */
  push32(0x107b0d52u); f_107a6de0();
  /* 107b0d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d58 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107b0d5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b0d5f jmp 0x107b0d1f */
  goto L_107b0d1f;
L_107b0d61:;
  /* 107b0d61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b0d64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d67 push eax */
  push32((uint32_t)(EAX));
  /* 107b0d68 call 0x107a3f90 */
  push32(0x107b0d6du); f_107a3f90();
  /* 107b0d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b0d73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0d77 je 0x107b0e19 */
  if (C.zf) goto L_107b0e19;
  /* 107b0d7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0d80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b0d83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b0d8a jmp 0x107b0d95 */
  goto L_107b0d95;
L_107b0d8c:;
  /* 107b0d8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0d8f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0d92 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107b0d95:;
  /* 107b0d95 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0d99 jae 0x107b0e0a */
  if (!C.cf) goto L_107b0e0a;
  /* 107b0d9b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0d9e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 107b0da1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0da4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0da7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b0daa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0dad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0db0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107b0db3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0db4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0db7 push edx */
  push32((uint32_t)(EDX));
  /* 107b0db8 call 0x107a6f60 */
  push32(0x107b0dbdu); f_107a6f60();
  /* 107b0dbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0dc0 push eax */
  push32((uint32_t)(EAX));
  /* 107b0dc1 call 0x107a6de0 */
  push32(0x107b0dc6u); f_107a6de0();
  /* 107b0dc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0dc9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0dcc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0dce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b0dd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0dd4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 107b0dd7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0dda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0ddd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b0de0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0de3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0de6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 107b0dea push eax */
  push32((uint32_t)(EAX));
  /* 107b0deb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0dee push ecx */
  push32((uint32_t)(ECX));
  /* 107b0def call 0x107a6f60 */
  push32(0x107b0df4u); f_107a6f60();
  /* 107b0df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0df7 push eax */
  push32((uint32_t)(EAX));
  /* 107b0df8 call 0x107a6de0 */
  push32(0x107b0dfdu); f_107a6de0();
  /* 107b0dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0e03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e05 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b0e08 jmp 0x107b0d8c */
  goto L_107b0d8c;
L_107b0e0a:;
  /* 107b0e0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0e0d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107b0e10 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0e13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e16 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107b0e19:;
  /* 107b0e19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0e1c pop esi */
  ESI = (pop32());
  /* 107b0e1d mov esp, ebp */
  ESP = (EBP);
  /* 107b0e1f pop ebp */
  EBP = (pop32());
  /* 107b0e20 ret  */
  ESPCHK(0x107b0d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x107b0e30 (291 bytes, 97 insns) */
void f_107b0e30(void) {
  FTRACE(0x107b0e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0e30 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0e31 mov ebp, esp */
  EBP = (ESP);
  /* 107b0e33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0e36 push esi */
  push32((uint32_t)(ESI));
  /* 107b0e37 mov eax, dword ptr [0x107cec98] */
  EAX = (r32((uint32_t)(0x107cec98)));
  /* 107b0e3c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b0e3f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107b0e46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b0e4d jmp 0x107b0e58 */
  goto L_107b0e58;
L_107b0e4f:;
  /* 107b0e4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0e52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e55 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107b0e58:;
  /* 107b0e58 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0e5c jae 0x107b0e92 */
  if (!C.cf) goto L_107b0e92;
  /* 107b0e5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0e61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0e64 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 107b0e68 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0e69 call 0x107a6de0 */
  push32(0x107b0e6eu); f_107a6de0();
  /* 107b0e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e71 mov esi, eax */
  ESI = (EAX);
  /* 107b0e73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0e76 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0e79 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 107b0e7d push ecx */
  push32((uint32_t)(ECX));
  /* 107b0e7e call 0x107a6de0 */
  push32(0x107b0e83u); f_107a6de0();
  /* 107b0e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e86 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e89 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107b0e8d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b0e90 jmp 0x107b0e4f */
  goto L_107b0e4f;
L_107b0e92:;
  /* 107b0e92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b0e95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0e98 push eax */
  push32((uint32_t)(EAX));
  /* 107b0e99 call 0x107a3f90 */
  push32(0x107b0e9eu); f_107a3f90();
  /* 107b0e9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0ea1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b0ea4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0ea8 je 0x107b0f4b */
  if (C.zf) goto L_107b0f4b;
  /* 107b0eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0eb1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b0eb4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b0ebb jmp 0x107b0ec6 */
  goto L_107b0ec6;
L_107b0ebd:;
  /* 107b0ebd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0ec0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0ec3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107b0ec6:;
  /* 107b0ec6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0eca jae 0x107b0f3c */
  if (!C.cf) goto L_107b0f3c;
  /* 107b0ecc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0ecf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 107b0ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0ed8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b0edb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0ede mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0ee1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 107b0ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0ee6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0ee9 push edx */
  push32((uint32_t)(EDX));
  /* 107b0eea call 0x107a6f60 */
  push32(0x107b0eefu); f_107a6f60();
  /* 107b0eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0ef2 push eax */
  push32((uint32_t)(EAX));
  /* 107b0ef3 call 0x107a6de0 */
  push32(0x107b0ef8u); f_107a6de0();
  /* 107b0ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0efb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0efe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b0f03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0f06 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 107b0f09 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0f0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b0f12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0f15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0f18 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107b0f1c push eax */
  push32((uint32_t)(EAX));
  /* 107b0f1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0f20 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0f21 call 0x107a6f60 */
  push32(0x107b0f26u); f_107a6f60();
  /* 107b0f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f29 push eax */
  push32((uint32_t)(EAX));
  /* 107b0f2a call 0x107a6de0 */
  push32(0x107b0f2fu); f_107a6de0();
  /* 107b0f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f32 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0f35 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f37 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b0f3a jmp 0x107b0ebd */
  goto L_107b0ebd;
L_107b0f3c:;
  /* 107b0f3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0f3f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107b0f42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b0f45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107b0f4b:;
  /* 107b0f4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b0f4e pop esi */
  ESI = (pop32());
  /* 107b0f4f mov esp, ebp */
  ESP = (EBP);
  /* 107b0f51 pop ebp */
  EBP = (pop32());
  /* 107b0f52 ret  */
  ESPCHK(0x107b0e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x107b0f60 (878 bytes, 273 insns) */
void f_107b0f60(void) {
  FTRACE(0x107b0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 107b0f61 mov ebp, esp */
  EBP = (ESP);
  /* 107b0f63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b0f66 push esi */
  push32((uint32_t)(ESI));
  /* 107b0f67 mov eax, dword ptr [0x107cec98] */
  EAX = (r32((uint32_t)(0x107cec98)));
  /* 107b0f6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b0f6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107b0f76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b0f7d jmp 0x107b0f88 */
  goto L_107b0f88;
L_107b0f7f:;
  /* 107b0f7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0f82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0f85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107b0f88:;
  /* 107b0f88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0f8c jae 0x107b0fc1 */
  if (!C.cf) goto L_107b0fc1;
  /* 107b0f8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0f91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0f94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107b0f97 push ecx */
  push32((uint32_t)(ECX));
  /* 107b0f98 call 0x107a6de0 */
  push32(0x107b0f9du); f_107a6de0();
  /* 107b0f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0fa0 mov esi, eax */
  ESI = (EAX);
  /* 107b0fa2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0fa5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0fa8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 107b0fac push ecx */
  push32((uint32_t)(ECX));
  /* 107b0fad call 0x107a6de0 */
  push32(0x107b0fb2u); f_107a6de0();
  /* 107b0fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0fb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0fb8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107b0fbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b0fbf jmp 0x107b0f7f */
  goto L_107b0f7f;
L_107b0fc1:;
  /* 107b0fc1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b0fc8 jmp 0x107b0fd3 */
  goto L_107b0fd3;
L_107b0fca:;
  /* 107b0fca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0fcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0fd0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107b0fd3:;
  /* 107b0fd3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b0fd7 jae 0x107b100d */
  if (!C.cf) goto L_107b100d;
  /* 107b0fd9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0fdc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0fdf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 107b0fe3 push eax */
  push32((uint32_t)(EAX));
  /* 107b0fe4 call 0x107a6de0 */
  push32(0x107b0fe9u); f_107a6de0();
  /* 107b0fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b0fec mov esi, eax */
  ESI = (EAX);
  /* 107b0fee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b0ff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b0ff4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107b0ff8 push eax */
  push32((uint32_t)(EAX));
  /* 107b0ff9 call 0x107a6de0 */
  push32(0x107b0ffeu); f_107a6de0();
  /* 107b0ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1001 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1004 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107b1008 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b100b jmp 0x107b0fca */
  goto L_107b0fca;
L_107b100d:;
  /* 107b100d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1010 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 107b1016 push eax */
  push32((uint32_t)(EAX));
  /* 107b1017 call 0x107a6de0 */
  push32(0x107b101cu); f_107a6de0();
  /* 107b101c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b101f mov esi, eax */
  ESI = (EAX);
  /* 107b1021 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1024 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 107b102a push edx */
  push32((uint32_t)(EDX));
  /* 107b102b call 0x107a6de0 */
  push32(0x107b1030u); f_107a6de0();
  /* 107b1030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1033 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1036 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107b103a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b103d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1040 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 107b1046 push edx */
  push32((uint32_t)(EDX));
  /* 107b1047 call 0x107a6de0 */
  push32(0x107b104cu); f_107a6de0();
  /* 107b104c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b104f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b1052 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107b1056 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b1059 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b105c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 107b1062 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1063 call 0x107a6de0 */
  push32(0x107b1068u); f_107a6de0();
  /* 107b1068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b106b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b106e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107b1072 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b1075 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1078 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 107b107e push edx */
  push32((uint32_t)(EDX));
  /* 107b107f call 0x107a6de0 */
  push32(0x107b1084u); f_107a6de0();
  /* 107b1084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1087 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b108a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107b108e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b1091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b1094 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1099 push eax */
  push32((uint32_t)(EAX));
  /* 107b109a call 0x107a3f90 */
  push32(0x107b109fu); f_107a3f90();
  /* 107b109f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b10a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b10a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b10a9 je 0x107b12c6 */
  if (C.zf) goto L_107b12c6;
  /* 107b10af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b10b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107b10b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b10b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b10be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b10c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 107b10c6 mov eax, dword ptr [0x107cec98] */
  EAX = (r32((uint32_t)(0x107cec98)));
  /* 107b10cb push eax */
  push32((uint32_t)(EAX));
  /* 107b10cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b10cf push ecx */
  push32((uint32_t)(ECX));
  /* 107b10d0 call 0x107aa890 */
  push32(0x107b10d5u); f_107aa890();
  /* 107b10d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b10d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b10df jmp 0x107b10ea */
  goto L_107b10ea;
L_107b10e1:;
  /* 107b10e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b10e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b10e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107b10ea:;
  /* 107b10ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b10ee jae 0x107b115e */
  if (!C.cf) goto L_107b115e;
  /* 107b10f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b10f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b10f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b10f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 107b10fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b10ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1102 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107b1105 push edx */
  push32((uint32_t)(EDX));
  /* 107b1106 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1109 push eax */
  push32((uint32_t)(EAX));
  /* 107b110a call 0x107a6f60 */
  push32(0x107b110fu); f_107a6f60();
  /* 107b110f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1112 push eax */
  push32((uint32_t)(EAX));
  /* 107b1113 call 0x107a6de0 */
  push32(0x107b1118u); f_107a6de0();
  /* 107b1118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b111b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b111e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107b1122 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b1125 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1128 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b112b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b112e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 107b1132 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1135 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1138 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 107b113c push edx */
  push32((uint32_t)(EDX));
  /* 107b113d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1140 push eax */
  push32((uint32_t)(EAX));
  /* 107b1141 call 0x107a6f60 */
  push32(0x107b1146u); f_107a6f60();
  /* 107b1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1149 push eax */
  push32((uint32_t)(EAX));
  /* 107b114a call 0x107a6de0 */
  push32(0x107b114fu); f_107a6de0();
  /* 107b114f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1152 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1155 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107b1159 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b115c jmp 0x107b10e1 */
  goto L_107b10e1;
L_107b115e:;
  /* 107b115e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b1165 jmp 0x107b1170 */
  goto L_107b1170;
L_107b1167:;
  /* 107b1167 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b116a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b116d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107b1170:;
  /* 107b1170 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1174 jae 0x107b11e6 */
  if (!C.cf) goto L_107b11e6;
  /* 107b1176 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1179 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b117c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b117f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 107b1183 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1186 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1189 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 107b118d push eax */
  push32((uint32_t)(EAX));
  /* 107b118e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1191 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1192 call 0x107a6f60 */
  push32(0x107b1197u); f_107a6f60();
  /* 107b1197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b119a push eax */
  push32((uint32_t)(EAX));
  /* 107b119b call 0x107a6de0 */
  push32(0x107b11a0u); f_107a6de0();
  /* 107b11a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b11a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b11a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107b11aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b11ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b11b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b11b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b11b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 107b11ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b11bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b11c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107b11c4 push eax */
  push32((uint32_t)(EAX));
  /* 107b11c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b11c8 push ecx */
  push32((uint32_t)(ECX));
  /* 107b11c9 call 0x107a6f60 */
  push32(0x107b11ceu); f_107a6f60();
  /* 107b11ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b11d1 push eax */
  push32((uint32_t)(EAX));
  /* 107b11d2 call 0x107a6de0 */
  push32(0x107b11d7u); f_107a6de0();
  /* 107b11d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b11da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b11dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107b11e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b11e4 jmp 0x107b1167 */
  goto L_107b1167;
L_107b11e6:;
  /* 107b11e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b11e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b11ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 107b11f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b11f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 107b11fb push ecx */
  push32((uint32_t)(ECX));
  /* 107b11fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b11ff push edx */
  push32((uint32_t)(EDX));
  /* 107b1200 call 0x107a6f60 */
  push32(0x107b1205u); f_107a6f60();
  /* 107b1205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1208 push eax */
  push32((uint32_t)(EAX));
  /* 107b1209 call 0x107a6de0 */
  push32(0x107b120eu); f_107a6de0();
  /* 107b120e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1211 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1214 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107b1218 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b121b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b121e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1221 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 107b1227 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b122a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 107b1230 push eax */
  push32((uint32_t)(EAX));
  /* 107b1231 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1234 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1235 call 0x107a6f60 */
  push32(0x107b123au); f_107a6f60();
  /* 107b123a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b123d push eax */
  push32((uint32_t)(EAX));
  /* 107b123e call 0x107a6de0 */
  push32(0x107b1243u); f_107a6de0();
  /* 107b1243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1246 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1249 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107b124d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b1250 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b1253 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1256 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 107b125c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b125f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 107b1265 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1266 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1269 push edx */
  push32((uint32_t)(EDX));
  /* 107b126a call 0x107a6f60 */
  push32(0x107b126fu); f_107a6f60();
  /* 107b126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1272 push eax */
  push32((uint32_t)(EAX));
  /* 107b1273 call 0x107a6de0 */
  push32(0x107b1278u); f_107a6de0();
  /* 107b1278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b127b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b127e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107b1282 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b1285 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b1288 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b128b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 107b1291 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1294 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 107b129a push eax */
  push32((uint32_t)(EAX));
  /* 107b129b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b129e push ecx */
  push32((uint32_t)(ECX));
  /* 107b129f call 0x107a6f60 */
  push32(0x107b12a4u); f_107a6f60();
  /* 107b12a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b12a7 push eax */
  push32((uint32_t)(EAX));
  /* 107b12a8 call 0x107a6de0 */
  push32(0x107b12adu); f_107a6de0();
  /* 107b12ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b12b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b12b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 107b12b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b12ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b12bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b12c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_107b12c6:;
  /* 107b12c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b12c9 pop esi */
  ESI = (pop32());
  /* 107b12ca mov esp, ebp */
  ESP = (EBP);
  /* 107b12cc pop ebp */
  EBP = (pop32());
  /* 107b12cd ret  */
  ESPCHK(0x107b0f60u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x107b12d0 (31 bytes, 15 insns) */
void f_107b12d0(void) {
  FTRACE(0x107b12d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b12d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b12d1 mov ebp, esp */
  EBP = (ESP);
  /* 107b12d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b12d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b12d8 push eax */
  push32((uint32_t)(EAX));
  /* 107b12d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b12dc push ecx */
  push32((uint32_t)(ECX));
  /* 107b12dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b12e0 push edx */
  push32((uint32_t)(EDX));
  /* 107b12e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b12e4 push eax */
  push32((uint32_t)(EAX));
  /* 107b12e5 call 0x107b12f0 */
  push32(0x107b12eau); f_107b12f0();
  /* 107b12ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b12ed pop ebp */
  EBP = (pop32());
  /* 107b12ee ret  */
  ESPCHK(0x107b12d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x107b12f0 (393 bytes, 123 insns) */
void f_107b12f0(void) {
  FTRACE(0x107b12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b12f1 mov ebp, esp */
  EBP = (ESP);
  /* 107b12f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b12f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b12fa jne 0x107b1306 */
  if (!C.zf) goto L_107b1306;
  /* 107b12fc mov eax, dword ptr [0x107cec98] */
  EAX = (r32((uint32_t)(0x107cec98)));
  /* 107b1301 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107b1304 jmp 0x107b130c */
  goto L_107b130c;
L_107b1306:;
  /* 107b1306 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1309 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107b130c:;
  /* 107b130c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b130f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b1312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1315 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b1318 push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107b131d call dword ptr [0x107d2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2304))), 0x107b1323u);
  /* 107b1323 cmp dword ptr [0x107cf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b132a je 0x107b134a */
  if (C.zf) goto L_107b134a;
  /* 107b132c push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107b1331 call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107b1337u);
  /* 107b1337 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b1339 call 0x107a79b0 */
  push32(0x107b133eu); f_107a79b0();
  /* 107b133e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1341 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107b1348 jmp 0x107b1351 */
  goto L_107b1351;
L_107b134a:;
  /* 107b134a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107b1351:;
  /* 107b1351 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1355 jbe 0x107b1442 */
  if ((C.cf||C.zf)) goto L_107b1442;
  /* 107b135b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b135e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b1360 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 107b1363 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b1367 je 0x107b1371 */
  if (C.zf) goto L_107b1371;
  /* 107b1369 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b136d je 0x107b1376 */
  if (C.zf) goto L_107b1376;
  /* 107b136f jmp 0x107b13d0 */
  goto L_107b13d0;
L_107b1371:;
  /* 107b1371 jmp 0x107b1442 */
  goto L_107b1442;
L_107b1376:;
  /* 107b1376 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1379 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b137c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 107b137f mov dword ptr [0x107cf898], 0 */
  w32((uint32_t)(0x107cf898), (0x0u));
  /* 107b1389 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b138c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b138f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1392 jne 0x107b13a7 */
  if (!C.zf) goto L_107b13a7;
  /* 107b1394 mov dword ptr [0x107cf898], 1 */
  w32((uint32_t)(0x107cf898), (0x1u));
  /* 107b139e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b13a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b13a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107b13a7:;
  /* 107b13a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b13aa push ecx */
  push32((uint32_t)(ECX));
  /* 107b13ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 107b13ae push edx */
  push32((uint32_t)(EDX));
  /* 107b13af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 107b13b2 push eax */
  push32((uint32_t)(EAX));
  /* 107b13b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b13b6 push ecx */
  push32((uint32_t)(ECX));
  /* 107b13b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b13ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b13bc push eax */
  push32((uint32_t)(EAX));
  /* 107b13bd call 0x107b1480 */
  push32(0x107b13c2u); f_107b1480();
  /* 107b13c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b13c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b13c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b13cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107b13ce jmp 0x107b143d */
  goto L_107b143d;
L_107b13d0:;
  /* 107b13d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b13d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b13d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b13d7 mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b13dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b13df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b13e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107b13e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b13eb je 0x107b1418 */
  if (C.zf) goto L_107b1418;
  /* 107b13ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b13f1 jbe 0x107b1418 */
  if ((C.cf||C.zf)) goto L_107b1418;
  /* 107b13f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b13f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b13f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b13fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107b13fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1403 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b1406 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1409 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b140c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107b140f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1412 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1415 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107b1418:;
  /* 107b1418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b141b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b141e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b1420 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107b1422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1425 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1428 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b142b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b142e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1431 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107b1434 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1437 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b143a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107b143d:;
  /* 107b143d jmp 0x107b1351 */
  goto L_107b1351;
L_107b1442:;
  /* 107b1442 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1446 je 0x107b1454 */
  if (C.zf) goto L_107b1454;
  /* 107b1448 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b144a call 0x107a7a50 */
  push32(0x107b144fu); f_107a7a50();
  /* 107b144f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1452 jmp 0x107b145f */
  goto L_107b145f;
L_107b1454:;
  /* 107b1454 push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107b1459 call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107b145fu);
L_107b145f:;
  /* 107b145f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1463 jbe 0x107b1473 */
  if ((C.cf||C.zf)) goto L_107b1473;
  /* 107b1465 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1468 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107b146b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b146e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1471 jmp 0x107b1475 */
  goto L_107b1475;
L_107b1473:;
  /* 107b1473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b1475:;
  /* 107b1475 mov esp, ebp */
  ESP = (EBP);
  /* 107b1477 pop ebp */
  EBP = (pop32());
  /* 107b1478 ret  */
  ESPCHK(0x107b12f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011480 @ 0x107b1480 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_107b1480(void) {
  FTRACE(0x107b1480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b1480 push ebp */
  push32((uint32_t)(EBP));
  /* 107b1481 mov ebp, esp */
  EBP = (ESP);
  /* 107b1483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1486 push esi */
  push32((uint32_t)(ESI));
  /* 107b1487 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 107b148b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b148e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1491 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1494 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b1497 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b149b ja 0x107b19e8 */
  if ((!C.cf&&!C.zf)) goto L_107b19e8;
  /* 107b14a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b14a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b14a6 mov dl, byte ptr [eax + 0x107b1a49] */
  DL = (r8((uint32_t)(EAX + 0x107b1a49)));
  /* 107b14ac jmp dword ptr [edx*4 + 0x107b19ed] */
  switch (EDX) {
    case 0: goto L_107b19c6;
    case 1: goto L_107b14d5;
    case 2: goto L_107b151b;
    case 3: goto L_107b1668;
    case 4: goto L_107b1690;
    case 5: goto L_107b172f;
    case 6: goto L_107b179b;
    case 7: goto L_107b17c4;
    case 8: goto L_107b1805;
    case 9: goto L_107b18e7;
    case 10: goto L_107b194e;
    case 11: goto L_107b199b;
    case 12: goto L_107b14b3;
    case 13: goto L_107b14f8;
    case 14: goto L_107b153e;
    case 15: goto L_107b163e;
    case 16: goto L_107b16d5;
    case 17: goto L_107b1702;
    case 18: goto L_107b1757;
    case 19: goto L_107b17db;
    case 20: goto L_107b1889;
    case 21: goto L_107b1918;
    case 22: goto L_107b19e8;
    default: x86_unimpl("switch@0x107b14ac out of table"); return;
  }
L_107b14b3:;
  /* 107b14b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b14b6 push ecx */
  push32((uint32_t)(ECX));
  /* 107b14b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b14ba push edx */
  push32((uint32_t)(EDX));
  /* 107b14bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b14be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107b14c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b14c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107b14c7 push eax */
  push32((uint32_t)(EAX));
  /* 107b14c8 call 0x107b1aa0 */
  push32(0x107b14cdu); f_107b1aa0();
  /* 107b14cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b14d0 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b14d5:;
  /* 107b14d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b14d8 push ecx */
  push32((uint32_t)(ECX));
  /* 107b14d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b14dc push edx */
  push32((uint32_t)(EDX));
  /* 107b14dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b14e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107b14e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b14e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 107b14ea push eax */
  push32((uint32_t)(EAX));
  /* 107b14eb call 0x107b1aa0 */
  push32(0x107b14f0u); f_107b1aa0();
  /* 107b14f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b14f3 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b14f8:;
  /* 107b14f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b14fb push ecx */
  push32((uint32_t)(ECX));
  /* 107b14fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b14ff push edx */
  push32((uint32_t)(EDX));
  /* 107b1500 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1503 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107b1506 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1509 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 107b150d push eax */
  push32((uint32_t)(EAX));
  /* 107b150e call 0x107b1aa0 */
  push32(0x107b1513u); f_107b1aa0();
  /* 107b1513 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1516 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b151b:;
  /* 107b151b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b151e push ecx */
  push32((uint32_t)(ECX));
  /* 107b151f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1522 push edx */
  push32((uint32_t)(EDX));
  /* 107b1523 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1526 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107b1529 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b152c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107b1530 push eax */
  push32((uint32_t)(EAX));
  /* 107b1531 call 0x107b1aa0 */
  push32(0x107b1536u); f_107b1aa0();
  /* 107b1536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1539 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b153e:;
  /* 107b153e cmp dword ptr [0x107cf898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1545 je 0x107b15c6 */
  if (C.zf) goto L_107b15c6;
  /* 107b1547 mov dword ptr [0x107cf898], 0 */
  w32((uint32_t)(0x107cf898), (0x0u));
  /* 107b1551 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1554 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1555 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1558 push edx */
  push32((uint32_t)(EDX));
  /* 107b1559 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b155c push eax */
  push32((uint32_t)(EAX));
  /* 107b155d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1560 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1561 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1564 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 107b156a push eax */
  push32((uint32_t)(EAX));
  /* 107b156b call 0x107b1c50 */
  push32(0x107b1570u); f_107b1c50();
  /* 107b1570 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1573 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1576 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1579 jne 0x107b1580 */
  if (!C.zf) goto L_107b1580;
  /* 107b157b jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1580:;
  /* 107b1580 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1583 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1585 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 107b1588 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b158b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b158d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1590 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1593 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b1595 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1598 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b159a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b159d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b15a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b15a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b15a5 push ecx */
  push32((uint32_t)(ECX));
  /* 107b15a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b15a9 push edx */
  push32((uint32_t)(EDX));
  /* 107b15aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b15ad push eax */
  push32((uint32_t)(EAX));
  /* 107b15ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b15b1 push ecx */
  push32((uint32_t)(ECX));
  /* 107b15b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b15b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 107b15bb push eax */
  push32((uint32_t)(EAX));
  /* 107b15bc call 0x107b1c50 */
  push32(0x107b15c1u); f_107b1c50();
  /* 107b15c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b15c4 jmp 0x107b1639 */
  goto L_107b1639;
L_107b15c6:;
  /* 107b15c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b15c9 push ecx */
  push32((uint32_t)(ECX));
  /* 107b15ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b15cd push edx */
  push32((uint32_t)(EDX));
  /* 107b15ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b15d1 push eax */
  push32((uint32_t)(EAX));
  /* 107b15d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b15d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107b15d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b15d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 107b15df push eax */
  push32((uint32_t)(EAX));
  /* 107b15e0 call 0x107b1c50 */
  push32(0x107b15e5u); f_107b1c50();
  /* 107b15e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b15e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b15eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b15ee jne 0x107b15f5 */
  if (!C.zf) goto L_107b15f5;
  /* 107b15f0 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b15f5:;
  /* 107b15f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b15f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b15fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 107b15fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1600 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b1602 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1605 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1608 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b160a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b160d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b160f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1612 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1615 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b1617 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b161a push ecx */
  push32((uint32_t)(ECX));
  /* 107b161b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b161e push edx */
  push32((uint32_t)(EDX));
  /* 107b161f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1622 push eax */
  push32((uint32_t)(EAX));
  /* 107b1623 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1626 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1627 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b162a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 107b1630 push eax */
  push32((uint32_t)(EAX));
  /* 107b1631 call 0x107b1c50 */
  push32(0x107b1636u); f_107b1c50();
  /* 107b1636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b1639:;
  /* 107b1639 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b163e:;
  /* 107b163e mov ecx, dword ptr [0x107cf898] */
  ECX = (r32((uint32_t)(0x107cf898)));
  /* 107b1644 mov dword ptr [0x107cf8a8], ecx */
  w32((uint32_t)(0x107cf8a8), (ECX));
  /* 107b164a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b164d push edx */
  push32((uint32_t)(EDX));
  /* 107b164e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1651 push eax */
  push32((uint32_t)(EAX));
  /* 107b1652 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b1654 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1657 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107b165a push edx */
  push32((uint32_t)(EDX));
  /* 107b165b call 0x107b1af0 */
  push32(0x107b1660u); f_107b1af0();
  /* 107b1660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1663 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1668:;
  /* 107b1668 mov eax, dword ptr [0x107cf898] */
  EAX = (r32((uint32_t)(0x107cf898)));
  /* 107b166d mov dword ptr [0x107cf8a8], eax */
  w32((uint32_t)(0x107cf8a8), (EAX));
  /* 107b1672 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1675 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1676 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1679 push edx */
  push32((uint32_t)(EDX));
  /* 107b167a push 2 */
  push32((uint32_t)(0x2u));
  /* 107b167c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b167f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107b1682 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1683 call 0x107b1af0 */
  push32(0x107b1688u); f_107b1af0();
  /* 107b1688 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b168b jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1690:;
  /* 107b1690 mov edx, dword ptr [0x107cf898] */
  EDX = (r32((uint32_t)(0x107cf898)));
  /* 107b1696 mov dword ptr [0x107cf8a8], edx */
  w32((uint32_t)(0x107cf8a8), (EDX));
  /* 107b169c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b169f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 107b16a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b16a3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 107b16a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b16aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b16ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b16b1 jne 0x107b16ba */
  if (!C.zf) goto L_107b16ba;
  /* 107b16b3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_107b16ba:;
  /* 107b16ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b16bd push edx */
  push32((uint32_t)(EDX));
  /* 107b16be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b16c1 push eax */
  push32((uint32_t)(EAX));
  /* 107b16c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b16c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b16c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107b16c8 call 0x107b1af0 */
  push32(0x107b16cdu); f_107b1af0();
  /* 107b16cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b16d0 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b16d5:;
  /* 107b16d5 mov edx, dword ptr [0x107cf898] */
  EDX = (r32((uint32_t)(0x107cf898)));
  /* 107b16db mov dword ptr [0x107cf8a8], edx */
  w32((uint32_t)(0x107cf8a8), (EDX));
  /* 107b16e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b16e4 push eax */
  push32((uint32_t)(EAX));
  /* 107b16e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b16e8 push ecx */
  push32((uint32_t)(ECX));
  /* 107b16e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 107b16eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b16ee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107b16f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b16f4 push eax */
  push32((uint32_t)(EAX));
  /* 107b16f5 call 0x107b1af0 */
  push32(0x107b16fau); f_107b1af0();
  /* 107b16fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b16fd jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1702:;
  /* 107b1702 mov ecx, dword ptr [0x107cf898] */
  ECX = (r32((uint32_t)(0x107cf898)));
  /* 107b1708 mov dword ptr [0x107cf8a8], ecx */
  w32((uint32_t)(0x107cf8a8), (ECX));
  /* 107b170e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1711 push edx */
  push32((uint32_t)(EDX));
  /* 107b1712 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1715 push eax */
  push32((uint32_t)(EAX));
  /* 107b1716 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b1718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b171b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107b171e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1721 push edx */
  push32((uint32_t)(EDX));
  /* 107b1722 call 0x107b1af0 */
  push32(0x107b1727u); f_107b1af0();
  /* 107b1727 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b172a jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b172f:;
  /* 107b172f mov eax, dword ptr [0x107cf898] */
  EAX = (r32((uint32_t)(0x107cf898)));
  /* 107b1734 mov dword ptr [0x107cf8a8], eax */
  w32((uint32_t)(0x107cf8a8), (EAX));
  /* 107b1739 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b173c push ecx */
  push32((uint32_t)(ECX));
  /* 107b173d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1740 push edx */
  push32((uint32_t)(EDX));
  /* 107b1741 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b1743 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1746 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107b1749 push ecx */
  push32((uint32_t)(ECX));
  /* 107b174a call 0x107b1af0 */
  push32(0x107b174fu); f_107b1af0();
  /* 107b174f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1752 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1757:;
  /* 107b1757 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b175a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b175e jg 0x107b177c */
  if ((!C.zf&&C.sf==C.of)) goto L_107b177c;
  /* 107b1760 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1763 push eax */
  push32((uint32_t)(EAX));
  /* 107b1764 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1767 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1768 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b176b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 107b1771 push eax */
  push32((uint32_t)(EAX));
  /* 107b1772 call 0x107b1aa0 */
  push32(0x107b1777u); f_107b1aa0();
  /* 107b1777 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b177a jmp 0x107b1796 */
  goto L_107b1796;
L_107b177c:;
  /* 107b177c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b177f push ecx */
  push32((uint32_t)(ECX));
  /* 107b1780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1783 push edx */
  push32((uint32_t)(EDX));
  /* 107b1784 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1787 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 107b178d push ecx */
  push32((uint32_t)(ECX));
  /* 107b178e call 0x107b1aa0 */
  push32(0x107b1793u); f_107b1aa0();
  /* 107b1793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b1796:;
  /* 107b1796 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b179b:;
  /* 107b179b mov edx, dword ptr [0x107cf898] */
  EDX = (r32((uint32_t)(0x107cf898)));
  /* 107b17a1 mov dword ptr [0x107cf8a8], edx */
  w32((uint32_t)(0x107cf8a8), (EDX));
  /* 107b17a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b17aa push eax */
  push32((uint32_t)(EAX));
  /* 107b17ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b17ae push ecx */
  push32((uint32_t)(ECX));
  /* 107b17af push 2 */
  push32((uint32_t)(0x2u));
  /* 107b17b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b17b4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b17b6 push eax */
  push32((uint32_t)(EAX));
  /* 107b17b7 call 0x107b1af0 */
  push32(0x107b17bcu); f_107b1af0();
  /* 107b17bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b17bf jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b17c4:;
  /* 107b17c4 mov ecx, dword ptr [0x107cf898] */
  ECX = (r32((uint32_t)(0x107cf898)));
  /* 107b17ca mov dword ptr [0x107cf8a8], ecx */
  w32((uint32_t)(0x107cf8a8), (ECX));
  /* 107b17d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b17d3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 107b17d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b17d9 jmp 0x107b182d */
  goto L_107b182d;
L_107b17db:;
  /* 107b17db mov ecx, dword ptr [0x107cf898] */
  ECX = (r32((uint32_t)(0x107cf898)));
  /* 107b17e1 mov dword ptr [0x107cf8a8], ecx */
  w32((uint32_t)(0x107cf8a8), (ECX));
  /* 107b17e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b17ea push edx */
  push32((uint32_t)(EDX));
  /* 107b17eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b17ee push eax */
  push32((uint32_t)(EAX));
  /* 107b17ef push 1 */
  push32((uint32_t)(0x1u));
  /* 107b17f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b17f4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107b17f7 push edx */
  push32((uint32_t)(EDX));
  /* 107b17f8 call 0x107b1af0 */
  push32(0x107b17fdu); f_107b1af0();
  /* 107b17fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1800 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1805:;
  /* 107b1805 mov eax, dword ptr [0x107cf898] */
  EAX = (r32((uint32_t)(0x107cf898)));
  /* 107b180a mov dword ptr [0x107cf8a8], eax */
  w32((uint32_t)(0x107cf8a8), (EAX));
  /* 107b180f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1812 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1816 jne 0x107b1821 */
  if (!C.zf) goto L_107b1821;
  /* 107b1818 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 107b181f jmp 0x107b182d */
  goto L_107b182d;
L_107b1821:;
  /* 107b1821 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1824 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 107b1827 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b182a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107b182d:;
  /* 107b182d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1830 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107b1833 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1836 jge 0x107b1841 */
  if ((C.sf==C.of)) goto L_107b1841;
  /* 107b1838 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b183f jmp 0x107b186e */
  goto L_107b186e;
L_107b1841:;
  /* 107b1841 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1844 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107b1847 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1848 mov ecx, 7 */
  ECX = (0x7u);
  /* 107b184d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b184f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b1852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1855 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107b1858 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1859 mov ecx, 7 */
  ECX = (0x7u);
  /* 107b185e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1860 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1863 jl 0x107b186e */
  if ((C.sf!=C.of)) goto L_107b186e;
  /* 107b1865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1868 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b186b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107b186e:;
  /* 107b186e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1871 push eax */
  push32((uint32_t)(EAX));
  /* 107b1872 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1875 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1876 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b1878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b187b push edx */
  push32((uint32_t)(EDX));
  /* 107b187c call 0x107b1af0 */
  push32(0x107b1881u); f_107b1af0();
  /* 107b1881 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1884 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1889:;
  /* 107b1889 cmp dword ptr [0x107cf898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1890 je 0x107b18c0 */
  if (C.zf) goto L_107b18c0;
  /* 107b1892 mov dword ptr [0x107cf898], 0 */
  w32((uint32_t)(0x107cf898), (0x0u));
  /* 107b189c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b189f push eax */
  push32((uint32_t)(EAX));
  /* 107b18a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b18a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b18a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b18a7 push edx */
  push32((uint32_t)(EDX));
  /* 107b18a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b18ab push eax */
  push32((uint32_t)(EAX));
  /* 107b18ac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b18af mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 107b18b5 push edx */
  push32((uint32_t)(EDX));
  /* 107b18b6 call 0x107b1c50 */
  push32(0x107b18bbu); f_107b1c50();
  /* 107b18bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b18be jmp 0x107b18e2 */
  goto L_107b18e2;
L_107b18c0:;
  /* 107b18c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b18c3 push eax */
  push32((uint32_t)(EAX));
  /* 107b18c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b18c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107b18c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b18cb push edx */
  push32((uint32_t)(EDX));
  /* 107b18cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b18cf push eax */
  push32((uint32_t)(EAX));
  /* 107b18d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b18d3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 107b18d9 push edx */
  push32((uint32_t)(EDX));
  /* 107b18da call 0x107b1c50 */
  push32(0x107b18dfu); f_107b1c50();
  /* 107b18df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b18e2:;
  /* 107b18e2 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b18e7:;
  /* 107b18e7 mov dword ptr [0x107cf898], 0 */
  w32((uint32_t)(0x107cf898), (0x0u));
  /* 107b18f1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b18f4 push eax */
  push32((uint32_t)(EAX));
  /* 107b18f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b18f8 push ecx */
  push32((uint32_t)(ECX));
  /* 107b18f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b18fc push edx */
  push32((uint32_t)(EDX));
  /* 107b18fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1900 push eax */
  push32((uint32_t)(EAX));
  /* 107b1901 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1904 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 107b190a push edx */
  push32((uint32_t)(EDX));
  /* 107b190b call 0x107b1c50 */
  push32(0x107b1910u); f_107b1c50();
  /* 107b1910 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1913 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b1918:;
  /* 107b1918 mov eax, dword ptr [0x107cf898] */
  EAX = (r32((uint32_t)(0x107cf898)));
  /* 107b191d mov dword ptr [0x107cf8a8], eax */
  w32((uint32_t)(0x107cf8a8), (EAX));
  /* 107b1922 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1925 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107b1928 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1929 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107b192e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1930 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b1933 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1936 push edx */
  push32((uint32_t)(EDX));
  /* 107b1937 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b193a push eax */
  push32((uint32_t)(EAX));
  /* 107b193b push 2 */
  push32((uint32_t)(0x2u));
  /* 107b193d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1940 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1941 call 0x107b1af0 */
  push32(0x107b1946u); f_107b1af0();
  /* 107b1946 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1949 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b194e:;
  /* 107b194e mov edx, dword ptr [0x107cf898] */
  EDX = (r32((uint32_t)(0x107cf898)));
  /* 107b1954 mov dword ptr [0x107cf8a8], edx */
  w32((uint32_t)(0x107cf8a8), (EDX));
  /* 107b195a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b195d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 107b1960 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1961 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107b1966 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1968 mov ecx, eax */
  ECX = (EAX);
  /* 107b196a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b196d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b1970 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1973 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107b1976 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1977 mov esi, 0x64 */
  ESI = (0x64u);
  /* 107b197c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b197e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1980 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b1983 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1986 push eax */
  push32((uint32_t)(EAX));
  /* 107b1987 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b198a push ecx */
  push32((uint32_t)(ECX));
  /* 107b198b push 4 */
  push32((uint32_t)(0x4u));
  /* 107b198d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1990 push edx */
  push32((uint32_t)(EDX));
  /* 107b1991 call 0x107b1af0 */
  push32(0x107b1996u); f_107b1af0();
  /* 107b1996 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1999 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b199b:;
  /* 107b199b call 0x107b2ab0 */
  push32(0x107b19a0u); f_107b2ab0();
  /* 107b19a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b19a3 push eax */
  push32((uint32_t)(EAX));
  /* 107b19a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b19a7 push ecx */
  push32((uint32_t)(ECX));
  /* 107b19a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b19ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b19ad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b19b1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 107b19b4 mov ecx, dword ptr [eax*4 + 0x107cee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cee1c)));
  /* 107b19bb push ecx */
  push32((uint32_t)(ECX));
  /* 107b19bc call 0x107b1aa0 */
  push32(0x107b19c1u); f_107b1aa0();
  /* 107b19c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b19c4 jmp 0x107b19e8 */
  goto L_107b19e8;
L_107b19c6:;
  /* 107b19c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b19c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b19cb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 107b19ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b19d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b19d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b19d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b19d9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b19db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b19de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b19e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b19e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b19e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107b19e8:;
  /* 107b19e8 pop esi */
  ESI = (pop32());
  /* 107b19e9 mov esp, ebp */
  ESP = (EBP);
  /* 107b19eb pop ebp */
  EBP = (pop32());
  /* 107b19ec ret  */
  ESPCHK(0x107b1480u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x107b1aa0 (72 bytes, 30 insns) */
void f_107b1aa0(void) {
  FTRACE(0x107b1aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b1aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b1aa1 mov ebp, esp */
  EBP = (ESP);
L_107b1aa3:;
  /* 107b1aa3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1aa6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1aa9 je 0x107b1ae6 */
  if (C.zf) goto L_107b1ae6;
  /* 107b1aab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1aae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b1ab1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b1ab3 je 0x107b1ae6 */
  if (C.zf) goto L_107b1ae6;
  /* 107b1ab5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1ab8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1aba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1abd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b1abf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107b1ac1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1ac4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b1ac6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1ac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1acc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b1ace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1ad1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1ad4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107b1ad7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1ada mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1adc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1adf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1ae2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107b1ae4 jmp 0x107b1aa3 */
  goto L_107b1aa3;
L_107b1ae6:;
  /* 107b1ae6 pop ebp */
  EBP = (pop32());
  /* 107b1ae7 ret  */
  ESPCHK(0x107b1aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x107b1af0 (173 bytes, 64 insns) */
void f_107b1af0(void) {
  FTRACE(0x107b1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b1af1 mov ebp, esp */
  EBP = (ESP);
  /* 107b1af3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b1af4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b1afb cmp dword ptr [0x107cf8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1b02 je 0x107b1b1a */
  if (C.zf) goto L_107b1b1a;
  /* 107b1b04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1b07 push eax */
  push32((uint32_t)(EAX));
  /* 107b1b08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1b0b push ecx */
  push32((uint32_t)(ECX));
  /* 107b1b0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1b0f push edx */
  push32((uint32_t)(EDX));
  /* 107b1b10 call 0x107b1ba0 */
  push32(0x107b1b15u); f_107b1ba0();
  /* 107b1b15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1b18 jmp 0x107b1b99 */
  goto L_107b1b99;
L_107b1b1a:;
  /* 107b1b1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1b1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1b20 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1b22 jae 0x107b1b90 */
  if (!C.cf) goto L_107b1b90;
  /* 107b1b24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1b27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1b2a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107b1b2d jmp 0x107b1b38 */
  goto L_107b1b38;
L_107b1b2f:;
  /* 107b1b2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1b32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1b35 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_107b1b38:;
  /* 107b1b38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1b3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1b3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b1b40 je 0x107b1b74 */
  if (C.zf) goto L_107b1b74;
  /* 107b1b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1b45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1b46 mov ecx, 0xa */
  ECX = (0xau);
  /* 107b1b4b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1b4d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1b50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1b53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1b55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1b58 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 107b1b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1b5e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1b5f mov ecx, 0xa */
  ECX = (0xau);
  /* 107b1b64 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1b66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b1b69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1b6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1b6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b1b72 jmp 0x107b1b2f */
  goto L_107b1b2f;
L_107b1b74:;
  /* 107b1b74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1b77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1b79 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1b7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1b7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107b1b81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1b84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1b86 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1b89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1b8c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107b1b8e jmp 0x107b1b99 */
  goto L_107b1b99;
L_107b1b90:;
  /* 107b1b90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1b93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107b1b99:;
  /* 107b1b99 mov esp, ebp */
  ESP = (EBP);
  /* 107b1b9b pop ebp */
  EBP = (pop32());
  /* 107b1b9c ret  */
  ESPCHK(0x107b1af0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x107b1ba0 (172 bytes, 65 insns) */
void f_107b1ba0(void) {
  FTRACE(0x107b1ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b1ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b1ba1 mov ebp, esp */
  EBP = (ESP);
  /* 107b1ba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1ba6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1ba9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1bab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b1bae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1bb1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1bb4 jbe 0x107b1bfb */
  if ((C.cf||C.zf)) goto L_107b1bfb;
L_107b1bb6:;
  /* 107b1bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1bb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1bba mov ecx, 0xa */
  ECX = (0xau);
  /* 107b1bbf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1bc1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1bc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107b1bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b1bd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1bd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1bd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1bda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1bdd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107b1bdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1be2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b1be3 mov ecx, 0xa */
  ECX = (0xau);
  /* 107b1be8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b1bea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b1bed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1bf1 jle 0x107b1bfb */
  if ((C.zf||C.sf!=C.of)) goto L_107b1bfb;
  /* 107b1bf3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1bf6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1bf9 ja 0x107b1bb6 */
  if ((!C.cf&&!C.zf)) goto L_107b1bb6;
L_107b1bfb:;
  /* 107b1bfb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1bfe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1c00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b1c03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1c09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107b1c0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1c0e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1c11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107b1c14:;
  /* 107b1c14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1c17 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b1c19 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 107b1c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1c1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b1c22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b1c24 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107b1c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1c29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1c2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b1c2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b1c32 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107b1c35 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107b1c37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b1c3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1c3d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b1c40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b1c43 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1c46 jb 0x107b1c14 */
  if (C.cf) goto L_107b1c14;
  /* 107b1c48 mov esp, ebp */
  ESP = (EBP);
  /* 107b1c4a pop ebp */
  EBP = (pop32());
  /* 107b1c4b ret  */
  ESPCHK(0x107b1ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x107b1c50 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_107b1c50(void) {
  FTRACE(0x107b1c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b1c50 push ebp */
  push32((uint32_t)(EBP));
  /* 107b1c51 mov ebp, esp */
  EBP = (ESP);
  /* 107b1c53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107b1c56:;
  /* 107b1c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1c59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b1c5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b1c5e je 0x107b20cc */
  if (C.zf) goto L_107b20cc;
  /* 107b1c64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1c67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1c6a je 0x107b20cc */
  if (C.zf) goto L_107b20cc;
  /* 107b1c70 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 107b1c74 mov dword ptr [0x107cf8a8], 0 */
  w32((uint32_t)(0x107cf8a8), (0x0u));
  /* 107b1c7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107b1c85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1c88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b1c8b jmp 0x107b1c96 */
  goto L_107b1c96;
L_107b1c8d:;
  /* 107b1c8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1c90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1c93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107b1c96:;
  /* 107b1c96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1c99 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b1c9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1c9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b1ca2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1ca5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1ca8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b1cab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1cad jne 0x107b1cb1 */
  if (!C.zf) goto L_107b1cb1;
  /* 107b1caf jmp 0x107b1c8d */
  goto L_107b1c8d;
L_107b1cb1:;
  /* 107b1cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1cb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1cb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b1cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1cbd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b1cc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b1cc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1cc6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1cc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107b1ccc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1cd0 ja 0x107b2020 */
  if ((!C.cf&&!C.zf)) goto L_107b2020;
  /* 107b1cd6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b1cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b1cdb mov al, byte ptr [ecx + 0x107b20fc] */
  AL = (r8((uint32_t)(ECX + 0x107b20fc)));
  /* 107b1ce1 jmp dword ptr [eax*4 + 0x107b20d0] */
  switch (EAX) {
    case 0: goto L_107b1f3f;
    case 1: goto L_107b1e23;
    case 2: goto L_107b1dae;
    case 3: goto L_107b1ce8;
    case 4: goto L_107b1d26;
    case 5: goto L_107b1d87;
    case 6: goto L_107b1dd5;
    case 7: goto L_107b1dfc;
    case 8: goto L_107b1e6a;
    case 9: goto L_107b1d64;
    case 10: goto L_107b2020;
    default: x86_unimpl("switch@0x107b1ce1 out of table"); return;
  }
L_107b1ce8:;
  /* 107b1ce8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1ceb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107b1cee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b1cf1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1cf4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107b1cf7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1cfb ja 0x107b1d21 */
  if ((!C.cf&&!C.zf)) goto L_107b1d21;
  /* 107b1cfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b1d00 jmp dword ptr [ecx*4 + 0x107b214f] */
  switch (ECX) {
    case 0: goto L_107b1d07;
    case 1: goto L_107b1d11;
    case 2: goto L_107b1d17;
    case 3: goto L_107b1d1d;
    case 4: goto L_107b1d45;
    case 5: goto L_107b1d4f;
    case 6: goto L_107b1d55;
    case 7: goto L_107b1d5b;
    default: x86_unimpl("switch@0x107b1d00 out of table"); return;
  }
L_107b1d07:;
  /* 107b1d07 mov dword ptr [0x107cf8a8], 1 */
  w32((uint32_t)(0x107cf8a8), (0x1u));
L_107b1d11:;
  /* 107b1d11 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 107b1d15 jmp 0x107b1d21 */
  goto L_107b1d21;
L_107b1d17:;
  /* 107b1d17 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 107b1d1b jmp 0x107b1d21 */
  goto L_107b1d21;
L_107b1d1d:;
  /* 107b1d1d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_107b1d21:;
  /* 107b1d21 jmp 0x107b2020 */
  goto L_107b2020;
L_107b1d26:;
  /* 107b1d26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1d29 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107b1d2c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b1d2f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1d32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107b1d35 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1d39 ja 0x107b1d5f */
  if ((!C.cf&&!C.zf)) goto L_107b1d5f;
  /* 107b1d3b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b1d3e jmp dword ptr [ecx*4 + 0x107b215f] */
  switch (ECX) {
    case 0: goto L_107b1d45;
    case 1: goto L_107b1d4f;
    case 2: goto L_107b1d55;
    case 3: goto L_107b1d5b;
    default: x86_unimpl("switch@0x107b1d3e out of table"); return;
  }
L_107b1d45:;
  /* 107b1d45 mov dword ptr [0x107cf8a8], 1 */
  w32((uint32_t)(0x107cf8a8), (0x1u));
L_107b1d4f:;
  /* 107b1d4f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 107b1d53 jmp 0x107b1d5f */
  goto L_107b1d5f;
L_107b1d55:;
  /* 107b1d55 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 107b1d59 jmp 0x107b1d5f */
  goto L_107b1d5f;
L_107b1d5b:;
  /* 107b1d5b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_107b1d5f:;
  /* 107b1d5f jmp 0x107b2020 */
  goto L_107b2020;
L_107b1d64:;
  /* 107b1d64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1d67 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107b1d6a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1d6e je 0x107b1d78 */
  if (C.zf) goto L_107b1d78;
  /* 107b1d70 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1d74 je 0x107b1d7e */
  if (C.zf) goto L_107b1d7e;
  /* 107b1d76 jmp 0x107b1d82 */
  goto L_107b1d82;
L_107b1d78:;
  /* 107b1d78 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 107b1d7c jmp 0x107b1d82 */
  goto L_107b1d82;
L_107b1d7e:;
  /* 107b1d7e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_107b1d82:;
  /* 107b1d82 jmp 0x107b2020 */
  goto L_107b2020;
L_107b1d87:;
  /* 107b1d87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1d8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107b1d8d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1d91 je 0x107b1d9b */
  if (C.zf) goto L_107b1d9b;
  /* 107b1d93 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1d97 je 0x107b1da5 */
  if (C.zf) goto L_107b1da5;
  /* 107b1d99 jmp 0x107b1da9 */
  goto L_107b1da9;
L_107b1d9b:;
  /* 107b1d9b mov dword ptr [0x107cf8a8], 1 */
  w32((uint32_t)(0x107cf8a8), (0x1u));
L_107b1da5:;
  /* 107b1da5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_107b1da9:;
  /* 107b1da9 jmp 0x107b2020 */
  goto L_107b2020;
L_107b1dae:;
  /* 107b1dae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1db1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 107b1db4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1db8 je 0x107b1dc2 */
  if (C.zf) goto L_107b1dc2;
  /* 107b1dba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1dbe je 0x107b1dcc */
  if (C.zf) goto L_107b1dcc;
  /* 107b1dc0 jmp 0x107b1dd0 */
  goto L_107b1dd0;
L_107b1dc2:;
  /* 107b1dc2 mov dword ptr [0x107cf8a8], 1 */
  w32((uint32_t)(0x107cf8a8), (0x1u));
L_107b1dcc:;
  /* 107b1dcc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_107b1dd0:;
  /* 107b1dd0 jmp 0x107b2020 */
  goto L_107b2020;
L_107b1dd5:;
  /* 107b1dd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1dd8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 107b1ddb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1ddf je 0x107b1de9 */
  if (C.zf) goto L_107b1de9;
  /* 107b1de1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1de5 je 0x107b1df3 */
  if (C.zf) goto L_107b1df3;
  /* 107b1de7 jmp 0x107b1df7 */
  goto L_107b1df7;
L_107b1de9:;
  /* 107b1de9 mov dword ptr [0x107cf8a8], 1 */
  w32((uint32_t)(0x107cf8a8), (0x1u));
L_107b1df3:;
  /* 107b1df3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_107b1df7:;
  /* 107b1df7 jmp 0x107b2020 */
  goto L_107b2020;
L_107b1dfc:;
  /* 107b1dfc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1dff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 107b1e02 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1e06 je 0x107b1e10 */
  if (C.zf) goto L_107b1e10;
  /* 107b1e08 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1e0c je 0x107b1e1a */
  if (C.zf) goto L_107b1e1a;
  /* 107b1e0e jmp 0x107b1e1e */
  goto L_107b1e1e;
L_107b1e10:;
  /* 107b1e10 mov dword ptr [0x107cf8a8], 1 */
  w32((uint32_t)(0x107cf8a8), (0x1u));
L_107b1e1a:;
  /* 107b1e1a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_107b1e1e:;
  /* 107b1e1e jmp 0x107b2020 */
  goto L_107b2020;
L_107b1e23:;
  /* 107b1e23 push 0x107cb914 */
  push32((uint32_t)(0x107cb914u));
  /* 107b1e28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1e2b push ecx */
  push32((uint32_t)(ECX));
  /* 107b1e2c call 0x107b2680 */
  push32(0x107b1e31u); f_107b2680();
  /* 107b1e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b1e36 jne 0x107b1e43 */
  if (!C.zf) goto L_107b1e43;
  /* 107b1e38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1e3b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1e3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b1e41 jmp 0x107b1e61 */
  goto L_107b1e61;
L_107b1e43:;
  /* 107b1e43 push 0x107cb910 */
  push32((uint32_t)(0x107cb910u));
  /* 107b1e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1e4b push eax */
  push32((uint32_t)(EAX));
  /* 107b1e4c call 0x107b2680 */
  push32(0x107b1e51u); f_107b2680();
  /* 107b1e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b1e56 jne 0x107b1e61 */
  if (!C.zf) goto L_107b1e61;
  /* 107b1e58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1e5b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1e5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107b1e61:;
  /* 107b1e61 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 107b1e65 jmp 0x107b2020 */
  goto L_107b2020;
L_107b1e6a:;
  /* 107b1e6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b1e6d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1e71 jg 0x107b1e81 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b1e81;
  /* 107b1e73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1e76 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 107b1e7c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107b1e7f jmp 0x107b1e8d */
  goto L_107b1e8d;
L_107b1e81:;
  /* 107b1e81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b1e84 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 107b1e8a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107b1e8d:;
  /* 107b1e8d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1e91 jle 0x107b1f34 */
  if ((C.zf||C.sf!=C.of)) goto L_107b1f34;
  /* 107b1e97 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1e9a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1e9d jbe 0x107b1f34 */
  if ((C.cf||C.zf)) goto L_107b1f34;
  /* 107b1ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1ea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b1ea8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b1eaa mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b1eb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b1eb2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b1eb6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107b1ebc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b1ebe je 0x107b1ef7 */
  if (C.zf) goto L_107b1ef7;
  /* 107b1ec0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1ec3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1ec6 jbe 0x107b1ef7 */
  if ((C.cf||C.zf)) goto L_107b1ef7;
  /* 107b1ec8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1ecb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b1ecd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1ed0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b1ed2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107b1ed4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1ed7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1ed9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1edc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1edf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107b1ee1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1ee4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1ee7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107b1eea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1eed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1eef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1ef2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1ef5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107b1ef7:;
  /* 107b1ef7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1efa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1efc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1eff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b1f01 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107b1f03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1f06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b1f08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1f0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1f0e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b1f10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b1f13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1f16 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107b1f19 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1f1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1f1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1f21 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1f24 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107b1f26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1f29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1f2c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107b1f2f jmp 0x107b1e8d */
  goto L_107b1e8d;
L_107b1f34:;
  /* 107b1f34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b1f37 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b1f3a jmp 0x107b1c56 */
  goto L_107b1c56;
L_107b1f3f:;
  /* 107b1f3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b1f42 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107b1f45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b1f47 je 0x107b2012 */
  if (C.zf) goto L_107b2012;
  /* 107b1f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1f50 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1f53 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107b1f56:;
  /* 107b1f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1f59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b1f5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b1f5e je 0x107b2010 */
  if (C.zf) goto L_107b2010;
  /* 107b1f64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1f67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1f6a je 0x107b2010 */
  if (C.zf) goto L_107b2010;
  /* 107b1f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1f73 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b1f76 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1f79 jne 0x107b1f89 */
  if (!C.zf) goto L_107b1f89;
  /* 107b1f7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1f7e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1f81 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107b1f84 jmp 0x107b2010 */
  goto L_107b2010;
L_107b1f89:;
  /* 107b1f89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1f8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b1f8e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b1f90 mov edx, dword ptr [0x107cdc98] */
  EDX = (r32((uint32_t)(0x107cdc98)));
  /* 107b1f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b1f98 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 107b1f9c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 107b1fa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b1fa3 je 0x107b1fdc */
  if (C.zf) goto L_107b1fdc;
  /* 107b1fa5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1fa8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b1fab jbe 0x107b1fdc */
  if ((C.cf||C.zf)) goto L_107b1fdc;
  /* 107b1fad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1fb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1fb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1fb5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b1fb7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107b1fb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1fbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b1fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1fc1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1fc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107b1fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1fcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b1fcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1fd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b1fd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b1fd7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b1fda mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107b1fdc:;
  /* 107b1fdc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1fdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b1fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1fe4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b1fe6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107b1fe8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1feb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b1fed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1ff0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b1ff3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107b1ff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b1ff8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b1ffb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107b1ffe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b2001 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b2003 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2006 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b2009 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107b200b jmp 0x107b1f56 */
  goto L_107b1f56;
L_107b2010:;
  /* 107b2010 jmp 0x107b201b */
  goto L_107b201b;
L_107b2012:;
  /* 107b2012 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2015 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2018 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107b201b:;
  /* 107b201b jmp 0x107b1c56 */
  goto L_107b1c56;
L_107b2020:;
  /* 107b2020 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107b2024 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b2026 je 0x107b204c */
  if (C.zf) goto L_107b204c;
  /* 107b2028 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b202b push edx */
  push32((uint32_t)(EDX));
  /* 107b202c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b202f push eax */
  push32((uint32_t)(EAX));
  /* 107b2030 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2033 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b2037 push edx */
  push32((uint32_t)(EDX));
  /* 107b2038 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107b203b push eax */
  push32((uint32_t)(EAX));
  /* 107b203c call 0x107b1480 */
  push32(0x107b2041u); f_107b1480();
  /* 107b2041 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2044 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b2047 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107b204a jmp 0x107b20c7 */
  goto L_107b20c7;
L_107b204c:;
  /* 107b204c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b204f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b2053 mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b2059 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b205b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b205f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107b2065 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b2067 je 0x107b2098 */
  if (C.zf) goto L_107b2098;
  /* 107b2069 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b206c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b206e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2071 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b2073 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107b2075 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2078 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b207a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b207d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2080 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107b2082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2085 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2088 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107b208b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b208e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b2090 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2093 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b2096 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_107b2098:;
  /* 107b2098 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b209b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b209d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b20a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b20a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107b20a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b20a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b20a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b20ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b20af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107b20b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b20b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b20b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b20ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b20bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b20bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b20c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b20c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107b20c7:;
  /* 107b20c7 jmp 0x107b1c56 */
  goto L_107b1c56;
L_107b20cc:;
  /* 107b20cc mov esp, ebp */
  ESP = (EBP);
  /* 107b20ce pop ebp */
  EBP = (pop32());
  /* 107b20cf ret  */
  ESPCHK(0x107b1c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012170 @ 0x107b2170 (650 bytes, 178 insns) */
void f_107b2170(void) {
  FTRACE(0x107b2170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2170 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2171 mov ebp, esp */
  EBP = (ESP);
  /* 107b2173 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2179 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b217d jne 0x107b22d9 */
  if (!C.zf) goto L_107b22d9;
  /* 107b2183 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b2186 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 107b218c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 107b2192 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b2195 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b219c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 107b21a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b21a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 107b21ae push edx */
  push32((uint32_t)(EDX));
  /* 107b21af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b21b2 push eax */
  push32((uint32_t)(EAX));
  /* 107b21b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b21b6 push ecx */
  push32((uint32_t)(ECX));
  /* 107b21b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b21ba push edx */
  push32((uint32_t)(EDX));
  /* 107b21bb call 0x107b3590 */
  push32(0x107b21c0u); f_107b3590();
  /* 107b21c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b21c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b21c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b21ca jne 0x107b225f */
  if (!C.zf) goto L_107b225f;
  /* 107b21d0 call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107b21d6u);
  /* 107b21d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b21d9 je 0x107b21e0 */
  if (C.zf) goto L_107b21e0;
  /* 107b21db jmp 0x107b22bd */
  goto L_107b22bd;
L_107b21e0:;
  /* 107b21e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b21e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b21e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b21e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b21e9 push eax */
  push32((uint32_t)(EAX));
  /* 107b21ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b21ed push ecx */
  push32((uint32_t)(ECX));
  /* 107b21ee call 0x107b3590 */
  push32(0x107b21f3u); f_107b3590();
  /* 107b21f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b21f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 107b21fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2203 jne 0x107b220a */
  if (!C.zf) goto L_107b220a;
  /* 107b2205 jmp 0x107b22bd */
  goto L_107b22bd;
L_107b220a:;
  /* 107b220a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 107b220c push 0x107cb91c */
  push32((uint32_t)(0x107cb91cu));
  /* 107b2211 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b2213 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 107b2219 push edx */
  push32((uint32_t)(EDX));
  /* 107b221a call 0x107a3fb0 */
  push32(0x107b221fu); f_107a3fb0();
  /* 107b221f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2222 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b2225 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2229 jne 0x107b2230 */
  if (!C.zf) goto L_107b2230;
  /* 107b222b jmp 0x107b22bd */
  goto L_107b22bd;
L_107b2230:;
  /* 107b2230 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107b2237 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2239 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 107b223f push eax */
  push32((uint32_t)(EAX));
  /* 107b2240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2243 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2244 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2247 push edx */
  push32((uint32_t)(EDX));
  /* 107b2248 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b224b push eax */
  push32((uint32_t)(EAX));
  /* 107b224c call 0x107b3590 */
  push32(0x107b2251u); f_107b3590();
  /* 107b2251 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2254 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b2257 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b225b jne 0x107b225f */
  if (!C.zf) goto L_107b225f;
  /* 107b225d jmp 0x107b22bd */
  goto L_107b22bd;
L_107b225f:;
  /* 107b225f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 107b2261 push 0x107cb91c */
  push32((uint32_t)(0x107cb91cu));
  /* 107b2266 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b2268 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b226b push ecx */
  push32((uint32_t)(ECX));
  /* 107b226c call 0x107a3fb0 */
  push32(0x107b2271u); f_107a3fb0();
  /* 107b2271 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2274 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 107b227a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107b227c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 107b2282 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2285 jne 0x107b2289 */
  if (!C.zf) goto L_107b2289;
  /* 107b2287 jmp 0x107b22bd */
  goto L_107b22bd;
L_107b2289:;
  /* 107b2289 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b228c push ecx */
  push32((uint32_t)(ECX));
  /* 107b228d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2290 push edx */
  push32((uint32_t)(EDX));
  /* 107b2291 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 107b2297 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b2299 push ecx */
  push32((uint32_t)(ECX));
  /* 107b229a call 0x107a77d0 */
  push32(0x107b229fu); f_107a77d0();
  /* 107b229f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b22a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b22a6 je 0x107b22b6 */
  if (C.zf) goto L_107b22b6;
  /* 107b22a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b22aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b22ad push edx */
  push32((uint32_t)(EDX));
  /* 107b22ae call 0x107a4a40 */
  push32(0x107b22b3u); f_107a4a40();
  /* 107b22b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b22b6:;
  /* 107b22b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b22b8 jmp 0x107b23f6 */
  goto L_107b23f6;
L_107b22bd:;
  /* 107b22bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b22c1 je 0x107b22d1 */
  if (C.zf) goto L_107b22d1;
  /* 107b22c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b22c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b22c8 push eax */
  push32((uint32_t)(EAX));
  /* 107b22c9 call 0x107a4a40 */
  push32(0x107b22ceu); f_107a4a40();
  /* 107b22ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b22d1:;
  /* 107b22d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b22d4 jmp 0x107b23f6 */
  goto L_107b23f6;
L_107b22d9:;
  /* 107b22d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b22dd jne 0x107b23f3 */
  if (!C.zf) goto L_107b23f3;
  /* 107b22e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 107b22ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b22f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 107b22f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b22f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107b22fe push edx */
  push32((uint32_t)(EDX));
  /* 107b22ff push 0x107cf7c0 */
  push32((uint32_t)(0x107cf7c0u));
  /* 107b2304 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2307 push eax */
  push32((uint32_t)(EAX));
  /* 107b2308 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b230b push ecx */
  push32((uint32_t)(ECX));
  /* 107b230c call 0x107b33f0 */
  push32(0x107b2311u); f_107b33f0();
  /* 107b2311 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2314 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2316 jne 0x107b2320 */
  if (!C.zf) goto L_107b2320;
  /* 107b2318 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b231b jmp 0x107b23f6 */
  goto L_107b23f6;
L_107b2320:;
  /* 107b2320 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107b2326 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107b2329 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 107b2333 jmp 0x107b2344 */
  goto L_107b2344;
L_107b2335:;
  /* 107b2335 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107b233b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b233e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_107b2344:;
  /* 107b2344 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b234b jge 0x107b23ef */
  if ((C.sf==C.of)) goto L_107b23ef;
  /* 107b2351 cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2358 jle 0x107b238b */
  if ((C.zf||C.sf!=C.of)) goto L_107b238b;
  /* 107b235a push 4 */
  push32((uint32_t)(0x4u));
  /* 107b235c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107b2362 mov dl, byte ptr [ecx*2 + 0x107cf7c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x107cf7c0)));
  /* 107b2369 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 107b236f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107b2375 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b237a push eax */
  push32((uint32_t)(EAX));
  /* 107b237b call 0x107a9fc0 */
  push32(0x107b2380u); f_107a9fc0();
  /* 107b2380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2383 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 107b2389 jmp 0x107b23be */
  goto L_107b23be;
L_107b238b:;
  /* 107b238b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107b2391 mov dl, byte ptr [ecx*2 + 0x107cf7c0] */
  DL = (r8((uint32_t)(ECX*2 + 0x107cf7c0)));
  /* 107b2398 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 107b239e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107b23a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b23a9 mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b23af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b23b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b23b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107b23b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_107b23be:;
  /* 107b23be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b23c5 je 0x107b23e8 */
  if (C.zf) goto L_107b23e8;
  /* 107b23c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107b23cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b23d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b23d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 107b23da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107b23de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107b23e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107b23e6 jmp 0x107b23ea */
  goto L_107b23ea;
L_107b23e8:;
  /* 107b23e8 jmp 0x107b23ef */
  goto L_107b23ef;
L_107b23ea:;
  /* 107b23ea jmp 0x107b2335 */
  goto L_107b2335;
L_107b23ef:;
  /* 107b23ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b23f1 jmp 0x107b23f6 */
  goto L_107b23f6;
L_107b23f3:;
  /* 107b23f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107b23f6:;
  /* 107b23f6 mov esp, ebp */
  ESP = (EBP);
  /* 107b23f8 pop ebp */
  EBP = (pop32());
  /* 107b23f9 ret  */
  ESPCHK(0x107b2170u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x107b2400 (10 bytes, 5 insns) */
void f_107b2400(void) {
  FTRACE(0x107b2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2400 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2401 mov ebp, esp */
  EBP = (ESP);
  /* 107b2403 mov eax, dword ptr [0x107ced88] */
  EAX = (r32((uint32_t)(0x107ced88)));
  /* 107b2408 pop ebp */
  EBP = (pop32());
  /* 107b2409 ret  */
  ESPCHK(0x107b2400u, _esp0);
  ESP += 4; return;
}

/* FUN_10012410 @ 0x107b2410 (575 bytes, 196 insns) */
void f_107b2410(void) {
  FTRACE(0x107b2410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2410 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2411 mov ebp, esp */
  EBP = (ESP);
  /* 107b2413 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b2415 push 0x107cb928 */
  push32((uint32_t)(0x107cb928u));
  /* 107b241a push 0x107ad0b8 */
  push32((uint32_t)(0x107ad0b8u));
  /* 107b241f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107b2425 push eax */
  push32((uint32_t)(EAX));
  /* 107b2426 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107b242d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2430 push ebx */
  push32((uint32_t)(EBX));
  /* 107b2431 push esi */
  push32((uint32_t)(ESI));
  /* 107b2432 push edi */
  push32((uint32_t)(EDI));
  /* 107b2433 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b2436 cmp dword ptr [0x107cf7cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b243d jne 0x107b248e */
  if (!C.zf) goto L_107b248e;
  /* 107b243f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 107b2442 push eax */
  push32((uint32_t)(EAX));
  /* 107b2443 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b2445 push 0x107cb05c */
  push32((uint32_t)(0x107cb05cu));
  /* 107b244a push 1 */
  push32((uint32_t)(0x1u));
  /* 107b244c call dword ptr [0x107d22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c4))), 0x107b2452u);
  /* 107b2452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2454 je 0x107b2462 */
  if (C.zf) goto L_107b2462;
  /* 107b2456 mov dword ptr [0x107cf7cc], 1 */
  w32((uint32_t)(0x107cf7cc), (0x1u));
  /* 107b2460 jmp 0x107b248e */
  goto L_107b248e;
L_107b2462:;
  /* 107b2462 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 107b2465 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2466 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b2468 push 0x107cb058 */
  push32((uint32_t)(0x107cb058u));
  /* 107b246d push 1 */
  push32((uint32_t)(0x1u));
  /* 107b246f push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2471 call dword ptr [0x107d22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c8))), 0x107b2477u);
  /* 107b2477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2479 je 0x107b2487 */
  if (C.zf) goto L_107b2487;
  /* 107b247b mov dword ptr [0x107cf7cc], 2 */
  w32((uint32_t)(0x107cf7cc), (0x2u));
  /* 107b2485 jmp 0x107b248e */
  goto L_107b248e;
L_107b2487:;
  /* 107b2487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2489 jmp 0x107b2669 */
  goto L_107b2669;
L_107b248e:;
  /* 107b248e cmp dword ptr [0x107cf7cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2495 jne 0x107b24b2 */
  if (!C.zf) goto L_107b24b2;
  /* 107b2497 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b249a push edx */
  push32((uint32_t)(EDX));
  /* 107b249b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b249e push eax */
  push32((uint32_t)(EAX));
  /* 107b249f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b24a2 push ecx */
  push32((uint32_t)(ECX));
  /* 107b24a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b24a6 push edx */
  push32((uint32_t)(EDX));
  /* 107b24a7 call dword ptr [0x107d22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c4))), 0x107b24adu);
  /* 107b24ad jmp 0x107b2669 */
  goto L_107b2669;
L_107b24b2:;
  /* 107b24b2 cmp dword ptr [0x107cf7cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b24b9 jne 0x107b2667 */
  if (!C.zf) goto L_107b2667;
  /* 107b24bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b24c3 jne 0x107b24cd */
  if (!C.zf) goto L_107b24cd;
  /* 107b24c5 mov eax, dword ptr [0x107cf740] */
  EAX = (r32((uint32_t)(0x107cf740)));
  /* 107b24ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_107b24cd:;
  /* 107b24cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107b24cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107b24d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b24d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b24d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b24d8 push ecx */
  push32((uint32_t)(ECX));
  /* 107b24d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b24dc push edx */
  push32((uint32_t)(EDX));
  /* 107b24dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107b24e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b24e5 push eax */
  push32((uint32_t)(EAX));
  /* 107b24e6 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b24ecu);
  /* 107b24ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107b24ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b24f3 jne 0x107b24fc */
  if (!C.zf) goto L_107b24fc;
  /* 107b24f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b24f7 jmp 0x107b2669 */
  goto L_107b2669;
L_107b24fc:;
  /* 107b24fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b2503 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b2506 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2509 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107b250b call 0x107a7150 */
  push32(0x107b2510u); f_107a7150();
  /* 107b2510 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 107b2513 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b2516 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107b2519 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107b251c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b251f push edx */
  push32((uint32_t)(EDX));
  /* 107b2520 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2522 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107b2525 push eax */
  push32((uint32_t)(EAX));
  /* 107b2526 call 0x107a7d20 */
  push32(0x107b252bu); f_107a7d20();
  /* 107b252b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b252e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107b2535 jmp 0x107b254e */
  goto L_107b254e;
  /* 107b2537 mov eax, 1 */
  EAX = (0x1u);
  /* 107b253c ret  */
  ESPCHK(0x107b2410u, _esp0);
  ESP += 4; return;
  /* 107b253d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107b2540 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 107b2547 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107b254e:;
  /* 107b254e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2552 jne 0x107b255b */
  if (!C.zf) goto L_107b255b;
  /* 107b2554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2556 jmp 0x107b2669 */
  goto L_107b2669;
L_107b255b:;
  /* 107b255b push 0 */
  push32((uint32_t)(0x0u));
  /* 107b255d push 0 */
  push32((uint32_t)(0x0u));
  /* 107b255f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b2562 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2563 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107b2566 push edx */
  push32((uint32_t)(EDX));
  /* 107b2567 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b256a push eax */
  push32((uint32_t)(EAX));
  /* 107b256b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b256e push ecx */
  push32((uint32_t)(ECX));
  /* 107b256f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107b2574 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b2577 push edx */
  push32((uint32_t)(EDX));
  /* 107b2578 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b257eu);
  /* 107b257e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2580 jne 0x107b2589 */
  if (!C.zf) goto L_107b2589;
  /* 107b2582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2584 jmp 0x107b2669 */
  goto L_107b2669;
L_107b2589:;
  /* 107b2589 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107b2590 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b2593 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 107b2597 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b259a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107b259c call 0x107a7150 */
  push32(0x107b25a1u); f_107a7150();
  /* 107b25a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 107b25a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b25a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107b25aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107b25ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107b25b4 jmp 0x107b25cd */
  goto L_107b25cd;
  /* 107b25b6 mov eax, 1 */
  EAX = (0x1u);
  /* 107b25bb ret  */
  ESPCHK(0x107b2410u, _esp0);
  ESP += 4; return;
  /* 107b25bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107b25bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107b25c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107b25cd:;
  /* 107b25cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b25d1 jne 0x107b25da */
  if (!C.zf) goto L_107b25da;
  /* 107b25d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b25d5 jmp 0x107b2669 */
  goto L_107b2669;
L_107b25da:;
  /* 107b25da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b25de jne 0x107b25e9 */
  if (!C.zf) goto L_107b25e9;
  /* 107b25e0 mov edx, dword ptr [0x107cf730] */
  EDX = (r32((uint32_t)(0x107cf730)));
  /* 107b25e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_107b25e9:;
  /* 107b25e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b25ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b25ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 107b25f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b25f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b25fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 107b2602 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b2605 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2606 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b2609 push edx */
  push32((uint32_t)(EDX));
  /* 107b260a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107b260d push eax */
  push32((uint32_t)(EAX));
  /* 107b260e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2611 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2612 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b2615 push edx */
  push32((uint32_t)(EDX));
  /* 107b2616 call dword ptr [0x107d22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22c8))), 0x107b261cu);
  /* 107b261c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107b261f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2622 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b2625 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2627 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 107b262c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2632 je 0x107b2648 */
  if (C.zf) goto L_107b2648;
  /* 107b2634 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2637 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b263a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b263c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b2640 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2646 je 0x107b264c */
  if (C.zf) goto L_107b264c;
L_107b2648:;
  /* 107b2648 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b264a jmp 0x107b2669 */
  goto L_107b2669;
L_107b264c:;
  /* 107b264c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b264f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107b2651 push eax */
  push32((uint32_t)(EAX));
  /* 107b2652 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b2655 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2656 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b2659 push edx */
  push32((uint32_t)(EDX));
  /* 107b265a call 0x107abea0 */
  push32(0x107b265fu); f_107abea0();
  /* 107b265f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2662 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b2665 jmp 0x107b2669 */
  goto L_107b2669;
L_107b2667:;
  /* 107b2667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b2669:;
  /* 107b2669 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 107b266c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b266f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107b2676 pop edi */
  EDI = (pop32());
  /* 107b2677 pop esi */
  ESI = (pop32());
  /* 107b2678 pop ebx */
  EBX = (pop32());
  /* 107b2679 mov esp, ebp */
  ESP = (EBP);
  /* 107b267b pop ebp */
  EBP = (pop32());
  /* 107b267c ret  */
  ESPCHK(0x107b2410u, _esp0);
  ESP += 4; return;
}

/* FUN_10012680 @ 0x107b2680 (208 bytes, 85 insns) */
void f_107b2680(void) {
  FTRACE(0x107b2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2680 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2681 mov ebp, esp */
  EBP = (ESP);
  /* 107b2683 push edi */
  push32((uint32_t)(EDI));
  /* 107b2684 push esi */
  push32((uint32_t)(ESI));
  /* 107b2685 push ebx */
  push32((uint32_t)(EBX));
  /* 107b2686 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107b2689 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107b268c lea eax, [0x107cf728] */
  EAX = ((uint32_t)(0x107cf728));
  /* 107b2692 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2696 jne 0x107b26d3 */
  if (!C.zf) goto L_107b26d3;
  /* 107b2698 mov al, 0xff */
  AL = (0xffu);
  /* 107b269a mov edi, edi */
  EDI = (EDI);
L_107b269c:;
  /* 107b269c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107b269e je 0x107b26ce */
  if (C.zf) goto L_107b26ce;
  /* 107b26a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107b26a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107b26a3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 107b26a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107b26a6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b26a8 je 0x107b269c */
  if (C.zf) goto L_107b269c;
  /* 107b26aa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107b26ac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b26ae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107b26b0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107b26b3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107b26b5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107b26b7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 107b26b9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107b26bb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b26bd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107b26bf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107b26c2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107b26c4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107b26c6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b26c8 je 0x107b269c */
  if (C.zf) goto L_107b269c;
  /* 107b26ca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107b26cc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_107b26ce:;
  /* 107b26ce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 107b26d1 jmp 0x107b274b */
  goto L_107b274b;
L_107b26d3:;
  /* 107b26d3 lock inc dword ptr [0x107cf8bc] */
  x86_unimpl("lock inc @ 0x107b26d3");
  /* 107b26da cmp dword ptr [0x107cf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b26e1 jg 0x107b26e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b26e7;
  /* 107b26e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b26e5 jmp 0x107b26fc */
  goto L_107b26fc;
L_107b26e7:;
  /* 107b26e7 lock dec dword ptr [0x107cf8bc] */
  x86_unimpl("lock dec @ 0x107b26e7");
  /* 107b26ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b26f0 call 0x107a79b0 */
  push32(0x107b26f5u); f_107a79b0();
  /* 107b26f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_107b26fc:;
  /* 107b26fc mov eax, 0xff */
  EAX = (0xffu);
  /* 107b2701 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 107b2703 nop  */
  /* nop */
L_107b2704:;
  /* 107b2704 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107b2706 je 0x107b272f */
  if (C.zf) goto L_107b272f;
  /* 107b2708 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107b270a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107b270b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 107b270d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107b270e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b2710 je 0x107b2704 */
  if (C.zf) goto L_107b2704;
  /* 107b2712 push eax */
  push32((uint32_t)(EAX));
  /* 107b2713 push ebx */
  push32((uint32_t)(EBX));
  /* 107b2714 call 0x107b37f0 */
  push32(0x107b2719u); f_107b37f0();
  /* 107b2719 mov ebx, eax */
  EBX = (EAX);
  /* 107b271b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b271e call 0x107b37f0 */
  push32(0x107b2723u); f_107b37f0();
  /* 107b2723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2726 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b2728 je 0x107b2704 */
  if (C.zf) goto L_107b2704;
  /* 107b272a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b272c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107b272f:;
  /* 107b272f mov ebx, eax */
  EBX = (EAX);
  /* 107b2731 pop eax */
  EAX = (pop32());
  /* 107b2732 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2734 jne 0x107b273f */
  if (!C.zf) goto L_107b273f;
  /* 107b2736 lock dec dword ptr [0x107cf8bc] */
  x86_unimpl("lock dec @ 0x107b2736");
  /* 107b273d jmp 0x107b2749 */
  goto L_107b2749;
L_107b273f:;
  /* 107b273f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b2741 call 0x107a7a50 */
  push32(0x107b2746u); f_107a7a50();
  /* 107b2746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b2749:;
  /* 107b2749 mov eax, ebx */
  EAX = (EBX);
L_107b274b:;
  /* 107b274b pop ebx */
  EBX = (pop32());
  /* 107b274c pop esi */
  ESI = (pop32());
  /* 107b274d pop edi */
  EDI = (pop32());
  /* 107b274e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107b274f ret  */
  ESPCHK(0x107b2680u, _esp0);
  ESP += 4; return;
}

/* FUN_10012750 @ 0x107b2750 (257 bytes, 103 insns) */
void f_107b2750(void) {
  FTRACE(0x107b2750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2750 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2751 mov ebp, esp */
  EBP = (ESP);
  /* 107b2753 push edi */
  push32((uint32_t)(EDI));
  /* 107b2754 push esi */
  push32((uint32_t)(ESI));
  /* 107b2755 push ebx */
  push32((uint32_t)(EBX));
  /* 107b2756 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b2759 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b275b je 0x107b284a */
  if (C.zf) goto L_107b284a;
  /* 107b2761 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2764 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 107b2767 lea eax, [0x107cf728] */
  EAX = ((uint32_t)(0x107cf728));
  /* 107b276d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2771 jne 0x107b27c1 */
  if (!C.zf) goto L_107b27c1;
  /* 107b2773 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 107b2775 mov bl, 0x5a */
  BL = (0x5au);
  /* 107b2777 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 107b2779 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107b277c:;
  /* 107b277c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 107b277e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107b2780 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 107b2782 je 0x107b27a5 */
  if (C.zf) goto L_107b27a5;
  /* 107b2784 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107b2786 je 0x107b27a5 */
  if (C.zf) goto L_107b27a5;
  /* 107b2788 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107b2789 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107b278a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b278c jb 0x107b2794 */
  if (C.cf) goto L_107b2794;
  /* 107b278e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b2790 ja 0x107b2794 */
  if ((!C.cf&&!C.zf)) goto L_107b2794;
  /* 107b2792 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_107b2794:;
  /* 107b2794 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b2796 jb 0x107b279e */
  if (C.cf) goto L_107b279e;
  /* 107b2798 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b279a ja 0x107b279e */
  if ((!C.cf&&!C.zf)) goto L_107b279e;
  /* 107b279c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_107b279e:;
  /* 107b279e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b27a0 jne 0x107b27af */
  if (!C.zf) goto L_107b27af;
  /* 107b27a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107b27a3 jne 0x107b277c */
  if (!C.zf) goto L_107b277c;
L_107b27a5:;
  /* 107b27a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b27a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b27a9 je 0x107b284a */
  if (C.zf) goto L_107b284a;
L_107b27af:;
  /* 107b27af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 107b27b4 jb 0x107b284a */
  if (C.cf) goto L_107b284a;
  /* 107b27ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b27bc jmp 0x107b284a */
  goto L_107b284a;
L_107b27c1:;
  /* 107b27c1 lock inc dword ptr [0x107cf8bc] */
  x86_unimpl("lock inc @ 0x107b27c1");
  /* 107b27c8 cmp dword ptr [0x107cf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b27cf jg 0x107b27d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b27d5;
  /* 107b27d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b27d3 jmp 0x107b27ee */
  goto L_107b27ee;
L_107b27d5:;
  /* 107b27d5 lock dec dword ptr [0x107cf8bc] */
  x86_unimpl("lock dec @ 0x107b27d5");
  /* 107b27dc mov ebx, ecx */
  EBX = (ECX);
  /* 107b27de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b27e0 call 0x107a79b0 */
  push32(0x107b27e5u); f_107a79b0();
  /* 107b27e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 107b27ec mov ecx, ebx */
  ECX = (EBX);
L_107b27ee:;
  /* 107b27ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b27f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 107b27f2 mov edi, edi */
  EDI = (EDI);
L_107b27f4:;
  /* 107b27f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107b27f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b27f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 107b27fa je 0x107b281f */
  if (C.zf) goto L_107b281f;
  /* 107b27fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 107b27fe je 0x107b281f */
  if (C.zf) goto L_107b281f;
  /* 107b2800 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107b2801 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107b2802 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2803 push eax */
  push32((uint32_t)(EAX));
  /* 107b2804 push ebx */
  push32((uint32_t)(EBX));
  /* 107b2805 call 0x107b37f0 */
  push32(0x107b280au); f_107b37f0();
  /* 107b280a mov ebx, eax */
  EBX = (EAX);
  /* 107b280c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b280f call 0x107b37f0 */
  push32(0x107b2814u); f_107b37f0();
  /* 107b2814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2817 pop ecx */
  ECX = (pop32());
  /* 107b2818 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b281a jne 0x107b2825 */
  if (!C.zf) goto L_107b2825;
  /* 107b281c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107b281d jne 0x107b27f4 */
  if (!C.zf) goto L_107b27f4;
L_107b281f:;
  /* 107b281f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2821 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2823 je 0x107b282e */
  if (C.zf) goto L_107b282e;
L_107b2825:;
  /* 107b2825 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 107b282a jb 0x107b282e */
  if (C.cf) goto L_107b282e;
  /* 107b282c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_107b282e:;
  /* 107b282e pop eax */
  EAX = (pop32());
  /* 107b282f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2831 jne 0x107b283c */
  if (!C.zf) goto L_107b283c;
  /* 107b2833 lock dec dword ptr [0x107cf8bc] */
  x86_unimpl("lock dec @ 0x107b2833");
  /* 107b283a jmp 0x107b284a */
  goto L_107b284a;
L_107b283c:;
  /* 107b283c mov ebx, ecx */
  EBX = (ECX);
  /* 107b283e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b2840 call 0x107a7a50 */
  push32(0x107b2845u); f_107a7a50();
  /* 107b2845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2848 mov ecx, ebx */
  ECX = (EBX);
L_107b284a:;
  /* 107b284a mov eax, ecx */
  EAX = (ECX);
  /* 107b284c pop ebx */
  EBX = (pop32());
  /* 107b284d pop esi */
  ESI = (pop32());
  /* 107b284e pop edi */
  EDI = (pop32());
  /* 107b284f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107b2850 ret  */
  ESPCHK(0x107b2750u, _esp0);
  ESP += 4; return;
}

/* FUN_10012860 @ 0x107b2860 (255 bytes, 88 insns) */
void f_107b2860(void) {
  FTRACE(0x107b2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2860 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2861 mov ebp, esp */
  EBP = (ESP);
  /* 107b2863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107b2866:;
  /* 107b2866 cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b286d jle 0x107b2886 */
  if ((C.zf||C.sf!=C.of)) goto L_107b2886;
  /* 107b286f push 8 */
  push32((uint32_t)(0x8u));
  /* 107b2871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2874 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2876 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b2878 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2879 call 0x107a9fc0 */
  push32(0x107b287eu); f_107a9fc0();
  /* 107b287e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2881 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107b2884 jmp 0x107b289f */
  goto L_107b289f;
L_107b2886:;
  /* 107b2886 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b288b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b288d mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b2893 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2895 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b2899 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107b289c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107b289f:;
  /* 107b289f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b28a3 je 0x107b28b0 */
  if (C.zf) goto L_107b28b0;
  /* 107b28a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b28a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b28ab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b28ae jmp 0x107b2866 */
  goto L_107b2866;
L_107b28b0:;
  /* 107b28b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b28b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b28b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b28b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b28ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b28bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b28c0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b28c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b28c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b28c9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b28cd je 0x107b28d5 */
  if (C.zf) goto L_107b28d5;
  /* 107b28cf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b28d3 jne 0x107b28e8 */
  if (!C.zf) goto L_107b28e8;
L_107b28d5:;
  /* 107b28d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b28d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b28da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b28dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b28df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b28e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b28e5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107b28e8:;
  /* 107b28e8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107b28ef:;
  /* 107b28ef cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b28f6 jle 0x107b290b */
  if ((C.zf||C.sf!=C.of)) goto L_107b290b;
  /* 107b28f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 107b28fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b28fd push edx */
  push32((uint32_t)(EDX));
  /* 107b28fe call 0x107a9fc0 */
  push32(0x107b2903u); f_107a9fc0();
  /* 107b2903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2906 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b2909 jmp 0x107b2920 */
  goto L_107b2920;
L_107b290b:;
  /* 107b290b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b290e mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b2914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2916 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b291a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107b291d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107b2920:;
  /* 107b2920 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2924 je 0x107b294b */
  if (C.zf) goto L_107b294b;
  /* 107b2926 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b2929 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b292c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b292f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 107b2933 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b2936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2939 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b293b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b293d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b2940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2943 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2946 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107b2949 jmp 0x107b28ef */
  goto L_107b28ef;
L_107b294b:;
  /* 107b294b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b294f jne 0x107b2958 */
  if (!C.zf) goto L_107b2958;
  /* 107b2951 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b2954 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b2956 jmp 0x107b295b */
  goto L_107b295b;
L_107b2958:;
  /* 107b2958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107b295b:;
  /* 107b295b mov esp, ebp */
  ESP = (EBP);
  /* 107b295d pop ebp */
  EBP = (pop32());
  /* 107b295e ret  */
  ESPCHK(0x107b2860u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x107b2960 (17 bytes, 8 insns) */
void f_107b2960(void) {
  FTRACE(0x107b2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2960 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2961 mov ebp, esp */
  EBP = (ESP);
  /* 107b2963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2966 push eax */
  push32((uint32_t)(EAX));
  /* 107b2967 call 0x107b2860 */
  push32(0x107b296cu); f_107b2860();
  /* 107b296c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b296f pop ebp */
  EBP = (pop32());
  /* 107b2970 ret  */
  ESPCHK(0x107b2960u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x107b2980 (297 bytes, 106 insns) */
void f_107b2980(void) {
  FTRACE(0x107b2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2980 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2981 mov ebp, esp */
  EBP = (ESP);
  /* 107b2983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2986 push esi */
  push32((uint32_t)(ESI));
L_107b2987:;
  /* 107b2987 cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b298e jle 0x107b29a7 */
  if ((C.zf||C.sf!=C.of)) goto L_107b29a7;
  /* 107b2990 push 8 */
  push32((uint32_t)(0x8u));
  /* 107b2992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2995 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2997 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b2999 push ecx */
  push32((uint32_t)(ECX));
  /* 107b299a call 0x107a9fc0 */
  push32(0x107b299fu); f_107a9fc0();
  /* 107b299f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b29a2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b29a5 jmp 0x107b29c0 */
  goto L_107b29c0;
L_107b29a7:;
  /* 107b29a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b29aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b29ac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b29ae mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b29b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b29b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b29ba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107b29bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107b29c0:;
  /* 107b29c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b29c4 je 0x107b29d1 */
  if (C.zf) goto L_107b29d1;
  /* 107b29c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b29c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b29cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b29cf jmp 0x107b2987 */
  goto L_107b2987;
L_107b29d1:;
  /* 107b29d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b29d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b29d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b29d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b29db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b29de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b29e1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b29e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b29e7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107b29ea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b29ee je 0x107b29f6 */
  if (C.zf) goto L_107b29f6;
  /* 107b29f0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b29f4 jne 0x107b2a09 */
  if (!C.zf) goto L_107b2a09;
L_107b29f6:;
  /* 107b29f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b29f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b29fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b29fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b2a00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2a03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2a06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107b2a09:;
  /* 107b2a09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107b2a10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107b2a17:;
  /* 107b2a17 cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2a1e jle 0x107b2a33 */
  if ((C.zf||C.sf!=C.of)) goto L_107b2a33;
  /* 107b2a20 push 4 */
  push32((uint32_t)(0x4u));
  /* 107b2a22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b2a25 push edx */
  push32((uint32_t)(EDX));
  /* 107b2a26 call 0x107a9fc0 */
  push32(0x107b2a2bu); f_107a9fc0();
  /* 107b2a2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2a2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107b2a31 jmp 0x107b2a48 */
  goto L_107b2a48;
L_107b2a33:;
  /* 107b2a33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b2a36 mov ecx, dword ptr [0x107cdc98] */
  ECX = (r32((uint32_t)(0x107cdc98)));
  /* 107b2a3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2a3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107b2a42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107b2a45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_107b2a48:;
  /* 107b2a48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2a4c je 0x107b2a89 */
  if (C.zf) goto L_107b2a89;
  /* 107b2a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2a50 push 0xa */
  push32((uint32_t)(0xau));
  /* 107b2a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b2a55 push eax */
  push32((uint32_t)(EAX));
  /* 107b2a56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2a59 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2a5a call 0x107b3920 */
  push32(0x107b2a5fu); f_107b3920();
  /* 107b2a5f mov ecx, eax */
  ECX = (EAX);
  /* 107b2a61 mov esi, edx */
  ESI = (EDX);
  /* 107b2a63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b2a66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2a69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b2a6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2a6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2a6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b2a71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 107b2a74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2a79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b2a7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b2a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2a81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2a84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107b2a87 jmp 0x107b2a17 */
  goto L_107b2a17;
L_107b2a89:;
  /* 107b2a89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2a8d jne 0x107b2a9e */
  if (!C.zf) goto L_107b2a9e;
  /* 107b2a8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2a92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b2a94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b2a97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2a9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b2a9c jmp 0x107b2aa4 */
  goto L_107b2aa4;
L_107b2a9e:;
  /* 107b2a9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2aa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_107b2aa4:;
  /* 107b2aa4 pop esi */
  ESI = (pop32());
  /* 107b2aa5 mov esp, ebp */
  ESP = (EBP);
  /* 107b2aa7 pop ebp */
  EBP = (pop32());
  /* 107b2aa8 ret  */
  ESPCHK(0x107b2980u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ab0 @ 0x107b2ab0 (61 bytes, 18 insns) */
void f_107b2ab0(void) {
  FTRACE(0x107b2ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2ab1 mov ebp, esp */
  EBP = (ESP);
  /* 107b2ab3 cmp dword ptr [0x107cf888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2aba jne 0x107b2aeb */
  if (!C.zf) goto L_107b2aeb;
  /* 107b2abc push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b2abe call 0x107a79b0 */
  push32(0x107b2ac3u); f_107a79b0();
  /* 107b2ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2ac6 cmp dword ptr [0x107cf888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2acd jne 0x107b2ae1 */
  if (!C.zf) goto L_107b2ae1;
  /* 107b2acf call 0x107b2b10 */
  push32(0x107b2ad4u); f_107b2b10();
  /* 107b2ad4 mov eax, dword ptr [0x107cf888] */
  EAX = (r32((uint32_t)(0x107cf888)));
  /* 107b2ad9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2adc mov dword ptr [0x107cf888], eax */
  w32((uint32_t)(0x107cf888), (EAX));
L_107b2ae1:;
  /* 107b2ae1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b2ae3 call 0x107a7a50 */
  push32(0x107b2ae8u); f_107a7a50();
  /* 107b2ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b2aeb:;
  /* 107b2aeb pop ebp */
  EBP = (pop32());
  /* 107b2aec ret  */
  ESPCHK(0x107b2ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x107b2af0 (30 bytes, 11 insns) */
void f_107b2af0(void) {
  FTRACE(0x107b2af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2af0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2af1 mov ebp, esp */
  EBP = (ESP);
  /* 107b2af3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b2af5 call 0x107a79b0 */
  push32(0x107b2afau); f_107a79b0();
  /* 107b2afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2afd call 0x107b2b10 */
  push32(0x107b2b02u); f_107b2b10();
  /* 107b2b02 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b2b04 call 0x107a7a50 */
  push32(0x107b2b09u); f_107a7a50();
  /* 107b2b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2b0c pop ebp */
  EBP = (pop32());
  /* 107b2b0d ret  */
  ESPCHK(0x107b2af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b10 @ 0x107b2b10 (939 bytes, 266 insns) */
void f_107b2b10(void) {
  FTRACE(0x107b2b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2b10 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2b11 mov ebp, esp */
  EBP = (ESP);
  /* 107b2b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2b16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b2b1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b2b1f call 0x107a79b0 */
  push32(0x107b2b24u); f_107a79b0();
  /* 107b2b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2b27 mov dword ptr [0x107cf7d0], 0 */
  w32((uint32_t)(0x107cf7d0), (0x0u));
  /* 107b2b31 mov dword ptr [0x107cee38], 0xffffffff */
  w32((uint32_t)(0x107cee38), (0xffffffffu));
  /* 107b2b3b mov eax, dword ptr [0x107cee38] */
  EAX = (r32((uint32_t)(0x107cee38)));
  /* 107b2b40 mov dword ptr [0x107cee28], eax */
  w32((uint32_t)(0x107cee28), (EAX));
  /* 107b2b45 push 0x107cb988 */
  push32((uint32_t)(0x107cb988u));
  /* 107b2b4a call 0x107b3990 */
  push32(0x107b2b4fu); f_107b3990();
  /* 107b2b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2b52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b2b55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2b59 jne 0x107b2c93 */
  if (!C.zf) goto L_107b2c93;
  /* 107b2b5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b2b61 call 0x107a7a50 */
  push32(0x107b2b66u); f_107a7a50();
  /* 107b2b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2b69 push 0x107cf7d8 */
  push32((uint32_t)(0x107cf7d8u));
  /* 107b2b6e call dword ptr [0x107d2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2288))), 0x107b2b74u);
  /* 107b2b74 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2b77 je 0x107b2c8e */
  if (C.zf) goto L_107b2c8e;
  /* 107b2b7d mov dword ptr [0x107cf7d0], 1 */
  w32((uint32_t)(0x107cf7d0), (0x1u));
  /* 107b2b87 mov ecx, dword ptr [0x107cf7d8] */
  ECX = (r32((uint32_t)(0x107cf7d8)));
  /* 107b2b8d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b2b90 mov dword ptr [0x107ced90], ecx */
  w32((uint32_t)(0x107ced90), (ECX));
  /* 107b2b96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2b98 mov dx, word ptr [0x107cf81e] */
  DX = (r16((uint32_t)(0x107cf81e)));
  /* 107b2b9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b2ba1 je 0x107b2bb9 */
  if (C.zf) goto L_107b2bb9;
  /* 107b2ba3 mov eax, dword ptr [0x107cf82c] */
  EAX = (r32((uint32_t)(0x107cf82c)));
  /* 107b2ba8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b2bab mov ecx, dword ptr [0x107ced90] */
  ECX = (r32((uint32_t)(0x107ced90)));
  /* 107b2bb1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2bb3 mov dword ptr [0x107ced90], ecx */
  w32((uint32_t)(0x107ced90), (ECX));
L_107b2bb9:;
  /* 107b2bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2bbb mov dx, word ptr [0x107cf872] */
  DX = (r16((uint32_t)(0x107cf872)));
  /* 107b2bc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b2bc4 je 0x107b2bee */
  if (C.zf) goto L_107b2bee;
  /* 107b2bc6 cmp dword ptr [0x107cf880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2bcd je 0x107b2bee */
  if (C.zf) goto L_107b2bee;
  /* 107b2bcf mov dword ptr [0x107ced94], 1 */
  w32((uint32_t)(0x107ced94), (0x1u));
  /* 107b2bd9 mov eax, dword ptr [0x107cf880] */
  EAX = (r32((uint32_t)(0x107cf880)));
  /* 107b2bde sub eax, dword ptr [0x107cf82c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cf82c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b2be4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b2be7 mov dword ptr [0x107ced98], eax */
  w32((uint32_t)(0x107ced98), (EAX));
  /* 107b2bec jmp 0x107b2c02 */
  goto L_107b2c02;
L_107b2bee:;
  /* 107b2bee mov dword ptr [0x107ced94], 0 */
  w32((uint32_t)(0x107ced94), (0x0u));
  /* 107b2bf8 mov dword ptr [0x107ced98], 0 */
  w32((uint32_t)(0x107ced98), (0x0u));
L_107b2c02:;
  /* 107b2c02 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107b2c05 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2c08 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107b2c0a mov edx, dword ptr [0x107cee1c] */
  EDX = (r32((uint32_t)(0x107cee1c)));
  /* 107b2c10 push edx */
  push32((uint32_t)(EDX));
  /* 107b2c11 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b2c13 push 0x107cf7dc */
  push32((uint32_t)(0x107cf7dcu));
  /* 107b2c18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107b2c1d mov eax, dword ptr [0x107cf740] */
  EAX = (r32((uint32_t)(0x107cf740)));
  /* 107b2c22 push eax */
  push32((uint32_t)(EAX));
  /* 107b2c23 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b2c29u);
  /* 107b2c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2c2b je 0x107b2c3f */
  if (C.zf) goto L_107b2c3f;
  /* 107b2c2d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2c31 jne 0x107b2c3f */
  if (!C.zf) goto L_107b2c3f;
  /* 107b2c33 mov ecx, dword ptr [0x107cee1c] */
  ECX = (r32((uint32_t)(0x107cee1c)));
  /* 107b2c39 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 107b2c3d jmp 0x107b2c48 */
  goto L_107b2c48;
L_107b2c3f:;
  /* 107b2c3f mov edx, dword ptr [0x107cee1c] */
  EDX = (r32((uint32_t)(0x107cee1c)));
  /* 107b2c45 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_107b2c48:;
  /* 107b2c48 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107b2c4b push eax */
  push32((uint32_t)(EAX));
  /* 107b2c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2c4e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107b2c50 mov ecx, dword ptr [0x107cee20] */
  ECX = (r32((uint32_t)(0x107cee20)));
  /* 107b2c56 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2c57 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b2c59 push 0x107cf830 */
  push32((uint32_t)(0x107cf830u));
  /* 107b2c5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107b2c63 mov edx, dword ptr [0x107cf740] */
  EDX = (r32((uint32_t)(0x107cf740)));
  /* 107b2c69 push edx */
  push32((uint32_t)(EDX));
  /* 107b2c6a call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b2c70u);
  /* 107b2c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2c72 je 0x107b2c85 */
  if (C.zf) goto L_107b2c85;
  /* 107b2c74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2c78 jne 0x107b2c85 */
  if (!C.zf) goto L_107b2c85;
  /* 107b2c7a mov eax, dword ptr [0x107cee20] */
  EAX = (r32((uint32_t)(0x107cee20)));
  /* 107b2c7f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 107b2c83 jmp 0x107b2c8e */
  goto L_107b2c8e;
L_107b2c85:;
  /* 107b2c85 mov ecx, dword ptr [0x107cee20] */
  ECX = (r32((uint32_t)(0x107cee20)));
  /* 107b2c8b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_107b2c8e:;
  /* 107b2c8e jmp 0x107b2eb7 */
  goto L_107b2eb7;
L_107b2c93:;
  /* 107b2c93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2c96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b2c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2c9b je 0x107b2cbd */
  if (C.zf) goto L_107b2cbd;
  /* 107b2c9d cmp dword ptr [0x107cf884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2ca4 je 0x107b2ccc */
  if (C.zf) goto L_107b2ccc;
  /* 107b2ca6 mov ecx, dword ptr [0x107cf884] */
  ECX = (r32((uint32_t)(0x107cf884)));
  /* 107b2cac push ecx */
  push32((uint32_t)(ECX));
  /* 107b2cad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2cb0 push edx */
  push32((uint32_t)(EDX));
  /* 107b2cb1 call 0x107afc40 */
  push32(0x107b2cb6u); f_107afc40();
  /* 107b2cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b2cbb jne 0x107b2ccc */
  if (!C.zf) goto L_107b2ccc;
L_107b2cbd:;
  /* 107b2cbd push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b2cbf call 0x107a7a50 */
  push32(0x107b2cc4u); f_107a7a50();
  /* 107b2cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2cc7 jmp 0x107b2eb7 */
  goto L_107b2eb7;
L_107b2ccc:;
  /* 107b2ccc push 2 */
  push32((uint32_t)(0x2u));
  /* 107b2cce mov eax, dword ptr [0x107cf884] */
  EAX = (r32((uint32_t)(0x107cf884)));
  /* 107b2cd3 push eax */
  push32((uint32_t)(EAX));
  /* 107b2cd4 call 0x107a4a40 */
  push32(0x107b2cd9u); f_107a4a40();
  /* 107b2cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2cdc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 107b2ce1 push 0x107cb980 */
  push32((uint32_t)(0x107cb980u));
  /* 107b2ce6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b2ce8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2ceb push ecx */
  push32((uint32_t)(ECX));
  /* 107b2cec call 0x107a6de0 */
  push32(0x107b2cf1u); f_107a6de0();
  /* 107b2cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2cf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2cf7 push eax */
  push32((uint32_t)(EAX));
  /* 107b2cf8 call 0x107a3fb0 */
  push32(0x107b2cfdu); f_107a3fb0();
  /* 107b2cfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d00 mov dword ptr [0x107cf884], eax */
  w32((uint32_t)(0x107cf884), (EAX));
  /* 107b2d05 cmp dword ptr [0x107cf884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2d0c jne 0x107b2d1d */
  if (!C.zf) goto L_107b2d1d;
  /* 107b2d0e push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b2d10 call 0x107a7a50 */
  push32(0x107b2d15u); f_107a7a50();
  /* 107b2d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d18 jmp 0x107b2eb7 */
  goto L_107b2eb7;
L_107b2d1d:;
  /* 107b2d1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d20 push edx */
  push32((uint32_t)(EDX));
  /* 107b2d21 mov eax, dword ptr [0x107cf884] */
  EAX = (r32((uint32_t)(0x107cf884)));
  /* 107b2d26 push eax */
  push32((uint32_t)(EAX));
  /* 107b2d27 call 0x107a6f60 */
  push32(0x107b2d2cu); f_107a6f60();
  /* 107b2d2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d2f push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b2d31 call 0x107a7a50 */
  push32(0x107b2d36u); f_107a7a50();
  /* 107b2d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d39 push 3 */
  push32((uint32_t)(0x3u));
  /* 107b2d3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d3e push ecx */
  push32((uint32_t)(ECX));
  /* 107b2d3f mov edx, dword ptr [0x107cee1c] */
  EDX = (r32((uint32_t)(0x107cee1c)));
  /* 107b2d45 push edx */
  push32((uint32_t)(EDX));
  /* 107b2d46 call 0x107a77d0 */
  push32(0x107b2d4bu); f_107a77d0();
  /* 107b2d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d4e mov eax, dword ptr [0x107cee1c] */
  EAX = (r32((uint32_t)(0x107cee1c)));
  /* 107b2d53 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 107b2d57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d5a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b2d60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d63 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b2d66 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2d69 jne 0x107b2d7d */
  if (!C.zf) goto L_107b2d7d;
  /* 107b2d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b2d6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b2d74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d7a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107b2d7d:;
  /* 107b2d7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d80 push eax */
  push32((uint32_t)(EAX));
  /* 107b2d81 call 0x107b2860 */
  push32(0x107b2d86u); f_107b2860();
  /* 107b2d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2d89 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b2d8f mov dword ptr [0x107ced90], eax */
  w32((uint32_t)(0x107ced90), (EAX));
L_107b2d94:;
  /* 107b2d94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2d97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b2d9a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2d9d je 0x107b2db5 */
  if (C.zf) goto L_107b2db5;
  /* 107b2d9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2da2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b2da5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2da8 jl 0x107b2dc0 */
  if ((C.sf!=C.of)) goto L_107b2dc0;
  /* 107b2daa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2dad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b2db0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2db3 jg 0x107b2dc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b2dc0;
L_107b2db5:;
  /* 107b2db5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2db8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2dbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b2dbe jmp 0x107b2d94 */
  goto L_107b2d94;
L_107b2dc0:;
  /* 107b2dc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2dc3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b2dc6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2dc9 jne 0x107b2e65 */
  if (!C.zf) goto L_107b2e65;
  /* 107b2dcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2dd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2dd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b2dd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2ddb push edx */
  push32((uint32_t)(EDX));
  /* 107b2ddc call 0x107b2860 */
  push32(0x107b2de1u); f_107b2860();
  /* 107b2de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2de4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b2de7 mov ecx, dword ptr [0x107ced90] */
  ECX = (r32((uint32_t)(0x107ced90)));
  /* 107b2ded add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2def mov dword ptr [0x107ced90], ecx */
  w32((uint32_t)(0x107ced90), (ECX));
L_107b2df5:;
  /* 107b2df5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2df8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b2dfb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2dfe jl 0x107b2e16 */
  if ((C.sf!=C.of)) goto L_107b2e16;
  /* 107b2e00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e03 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b2e06 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2e09 jg 0x107b2e16 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b2e16;
  /* 107b2e0b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2e11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b2e14 jmp 0x107b2df5 */
  goto L_107b2df5;
L_107b2e16:;
  /* 107b2e16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e19 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b2e1c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2e1f jne 0x107b2e65 */
  if (!C.zf) goto L_107b2e65;
  /* 107b2e21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2e27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b2e2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e2d push ecx */
  push32((uint32_t)(ECX));
  /* 107b2e2e call 0x107b2860 */
  push32(0x107b2e33u); f_107b2860();
  /* 107b2e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2e36 mov edx, dword ptr [0x107ced90] */
  EDX = (r32((uint32_t)(0x107ced90)));
  /* 107b2e3c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2e3e mov dword ptr [0x107ced90], edx */
  w32((uint32_t)(0x107ced90), (EDX));
L_107b2e44:;
  /* 107b2e44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b2e4a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2e4d jl 0x107b2e65 */
  if ((C.sf!=C.of)) goto L_107b2e65;
  /* 107b2e4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107b2e55 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2e58 jg 0x107b2e65 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b2e65;
  /* 107b2e5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2e60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b2e63 jmp 0x107b2e44 */
  goto L_107b2e44;
L_107b2e65:;
  /* 107b2e65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2e69 je 0x107b2e79 */
  if (C.zf) goto L_107b2e79;
  /* 107b2e6b mov edx, dword ptr [0x107ced90] */
  EDX = (r32((uint32_t)(0x107ced90)));
  /* 107b2e71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b2e73 mov dword ptr [0x107ced90], edx */
  w32((uint32_t)(0x107ced90), (EDX));
L_107b2e79:;
  /* 107b2e79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107b2e7f mov dword ptr [0x107ced94], ecx */
  w32((uint32_t)(0x107ced94), (ECX));
  /* 107b2e85 cmp dword ptr [0x107ced94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107ced94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2e8c je 0x107b2eae */
  if (C.zf) goto L_107b2eae;
  /* 107b2e8e push 3 */
  push32((uint32_t)(0x3u));
  /* 107b2e90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b2e93 push edx */
  push32((uint32_t)(EDX));
  /* 107b2e94 mov eax, dword ptr [0x107cee20] */
  EAX = (r32((uint32_t)(0x107cee20)));
  /* 107b2e99 push eax */
  push32((uint32_t)(EAX));
  /* 107b2e9a call 0x107a77d0 */
  push32(0x107b2e9fu); f_107a77d0();
  /* 107b2e9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2ea2 mov ecx, dword ptr [0x107cee20] */
  ECX = (r32((uint32_t)(0x107cee20)));
  /* 107b2ea8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 107b2eac jmp 0x107b2eb7 */
  goto L_107b2eb7;
L_107b2eae:;
  /* 107b2eae mov edx, dword ptr [0x107cee20] */
  EDX = (r32((uint32_t)(0x107cee20)));
  /* 107b2eb4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_107b2eb7:;
  /* 107b2eb7 mov esp, ebp */
  ESP = (EBP);
  /* 107b2eb9 pop ebp */
  EBP = (pop32());
  /* 107b2eba ret  */
  ESPCHK(0x107b2b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x107b2ec0 (46 bytes, 18 insns) */
void f_107b2ec0(void) {
  FTRACE(0x107b2ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2ec1 mov ebp, esp */
  EBP = (ESP);
  /* 107b2ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2ec4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b2ec6 call 0x107a79b0 */
  push32(0x107b2ecbu); f_107a79b0();
  /* 107b2ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2ece mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2ed1 push eax */
  push32((uint32_t)(EAX));
  /* 107b2ed2 call 0x107b2ef0 */
  push32(0x107b2ed7u); f_107b2ef0();
  /* 107b2ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2eda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b2edd push 0xb */
  push32((uint32_t)(0xbu));
  /* 107b2edf call 0x107a7a50 */
  push32(0x107b2ee4u); f_107a7a50();
  /* 107b2ee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2ee7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b2eea mov esp, ebp */
  ESP = (EBP);
  /* 107b2eec pop ebp */
  EBP = (pop32());
  /* 107b2eed ret  */
  ESPCHK(0x107b2ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x107b2ef0 (762 bytes, 246 insns) */
void f_107b2ef0(void) {
  FTRACE(0x107b2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 107b2ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2ef4 cmp dword ptr [0x107ced94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107ced94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2efb jne 0x107b2f04 */
  if (!C.zf) goto L_107b2f04;
  /* 107b2efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2eff jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b2f04:;
  /* 107b2f04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2f07 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107b2f0a cmp ecx, dword ptr [0x107cee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2f10 jne 0x107b2f24 */
  if (!C.zf) goto L_107b2f24;
  /* 107b2f12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2f15 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107b2f18 cmp eax, dword ptr [0x107cee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2f1e je 0x107b30eb */
  if (C.zf) goto L_107b30eb;
L_107b2f24:;
  /* 107b2f24 cmp dword ptr [0x107cf7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b2f2b je 0x107b30a5 */
  if (C.zf) goto L_107b30a5;
  /* 107b2f31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2f33 mov cx, word ptr [0x107cf870] */
  CX = (r16((uint32_t)(0x107cf870)));
  /* 107b2f3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b2f3c jne 0x107b2f99 */
  if (!C.zf) goto L_107b2f99;
  /* 107b2f3e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2f40 mov dx, word ptr [0x107cf87e] */
  DX = (r16((uint32_t)(0x107cf87e)));
  /* 107b2f47 push edx */
  push32((uint32_t)(EDX));
  /* 107b2f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2f4a mov ax, word ptr [0x107cf87c] */
  AX = (r16((uint32_t)(0x107cf87c)));
  /* 107b2f50 push eax */
  push32((uint32_t)(EAX));
  /* 107b2f51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2f53 mov cx, word ptr [0x107cf87a] */
  CX = (r16((uint32_t)(0x107cf87a)));
  /* 107b2f5a push ecx */
  push32((uint32_t)(ECX));
  /* 107b2f5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2f5d mov dx, word ptr [0x107cf878] */
  DX = (r16((uint32_t)(0x107cf878)));
  /* 107b2f64 push edx */
  push32((uint32_t)(EDX));
  /* 107b2f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2f69 mov ax, word ptr [0x107cf874] */
  AX = (r16((uint32_t)(0x107cf874)));
  /* 107b2f6f push eax */
  push32((uint32_t)(EAX));
  /* 107b2f70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2f72 mov cx, word ptr [0x107cf876] */
  CX = (r16((uint32_t)(0x107cf876)));
  /* 107b2f79 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2f7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2f7c mov dx, word ptr [0x107cf872] */
  DX = (r16((uint32_t)(0x107cf872)));
  /* 107b2f83 push edx */
  push32((uint32_t)(EDX));
  /* 107b2f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2f87 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107b2f8a push ecx */
  push32((uint32_t)(ECX));
  /* 107b2f8b push 1 */
  push32((uint32_t)(0x1u));
  /* 107b2f8d push 1 */
  push32((uint32_t)(0x1u));
  /* 107b2f8f call 0x107b31f0 */
  push32(0x107b2f94u); f_107b31f0();
  /* 107b2f94 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b2f97 jmp 0x107b2fea */
  goto L_107b2fea;
L_107b2f99:;
  /* 107b2f99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2f9b mov dx, word ptr [0x107cf87e] */
  DX = (r16((uint32_t)(0x107cf87e)));
  /* 107b2fa2 push edx */
  push32((uint32_t)(EDX));
  /* 107b2fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2fa5 mov ax, word ptr [0x107cf87c] */
  AX = (r16((uint32_t)(0x107cf87c)));
  /* 107b2fab push eax */
  push32((uint32_t)(EAX));
  /* 107b2fac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2fae mov cx, word ptr [0x107cf87a] */
  CX = (r16((uint32_t)(0x107cf87a)));
  /* 107b2fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2fb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2fb8 mov dx, word ptr [0x107cf878] */
  DX = (r16((uint32_t)(0x107cf878)));
  /* 107b2fbf push edx */
  push32((uint32_t)(EDX));
  /* 107b2fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b2fc2 mov ax, word ptr [0x107cf876] */
  AX = (r16((uint32_t)(0x107cf876)));
  /* 107b2fc8 push eax */
  push32((uint32_t)(EAX));
  /* 107b2fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2fcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2fcf mov cx, word ptr [0x107cf872] */
  CX = (r16((uint32_t)(0x107cf872)));
  /* 107b2fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 107b2fd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b2fda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107b2fdd push eax */
  push32((uint32_t)(EAX));
  /* 107b2fde push 0 */
  push32((uint32_t)(0x0u));
  /* 107b2fe0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b2fe2 call 0x107b31f0 */
  push32(0x107b2fe7u); f_107b31f0();
  /* 107b2fe7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b2fea:;
  /* 107b2fea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b2fec mov cx, word ptr [0x107cf81c] */
  CX = (r16((uint32_t)(0x107cf81c)));
  /* 107b2ff3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b2ff5 jne 0x107b3052 */
  if (!C.zf) goto L_107b3052;
  /* 107b2ff7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b2ff9 mov dx, word ptr [0x107cf82a] */
  DX = (r16((uint32_t)(0x107cf82a)));
  /* 107b3000 push edx */
  push32((uint32_t)(EDX));
  /* 107b3001 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3003 mov ax, word ptr [0x107cf828] */
  AX = (r16((uint32_t)(0x107cf828)));
  /* 107b3009 push eax */
  push32((uint32_t)(EAX));
  /* 107b300a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b300c mov cx, word ptr [0x107cf826] */
  CX = (r16((uint32_t)(0x107cf826)));
  /* 107b3013 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3014 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3016 mov dx, word ptr [0x107cf824] */
  DX = (r16((uint32_t)(0x107cf824)));
  /* 107b301d push edx */
  push32((uint32_t)(EDX));
  /* 107b301e push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3022 mov ax, word ptr [0x107cf820] */
  AX = (r16((uint32_t)(0x107cf820)));
  /* 107b3028 push eax */
  push32((uint32_t)(EAX));
  /* 107b3029 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b302b mov cx, word ptr [0x107cf822] */
  CX = (r16((uint32_t)(0x107cf822)));
  /* 107b3032 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3033 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3035 mov dx, word ptr [0x107cf81e] */
  DX = (r16((uint32_t)(0x107cf81e)));
  /* 107b303c push edx */
  push32((uint32_t)(EDX));
  /* 107b303d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3040 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107b3043 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3044 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3046 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3048 call 0x107b31f0 */
  push32(0x107b304du); f_107b31f0();
  /* 107b304d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3050 jmp 0x107b30a3 */
  goto L_107b30a3;
L_107b3052:;
  /* 107b3052 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3054 mov dx, word ptr [0x107cf82a] */
  DX = (r16((uint32_t)(0x107cf82a)));
  /* 107b305b push edx */
  push32((uint32_t)(EDX));
  /* 107b305c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b305e mov ax, word ptr [0x107cf828] */
  AX = (r16((uint32_t)(0x107cf828)));
  /* 107b3064 push eax */
  push32((uint32_t)(EAX));
  /* 107b3065 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b3067 mov cx, word ptr [0x107cf826] */
  CX = (r16((uint32_t)(0x107cf826)));
  /* 107b306e push ecx */
  push32((uint32_t)(ECX));
  /* 107b306f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3071 mov dx, word ptr [0x107cf824] */
  DX = (r16((uint32_t)(0x107cf824)));
  /* 107b3078 push edx */
  push32((uint32_t)(EDX));
  /* 107b3079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b307b mov ax, word ptr [0x107cf822] */
  AX = (r16((uint32_t)(0x107cf822)));
  /* 107b3081 push eax */
  push32((uint32_t)(EAX));
  /* 107b3082 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3084 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3086 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b3088 mov cx, word ptr [0x107cf81e] */
  CX = (r16((uint32_t)(0x107cf81e)));
  /* 107b308f push ecx */
  push32((uint32_t)(ECX));
  /* 107b3090 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3093 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107b3096 push eax */
  push32((uint32_t)(EAX));
  /* 107b3097 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3099 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b309b call 0x107b31f0 */
  push32(0x107b30a0u); f_107b31f0();
  /* 107b30a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b30a3:;
  /* 107b30a3 jmp 0x107b30eb */
  goto L_107b30eb;
L_107b30a5:;
  /* 107b30a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30ab push 2 */
  push32((uint32_t)(0x2u));
  /* 107b30ad push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30af push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b30b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 107b30b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b30b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107b30bb push edx */
  push32((uint32_t)(EDX));
  /* 107b30bc push 1 */
  push32((uint32_t)(0x1u));
  /* 107b30be push 1 */
  push32((uint32_t)(0x1u));
  /* 107b30c0 call 0x107b31f0 */
  push32(0x107b30c5u); f_107b31f0();
  /* 107b30c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b30c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30ca push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30cc push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30ce push 2 */
  push32((uint32_t)(0x2u));
  /* 107b30d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 107b30d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 107b30d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b30db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107b30de push ecx */
  push32((uint32_t)(ECX));
  /* 107b30df push 1 */
  push32((uint32_t)(0x1u));
  /* 107b30e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b30e3 call 0x107b31f0 */
  push32(0x107b30e8u); f_107b31f0();
  /* 107b30e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b30eb:;
  /* 107b30eb mov edx, dword ptr [0x107cee2c] */
  EDX = (r32((uint32_t)(0x107cee2c)));
  /* 107b30f1 cmp edx, dword ptr [0x107cee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b30f7 jge 0x107b3144 */
  if ((C.sf==C.of)) goto L_107b3144;
  /* 107b30f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b30fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107b30ff cmp ecx, dword ptr [0x107cee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3105 jl 0x107b3115 */
  if ((C.sf!=C.of)) goto L_107b3115;
  /* 107b3107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b310a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107b310d cmp eax, dword ptr [0x107cee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3113 jle 0x107b311c */
  if ((C.zf||C.sf!=C.of)) goto L_107b311c;
L_107b3115:;
  /* 107b3115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3117 jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b311c:;
  /* 107b311c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b311f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107b3122 cmp edx, dword ptr [0x107cee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3128 jle 0x107b3142 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3142;
  /* 107b312a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b312d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107b3130 cmp ecx, dword ptr [0x107cee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3136 jge 0x107b3142 */
  if ((C.sf==C.of)) goto L_107b3142;
  /* 107b3138 mov eax, 1 */
  EAX = (0x1u);
  /* 107b313d jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b3142:;
  /* 107b3142 jmp 0x107b3187 */
  goto L_107b3187;
L_107b3144:;
  /* 107b3144 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3147 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107b314a cmp eax, dword ptr [0x107cee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3150 jl 0x107b3160 */
  if ((C.sf!=C.of)) goto L_107b3160;
  /* 107b3152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3155 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107b3158 cmp edx, dword ptr [0x107cee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b315e jle 0x107b3167 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3167;
L_107b3160:;
  /* 107b3160 mov eax, 1 */
  EAX = (0x1u);
  /* 107b3165 jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b3167:;
  /* 107b3167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b316a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107b316d cmp ecx, dword ptr [0x107cee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3173 jle 0x107b3187 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3187;
  /* 107b3175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3178 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107b317b cmp eax, dword ptr [0x107cee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3181 jge 0x107b3187 */
  if ((C.sf==C.of)) goto L_107b3187;
  /* 107b3183 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3185 jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b3187:;
  /* 107b3187 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b318a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107b318d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3193 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b3195 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b319a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107b319d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b31a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b31a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b31ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b31ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b31b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107b31b4 cmp edx, dword ptr [0x107cee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b31ba jne 0x107b31d2 */
  if (!C.zf) goto L_107b31d2;
  /* 107b31bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b31bf cmp eax, dword ptr [0x107cee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b31c5 jl 0x107b31ce */
  if ((C.sf!=C.of)) goto L_107b31ce;
  /* 107b31c7 mov eax, 1 */
  EAX = (0x1u);
  /* 107b31cc jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b31ce:;
  /* 107b31ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b31d0 jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b31d2:;
  /* 107b31d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b31d5 cmp ecx, dword ptr [0x107cee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b31db jge 0x107b31e4 */
  if ((C.sf==C.of)) goto L_107b31e4;
  /* 107b31dd mov eax, 1 */
  EAX = (0x1u);
  /* 107b31e2 jmp 0x107b31e6 */
  goto L_107b31e6;
L_107b31e4:;
  /* 107b31e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b31e6:;
  /* 107b31e6 mov esp, ebp */
  ESP = (EBP);
  /* 107b31e8 pop ebp */
  EBP = (pop32());
  /* 107b31e9 ret  */
  ESPCHK(0x107b2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x107b31f0 (504 bytes, 145 insns) */
void f_107b31f0(void) {
  FTRACE(0x107b31f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b31f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b31f1 mov ebp, esp */
  EBP = (ESP);
  /* 107b31f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b31f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b31fa jne 0x107b32cc */
  if (!C.zf) goto L_107b32cc;
  /* 107b3200 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3203 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107b3206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3208 jne 0x107b3219 */
  if (!C.zf) goto L_107b3219;
  /* 107b320a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b320d mov edx, dword ptr [ecx*4 + 0x107cee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cee4c)));
  /* 107b3214 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107b3217 jmp 0x107b3226 */
  goto L_107b3226;
L_107b3219:;
  /* 107b3219 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b321c mov ecx, dword ptr [eax*4 + 0x107cee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cee80)));
  /* 107b3223 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107b3226:;
  /* 107b3226 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b3229 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b322c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b322f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3232 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3235 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b323b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b323e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3243 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3246 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 107b3249 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 107b324d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107b324e mov ecx, 7 */
  ECX = (0x7u);
  /* 107b3253 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107b3255 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b3258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b325b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b325e jge 0x107b3279 */
  if ((C.sf==C.of)) goto L_107b3279;
  /* 107b3260 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b3263 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3266 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3269 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b326c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b326f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3272 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3274 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b3277 jmp 0x107b328d */
  goto L_107b328d;
L_107b3279:;
  /* 107b3279 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b327c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b327f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3282 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3285 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3288 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b328a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107b328d:;
  /* 107b328d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3291 jne 0x107b32ca */
  if (!C.zf) goto L_107b32ca;
  /* 107b3293 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3296 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 107b3299 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b329b jne 0x107b32ac */
  if (!C.zf) goto L_107b32ac;
  /* 107b329d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b32a0 mov eax, dword ptr [edx*4 + 0x107cee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107cee50)));
  /* 107b32a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107b32aa jmp 0x107b32b9 */
  goto L_107b32b9;
L_107b32ac:;
  /* 107b32ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b32af mov edx, dword ptr [ecx*4 + 0x107cee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cee84)));
  /* 107b32b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107b32b9:;
  /* 107b32b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b32bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b32bf jle 0x107b32ca */
  if ((C.zf||C.sf!=C.of)) goto L_107b32ca;
  /* 107b32c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b32c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b32c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107b32ca:;
  /* 107b32ca jmp 0x107b3301 */
  goto L_107b3301;
L_107b32cc:;
  /* 107b32cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b32cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107b32d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b32d4 jne 0x107b32e5 */
  if (!C.zf) goto L_107b32e5;
  /* 107b32d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b32d9 mov ecx, dword ptr [eax*4 + 0x107cee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cee4c)));
  /* 107b32e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107b32e3 jmp 0x107b32f2 */
  goto L_107b32f2;
L_107b32e5:;
  /* 107b32e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b32e8 mov eax, dword ptr [edx*4 + 0x107cee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107cee80)));
  /* 107b32ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_107b32f2:;
  /* 107b32f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b32f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107b32f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b32fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b32fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107b3301:;
  /* 107b3301 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3305 jne 0x107b3341 */
  if (!C.zf) goto L_107b3341;
  /* 107b3307 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b330a mov dword ptr [0x107cee2c], eax */
  w32((uint32_t)(0x107cee2c), (EAX));
  /* 107b330f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 107b3312 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3315 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 107b3318 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b331a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b331d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 107b3320 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3322 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3328 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 107b332b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b332d mov dword ptr [0x107cee30], ecx */
  w32((uint32_t)(0x107cee30), (ECX));
  /* 107b3333 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3336 mov dword ptr [0x107cee28], edx */
  w32((uint32_t)(0x107cee28), (EDX));
  /* 107b333c jmp 0x107b33e4 */
  goto L_107b33e4;
L_107b3341:;
  /* 107b3341 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3344 mov dword ptr [0x107cee3c], eax */
  w32((uint32_t)(0x107cee3c), (EAX));
  /* 107b3349 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 107b334c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b334f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 107b3352 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3354 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3357 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 107b335a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b335c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3362 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 107b3365 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3367 mov dword ptr [0x107cee40], ecx */
  w32((uint32_t)(0x107cee40), (ECX));
  /* 107b336d mov edx, dword ptr [0x107ced98] */
  EDX = (r32((uint32_t)(0x107ced98)));
  /* 107b3373 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107b3379 mov eax, dword ptr [0x107cee40] */
  EAX = (r32((uint32_t)(0x107cee40)));
  /* 107b337e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3380 mov dword ptr [0x107cee40], eax */
  w32((uint32_t)(0x107cee40), (EAX));
  /* 107b3385 cmp dword ptr [0x107cee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b338c jge 0x107b33b1 */
  if ((C.sf==C.of)) goto L_107b33b1;
  /* 107b338e mov ecx, dword ptr [0x107cee40] */
  ECX = (r32((uint32_t)(0x107cee40)));
  /* 107b3394 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b339a mov dword ptr [0x107cee40], ecx */
  w32((uint32_t)(0x107cee40), (ECX));
  /* 107b33a0 mov edx, dword ptr [0x107cee3c] */
  EDX = (r32((uint32_t)(0x107cee3c)));
  /* 107b33a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b33a9 mov dword ptr [0x107cee3c], edx */
  w32((uint32_t)(0x107cee3c), (EDX));
  /* 107b33af jmp 0x107b33db */
  goto L_107b33db;
L_107b33b1:;
  /* 107b33b1 cmp dword ptr [0x107cee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x107cee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b33bb jl 0x107b33db */
  if ((C.sf!=C.of)) goto L_107b33db;
  /* 107b33bd mov eax, dword ptr [0x107cee40] */
  EAX = (r32((uint32_t)(0x107cee40)));
  /* 107b33c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b33c7 mov dword ptr [0x107cee40], eax */
  w32((uint32_t)(0x107cee40), (EAX));
  /* 107b33cc mov ecx, dword ptr [0x107cee3c] */
  ECX = (r32((uint32_t)(0x107cee3c)));
  /* 107b33d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b33d5 mov dword ptr [0x107cee3c], ecx */
  w32((uint32_t)(0x107cee3c), (ECX));
L_107b33db:;
  /* 107b33db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b33de mov dword ptr [0x107cee38], edx */
  w32((uint32_t)(0x107cee38), (EDX));
L_107b33e4:;
  /* 107b33e4 mov esp, ebp */
  ESP = (EBP);
  /* 107b33e6 pop ebp */
  EBP = (pop32());
  /* 107b33e7 ret  */
  ESPCHK(0x107b31f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x107b33f0 (382 bytes, 135 insns) */
void f_107b33f0(void) {
  FTRACE(0x107b33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b33f1 mov ebp, esp */
  EBP = (ESP);
  /* 107b33f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b33f5 push 0x107cb990 */
  push32((uint32_t)(0x107cb990u));
  /* 107b33fa push 0x107ad0b8 */
  push32((uint32_t)(0x107ad0b8u));
  /* 107b33ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107b3405 push eax */
  push32((uint32_t)(EAX));
  /* 107b3406 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107b340d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3410 push ebx */
  push32((uint32_t)(EBX));
  /* 107b3411 push esi */
  push32((uint32_t)(ESI));
  /* 107b3412 push edi */
  push32((uint32_t)(EDI));
  /* 107b3413 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b3416 cmp dword ptr [0x107cf88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b341d jne 0x107b3462 */
  if (!C.zf) goto L_107b3462;
  /* 107b341f push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3421 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3423 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3425 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3427 call dword ptr [0x107d2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2284))), 0x107b342du);
  /* 107b342d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b342f je 0x107b343d */
  if (C.zf) goto L_107b343d;
  /* 107b3431 mov dword ptr [0x107cf88c], 1 */
  w32((uint32_t)(0x107cf88c), (0x1u));
  /* 107b343b jmp 0x107b3462 */
  goto L_107b3462;
L_107b343d:;
  /* 107b343d push 0 */
  push32((uint32_t)(0x0u));
  /* 107b343f push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3441 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3443 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3445 call dword ptr [0x107d229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d229c))), 0x107b344bu);
  /* 107b344b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b344d je 0x107b345b */
  if (C.zf) goto L_107b345b;
  /* 107b344f mov dword ptr [0x107cf88c], 2 */
  w32((uint32_t)(0x107cf88c), (0x2u));
  /* 107b3459 jmp 0x107b3462 */
  goto L_107b3462;
L_107b345b:;
  /* 107b345b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b345d jmp 0x107b3571 */
  goto L_107b3571;
L_107b3462:;
  /* 107b3462 cmp dword ptr [0x107cf88c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf88c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3469 jne 0x107b3486 */
  if (!C.zf) goto L_107b3486;
  /* 107b346b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b346e push eax */
  push32((uint32_t)(EAX));
  /* 107b346f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3472 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3473 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3476 push edx */
  push32((uint32_t)(EDX));
  /* 107b3477 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b347a push eax */
  push32((uint32_t)(EAX));
  /* 107b347b call dword ptr [0x107d2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2284))), 0x107b3481u);
  /* 107b3481 jmp 0x107b3571 */
  goto L_107b3571;
L_107b3486:;
  /* 107b3486 cmp dword ptr [0x107cf88c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf88c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b348d jne 0x107b356f */
  if (!C.zf) goto L_107b356f;
  /* 107b3493 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3497 jne 0x107b34a2 */
  if (!C.zf) goto L_107b34a2;
  /* 107b3499 mov ecx, dword ptr [0x107cf740] */
  ECX = (r32((uint32_t)(0x107cf740)));
  /* 107b349f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_107b34a2:;
  /* 107b34a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b34a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b34a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b34a9 push edx */
  push32((uint32_t)(EDX));
  /* 107b34aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b34ad push eax */
  push32((uint32_t)(EAX));
  /* 107b34ae call dword ptr [0x107d229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d229c))), 0x107b34b4u);
  /* 107b34b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107b34b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b34bb jne 0x107b34c4 */
  if (!C.zf) goto L_107b34c4;
  /* 107b34bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b34bf jmp 0x107b3571 */
  goto L_107b3571;
L_107b34c4:;
  /* 107b34c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b34cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b34ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b34d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107b34d3 call 0x107a7150 */
  push32(0x107b34d8u); f_107a7150();
  /* 107b34d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 107b34db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b34de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b34e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107b34e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107b34eb jmp 0x107b3504 */
  goto L_107b3504;
  /* 107b34ed mov eax, 1 */
  EAX = (0x1u);
  /* 107b34f2 ret  */
  ESPCHK(0x107b33f0u, _esp0);
  ESP += 4; return;
  /* 107b34f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107b34f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107b34fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107b3504:;
  /* 107b3504 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3508 jne 0x107b350e */
  if (!C.zf) goto L_107b350e;
  /* 107b350a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b350c jmp 0x107b3571 */
  goto L_107b3571;
L_107b350e:;
  /* 107b350e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b3511 push edx */
  push32((uint32_t)(EDX));
  /* 107b3512 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b3515 push eax */
  push32((uint32_t)(EAX));
  /* 107b3516 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3519 push ecx */
  push32((uint32_t)(ECX));
  /* 107b351a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b351d push edx */
  push32((uint32_t)(EDX));
  /* 107b351e call dword ptr [0x107d229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d229c))), 0x107b3524u);
  /* 107b3524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3526 jne 0x107b352c */
  if (!C.zf) goto L_107b352c;
  /* 107b3528 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b352a jmp 0x107b3571 */
  goto L_107b3571;
L_107b352c:;
  /* 107b352c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3530 jne 0x107b354d */
  if (!C.zf) goto L_107b354d;
  /* 107b3532 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3534 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3536 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3538 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b353b push eax */
  push32((uint32_t)(EAX));
  /* 107b353c push 1 */
  push32((uint32_t)(0x1u));
  /* 107b353e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3541 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3542 call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107b3548u);
  /* 107b3548 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107b354b jmp 0x107b356a */
  goto L_107b356a;
L_107b354d:;
  /* 107b354d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b3550 push edx */
  push32((uint32_t)(EDX));
  /* 107b3551 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3554 push eax */
  push32((uint32_t)(EAX));
  /* 107b3555 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3557 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b355a push ecx */
  push32((uint32_t)(ECX));
  /* 107b355b push 1 */
  push32((uint32_t)(0x1u));
  /* 107b355d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3560 push edx */
  push32((uint32_t)(EDX));
  /* 107b3561 call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107b3567u);
  /* 107b3567 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107b356a:;
  /* 107b356a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b356d jmp 0x107b3571 */
  goto L_107b3571;
L_107b356f:;
  /* 107b356f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b3571:;
  /* 107b3571 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 107b3574 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b3577 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107b357e pop edi */
  EDI = (pop32());
  /* 107b357f pop esi */
  ESI = (pop32());
  /* 107b3580 pop ebx */
  EBX = (pop32());
  /* 107b3581 mov esp, ebp */
  ESP = (EBP);
  /* 107b3583 pop ebp */
  EBP = (pop32());
  /* 107b3584 ret  */
  ESPCHK(0x107b33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x107b3590 (398 bytes, 140 insns) */
void f_107b3590(void) {
  FTRACE(0x107b3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3590 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3591 mov ebp, esp */
  EBP = (ESP);
  /* 107b3593 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3595 push 0x107cb9a0 */
  push32((uint32_t)(0x107cb9a0u));
  /* 107b359a push 0x107ad0b8 */
  push32((uint32_t)(0x107ad0b8u));
  /* 107b359f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107b35a5 push eax */
  push32((uint32_t)(EAX));
  /* 107b35a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107b35ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b35b0 push ebx */
  push32((uint32_t)(EBX));
  /* 107b35b1 push esi */
  push32((uint32_t)(ESI));
  /* 107b35b2 push edi */
  push32((uint32_t)(EDI));
  /* 107b35b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b35b6 cmp dword ptr [0x107cf890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b35bd jne 0x107b3602 */
  if (!C.zf) goto L_107b3602;
  /* 107b35bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107b35c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b35c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b35c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b35c7 call dword ptr [0x107d2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2284))), 0x107b35cdu);
  /* 107b35cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b35cf je 0x107b35dd */
  if (C.zf) goto L_107b35dd;
  /* 107b35d1 mov dword ptr [0x107cf890], 1 */
  w32((uint32_t)(0x107cf890), (0x1u));
  /* 107b35db jmp 0x107b3602 */
  goto L_107b3602;
L_107b35dd:;
  /* 107b35dd push 0 */
  push32((uint32_t)(0x0u));
  /* 107b35df push 0 */
  push32((uint32_t)(0x0u));
  /* 107b35e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b35e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b35e5 call dword ptr [0x107d229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d229c))), 0x107b35ebu);
  /* 107b35eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b35ed je 0x107b35fb */
  if (C.zf) goto L_107b35fb;
  /* 107b35ef mov dword ptr [0x107cf890], 2 */
  w32((uint32_t)(0x107cf890), (0x2u));
  /* 107b35f9 jmp 0x107b3602 */
  goto L_107b3602;
L_107b35fb:;
  /* 107b35fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b35fd jmp 0x107b3721 */
  goto L_107b3721;
L_107b3602:;
  /* 107b3602 cmp dword ptr [0x107cf890], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf890))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3609 jne 0x107b3626 */
  if (!C.zf) goto L_107b3626;
  /* 107b360b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b360e push eax */
  push32((uint32_t)(EAX));
  /* 107b360f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3612 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3616 push edx */
  push32((uint32_t)(EDX));
  /* 107b3617 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b361a push eax */
  push32((uint32_t)(EAX));
  /* 107b361b call dword ptr [0x107d229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d229c))), 0x107b3621u);
  /* 107b3621 jmp 0x107b3721 */
  goto L_107b3721;
L_107b3626:;
  /* 107b3626 cmp dword ptr [0x107cf890], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf890))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b362d jne 0x107b371f */
  if (!C.zf) goto L_107b371f;
  /* 107b3633 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3637 jne 0x107b3642 */
  if (!C.zf) goto L_107b3642;
  /* 107b3639 mov ecx, dword ptr [0x107cf740] */
  ECX = (r32((uint32_t)(0x107cf740)));
  /* 107b363f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_107b3642:;
  /* 107b3642 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3644 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3646 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3649 push edx */
  push32((uint32_t)(EDX));
  /* 107b364a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b364d push eax */
  push32((uint32_t)(EAX));
  /* 107b364e call dword ptr [0x107d2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2284))), 0x107b3654u);
  /* 107b3654 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107b3657 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b365b jne 0x107b3664 */
  if (!C.zf) goto L_107b3664;
  /* 107b365d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b365f jmp 0x107b3721 */
  goto L_107b3721;
L_107b3664:;
  /* 107b3664 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b366b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b366e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107b3670 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3673 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107b3675 call 0x107a7150 */
  push32(0x107b367au); f_107a7150();
  /* 107b367a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 107b367d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b3680 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b3683 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107b3686 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107b368d jmp 0x107b36a6 */
  goto L_107b36a6;
  /* 107b368f mov eax, 1 */
  EAX = (0x1u);
  /* 107b3694 ret  */
  ESPCHK(0x107b3590u, _esp0);
  ESP += 4; return;
  /* 107b3695 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107b3698 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107b369f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107b36a6:;
  /* 107b36a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b36aa jne 0x107b36b0 */
  if (!C.zf) goto L_107b36b0;
  /* 107b36ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b36ae jmp 0x107b3721 */
  goto L_107b3721;
L_107b36b0:;
  /* 107b36b0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b36b3 push edx */
  push32((uint32_t)(EDX));
  /* 107b36b4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b36b7 push eax */
  push32((uint32_t)(EAX));
  /* 107b36b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b36bb push ecx */
  push32((uint32_t)(ECX));
  /* 107b36bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b36bf push edx */
  push32((uint32_t)(EDX));
  /* 107b36c0 call dword ptr [0x107d2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2284))), 0x107b36c6u);
  /* 107b36c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b36c8 jne 0x107b36ce */
  if (!C.zf) goto L_107b36ce;
  /* 107b36ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b36cc jmp 0x107b3721 */
  goto L_107b3721;
L_107b36ce:;
  /* 107b36ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b36d2 jne 0x107b36f6 */
  if (!C.zf) goto L_107b36f6;
  /* 107b36d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b36d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b36d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b36da push 0 */
  push32((uint32_t)(0x0u));
  /* 107b36dc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b36de mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b36e1 push eax */
  push32((uint32_t)(EAX));
  /* 107b36e2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107b36e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b36ea push ecx */
  push32((uint32_t)(ECX));
  /* 107b36eb call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b36f1u);
  /* 107b36f1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107b36f4 jmp 0x107b371a */
  goto L_107b371a;
L_107b36f6:;
  /* 107b36f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b36f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b36fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b36fd push edx */
  push32((uint32_t)(EDX));
  /* 107b36fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3701 push eax */
  push32((uint32_t)(EAX));
  /* 107b3702 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3704 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b3707 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3708 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107b370d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3710 push edx */
  push32((uint32_t)(EDX));
  /* 107b3711 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b3717u);
  /* 107b3717 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107b371a:;
  /* 107b371a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b371d jmp 0x107b3721 */
  goto L_107b3721;
L_107b371f:;
  /* 107b371f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b3721:;
  /* 107b3721 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 107b3724 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b3727 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107b372e pop edi */
  EDI = (pop32());
  /* 107b372f pop esi */
  ESI = (pop32());
  /* 107b3730 pop ebx */
  EBX = (pop32());
  /* 107b3731 mov esp, ebp */
  ESP = (EBP);
  /* 107b3733 pop ebp */
  EBP = (pop32());
  /* 107b3734 ret  */
  ESPCHK(0x107b3590u, _esp0);
  ESP += 4; return;
}

/* FUN_10013740 @ 0x107b3740 (11 bytes, 6 insns) */
void f_107b3740(void) {
  FTRACE(0x107b3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3740 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3741 mov ebp, esp */
  EBP = (ESP);
  /* 107b3743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3746 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3749 pop ebp */
  EBP = (pop32());
  /* 107b374a ret  */
  ESPCHK(0x107b3740u, _esp0);
  ESP += 4; return;
}

/* FUN_10013750 @ 0x107b3750 (147 bytes, 43 insns) */
void f_107b3750(void) {
  FTRACE(0x107b3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3750 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3751 mov ebp, esp */
  EBP = (ESP);
  /* 107b3753 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3754 cmp dword ptr [0x107cf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b375b jne 0x107b3777 */
  if (!C.zf) goto L_107b3777;
  /* 107b375d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3761 jl 0x107b3772 */
  if ((C.sf!=C.of)) goto L_107b3772;
  /* 107b3763 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3767 jg 0x107b3772 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b3772;
  /* 107b3769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b376c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b376f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107b3772:;
  /* 107b3772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3775 jmp 0x107b37df */
  goto L_107b37df;
L_107b3777:;
  /* 107b3777 push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107b377c call dword ptr [0x107d2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2304))), 0x107b3782u);
  /* 107b3782 cmp dword ptr [0x107cf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3789 je 0x107b37a9 */
  if (C.zf) goto L_107b37a9;
  /* 107b378b push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107b3790 call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107b3796u);
  /* 107b3796 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b3798 call 0x107a79b0 */
  push32(0x107b379du); f_107a79b0();
  /* 107b379d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b37a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107b37a7 jmp 0x107b37b0 */
  goto L_107b37b0;
L_107b37a9:;
  /* 107b37a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107b37b0:;
  /* 107b37b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b37b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b37b4 call 0x107b37f0 */
  push32(0x107b37b9u); f_107b37f0();
  /* 107b37b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b37bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107b37bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b37c3 je 0x107b37d1 */
  if (C.zf) goto L_107b37d1;
  /* 107b37c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107b37c7 call 0x107a7a50 */
  push32(0x107b37ccu); f_107a7a50();
  /* 107b37cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b37cf jmp 0x107b37dc */
  goto L_107b37dc;
L_107b37d1:;
  /* 107b37d1 push 0x107cf8bc */
  push32((uint32_t)(0x107cf8bcu));
  /* 107b37d6 call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107b37dcu);
L_107b37dc:;
  /* 107b37dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_107b37df:;
  /* 107b37df mov esp, ebp */
  ESP = (EBP);
  /* 107b37e1 pop ebp */
  EBP = (pop32());
  /* 107b37e2 ret  */
  ESPCHK(0x107b3750u, _esp0);
  ESP += 4; return;
}

/* FUN_100137f0 @ 0x107b37f0 (299 bytes, 91 insns) */
void f_107b37f0(void) {
  FTRACE(0x107b37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b37f1 mov ebp, esp */
  EBP = (ESP);
  /* 107b37f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b37f6 cmp dword ptr [0x107cf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b37fd jne 0x107b381c */
  if (!C.zf) goto L_107b381c;
  /* 107b37ff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3803 jl 0x107b3814 */
  if ((C.sf!=C.of)) goto L_107b3814;
  /* 107b3805 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3809 jg 0x107b3814 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b3814;
  /* 107b380b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b380e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3811 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107b3814:;
  /* 107b3814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3817 jmp 0x107b3917 */
  goto L_107b3917;
L_107b381c:;
  /* 107b381c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3823 jge 0x107b3863 */
  if ((C.sf==C.of)) goto L_107b3863;
  /* 107b3825 cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b382c jle 0x107b3841 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3841;
  /* 107b382e push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3833 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3834 call 0x107a9fc0 */
  push32(0x107b3839u); f_107a9fc0();
  /* 107b3839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b383c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107b383f jmp 0x107b3855 */
  goto L_107b3855;
L_107b3841:;
  /* 107b3841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3844 mov eax, dword ptr [0x107cdc98] */
  EAX = (r32((uint32_t)(0x107cdc98)));
  /* 107b3849 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b384b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107b384f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107b3852 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107b3855:;
  /* 107b3855 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3859 jne 0x107b3863 */
  if (!C.zf) goto L_107b3863;
  /* 107b385b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b385e jmp 0x107b3917 */
  goto L_107b3917;
L_107b3863:;
  /* 107b3863 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3866 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107b3869 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b386f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b3875 mov eax, dword ptr [0x107cdc98] */
  EAX = (r32((uint32_t)(0x107cdc98)));
  /* 107b387a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b387c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107b3880 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107b3886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b3888 je 0x107b38ac */
  if (C.zf) goto L_107b38ac;
  /* 107b388a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b388d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107b3890 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b3896 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 107b3899 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107b389c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 107b389f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 107b38a3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107b38aa jmp 0x107b38bd */
  goto L_107b38bd;
L_107b38ac:;
  /* 107b38ac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 107b38af mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 107b38b2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 107b38b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_107b38bd:;
  /* 107b38bd push 1 */
  push32((uint32_t)(0x1u));
  /* 107b38bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107b38c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 107b38c3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 107b38c6 push edx */
  push32((uint32_t)(EDX));
  /* 107b38c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b38ca push eax */
  push32((uint32_t)(EAX));
  /* 107b38cb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107b38ce push ecx */
  push32((uint32_t)(ECX));
  /* 107b38cf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107b38d4 mov edx, dword ptr [0x107cf730] */
  EDX = (r32((uint32_t)(0x107cf730)));
  /* 107b38da push edx */
  push32((uint32_t)(EDX));
  /* 107b38db call 0x107ac3a0 */
  push32(0x107b38e0u); f_107ac3a0();
  /* 107b38e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b38e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b38e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b38ea jne 0x107b38f1 */
  if (!C.zf) goto L_107b38f1;
  /* 107b38ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b38ef jmp 0x107b3917 */
  goto L_107b3917;
L_107b38f1:;
  /* 107b38f1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b38f5 jne 0x107b3901 */
  if (!C.zf) goto L_107b3901;
  /* 107b38f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b38fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b38ff jmp 0x107b3917 */
  goto L_107b3917;
L_107b3901:;
  /* 107b3901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b3904 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b3909 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 107b390c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107b3912 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107b3915 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_107b3917:;
  /* 107b3917 mov esp, ebp */
  ESP = (EBP);
  /* 107b3919 pop ebp */
  EBP = (pop32());
  /* 107b391a ret  */
  ESPCHK(0x107b37f0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x107b3920 (52 bytes, 19 insns) */
void f_107b3920(void) {
  FTRACE(0x107b3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3920 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107b3924 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 107b3928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107b392a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107b392e jne 0x107b3939 */
  if (!C.zf) goto L_107b3939;
  /* 107b3930 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 107b3934 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107b3936 ret 0x10 */
  ESPCHK(0x107b3920u, _esp0);
  ESP += 20; return;
L_107b3939:;
  /* 107b3939 push ebx */
  push32((uint32_t)(EBX));
  /* 107b393a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107b393c mov ebx, eax */
  EBX = (EAX);
  /* 107b393e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107b3942 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107b3946 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3948 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107b394c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107b394e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3950 pop ebx */
  EBX = (pop32());
  /* 107b3951 ret 0x10 */
  ESPCHK(0x107b3920u, _esp0);
  ESP += 20; return;
}

/* FUN_10013960 @ 0x107b3960 (46 bytes, 18 insns) */
void f_107b3960(void) {
  FTRACE(0x107b3960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3960 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3961 mov ebp, esp */
  EBP = (ESP);
  /* 107b3963 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3964 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b3966 call 0x107a79b0 */
  push32(0x107b396bu); f_107a79b0();
  /* 107b396b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b396e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3971 push eax */
  push32((uint32_t)(EAX));
  /* 107b3972 call 0x107b3990 */
  push32(0x107b3977u); f_107b3990();
  /* 107b3977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b397a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b397d push 0xc */
  push32((uint32_t)(0xcu));
  /* 107b397f call 0x107a7a50 */
  push32(0x107b3984u); f_107a7a50();
  /* 107b3984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b398a mov esp, ebp */
  ESP = (EBP);
  /* 107b398c pop ebp */
  EBP = (pop32());
  /* 107b398d ret  */
  ESPCHK(0x107b3960u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x107b3990 (198 bytes, 69 insns) */
void f_107b3990(void) {
  FTRACE(0x107b3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3990 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3991 mov ebp, esp */
  EBP = (ESP);
  /* 107b3993 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3996 mov eax, dword ptr [0x107cf550] */
  EAX = (r32((uint32_t)(0x107cf550)));
  /* 107b399b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b399e cmp dword ptr [0x107d1040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d1040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b39a5 jne 0x107b39ae */
  if (!C.zf) goto L_107b39ae;
  /* 107b39a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b39a9 jmp 0x107b3a52 */
  goto L_107b3a52;
L_107b39ae:;
  /* 107b39ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b39b2 jne 0x107b39d6 */
  if (!C.zf) goto L_107b39d6;
  /* 107b39b4 cmp dword ptr [0x107cf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b39bb je 0x107b39d6 */
  if (C.zf) goto L_107b39d6;
  /* 107b39bd call 0x107b3ab0 */
  push32(0x107b39c2u); f_107b3ab0();
  /* 107b39c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b39c4 je 0x107b39cd */
  if (C.zf) goto L_107b39cd;
  /* 107b39c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b39c8 jmp 0x107b3a52 */
  goto L_107b3a52;
L_107b39cd:;
  /* 107b39cd mov ecx, dword ptr [0x107cf550] */
  ECX = (r32((uint32_t)(0x107cf550)));
  /* 107b39d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107b39d6:;
  /* 107b39d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b39da je 0x107b3a50 */
  if (C.zf) goto L_107b3a50;
  /* 107b39dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b39e0 je 0x107b3a50 */
  if (C.zf) goto L_107b3a50;
  /* 107b39e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b39e5 push edx */
  push32((uint32_t)(EDX));
  /* 107b39e6 call 0x107a6de0 */
  push32(0x107b39ebu); f_107a6de0();
  /* 107b39eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b39ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107b39f1:;
  /* 107b39f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b39f4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b39f7 je 0x107b3a50 */
  if (C.zf) goto L_107b3a50;
  /* 107b39f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b39fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b39fe push edx */
  push32((uint32_t)(EDX));
  /* 107b39ff call 0x107a6de0 */
  push32(0x107b3a04u); f_107a6de0();
  /* 107b3a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3a07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3a0a jbe 0x107b3a45 */
  if ((C.cf||C.zf)) goto L_107b3a45;
  /* 107b3a0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3a0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b3a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3a14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 107b3a18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3a1b jne 0x107b3a45 */
  if (!C.zf) goto L_107b3a45;
  /* 107b3a1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3a20 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3a21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3a24 push edx */
  push32((uint32_t)(EDX));
  /* 107b3a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3a28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b3a2a push ecx */
  push32((uint32_t)(ECX));
  /* 107b3a2b call 0x107b3a60 */
  push32(0x107b3a30u); f_107b3a60();
  /* 107b3a30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3a33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3a35 jne 0x107b3a45 */
  if (!C.zf) goto L_107b3a45;
  /* 107b3a37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3a3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b3a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3a3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 107b3a43 jmp 0x107b3a52 */
  goto L_107b3a52;
L_107b3a45:;
  /* 107b3a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3a48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3a4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b3a4e jmp 0x107b39f1 */
  goto L_107b39f1;
L_107b3a50:;
  /* 107b3a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b3a52:;
  /* 107b3a52 mov esp, ebp */
  ESP = (EBP);
  /* 107b3a54 pop ebp */
  EBP = (pop32());
  /* 107b3a55 ret  */
  ESPCHK(0x107b3990u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x107b3a60 (79 bytes, 32 insns) */
void f_107b3a60(void) {
  FTRACE(0x107b3a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3a60 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3a61 mov ebp, esp */
  EBP = (ESP);
  /* 107b3a63 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3a64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3a68 jne 0x107b3a6e */
  if (!C.zf) goto L_107b3a6e;
  /* 107b3a6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3a6c jmp 0x107b3aab */
  goto L_107b3aab;
L_107b3a6e:;
  /* 107b3a6e mov eax, dword ptr [0x107d0c04] */
  EAX = (r32((uint32_t)(0x107d0c04)));
  /* 107b3a73 push eax */
  push32((uint32_t)(EAX));
  /* 107b3a74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3a77 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3a78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3a7b push edx */
  push32((uint32_t)(EDX));
  /* 107b3a7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3a7f push eax */
  push32((uint32_t)(EAX));
  /* 107b3a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3a83 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3a86 mov edx, dword ptr [0x107d0ea4] */
  EDX = (r32((uint32_t)(0x107d0ea4)));
  /* 107b3a8c push edx */
  push32((uint32_t)(EDX));
  /* 107b3a8d call 0x107b3b60 */
  push32(0x107b3a92u); f_107b3b60();
  /* 107b3a92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3a95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b3a98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3a9c jne 0x107b3aa5 */
  if (!C.zf) goto L_107b3aa5;
  /* 107b3a9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 107b3aa3 jmp 0x107b3aab */
  goto L_107b3aab;
L_107b3aa5:;
  /* 107b3aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3aa8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107b3aab:;
  /* 107b3aab mov esp, ebp */
  ESP = (EBP);
  /* 107b3aad pop ebp */
  EBP = (pop32());
  /* 107b3aae ret  */
  ESPCHK(0x107b3a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ab0 @ 0x107b3ab0 (174 bytes, 66 insns) */
void f_107b3ab0(void) {
  FTRACE(0x107b3ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3ab1 mov ebp, esp */
  EBP = (ESP);
  /* 107b3ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3ab6 mov eax, dword ptr [0x107cf558] */
  EAX = (r32((uint32_t)(0x107cf558)));
  /* 107b3abb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107b3abe:;
  /* 107b3abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3ac1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3ac4 je 0x107b3b58 */
  if (C.zf) goto L_107b3b58;
  /* 107b3aca push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3acc push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3ace push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3ad2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3ad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3ad7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b3ad9 push eax */
  push32((uint32_t)(EAX));
  /* 107b3ada push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3adc push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3ade call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b3ae4u);
  /* 107b3ae4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b3ae7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3aeb jne 0x107b3af2 */
  if (!C.zf) goto L_107b3af2;
  /* 107b3aed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b3af0 jmp 0x107b3b5a */
  goto L_107b3b5a;
L_107b3af2:;
  /* 107b3af2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 107b3af4 push 0x107cb9ac */
  push32((uint32_t)(0x107cb9acu));
  /* 107b3af9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b3afb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b3afe push ecx */
  push32((uint32_t)(ECX));
  /* 107b3aff call 0x107a3fb0 */
  push32(0x107b3b04u); f_107a3fb0();
  /* 107b3b04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3b07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b3b0a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3b0e jne 0x107b3b15 */
  if (!C.zf) goto L_107b3b15;
  /* 107b3b10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b3b13 jmp 0x107b3b5a */
  goto L_107b3b5a;
L_107b3b15:;
  /* 107b3b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3b19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b3b1c push edx */
  push32((uint32_t)(EDX));
  /* 107b3b1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3b20 push eax */
  push32((uint32_t)(EAX));
  /* 107b3b21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3b23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3b26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b3b28 push edx */
  push32((uint32_t)(EDX));
  /* 107b3b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3b2d call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107b3b33u);
  /* 107b3b33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3b35 jne 0x107b3b3c */
  if (!C.zf) goto L_107b3b3c;
  /* 107b3b37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b3b3a jmp 0x107b3b5a */
  goto L_107b3b5a;
L_107b3b3c:;
  /* 107b3b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3b3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3b41 push eax */
  push32((uint32_t)(EAX));
  /* 107b3b42 call 0x107b3fb0 */
  push32(0x107b3b47u); f_107b3fb0();
  /* 107b3b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3b4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3b50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b3b53 jmp 0x107b3abe */
  goto L_107b3abe;
L_107b3b58:;
  /* 107b3b58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b3b5a:;
  /* 107b3b5a mov esp, ebp */
  ESP = (EBP);
  /* 107b3b5c pop ebp */
  EBP = (pop32());
  /* 107b3b5d ret  */
  ESPCHK(0x107b3ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b60 @ 0x107b3b60 (970 bytes, 340 insns) */
void f_107b3b60(void) {
  FTRACE(0x107b3b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3b60 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3b61 mov ebp, esp */
  EBP = (ESP);
  /* 107b3b63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107b3b65 push 0x107cba00 */
  push32((uint32_t)(0x107cba00u));
  /* 107b3b6a push 0x107ad0b8 */
  push32((uint32_t)(0x107ad0b8u));
  /* 107b3b6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107b3b75 push eax */
  push32((uint32_t)(EAX));
  /* 107b3b76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107b3b7d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3b80 push ebx */
  push32((uint32_t)(EBX));
  /* 107b3b81 push esi */
  push32((uint32_t)(ESI));
  /* 107b3b82 push edi */
  push32((uint32_t)(EDI));
  /* 107b3b83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b3b86 cmp dword ptr [0x107cf894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3b8d jne 0x107b3be6 */
  if (!C.zf) goto L_107b3be6;
  /* 107b3b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3b91 push 0x107cb05c */
  push32((uint32_t)(0x107cb05cu));
  /* 107b3b96 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3b98 push 0x107cb05c */
  push32((uint32_t)(0x107cb05cu));
  /* 107b3b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3ba1 call dword ptr [0x107d227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d227c))), 0x107b3ba7u);
  /* 107b3ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3ba9 je 0x107b3bb7 */
  if (C.zf) goto L_107b3bb7;
  /* 107b3bab mov dword ptr [0x107cf894], 1 */
  w32((uint32_t)(0x107cf894), (0x1u));
  /* 107b3bb5 jmp 0x107b3be6 */
  goto L_107b3be6;
L_107b3bb7:;
  /* 107b3bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3bb9 push 0x107cb058 */
  push32((uint32_t)(0x107cb058u));
  /* 107b3bbe push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3bc0 push 0x107cb058 */
  push32((uint32_t)(0x107cb058u));
  /* 107b3bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3bc9 call dword ptr [0x107d2280] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2280))), 0x107b3bcfu);
  /* 107b3bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3bd1 je 0x107b3bdf */
  if (C.zf) goto L_107b3bdf;
  /* 107b3bd3 mov dword ptr [0x107cf894], 2 */
  w32((uint32_t)(0x107cf894), (0x2u));
  /* 107b3bdd jmp 0x107b3be6 */
  goto L_107b3be6;
L_107b3bdf:;
  /* 107b3bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3be1 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3be6:;
  /* 107b3be6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3bea jle 0x107b3bff */
  if ((C.zf||C.sf!=C.of)) goto L_107b3bff;
  /* 107b3bec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b3bef push eax */
  push32((uint32_t)(EAX));
  /* 107b3bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3bf4 call 0x107b3f60 */
  push32(0x107b3bf9u); f_107b3f60();
  /* 107b3bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3bfc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_107b3bff:;
  /* 107b3bff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c03 jle 0x107b3c18 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3c18;
  /* 107b3c05 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b3c08 push edx */
  push32((uint32_t)(EDX));
  /* 107b3c09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3c0c push eax */
  push32((uint32_t)(EAX));
  /* 107b3c0d call 0x107b3f60 */
  push32(0x107b3c12u); f_107b3f60();
  /* 107b3c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3c15 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_107b3c18:;
  /* 107b3c18 cmp dword ptr [0x107cf894], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf894))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c1f jne 0x107b3c44 */
  if (!C.zf) goto L_107b3c44;
  /* 107b3c21 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b3c24 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3c25 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3c28 push edx */
  push32((uint32_t)(EDX));
  /* 107b3c29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b3c2c push eax */
  push32((uint32_t)(EAX));
  /* 107b3c2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3c30 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3c31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3c34 push edx */
  push32((uint32_t)(EDX));
  /* 107b3c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3c38 push eax */
  push32((uint32_t)(EAX));
  /* 107b3c39 call dword ptr [0x107d2280] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2280))), 0x107b3c3fu);
  /* 107b3c3f jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3c44:;
  /* 107b3c44 cmp dword ptr [0x107cf894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c4b jne 0x107b3f42 */
  if (!C.zf) goto L_107b3f42;
  /* 107b3c51 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c55 jne 0x107b3c60 */
  if (!C.zf) goto L_107b3c60;
  /* 107b3c57 mov ecx, dword ptr [0x107cf740] */
  ECX = (r32((uint32_t)(0x107cf740)));
  /* 107b3c5d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_107b3c60:;
  /* 107b3c60 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c64 je 0x107b3c70 */
  if (C.zf) goto L_107b3c70;
  /* 107b3c66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c6a jne 0x107b3dec */
  if (!C.zf) goto L_107b3dec;
L_107b3c70:;
  /* 107b3c70 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b3c73 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c76 jne 0x107b3c82 */
  if (!C.zf) goto L_107b3c82;
  /* 107b3c78 mov eax, 2 */
  EAX = (0x2u);
  /* 107b3c7d jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3c82:;
  /* 107b3c82 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c86 jle 0x107b3c92 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3c92;
  /* 107b3c88 mov eax, 1 */
  EAX = (0x1u);
  /* 107b3c8d jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3c92:;
  /* 107b3c92 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3c96 jle 0x107b3ca2 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3ca2;
  /* 107b3c98 mov eax, 3 */
  EAX = (0x3u);
  /* 107b3c9d jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3ca2:;
  /* 107b3ca2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 107b3ca5 push eax */
  push32((uint32_t)(EAX));
  /* 107b3ca6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 107b3ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3caa call dword ptr [0x107d22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22d8))), 0x107b3cb0u);
  /* 107b3cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3cb2 jne 0x107b3cbb */
  if (!C.zf) goto L_107b3cbb;
  /* 107b3cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3cb6 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3cbb:;
  /* 107b3cbb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3cbf jne 0x107b3cc7 */
  if (!C.zf) goto L_107b3cc7;
  /* 107b3cc1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3cc5 je 0x107b3cf4 */
  if (C.zf) goto L_107b3cf4;
L_107b3cc7:;
  /* 107b3cc7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3ccb jne 0x107b3cd3 */
  if (!C.zf) goto L_107b3cd3;
  /* 107b3ccd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3cd1 je 0x107b3cf4 */
  if (C.zf) goto L_107b3cf4;
L_107b3cd3:;
  /* 107b3cd3 push 0x107cb9c0 */
  push32((uint32_t)(0x107cb9c0u));
  /* 107b3cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3cda push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 107b3cdf push 0x107cb9b8 */
  push32((uint32_t)(0x107cb9b8u));
  /* 107b3ce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b3ce6 call 0x107a3070 */
  push32(0x107b3cebu); f_107a3070();
  /* 107b3ceb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3cee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3cf1 jne 0x107b3cf4 */
  if (!C.zf) goto L_107b3cf4;
  /* 107b3cf3 int3  */
  x86_unimpl("int3 @ 0x107b3cf3");
L_107b3cf4:;
  /* 107b3cf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3cf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b3cf8 jne 0x107b3cbb */
  if (!C.zf) goto L_107b3cbb;
  /* 107b3cfa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3cfe jle 0x107b3d73 */
  if ((C.zf||C.sf!=C.of)) goto L_107b3d73;
  /* 107b3d00 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3d04 jae 0x107b3d10 */
  if (!C.cf) goto L_107b3d10;
  /* 107b3d06 mov eax, 3 */
  EAX = (0x3u);
  /* 107b3d0b jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3d10:;
  /* 107b3d10 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 107b3d13 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 107b3d16 jmp 0x107b3d21 */
  goto L_107b3d21;
L_107b3d18:;
  /* 107b3d18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d1b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3d1e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_107b3d21:;
  /* 107b3d21 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3d26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b3d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3d2a je 0x107b3d69 */
  if (C.zf) goto L_107b3d69;
  /* 107b3d2c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3d31 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107b3d34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b3d36 je 0x107b3d69 */
  if (C.zf) goto L_107b3d69;
  /* 107b3d38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3d3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b3d3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b3d3f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3d44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b3d46 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3d48 jl 0x107b3d67 */
  if ((C.sf!=C.of)) goto L_107b3d67;
  /* 107b3d4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3d4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b3d51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b3d56 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107b3d59 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3d5b jg 0x107b3d67 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b3d67;
  /* 107b3d5d mov eax, 2 */
  EAX = (0x2u);
  /* 107b3d62 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3d67:;
  /* 107b3d67 jmp 0x107b3d18 */
  goto L_107b3d18;
L_107b3d69:;
  /* 107b3d69 mov eax, 3 */
  EAX = (0x3u);
  /* 107b3d6e jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3d73:;
  /* 107b3d73 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3d77 jle 0x107b3dec */
  if ((C.zf||C.sf!=C.of)) goto L_107b3dec;
  /* 107b3d79 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3d7d jae 0x107b3d89 */
  if (!C.cf) goto L_107b3d89;
  /* 107b3d7f mov eax, 1 */
  EAX = (0x1u);
  /* 107b3d84 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3d89:;
  /* 107b3d89 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 107b3d8c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 107b3d8f jmp 0x107b3d9a */
  goto L_107b3d9a;
L_107b3d91:;
  /* 107b3d91 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d94 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3d97 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_107b3d9a:;
  /* 107b3d9a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3d9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3d9f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b3da1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b3da3 je 0x107b3de2 */
  if (C.zf) goto L_107b3de2;
  /* 107b3da5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3da8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b3daa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107b3dad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b3daf je 0x107b3de2 */
  if (C.zf) goto L_107b3de2;
  /* 107b3db1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3db6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107b3db8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3dbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107b3dbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107b3dbf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3dc1 jl 0x107b3de0 */
  if ((C.sf!=C.of)) goto L_107b3de0;
  /* 107b3dc3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3dc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b3dc8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b3dca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107b3dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3dcf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107b3dd2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3dd4 jg 0x107b3de0 */
  if ((!C.zf&&C.sf==C.of)) goto L_107b3de0;
  /* 107b3dd6 mov eax, 2 */
  EAX = (0x2u);
  /* 107b3ddb jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3de0:;
  /* 107b3de0 jmp 0x107b3d91 */
  goto L_107b3d91;
L_107b3de2:;
  /* 107b3de2 mov eax, 1 */
  EAX = (0x1u);
  /* 107b3de7 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3dec:;
  /* 107b3dec push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3dee push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3df0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b3df3 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3df4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3df7 push edx */
  push32((uint32_t)(EDX));
  /* 107b3df8 push 9 */
  push32((uint32_t)(0x9u));
  /* 107b3dfa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107b3dfd push eax */
  push32((uint32_t)(EAX));
  /* 107b3dfe call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107b3e04u);
  /* 107b3e04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107b3e07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3e0b jne 0x107b3e14 */
  if (!C.zf) goto L_107b3e14;
  /* 107b3e0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3e0f jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3e14:;
  /* 107b3e14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107b3e1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b3e1e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107b3e20 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3e23 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107b3e25 call 0x107a7150 */
  push32(0x107b3e2au); f_107a7150();
  /* 107b3e2a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 107b3e2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b3e30 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 107b3e33 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107b3e36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107b3e3d jmp 0x107b3e56 */
  goto L_107b3e56;
  /* 107b3e3f mov eax, 1 */
  EAX = (0x1u);
  /* 107b3e44 ret  */
  ESPCHK(0x107b3b60u, _esp0);
  ESP += 4; return;
  /* 107b3e45 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107b3e48 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107b3e4f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107b3e56:;
  /* 107b3e56 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3e5a jne 0x107b3e63 */
  if (!C.zf) goto L_107b3e63;
  /* 107b3e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3e5e jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3e63:;
  /* 107b3e63 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b3e66 push edx */
  push32((uint32_t)(EDX));
  /* 107b3e67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b3e6a push eax */
  push32((uint32_t)(EAX));
  /* 107b3e6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107b3e6e push ecx */
  push32((uint32_t)(ECX));
  /* 107b3e6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107b3e72 push edx */
  push32((uint32_t)(EDX));
  /* 107b3e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3e75 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107b3e78 push eax */
  push32((uint32_t)(EAX));
  /* 107b3e79 call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107b3e7fu);
  /* 107b3e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3e81 jne 0x107b3e8a */
  if (!C.zf) goto L_107b3e8a;
  /* 107b3e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3e85 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3e8a:;
  /* 107b3e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 107b3e8e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b3e91 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3e92 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3e95 push edx */
  push32((uint32_t)(EDX));
  /* 107b3e96 push 9 */
  push32((uint32_t)(0x9u));
  /* 107b3e98 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107b3e9b push eax */
  push32((uint32_t)(EAX));
  /* 107b3e9c call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107b3ea2u);
  /* 107b3ea2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107b3ea5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3ea9 jne 0x107b3eb2 */
  if (!C.zf) goto L_107b3eb2;
  /* 107b3eab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3ead jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3eb2:;
  /* 107b3eb2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107b3eb9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b3ebc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107b3ebe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3ec1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107b3ec3 call 0x107a7150 */
  push32(0x107b3ec8u); f_107a7150();
  /* 107b3ec8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 107b3ecb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107b3ece mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 107b3ed1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 107b3ed4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107b3edb jmp 0x107b3ef4 */
  goto L_107b3ef4;
  /* 107b3edd mov eax, 1 */
  EAX = (0x1u);
  /* 107b3ee2 ret  */
  ESPCHK(0x107b3b60u, _esp0);
  ESP += 4; return;
  /* 107b3ee3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107b3ee6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 107b3eed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107b3ef4:;
  /* 107b3ef4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3ef8 jne 0x107b3efe */
  if (!C.zf) goto L_107b3efe;
  /* 107b3efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3efc jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3efe:;
  /* 107b3efe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b3f01 push edx */
  push32((uint32_t)(EDX));
  /* 107b3f02 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b3f05 push eax */
  push32((uint32_t)(EAX));
  /* 107b3f06 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107b3f09 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3f0a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107b3f0d push edx */
  push32((uint32_t)(EDX));
  /* 107b3f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 107b3f10 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107b3f13 push eax */
  push32((uint32_t)(EAX));
  /* 107b3f14 call dword ptr [0x107d22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22cc))), 0x107b3f1au);
  /* 107b3f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b3f1c jne 0x107b3f22 */
  if (!C.zf) goto L_107b3f22;
  /* 107b3f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b3f20 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3f22:;
  /* 107b3f22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107b3f25 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3f26 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107b3f29 push edx */
  push32((uint32_t)(EDX));
  /* 107b3f2a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107b3f2d push eax */
  push32((uint32_t)(EAX));
  /* 107b3f2e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107b3f31 push ecx */
  push32((uint32_t)(ECX));
  /* 107b3f32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3f35 push edx */
  push32((uint32_t)(EDX));
  /* 107b3f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3f39 push eax */
  push32((uint32_t)(EAX));
  /* 107b3f3a call dword ptr [0x107d227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d227c))), 0x107b3f40u);
  /* 107b3f40 jmp 0x107b3f44 */
  goto L_107b3f44;
L_107b3f42:;
  /* 107b3f42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b3f44:;
  /* 107b3f44 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 107b3f47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b3f4a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107b3f51 pop edi */
  EDI = (pop32());
  /* 107b3f52 pop esi */
  ESI = (pop32());
  /* 107b3f53 pop ebx */
  EBX = (pop32());
  /* 107b3f54 mov esp, ebp */
  ESP = (EBP);
  /* 107b3f56 pop ebp */
  EBP = (pop32());
  /* 107b3f57 ret  */
  ESPCHK(0x107b3b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x107b3f60 (80 bytes, 32 insns) */
void f_107b3f60(void) {
  FTRACE(0x107b3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3f61 mov ebp, esp */
  EBP = (ESP);
  /* 107b3f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3f66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b3f69 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b3f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3f6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107b3f72:;
  /* 107b3f72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3f75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b3f78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3f7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b3f7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b3f80 je 0x107b3f97 */
  if (C.zf) goto L_107b3f97;
  /* 107b3f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3f85 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b3f88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b3f8a je 0x107b3f97 */
  if (C.zf) goto L_107b3f97;
  /* 107b3f8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3f8f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3f92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b3f95 jmp 0x107b3f72 */
  goto L_107b3f72;
L_107b3f97:;
  /* 107b3f97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3f9a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107b3f9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b3f9f jne 0x107b3fa9 */
  if (!C.zf) goto L_107b3fa9;
  /* 107b3fa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b3fa4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3fa7 jmp 0x107b3fac */
  goto L_107b3fac;
L_107b3fa9:;
  /* 107b3fa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_107b3fac:;
  /* 107b3fac mov esp, ebp */
  ESP = (EBP);
  /* 107b3fae pop ebp */
  EBP = (pop32());
  /* 107b3faf ret  */
  ESPCHK(0x107b3f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fb0 @ 0x107b3fb0 (736 bytes, 224 insns) */
void f_107b3fb0(void) {
  FTRACE(0x107b3fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b3fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107b3fb1 mov ebp, esp */
  EBP = (ESP);
  /* 107b3fb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3fb6 push esi */
  push32((uint32_t)(ESI));
  /* 107b3fb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3fbb je 0x107b3fdc */
  if (C.zf) goto L_107b3fdc;
  /* 107b3fbd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 107b3fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3fc2 push eax */
  push32((uint32_t)(EAX));
  /* 107b3fc3 call 0x107b4400 */
  push32(0x107b3fc8u); f_107b4400();
  /* 107b3fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b3fcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107b3fce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3fd2 je 0x107b3fdc */
  if (C.zf) goto L_107b3fdc;
  /* 107b3fd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b3fd7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3fda jne 0x107b3fe4 */
  if (!C.zf) goto L_107b3fe4;
L_107b3fdc:;
  /* 107b3fdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b3fdf jmp 0x107b428b */
  goto L_107b428b;
L_107b3fe4:;
  /* 107b3fe4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b3fe7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107b3feb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b3fed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b3fef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 107b3ff0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107b3ff3 mov ecx, dword ptr [0x107cf550] */
  ECX = (r32((uint32_t)(0x107cf550)));
  /* 107b3ff9 cmp ecx, dword ptr [0x107cf554] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cf554))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b3fff jne 0x107b4015 */
  if (!C.zf) goto L_107b4015;
  /* 107b4001 mov edx, dword ptr [0x107cf550] */
  EDX = (r32((uint32_t)(0x107cf550)));
  /* 107b4007 push edx */
  push32((uint32_t)(EDX));
  /* 107b4008 call 0x107b4310 */
  push32(0x107b400du); f_107b4310();
  /* 107b400d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4010 mov dword ptr [0x107cf550], eax */
  w32((uint32_t)(0x107cf550), (EAX));
L_107b4015:;
  /* 107b4015 cmp dword ptr [0x107cf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b401c jne 0x107b40d5 */
  if (!C.zf) goto L_107b40d5;
  /* 107b4022 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4026 je 0x107b4047 */
  if (C.zf) goto L_107b4047;
  /* 107b4028 cmp dword ptr [0x107cf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b402f je 0x107b4047 */
  if (C.zf) goto L_107b4047;
  /* 107b4031 call 0x107b3ab0 */
  push32(0x107b4036u); f_107b3ab0();
  /* 107b4036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b4038 je 0x107b4042 */
  if (C.zf) goto L_107b4042;
  /* 107b403a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b403d jmp 0x107b428b */
  goto L_107b428b;
L_107b4042:;
  /* 107b4042 jmp 0x107b40d5 */
  goto L_107b40d5;
L_107b4047:;
  /* 107b4047 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b404b je 0x107b4054 */
  if (C.zf) goto L_107b4054;
  /* 107b404d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b404f jmp 0x107b428b */
  goto L_107b428b;
L_107b4054:;
  /* 107b4054 cmp dword ptr [0x107cf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b405b jne 0x107b4094 */
  if (!C.zf) goto L_107b4094;
  /* 107b405d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 107b4062 push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b4067 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b4069 push 4 */
  push32((uint32_t)(0x4u));
  /* 107b406b call 0x107a3fb0 */
  push32(0x107b4070u); f_107a3fb0();
  /* 107b4070 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4073 mov dword ptr [0x107cf550], eax */
  w32((uint32_t)(0x107cf550), (EAX));
  /* 107b4078 cmp dword ptr [0x107cf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b407f jne 0x107b4089 */
  if (!C.zf) goto L_107b4089;
  /* 107b4081 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b4084 jmp 0x107b428b */
  goto L_107b428b;
L_107b4089:;
  /* 107b4089 mov eax, dword ptr [0x107cf550] */
  EAX = (r32((uint32_t)(0x107cf550)));
  /* 107b408e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107b4094:;
  /* 107b4094 cmp dword ptr [0x107cf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b409b jne 0x107b40d5 */
  if (!C.zf) goto L_107b40d5;
  /* 107b409d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 107b40a2 push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b40a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b40a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 107b40ab call 0x107a3fb0 */
  push32(0x107b40b0u); f_107a3fb0();
  /* 107b40b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b40b3 mov dword ptr [0x107cf558], eax */
  w32((uint32_t)(0x107cf558), (EAX));
  /* 107b40b8 cmp dword ptr [0x107cf558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b40bf jne 0x107b40c9 */
  if (!C.zf) goto L_107b40c9;
  /* 107b40c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b40c4 jmp 0x107b428b */
  goto L_107b428b;
L_107b40c9:;
  /* 107b40c9 mov ecx, dword ptr [0x107cf558] */
  ECX = (r32((uint32_t)(0x107cf558)));
  /* 107b40cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_107b40d5:;
  /* 107b40d5 mov edx, dword ptr [0x107cf550] */
  EDX = (r32((uint32_t)(0x107cf550)));
  /* 107b40db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107b40de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b40e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b40e4 push eax */
  push32((uint32_t)(EAX));
  /* 107b40e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b40e8 push ecx */
  push32((uint32_t)(ECX));
  /* 107b40e9 call 0x107b4290 */
  push32(0x107b40eeu); f_107b4290();
  /* 107b40ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b40f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b40f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b40f8 jl 0x107b4191 */
  if ((C.sf!=C.of)) goto L_107b4191;
  /* 107b40fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4101 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4104 je 0x107b4191 */
  if (C.zf) goto L_107b4191;
  /* 107b410a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b410e je 0x107b4183 */
  if (C.zf) goto L_107b4183;
  /* 107b4110 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b4112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b4115 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4118 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107b411b push edx */
  push32((uint32_t)(EDX));
  /* 107b411c call 0x107a4a40 */
  push32(0x107b4121u); f_107a4a40();
  /* 107b4121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4124 jmp 0x107b412f */
  goto L_107b412f;
L_107b4126:;
  /* 107b4126 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b4129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b412c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107b412f:;
  /* 107b412f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b4132 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4135 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4139 je 0x107b4150 */
  if (C.zf) goto L_107b4150;
  /* 107b413b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b413e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b4144 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4147 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 107b414b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 107b414e jmp 0x107b4126 */
  goto L_107b4126;
L_107b4150:;
  /* 107b4150 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 107b4155 push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b415a push 2 */
  push32((uint32_t)(0x2u));
  /* 107b415c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b415f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 107b4162 push eax */
  push32((uint32_t)(EAX));
  /* 107b4163 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4166 push ecx */
  push32((uint32_t)(ECX));
  /* 107b4167 call 0x107a4440 */
  push32(0x107b416cu); f_107a4440();
  /* 107b416c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b416f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b4172 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4176 je 0x107b4181 */
  if (C.zf) goto L_107b4181;
  /* 107b4178 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b417b mov dword ptr [0x107cf550], edx */
  w32((uint32_t)(0x107cf550), (EDX));
L_107b4181:;
  /* 107b4181 jmp 0x107b418f */
  goto L_107b418f;
L_107b4183:;
  /* 107b4183 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b4186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b418c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_107b418f:;
  /* 107b418f jmp 0x107b4204 */
  goto L_107b4204;
L_107b4191:;
  /* 107b4191 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4195 jne 0x107b41fd */
  if (!C.zf) goto L_107b41fd;
  /* 107b4197 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b419b jge 0x107b41a5 */
  if ((C.sf==C.of)) goto L_107b41a5;
  /* 107b419d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b41a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b41a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107b41a5:;
  /* 107b41a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 107b41aa push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b41af push 2 */
  push32((uint32_t)(0x2u));
  /* 107b41b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b41b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 107b41bb push edx */
  push32((uint32_t)(EDX));
  /* 107b41bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b41bf push eax */
  push32((uint32_t)(EAX));
  /* 107b41c0 call 0x107a4440 */
  push32(0x107b41c5u); f_107a4440();
  /* 107b41c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b41c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b41cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b41cf jne 0x107b41d9 */
  if (!C.zf) goto L_107b41d9;
  /* 107b41d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b41d4 jmp 0x107b428b */
  goto L_107b428b;
L_107b41d9:;
  /* 107b41d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b41dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b41df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b41e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 107b41e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b41e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b41eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 107b41f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b41f6 mov dword ptr [0x107cf550], eax */
  w32((uint32_t)(0x107cf550), (EAX));
  /* 107b41fb jmp 0x107b4204 */
  goto L_107b4204;
L_107b41fd:;
  /* 107b41fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b41ff jmp 0x107b428b */
  goto L_107b428b;
L_107b4204:;
  /* 107b4204 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4208 je 0x107b4289 */
  if (C.zf) goto L_107b4289;
  /* 107b420a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 107b420f push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b4214 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b4216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4219 push ecx */
  push32((uint32_t)(ECX));
  /* 107b421a call 0x107a6de0 */
  push32(0x107b421fu); f_107a6de0();
  /* 107b421f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4222 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4225 push eax */
  push32((uint32_t)(EAX));
  /* 107b4226 call 0x107a3fb0 */
  push32(0x107b422bu); f_107a3fb0();
  /* 107b422b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b422e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107b4231 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4235 je 0x107b4289 */
  if (C.zf) goto L_107b4289;
  /* 107b4237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b423a push edx */
  push32((uint32_t)(EDX));
  /* 107b423b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b423e push eax */
  push32((uint32_t)(EAX));
  /* 107b423f call 0x107a6f60 */
  push32(0x107b4244u); f_107a6f60();
  /* 107b4244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4247 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107b424a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b424d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b4250 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4252 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107b4255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b4258 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107b425b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b425e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b4264 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107b4267 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107b4269 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b426b not edx */
  EDX = (~(EDX));
  /* 107b426d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 107b4270 push edx */
  push32((uint32_t)(EDX));
  /* 107b4271 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b4274 push eax */
  push32((uint32_t)(EAX));
  /* 107b4275 call dword ptr [0x107d2278] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2278))), 0x107b427bu);
  /* 107b427b push 2 */
  push32((uint32_t)(0x2u));
  /* 107b427d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b4280 push ecx */
  push32((uint32_t)(ECX));
  /* 107b4281 call 0x107a4a40 */
  push32(0x107b4286u); f_107a4a40();
  /* 107b4286 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b4289:;
  /* 107b4289 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b428b:;
  /* 107b428b pop esi */
  ESI = (pop32());
  /* 107b428c mov esp, ebp */
  ESP = (EBP);
  /* 107b428e pop ebp */
  EBP = (pop32());
  /* 107b428f ret  */
  ESPCHK(0x107b3fb0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x107b4290 (124 bytes, 47 insns) */
void f_107b4290(void) {
  FTRACE(0x107b4290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b4290 push ebp */
  push32((uint32_t)(EBP));
  /* 107b4291 mov ebp, esp */
  EBP = (ESP);
  /* 107b4293 push ecx */
  push32((uint32_t)(ECX));
  /* 107b4294 mov eax, dword ptr [0x107cf550] */
  EAX = (r32((uint32_t)(0x107cf550)));
  /* 107b4299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107b429c jmp 0x107b42a7 */
  goto L_107b42a7;
L_107b429e:;
  /* 107b429e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b42a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107b42a7:;
  /* 107b42a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b42ad je 0x107b42fa */
  if (C.zf) goto L_107b42fa;
  /* 107b42af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b42b2 push eax */
  push32((uint32_t)(EAX));
  /* 107b42b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b42b8 push edx */
  push32((uint32_t)(EDX));
  /* 107b42b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b42bc push eax */
  push32((uint32_t)(EAX));
  /* 107b42bd call 0x107b3a60 */
  push32(0x107b42c2u); f_107b3a60();
  /* 107b42c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b42c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107b42c7 jne 0x107b42f8 */
  if (!C.zf) goto L_107b42f8;
  /* 107b42c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b42ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b42d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 107b42d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b42d8 je 0x107b42ea */
  if (C.zf) goto L_107b42ea;
  /* 107b42da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b42df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b42e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 107b42e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b42e8 jne 0x107b42f8 */
  if (!C.zf) goto L_107b42f8;
L_107b42ea:;
  /* 107b42ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42ed sub eax, dword ptr [0x107cf550] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cf550))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b42f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 107b42f6 jmp 0x107b4308 */
  goto L_107b4308;
L_107b42f8:;
  /* 107b42f8 jmp 0x107b429e */
  goto L_107b429e;
L_107b42fa:;
  /* 107b42fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b42fd sub eax, dword ptr [0x107cf550] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cf550))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b4303 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 107b4306 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_107b4308:;
  /* 107b4308 mov esp, ebp */
  ESP = (EBP);
  /* 107b430a pop ebp */
  EBP = (pop32());
  /* 107b430b ret  */
  ESPCHK(0x107b4290u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x107b4310 (238 bytes, 80 insns) */
void f_107b4310(void) {
  FTRACE(0x107b4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b4310 push ebp */
  push32((uint32_t)(EBP));
  /* 107b4311 mov ebp, esp */
  EBP = (ESP);
  /* 107b4313 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b4316 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107b431d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4320 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b4323 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4327 jne 0x107b4330 */
  if (!C.zf) goto L_107b4330;
  /* 107b4329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b432b jmp 0x107b43fa */
  goto L_107b43fa;
L_107b4330:;
  /* 107b4330 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4333 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b4335 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b4338 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b433b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107b433e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b4340 je 0x107b434d */
  if (C.zf) goto L_107b434d;
  /* 107b4342 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b4345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4348 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107b434b jmp 0x107b4330 */
  goto L_107b4330;
L_107b434d:;
  /* 107b434d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 107b4352 push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b4357 push 2 */
  push32((uint32_t)(0x2u));
  /* 107b4359 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107b435c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 107b4363 push eax */
  push32((uint32_t)(EAX));
  /* 107b4364 call 0x107a3fb0 */
  push32(0x107b4369u); f_107a3fb0();
  /* 107b4369 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b436c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107b436f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b4372 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107b4375 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4379 jne 0x107b4385 */
  if (!C.zf) goto L_107b4385;
  /* 107b437b push 9 */
  push32((uint32_t)(0x9u));
  /* 107b437d call 0x107a2f20 */
  push32(0x107b4382u); f_107a2f20();
  /* 107b4382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b4385:;
  /* 107b4385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4388 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107b438b:;
  /* 107b438b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b438e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b4391 je 0x107b43ee */
  if (C.zf) goto L_107b43ee;
  /* 107b4393 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 107b4398 push 0x107cba18 */
  push32((uint32_t)(0x107cba18u));
  /* 107b439d push 2 */
  push32((uint32_t)(0x2u));
  /* 107b439f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b43a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107b43a4 push edx */
  push32((uint32_t)(EDX));
  /* 107b43a5 call 0x107a6de0 */
  push32(0x107b43aau); f_107a6de0();
  /* 107b43aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b43ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b43b0 push eax */
  push32((uint32_t)(EAX));
  /* 107b43b1 call 0x107a3fb0 */
  push32(0x107b43b6u); f_107a3fb0();
  /* 107b43b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b43b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b43bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107b43be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b43c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b43c4 je 0x107b43da */
  if (C.zf) goto L_107b43da;
  /* 107b43c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b43c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107b43cb push ecx */
  push32((uint32_t)(ECX));
  /* 107b43cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b43cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107b43d1 push eax */
  push32((uint32_t)(EAX));
  /* 107b43d2 call 0x107a6f60 */
  push32(0x107b43d7u); f_107a6f60();
  /* 107b43d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107b43da:;
  /* 107b43da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107b43dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b43e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107b43e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b43e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b43e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107b43ec jmp 0x107b438b */
  goto L_107b438b;
L_107b43ee:;
  /* 107b43ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107b43f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107b43f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107b43fa:;
  /* 107b43fa mov esp, ebp */
  ESP = (EBP);
  /* 107b43fc pop ebp */
  EBP = (pop32());
  /* 107b43fd ret  */
  ESPCHK(0x107b4310u, _esp0);
  ESP += 4; return;
}

/* FUN_10014400 @ 0x107b4400 (237 bytes, 81 insns) */
void f_107b4400(void) {
  FTRACE(0x107b4400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b4400 push ebp */
  push32((uint32_t)(EBP));
  /* 107b4401 mov ebp, esp */
  EBP = (ESP);
  /* 107b4403 push ecx */
  push32((uint32_t)(ECX));
  /* 107b4404 cmp dword ptr [0x107d0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b440b jne 0x107b4422 */
  if (!C.zf) goto L_107b4422;
  /* 107b440d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107b4410 push eax */
  push32((uint32_t)(EAX));
  /* 107b4411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4414 push ecx */
  push32((uint32_t)(ECX));
  /* 107b4415 call 0x107b4500 */
  push32(0x107b441au); f_107b4500();
  /* 107b441a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b441d jmp 0x107b44e9 */
  goto L_107b44e9;
L_107b4422:;
  /* 107b4422 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107b4424 call 0x107a79b0 */
  push32(0x107b4429u); f_107a79b0();
  /* 107b4429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b442c jmp 0x107b4437 */
  goto L_107b4437;
L_107b442e:;
  /* 107b442e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4431 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4434 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107b4437:;
  /* 107b4437 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b443a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 107b443e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 107b4442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b4445 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b444b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107b444d je 0x107b44cb */
  if (C.zf) goto L_107b44cb;
  /* 107b444f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b4452 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b4457 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b4459 mov cl, byte ptr [eax + 0x107d0da1] */
  CL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107b445f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107b4462 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b4464 je 0x107b44b6 */
  if (C.zf) goto L_107b44b6;
  /* 107b4466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4469 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b446c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107b446f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4472 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b4474 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b4476 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107b4478 jne 0x107b4488 */
  if (!C.zf) goto L_107b4488;
  /* 107b447a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107b447c call 0x107a7a50 */
  push32(0x107b4481u); f_107a7a50();
  /* 107b4481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b4486 jmp 0x107b44e9 */
  goto L_107b44e9;
L_107b4488:;
  /* 107b4488 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b448b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b4491 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107b4494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b4497 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107b4499 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107b449b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107b449d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b44a0 jne 0x107b44b4 */
  if (!C.zf) goto L_107b44b4;
  /* 107b44a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107b44a4 call 0x107a7a50 */
  push32(0x107b44a9u); f_107a7a50();
  /* 107b44a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b44ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b44af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107b44b2 jmp 0x107b44e9 */
  goto L_107b44e9;
L_107b44b4:;
  /* 107b44b4 jmp 0x107b44c6 */
  goto L_107b44c6;
L_107b44b6:;
  /* 107b44b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b44b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107b44bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b44c2 jne 0x107b44c6 */
  if (!C.zf) goto L_107b44c6;
  /* 107b44c4 jmp 0x107b44cb */
  goto L_107b44cb;
L_107b44c6:;
  /* 107b44c6 jmp 0x107b442e */
  goto L_107b442e;
L_107b44cb:;
  /* 107b44cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107b44cd call 0x107a7a50 */
  push32(0x107b44d2u); f_107a7a50();
  /* 107b44d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107b44d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107b44d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b44dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107b44e0 jne 0x107b44e7 */
  if (!C.zf) goto L_107b44e7;
  /* 107b44e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107b44e5 jmp 0x107b44e9 */
  goto L_107b44e9;
L_107b44e7:;
  /* 107b44e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107b44e9:;
  /* 107b44e9 mov esp, ebp */
  ESP = (EBP);
  /* 107b44eb pop ebp */
  EBP = (pop32());
  /* 107b44ec ret  */
  ESPCHK(0x107b4400u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x107b4500 (193 bytes, 87 insns) */
void f_107b4500(void) {
  FTRACE(0x107b4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b4500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b4502 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 107b4506 push ebx */
  push32((uint32_t)(EBX));
  /* 107b4507 mov ebx, eax */
  EBX = (EAX);
  /* 107b4509 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107b450c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 107b4510 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107b4516 je 0x107b452b */
  if (C.zf) goto L_107b452b;
L_107b4518:;
  /* 107b4518 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 107b451a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107b451b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b451d je 0x107b44f0 */
  if (C.zf) { jmp_ind(0x107b44f0u); return; }
  /* 107b451f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 107b4521 je 0x107b4574 */
  if (C.zf) goto L_107b4574;
  /* 107b4523 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107b4529 jne 0x107b4518 */
  if (!C.zf) goto L_107b4518;
L_107b452b:;
  /* 107b452b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 107b452d push edi */
  push32((uint32_t)(EDI));
  /* 107b452e mov eax, ebx */
  EAX = (EBX);
  /* 107b4530 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 107b4533 push esi */
  push32((uint32_t)(ESI));
  /* 107b4534 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_107b4536:;
  /* 107b4536 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 107b4538 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 107b453d mov eax, ecx */
  EAX = (ECX);
  /* 107b453f mov esi, edi */
  ESI = (EDI);
  /* 107b4541 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 107b4543 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4545 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4547 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107b454a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107b454d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 107b454f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 107b4551 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107b4554 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 107b455a jne 0x107b4578 */
  if (!C.zf) goto L_107b4578;
  /* 107b455c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 107b4561 je 0x107b4536 */
  if (C.zf) goto L_107b4536;
  /* 107b4563 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 107b4568 jne 0x107b4572 */
  if (!C.zf) goto L_107b4572;
  /* 107b456a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 107b4570 jne 0x107b4536 */
  if (!C.zf) goto L_107b4536;
L_107b4572:;
  /* 107b4572 pop esi */
  ESI = (pop32());
  /* 107b4573 pop edi */
  EDI = (pop32());
L_107b4574:;
  /* 107b4574 pop ebx */
  EBX = (pop32());
  /* 107b4575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107b4577 ret  */
  ESPCHK(0x107b4500u, _esp0);
  ESP += 4; return;
L_107b4578:;
  /* 107b4578 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 107b457b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b457d je 0x107b45b5 */
  if (C.zf) goto L_107b45b5;
  /* 107b457f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107b4581 je 0x107b4572 */
  if (C.zf) goto L_107b4572;
  /* 107b4583 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b4585 je 0x107b45ae */
  if (C.zf) goto L_107b45ae;
  /* 107b4587 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107b4589 je 0x107b4572 */
  if (C.zf) goto L_107b4572;
  /* 107b458b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107b458e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b4590 je 0x107b45a7 */
  if (C.zf) goto L_107b45a7;
  /* 107b4592 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107b4594 je 0x107b4572 */
  if (C.zf) goto L_107b4572;
  /* 107b4596 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107b4598 je 0x107b45a0 */
  if (C.zf) goto L_107b45a0;
  /* 107b459a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107b459c je 0x107b4572 */
  if (C.zf) goto L_107b4572;
  /* 107b459e jmp 0x107b4536 */
  goto L_107b4536;
L_107b45a0:;
  /* 107b45a0 pop esi */
  ESI = (pop32());
  /* 107b45a1 pop edi */
  EDI = (pop32());
  /* 107b45a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 107b45a5 pop ebx */
  EBX = (pop32());
  /* 107b45a6 ret  */
  ESPCHK(0x107b4500u, _esp0);
  ESP += 4; return;
L_107b45a7:;
  /* 107b45a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 107b45aa pop esi */
  ESI = (pop32());
  /* 107b45ab pop edi */
  EDI = (pop32());
  /* 107b45ac pop ebx */
  EBX = (pop32());
  /* 107b45ad ret  */
  ESPCHK(0x107b4500u, _esp0);
  ESP += 4; return;
L_107b45ae:;
  /* 107b45ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 107b45b1 pop esi */
  ESI = (pop32());
  /* 107b45b2 pop edi */
  EDI = (pop32());
  /* 107b45b3 pop ebx */
  EBX = (pop32());
  /* 107b45b4 ret  */
  ESPCHK(0x107b4500u, _esp0);
  ESP += 4; return;
L_107b45b5:;
  /* 107b45b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 107b45b8 pop esi */
  ESI = (pop32());
  /* 107b45b9 pop edi */
  EDI = (pop32());
  /* 107b45ba pop ebx */
  EBX = (pop32());
  /* 107b45bb ret  */
  ESPCHK(0x107b4500u, _esp0);
  ESP += 4; return;
  /* 107b45bc jmp dword ptr [0x107d22e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107d22e0)))); return;
}

/* RtlUnwind @ 0x107b470c (6 bytes, 1 insns) */
void f_107b470c(void) {
  FTRACE(0x107b470cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107b470c jmp dword ptr [0x107d22b4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107d22b4)))); return;
}

